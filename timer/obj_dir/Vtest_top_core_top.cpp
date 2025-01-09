// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_core_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_core_top::_settle__TOP__test_top__core_top0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_settle__TOP__test_top__core_top0__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((2U == 
                                             (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                             ? (0xffffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 0x10U))
                                             : 0U))
                            : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((1U == 
                                             (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                             ? (0xffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 8U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x10U))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x18U))))));
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top.__PVT__host_rdata
                           [0U] : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                          [0U] 
                                                          >> 0xfU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__host_rdata
                                          [0U])) : 
                                   ((2U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                           [0U] 
                                                           >> 0x1fU)))) 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U] 
                                              >> 0x10U)))
                                     : 0U)));
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                            = ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                   | (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U])) : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                    [0U] 
                                                                    >> 0xfU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U] 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 0x17U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U)))
                                                  : 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 0x1fU)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x18U))))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o = 0U;
                    }
                }
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                             ? ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                 ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o
                                 : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & vlSymsp->TOP__test_top.__PVT__host_rdata
                                         [0U]) | (0xffffU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o))
                                     : ((2U == (3U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                         ? ((0xffff0000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__host_rdata
                                               [0U]))
                                         : 0U))) : 
                            ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                              ? ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                  ? ((0xffffff00U & 
                                      vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U]) | (0xffU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o))
                                  : ((1U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                      ? ((0xffff0000U 
                                          & vlSymsp->TOP__test_top.__PVT__host_rdata
                                          [0U]) | (
                                                   (0xff00U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U])))
                                      : ((2U == (3U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                          ? ((0xff000000U 
                                              & vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U]) 
                                             | ((0xff0000U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U])))
                                          : ((0xff000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                 << 0x18U)) 
                                             | (0xffffffU 
                                                & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                [0U])))))
                              : 0U)));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                                        = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                            : 0U);
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                                        = (0xfffff000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o 
            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o = 0U;
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0xfU));
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = (0xfffff000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                            : 0U);
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    CData/*5:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mie;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mpie;
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdly__if_id_inst_addr_o;
    IData/*31:0*/ __Vdly__id_exe_exception_o;
    WData/*64:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[3];
    WData/*64:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp19[3];
    WData/*95:0*/ __Vtemp20[3];
    IData/*31:0*/ __Vtemp34;
    QData/*63:0*/ __Vdly__csr0__DOT__minstret;
    // Body
    __Vdly__id_exe_exception_o = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o;
    __Vdly__pc_wire = vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire;
    __Vdly__if_id_inst_addr_o = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U];
    __Vdly__csr0__DOT__minstret = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret;
    __Vdly__csr0__DOT__mstatus_mpie = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie;
    __Vdly__csr0__DOT__mstatus_mie = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                                     | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
            ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc);
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception 
        = (0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o);
    __Vdly__id_exe_exception_o = ((IData)(vlTOPp->rst_i)
                                   ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                            ? 0U : 
                                           ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))
                                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o
                                             : ((1U 
                                                 & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                     >> 2U) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 3U))))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))) 
                                         & ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o)
                                             : ((~ 
                                                 (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 2U) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))) 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                           ? 0U : (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 2U) 
                                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U)))
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 2U) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                            >> 3U))))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o)))));
    __Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                        ? (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o))
                            ? vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o
                            : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o))
                                ? vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire
                                : ((IData)(4U) + vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))
                        : 0x80U);
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))) 
                                         & ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)
                                             : ((~ 
                                                 (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 2U) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))) 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o)))));
    if (vlTOPp->rst_i) {
        __Vdly__if_id_inst_addr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o = 0U;
    } else {
        __Vdly__if_id_inst_addr_o = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                      ? 0U : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 2U)))
                                               ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                               : ((1U 
                                                   & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 1U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 2U))))
                                                   ? 0U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)));
        vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o 
            = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                ? 0U : (0x1fU & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                         >> 2U) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)
                                  : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                             >> 2U) 
                                            & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 3U))))
                                      ? 0U : (vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                              >> 7U)))));
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))) 
                                         & ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o)
                                             : ((~ 
                                                 (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 2U) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))) 
                                                & (3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o))))));
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32 
                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o;
        }
    }
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = 0x20U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
                = (0x3fU & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt) 
                            - (IData)(1U)));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i 
        = (3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o));
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = ((1U & __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U]) 
                   | (0xfffffffeU & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                                     << 1U)));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = (1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                         >> 0x1fU));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = (0xfffffffeU & __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U]);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] = 0xffffffffU;
        } else {
            VL_EXTEND_WI(65,32, __Vtemp9, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = __Vtemp9[0U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = __Vtemp9[1U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = __Vtemp9[2U];
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))) {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub) {
                __Vtemp12[1U] = ((1U & ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
                __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                    = (1U | (0xfffffffeU & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                                            << 1U)));
            } else {
                __Vtemp12[1U] = ((1U & ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
                __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                    = (0xfffffffeU & ((IData)((((QData)((IData)(
                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                                      << 1U));
            }
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = __Vtemp12[1U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub)
                    ? (1U & ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                                      >> 0x20U)) >> 0x1fU))
                    : (1U & ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                                      >> 0x20U)) >> 0x1fU)));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result 
        = (((3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation)
                ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]
                : ((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                    << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                 >> 1U))) : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                              ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                               ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o
                                               : ((1U 
                                                   & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U))))
                                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i 
        = ((3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external = 0U;
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) {
        if ((1U & (~ ((~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32 
                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o;
        }
    }
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) {
        if ((1U & (~ ((~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt = 0x1fU;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
                = (0x3fU & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt) 
                            - (IData)(1U)));
        }
    }
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) {
        VL_EXTEND_WI(65,32, __Vtemp16, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o);
        if ((1U & ((~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                   | (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] = 0U;
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] = 0U;
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] = 0U;
        } else {
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
                = __Vtemp16[0U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
                = __Vtemp16[1U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
                = __Vtemp16[2U];
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))) {
            VL_EXTEND_WQ(65,64, __Vtemp19, (((QData)((IData)(
                                                             vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[2U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[1U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[0U])) 
                                                  >> 1U))));
            VL_EXTEND_WQ(65,64, __Vtemp20, (((QData)((IData)(
                                                             vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])) 
                                                  >> 1U))));
            if (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add) {
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
                    = __Vtemp19[0U];
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
                    = __Vtemp19[1U];
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
                    = __Vtemp19[2U];
            } else {
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
                    = __Vtemp20[0U];
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
                    = __Vtemp20[1U];
                __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
                    = __Vtemp20[2U];
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle 
        = ((IData)(vlTOPp->rst_i) ? 0ULL : (1ULL + vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle));
    if (vlTOPp->rst_i) {
        __Vdly__csr0__DOT__minstret = 0ULL;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o) {
            __Vdly__csr0__DOT__minstret = (1ULL + vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret);
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
        = (((3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S)) 
            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? (((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])))
            : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0ULL : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                           ? 0U : (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 2U) 
                                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U)))
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o)
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 2U) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                            >> 3U))))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem = 0U;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                    = (0x7ffffffU & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                     >> 4U));
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 3U)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 7U)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 0xbU)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type 
                = vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type 
                    = (1U & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                             >> 0x1fU));
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause 
                = vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause 
                    = (0xfU & vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o);
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                           ? 0U : (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 2U) 
                                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U)))
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 2U) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                            >> 3U))))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                                      & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                      ? 
                                                     ((0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                                       : 0U)
                                                      : 
                                                     ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                          == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                        : 0U)
                                                       : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval = 0U;
    } else {
        if (((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval 
                = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
            = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                >> 2U) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                          >> 3U))) ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                         : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                    >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 3U))))
                             ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                          : 0U) : (
                                                   (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final)))));
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch 
            = (((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
                ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
                : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch);
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
            = (((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
                ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
                : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec);
        vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o)
                ? (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o)
                : (((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
                    ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
                    : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc));
    }
    if (vlTOPp->rst_i) {
        __Vdly__csr0__DOT__mstatus_mie = 0U;
        __Vdly__csr0__DOT__mstatus_mpie = 1U;
    } else {
        if (((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))) {
            __Vdly__csr0__DOT__mstatus_mie = (1U & 
                                              (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                               >> 3U));
            __Vdly__csr0__DOT__mstatus_mpie = (1U & 
                                               (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                >> 7U));
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o) {
                __Vdly__csr0__DOT__mstatus_mpie = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie;
                __Vdly__csr0__DOT__mstatus_mie = 0U;
            } else {
                if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o) {
                    __Vdly__csr0__DOT__mstatus_mie 
                        = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie;
                    __Vdly__csr0__DOT__mstatus_mpie = 1U;
                } else {
                    __Vdly__csr0__DOT__mstatus_mie 
                        = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie;
                    __Vdly__csr0__DOT__mstatus_mpie 
                        = vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie;
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
        = ((IData)(vlTOPp->rst_i) ? 0x13U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                              ? 0x13U
                                              : ((1U 
                                                  & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 2U) 
                                                     & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 3U)))
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o
                                                  : 
                                                 ((1U 
                                                   & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U))))
                                                   ? 0x13U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtime_mem
                                                                        [1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtime_mem
                                                                         [0U]))) 
                                                      - vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtimecmp) 
                                                     >> 0x3fU))) 
                                         & (0ULL != vlSymsp->TOP__test_top.__PVT__timer0__DOT__mtimecmp)));
    __Vtemp34 = ((IData)(vlTOPp->rst_i) ? 0x13U : (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                                    ? 0x13U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 1U) 
                                                        & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                           >> 2U)))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                     : 
                                                    ((1U 
                                                      & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 1U) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                             >> 2U))))
                                                      ? 0x13U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                                       ? 
                                                      ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                        [
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                                        << 0x18U) 
                                                       | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                           [
                                                           (0x1fffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1ffffcU 
                                                                & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                           << 0x10U) 
                                                          | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                              [
                                                              (0x1fffffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (0x1ffffcU 
                                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                              << 8U) 
                                                             | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                             [
                                                             (0x1fffffU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffffcU 
                                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                                                       : 0U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
        = __Vtemp34;
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software 
        = ((~ (IData)(vlTOPp->rst_i)) & (0U != vlSymsp->TOP__test_top.__PVT__timer0__DOT__msip_mem));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o);
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o));
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o 
        = __Vdly__if_id_inst_addr_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt;
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret 
        = __Vdly__csr0__DOT__minstret;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie 
        = __Vdly__csr0__DOT__mstatus_mpie;
    vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire 
        = __Vdly__pc_wire;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
           >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                     - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                      vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                      - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S 
        = ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) 
                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o = 0U;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add 
        = (1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U]);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                     + (QData)((IData)(
                                                       vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                      + (QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                   >> 0x20U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S 
        = ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o))) 
                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
                } else {
                    if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
                    } else {
                        if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0xbU;
            } else {
                if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 3U;
                } else {
                    if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 7U;
                    } else {
                        if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0xbU;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed 
        = VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust 
        = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                  ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o) 
                 >> 0x1fU));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o);
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o));
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x1fU)))) 
                           << 0xcU)) | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 7U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire 
        = (1U & (~ (IData)(vlTOPp->rst_i)));
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o = 1U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o 
            = (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                        >> 7U));
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o = 0U;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o 
        = ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
            ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0x1000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x19U))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U)))))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0x1000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x19U)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U))))))
            : 0U);
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o = 1U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o 
            = (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                        >> 0xfU));
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie 
        = __Vdly__csr0__DOT__mstatus_mie;
    if ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o 
            = (1U & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                      ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                          ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                              ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned)
                              : (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned)))
                          : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                              ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed)
                              : (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed))))
                      : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                             >> 0xdU)) & ((0x1000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                           ? (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2))
                                           : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2)))));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm)
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm)
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm)))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? 0U : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm)
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm))));
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o 
            = (1U & ((0x6fU == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                     | (0x67U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
            = ((0x6fU == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                   + ((0xfff00000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0x14U)) | 
                      ((0xff000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                       | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                     >> 9U)) | (0x7feU 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U))))))
                : ((0x67U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 0x14U))) : 0U));
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S = 1U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o);
        vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S 
            = vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie 
        = ((0x304U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause 
        = ((0x342U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o 
        = ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
             == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o)) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
            : ((0x800U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                ? ((0x400U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                    ? ((0x200U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                        ? ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                            ? ((0x80U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                ? 0U : ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                         ? 0U : ((0x20U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 0x16U)
                                                      : 0U)))
                                                   : 0U))))
                            : 0U) : ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                      ? 0U : ((0x80U 
                                               & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                               ? ((0x40U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : (IData)(
                                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle 
                                                                    >> 0x20U)))))))))
                                               : ((0x40U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle)))))))))))
                    : ((0x200U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                        ? ((0x100U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                            ? ((0x80U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                ? ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                    ? 0U : ((0x20U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                              ? 0U : 
                                             ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : (IData)(
                                                               (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle 
                                                                >> 0x20U)))))))))
                                : ((0x40U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                    ? 0U : ((0x20U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                              ? 0U : 
                                             ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle)))))))))
                            : 0U) : 0U)) : ((0x400U 
                                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                             ? 0U : 
                                            ((0x200U 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                              ? ((0x100U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                                              << 7U) 
                                                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                                                << 3U)))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                                           << 0x1fU) 
                                                          | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                                              << 4U) 
                                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc
                                                          : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                                              << 7U) 
                                                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                                                << 3U)))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o))
                                                          ? 0x40001100U
                                                          : 
                                                         (0x1800U 
                                                          | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                                              << 7U) 
                                                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                                << 3U)))))))))))
                                                  : 0U)
                                              : 0U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o 
        = __Vdly__id_exe_exception_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o 
        = (1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__Vtableidx1 
        = ((0x20U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                     << 5U)) | ((0x10U & ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                            & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                              << 3U)))) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt 
        = vlSymsp->TOP__test_top__core_top0.__Vtable1___PVT__interrupt_ctrl0__DOT__S_nxt
        [vlSymsp->TOP__test_top__core_top0.__Vtableidx1];
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o));
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o 
            = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata);
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o 
        = (1U & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                  ? ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                         >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))
                  : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                      >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                    >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
}

