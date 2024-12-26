module div#(parameter XLEN = 32)
(
    input                   clk_i,
    input                   rst_i,
    input  [XLEN-1 : 0]     a_i,  // 輸入被除數
    input  [XLEN-1 : 0]     b_i,  // 輸入除數
    input                   req_i,
    input wire              is_q_i,
    output reg [XLEN-1 : 0] result_o,
    output reg              ready_o
);

wire is_a_zero, is_b_zero;

assign is_a_zero = (a_i == 32'b0);  //看a b是否為零
assign is_b_zero = (b_i == 32'b0);

wire [XLEN-1 : 0] op_a, op_b;

assign op_a = a_i;
assign op_b = b_i;

wire              is_calc_done;
reg  [XLEN-1 : 0] reg32;
reg  [XLEN*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]     cnt;        //用來紀錄運算到第幾位

// For the slow shift-add binary multiplier.
assign is_calc_done = ~|cnt;

wire [XLEN-1 : 0] quotient, remainder;
assign quotient = result[31 : 0];   //商
assign remainder = result[64 : 33];  //餘數

// ================================================================================
// Finite State Machine
//
localparam S_IDLE        = 3'b000,    //閒置狀態
           S_CALC        = 3'b001,    //計算狀態
           S_DONE        = 3'b011;    //完成狀態
 
reg [2 : 0] S, S_next;

always @(posedge clk_i)
begin
    if (rst_i | ~req_i)
        S <= S_IDLE;
    else
        S <= S_next;
end

always @(*)
begin
    case (S)
        S_IDLE:
            S_next = (req_i)? (is_a_zero | is_b_zero)? S_DONE : S_CALC : S_IDLE;  //當 req_i 為1且輸入皆不為零時就進入計算狀態
        S_CALC:                                                                   //當 req_i 為1且輸入有一個為零時進入完成狀態
            S_next = (is_calc_done)? S_DONE : S_CALC;  //觀察計算有沒有完成         //當 req_i 為0時進入閒置狀態
        S_DONE:
            S_next = S_IDLE;  //完成的下一步就是閒置
        default:
            S_next = S_IDLE;  //如果出狀況就停止
    endcase
end

wire div_sub = (result[63: 32] >= reg32);  //判斷當前的餘數

wire [32 : 0] sub_tmp = result[63: 32] - reg32;  //新的餘數

wire [64 : 0] result_tmp = {sub_tmp, result[31: 0]};

always @(posedge clk_i)
begin
    if ( (S == S_IDLE) & req_i)
    begin
        if (is_b_zero)
        begin                   // divide by zero, generate special value
            result[64: 33] <= a_i;
            result[32]  <= 1'b0;
            result[31: 0] <= {32{1'b1}};
        end
        else
        begin
            cnt <= 'd32;   // 初始化計數器為32
            reg32 <= op_b;
            result <= {1'b0, 32'b0, op_a};  // ext_bit | remainder | quotient
            // result[64] = 0 (額外位元)
            // result[63:32] = 0 (初始餘數)
            // result[31:0] = op_a (被除數)
        end
    end
    else if (S == S_CALC)
    begin
        cnt <= cnt - 'd1;   //計算的位數到下一位
        // slow divider: shift left
        result <= (div_sub)? {result_tmp[63 : 0], 1'b1} : {result[63 : 0], 1'b0};  //往左移一位
    end
end

// ================================================================================
// Output signals
//
always @(posedge clk_i)
begin
    if (S == S_DONE)
        ready_o <= 1;
    else
        ready_o <= 0;
end

always @(posedge clk_i)
begin
    if (S == S_DONE) begin
        if (is_q_i)
            result_o <= quotient;   //輸出商
        else
            result_o <= remainder;  //輸出餘數
    end else begin
        result_o <= result_o;
    end
end

endmodule
