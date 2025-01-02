// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_TEST_TOP_H_
#define _VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;
class Vtest_top_dpram__R200000_RB15;
class Vtest_top_core_top;


//----------

VL_MODULE(Vtest_top_test_top) {
  public:
    // CELLS
    Vtest_top_dpram__R200000_RB15* data_ram0;
    Vtest_top_core_top* core_top0;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(halt_o,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__halt_from_console;
    CData/*0:0*/ __PVT__u_bus__DOT__host_sel_req;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_req;
    CData/*0:0*/ __PVT__u_bus__DOT__host_sel_resp;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_resp;
    CData/*2:0*/ __PVT__console0__DOT__sim_finish;
    CData/*0:0*/ __PVT__timer0__DOT__timer_interrupt_o;
    CData/*0:0*/ __PVT__timer0__DOT__timer_enable;
    IData/*31:0*/ __PVT__u_bus__DOT__unnamedblk1__DOT__host;
    IData/*31:0*/ __PVT__u_bus__DOT__unnamedblk2__DOT__device;
    IData/*31:0*/ __PVT__console0__DOT__log_fd;
    IData/*31:0*/ __PVT__timer0__DOT__timer_count;
    CData/*0:0*/ __PVT__host_req[1];
    CData/*0:0*/ __PVT__host_gnt[1];
    IData/*31:0*/ __PVT__host_addr[1];
    CData/*0:0*/ __PVT__host_we[1];
    IData/*31:0*/ __PVT__host_wdata[1];
    IData/*31:0*/ __PVT__host_rdata[1];
    CData/*0:0*/ __PVT__device_req[3];
    IData/*31:0*/ __PVT__device_addr[3];
    CData/*0:0*/ __PVT__device_we[3];
    IData/*31:0*/ __PVT__device_wdata[3];
    IData/*31:0*/ __PVT__device_rdata[3];
    IData/*31:0*/ __PVT__cfg_device_addr_base[3];
    IData/*31:0*/ __PVT__cfg_device_addr_mask[3];
    
    // LOCAL VARIABLES
    CData/*0:0*/ u_bus__DOT____Vlvbound1;
    CData/*0:0*/ u_bus__DOT____Vlvbound2;
    CData/*0:0*/ u_bus__DOT____Vlvbound12;
    IData/*31:0*/ __Vcellout__timer0__rdata_o;
    IData/*31:0*/ u_bus__DOT____Vlvbound3;
    IData/*31:0*/ u_bus__DOT____Vlvbound4;
    IData/*31:0*/ u_bus__DOT____Vlvbound11;
    IData/*31:0*/ __Vcellinp__u_bus__cfg_device_addr_mask[3];
    IData/*31:0*/ __Vcellinp__u_bus__cfg_device_addr_base[3];
    IData/*31:0*/ __Vcellinp__u_bus__device_rdata_i[3];
    IData/*31:0*/ __Vcellout__u_bus__device_wdata_o[3];
    CData/*0:0*/ __Vcellout__u_bus__device_we_o[3];
    IData/*31:0*/ __Vcellout__u_bus__device_addr_o[3];
    CData/*0:0*/ __Vcellout__u_bus__device_req_o[3];
    IData/*31:0*/ __Vcellout__u_bus__host_rdata_o[1];
    IData/*31:0*/ __Vcellinp__u_bus__host_wdata_i[1];
    CData/*0:0*/ __Vcellinp__u_bus__host_we_i[1];
    IData/*31:0*/ __Vcellinp__u_bus__host_addr_i[1];
    CData/*0:0*/ __Vcellout__u_bus__host_gnt_o[1];
    CData/*0:0*/ __Vcellinp__u_bus__host_req_i[1];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_test_top);  ///< Copying not allowed
  public:
    Vtest_top_test_top(const char* name = "TOP");
    ~Vtest_top_test_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
    static void _combo__TOP__test_top__7(Vtest_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _final_TOP__test_top(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
