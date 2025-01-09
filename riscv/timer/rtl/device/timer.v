`include "defines.v"  // 導入可能包含DATA_WIDTH、DATA_WIDTH2、RESET_ENABLE、CHIP_ENABLE等宏定義的檔案

module timer
(
    //==== 輸入端口 ====
    input wire                       clk_i,   // 時鐘訊號
    input wire                       rst_i,   // 重置信號

    input wire                       req_i,   // 請求信號：若為高，表示CPU或Bus要讀/寫此Timer模組
    input wire                       we_i,    // 寫使能信號：與req_i一起使用，為高表示寫操作，低表示讀操作
    input wire[`DATA_WIDTH-1 : 0]    addr_i,  // 地址匯流排：指定要訪問的寄存器(如mtime、msip、mtimecmp)
    input wire[`DATA_WIDTH-1 : 0]    data_i,  // 寫資料匯流排：寫入Timer模組的資料

    //==== 輸出端口 ====
    output reg[`DATA_WIDTH-1 : 0]    data_o,  // 讀資料匯流排：從Timer模組讀出的資料

    //==== 給 CSR (Control and Status Register) 或其他模組的訊號 ====
    output reg                       timer_irq_o,    // Timer 中斷輸出訊號
    output reg                       software_irq_o   // Software 中斷輸出訊號(對應 msip)
);

////////////////////////////////////////////////////////////////////////////////
//   地方參數 (Localparam) 與局部常數
////////////////////////////////////////////////////////////////////////////////
localparam MTIMECMP_BASE = 16'h4000;   // mtimecmp 寄存器的基底地址 (低16位)
localparam MSIP_BASE     = 16'h0;      // msip 寄存器的基底地址 (低16位)
localparam TIME_ADDR     = 16'hBFF8;   // mtime 寄存器的基底地址 (低16位)

// 從輸入的 addr_i 只取低16位，因為該Timer模組只使用16位做地址解碼
wire [15:0] raddr = addr_i[15:0];

////////////////////////////////////////////////////////////////////////////////
//   記憶體 / 寄存器宣告
////////////////////////////////////////////////////////////////////////////////

