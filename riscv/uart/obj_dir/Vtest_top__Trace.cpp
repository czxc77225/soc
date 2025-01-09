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
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
            tracep->chgBit(oldp+22,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
            tracep->chgBit(oldp+23,(((~ (IData)((((
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
            tracep->chgBit(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
            tracep->chgIData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
            tracep->chgQData(oldp+31,((((QData)((IData)(
                                                        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                        [1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                    [0U])))),64);
            tracep->chgQData(oldp+33,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
            tracep->chgQData(oldp+35,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
            tracep->chgBit(oldp+37,((0xffffffffU == 
                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                     [0U])));
            tracep->chgQData(oldp+38,(((((QData)((IData)(
                                                         vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                         [1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                          [0U]))) 
                                       - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
            tracep->chgBit(oldp+40,((1U & (~ (IData)(
                                                     (((((QData)((IData)(
                                                                         vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                         [1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                          [0U]))) 
                                                       - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                      >> 0x3fU))))));
            tracep->chgBit(oldp+41,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
            tracep->chgCData(oldp+42,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
            tracep->chgCData(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
            tracep->chgIData(oldp+51,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
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
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                     & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                        | ((0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
            tracep->chgIData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
            tracep->chgBit(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
            tracep->chgSData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
            tracep->chgCData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgBit(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
            tracep->chgBit(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
            tracep->chgSData(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o),12);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
            tracep->chgCData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
            tracep->chgSData(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
            tracep->chgIData(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
            tracep->chgIData(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
            tracep->chgIData(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
            tracep->chgBit(oldp+97,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
            tracep->chgBit(oldp+98,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                           >> 1U))));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
            tracep->chgBit(oldp+102,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                       | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))));
            tracep->chgBit(oldp+103,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                             & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                            | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                               >> 1U)))));
            tracep->chgIData(oldp+104,((0x3fffffffU 
                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                                           >> 2U))),30);
            tracep->chgIData(oldp+105,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                             ? ((0xfffffffcU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                   << 2U))
                                             : (0xfffffffcU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                         : (0xfffffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
            tracep->chgIData(oldp+106,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                         ? ((0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                            + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                               << 2U))
                                         : (0xfffffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
            tracep->chgIData(oldp+107,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                        << 2U)),32);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
            tracep->chgIData(oldp+109,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
            tracep->chgCData(oldp+110,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x19U))),7);
            tracep->chgCData(oldp+111,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+112,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+113,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+114,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+115,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
            tracep->chgCData(oldp+117,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
            tracep->chgBit(oldp+118,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
            tracep->chgIData(oldp+120,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgBit(oldp+121,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
            tracep->chgCData(oldp+122,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
            tracep->chgCData(oldp+123,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xfU))
                                         : 0U)),5);
            tracep->chgCData(oldp+124,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))
                                         : 0U)),5);
            tracep->chgBit(oldp+125,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+128,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? (0x1fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgBit(oldp+129,((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgBit(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
            tracep->chgCData(oldp+132,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+133,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+134,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U))),7);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
            tracep->chgBit(oldp+136,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
            tracep->chgBit(oldp+137,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgBit(oldp+138,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
            tracep->chgIData(oldp+139,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                        >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgIData(oldp+140,((0xffffffffU 
                                        >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
            tracep->chgBit(oldp+141,((0x13U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
            tracep->chgIData(oldp+143,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+144,(((0xfffff000U 
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
            tracep->chgBit(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
            tracep->chgIData(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
            tracep->chgIData(oldp+149,(((0xfff00000U 
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
            tracep->chgBit(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
            tracep->chgIData(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
            tracep->chgBit(oldp+152,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
            tracep->chgQData(oldp+154,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
            tracep->chgBit(oldp+156,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+157,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+158,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
            tracep->chgBit(oldp+160,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
            tracep->chgIData(oldp+161,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
            tracep->chgWData(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
            tracep->chgCData(oldp+165,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
            tracep->chgCData(oldp+166,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
            tracep->chgBit(oldp+167,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
            tracep->chgIData(oldp+168,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
            tracep->chgQData(oldp+169,((0x1ffffffffULL 
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
            tracep->chgWData(oldp+171,(__Vtemp3),65);
            tracep->chgBit(oldp+174,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
            tracep->chgIData(oldp+175,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
            tracep->chgWData(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+180,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
            tracep->chgIData(oldp+181,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                           >> 1U))),32);
            tracep->chgCData(oldp+182,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
            tracep->chgBit(oldp+183,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
            tracep->chgQData(oldp+184,((0x1ffffffffULL 
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
            tracep->chgWData(oldp+186,(__Vtemp4),65);
            tracep->chgBit(oldp+189,((0x73U == (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
            tracep->chgCData(oldp+190,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgQData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
            tracep->chgQData(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
            tracep->chgIData(oldp+195,((0x1800U | (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                                    << 7U) 
                                                   | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                      << 3U)))),32);
            tracep->chgBit(oldp+196,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
            tracep->chgBit(oldp+197,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+198,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                          << 7U) | 
                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                          << 3U)))),32);
            tracep->chgBit(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
            tracep->chgBit(oldp+200,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
            tracep->chgBit(oldp+202,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgBit(oldp+203,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+204,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                         << 0x1fU) 
                                        | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                            << 4U) 
                                           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
            tracep->chgBit(oldp+207,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
            tracep->chgIData(oldp+209,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                          << 7U) | 
                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                          << 3U)))),32);
            tracep->chgIData(oldp+210,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
            tracep->chgBit(oldp+211,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
            tracep->chgIData(oldp+212,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+213,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+215,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+216,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+218,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+219,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+220,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+238,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+239,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+240,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+242,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+243,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+244,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+245,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                       & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                      | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                         & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
            tracep->chgBit(oldp+246,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o))));
            tracep->chgIData(oldp+247,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                         : 0U)),32);
            tracep->chgIData(oldp+248,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                         ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                         : 0U)),32);
            tracep->chgCData(oldp+249,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
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
            tracep->chgCData(oldp+250,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
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
            tracep->chgBit(oldp+251,(vlSymsp->TOP__test_top.__PVT__uart0_tx_o));
            tracep->chgBit(oldp+252,(vlSymsp->TOP__test_top.__PVT__uart1_tx_o));
            tracep->chgBit(oldp+253,(vlSymsp->TOP__test_top.__PVT__uart0_irq_o));
            tracep->chgBit(oldp+254,(vlSymsp->TOP__test_top.__PVT__uart1_irq_o));
            tracep->chgIData(oldp+255,(vlSymsp->TOP__test_top.__Vcellout__uart0__data_o),32);
            tracep->chgCData(oldp+256,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_ctrl),8);
            tracep->chgCData(oldp+257,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__uart_status),8);
            tracep->chgCData(oldp+258,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_buffer),8);
            tracep->chgCData(oldp+259,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_buffer),8);
            tracep->chgSData(oldp+260,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_cnt),10);
            tracep->chgBit(oldp+261,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__baud_tick));
            tracep->chgCData(oldp+262,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_state),2);
            tracep->chgCData(oldp+263,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_bit_cnt),3);
            tracep->chgCData(oldp+264,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_shift_reg),8);
            tracep->chgBit(oldp+265,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__tx_busy));
            tracep->chgCData(oldp+266,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_state),2);
            tracep->chgCData(oldp+267,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_bit_cnt),3);
            tracep->chgCData(oldp+268,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_shift_reg),8);
            tracep->chgBit(oldp+269,(vlSymsp->TOP__test_top.__PVT__uart0__DOT__rx_done_flag));
            tracep->chgIData(oldp+270,(vlSymsp->TOP__test_top.__Vcellout__uart1__data_o),32);
            tracep->chgCData(oldp+271,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_ctrl),8);
            tracep->chgCData(oldp+272,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__uart_status),8);
            tracep->chgCData(oldp+273,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_buffer),8);
            tracep->chgCData(oldp+274,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_buffer),8);
            tracep->chgSData(oldp+275,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_cnt),10);
            tracep->chgBit(oldp+276,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__baud_tick));
            tracep->chgCData(oldp+277,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_state),2);
            tracep->chgCData(oldp+278,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_bit_cnt),3);
            tracep->chgCData(oldp+279,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_shift_reg),8);
            tracep->chgBit(oldp+280,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__tx_busy));
            tracep->chgCData(oldp+281,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_state),2);
            tracep->chgCData(oldp+282,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_bit_cnt),3);
            tracep->chgCData(oldp+283,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_shift_reg),8);
            tracep->chgBit(oldp+284,(vlSymsp->TOP__test_top.__PVT__uart1__DOT__rx_done_flag));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+285,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
            tracep->chgIData(oldp+287,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
            tracep->chgIData(oldp+288,(vlSymsp->TOP__test_top.__PVT__device_rdata[3]),32);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__test_top.__PVT__device_rdata[4]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+290,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
            tracep->chgBit(oldp+291,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
            tracep->chgIData(oldp+292,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
            tracep->chgBit(oldp+293,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
            tracep->chgIData(oldp+294,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
            tracep->chgBit(oldp+296,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
            tracep->chgBit(oldp+297,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
            tracep->chgBit(oldp+298,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
            tracep->chgBit(oldp+299,(vlSymsp->TOP__test_top.__PVT__device_req[3]));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__test_top.__PVT__device_req[4]));
            tracep->chgIData(oldp+301,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__test_top.__PVT__device_addr[3]),32);
            tracep->chgIData(oldp+305,(vlSymsp->TOP__test_top.__PVT__device_addr[4]),32);
            tracep->chgBit(oldp+306,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
            tracep->chgBit(oldp+307,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
            tracep->chgBit(oldp+309,(vlSymsp->TOP__test_top.__PVT__device_we[3]));
            tracep->chgBit(oldp+310,(vlSymsp->TOP__test_top.__PVT__device_we[4]));
            tracep->chgIData(oldp+311,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
            tracep->chgIData(oldp+313,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__test_top.__PVT__device_wdata[3]),32);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__test_top.__PVT__device_wdata[4]),32);
            tracep->chgBit(oldp+316,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgIData(oldp+318,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgBit(oldp+319,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
            tracep->chgIData(oldp+320,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+321,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgBit(oldp+322,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+323,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+324,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
            tracep->chgBit(oldp+325,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[3]));
            tracep->chgBit(oldp+326,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[4]));
            tracep->chgIData(oldp+327,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+328,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+329,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgIData(oldp+330,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[3]),32);
            tracep->chgIData(oldp+331,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[4]),32);
            tracep->chgBit(oldp+332,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+333,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+334,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
            tracep->chgBit(oldp+335,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[3]));
            tracep->chgBit(oldp+336,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[4]));
            tracep->chgIData(oldp+337,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+338,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+339,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+340,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[3]),32);
            tracep->chgIData(oldp+341,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[4]),32);
            tracep->chgIData(oldp+342,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+343,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+344,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgIData(oldp+345,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[3]),32);
            tracep->chgIData(oldp+346,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[4]),32);
            tracep->chgBit(oldp+347,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+348,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),3);
            tracep->chgCData(oldp+349,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),3);
            tracep->chgBit(oldp+350,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [0U]));
            tracep->chgBit(oldp+351,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [0U]));
            tracep->chgIData(oldp+352,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U]),32);
            tracep->chgIData(oldp+353,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+354,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
            tracep->chgSData(oldp+355,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U])),16);
            tracep->chgBit(oldp+356,((0xbff8U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+357,((0xbffcU == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+358,((0x4000U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+359,((0x4004U == (0xffffU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U]))));
            tracep->chgBit(oldp+360,((0U == (0xffffU 
                                             & vlSymsp->TOP__test_top.__PVT__device_addr
                                             [0U]))));
            tracep->chgBit(oldp+361,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [3U]));
            tracep->chgBit(oldp+362,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [3U]));
            tracep->chgIData(oldp+363,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [3U]),32);
            tracep->chgIData(oldp+364,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [3U]),32);
            tracep->chgSData(oldp+365,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [3U])),16);
            tracep->chgBit(oldp+366,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [4U]));
            tracep->chgBit(oldp+367,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [4U]));
            tracep->chgIData(oldp+368,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [4U]),32);
            tracep->chgIData(oldp+369,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [4U]),32);
            tracep->chgSData(oldp+370,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [4U])),16);
            tracep->chgBit(oldp+371,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [2U]));
            tracep->chgBit(oldp+372,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [2U]));
            tracep->chgIData(oldp+373,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [2U]),32);
            tracep->chgIData(oldp+374,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [2U]),32);
            tracep->chgCData(oldp+375,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [2U])),8);
            tracep->chgBit(oldp+376,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
            tracep->chgIData(oldp+377,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
            tracep->chgIData(oldp+378,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
            tracep->chgIData(oldp+379,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+380,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
            tracep->chgIData(oldp+381,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
            tracep->chgBit(oldp+382,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
            tracep->chgIData(oldp+383,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
            tracep->chgCData(oldp+384,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
            tracep->chgIData(oldp+385,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
            tracep->chgCData(oldp+386,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+387,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+388,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+389,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+390,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+391,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
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
            tracep->chgIData(oldp+392,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
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
            tracep->chgBit(oldp+393,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+394,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
            tracep->chgBit(oldp+395,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
            tracep->chgSData(oldp+396,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
            tracep->chgIData(oldp+397,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                         << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
            tracep->chgCData(oldp+398,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+399,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+400,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
            tracep->chgIData(oldp+401,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
            tracep->chgBit(oldp+402,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
            tracep->chgIData(oldp+403,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
            tracep->chgIData(oldp+405,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
            tracep->chgBit(oldp+406,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
            tracep->chgIData(oldp+407,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
            tracep->chgCData(oldp+408,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+409,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+410,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
            tracep->chgIData(oldp+411,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
            tracep->chgBit(oldp+412,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
            tracep->chgSData(oldp+413,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o),12);
            tracep->chgIData(oldp+414,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
            tracep->chgIData(oldp+415,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+416,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
            tracep->chgBit(oldp+417,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
            tracep->chgIData(oldp+419,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+420,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgIData(oldp+421,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
            tracep->chgCData(oldp+422,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+423,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
            tracep->chgIData(oldp+424,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
            tracep->chgBit(oldp+425,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
            tracep->chgIData(oldp+426,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
            tracep->chgIData(oldp+427,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
            tracep->chgBit(oldp+428,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
            tracep->chgCData(oldp+429,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
            tracep->chgIData(oldp+430,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
            tracep->chgIData(oldp+431,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o),32);
            tracep->chgIData(oldp+432,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o),32);
            tracep->chgIData(oldp+433,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
            tracep->chgIData(oldp+434,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
            tracep->chgIData(oldp+435,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
            tracep->chgBit(oldp+436,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
            tracep->chgBit(oldp+437,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
            tracep->chgBit(oldp+438,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
            tracep->chgIData(oldp+439,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
            tracep->chgQData(oldp+440,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
            tracep->chgBit(oldp+442,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
            tracep->chgBit(oldp+443,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
            tracep->chgBit(oldp+444,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
            tracep->chgBit(oldp+445,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
            tracep->chgBit(oldp+446,(vlSymsp->TOP__test_top.__PVT__device_req
                                     [1U]));
            tracep->chgIData(oldp+447,(vlSymsp->TOP__test_top.__PVT__device_addr
                                       [1U]),32);
            tracep->chgBit(oldp+448,(vlSymsp->TOP__test_top.__PVT__device_we
                                     [1U]));
            tracep->chgIData(oldp+449,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                       [1U]),32);
            tracep->chgIData(oldp+450,((0x1ffffcU & 
                                        vlSymsp->TOP__test_top.__PVT__device_addr
                                        [1U])),21);
        }
        tracep->chgBit(oldp+451,(vlTOPp->clk_i));
        tracep->chgBit(oldp+452,(vlTOPp->rst_i));
        tracep->chgBit(oldp+453,(vlTOPp->halt_o));
        tracep->chgIData(oldp+454,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
        tracep->chgBit(oldp+455,(((~ (IData)(vlTOPp->rst_i)) 
                                  & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->chgBit(oldp+456,(((~ ((IData)(vlTOPp->rst_i) 
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
        tracep->chgBit(oldp+457,((1U & ((~ ((IData)(vlTOPp->rst_i) 
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
        tracep->chgBit(oldp+458,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                           | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
        tracep->chgIData(oldp+459,((vlSymsp->TOP__test_top.__PVT__device_req
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
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
