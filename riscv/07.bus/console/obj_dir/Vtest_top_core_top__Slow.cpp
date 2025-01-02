// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_core_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_core_top) {
    VL_CELL(regfile0, Vtest_top_regfile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_core_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_core_top::~Vtest_top_core_top() {
}

void Vtest_top_core_top::_settle__TOP__test_top__core_top0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_settle__TOP__test_top__core_top0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add 
        = (1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U]);
    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
        = ((IData)(vlTOPp->rst_i) ? 0x13U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((0x20U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0x13U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 0x13U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U))))
                                                  : 0x13U)
                                              : ((0x20U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0x13U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U))))
                                                  : 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 0x13U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 0x13U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                       : 0x13U)
                                                      : 0x13U)))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? ((0U == 
                                               (7U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0U)))
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                               ? ((0x4000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xdU
                                                     : 0xcU))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 0xbU)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xaU
                                                     : 9U)))
                                               : 0U)));
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
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                    : 0U) : ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                              ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed 
        = VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust 
        = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                  ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o) 
                 >> 0x1fU));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 0x19U))));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o);
    if ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
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
    } else {
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
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o 
            = (1U & ((0x6fU == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                     | (0x67U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
    }
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 5U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 4U)) 
                                                      & ((8U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 2U) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                                          : 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 2U) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)))
                                                         : 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            & (((~ 
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
                                                                   | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)))
                                                         : 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            & ((~ 
                                                                ((IData)(vlTOPp->rst_i) 
                                                                 | (0x13U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) 
                                                               & ((0x13U 
                                                                   == 
                                                                   (0x7fU 
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
                                                                                >> 0x19U))))))))))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o))))))))));
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
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U) : 0U)
                                : 0U);
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                = (0x1fU & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 0U)
                                                  : 0U)
                                              : ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)))
                                 : 0U) : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U))))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (0x1fU & (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                           ? 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 0x14U)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o)
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (0x1fU & (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                           ? 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 0xfU)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o)
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0xfU)
                                                          : 0U)
                                                         : 0U))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 6U) & 
                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 5U) & 
                                          ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 4U)) 
                                           & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 2U) 
                                                  & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 1U) 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o))))
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o)))
                                                   : 
                                                  ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o)))))))));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 4U)) 
                                                      & ((8U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 2U) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
                                                          : 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 2U) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 4U) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((4U 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                           : 
                                                          ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                         : 
                                                        ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o)))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 4U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 3U)) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 2U)) 
                                                            & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 1U) 
                                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o)))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                                                    : 
                                                   ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 4U) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 3U)) 
                                                       & ((~ 
                                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 2U)) 
                                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o))))))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((0x40U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 5U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 4U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                           >> 3U)) 
                                                         & ((4U 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                             : 
                                                            ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 1U) 
                                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))))
                                                : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o)))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o)))))
                                                     : 
                                                    ((~ 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 1U) 
                                                           & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))))));
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
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o 
        = ((- (IData)(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i) 
                       | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)))) 
           & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                           ? ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)))
                                               : 0U)
                                           : ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
                                                       | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o)
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                       + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U))));
}

void Vtest_top_core_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_ctor_var_reset\n"); );
    // Body
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rom_ce_o = VL_RAND_RESET_I(1);
    __PVT__rom_addr_o = VL_RAND_RESET_I(32);
    __PVT__rom_data_i = VL_RAND_RESET_I(32);
    __PVT__ram_ce_o = VL_RAND_RESET_I(1);
    __PVT__ram_addr_o = VL_RAND_RESET_I(32);
    __PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_rdata_i = VL_RAND_RESET_I(32);
    __PVT__ram_we_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_jump_enable_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__mem_mem_ce_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
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
    __PVT__exe0__DOT__i_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__r_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__s_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__s_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__s_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__exe0__DOT__b_jump_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__b_jump_enable_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__m_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_r0__DOT__isType_r = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__isType_m = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__a_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__b_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i = VL_RAND_RESET_Q(64);
    __PVT__exe0__DOT__exe_type_m0__DOT__result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__invert_result = VL_RAND_RESET_Q(64);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt = VL_RAND_RESET_I(6);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S_nxt = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mul_add = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result_tmp);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp);
    __PVT__mem0__DOT__reg_wdata = VL_RAND_RESET_I(32);
}
