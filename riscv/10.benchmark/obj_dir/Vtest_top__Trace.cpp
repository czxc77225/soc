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
            tracep->chgBit(oldp+14,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
            tracep->chgBit(oldp+15,(((~ (IData)((((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                    [1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                     [0U]))) 
                                                  - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                 >> 0x3fU))) 
                                     & (0ULL != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
            tracep->chgIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
            tracep->chgQData(oldp+23,((((QData)((IData)(
                                                        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                        [1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                    [0U])))),64);
            tracep->chgQData(oldp+25,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
            tracep->chgQData(oldp+27,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
            tracep->chgBit(oldp+29,((0xffffffffU == 
                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                     [0U])));
            tracep->chgBit(oldp+30,((0U == (0xffU & 
                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                            [0U]))));
            tracep->chgQData(oldp+31,(((((QData)((IData)(
                                                         vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                         [1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                          [0U]))) 
                                       - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
            tracep->chgBit(oldp+33,((1U & (~ (IData)(
                                                     (((((QData)((IData)(
                                                                         vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                         [1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                          [0U]))) 
                                                       - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                      >> 0x3fU))))));
            tracep->chgBit(oldp+34,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
            tracep->chgCData(oldp+35,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
            tracep->chgIData(oldp+36,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
            tracep->chgCData(oldp+40,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
            tracep->chgBit(oldp+41,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
            tracep->chgIData(oldp+44,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                        ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                            ? 0U : 
                                           ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                                        : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                                      ? 
                                                     ((0xfffffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                       << 2U))
                                                      : 
                                                     (0xfffffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                                            : 0U))),32);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                     & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                        | ((0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
            tracep->chgIData(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
            tracep->chgBit(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
            tracep->chgBit(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
            tracep->chgSData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgBit(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
            tracep->chgBit(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
            tracep->chgSData(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o),12);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgBit(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
            tracep->chgSData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
            tracep->chgIData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
            tracep->chgBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
            tracep->chgIData(oldp+86,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
            tracep->chgIData(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
            tracep->chgBit(oldp+90,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
            tracep->chgBit(oldp+91,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                           >> 1U))));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
            tracep->chgBit(oldp+95,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                     | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))));
            tracep->chgBit(oldp+96,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                            & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                           | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                              >> 1U)))));
            tracep->chgIData(oldp+97,((0x3fffffffU 
                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                                          >> 2U))),30);
            tracep->chgIData(oldp+98,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                        ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                            ? ((0xfffffffcU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                               + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                  << 2U))
                                            : (0xfffffffcU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                        : (0xfffffffcU 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
            tracep->chgIData(oldp+99,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                        ? ((0xfffffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                           + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                              << 2U))
                                        : (0xfffffffcU 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
            tracep->chgIData(oldp+100,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                        << 2U)),32);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
            tracep->chgIData(oldp+102,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
            tracep->chgCData(oldp+103,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x19U))),7);
            tracep->chgCData(oldp+104,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+105,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+106,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+107,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+108,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
            tracep->chgIData(oldp+113,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgBit(oldp+114,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
            tracep->chgCData(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
            tracep->chgCData(oldp+116,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xfU))
                                         : 0U)),5);
            tracep->chgCData(oldp+117,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))
                                         : 0U)),5);
            tracep->chgBit(oldp+118,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+121,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgBit(oldp+122,((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
            tracep->chgCData(oldp+125,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+126,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+127,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U))),7);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
            tracep->chgBit(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
            tracep->chgBit(oldp+130,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgBit(oldp+131,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgIData(oldp+132,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                        >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgIData(oldp+133,((0xffffffffU 
                                        >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgBit(oldp+134,((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
            tracep->chgIData(oldp+136,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+137,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 7U))))),32);
            tracep->chgBit(oldp+138,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
            tracep->chgIData(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
            tracep->chgIData(oldp+142,(((0xfff00000U 
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
            tracep->chgBit(oldp+143,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
            tracep->chgIData(oldp+144,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
            tracep->chgBit(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
            tracep->chgQData(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
            tracep->chgBit(oldp+149,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+150,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+151,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
            tracep->chgBit(oldp+153,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
            tracep->chgIData(oldp+154,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
            tracep->chgWData(oldp+155,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
            tracep->chgCData(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
            tracep->chgBit(oldp+160,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
            tracep->chgQData(oldp+162,((0x1ffffffffULL 
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
            tracep->chgWData(oldp+164,(__Vtemp3),65);
            tracep->chgBit(oldp+167,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
            tracep->chgIData(oldp+168,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
            tracep->chgWData(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
            tracep->chgCData(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
            tracep->chgIData(oldp+174,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                           >> 1U))),32);
            tracep->chgCData(oldp+175,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
            tracep->chgBit(oldp+176,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
            tracep->chgQData(oldp+177,((0x1ffffffffULL 
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
            tracep->chgWData(oldp+179,(__Vtemp4),65);
            tracep->chgBit(oldp+182,((0x73U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
            tracep->chgCData(oldp+183,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgQData(oldp+184,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
            tracep->chgQData(oldp+186,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
            tracep->chgIData(oldp+188,((0x1800U | (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                                    << 7U) 
                                                   | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                      << 3U)))),32);
            tracep->chgBit(oldp+189,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
            tracep->chgBit(oldp+190,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+191,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                          << 7U) | 
                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                          << 3U)))),32);
            tracep->chgBit(oldp+192,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
            tracep->chgBit(oldp+193,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+194,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
            tracep->chgBit(oldp+195,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgBit(oldp+196,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+197,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                         << 0x1fU) 
                                        | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                            << 4U) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
            tracep->chgCData(oldp+198,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
            tracep->chgIData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
            tracep->chgBit(oldp+200,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
            tracep->chgIData(oldp+202,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                          << 7U) | 
                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                          << 3U)))),32);
            tracep->chgIData(oldp+203,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
            tracep->chgBit(oldp+204,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+205,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+207,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+208,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+209,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+210,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+211,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+212,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+213,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+215,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+216,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+218,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+219,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+220,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+238,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                       & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                      | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                         & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
            tracep->chgBit(oldp+239,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o))));
            tracep->chgIData(oldp+240,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                         : 0U)),32);
            tracep->chgIData(oldp+241,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                         : 0U)),32);
            tracep->chgCData(oldp+242,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
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
            tracep->chgCData(oldp+243,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
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
            tracep->chgBit(oldp+244,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
            tracep->chgIData(oldp+246,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
            tracep->chgBit(oldp+247,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
            tracep->chgIData(oldp+248,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
            tracep->chgIData(oldp+249,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
            tracep->chgBit(oldp+250,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
            tracep->chgBit(oldp+251,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
            tracep->chgBit(oldp+252,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
            tracep->chgIData(oldp+253,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
            tracep->chgIData(oldp+255,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
            tracep->chgBit(oldp+256,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
            tracep->chgBit(oldp+257,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
            tracep->chgIData(oldp+259,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
            tracep->chgIData(oldp+260,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
            tracep->chgIData(oldp+261,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
            tracep->chgIData(oldp+262,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
            tracep->chgIData(oldp+263,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
            tracep->chgIData(oldp+264,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
            tracep->chgBit(oldp+265,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgIData(oldp+267,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgBit(oldp+268,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
            tracep->chgIData(oldp+269,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+270,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgBit(oldp+271,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+272,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+273,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
            tracep->chgIData(oldp+274,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+275,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+276,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgBit(oldp+277,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+278,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
            tracep->chgIData(oldp+280,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+283,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+284,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+285,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgBit(oldp+286,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+287,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
            tracep->chgCData(oldp+288,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
            tracep->chgBit(oldp+289,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [0U]));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [0U]));
            tracep->chgIData(oldp+291,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U]),32);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
            tracep->chgSData(oldp+294,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U])),16);
            tracep->chgBit(oldp+295,((0xbff8U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+296,((0xbffcU == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+297,((0x4000U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+298,((0x4004U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+299,((0U == (0xffffU 
                                             & vlSymsp->TOP__test_top.__PVT__device_addr
                                             [0U]))));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [2U]));
            tracep->chgBit(oldp+301,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [2U]));
            tracep->chgIData(oldp+302,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [2U]),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [2U]),32);
            tracep->chgCData(oldp+304,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [2U])),8);
            tracep->chgBit(oldp+305,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
            tracep->chgIData(oldp+306,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
            tracep->chgIData(oldp+307,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+309,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
            tracep->chgIData(oldp+310,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
            tracep->chgBit(oldp+311,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
            tracep->chgIData(oldp+312,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
            tracep->chgCData(oldp+313,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
            tracep->chgCData(oldp+315,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+316,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+317,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+318,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+319,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+320,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
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
            tracep->chgIData(oldp+321,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
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
            tracep->chgBit(oldp+322,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+323,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
            tracep->chgBit(oldp+324,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
            tracep->chgSData(oldp+325,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
            tracep->chgIData(oldp+326,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                         << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
            tracep->chgCData(oldp+327,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+328,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+329,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
            tracep->chgIData(oldp+330,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
            tracep->chgBit(oldp+331,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
            tracep->chgIData(oldp+332,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
            tracep->chgCData(oldp+333,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
            tracep->chgIData(oldp+334,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
            tracep->chgBit(oldp+335,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
            tracep->chgIData(oldp+336,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
            tracep->chgCData(oldp+337,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+338,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+339,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
            tracep->chgIData(oldp+340,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
            tracep->chgBit(oldp+341,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
            tracep->chgSData(oldp+342,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o),12);
            tracep->chgIData(oldp+343,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
            tracep->chgIData(oldp+344,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+345,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
            tracep->chgBit(oldp+346,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
            tracep->chgBit(oldp+347,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
            tracep->chgIData(oldp+348,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+349,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgIData(oldp+350,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
            tracep->chgCData(oldp+351,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+352,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
            tracep->chgIData(oldp+353,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
            tracep->chgBit(oldp+354,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
            tracep->chgIData(oldp+355,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
            tracep->chgIData(oldp+356,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
            tracep->chgBit(oldp+357,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
            tracep->chgCData(oldp+358,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
            tracep->chgIData(oldp+359,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
            tracep->chgIData(oldp+360,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o),32);
            tracep->chgIData(oldp+361,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o),32);
            tracep->chgIData(oldp+362,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
            tracep->chgIData(oldp+363,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
            tracep->chgIData(oldp+364,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
            tracep->chgBit(oldp+365,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
            tracep->chgBit(oldp+366,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
            tracep->chgBit(oldp+367,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
            tracep->chgIData(oldp+368,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
            tracep->chgQData(oldp+369,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
            tracep->chgBit(oldp+371,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
            tracep->chgBit(oldp+372,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
            tracep->chgBit(oldp+373,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
            tracep->chgBit(oldp+374,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
            tracep->chgBit(oldp+375,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [1U]));
            tracep->chgIData(oldp+376,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [1U]),32);
            tracep->chgBit(oldp+377,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [1U]));
            tracep->chgIData(oldp+378,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [1U]),32);
            tracep->chgIData(oldp+379,((0x1ffffcU & 
                                        vlSymsp->TOP__test_top.__PVT__device_addr
                                        [1U])),21);
        }
        tracep->chgBit(oldp+380,(vlTOPp->clk_i));
        tracep->chgBit(oldp+381,(vlTOPp->rst_i));
        tracep->chgBit(oldp+382,(vlTOPp->halt_o));
        tracep->chgIData(oldp+383,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
        tracep->chgBit(oldp+384,(((~ (IData)(vlTOPp->rst_i)) 
                                  & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->chgBit(oldp+385,(((~ ((IData)(vlTOPp->rst_i) 
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
        tracep->chgBit(oldp+386,((1U & ((~ ((IData)(vlTOPp->rst_i) 
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
        tracep->chgBit(oldp+387,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                           | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
        tracep->chgIData(oldp+388,((vlSymsp->TOP__test_top.__PVT__device_req
                                    [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1ffffcU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [1U])] 
                                             << 0x18U) 
                                            | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__test_top.__PVT__device_addr
                                                      [1U])))] 
                                                << 0x10U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__device_addr
                                                        [1U])))] 
                                                   << 8U) 
                                                  | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__device_addr
                                                       [1U])))])))
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
    }
}
