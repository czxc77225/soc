// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_test_top) {
    VL_CELL(data_ram0, Vtest_top_dpram__R200000_RB15);
    VL_CELL(core_top0, Vtest_top_core_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_test_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_test_top::~Vtest_top_test_top() {
}

void Vtest_top_test_top::_final_TOP__test_top(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_final_TOP__test_top\n"); );
    // Variables
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_FCLOSE_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = 0;
}

void Vtest_top_test_top::_initial__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_initial__TOP__test_top__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish = 0U;
    vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = VL_FOPEN_NN(
                                                                      std::string("./log/console.log")
                                                                      , 
                                                                      std::string("w"));
}

void Vtest_top_test_top::_settle__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1U] = 0U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1U] = 0xffe00000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2U] = 0x200000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2U] = 0xfff00000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0U] = 0x2000000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0U] = 0xffff0000U;
    vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtimecmp 
        = (((QData)((IData)(vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtimecmp_mem
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtimecmp_mem
                                                               [0U])));
    vlSymsp->TOP__test_top.__PVT__timer0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtime_mem
           [0U]);
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask
        [2U];
}

void Vtest_top_test_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    halt_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__halt_from_console = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    __PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    __PVT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(2);
    u_bus__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    u_bus__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    u_bus__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound10 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound12 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__timer0__DOT__mtime_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__timer0__DOT__mtimecmp_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__timer0__DOT__msip_mem = VL_RAND_RESET_I(32);
    __PVT__timer0__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    __PVT__timer0__DOT__carry = VL_RAND_RESET_I(1);
    __PVT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    __PVT__console0__DOT__log_fd = 0;
}
