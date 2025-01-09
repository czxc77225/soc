`include "defines.v"

module test_top(
    input  wire          clk_i,
    input  wire          rst_i,

    output reg           halt_o
);

   //======================================================================
   // 1) 參數 & 裝置編號
   //======================================================================
   // [MOD] 原本 NrDevices=3 (或 4)，現在要新增 2 個 UART 裝置 -> 改為 5
   localparam int NrDevices = 5;
   localparam int NrHosts   = 1;
   localparam int MemSize   = 32'h200000;
   localparam int MemAddrWidth = 21;

   // 既有裝置編號 (與你原程式相同)
   `define HOST_CORE_PORT 0
   `define DEV_CLINT      0
   `define DEV_RAM        1
   `define DEV_CONSOLE    2

   // [MOD] 新增兩個 UART 裝置編號
   `define DEV_UART0      3
   `define DEV_UART1      4

   //======================================================================
   // 2) 宣告 Bus 與裝置訊號
   //======================================================================
   wire                        host_req   [NrHosts];
   wire                        host_gnt   [NrHosts];
   wire [`ADDR_WIDTH-1:0]      host_addr  [NrHosts];
   wire                        host_we    [NrHosts];
   wire [`DATA_WIDTH-1:0]      host_wdata [NrHosts];
   wire [`DATA_WIDTH-1:0]      host_rdata [NrHosts];

   wire                        device_req [NrDevices];
   wire [`ADDR_WIDTH-1:0]      device_addr[NrDevices];
   wire                        device_we  [NrDevices];
   wire [`DATA_WIDTH-1:0]      device_wdata[NrDevices];
   wire [`DATA_WIDTH-1:0]      device_rdata[NrDevices];

   //======================================================================
   // 3) 設定每個裝置的地址映射 (cfg_device_addr_base / cfg_device_addr_mask)
   //======================================================================
   wire [`ADDR_WIDTH-1:0] cfg_device_addr_base [NrDevices];
   wire [`ADDR_WIDTH-1:0] cfg_device_addr_mask [NrDevices];

   // 既有裝置 (與原程式相同)
   assign cfg_device_addr_base[`DEV_RAM]     = 32'h000000;
   assign cfg_device_addr_mask[`DEV_RAM]     = ~32'h1FFFFF; // 2 MB

   assign cfg_device_addr_base[`DEV_CONSOLE] = 32'h200000;
   assign cfg_device_addr_mask[`DEV_CONSOLE] = ~32'hFFFFF;  // 1 MB

   assign cfg_device_addr_base[`DEV_CLINT]   = 32'h2000000;
   assign cfg_device_addr_mask[`DEV_CLINT]   = ~32'hFFFF;

   // [MOD] 新增 UART0 與 UART1 的地址
   // 這裡僅舉例分配: 
   //   UART0 -> 0x300000 ~ 0x30FFFF
   //   UART1 -> 0x310000 ~ 0x31FFFF
   // (具體大小可依實際需求更改，Mask 這裡給 ~32'hFFFF 代表 64 KB)
   assign cfg_device_addr_base[`DEV_UART0]   = 32'h300000;
   assign cfg_device_addr_mask[`DEV_UART0]   = ~32'hFFFF;

   assign cfg_device_addr_base[`DEV_UART1]   = 32'h310000;
   assign cfg_device_addr_mask[`DEV_UART1]   = ~32'hFFFF;

   //======================================================================
   // 4) 其他系統訊號
   //======================================================================
   wire halt_from_console;
   assign halt_o = halt_from_console;

   wire irq_external = 1'b0;

   //======================================================================
   // 5) 匯流排 (bus) 例化
   //======================================================================
   bus #(
       .NrDevices    (NrDevices),
       .NrHosts      (NrHosts),
       .DataWidth    (`DATA_WIDTH),
       .AddressWidth (`ADDR_WIDTH)
   ) u_bus (
       .clk_i               (clk_i),
       .rst_i               (rst_i),

       .host_req_i          (host_req),
       .host_gnt_o          (host_gnt),
       .host_addr_i         (host_addr),
       .host_we_i           (host_we),
       .host_wdata_i        (host_wdata),
       .host_rdata_o        (host_rdata),

       .device_req_o        (device_req),
       .device_addr_o       (device_addr),
       .device_we_o         (device_we),
       .device_wdata_o      (device_wdata),
       .device_rdata_i      (device_rdata),

       .cfg_device_addr_base,
       .cfg_device_addr_mask
   );

   //======================================================================
   // 6) 既有裝置：CLINT
   //======================================================================
   wire clint_irq_software_o;
   wire clint_irq_timer_o;

   clint clint0(
       .clk_i          (clk_i),
       .rst_i          (rst_i),
       .req_i          (device_req[`DEV_CLINT]),
       .we_i           (device_we[`DEV_CLINT]),
       .addr_i         (device_addr[`DEV_CLINT]),
       .data_i         (device_wdata[`DEV_CLINT]),
       .data_o         (device_rdata[`DEV_CLINT]),
       .timer_irq_o    (clint_irq_timer_o),
       .software_irq_o (clint_irq_software_o)
   );

   //======================================================================
   // 7) 新增兩個 UART
   //======================================================================

   // 7.1) UART0
   wire uart0_tx_o, uart0_rx_i;
   wire uart0_irq_o;

   uart #(
       .SYS_FREQ    (50_000_000),
       .BAUD_RATE   (115200),
       .ECHO_ENABLE (1)              // UART0 不啟用 Echo
   ) uart0(
       .clk_i      (clk_i),
       .rst_i      (rst_i),

       .req_i      (device_req [`DEV_UART0]),
       .we_i       (device_we  [`DEV_UART0]),
       .addr_i     (device_addr[`DEV_UART0]),
       .data_i     (device_wdata[`DEV_UART0]),
       .data_o     (device_rdata[`DEV_UART0]),

       // UART 實體介面 (內部互連)
       .uart_rx_i  (uart0_rx_i),
       .uart_tx_o  (uart0_tx_o),

       .uart_irq_o (uart0_irq_o)
   );

   // 7.2) UART1
   wire uart1_tx_o, uart1_rx_i;
   wire uart1_irq_o;

   uart #(
       .SYS_FREQ    (50_000_000),
       .BAUD_RATE   (115200),
       .ECHO_ENABLE (1)              // UART1 啟用 Echo
   ) uart1(
       .clk_i      (clk_i),
       .rst_i      (rst_i),

       .req_i      (device_req [`DEV_UART1]),
       .we_i       (device_we  [`DEV_UART1]),
       .addr_i     (device_addr[`DEV_UART1]),
       .data_i     (device_wdata[`DEV_UART1]),
       .data_o     (device_rdata[`DEV_UART1]),

       // UART 實體介面 (內部互連)
       .uart_rx_i  (uart1_rx_i),
       .uart_tx_o  (uart1_tx_o),

       .uart_irq_o (uart1_irq_o)
   );

   // [MOD] 重點：讓兩個 UART 對接 (loopback)
   // uart0_tx_o -> uart1_rx_i
   // uart1_tx_o -> uart0_rx_i
   assign uart0_rx_i = uart1_tx_o;
   assign uart1_rx_i = uart0_tx_o;

   //======================================================================
   // 8) console
   //======================================================================
   console #(
       .LogName("./log/console.log")
   ) console0 (
       .clk_i     (clk_i),
       .rst_i     (rst_i),

       .req_i     (device_req[`DEV_CONSOLE]),
       .we_i      (device_we[`DEV_CONSOLE]),
       .addr_i    (device_addr[`DEV_CONSOLE]),
       .wdata_i   (device_wdata[`DEV_CONSOLE]),
       .halt_o    (halt_from_console)
   );

   //======================================================================
   // 9) RAM
   //======================================================================
   dpram #(
       .RAM_SIZE       ( MemSize ),
       .RAM_ADDR_WIDTH ( MemAddrWidth )
   ) data_ram0(
       .clk_i      (clk_i),
       .ce_i       (device_req[`DEV_RAM]),
       .addr_i     (device_addr[`DEV_RAM]),
       .we_i       (device_we[`DEV_RAM]),
       .data_i     (device_wdata[`DEV_RAM]),
       .data_o     (device_rdata[`DEV_RAM]),

       .inst_ce_i  (inst_ce_o),
       .pc_i       (pc_o),
       .inst_o     (inst_o)
   );

   //======================================================================
   // 10) CPU / core_top
   //======================================================================
   wire inst_ce_o;
   wire [`ADDR_WIDTH-1:0] pc_o;
   wire [`DATA_WIDTH-1:0] inst_o;
    
   core_top core_top0(
       .clk_i(clk_i),
       .rst_i(rst_i),

       .rom_ce_o(inst_ce_o),
       .rom_addr_o(pc_o),
       .rom_data_i(inst_o),

       .ram_ce_o   (host_req[`HOST_CORE_PORT]),
       .ram_addr_o (host_addr[`HOST_CORE_PORT]),
       .ram_we_o   (host_we[`HOST_CORE_PORT]),
       .ram_wdata_o(host_wdata[`HOST_CORE_PORT]),
       .ram_rdata_i(host_rdata[`HOST_CORE_PORT]),

       // for int
       .irq_external_i(irq_external),
       .irq_software_i(clint_irq_software_o),
       .irq_timer_i   (clint_irq_timer_o)
   );
    
endmodule
