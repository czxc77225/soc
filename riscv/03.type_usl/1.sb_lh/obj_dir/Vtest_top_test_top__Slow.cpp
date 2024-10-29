// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_test_top) {
    VL_CELL(regfile0, Vtest_top_regfile);
    VL_CELL(data_ram0, Vtest_top_dpram__R200000_RB15);
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

void Vtest_top_test_top::_settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id_inst_o = ((IData)(vlTOPp->rst_i)
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0x13U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0x13U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))))));
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? ((0U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                   >> 0xcU))) ? 3U : 0U)))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))
                         : ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 7U)))))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                       + ((0xfffff000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x1fU)))) 
                                          << 0xcU)) 
                          | (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0x14U))))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : 0U);
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__ctrl_stall_o = ((IData)(vlTOPp->rst_i)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                                                    & (((0x1fU 
                                                         & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 0xfU)) 
                                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                                       | ((0x1fU 
                                                           & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 0x14U)) 
                                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))
                                                    ? 7U
                                                    : 0U));
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
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((0x23U != 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                         & (3U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
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
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
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
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = 1U;
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = 1U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = 1U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((8U 
                                                         & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U) 
                                                          | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))
                                                         : 
                                                        ((~ 
                                                          ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 2U)) 
                                                         & (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                             >> 1U) 
                                                            | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))))));
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
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
                                                            & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                             ? 
                                                            ((~ 
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
                                                                                >> 0x19U))))))))))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o))))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                             ? 
                                                            ((~ 
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
                                                                                >> 0x19U))))))))))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o))))))))));
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
    vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? 0U : (0x1fU 
                                                 & ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                           ? 
                                                          (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 7U)
                                                          : 0U)
                                                         : 0U))))))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? 0U : (0x1fU 
                                                 & ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                           ? 
                                                          (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x14U)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o)
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? 0U : (0x1fU 
                                                 & ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                           ? 
                                                          (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0xfU)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U))))))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 
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
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o
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
                                                   : 0U))));
    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = (1U 
                                                 & ((~ (IData)(vlTOPp->rst_i)) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 6U)) 
                                                       & ((0x20U 
                                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 4U) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 3U)) 
                                                              & ((4U 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                  ? 
                                                                 ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                  : 
                                                                 ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                     & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o))))))
                                                           : 
                                                          ((0x10U 
                                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 3U)) 
                                                            & ((4U 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                ? 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                : 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o)))))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 3U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 2U)) 
                                                               & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
                                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))
                                                            : 
                                                           ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 4U) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 2U)) 
                                                                  & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      >> 1U) 
                                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                        & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o))))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
                                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
}

void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                        = ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffff0000U & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                   | (0xffffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                           << 0x10U)) 
                                       | (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                    : 0U)));
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                            = ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffffff00U & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                   | (0xffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                       | ((0xff00U 
                                           & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                    : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                        ? ((0xff000000U 
                                            & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                           | ((0xff0000U 
                                               & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                        : ((0xff000000U 
                                            & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                               << 0x18U)) 
                                           | (0xffffffU 
                                              & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                        ? vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o
                        : ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? (0xffffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                  >> 0x10U))
                                    : 0U)) : ((0U == 
                                               (3U 
                                                & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                               ? (0xffU 
                                                  & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 8U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x10U))
                                                    : 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x18U)))))))
                    : ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                        ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top__data_ram0.__PVT__data_o
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                           >> 0x10U)))
                                    : 0U))) : ((1U 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                       >> 7U)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xffffff00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                        >> 0xfU)))) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                           >> 8U)))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     ((0xffffff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                         >> 0x17U)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                            >> 0x10U)))
                                                      : 
                                                     ((0xffffff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                         >> 0x1fU)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                            >> 0x18U))))))
                                                : vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o)));
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                    = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? (0xffffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                  >> 0x10U))
                                    : 0U)) : ((0U == 
                                               (3U 
                                                & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                               ? (0xffU 
                                                  & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 8U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x10U))
                                                    : 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x18U))))));
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top__data_ram0.__PVT__data_o
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                           >> 0x10U)))
                                    : 0U)));
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                            = ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                   | (0xffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                   >> 8U)))
                                    : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                        ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                              >> 0x17U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                 >> 0x10U)))
                                        : ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                              >> 0x1fU)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                 >> 0x18U))))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
                    }
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                             ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                 ? vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o
                                 : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                     : ((2U == (3U 
                                                & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                         ? ((0xffff0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                         : 0U))) : 
                            ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                              ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                  ? ((0xffffff00U & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                     | (0xffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                  : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                      ? ((0xffff0000U 
                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                         | ((0xff00U 
                                             & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                << 8U)) 
                                            | (0xffU 
                                               & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                      : ((2U == (3U 
                                                 & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                          ? ((0xff000000U 
                                              & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                             | ((0xff0000U 
                                                 & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                          : ((0xff000000U 
                                              & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                 << 0x18U)) 
                                             | (0xffffffU 
                                                & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))))
                              : 0U)));
        }
    }
    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? 0U : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                          | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                          ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                         : 0U)
                                                        : 0U)))
                                                     : 0U))));
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
    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? 0U : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                          | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                          ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                         : 0U)
                                                        : 0U)))))));
}

void Vtest_top_test_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    __PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__mem_ram_ce_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    __PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    __PVT__ctrl0__DOT__clk_i = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__i_reg1_raddr_o = VL_RAND_RESET_I(5);
    __PVT__id0__DOT__i_reg2_raddr_o = VL_RAND_RESET_I(5);
    __PVT__id0__DOT__i_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__i_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__i_op1_o = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__i_op2_o = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__i_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__i_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id0__DOT__r_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__r_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__r_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__inst_type_r__DOT__isType_r = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__inst_type_r__DOT__isType_m = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__stallreq_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__i_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__r_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__s_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__s_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__exe0__DOT__exe_type_r0__DOT__isType_r = VL_RAND_RESET_I(1);
}