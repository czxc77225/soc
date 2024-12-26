module mul#(parameter XLEN = 32)
(
    input wire              clk_i,
    input wire              rst_i,
    input wire[XLEN-1 : 0]  a_i, //被乘數
    input wire[XLEN-1 : 0]  b_i, //乘數
    input wire              req_i,
    output reg             ready_o,
    output reg[XLEN*2-1 : 0]  result_o
);


wire is_a_zero, is_b_zero;

assign is_a_zero = ~(|a_i); //確認a是否為零
assign is_b_zero = ~(|b_i); //確認b是否為零

wire [XLEN-1 : 0] op_a, op_b;

assign op_a = a_i;
assign op_b = b_i;

wire              is_calc_done;
reg  [XLEN-1 : 0] reg32;
reg  [XLEN*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]     cnt;  //用來紀錄運算到第幾位

// For the slow shift-add binary multiplier.
assign is_calc_done = ~|cnt;

// ================================================================================
// Finite State Machine
//
localparam           S_IDLE        = 3'b000; //閒置狀態
localparam           S_CALC        = 3'b001; //計算狀態
localparam           S_DONE        = 3'b011; //完成狀態
reg [2 : 0] S, S_nxt; //現在的狀態和下一次的狀態

always @(posedge clk_i)
begin
    if (rst_i|~req_i)
        S <= S_IDLE;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        S_IDLE:
            S_nxt = (is_a_zero | is_b_zero)? S_DONE : S_CALC;  //如果a或是b為零就停止  都不為零就開始計算
        S_CALC:
            S_nxt = (is_calc_done)? S_DONE : S_CALC;  //計算時如果發現計算完成就停止
        S_DONE:
            S_nxt = S_IDLE;  //完成的下一步就是閒置停止
        default:
            S_nxt = S_IDLE;  //如果出狀況就停止
    endcase
end

// ================================================================================
// Computation
//
wire mul_add = result[0]; //看最後一位是1或0，用來決定這一輪要不要加

wire [XLEN-1 : 0] adder_opa, adder_opb; 
assign adder_opa = reg32; //把被乘數放進a
assign adder_opb = result[XLEN*2-1: XLEN];  //把上一次結果的左半部放進b

wire [XLEN : 0] adder_tmp = adder_opa + adder_opb;  //a和b相加
wire [XLEN*2 : 0] result_tmp = {adder_tmp, result[31: 0]}; //結果左半部紀錄a和b相加  右半部紀錄上一次結果的右半部

always @(posedge clk_i)
begin
    if (S == S_IDLE && req_i==1'b1)  //閒置或者開始的時候
    begin
      if (is_a_zero | is_b_zero)
      begin
          result <= 65'b0;   //如果a或b為零 則結果為零
      end
      else
      begin
          cnt <= 'd31;
          reg32 <= op_a;
          result <= {1'b0, 32'b0, op_b};  // ext_bit | product  //第一次要把B填進RESULT的右邊
      end
    end
    else if (S == S_CALC)
    begin
        cnt <= cnt - 'd1; //計算的位數到下一位
        // slow multiplier: shift right
        result <= (mul_add)? {1'b0, result_tmp[64 : 1]} : {1'b0, result[64 : 1]};  //決定要不要這一次計算的結果 且丟掉最後一位(往右移一位)
    end
end

// ================================================================================
// Output signals
//
always @(posedge clk_i)  //判斷計算有沒有完成
begin
    if (S == S_DONE) begin
        result_o <=  result[XLEN*2-1:0];
        ready_o <= 1'b1;
    end else begin
        result_o <= result_o;
        ready_o <= 1'b0;
    end
end

endmodule