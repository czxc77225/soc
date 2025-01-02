// Bus 模塊: bus.v
// 修正版本

module bus #(
  parameter NrDevices    = 1,
  parameter NrHosts      = 1,
  parameter DataWidth    = 32,
  parameter AddressWidth = 32
) (
  input wire                      clk_i,
  input wire                      rst_i,

  // Hosts (masters)
  input  wire                     host_req_i    [NrHosts],
  output reg                      host_gnt_o    [NrHosts],

  input  wire[AddressWidth-1:0]   host_addr_i   [NrHosts],
  input  wire                     host_we_i     [NrHosts],
  input  wire[DataWidth-1:0]      host_wdata_i  [NrHosts],
  output reg[DataWidth-1:0]       host_rdata_o  [NrHosts],
  
  // Devices (slaves)
  output reg                     device_req_o    [NrDevices],

  output reg[AddressWidth-1:0]   device_addr_o   [NrDevices],
  output reg                     device_we_o     [NrDevices],
  output reg[DataWidth-1:0]      device_wdata_o  [NrDevices],
  input  wire[DataWidth-1:0]     device_rdata_i  [NrDevices],
  
  // Device address map
  input wire[AddressWidth-1:0]    cfg_device_addr_base [NrDevices],
  input wire[AddressWidth-1:0]    cfg_device_addr_mask [NrDevices]
);

  // 計算主機選擇和設備選擇所需的位數
  localparam NumBitsHostSel = NrHosts > 1 ? clog2(NrHosts) : 1;
  localparam NumBitsDeviceSel = NrDevices > 1 ? clog2(NrDevices) : 1;

  // 選中的主機和設備
  reg [NumBitsHostSel-1:0] host_sel_req;
  reg [NumBitsDeviceSel-1:0] device_sel_req;

  // Registered responses
  reg [NumBitsHostSel-1:0] host_sel_resp;
  reg [NumBitsDeviceSel-1:0] device_sel_resp;

  // 主機優先權仲裁器: 選擇有請求的最高優先權主機
  always @ (*) begin
    host_sel_req = '0;
    for (integer host = NrHosts - 1; host >= 0; host = host - 1) begin
      if (host_req_i[host]) begin
        host_sel_req = host; // 直接賦值主機索引
        break; // 選擇第一個請求的主機
      end
    end
  end

  // 設備選擇邏輯: 根據主機地址選擇對應的設備
  always @ (*) begin
    device_sel_req = '0;
    for (integer device = 0; device < NrDevices; device = device + 1) begin
      if ((host_addr_i[host_sel_req] & cfg_device_addr_mask[device]) == cfg_device_addr_base[device]) begin
        device_sel_req = device; // 直接賦值設備索引
        break; // 選擇第一個匹配的設備
      end
    end
  end

  // 註冊回應信號，在時鐘上升沿後延遲一個週期
  always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      host_sel_resp <= '0;
      device_sel_resp <= '0;
    end else begin
      // 回應信號在下一個時鐘週期內
      host_sel_resp <= host_sel_req;
      device_sel_resp <= device_sel_req;
    end
  end

  // 連接選中的主機請求到選中的設備
  always @ (*) begin
    for (integer device = 0; device < NrDevices; device = device + 1) begin
      if (device == device_sel_req) begin
        device_req_o[device]   = host_req_i[host_sel_req];
        device_we_o[device]    = host_we_i[host_sel_req];
        device_addr_o[device]  = host_addr_i[host_sel_req];
        device_wdata_o[device] = host_wdata_i[host_sel_req];
      end else begin
        device_req_o[device]   = 1'b0;
        device_we_o[device]    = 1'b0;
        device_addr_o[device]  = 'b0;
        device_wdata_o[device] = 'b0;
      end
    end
  end

  // 將選中的設備的讀數據返回到選中的主機，並授權該主機
  always @ (*) begin
    for (integer host = 0; host < NrHosts; host = host + 1) begin
      host_gnt_o[host] = 1'b0;
      host_rdata_o[host] = 'b0;
      if (host == host_sel_resp) begin
        host_rdata_o[host]  = device_rdata_i[device_sel_resp];
        host_gnt_o[host] = host_req_i[host];
      end
    end
  end

  // 計算 clog2 的函數
  function integer clog2 (input integer n);
    begin
      n = n - 1;
      for (clog2 = 0; n > 0; clog2 = clog2 + 1)
        n = n >> 1;
    end
  endfunction

endmodule
