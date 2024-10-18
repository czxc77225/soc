// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    vlSymsp->TOP__test_top.__Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                               ? ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top.__PVT__pc_wire)
                                               : 0U);
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o;
    }
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
            = vlSymsp->TOP__test_top.__PVT__pc_wire;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                    ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                    : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                              ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : 0U) : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final));
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
            = vlSymsp->TOP__test_top.__PVT__id_inst_o;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                    ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                    : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                              ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : 0U) : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final));
        vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
            = vlSymsp->TOP__test_top__rom0.__PVT__inst_o;
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
            = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                        >> 7U));
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
        = ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
            ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0x1000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 0x19U))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x19U))))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 0x14U)))))
                : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0x1000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x19U)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                        >> 0x14U))))))
            : 0U);
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 0U;
    }
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
            = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                        >> 0xfU));
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__pc_wire = vlSymsp->TOP__test_top.__Vdly__pc_wire;
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o;
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
            = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x19U))) 
                                  | (0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x19U))))))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                          >> 0xdU)))) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((0U != (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o = 0U;
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
                                        = (0xfffff000U 
                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
                                        = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? 0U : ((0x20U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U))));
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x13U != (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)))
            ? 0U : ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                     ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                 : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                             : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                            >> vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                         : 0U) : ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 0x19U)))
                                                   ? 
                                                  (((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)) 
                                                    & (0xffffffffU 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      & (~ 
                                                         (0xffffffffU 
                                                          >> 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))))
                                                   : 0U))
                                 : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                         : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? (1U & (- (IData)(
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))
                                 : (1U & (- (IData)(
                                                    VL_LTS_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))))
                             : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                            << vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                         : 0U) : 0U)
                                 : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))
                     : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
                                                            & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                            ? 
                                                           ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 4U) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 3U)) 
                                                               & ((4U 
                                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                                   ? 
                                                                  ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                                   : 
                                                                  ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & ((~ 
                                                                          ((IData)(vlTOPp->rst_i) 
                                                                           | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                                                         & ((0x4000U 
                                                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                                             ? 
                                                                            ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                              >> 0xdU) 
                                                                             | ((~ 
                                                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xcU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U))) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U))))))
                                                                             : 
                                                                            ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                              >> 0xdU) 
                                                                             | ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xcU) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U))) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U)))))))))))))
                                                            : 
                                                           ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 4U) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 3U)) 
                                                               & ((4U 
                                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                                   ? 
                                                                  ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                                   : 
                                                                  ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & ((~ 
                                                                          ((IData)(vlTOPp->rst_i) 
                                                                           | (0x13U 
                                                                              != 
                                                                              (0x7fU 
                                                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)))) 
                                                                         & ((0x13U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                                                            & ((0x4000U 
                                                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                                                ? 
                                                                               ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xdU) 
                                                                                | ((~ 
                                                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xcU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U))) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U))))))
                                                                                : 
                                                                               ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xdU) 
                                                                                | ((~ 
                                                                                (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0xcU)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                                >> 0x19U)))))))))))))))));
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                             : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))
                                 ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                 : ((0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x19U)))
                                     ? (((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                          >> (0x1fU 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)) 
                                         & (0xffffffffU 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                          >> 0x1fU)))) 
                                           & (~ (0xffffffffU 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))))
                                     : 0U)) : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? (1U & (- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))
                             : (1U & (- (IData)(VL_LTS_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))))
                         : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                << (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                             : ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))
                                 ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                    + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                 : ((0x20U == (0x7fU 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x19U)))
                                     ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                        - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                     : 0U))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
                                        = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 7U))
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U));
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
                                        = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0x14U))
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
                                        = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU))
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg_we_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_we_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = 1U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg_we_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o
                                                  : 0U)
                                              : 0U)))
                             : 0U) : ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                       ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                           ? 0U : (
                                                   (4U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                      + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o
                                                      : 0U)
                                                     : 0U)))
                                       : 0U)));
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final = 0U;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
                                        = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                            | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                                ? 0U
                                                : (
                                                   ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                                                     & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                                                    ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                                                     ? 
                                                    vlSymsp->TOP__test_top__regfile0.__PVT__regs
                                                    [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                                                     : 0U)))
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
                                        = (0xfffff000U 
                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o);
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
                                        = vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
