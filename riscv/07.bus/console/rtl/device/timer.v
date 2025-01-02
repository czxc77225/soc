module timer #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input wire clk_i,
    input wire rst_i,
    
    input wire req_i,
    input wire we_i,
    input wire [ADDR_WIDTH-1:0] addr_i,
    input wire [DATA_WIDTH-1:0] wdata_i,
    
    output reg [DATA_WIDTH-1:0] rdata_o,
    output reg timer_interrupt_o
);

    // 定義 Timer 寄存器地址
    localparam TIMER_CTRL_ADDR = 32'h00000004;
    localparam TIMER_COUNT_ADDR = 32'h00000008;

    // Timer 控制寄存器
    reg timer_enable;
    // Timer 計數寄存器
    reg [31:0] timer_count;

    // 計時中斷觸發條件
    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            timer_enable <= 1'b0;
            timer_count <= 32'd0;
            timer_interrupt_o <= 1'b0;
        end else begin
            if (timer_enable) begin
                timer_count <= timer_count + 1;
                if (timer_count == 32'd1000000) begin
                    timer_interrupt_o <= 1'b1;
                    timer_count <= 32'd0; // 重置計數
                end else begin
                    timer_interrupt_o <= 1'b0;
                end
            end
        end
    end

    // 寄存器讀寫邏輯
    always @(*) begin
        rdata_o = 32'd0; // 默認值
        if (req_i) begin
            if (addr_i == TIMER_CTRL_ADDR) begin
                rdata_o = {31'd0, timer_enable};
            end else if (addr_i == TIMER_COUNT_ADDR) begin
                rdata_o = timer_count;
            end
        end
    end

    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            timer_enable <= 1'b0;
        end else begin
            if (req_i && we_i) begin
                if (addr_i == TIMER_CTRL_ADDR) begin
                    timer_enable <= wdata_i[0];
                end else if (addr_i == TIMER_COUNT_ADDR) begin
                    timer_count <= wdata_i;
                end
            end
        end
    end

endmodule
