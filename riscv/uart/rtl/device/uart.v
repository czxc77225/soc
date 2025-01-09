`include "defines.v"  // 可能包含 `DATA_WIDTH`, `RESET_ENABLE` 等定義

module uart #(
    //======== 使用參數 (parameter) 設定系統頻率與 UART 鮑率 ========//
    parameter integer SYS_FREQ    = 50_000_000,   // 系統時鐘頻率 (Hz)
    parameter integer BAUD_RATE   = 115200,       // UART 鮑率 (bps)
    parameter integer ECHO_ENABLE = 0              // Echo 功能啟用：1=啟用, 0=禁用
)(
    //==== 系統訊號 ====//
    input  wire                   clk_i,        // 系統時鐘
    input  wire                   rst_i,        // 系統同步或非同步復位

    //==== 總線介面 (memory mapped) ====//
    input  wire                   req_i,        // bus request
    input  wire                   we_i,         // write enable: 1=write, 0=read
    input  wire [`DATA_WIDTH-1:0] addr_i,       // bus address
    input  wire [`DATA_WIDTH-1:0] data_i,       // write data
    output reg  [`DATA_WIDTH-1:0] data_o,       // read data

    //==== UART 實體介面 ====//
    input  wire                   uart_rx_i,    // 外部 RX pin
    output reg                    uart_tx_o,    // 外部 TX pin

    //==== 中斷 ====//
    output reg                    uart_irq_o    // UART interrupt
);

    //========================================================================
    // 1) Address Mapping: 定義 UART 內部寄存器地址
    //========================================================================
    localparam UART_CTRL_ADDR      = 16'h0000;   // [R/W] 控制寄存器
    localparam UART_STATUS_ADDR    = 16'h0004;   // [R  ] 狀態寄存器
    localparam UART_TX_ADDR        = 16'h0008;   // [ W ] 傳送資料寄存器 (TX)
    localparam UART_RX_ADDR        = 16'h000C;   // [ R ] 接收資料寄存器 (RX)

    // 從 32-bit addr_i 中擷取低 16 bits 作為 UART 內部寄存器地址
    wire [15:0] reg_addr = addr_i[15:0];

    //========================================================================
    // 2) 內部暫存器宣告
    //========================================================================
    reg [7:0] uart_ctrl;    // 控制寄存器 (bit0: TX中斷啟用, bit1: RX中斷啟用, ...)
    reg [7:0] uart_status;  // 狀態寄存器 (bit0: TX忙, bit1: RX已接收, bit2: TX完中斷觸發, ...)
    reg [7:0] tx_buffer;    // 送出前暫存器 (當CPU寫入 UART_TX_ADDR時暫存)
    reg [7:0] rx_buffer;    // 接收完成暫存器 (當成功收到1 byte後放這裡)

    //========================================================================
    // 3) 波特率產生器 (baud rate generator)
    //========================================================================
    // 為了簡化，這裡使用「一個baud clock = 1個bit時間」的單取樣模式。
    // 若要更精準可用16倍取樣 (over-sampling)。此處僅示範概念。
    
    // baud_div = (SYS_FREQ / BAUD_RATE) - 1
    localparam integer BAUD_DIV = (SYS_FREQ / BAUD_RATE) - 1;

    reg [$clog2(BAUD_DIV):0] baud_cnt;   // 計數器
    reg                      baud_tick;  // 每次倒數完產生一個tick

    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            baud_cnt  <= 0;
            baud_tick <= 1'b0;
        end else begin
            if (baud_cnt == BAUD_DIV[$clog2(BAUD_DIV):0]) begin
                baud_cnt  <= 0;
                baud_tick <= 1'b1;
            end else begin
                baud_cnt  <= baud_cnt + 1;
                baud_tick <= 1'b0;
            end
        end
    end

    //========================================================================
    // 4) UART 傳送 (TX) 狀態機
    //========================================================================
    localparam [1:0] TX_IDLE  = 2'd0,
                     TX_START = 2'd1,
                     TX_DATA  = 2'd2,
                     TX_STOP  = 2'd3;

    reg [1:0]  tx_state;
    reg [2:0]  tx_bit_cnt;      // 傳送位元計數 (0~7)
    reg [7:0]  tx_shift_reg;    // TX 移位暫存器
    reg        tx_busy;         // 代表是否正處於傳送中

    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            tx_state     <= TX_IDLE;
            tx_bit_cnt   <= 3'd0;
            tx_shift_reg <= 8'd0;
            tx_busy      <= 1'b0;
            uart_tx_o    <= 1'b1;  // UART 空閒狀態，TX 線維持高電平
        end else begin
            if (baud_tick) begin
                case(tx_state)
                    TX_IDLE: begin
                        // 若 CPU 有寫入 TX 寄存器，且 CPU 想開始發送
                        // 可由程式決定何時將 tx_busy 置 1，
                        // 這裡簡化：只要 tx_busy=0，而上層想送時，就開始傳。
                        if (tx_busy == 1'b1) begin
                            // 進入起始位
                            tx_state     <= TX_START;
                            tx_shift_reg <= tx_buffer; // 將待發送的資料載入
                            uart_tx_o    <= 1'b0;      // start bit = 0
                        end
                    end

                    TX_START: begin
                        // 起始位結束後，進入資料位傳送
                        tx_state   <= TX_DATA;
                        tx_bit_cnt <= 3'd0;
                    end

                    TX_DATA: begin
                        // 送出 shift_reg[0]，之後移位
                        uart_tx_o     <= tx_shift_reg[0];
                        tx_shift_reg  <= {1'b0, tx_shift_reg[7:1]};
                        if (tx_bit_cnt == 3'd7) begin
                            tx_state   <= TX_STOP;  // 最後一個資料位後進 stop bit
                        end else begin
                            tx_bit_cnt <= tx_bit_cnt + 1;
                        end
                    end

                    TX_STOP: begin
                        // 送出停止位 (一般為高電平 1 bit)
                        uart_tx_o <= 1'b1;
                        // 傳送結束，回到IDLE
                        tx_state   <= TX_IDLE;
                        tx_busy    <= 1'b0;
                        // 可在此同時更新狀態寄存器或觸發中斷
                        // 例如：uart_status bit2 = 1 表示「TX完成」。
                        uart_status[2] <= 1'b1; // TX done flag
                    end

                endcase
            end
        end
    end

    //========================================================================
    // 5) UART 接收 (RX) 狀態機
    //========================================================================
    localparam [1:0] RX_IDLE  = 2'd0,
                     RX_START = 2'd1,
                     RX_DATA  = 2'd2,
                     RX_STOP  = 2'd3;

    reg [1:0]  rx_state;
    reg [2:0]  rx_bit_cnt;
    reg [7:0]  rx_shift_reg;
    reg        rx_done_flag; // 接收完成後暫存旗標，給下方 always 用

    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            rx_state     <= RX_IDLE;
            rx_bit_cnt   <= 3'd0;
            rx_shift_reg <= 8'd0;
            rx_done_flag <= 1'b0;
        end else begin
            rx_done_flag <= 1'b0;  // default: 每個 clock 拉回 0

            if (baud_tick) begin
                case(rx_state)
                    RX_IDLE: begin
                        // 檢測到起始位 (uart_rx_i == 0) 表示可能開始接收
                        if (uart_rx_i == 1'b0) begin
                            rx_state   <= RX_START;
                        end
                    end

                    RX_START: begin
                        // 起始位採樣結束後，進入接收資料
                        rx_state   <= RX_DATA;
                        rx_bit_cnt <= 3'd0;
                    end

                    RX_DATA: begin
                        // 將資料位 shift 進來 (LSB first)
                        rx_shift_reg  <= {uart_rx_i, rx_shift_reg[7:1]};
                        if (rx_bit_cnt == 3'd7) begin
                            rx_state <= RX_STOP;
                        end else begin
                            rx_bit_cnt <= rx_bit_cnt + 1;
                        end
                    end

                    RX_STOP: begin
                        // 檢查停止位(一般預期 = 1)
                        // 此處簡化不判定錯誤。
                        // 接收完成
                        rx_state     <= RX_IDLE;
                        rx_done_flag <= 1'b1;  // 告知外部 "RX 收到1 byte"

                        // [新增] 如果啟用了 Echo，則開始發送接收到的資料
                        if (ECHO_ENABLE) begin
                            tx_buffer   <= rx_shift_reg; // 將接收到的資料放入 TX buffer
                            tx_busy     <= 1'b1;          // 啟動傳送
                            uart_status[2] <= 1'b0;      // 清除 TX 完成 flag
                        end
                    end

                endcase
            end
        end
    end

    // 當 rx_done_flag=1 時，將接收的 byte 放到 rx_buffer
    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            rx_buffer <= 8'b0;
        end else if (rx_done_flag) begin
            rx_buffer <= rx_shift_reg;
        end
    end

    //========================================================================
    // 6) 寄存器讀寫：CPU / BUS 介面
    //========================================================================
    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            uart_ctrl   <= 8'b0;
            uart_status <= 8'b0;
            tx_buffer   <= 8'b0;
        end else begin
            //--- 狀態寄存器動態更新 ---//
            // bit0: TX busy
            uart_status[0] <= tx_busy;
            // bit1: RX ready (代表rx_buffer內有新資料)
            //       一旦CPU讀走，就可以清為0
            if (rx_done_flag)
                uart_status[1] <= 1'b1;  // 有新資料
            // bit2: TX done flag (前面TX_STOP時設定)
            //       也許讀狀態時自動清除，或要寫某寄存器清除
            // bit3: RX done flag (如果有需要)

            //--- BUS 讀寫 ---//
            if (req_i) begin
                if (we_i) begin
                    //=============================
                    // Write 操作
                    //=============================
                    case(reg_addr)
                        UART_CTRL_ADDR: begin
                            uart_ctrl <= data_i[7:0];
                        end

                        UART_TX_ADDR: begin
                            // CPU 寫入要發送的 byte
                            tx_buffer <= data_i[7:0];
                            // 置 tx_busy=1，表示要發送
                            // （簡化做法：只要寫入 TX_ADDR 就馬上開始送）
                            tx_busy    <= 1'b1;
                            // 清除TX完成flag
                            uart_status[2] <= 1'b0;
                        end

                        // 若要清除某些狀態或中斷旗標，可再定義額外位址
                        // e.g. UART_STATUS_ADDR: ...
                    endcase

                end else begin
                    //=============================
                    // Read 操作
                    //=============================
                    case(reg_addr)
                        UART_CTRL_ADDR: begin
                            data_o <= {24'b0, uart_ctrl};
                        end
                        UART_STATUS_ADDR: begin
                            data_o <= {24'b0, uart_status};
                            // 若想要在CPU讀取後清除bit1(RX ready)，可在這裡清除
                            // 以免CPU重複讀同樣資料
                            uart_status[1] <= 1'b0;
                        end
                        UART_RX_ADDR: begin
                            data_o <= {24'b0, rx_buffer};
                        end
                        default: begin
                            data_o <= 32'b0;
                        end
                    endcase
                end
            end
        end
    end

    //========================================================================
    // 7) 中斷邏輯 (uart_irq_o)
    //========================================================================
    // 簡單範例: 
    //  - 當 rx_done_flag=1 且 (uart_ctrl[1]==1) 表示 RX 中斷使能，就拉高中斷
    //  - 當 TX 完成 (uart_status[2]==1) 且 (uart_ctrl[0]==1) 表示 TX 中斷使能，就拉高中斷
    // 可根據更細的條件實作
    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i == `RESET_ENABLE) begin
            uart_irq_o <= 1'b0;
        end else begin
            // 預設先拉低
            uart_irq_o <= 1'b0;

            // RX interrupt
            if (rx_done_flag && uart_ctrl[1]) begin
                uart_irq_o <= 1'b1;
            end

            // TX interrupt
            //   在 TX_STOP 結束時已經 set uart_status[2]，可以再搭配 ctrl[0] 觸發
            if ((uart_status[2] == 1'b1) && (uart_ctrl[0] == 1'b1)) begin
                uart_irq_o <= 1'b1;
            end
        end
    end

endmodule
