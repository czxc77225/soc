// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSymsp->TOP__test_top.__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    vlSymsp->TOP__test_top.__PVT__host_req[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_we[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_addr[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_req[0U];
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12 
        = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
           & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask
          [4U]) == vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base
         [4U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 4U;
    }
    vlSymsp->TOP__test_top.__PVT__host_gnt[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o
        [0U];
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[3U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[3U] = 0U;
    }
    if ((4U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[4U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[4U] = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[3U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[3U] = 0U;
    }
    if ((4U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[4U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[4U] = 0U;
    }
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[3U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[3U] = 0U;
    }
    if ((4U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[4U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[4U] = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_we[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_we[1U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_we[2U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_we[3U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_we[4U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [4U];
    vlSymsp->TOP__test_top.__PVT__device_addr[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_addr[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_addr[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_addr[3U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_addr[4U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [4U];
    vlSymsp->TOP__test_top.__PVT__device_req[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_req[1U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_req[2U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_req[3U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_req[4U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [4U];
    vlSymsp->TOP__test_top.__PVT__device_rdata[1U] 
        = (vlSymsp->TOP__test_top.__PVT__device_req
           [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                    [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                      [1U])] << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                           [(0x1fffffU 
                                             & ((IData)(1U) 
                                                + (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))] 
                                           << 0x10U) 
                                          | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__device_addr
                                                    [1U])))] 
                                              << 8U) 
                                             | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))])))
            : 0U);
    if (vlSymsp->TOP__test_top.__PVT__device_req[0U]) {
        if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                    [0U]))) {
            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem;
        } else {
            if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                             [0U]))) {
                vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                    = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                    [0U];
            } else {
                if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U]))) {
                    vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                        = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                        [1U];
                } else {
                    if ((0xbff8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U]))) {
                        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                            = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                            [0U];
                    } else {
                        if ((0xbffcU == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U]))) {
                            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                [1U];
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__clint0__data_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [1U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [2U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[3U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [3U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[4U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [4U];
    if (((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10 
            = ((4U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10;
    }
    vlSymsp->TOP__test_top.__PVT__host_rdata[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_wdata[0U];
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[3U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[3U] = 0U;
    }
    if ((4U == (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))) {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[4U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    } else {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[4U] = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_wdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[1U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [1U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[2U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [2U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[3U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [3U];
    vlSymsp->TOP__test_top.__PVT__device_wdata[4U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [4U];
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v3;
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    // Body
    __Vdlyvset__clint0__DOT__mtime_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtime_mem__v2 = 0U;
    __Vdly__console0__DOT__sim_finish = vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 0U;
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtime_mem__v0 = 1U;
    } else {
        if ((1U & (~ vlSymsp->TOP__test_top.__PVT__device_we
                   [0U]))) {
            __Vdlyvval__clint0__DOT__mtime_mem__v2 
                = ((IData)(1U) + vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [0U]);
            __Vdlyvset__clint0__DOT__mtime_mem__v2 = 1U;
            __Vdlyvval__clint0__DOT__mtime_mem__v3 
                = (vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [1U] + (IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [0U]) {
            if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [0U]))) {
                vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem 
                    = vlSymsp->TOP__test_top.__PVT__device_wdata
                    [0U];
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    } else {
        if ((vlSymsp->TOP__test_top.__PVT__device_req
             [2U] & vlSymsp->TOP__test_top.__PVT__device_we
             [2U])) {
            if (VL_UNLIKELY((4U == (0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                    [2U])))) {
                VL_FWRITEF(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd,"%c",
                           8,(0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                              [2U]));
                VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                                  [2U]));
                if (vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); }
            } else {
                if ((8U == (0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [2U]))) {
                    if ((vlSymsp->TOP__test_top.__PVT__device_wdata
                         [2U] & (0U == (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)))) {
                        __Vdly__console0__DOT__sim_finish = 1U;
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)));
    }
    vlSymsp->TOP__test_top.__PVT__halt_from_console 
        = (2U <= (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish));
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 1U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [0U]) {
            if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [0U]))) {
                if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U]))) {
                    __Vdlyvval__clint0__DOT__mtimecmp_mem__v2 
                        = vlSymsp->TOP__test_top.__PVT__device_wdata
                        [0U];
                    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 1U;
                } else {
                    if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U]))) {
                        __Vdlyvval__clint0__DOT__mtimecmp_mem__v3 
                            = vlSymsp->TOP__test_top.__PVT__device_wdata
                            [0U];
                        __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 1U;
                    }
                }
            }
        }
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v2;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v3;
    }
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish 
        = __Vdly__console0__DOT__sim_finish;
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v3) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    }
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
           [0U]);
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp 
        = (((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                               [0U])));
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__6\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__uart0__DOT__tx_state;
    CData/*2:0*/ __Vdly__uart0__DOT__tx_bit_cnt;
    CData/*7:0*/ __Vdly__uart0__DOT__tx_shift_reg;
    CData/*0:0*/ __Vdly__uart0__DOT__tx_busy;
    CData/*1:0*/ __Vdly__uart0__DOT__rx_state;
    CData/*2:0*/ __Vdly__uart0__DOT__rx_bit_cnt;
    CData/*7:0*/ __Vdly__uart0__DOT__rx_shift_reg;
    CData/*1:0*/ __Vdly__uart1__DOT__tx_state;
    CData/*2:0*/ __Vdly__uart1__DOT__tx_bit_cnt;
    CData/*7:0*/ __Vdly__uart1__DOT__tx_shift_reg;
    CData/*0:0*/ __Vdly__uart1__DOT__tx_busy;
    CData/*1:0*/ __Vdly__uart1__DOT__rx_state;
    CData/*2:0*/ __Vdly__uart1__DOT__rx_bit_cnt;
    CData/*7:0*/ __Vdly__uart1__DOT__rx_shift_reg;
    CData/*7:0*/ __Vdly__uart1__DOT__tx_buffer;
    SData/*9:0*/ __Vdly__uart0__DOT__baud_cnt;
    SData/*9:0*/ __Vdly__uart1__DOT__baud_cnt;
    // Body
    __Vdly__uart1__DOT__baud_cnt = vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_cnt;
    __Vdly__uart0__DOT__baud_cnt = vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_cnt;
    __Vdly__uart1__DOT__tx_shift_reg = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_shift_reg;
    __Vdly__uart1__DOT__tx_bit_cnt = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_bit_cnt;
    __Vdly__uart1__DOT__tx_state = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state;
    __Vdly__uart0__DOT__rx_shift_reg = vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg;
    __Vdly__uart0__DOT__rx_bit_cnt = vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_bit_cnt;
    __Vdly__uart0__DOT__rx_state = vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state;
    __Vdly__uart0__DOT__tx_shift_reg = vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_shift_reg;
    __Vdly__uart0__DOT__tx_bit_cnt = vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_bit_cnt;
    __Vdly__uart0__DOT__tx_state = vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state;
    __Vdly__uart1__DOT__rx_shift_reg = vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg;
    __Vdly__uart1__DOT__rx_bit_cnt = vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_bit_cnt;
    __Vdly__uart1__DOT__rx_state = vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state;
    __Vdly__uart1__DOT__tx_buffer = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_buffer;
    __Vdly__uart1__DOT__tx_busy = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_busy;
    __Vdly__uart0__DOT__tx_busy = vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_busy;
    if (vlTOPp->rst_i) {
        __Vdly__uart1__DOT__tx_buffer = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [4U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [4U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [4U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [4U]))) {
                        __Vdly__uart1__DOT__tx_buffer 
                            = (0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                               [4U]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [4U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [4U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [4U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [4U]))) {
                        __Vdly__uart1__DOT__tx_busy = 1U;
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [3U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [3U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [3U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [3U]))) {
                        __Vdly__uart0__DOT__tx_busy = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart0_irq_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart0_irq_o = 0U;
        if (((IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag) 
             & ((IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl) 
                >> 1U))) {
            vlSymsp->TOP__test_top.__PVT__uart0_irq_o = 1U;
        }
        if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status) 
                    >> 2U) & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl)))) {
            vlSymsp->TOP__test_top.__PVT__uart0_irq_o = 1U;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [3U]) {
            if ((1U & (~ vlSymsp->TOP__test_top.__PVT__device_we
                       [3U]))) {
                vlSymsp->TOP__test_top.__Vcellout__uart0__data_o 
                    = ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                               [3U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl)
                        : ((4U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                   [3U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status)
                            : ((0xcU == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [3U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_buffer)
                                : 0U)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart1_irq_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart1_irq_o = 0U;
        if (((IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag) 
             & ((IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl) 
                >> 1U))) {
            vlSymsp->TOP__test_top.__PVT__uart1_irq_o = 1U;
        }
        if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status) 
                    >> 2U) & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl)))) {
            vlSymsp->TOP__test_top.__PVT__uart1_irq_o = 1U;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [4U]) {
            if ((1U & (~ vlSymsp->TOP__test_top.__PVT__device_we
                       [4U]))) {
                vlSymsp->TOP__test_top.__Vcellout__uart1__data_o 
                    = ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                               [4U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl)
                        : ((4U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                   [4U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status)
                            : ((0xcU == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [4U])) ? (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_buffer)
                                : 0U)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_buffer = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag) {
            vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_buffer 
                = vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg;
        }
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[3U] 
        = vlSymsp->TOP__test_top.__Vcellout__uart0__data_o;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [3U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [3U]) {
                if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [3U]))) {
                    vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl 
                        = (0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                           [3U]);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
            = ((0xfeU & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status)) 
               | (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_busy));
        if (vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag) {
            vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
                = (2U | (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status));
        }
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [3U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [3U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [3U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [3U]))) {
                        vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
                            = (0xfbU & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status));
                    }
                }
            } else {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [3U]))) {
                    if ((4U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [3U]))) {
                        vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
                            = (0xfdU & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[4U] 
        = vlSymsp->TOP__test_top.__Vcellout__uart1__data_o;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [4U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [4U]) {
                if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [4U]))) {
                    vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl 
                        = (0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                           [4U]);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_buffer = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag) {
            vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_buffer 
                = vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
            = ((0xfeU & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status)) 
               | (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_busy));
        if (vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag) {
            vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
                = (2U | (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status));
        }
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [4U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [4U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [4U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [4U]))) {
                        vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
                            = (0xfbU & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status));
                    }
                }
            } else {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [4U]))) {
                    if ((4U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [4U]))) {
                        vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
                            = (0xfdU & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__uart1__DOT__rx_state = 0U;
        __Vdly__uart1__DOT__rx_bit_cnt = 0U;
        __Vdly__uart1__DOT__rx_shift_reg = 0U;
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag = 0U;
        if (vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick) {
            if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state))) {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state))) {
                    __Vdly__uart1__DOT__rx_state = 0U;
                    vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag = 1U;
                    __Vdly__uart1__DOT__tx_buffer = vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg;
                    __Vdly__uart1__DOT__tx_busy = 1U;
                    vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
                        = (0xfbU & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status));
                } else {
                    __Vdly__uart1__DOT__rx_shift_reg 
                        = (((IData)(vlSymsp->TOP__test_top.__PVT__uart0_tx_o) 
                            << 7U) | (0x7fU & ((IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg) 
                                               >> 1U)));
                    if ((7U == (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_bit_cnt))) {
                        __Vdly__uart1__DOT__rx_state = 3U;
                    } else {
                        __Vdly__uart1__DOT__rx_bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_bit_cnt)));
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state))) {
                    __Vdly__uart1__DOT__rx_state = 2U;
                    __Vdly__uart1__DOT__rx_bit_cnt = 0U;
                } else {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__uart0_tx_o)))) {
                        __Vdly__uart1__DOT__rx_state = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state 
        = __Vdly__uart1__DOT__rx_state;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_bit_cnt 
        = __Vdly__uart1__DOT__rx_bit_cnt;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg 
        = __Vdly__uart1__DOT__rx_shift_reg;
    if (vlTOPp->rst_i) {
        __Vdly__uart0__DOT__tx_state = 0U;
        __Vdly__uart0__DOT__tx_bit_cnt = 0U;
        __Vdly__uart0__DOT__tx_shift_reg = 0U;
        __Vdly__uart0__DOT__tx_busy = 0U;
        vlSymsp->TOP__test_top.__PVT__uart0_tx_o = 1U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick) {
            if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state))) {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state))) {
                    vlSymsp->TOP__test_top.__PVT__uart0_tx_o = 1U;
                    __Vdly__uart0__DOT__tx_state = 0U;
                    __Vdly__uart0__DOT__tx_busy = 0U;
                    vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
                        = (4U | (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status));
                } else {
                    vlSymsp->TOP__test_top.__PVT__uart0_tx_o 
                        = (1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_shift_reg));
                    if ((7U == (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_bit_cnt))) {
                        __Vdly__uart0__DOT__tx_state = 3U;
                    } else {
                        __Vdly__uart0__DOT__tx_bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_bit_cnt)));
                    }
                    __Vdly__uart0__DOT__tx_shift_reg 
                        = (0x7fU & ((IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_shift_reg) 
                                    >> 1U));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state))) {
                    __Vdly__uart0__DOT__tx_state = 2U;
                    __Vdly__uart0__DOT__tx_bit_cnt = 0U;
                } else {
                    if (vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_busy) {
                        __Vdly__uart0__DOT__tx_state = 1U;
                        __Vdly__uart0__DOT__tx_shift_reg 
                            = vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_buffer;
                        vlSymsp->TOP__test_top.__PVT__uart0_tx_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state 
        = __Vdly__uart0__DOT__tx_state;
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_bit_cnt 
        = __Vdly__uart0__DOT__tx_bit_cnt;
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_shift_reg 
        = __Vdly__uart0__DOT__tx_shift_reg;
    if (vlTOPp->rst_i) {
        __Vdly__uart0__DOT__rx_state = 0U;
        __Vdly__uart0__DOT__rx_bit_cnt = 0U;
        __Vdly__uart0__DOT__rx_shift_reg = 0U;
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag = 0U;
        if (vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick) {
            if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state))) {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state))) {
                    __Vdly__uart0__DOT__rx_state = 0U;
                    vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag = 1U;
                    vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_buffer 
                        = vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg;
                    __Vdly__uart0__DOT__tx_busy = 1U;
                    vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status 
                        = (0xfbU & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status));
                } else {
                    __Vdly__uart0__DOT__rx_shift_reg 
                        = (((IData)(vlSymsp->TOP__test_top.__PVT__uart1_tx_o) 
                            << 7U) | (0x7fU & ((IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg) 
                                               >> 1U)));
                    if ((7U == (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_bit_cnt))) {
                        __Vdly__uart0__DOT__rx_state = 3U;
                    } else {
                        __Vdly__uart0__DOT__rx_bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_bit_cnt)));
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state))) {
                    __Vdly__uart0__DOT__rx_state = 2U;
                    __Vdly__uart0__DOT__rx_bit_cnt = 0U;
                } else {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__uart1_tx_o)))) {
                        __Vdly__uart0__DOT__rx_state = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_buffer = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_req
            [3U]) {
            if (vlSymsp->TOP__test_top.__PVT__device_we
                [3U]) {
                if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                            [3U]))) {
                    if ((8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [3U]))) {
                        vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_buffer 
                            = (0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                               [3U]);
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state 
        = __Vdly__uart0__DOT__rx_state;
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_bit_cnt 
        = __Vdly__uart0__DOT__rx_bit_cnt;
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg 
        = __Vdly__uart0__DOT__rx_shift_reg;
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_busy 
        = __Vdly__uart0__DOT__tx_busy;
    if (vlTOPp->rst_i) {
        __Vdly__uart0__DOT__baud_cnt = 0U;
        vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick = 0U;
    } else {
        if ((0x1b1U == (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_cnt))) {
            __Vdly__uart0__DOT__baud_cnt = 0U;
            vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick = 1U;
        } else {
            __Vdly__uart0__DOT__baud_cnt = (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_cnt)));
            vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick = 0U;
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__uart1__DOT__tx_state = 0U;
        __Vdly__uart1__DOT__tx_bit_cnt = 0U;
        __Vdly__uart1__DOT__tx_shift_reg = 0U;
        __Vdly__uart1__DOT__tx_busy = 0U;
        vlSymsp->TOP__test_top.__PVT__uart1_tx_o = 1U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick) {
            if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state))) {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state))) {
                    vlSymsp->TOP__test_top.__PVT__uart1_tx_o = 1U;
                    __Vdly__uart1__DOT__tx_state = 0U;
                    __Vdly__uart1__DOT__tx_busy = 0U;
                    vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status 
                        = (4U | (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status));
                } else {
                    vlSymsp->TOP__test_top.__PVT__uart1_tx_o 
                        = (1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_shift_reg));
                    if ((7U == (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_bit_cnt))) {
                        __Vdly__uart1__DOT__tx_state = 3U;
                    } else {
                        __Vdly__uart1__DOT__tx_bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_bit_cnt)));
                    }
                    __Vdly__uart1__DOT__tx_shift_reg 
                        = (0x7fU & ((IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_shift_reg) 
                                    >> 1U));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state))) {
                    __Vdly__uart1__DOT__tx_state = 2U;
                    __Vdly__uart1__DOT__tx_bit_cnt = 0U;
                } else {
                    if (vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_busy) {
                        __Vdly__uart1__DOT__tx_state = 1U;
                        __Vdly__uart1__DOT__tx_shift_reg 
                            = vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_buffer;
                        vlSymsp->TOP__test_top.__PVT__uart1_tx_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_cnt 
        = __Vdly__uart0__DOT__baud_cnt;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_buffer 
        = __Vdly__uart1__DOT__tx_buffer;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state 
        = __Vdly__uart1__DOT__tx_state;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_bit_cnt 
        = __Vdly__uart1__DOT__tx_bit_cnt;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_shift_reg 
        = __Vdly__uart1__DOT__tx_shift_reg;
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_busy 
        = __Vdly__uart1__DOT__tx_busy;
    if (vlTOPp->rst_i) {
        __Vdly__uart1__DOT__baud_cnt = 0U;
        vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick = 0U;
    } else {
        if ((0x1b1U == (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_cnt))) {
            __Vdly__uart1__DOT__baud_cnt = 0U;
            vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick = 1U;
        } else {
            __Vdly__uart1__DOT__baud_cnt = (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_cnt)));
            vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick = 0U;
        }
    }
    vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_cnt 
        = __Vdly__uart1__DOT__baud_cnt;
}
