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
            tracep->chgIData(oldp+0,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                                    & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                       | ((0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
            tracep->chgBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+14,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgCData(oldp+25,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+26,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+27,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+28,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+29,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+30,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+31,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
            tracep->chgCData(oldp+32,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o),5);
            tracep->chgBit(oldp+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o));
            tracep->chgIData(oldp+35,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgBit(oldp+36,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
            tracep->chgCData(oldp+37,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
            tracep->chgCData(oldp+38,((((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgCData(oldp+39,((((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                        : 0U)),5);
            tracep->chgBit(oldp+40,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+43,((((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                        | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgBit(oldp+44,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
            tracep->chgCData(oldp+47,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+48,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+49,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o),32);
            tracep->chgBit(oldp+51,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_enable_o));
            tracep->chgBit(oldp+52,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
            tracep->chgBit(oldp+53,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                     >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
            tracep->chgIData(oldp+54,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                       >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))),32);
            tracep->chgIData(oldp+55,((0xffffffffU 
                                       >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))),32);
            tracep->chgBit(oldp+56,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
            tracep->chgIData(oldp+58,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+59,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0xfe0U & 
                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))),32);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
            tracep->chgIData(oldp+63,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
            tracep->chgIData(oldp+64,(((0xfff00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0x14U)) 
                                       | ((0xff000U 
                                           & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o) 
                                          | ((0x800U 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x14U)))))),32);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
            tracep->chgIData(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
            tracep->chgQData(oldp+69,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
            tracep->chgBit(oldp+71,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+72,((1U & (vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+73,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
            tracep->chgBit(oldp+75,((1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
            tracep->chgWData(oldp+77,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
            tracep->chgBit(oldp+82,((1U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
            tracep->chgIData(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
            tracep->chgQData(oldp+84,((0x1ffffffffULL 
                                       & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                          + (QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]))))),33);
            __Vtemp3[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
            __Vtemp3[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                       + (QData)((IData)(
                                                         vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
            __Vtemp3[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                        + (QData)((IData)(
                                                          vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+86,(__Vtemp3),65);
            tracep->chgBit(oldp+89,((1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
            tracep->chgIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
            tracep->chgWData(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
            tracep->chgIData(oldp+96,(((vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                        >> 1U))),32);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
            tracep->chgBit(oldp+98,((vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                     >= vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
            tracep->chgQData(oldp+99,((0x1ffffffffULL 
                                       & ((QData)((IData)(
                                                          vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                          - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
            __Vtemp4[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
            __Vtemp4[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(
                                                       vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                       - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
            __Vtemp4[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+101,(__Vtemp4),65);
            tracep->chgCData(oldp+104,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+108,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+113,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+114,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
            tracep->chgIData(oldp+137,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+138,((((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                       & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                      | ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                         & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
            tracep->chgIData(oldp+139,((((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                         : 0U)),32);
            tracep->chgIData(oldp+140,((((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                         : 0U)),32);
            tracep->chgCData(oldp+141,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                         ? ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                                                   | (~ (IData)(
                                                                (0U 
                                                                 != vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                                             ? 3U : 1U)
                                         : ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                                 ? 1U
                                                 : 3U)
                                             : 0U))),3);
            tracep->chgCData(oldp+142,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                             ? (((0U 
                                                  == vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                                 | (0U 
                                                    == vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                                 ? 3U
                                                 : 1U)
                                             : 0U) : 
                                        ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+143,(vlSymsp->TOP__test_top__data_ram0.__PVT__data_o),32);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
            tracep->chgCData(oldp+145,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
            tracep->chgCData(oldp+146,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+147,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+148,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+150,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+151,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                             ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                             : 0U) : 
                                        ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                          & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                             == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                              ? vlSymsp->TOP__test_top.__PVT__mem0__DOT__reg_wdata
                                              : 0U)
                                          : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))),32);
            tracep->chgIData(oldp+152,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                             ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                             : 0U) : 
                                        ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                          & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                             == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                              ? vlSymsp->TOP__test_top.__PVT__mem0__DOT__reg_wdata
                                              : 0U)
                                          : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))),32);
            tracep->chgBit(oldp+153,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+154,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+155,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+156,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+157,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+159,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+160,(vlSymsp->TOP__test_top.__PVT__mem0__DOT__reg_wdata),32);
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o),32);
            tracep->chgBit(oldp+162,(vlSymsp->TOP__test_top.__PVT__mem_mem_we_o));
            tracep->chgIData(oldp+163,(vlSymsp->TOP__test_top.__PVT__mem_mem_data_o),32);
            tracep->chgIData(oldp+164,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+165,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
            tracep->chgBit(oldp+166,(vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o));
            tracep->chgIData(oldp+167,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+168,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgIData(oldp+169,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
            tracep->chgCData(oldp+170,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+171,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o),32);
            tracep->chgIData(oldp+172,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o),32);
            tracep->chgBit(oldp+173,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o));
            tracep->chgIData(oldp+174,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o),32);
            tracep->chgIData(oldp+175,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o),32);
            tracep->chgBit(oldp+176,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o));
            tracep->chgCData(oldp+177,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o),4);
            tracep->chgIData(oldp+178,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__m_reg_wdata_o),32);
            tracep->chgIData(oldp+179,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
            tracep->chgIData(oldp+180,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
            tracep->chgBit(oldp+181,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
            tracep->chgIData(oldp+184,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
            tracep->chgQData(oldp+185,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
            tracep->chgBit(oldp+187,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
            tracep->chgBit(oldp+188,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
            tracep->chgBit(oldp+189,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
            tracep->chgBit(oldp+190,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
            tracep->chgIData(oldp+191,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)),21);
        }
        tracep->chgBit(oldp+192,(vlTOPp->rst_i));
        tracep->chgBit(oldp+193,(vlTOPp->clk_i));
        tracep->chgBit(oldp+194,(vlTOPp->halt_o));
        tracep->chgIData(oldp+195,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                         [(0x1ffffcU 
                                           & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                     : 0U)),32);
        tracep->chgIData(oldp+196,(((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                     ? ((IData)(vlTOPp->rst_i)
                                         ? 0U : ((0x40U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
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
                                                       (0xfffffffeU 
                                                        & (vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o 
                                                           + vlSymsp->TOP__test_top.__PVT__id_exe_op1_o))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 0U))
                                     : 0U)),32);
        tracep->chgIData(oldp+197,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                       : 0U)
                                                      : 0U)))))))),32);
        tracep->chgBit(oldp+198,(((~ (IData)(vlTOPp->rst_i)) 
                                  & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 6U)) & 
                                     ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                       ? ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 4U)) 
                                          & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 3U)) 
                                             & ((~ 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o))))))
                                       : ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 4U)) 
                                          & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 3U)) 
                                             & ((~ 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o)))))))))));
        tracep->chgIData(oldp+199,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                       : 0U)
                                                      : 0U)))))))),32);
        tracep->chgCData(oldp+200,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                       : 0U)
                                                      : 0U))))
                                               : ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                       : 0U)
                                                      : 0U)))))))),4);
        tracep->chgIData(oldp+201,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((0x20U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
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
                                                      (0xfffffffeU 
                                                       & (vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o 
                                                          + vlSymsp->TOP__test_top.__PVT__id_exe_op1_o))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_jump_addr_o
                                                       : 0U)
                                                      : 0U))))
                                                  : 0U)
                                              : 0U))),32);
        tracep->chgBit(oldp+202,(((~ ((IData)(vlTOPp->rst_i) 
                                      | (0x13U != (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)))) 
                                  & ((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                     & ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xdU) 
                                            | ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
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
                                         : ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xdU) 
                                            | ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0xcU)) 
                                               | (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 0x19U))))))))));
        tracep->chgBit(oldp+203,((1U & ((~ ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                        & ((0x4000U 
                                            & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                            ? ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
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
                                            : ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
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
                                                            >> 0x19U)))))))))));
        tracep->chgBit(oldp+204,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                           | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
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
    }
}