VL_INLINE_OPT void Vtest_top_core_top::_combo__TOP__test_top__core_top0__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_combo__TOP__test_top__core_top0__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                ? ((0U == (7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                   >> 0xcU))) ? 3U : 0U)))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                    ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)))
                    : 0U));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 7U)))))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                    ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                       + ((0xfffff000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x1fU)))) 
                                          << 0xcU)) 
                          | (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                       >> 0x14U))))
                    : 0U));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                : 0U);
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((0x23U != 
                                          (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                         & (3U == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x13U != (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))
            ? 0U : ((0x13U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                     ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                             : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            >> vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                         : 0U) : ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x19U)))
                                                   ? 
                                                  (((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) 
                                                    & (0xffffffffU 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      & (~ 
                                                         (0xffffffffU 
                                                          >> 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))))
                                                   : 0U))
                                 : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                         : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? (1U & (- (IData)(
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))
                                 : (1U & (- (IData)(
                                                    VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))))
                             : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            << vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                         : 0U) : 0U)
                                 : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))
                     : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0x18U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o 
                                                = (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o 
                                                = (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 1U;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))
                                 ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 : ((0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x19U)))
                                     ? (((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                          >> (0x1fU 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)) 
                                         & (0xffffffffU 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                          >> 0x1fU)))) 
                                           & (~ (0xffffffffU 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))))
                                     : 0U)) : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                               ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (1U & (- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))
                             : (1U & (- (IData)(VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                << (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                             : ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))
                                 ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : ((0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x19U)))
                                     ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                        - vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                     : 0U))))));
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                          >> 0xdU)))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 1U;
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o = 0U;
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                        : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                            ? (- vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                        : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                            ? (- vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                            ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                        : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                        : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            ? (- vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                        : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            ? (- vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                        : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            ? (- vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                            ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                            : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                        : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)));
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 1U;
        }
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 0xeU)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 1U;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 7U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 7U));
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 7U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 7U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 7U))
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U))
                                            : 0U);
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0xfU));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xfU))
                                            : 0U);
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                                        = (0xfffffffeU 
                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
                                              + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o;
        vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
        = ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o)
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 1U;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = (1U & (((~ 
                                                   ((IData)(vlTOPp->rst_i) 
                                                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                                  & ((0x4000U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xdU) 
                                                      | ((~ 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0xcU)) 
                                                         | ((0U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                 >> 0x19U))) 
                                                            | (0x20U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                   >> 0x19U))))))
                                                      : 
                                                     ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xdU) 
                                                      | ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0xcU) 
                                                         | ((0U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                 >> 0x19U))) 
                                                            | (0x20U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                   >> 0x19U)))))))) 
                                                 | (~ 
                                                    ((IData)(vlTOPp->rst_i) 
                                                     | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))));
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = ((~ ((IData)(vlTOPp->rst_i) 
                                               | (0x13U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) 
                                           & ((0x13U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                              & ((0x4000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xdU) 
                                                  | ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)) 
                                                     | ((0U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U))) 
                                                        | (0x20U 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                               >> 0x19U))))))
                                                  : 
                                                 ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xdU) 
                                                  | ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)) 
                                                     | (0U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            >> 0x19U))))))));
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata 
        = ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o) 
             == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o)) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt 
        = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
            ? ((1U & ((~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                      | (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                ? 3U : 1U) : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                               ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                   ? 1U : 3U) : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next 
        = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
            ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                    | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                    ? 3U : 1U) : 0U) : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                             ? 1U : 3U)
                                         : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                           | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                              & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))
                                           ? 0xfU : 
                                          (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                            & (((0x1fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)) 
                                                == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                               | ((0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))
                                            ? 7U : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)
            ? (1ULL + (~ vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i))
            : 0ULL);
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
            ? ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                             ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                        ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                 ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                              ? ((0xfffffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                  << 2U))
                                              : (0xfffffffcU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                          : (0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                    : 0U)) : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o
                               : 0U));
    if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o 
                        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception)
                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
                               - (IData)(4U)) : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o);
                }
            }
        }
    }
    if (((IData)(vlTOPp->rst_i) | (0x73U != (0x7fU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o 
            = ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata 
                       & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                    : (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata 
                       | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                    : 0U));
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o 
            = ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata
                : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata
                    : 0U));
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                     ? (- vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                     ? (- vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                        >> 0x20U)) : 
                            ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                              ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                         >> 0x20U))
                              : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                         >> 0x20U))))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                 ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                            >> 0x20U))
                                 : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                            >> 0x20U)))
                             : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i)))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o 
        = ((- (IData)(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i) 
                       | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)))) 
           & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o);
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
                                           | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o);
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
