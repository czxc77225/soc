module multi_top(
    input wire clk_i,
    input wire rst_i
);

    // A 系統與 B 系統的 UART 線
    wire A_uart_rx_i;
    wire A_uart_tx_o;
    wire B_uart_rx_i;
    wire B_uart_tx_o;

    // 例化 系統A (test_top)
    test_top systemA (
        .clk_i     (clk_i),
        .rst_i     (rst_i),

        // A 的UART
        .uart_rx_i (A_uart_rx_i),
        .uart_tx_o (A_uart_tx_o),

        // 如果 test_top 裡面還有其他輸出，如 halt_o, 就一併連上
        .halt_o()
    );

    // 例化 系統B (test_top)
    test_top systemB (
        .clk_i     (clk_i),
        .rst_i     (rst_i),

        // B 的UART
        .uart_rx_i (B_uart_rx_i),
        .uart_tx_o (B_uart_tx_o),

        // 同樣其他連線
        .halt_o()
    );

    // 將 A/B 的 UART 交叉連線
    assign A_uart_rx_i = B_uart_tx_o;
    assign B_uart_rx_i = A_uart_tx_o;

endmodule
