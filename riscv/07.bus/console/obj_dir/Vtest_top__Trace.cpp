// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtest_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
            tracep->chgCData(oldp+16,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                     & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                        | ((0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
            tracep->chgIData(oldp+21,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
            tracep->chgBit(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
            tracep->chgCData(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgBit(oldp+33,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+34,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgCData(oldp+39,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+40,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+41,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+42,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+43,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+44,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
            tracep->chgCData(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
            tracep->chgIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgBit(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
            tracep->chgCData(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
            tracep->chgCData(oldp+52,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgCData(oldp+53,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                        : 0U)),5);
            tracep->chgBit(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+57,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgBit(oldp+58,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
            tracep->chgCData(oldp+61,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+62,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+63,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
            tracep->chgBit(oldp+66,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgBit(oldp+67,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                     >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgIData(oldp+68,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                       >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgIData(oldp+69,((0xffffffffU 
                                       >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgBit(oldp+70,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
            tracep->chgIData(oldp+72,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+73,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0xfe0U & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))),32);
            tracep->chgBit(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
            tracep->chgIData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
            tracep->chgIData(oldp+78,(((0xfff00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0x14U)) 
                                       | ((0xff000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                          | ((0x800U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U)))))),32);
            tracep->chgBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
            tracep->chgIData(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
            tracep->chgQData(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
            tracep->chgBit(oldp+85,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+86,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+87,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
            tracep->chgBit(oldp+89,((1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
            tracep->chgIData(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
            tracep->chgWData(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
            tracep->chgBit(oldp+96,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
            tracep->chgIData(oldp+97,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
            tracep->chgQData(oldp+98,((0x1ffffffffULL 
                                       & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                          + (QData)((IData)(
                                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]))))),33);
            __Vtemp3[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
            __Vtemp3[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                       + (QData)((IData)(
                                                         vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
            __Vtemp3[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                        + (QData)((IData)(
                                                          vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+100,(__Vtemp3),65);
            tracep->chgBit(oldp+103,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
            tracep->chgIData(oldp+104,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
            tracep->chgWData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
            tracep->chgIData(oldp+110,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                           >> 1U))),32);
            tracep->chgCData(oldp+111,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
            tracep->chgBit(oldp+112,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
            tracep->chgQData(oldp+113,((0x1ffffffffULL 
                                        & ((QData)((IData)(
                                                           vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
            __Vtemp4[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
            __Vtemp4[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(
                                                       vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                       - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
            __Vtemp4[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+115,(__Vtemp4),65);
            tracep->chgCData(oldp+118,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgIData(oldp+119,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+152,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                       & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                      | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                         & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
            tracep->chgIData(oldp+153,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                         : 0U)),32);
            tracep->chgIData(oldp+154,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                         : 0U)),32);
            tracep->chgCData(oldp+155,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                         ? ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                                                   | (~ (IData)(
                                                                (0U 
                                                                 != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                                             ? 3U : 1U)
                                         : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                                 ? 1U
                                                 : 3U)
                                             : 0U))),3);
            tracep->chgCData(oldp+156,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                             ? (((0U 
                                                  == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                                 | (0U 
                                                    == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                                 ? 3U
                                                 : 1U)
                                             : 0U) : 
                                        ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+157,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_resp));
            tracep->chgCData(oldp+158,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
            tracep->chgBit(oldp+159,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_interrupt_o));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_enable));
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__timer_count),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+162,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
            tracep->chgIData(oldp+164,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
            tracep->chgBit(oldp+165,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
            tracep->chgIData(oldp+166,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
            tracep->chgIData(oldp+167,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
            tracep->chgBit(oldp+168,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
            tracep->chgIData(oldp+171,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
            tracep->chgIData(oldp+172,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
            tracep->chgIData(oldp+173,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
            tracep->chgBit(oldp+174,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
            tracep->chgIData(oldp+177,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
            tracep->chgIData(oldp+178,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
            tracep->chgIData(oldp+179,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
            tracep->chgIData(oldp+180,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
            tracep->chgIData(oldp+181,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
            tracep->chgIData(oldp+182,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
            tracep->chgBit(oldp+183,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgIData(oldp+185,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgBit(oldp+186,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
            tracep->chgIData(oldp+187,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+188,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgBit(oldp+189,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+191,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
            tracep->chgIData(oldp+192,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+193,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+194,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgBit(oldp+195,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+197,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
            tracep->chgIData(oldp+198,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+199,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+200,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+201,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+202,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+203,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+205,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__unnamedblk1__DOT__host),32);
            tracep->chgIData(oldp+207,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__unnamedblk2__DOT__device),32);
            tracep->chgBit(oldp+208,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [1U]));
            tracep->chgBit(oldp+209,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [1U]));
            tracep->chgIData(oldp+210,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [1U]),32);
            tracep->chgIData(oldp+211,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [1U]),32);
            tracep->chgCData(oldp+212,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [1U])),8);
            tracep->chgBit(oldp+213,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [2U]));
            tracep->chgBit(oldp+214,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [2U]));
            tracep->chgIData(oldp+215,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [2U]),32);
            tracep->chgIData(oldp+216,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [2U]),32);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__test_top.__Vcellout__timer0__rdata_o),32);
            tracep->chgBit(oldp+218,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
            tracep->chgIData(oldp+219,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
            tracep->chgIData(oldp+220,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
            tracep->chgIData(oldp+221,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
            tracep->chgCData(oldp+224,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+227,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+229,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+230,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                             : 0U) : 
                                        ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                          & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                             == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                              ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                              : 0U)
                                          : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
            tracep->chgIData(oldp+231,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                             : 0U) : 
                                        ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                          & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                             == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                              ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                              : 0U)
                                          : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
            tracep->chgBit(oldp+232,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+233,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+235,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+238,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+239,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
            tracep->chgIData(oldp+240,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
            tracep->chgIData(oldp+242,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+243,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgIData(oldp+244,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
            tracep->chgCData(oldp+245,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+246,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
            tracep->chgIData(oldp+247,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
            tracep->chgBit(oldp+248,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
            tracep->chgIData(oldp+249,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
            tracep->chgIData(oldp+250,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
            tracep->chgBit(oldp+251,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
            tracep->chgCData(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
            tracep->chgIData(oldp+253,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
            tracep->chgIData(oldp+255,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
            tracep->chgBit(oldp+256,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
            tracep->chgBit(oldp+257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
            tracep->chgIData(oldp+259,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
            tracep->chgQData(oldp+260,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
            tracep->chgBit(oldp+262,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
            tracep->chgBit(oldp+263,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
            tracep->chgBit(oldp+264,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
            tracep->chgBit(oldp+265,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [0U]));
            tracep->chgIData(oldp+267,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U]),32);
            tracep->chgBit(oldp+268,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [0U]));
            tracep->chgIData(oldp+269,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+270,((0x1ffffcU & 
                                        vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U])),21);
        }
        tracep->chgBit(oldp+271,(vlTOPp->clk_i));
        tracep->chgBit(oldp+272,(vlTOPp->rst_i));
        tracep->chgBit(oldp+273,(vlTOPp->halt_o));
        tracep->chgIData(oldp+274,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                         [(0x1ffffcU 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                                     : 0U)),32);
        tracep->chgIData(oldp+275,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
                                     ? ((IData)(vlTOPp->rst_i)
                                         ? 0U : ((0x40U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x20U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
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
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
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
                                                       (0xfffffffeU 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
                                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 0U))
                                     : 0U)),32);
        tracep->chgIData(oldp+276,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o
                                                       : 0U)
                                                      : 0U)))))))),32);
        tracep->chgBit(oldp+277,(((~ (IData)(vlTOPp->rst_i)) 
                                  & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                         >> 6U)) & 
                                     ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                       ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 4U)) 
                                          & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 3U)) 
                                             & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o))))))
                                       : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 4U)) 
                                          & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 3U)) 
                                             & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o)))))))))));
        tracep->chgIData(oldp+278,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o
                                                       : 0U)
                                                      : 0U)))))))),32);
        tracep->chgCData(oldp+279,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o)
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o)
                                                       : 0U)
                                                      : 0U)))))))),4);
        tracep->chgIData(oldp+280,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((0x20U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x10U 
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
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
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
                                                      (0xfffffffeU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o 
                                                          + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o
                                                       : 0U)
                                                      : 0U))))
                                                  : 0U)
                                              : 0U))),32);
        tracep->chgBit(oldp+281,(((~ ((IData)(vlTOPp->rst_i) 
                                      | (0x13U != (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) 
                                  & ((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                     & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0xdU) 
                                            | ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
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
                                         : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0xdU) 
                                            | ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xcU)) 
                                               | (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x19U))))))))));
        tracep->chgBit(oldp+282,((1U & ((~ ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                        & ((0x4000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                            ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
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
                                            : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
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
                                                            >> 0x19U)))))))))));
        tracep->chgBit(oldp+283,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                           | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
        tracep->chgIData(oldp+284,((vlSymsp->TOP__test_top.__PVT__device_req
                                    [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1ffffcU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U])] 
                                             << 0x18U) 
                                            | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__test_top.__PVT__device_addr
                                                      [0U])))] 
                                                << 0x10U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__device_addr
                                                        [0U])))] 
                                                   << 8U) 
                                                  | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__device_addr
                                                       [0U])))])))
                                     : 0U)),32);
    }
}

void Vtest_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