// 兩個32位的暫存器組成64位 mtime (低位放在 mtime_mem[0], 高位放在 mtime_mem[1])
reg  [`DATA_WIDTH-1 : 0] mtime_mem[0:1];    
// 兩個32位的暫存器組成64位 mtimecmp (低位放在 mtimecmp_mem[0], 高位放在 mtimecmp_mem[1])
reg  [`DATA_WIDTH-1 : 0] mtimecmp_mem[0:1];
// 單一個32位暫存器存放 msip(其實只用到最低bit即可，但這裡以32位存放)
reg  [`DATA_WIDTH-1 : 0] msip_mem;         

// 拼接成完整的64位 mtime, mtimecmp, msip
// `DATA_WIDTH2` 通常表示 64 (如果DATA_WIDTH=32，DATA_WIDTH2=64)
wire [`DATA_WIDTH2-1 : 0] mtime    = {mtime_mem[1], mtime_mem[0]};
wire [`DATA_WIDTH2-1 : 0] mtimecmp = {mtimecmp_mem[1], mtimecmp_mem[0]};
// msip 通常只需最低 bit，但這裡擴展成64位 (高32位全0，低32位為msip_mem)
wire [`DATA_WIDTH2-1 : 0] msip     = {32'b0, msip_mem};

// 當 mtime_mem[0] = 0xFFFF_FFFF 時，下一次加 1 會發生進位(carry)，需要帶到高位 mtime_mem[1]
wire carry = (mtime_mem[0] == 32'hFFFF_FFFF);

////////////////////////////////////////////////////////////////////////////////
//   地址解碼 (Address Decoding)
////////////////////////////////////////////////////////////////////////////////
// 對應 mtime 的低位
wire is_time_addr0       = (raddr == TIME_ADDR);
// 對應 mtime 的高位
wire is_time_addr1       = (raddr == TIME_ADDR + 16'h4);
// 對應 mtimecmp 的低位
wire is_mtimecmp_addr0   = (raddr == MTIMECMP_BASE);
// 對應 mtimecmp 的高位
wire is_mtimecmp_addr1   = (raddr == MTIMECMP_BASE + 16'h4);
// 對應 msip
wire is_msip_addr        = (raddr == MSIP_BASE);

////////////////////////////////////////////////////////////////////////////////
//   寄存器寫入 + mtime 自增邏輯 (在時鐘上升沿執行)
////////////////////////////////////////////////////////////////////////////////
always @(posedge clk_i)
begin
    // 異步或同步重置(視`RESET_ENABLE`定義而定)，將所有暫存器歸零
    if (rst_i == `RESET_ENABLE)
    begin
        mtime_mem[0]     <= 32'b0;
        mtime_mem[1]     <= 32'b0;
        mtimecmp_mem[0]  <= 32'h0;
        mtimecmp_mem[1]  <= 32'h0;
        msip_mem         <= 32'b0;
    end
    // 如果沒重置且 we_i 為高 => 寫操作
    else if (we_i)
    begin
        // 若地址解碼是 msip => 寫入 msip_mem
        if (is_msip_addr)
            msip_mem <= data_i;
        // 若地址解碼是 mtimecmp 的低位 => 寫入 mtimecmp_mem[0]
        else if (is_mtimecmp_addr0)
            mtimecmp_mem[0] <= data_i;
        // 若地址解碼是 mtimecmp 的高位 => 寫入 mtimecmp_mem[1]
        else if (is_mtimecmp_addr1)
            mtimecmp_mem[1] <= data_i;
        // 注意：這裡沒有對 mtime 直接進行寫入 (一般 RISC-V規範並不鼓勵軟體直接寫mtime)
    end
    else
    begin
        // 如果沒有寫操作，則自動進行 mtime 計數 (每個時鐘 +1)
        // 低位加1
        mtime_mem[0] <= mtime_mem[0] + 32'b1;
        // 高位在低位發生進位(carry)時加1
        mtime_mem[1] <= mtime_mem[1] + {31'b0, carry};
    end
end

////////////////////////////////////////////////////////////////////////////////
//   讀取邏輯 (組合邏輯) - 將對應暫存器的值送到 data_o
////////////////////////////////////////////////////////////////////////////////
always @(*)
begin
    // 若有讀請求(req_i==`CHIP_ENABLE)
    if (req_i == `CHIP_ENABLE)
    begin
        if (is_msip_addr)
            data_o = msip_mem;
        else if (is_mtimecmp_addr0)
            data_o = mtimecmp_mem[0];
        else if (is_mtimecmp_addr1)
            data_o = mtimecmp_mem[1];
        else if (is_time_addr0)
            data_o = mtime_mem[0];
        else if (is_time_addr1)
            data_o = mtime_mem[1];
        else
            data_o = `ZERO;  // 若地址不在上述範圍，預設回傳 0
    end
    else
        // 若沒有讀請求，資料輸出預設為0 (或根據需求設置)
        data_o = `ZERO;
end

////////////////////////////////////////////////////////////////////////////////
//   中斷判定邏輯
////////////////////////////////////////////////////////////////////////////////
// 計算 (mtime - mtimecmp)，得到 time_interval
wire [63:0] time_interval = (mtime - mtimecmp);
// 只要 time_interval >= 0 (或 time_interval[63] == 0 表示無負號) => 代表 mtime >= mtimecmp
wire is_timeout = (time_interval[63] == 1'b0);
// 若 mtimecmp = 0，表示未設定，比較無意義(或認為不啟用中斷)
wire is_mtimecmp_nonzero = (mtimecmp == 64'h0);

// 當 mtime >= mtimecmp 且 mtimecmp != 0，則觸發 timer_irq_o
assign timer_irq_o = (is_timeout & ~is_mtimecmp_nonzero);
// software_irq_o 則只要 msip_mem 有任何一個位元為1 (| msip => 只要 msip為非0) 就觸發軟中斷
assign software_irq_o = | msip;

endmodule // clint
