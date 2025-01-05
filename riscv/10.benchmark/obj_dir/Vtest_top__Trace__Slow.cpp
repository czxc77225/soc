// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtest_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtest_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtest_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+381,"clk_i", false,-1);
        tracep->declBit(c+382,"rst_i", false,-1);
        tracep->declBit(c+383,"halt_o", false,-1);
        tracep->declBit(c+381,"test_top clk_i", false,-1);
        tracep->declBit(c+382,"test_top rst_i", false,-1);
        tracep->declBit(c+14,"test_top halt_o", false,-1);
        tracep->declBus(c+390,"test_top NrDevices", false,-1, 31,0);
        tracep->declBus(c+391,"test_top NrHosts", false,-1, 31,0);
        tracep->declBus(c+392,"test_top MemSize", false,-1, 31,0);
        tracep->declBus(c+393,"test_top MemAddrWidth", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+245+i*1,"test_top host_req", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+246+i*1,"test_top host_gnt", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+247+i*1,"test_top host_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+248+i*1,"test_top host_we", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+249+i*1,"test_top host_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+250+i*1,"test_top host_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+251+i*1,"test_top device_req", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+254+i*1,"test_top device_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+257+i*1,"test_top device_we", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+260+i*1,"test_top device_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+263+i*1,"test_top device_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"test_top cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"test_top cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBit(c+14,"test_top halt_from_console", false,-1);
        tracep->declBit(c+394,"test_top irq_external", false,-1);
        tracep->declBit(c+15,"test_top clint_irq_software_o", false,-1);
        tracep->declBit(c+16,"test_top clint_irq_timer_o", false,-1);
        tracep->declBit(c+17,"test_top inst_ce_o", false,-1);
        tracep->declBus(c+18,"test_top pc_o", false,-1, 31,0);
        tracep->declBus(c+384,"test_top inst_o", false,-1, 31,0);
        tracep->declBus(c+395,"test_top u_bus NrDevices", false,-1, 31,0);
        tracep->declBus(c+396,"test_top u_bus NrHosts", false,-1, 31,0);
        tracep->declBus(c+397,"test_top u_bus DataWidth", false,-1, 31,0);
        tracep->declBus(c+397,"test_top u_bus AddressWidth", false,-1, 31,0);
        tracep->declBit(c+381,"test_top u_bus clk_i", false,-1);
        tracep->declBit(c+382,"test_top u_bus rst_i", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+266+i*1,"test_top u_bus host_req_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+267+i*1,"test_top u_bus host_gnt_o", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+268+i*1,"test_top u_bus host_addr_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+269+i*1,"test_top u_bus host_we_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+270+i*1,"test_top u_bus host_wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+271+i*1,"test_top u_bus host_rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+272+i*1,"test_top u_bus device_req_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+275+i*1,"test_top u_bus device_addr_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+278+i*1,"test_top u_bus device_we_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+281+i*1,"test_top u_bus device_wdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+284+i*1,"test_top u_bus device_rdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"test_top u_bus cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"test_top u_bus cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+396,"test_top u_bus NumBitsHostSel", false,-1, 31,0);
        tracep->declBus(c+398,"test_top u_bus NumBitsDeviceSel", false,-1, 31,0);
        tracep->declBus(c+287,"test_top u_bus host_sel_req", false,-1, 0,0);
        tracep->declBus(c+385,"test_top u_bus host_sel_resp", false,-1, 0,0);
        tracep->declBus(c+288,"test_top u_bus device_sel_req", false,-1, 1,0);
        tracep->declBus(c+289,"test_top u_bus device_sel_resp", false,-1, 1,0);
        tracep->declBus(c+399,"test_top u_bus unnamedblk1 host", false,-1, 31,0);
        tracep->declBus(c+400,"test_top u_bus unnamedblk2 device", false,-1, 31,0);
        tracep->declBus(c+400,"test_top u_bus unnamedblk3 device", false,-1, 31,0);
        tracep->declBus(c+401,"test_top u_bus unnamedblk4 host", false,-1, 31,0);
        tracep->declBit(c+381,"test_top clint0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top clint0 rst_i", false,-1);
        tracep->declBit(c+290,"test_top clint0 req_i", false,-1);
        tracep->declBit(c+291,"test_top clint0 we_i", false,-1);
        tracep->declBus(c+292,"test_top clint0 addr_i", false,-1, 31,0);
        tracep->declBus(c+293,"test_top clint0 data_i", false,-1, 31,0);
        tracep->declBus(c+294,"test_top clint0 data_o", false,-1, 31,0);
        tracep->declBit(c+16,"test_top clint0 timer_irq_o", false,-1);
        tracep->declBit(c+15,"test_top clint0 software_irq_o", false,-1);
        tracep->declBus(c+402,"test_top clint0 MTIMECMP_BASE", false,-1, 15,0);
        tracep->declBus(c+403,"test_top clint0 MSIP_BASE", false,-1, 15,0);
        tracep->declBus(c+404,"test_top clint0 TIME_ADDR", false,-1, 15,0);
        tracep->declBus(c+295,"test_top clint0 raddr", false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+19+i*1,"test_top clint0 mtime_mem", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+21+i*1,"test_top clint0 mtimecmp_mem", true,(i+0), 31,0);}}
        tracep->declBus(c+23,"test_top clint0 msip_mem", false,-1, 31,0);
        tracep->declQuad(c+24,"test_top clint0 mtime", false,-1, 63,0);
        tracep->declQuad(c+26,"test_top clint0 mtimecmp", false,-1, 63,0);
        tracep->declQuad(c+28,"test_top clint0 msip", false,-1, 63,0);
        tracep->declBit(c+30,"test_top clint0 carry", false,-1);
        tracep->declBit(c+296,"test_top clint0 is_time_addr0", false,-1);
        tracep->declBit(c+297,"test_top clint0 is_time_addr1", false,-1);
        tracep->declBit(c+298,"test_top clint0 is_mtimecmp_addr0", false,-1);
        tracep->declBit(c+299,"test_top clint0 is_mtimecmp_addr1", false,-1);
        tracep->declBit(c+300,"test_top clint0 is_msip_addr", false,-1);
        tracep->declBit(c+31,"test_top clint0 alarm", false,-1);
        tracep->declQuad(c+32,"test_top clint0 time_interval", false,-1, 63,0);
        tracep->declBit(c+34,"test_top clint0 is_timeout", false,-1);
        tracep->declBit(c+35,"test_top clint0 is_mtimecmp_nonzero", false,-1);
        tracep->declBit(c+405,"test_top console0 FlushOnChar", false,-1);
        tracep->declBit(c+381,"test_top console0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top console0 rst_i", false,-1);
        tracep->declBit(c+301,"test_top console0 req_i", false,-1);
        tracep->declBit(c+302,"test_top console0 we_i", false,-1);
        tracep->declBus(c+303,"test_top console0 addr_i", false,-1, 31,0);
        tracep->declBus(c+304,"test_top console0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+14,"test_top console0 halt_o", false,-1);
        tracep->declBus(c+406,"test_top console0 CHAR_OUT_ADDR", false,-1, 7,0);
        tracep->declBus(c+407,"test_top console0 SIM_CTRL_ADDR", false,-1, 7,0);
        tracep->declBus(c+305,"test_top console0 ctrl_addr", false,-1, 7,0);
        tracep->declBus(c+36,"test_top console0 sim_finish", false,-1, 2,0);
        tracep->declBus(c+37,"test_top console0 log_fd", false,-1, 31,0);
        tracep->declBit(c+382,"test_top core_top0 rst_i", false,-1);
        tracep->declBit(c+381,"test_top core_top0 clk_i", false,-1);
        tracep->declBit(c+17,"test_top core_top0 rom_ce_o", false,-1);
        tracep->declBus(c+18,"test_top core_top0 rom_addr_o", false,-1, 31,0);
        tracep->declBus(c+384,"test_top core_top0 rom_data_i", false,-1, 31,0);
        tracep->declBit(c+306,"test_top core_top0 ram_ce_o", false,-1);
        tracep->declBus(c+307,"test_top core_top0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+308,"test_top core_top0 ram_wdata_o", false,-1, 31,0);
        tracep->declBus(c+309,"test_top core_top0 ram_rdata_i", false,-1, 31,0);
        tracep->declBit(c+310,"test_top core_top0 ram_we_o", false,-1);
        tracep->declBit(c+394,"test_top core_top0 irq_external_i", false,-1);
        tracep->declBit(c+15,"test_top core_top0 irq_software_i", false,-1);
        tracep->declBit(c+16,"test_top core_top0 irq_timer_i", false,-1);
        tracep->declBus(c+18,"test_top core_top0 if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+384,"test_top core_top0 if_inst_o", false,-1, 31,0);
        tracep->declBus(c+309,"test_top core_top0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+38,"test_top core_top0 int_ctrl_interrupt_type_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 int_ctrl_interrupt_en_o", false,-1);
        tracep->declBit(c+40,"test_top core_top0 int_ctrl_cause_we_o", false,-1);
        tracep->declBus(c+41,"test_top core_top0 int_ctrl_trap_casue_o", false,-1, 3,0);
        tracep->declBit(c+42,"test_top core_top0 int_ctrl_epc_we_o", false,-1);
        tracep->declBus(c+311,"test_top core_top0 int_ctrl_epc_o", false,-1, 31,0);
        tracep->declBit(c+43,"test_top core_top0 int_ctrl_mstatus_ie_clear_o", false,-1);
        tracep->declBit(c+44,"test_top core_top0 int_ctrl_mstatus_ie_set_o", false,-1);
        tracep->declBit(c+408,"test_top core_top0 int_ctrl_flush_o", false,-1);
        tracep->declBus(c+45,"test_top core_top0 int_ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBit(c+312,"test_top core_top0 ctrl_flush_jump_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 ctrl_flush_int_o", false,-1);
        tracep->declBus(c+313,"test_top core_top0 ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 ctrl_stall_o", false,-1, 5,0);
        tracep->declBus(c+315,"test_top core_top0 ctrl_pc_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top core_top0 pc_wire", false,-1, 31,0);
        tracep->declBit(c+17,"test_top core_top0 ce_wire", false,-1);
        tracep->declBus(c+46,"test_top core_top0 if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+47,"test_top core_top0 if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+316,"test_top core_top0 id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+317,"test_top core_top0 id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+318,"test_top core_top0 id_reg1_re_o", false,-1);
        tracep->declBit(c+319,"test_top core_top0 id_reg2_re_o", false,-1);
        tracep->declBus(c+320,"test_top core_top0 id_inst_o", false,-1, 31,0);
        tracep->declBus(c+321,"test_top core_top0 id_op1_o", false,-1, 31,0);
        tracep->declBus(c+322,"test_top core_top0 id_op2_o", false,-1, 31,0);
        tracep->declBit(c+323,"test_top core_top0 id_reg_we_o", false,-1);
        tracep->declBus(c+324,"test_top core_top0 id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+46,"test_top core_top0 id_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+48,"test_top core_top0 id_stallreq_o", false,-1);
        tracep->declBit(c+325,"test_top core_top0 id_csr_we_o", false,-1);
        tracep->declBus(c+326,"test_top core_top0 id_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+327,"test_top core_top0 id_exception_o", false,-1, 31,0);
        tracep->declBus(c+49,"test_top core_top0 id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+51,"test_top core_top0 id_exe_reg_we_o", false,-1);
        tracep->declBus(c+52,"test_top core_top0 id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+53,"test_top core_top0 id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 id_exe_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+55,"test_top core_top0 id_exe_inst_is_load_o", false,-1);
        tracep->declBus(c+56,"test_top core_top0 id_exe_rd_o", false,-1, 4,0);
        tracep->declBit(c+57,"test_top core_top0 id_exe_csr_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 id_exe_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+59,"test_top core_top0 id_exe_exception_o", false,-1, 31,0);
        tracep->declBus(c+328,"test_top core_top0 exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+329,"test_top core_top0 exe_reg_we_o", false,-1);
        tracep->declBus(c+330,"test_top core_top0 exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+331,"test_top core_top0 exe_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+332,"test_top core_top0 exe_mem_we_o", false,-1);
        tracep->declBus(c+333,"test_top core_top0 exe_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+334,"test_top core_top0 exe_mem_op_o", false,-1, 3,0);
        tracep->declBit(c+239,"test_top core_top0 exe_stallreq_o", false,-1);
        tracep->declBit(c+312,"test_top core_top0 exe_jump_enable_o", false,-1);
        tracep->declBus(c+335,"test_top core_top0 exe_jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+336,"test_top core_top0 exe_csr_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 exe_csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+337,"test_top core_top0 exe_csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+58,"test_top core_top0 exe_csr_raddr_o", false,-1, 11,0);
        tracep->declBus(c+54,"test_top core_top0 exe_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+59,"test_top core_top0 exe_exception_o", false,-1, 31,0);
        tracep->declBus(c+60,"test_top core_top0 exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+63,"test_top core_top0 exe_mem_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+64,"test_top core_top0 exe_mem_mem_we_o", false,-1);
        tracep->declBus(c+65,"test_top core_top0 exe_mem_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+66,"test_top core_top0 exe_mem_mem_op_o", false,-1, 3,0);
        tracep->declBit(c+67,"test_top core_top0 exe_mem_csr_we_o", false,-1);
        tracep->declBus(c+68,"test_top core_top0 exe_mem_csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+69,"test_top core_top0 exe_mem_csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+70,"test_top core_top0 exe_mem_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+71,"test_top core_top0 exe_mem_exception_o", false,-1, 31,0);
        tracep->declBus(c+338,"test_top core_top0 mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+339,"test_top core_top0 mem_reg_we_o", false,-1);
        tracep->declBus(c+340,"test_top core_top0 mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+307,"test_top core_top0 mem_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+310,"test_top core_top0 mem_mem_we_o", false,-1);
        tracep->declBus(c+308,"test_top core_top0 mem_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+306,"test_top core_top0 mem_mem_ce_o", false,-1);
        tracep->declBus(c+341,"test_top core_top0 mem_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+342,"test_top core_top0 mem_csr_we_o", false,-1);
        tracep->declBus(c+343,"test_top core_top0 mem_csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+344,"test_top core_top0 mem_csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+71,"test_top core_top0 mem_exception_o", false,-1, 31,0);
        tracep->declBus(c+72,"test_top core_top0 mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+73,"test_top core_top0 mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+74,"test_top core_top0 mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+75,"test_top core_top0 mem_wb_csr_we_o", false,-1);
        tracep->declBus(c+76,"test_top core_top0 mem_wb_csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+77,"test_top core_top0 mem_wb_csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 mem_wb_instret_incr_o", false,-1);
        tracep->declBus(c+345,"test_top core_top0 reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+79,"test_top core_top0 csr_file_csr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+80,"test_top core_top0 csr_mstatus_ie_o", false,-1);
        tracep->declBit(c+81,"test_top core_top0 csr_mie_external_o", false,-1);
        tracep->declBit(c+82,"test_top core_top0 csr_mie_timer_o", false,-1);
        tracep->declBit(c+83,"test_top core_top0 csr_mie_software_o", false,-1);
        tracep->declBit(c+84,"test_top core_top0 csr_mip_external_o", false,-1);
        tracep->declBit(c+85,"test_top core_top0 csr_mip_timer_o", false,-1);
        tracep->declBit(c+86,"test_top core_top0 csr_mip_software_o", false,-1);
        tracep->declBus(c+87,"test_top core_top0 csr_mtvec_o", false,-1, 31,0);
        tracep->declBus(c+88,"test_top core_top0 csr_epc_o", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 interrupt_ctrl0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 interrupt_ctrl0 rst_i", false,-1);
        tracep->declBus(c+71,"test_top core_top0 interrupt_ctrl0 exception_i", false,-1, 31,0);
        tracep->declBus(c+315,"test_top core_top0 interrupt_ctrl0 pc_i", false,-1, 31,0);
        tracep->declBit(c+80,"test_top core_top0 interrupt_ctrl0 mstatus_ie_i", false,-1);
        tracep->declBit(c+81,"test_top core_top0 interrupt_ctrl0 mie_external_i", false,-1);
        tracep->declBit(c+82,"test_top core_top0 interrupt_ctrl0 mie_timer_i", false,-1);
        tracep->declBit(c+83,"test_top core_top0 interrupt_ctrl0 mie_sw_i", false,-1);
        tracep->declBit(c+84,"test_top core_top0 interrupt_ctrl0 mip_external_i", false,-1);
        tracep->declBit(c+85,"test_top core_top0 interrupt_ctrl0 mip_timer_i", false,-1);
        tracep->declBit(c+86,"test_top core_top0 interrupt_ctrl0 mip_sw_i", false,-1);
        tracep->declBus(c+87,"test_top core_top0 interrupt_ctrl0 mtvec_i", false,-1, 31,0);
        tracep->declBus(c+88,"test_top core_top0 interrupt_ctrl0 epc_i", false,-1, 31,0);
        tracep->declBit(c+38,"test_top core_top0 interrupt_ctrl0 interrupt_type_o", false,-1);
        tracep->declBit(c+40,"test_top core_top0 interrupt_ctrl0 cause_we_o", false,-1);
        tracep->declBus(c+41,"test_top core_top0 interrupt_ctrl0 trap_casue_o", false,-1, 3,0);
        tracep->declBit(c+42,"test_top core_top0 interrupt_ctrl0 epc_we_o", false,-1);
        tracep->declBus(c+311,"test_top core_top0 interrupt_ctrl0 epc_o", false,-1, 31,0);
        tracep->declBit(c+43,"test_top core_top0 interrupt_ctrl0 mstatus_ie_clear_o", false,-1);
        tracep->declBit(c+44,"test_top core_top0 interrupt_ctrl0 mstatus_ie_set_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 interrupt_ctrl0 interrupt_en_o", false,-1);
        tracep->declBus(c+45,"test_top core_top0 interrupt_ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBus(c+89,"test_top core_top0 interrupt_ctrl0 S", false,-1, 3,0);
        tracep->declBus(c+90,"test_top core_top0 interrupt_ctrl0 S_nxt", false,-1, 3,0);
        tracep->declBus(c+409,"test_top core_top0 interrupt_ctrl0 RESET", false,-1, 3,0);
        tracep->declBus(c+410,"test_top core_top0 interrupt_ctrl0 OPERATING", false,-1, 3,0);
        tracep->declBus(c+411,"test_top core_top0 interrupt_ctrl0 TRAP_TAKEN", false,-1, 3,0);
        tracep->declBus(c+412,"test_top core_top0 interrupt_ctrl0 TRAP_RETURN", false,-1, 3,0);
        tracep->declBit(c+91,"test_top core_top0 interrupt_ctrl0 mret", false,-1);
        tracep->declBit(c+92,"test_top core_top0 interrupt_ctrl0 ecall", false,-1);
        tracep->declBit(c+93,"test_top core_top0 interrupt_ctrl0 eip", false,-1);
        tracep->declBit(c+94,"test_top core_top0 interrupt_ctrl0 tip", false,-1);
        tracep->declBit(c+95,"test_top core_top0 interrupt_ctrl0 sip", false,-1);
        tracep->declBit(c+96,"test_top core_top0 interrupt_ctrl0 ip", false,-1);
        tracep->declBit(c+97,"test_top core_top0 interrupt_ctrl0 trap_happened", false,-1);
        tracep->declBus(c+98,"test_top core_top0 interrupt_ctrl0 mtvec_base", false,-1, 29,0);
        tracep->declBus(c+99,"test_top core_top0 interrupt_ctrl0 trap_mux_out", false,-1, 31,0);
        tracep->declBus(c+100,"test_top core_top0 interrupt_ctrl0 vec_mux_out", false,-1, 31,0);
        tracep->declBus(c+101,"test_top core_top0 interrupt_ctrl0 base_offset", false,-1, 31,0);
        tracep->declBit(c+102,"test_top core_top0 interrupt_ctrl0 exception", false,-1);
        tracep->declBit(c+381,"test_top core_top0 ctrl0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 ctrl0 rst_i", false,-1);
        tracep->declBit(c+48,"test_top core_top0 ctrl0 stallreq_from_id_i", false,-1);
        tracep->declBit(c+239,"test_top core_top0 ctrl0 stallreq_from_exe_i", false,-1);
        tracep->declBit(c+312,"test_top core_top0 ctrl0 jump_en_i", false,-1);
        tracep->declBus(c+335,"test_top core_top0 ctrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBus(c+341,"test_top core_top0 ctrl0 pc_i", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 ctrl0 stall_o", false,-1, 5,0);
        tracep->declBit(c+312,"test_top core_top0 ctrl0 flush_jump_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 ctrl0 flush_int_o", false,-1);
        tracep->declBus(c+313,"test_top core_top0 ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBus(c+45,"test_top core_top0 ctrl0 isr_pc_i", false,-1, 31,0);
        tracep->declBit(c+39,"test_top core_top0 ctrl0 int_en_i", false,-1);
        tracep->declBus(c+315,"test_top core_top0 ctrl0 pc_o", false,-1, 31,0);
        tracep->declBus(c+103,"test_top core_top0 ctrl0 current_pc", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 pc_reg0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 pc_reg0 rst_i", false,-1);
        tracep->declBus(c+313,"test_top core_top0 pc_reg0 new_pc_i", false,-1, 31,0);
        tracep->declBit(c+312,"test_top core_top0 pc_reg0 flush_jump_i", false,-1);
        tracep->declBus(c+314,"test_top core_top0 pc_reg0 stall_i", false,-1, 5,0);
        tracep->declBus(c+18,"test_top core_top0 pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+17,"test_top core_top0 pc_reg0 ce_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 pc_reg0 flush_int_i", false,-1);
        tracep->declBit(c+240,"test_top core_top0 pc_reg0 is_new_pc", false,-1);
        tracep->declBit(c+381,"test_top core_top0 if_id0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 if_id0 rst_i", false,-1);
        tracep->declBus(c+18,"test_top core_top0 if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+384,"test_top core_top0 if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 if_id0 stall_i", false,-1, 5,0);
        tracep->declBit(c+312,"test_top core_top0 if_id0 flush_jump_i", false,-1);
        tracep->declBit(c+39,"test_top core_top0 if_id0 flush_int_i", false,-1);
        tracep->declBus(c+46,"test_top core_top0 if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+47,"test_top core_top0 if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+382,"test_top core_top0 id0 rst_i", false,-1);
        tracep->declBus(c+46,"test_top core_top0 id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+47,"test_top core_top0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+56,"test_top core_top0 id0 exe_rd_i", false,-1, 4,0);
        tracep->declBit(c+55,"test_top core_top0 id0 pre_inst_is_load_i", false,-1);
        tracep->declBus(c+345,"test_top core_top0 id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+328,"test_top core_top0 id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+330,"test_top core_top0 id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+329,"test_top core_top0 id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+338,"test_top core_top0 id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+340,"test_top core_top0 id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+339,"test_top core_top0 id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+316,"test_top core_top0 id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+317,"test_top core_top0 id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+318,"test_top core_top0 id0 reg1_re_o", false,-1);
        tracep->declBit(c+319,"test_top core_top0 id0 reg2_re_o", false,-1);
        tracep->declBus(c+320,"test_top core_top0 id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+321,"test_top core_top0 id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+322,"test_top core_top0 id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+323,"test_top core_top0 id0 reg_we_o", false,-1);
        tracep->declBus(c+324,"test_top core_top0 id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+46,"test_top core_top0 id0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+325,"test_top core_top0 id0 csr_we_o", false,-1);
        tracep->declBus(c+326,"test_top core_top0 id0 csr_addr_o", false,-1, 11,0);
        tracep->declBit(c+48,"test_top core_top0 id0 stallreq_o", false,-1);
        tracep->declBus(c+327,"test_top core_top0 id0 exception_o", false,-1, 31,0);
        tracep->declBit(c+347,"test_top core_top0 id0 except_mret", false,-1);
        tracep->declBit(c+348,"test_top core_top0 id0 except_ecall", false,-1);
        tracep->declBus(c+349,"test_top core_top0 id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+350,"test_top core_top0 id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+104,"test_top core_top0 id0 funct7", false,-1, 6,0);
        tracep->declBus(c+105,"test_top core_top0 id0 opcode", false,-1, 6,0);
        tracep->declBus(c+106,"test_top core_top0 id0 funct3", false,-1, 2,0);
        tracep->declBus(c+107,"test_top core_top0 id0 rd", false,-1, 4,0);
        tracep->declBus(c+108,"test_top core_top0 id0 rs1", false,-1, 4,0);
        tracep->declBus(c+109,"test_top core_top0 id0 rs2", false,-1, 4,0);
        tracep->declBit(c+48,"test_top core_top0 id0 is_load_hazard", false,-1);
        tracep->declBus(c+110,"test_top core_top0 id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+111,"test_top core_top0 id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+112,"test_top core_top0 id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+113,"test_top core_top0 id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+351,"test_top core_top0 id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+114,"test_top core_top0 id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+115,"test_top core_top0 id0 i_reg_we_o", false,-1);
        tracep->declBus(c+116,"test_top core_top0 id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+117,"test_top core_top0 id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+118,"test_top core_top0 id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+119,"test_top core_top0 id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+120,"test_top core_top0 id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+241,"test_top core_top0 id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+121,"test_top core_top0 id0 r_reg_we_o", false,-1);
        tracep->declBus(c+122,"test_top core_top0 id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+47,"test_top core_top0 id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+345,"test_top core_top0 id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+110,"test_top core_top0 id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+111,"test_top core_top0 id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+112,"test_top core_top0 id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+113,"test_top core_top0 id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+351,"test_top core_top0 id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+114,"test_top core_top0 id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+115,"test_top core_top0 id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+116,"test_top core_top0 id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+105,"test_top core_top0 id0 inst_type_i opcode", false,-1, 6,0);
        tracep->declBus(c+106,"test_top core_top0 id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+104,"test_top core_top0 id0 inst_type_i funct7", false,-1, 6,0);
        tracep->declBus(c+109,"test_top core_top0 id0 inst_type_i shamt", false,-1, 4,0);
        tracep->declBus(c+107,"test_top core_top0 id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+108,"test_top core_top0 id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+109,"test_top core_top0 id0 inst_type_i rs2", false,-1, 4,0);
        tracep->declBit(c+123,"test_top core_top0 id0 inst_type_i isType_i", false,-1);
        tracep->declBus(c+47,"test_top core_top0 id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+345,"test_top core_top0 id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+117,"test_top core_top0 id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+118,"test_top core_top0 id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+119,"test_top core_top0 id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+120,"test_top core_top0 id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+241,"test_top core_top0 id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+242,"test_top core_top0 id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+121,"test_top core_top0 id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+122,"test_top core_top0 id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+105,"test_top core_top0 id0 inst_type_r opcode", false,-1, 6,0);
        tracep->declBus(c+106,"test_top core_top0 id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+104,"test_top core_top0 id0 inst_type_r funct7", false,-1, 6,0);
        tracep->declBus(c+109,"test_top core_top0 id0 inst_type_r shamt", false,-1, 4,0);
        tracep->declBus(c+107,"test_top core_top0 id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+108,"test_top core_top0 id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+109,"test_top core_top0 id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+124,"test_top core_top0 id0 inst_type_r isType_r", false,-1);
        tracep->declBit(c+125,"test_top core_top0 id0 inst_type_r isType_m", false,-1);
        tracep->declBit(c+382,"test_top core_top0 id_exe0 rst_i", false,-1);
        tracep->declBit(c+381,"test_top core_top0 id_exe0 clk_i", false,-1);
        tracep->declBus(c+321,"test_top core_top0 id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+322,"test_top core_top0 id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+323,"test_top core_top0 id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+324,"test_top core_top0 id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+320,"test_top core_top0 id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+46,"test_top core_top0 id_exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBit(c+55,"test_top core_top0 id_exe0 inst_is_load_o", false,-1);
        tracep->declBus(c+56,"test_top core_top0 id_exe0 rd_o", false,-1, 4,0);
        tracep->declBus(c+314,"test_top core_top0 id_exe0 stall_i", false,-1, 5,0);
        tracep->declBit(c+312,"test_top core_top0 id_exe0 flush_jump_i", false,-1);
        tracep->declBit(c+39,"test_top core_top0 id_exe0 flush_int_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+51,"test_top core_top0 id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+52,"test_top core_top0 id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+54,"test_top core_top0 id_exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 id_exe0 inst_o", false,-1, 31,0);
        tracep->declBit(c+325,"test_top core_top0 id_exe0 csr_we_i", false,-1);
        tracep->declBus(c+326,"test_top core_top0 id_exe0 csr_addr_i", false,-1, 11,0);
        tracep->declBit(c+57,"test_top core_top0 id_exe0 csr_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 id_exe0 csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+327,"test_top core_top0 id_exe0 exception_i", false,-1, 31,0);
        tracep->declBus(c+59,"test_top core_top0 id_exe0 exception_o", false,-1, 31,0);
        tracep->declBus(c+352,"test_top core_top0 id_exe0 opcode", false,-1, 6,0);
        tracep->declBit(c+381,"test_top core_top0 exe0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+51,"test_top core_top0 exe0 reg_we_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+328,"test_top core_top0 exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+329,"test_top core_top0 exe0 reg_we_o", false,-1);
        tracep->declBus(c+330,"test_top core_top0 exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+332,"test_top core_top0 exe0 mem_we_o", false,-1);
        tracep->declBus(c+331,"test_top core_top0 exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+333,"test_top core_top0 exe0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+334,"test_top core_top0 exe0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+335,"test_top core_top0 exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+312,"test_top core_top0 exe0 jump_enable_o", false,-1);
        tracep->declBit(c+239,"test_top core_top0 exe0 stallreq_o", false,-1);
        tracep->declBit(c+57,"test_top core_top0 exe0 csr_we_i", false,-1);
        tracep->declBus(c+58,"test_top core_top0 exe0 csr_addr_i", false,-1, 11,0);
        tracep->declBit(c+336,"test_top core_top0 exe0 csr_we_o", false,-1);
        tracep->declBus(c+58,"test_top core_top0 exe0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+337,"test_top core_top0 exe0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+79,"test_top core_top0 exe0 csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+58,"test_top core_top0 exe0 csr_raddr_o", false,-1, 11,0);
        tracep->declBit(c+342,"test_top core_top0 exe0 mem_csr_we_i", false,-1);
        tracep->declBus(c+343,"test_top core_top0 exe0 mem_csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+344,"test_top core_top0 exe0 mem_csr_wdata_i", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+39,"test_top core_top0 exe0 flush_int_i", false,-1);
        tracep->declBus(c+59,"test_top core_top0 exe0 exception_i", false,-1, 31,0);
        tracep->declBus(c+59,"test_top core_top0 exe0 exception_o", false,-1, 31,0);
        tracep->declBus(c+126,"test_top core_top0 exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+128,"test_top core_top0 exe0 funct7", false,-1, 6,0);
        tracep->declBit(c+386,"test_top core_top0 exe0 i_reg_we_o", false,-1);
        tracep->declBus(c+353,"test_top core_top0 exe0 i_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+387,"test_top core_top0 exe0 r_reg_we_o", false,-1);
        tracep->declBus(c+354,"test_top core_top0 exe0 r_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+355,"test_top core_top0 exe0 s_reg_we_o", false,-1);
        tracep->declBus(c+413,"test_top core_top0 exe0 s_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+356,"test_top core_top0 exe0 s_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+357,"test_top core_top0 exe0 s_mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+358,"test_top core_top0 exe0 s_mem_we_o", false,-1);
        tracep->declBus(c+359,"test_top core_top0 exe0 s_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+129,"test_top core_top0 exe0 b_jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+130,"test_top core_top0 exe0 b_jump_enable_o", false,-1);
        tracep->declBit(c+388,"test_top core_top0 exe0 m_reg_we_o", false,-1);
        tracep->declBit(c+239,"test_top core_top0 exe0 mult_div_stall", false,-1);
        tracep->declBus(c+360,"test_top core_top0 exe0 m_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+361,"test_top core_top0 exe0 system_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+362,"test_top core_top0 exe0 system_csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+363,"test_top core_top0 exe0 csr_rdata", false,-1, 31,0);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_i0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_i0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 exe_type_i0 op2_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_i0 inst_i", false,-1, 31,0);
        tracep->declBus(c+353,"test_top core_top0 exe0 exe_type_i0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+386,"test_top core_top0 exe0 exe_type_i0 reg_we_o", false,-1);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_i0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_i0 funct3", false,-1, 2,0);
        tracep->declBus(c+128,"test_top core_top0 exe0 exe_type_i0 funct7", false,-1, 6,0);
        tracep->declBit(c+131,"test_top core_top0 exe0 exe_type_i0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+132,"test_top core_top0 exe0 exe_type_i0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+133,"test_top core_top0 exe0 exe_type_i0 sr_shift", false,-1, 31,0);
        tracep->declBus(c+134,"test_top core_top0 exe0 exe_type_i0 sr_shift_mask", false,-1, 31,0);
        tracep->declBit(c+135,"test_top core_top0 exe0 exe_type_i0 isType_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_r0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_r0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 exe_type_r0 op2_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_r0 inst_i", false,-1, 31,0);
        tracep->declBus(c+354,"test_top core_top0 exe0 exe_type_r0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+387,"test_top core_top0 exe0 exe_type_r0 reg_we_o", false,-1);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_r0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_r0 funct3", false,-1, 2,0);
        tracep->declBus(c+128,"test_top core_top0 exe0 exe_type_r0 funct7", false,-1, 6,0);
        tracep->declBit(c+131,"test_top core_top0 exe0 exe_type_r0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+132,"test_top core_top0 exe0 exe_type_r0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+133,"test_top core_top0 exe0 exe_type_r0 sr_shift", false,-1, 31,0);
        tracep->declBus(c+134,"test_top core_top0 exe0 exe_type_r0 sr_shift_mask", false,-1, 31,0);
        tracep->declBit(c+136,"test_top core_top0 exe0 exe_type_r0 isType_r", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_s_l0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_s_l0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 exe_type_s_l0 op2_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_s_l0 inst_i", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 exe0 exe_type_s_l0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+355,"test_top core_top0 exe0 exe_type_s_l0 reg_we_o", false,-1);
        tracep->declBus(c+357,"test_top core_top0 exe0 exe_type_s_l0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+356,"test_top core_top0 exe0 exe_type_s_l0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+358,"test_top core_top0 exe0 exe_type_s_l0 mem_we_o", false,-1);
        tracep->declBus(c+359,"test_top core_top0 exe0 exe_type_s_l0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_s_l0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_s_l0 funct3", false,-1, 2,0);
        tracep->declBus(c+137,"test_top core_top0 exe0 exe_type_s_l0 load_addr_offset", false,-1, 31,0);
        tracep->declBus(c+138,"test_top core_top0 exe0 exe_type_s_l0 store_addr_offset", false,-1, 31,0);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_b_j0 rst_i", false,-1);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_b_j0 inst_i", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 exe0 exe_type_b_j0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_b_j0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 exe_type_b_j0 op2_i", false,-1, 31,0);
        tracep->declBus(c+129,"test_top core_top0 exe0 exe_type_b_j0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+130,"test_top core_top0 exe0 exe_type_b_j0 jump_enable_o", false,-1);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_b_j0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_b_j0 funct3", false,-1, 2,0);
        tracep->declBit(c+139,"test_top core_top0 exe0 exe_type_b_j0 op1_eq_op2", false,-1);
        tracep->declBit(c+140,"test_top core_top0 exe0 exe_type_b_j0 op1_ge_op2_signed", false,-1);
        tracep->declBit(c+141,"test_top core_top0 exe0 exe_type_b_j0 op1_ge_op2_unsigned", false,-1);
        tracep->declBus(c+54,"test_top core_top0 exe0 exe_type_b_j0 pc", false,-1, 31,0);
        tracep->declBus(c+142,"test_top core_top0 exe0 exe_type_b_j0 b_imm", false,-1, 31,0);
        tracep->declBus(c+143,"test_top core_top0 exe0 exe_type_b_j0 jal_imm", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 exe0 exe_type_m0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_m0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_m0 op1_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 exe0 exe_type_m0 op2_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_m0 inst_i", false,-1, 31,0);
        tracep->declBit(c+39,"test_top core_top0 exe0 exe_type_m0 flush_i", false,-1);
        tracep->declBit(c+239,"test_top core_top0 exe0 exe_type_m0 stall_o", false,-1);
        tracep->declBus(c+360,"test_top core_top0 exe0 exe_type_m0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+388,"test_top core_top0 exe0 exe_type_m0 reg_we_o", false,-1);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_m0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_m0 funct3", false,-1, 2,0);
        tracep->declBus(c+128,"test_top core_top0 exe0 exe_type_m0 funct7", false,-1, 6,0);
        tracep->declBit(c+144,"test_top core_top0 exe0 exe_type_m0 isType_m", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 exe_type_m0 a_o", false,-1, 31,0);
        tracep->declBus(c+365,"test_top core_top0 exe0 exe_type_m0 b_o", false,-1, 31,0);
        tracep->declBus(c+145,"test_top core_top0 exe0 exe_type_m0 div_result", false,-1, 31,0);
        tracep->declBit(c+366,"test_top core_top0 exe0 exe_type_m0 is_q_operation", false,-1);
        tracep->declBit(c+367,"test_top core_top0 exe0 exe_type_m0 mult_req_o", false,-1);
        tracep->declBit(c+368,"test_top core_top0 exe0 exe_type_m0 div_req_o", false,-1);
        tracep->declBit(c+146,"test_top core_top0 exe0 exe_type_m0 mult_ready_i", false,-1);
        tracep->declBit(c+147,"test_top core_top0 exe0 exe_type_m0 div_ready_i", false,-1);
        tracep->declQuad(c+148,"test_top core_top0 exe0 exe_type_m0 mult_result_i", false,-1, 63,0);
        tracep->declBus(c+369,"test_top core_top0 exe0 exe_type_m0 result", false,-1, 31,0);
        tracep->declBit(c+150,"test_top core_top0 exe0 exe_type_m0 is_a_neg", false,-1);
        tracep->declBit(c+151,"test_top core_top0 exe0 exe_type_m0 is_b_neg", false,-1);
        tracep->declBit(c+152,"test_top core_top0 exe0 exe_type_m0 is_b_zero", false,-1);
        tracep->declBit(c+153,"test_top core_top0 exe0 exe_type_m0 signed_adjust", false,-1);
        tracep->declQuad(c+370,"test_top core_top0 exe0 exe_type_m0 invert_result", false,-1, 63,0);
        tracep->declBus(c+397,"test_top core_top0 exe0 exe_type_m0 mul0 XLEN", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 exe0 exe_type_m0 mul0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_m0 mul0 rst_i", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 exe_type_m0 mul0 a_i", false,-1, 31,0);
        tracep->declBus(c+365,"test_top core_top0 exe0 exe_type_m0 mul0 b_i", false,-1, 31,0);
        tracep->declBit(c+367,"test_top core_top0 exe0 exe_type_m0 mul0 req_i", false,-1);
        tracep->declBit(c+39,"test_top core_top0 exe0 exe_type_m0 mul0 flush_i", false,-1);
        tracep->declBit(c+146,"test_top core_top0 exe0 exe_type_m0 mul0 ready_o", false,-1);
        tracep->declQuad(c+148,"test_top core_top0 exe0 exe_type_m0 mul0 result_o", false,-1, 63,0);
        tracep->declBit(c+372,"test_top core_top0 exe0 exe_type_m0 mul0 is_a_zero", false,-1);
        tracep->declBit(c+373,"test_top core_top0 exe0 exe_type_m0 mul0 is_b_zero", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 exe_type_m0 mul0 op_a", false,-1, 31,0);
        tracep->declBus(c+365,"test_top core_top0 exe0 exe_type_m0 mul0 op_b", false,-1, 31,0);
        tracep->declBit(c+154,"test_top core_top0 exe0 exe_type_m0 mul0 is_calc_done", false,-1);
        tracep->declBus(c+155,"test_top core_top0 exe0 exe_type_m0 mul0 reg32", false,-1, 31,0);
        tracep->declArray(c+156,"test_top core_top0 exe0 exe_type_m0 mul0 result", false,-1, 64,0);
        tracep->declBus(c+159,"test_top core_top0 exe0 exe_type_m0 mul0 cnt", false,-1, 5,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 exe_type_m0 mul0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 exe_type_m0 mul0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 exe_type_m0 mul0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+160,"test_top core_top0 exe0 exe_type_m0 mul0 S", false,-1, 2,0);
        tracep->declBus(c+243,"test_top core_top0 exe0 exe_type_m0 mul0 S_nxt", false,-1, 2,0);
        tracep->declBit(c+161,"test_top core_top0 exe0 exe_type_m0 mul0 mul_add", false,-1);
        tracep->declBus(c+155,"test_top core_top0 exe0 exe_type_m0 mul0 adder_opa", false,-1, 31,0);
        tracep->declBus(c+162,"test_top core_top0 exe0 exe_type_m0 mul0 adder_opb", false,-1, 31,0);
        tracep->declQuad(c+163,"test_top core_top0 exe0 exe_type_m0 mul0 adder_tmp", false,-1, 32,0);
        tracep->declArray(c+165,"test_top core_top0 exe0 exe_type_m0 mul0 result_tmp", false,-1, 64,0);
        tracep->declBus(c+397,"test_top core_top0 exe0 exe_type_m0 div0 XLEN", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 exe0 exe_type_m0 div0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_m0 div0 rst_i", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 exe_type_m0 div0 a_i", false,-1, 31,0);
        tracep->declBus(c+365,"test_top core_top0 exe0 exe_type_m0 div0 b_i", false,-1, 31,0);
        tracep->declBit(c+39,"test_top core_top0 exe0 exe_type_m0 div0 flush_i", false,-1);
        tracep->declBit(c+368,"test_top core_top0 exe0 exe_type_m0 div0 req_i", false,-1);
        tracep->declBit(c+366,"test_top core_top0 exe0 exe_type_m0 div0 is_q_i", false,-1);
        tracep->declBus(c+145,"test_top core_top0 exe0 exe_type_m0 div0 result_o", false,-1, 31,0);
        tracep->declBit(c+147,"test_top core_top0 exe0 exe_type_m0 div0 ready_o", false,-1);
        tracep->declBit(c+374,"test_top core_top0 exe0 exe_type_m0 div0 is_a_zero", false,-1);
        tracep->declBit(c+375,"test_top core_top0 exe0 exe_type_m0 div0 is_b_zero", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 exe_type_m0 div0 op_a", false,-1, 31,0);
        tracep->declBus(c+365,"test_top core_top0 exe0 exe_type_m0 div0 op_b", false,-1, 31,0);
        tracep->declBit(c+168,"test_top core_top0 exe0 exe_type_m0 div0 is_calc_done", false,-1);
        tracep->declBus(c+169,"test_top core_top0 exe0 exe_type_m0 div0 reg32", false,-1, 31,0);
        tracep->declArray(c+170,"test_top core_top0 exe0 exe_type_m0 div0 result", false,-1, 64,0);
        tracep->declBus(c+173,"test_top core_top0 exe0 exe_type_m0 div0 cnt", false,-1, 5,0);
        tracep->declBus(c+174,"test_top core_top0 exe0 exe_type_m0 div0 quotient", false,-1, 31,0);
        tracep->declBus(c+175,"test_top core_top0 exe0 exe_type_m0 div0 remainder", false,-1, 31,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 exe_type_m0 div0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 exe_type_m0 div0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 exe_type_m0 div0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+176,"test_top core_top0 exe0 exe_type_m0 div0 S", false,-1, 2,0);
        tracep->declBus(c+244,"test_top core_top0 exe0 exe_type_m0 div0 S_next", false,-1, 2,0);
        tracep->declBit(c+177,"test_top core_top0 exe0 exe_type_m0 div0 div_sub", false,-1);
        tracep->declQuad(c+178,"test_top core_top0 exe0 exe_type_m0 div0 sub_tmp", false,-1, 32,0);
        tracep->declArray(c+180,"test_top core_top0 exe0 exe_type_m0 div0 result_tmp", false,-1, 64,0);
        tracep->declBit(c+382,"test_top core_top0 exe0 exe_type_system0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 exe0 exe_type_system0 op1_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 exe_type_system0 inst_i", false,-1, 31,0);
        tracep->declBus(c+361,"test_top core_top0 exe0 exe_type_system0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+363,"test_top core_top0 exe0 exe_type_system0 csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+362,"test_top core_top0 exe0 exe_type_system0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+126,"test_top core_top0 exe0 exe_type_system0 opcode", false,-1, 6,0);
        tracep->declBus(c+127,"test_top core_top0 exe0 exe_type_system0 funct3", false,-1, 2,0);
        tracep->declBit(c+183,"test_top core_top0 exe0 exe_type_system0 isType_system", false,-1);
        tracep->declBit(c+382,"test_top core_top0 exe_mem0 rst_i", false,-1);
        tracep->declBit(c+381,"test_top core_top0 exe_mem0 clk_i", false,-1);
        tracep->declBus(c+328,"test_top core_top0 exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+329,"test_top core_top0 exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+330,"test_top core_top0 exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+332,"test_top core_top0 exe_mem0 mem_we_i", false,-1);
        tracep->declBus(c+331,"test_top core_top0 exe_mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+333,"test_top core_top0 exe_mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+334,"test_top core_top0 exe_mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+60,"test_top core_top0 exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+64,"test_top core_top0 exe_mem0 mem_we_o", false,-1);
        tracep->declBus(c+63,"test_top core_top0 exe_mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+65,"test_top core_top0 exe_mem0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+66,"test_top core_top0 exe_mem0 mem_op_o", false,-1, 3,0);
        tracep->declBit(c+336,"test_top core_top0 exe_mem0 csr_we_i", false,-1);
        tracep->declBus(c+58,"test_top core_top0 exe_mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+337,"test_top core_top0 exe_mem0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+67,"test_top core_top0 exe_mem0 csr_we_o", false,-1);
        tracep->declBus(c+68,"test_top core_top0 exe_mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+69,"test_top core_top0 exe_mem0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 exe_mem0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+70,"test_top core_top0 exe_mem0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+39,"test_top core_top0 exe_mem0 flush_int_i", false,-1);
        tracep->declBus(c+59,"test_top core_top0 exe_mem0 exception_i", false,-1, 31,0);
        tracep->declBus(c+71,"test_top core_top0 exe_mem0 exception_o", false,-1, 31,0);
        tracep->declBit(c+381,"test_top core_top0 mem0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 mem0 rst_i", false,-1);
        tracep->declBus(c+60,"test_top core_top0 mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 mem0 reg_we_i", false,-1);
        tracep->declBus(c+62,"test_top core_top0 mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+64,"test_top core_top0 mem0 mem_we_i", false,-1);
        tracep->declBus(c+63,"test_top core_top0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+65,"test_top core_top0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+66,"test_top core_top0 mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+309,"test_top core_top0 mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+307,"test_top core_top0 mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+310,"test_top core_top0 mem0 ram_w_request_o", false,-1);
        tracep->declBus(c+308,"test_top core_top0 mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+306,"test_top core_top0 mem0 ram_ce_o", false,-1);
        tracep->declBus(c+338,"test_top core_top0 mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+339,"test_top core_top0 mem0 reg_we_o", false,-1);
        tracep->declBus(c+340,"test_top core_top0 mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+67,"test_top core_top0 mem0 csr_we_i", false,-1);
        tracep->declBus(c+68,"test_top core_top0 mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+69,"test_top core_top0 mem0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+342,"test_top core_top0 mem0 csr_we_o", false,-1);
        tracep->declBus(c+343,"test_top core_top0 mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+344,"test_top core_top0 mem0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+341,"test_top core_top0 mem0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+70,"test_top core_top0 mem0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+71,"test_top core_top0 mem0 exception_i", false,-1, 31,0);
        tracep->declBus(c+71,"test_top core_top0 mem0 exception_o", false,-1, 31,0);
        tracep->declBus(c+184,"test_top core_top0 mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBus(c+340,"test_top core_top0 mem0 reg_wdata", false,-1, 31,0);
        tracep->declBit(c+382,"test_top core_top0 mem_wb0 rst_i", false,-1);
        tracep->declBit(c+381,"test_top core_top0 mem_wb0 clk_i", false,-1);
        tracep->declBus(c+338,"test_top core_top0 mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+339,"test_top core_top0 mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+340,"test_top core_top0 mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+72,"test_top core_top0 mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+73,"test_top core_top0 mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+74,"test_top core_top0 mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+342,"test_top core_top0 mem_wb0 csr_we_i", false,-1);
        tracep->declBus(c+343,"test_top core_top0 mem_wb0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+344,"test_top core_top0 mem_wb0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+75,"test_top core_top0 mem_wb0 csr_we_o", false,-1);
        tracep->declBus(c+76,"test_top core_top0 mem_wb0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+77,"test_top core_top0 mem_wb0 csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 mem_wb0 instret_incr_o", false,-1);
        tracep->declBit(c+39,"test_top core_top0 mem_wb0 flush_int_i", false,-1);
        tracep->declBit(c+381,"test_top core_top0 csr0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 csr0 rst_i", false,-1);
        tracep->declBus(c+58,"test_top core_top0 csr0 raddr_i", false,-1, 11,0);
        tracep->declBus(c+79,"test_top core_top0 csr0 rdata_o", false,-1, 31,0);
        tracep->declBit(c+75,"test_top core_top0 csr0 we_i", false,-1);
        tracep->declBus(c+76,"test_top core_top0 csr0 waddr_i", false,-1, 11,0);
        tracep->declBus(c+77,"test_top core_top0 csr0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 csr0 instret_incr_i", false,-1);
        tracep->declBit(c+16,"test_top core_top0 csr0 irq_timer_i", false,-1);
        tracep->declBit(c+15,"test_top core_top0 csr0 irq_software_i", false,-1);
        tracep->declBit(c+394,"test_top core_top0 csr0 irq_external_i", false,-1);
        tracep->declBit(c+80,"test_top core_top0 csr0 mstatus_ie_o", false,-1);
        tracep->declBit(c+81,"test_top core_top0 csr0 mie_external_o", false,-1);
        tracep->declBit(c+82,"test_top core_top0 csr0 mie_timer_o", false,-1);
        tracep->declBit(c+83,"test_top core_top0 csr0 mie_software_o", false,-1);
        tracep->declBit(c+84,"test_top core_top0 csr0 mip_external_o", false,-1);
        tracep->declBit(c+85,"test_top core_top0 csr0 mip_timer_o", false,-1);
        tracep->declBit(c+86,"test_top core_top0 csr0 mip_software_o", false,-1);
        tracep->declBus(c+87,"test_top core_top0 csr0 mtvec_o", false,-1, 31,0);
        tracep->declBus(c+88,"test_top core_top0 csr0 epc_o", false,-1, 31,0);
        tracep->declBit(c+38,"test_top core_top0 csr0 interrupt_type_i", false,-1);
        tracep->declBit(c+40,"test_top core_top0 csr0 cause_we_i", false,-1);
        tracep->declBus(c+41,"test_top core_top0 csr0 cause_i", false,-1, 3,0);
        tracep->declBit(c+42,"test_top core_top0 csr0 epc_we_i", false,-1);
        tracep->declBus(c+311,"test_top core_top0 csr0 epc_i", false,-1, 31,0);
        tracep->declBit(c+43,"test_top core_top0 csr0 mstatus_ie_clear_i", false,-1);
        tracep->declBit(c+44,"test_top core_top0 csr0 mstatus_ie_set_i", false,-1);
        tracep->declBus(c+413,"test_top core_top0 csr0 CSR_MVENDORID_VALUE", false,-1, 31,0);
        tracep->declBus(c+417,"test_top core_top0 csr0 CSR_MARCHID_VALUE", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 csr0 CSR_MIMPID_VALUE", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 csr0 CSR_MHARTID", false,-1, 31,0);
        tracep->declBus(c+418,"test_top core_top0 csr0 mxl", false,-1, 1,0);
        tracep->declBus(c+419,"test_top core_top0 csr0 mextensions", false,-1, 25,0);
        tracep->declBus(c+420,"test_top core_top0 csr0 misa", false,-1, 31,0);
        tracep->declQuad(c+185,"test_top core_top0 csr0 mcycle", false,-1, 63,0);
        tracep->declQuad(c+187,"test_top core_top0 csr0 minstret", false,-1, 63,0);
        tracep->declBus(c+189,"test_top core_top0 csr0 mstatus", false,-1, 31,0);
        tracep->declBit(c+190,"test_top core_top0 csr0 mstatus_mpie", false,-1);
        tracep->declBit(c+80,"test_top core_top0 csr0 mstatus_mie", false,-1);
        tracep->declBus(c+421,"test_top core_top0 csr0 mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+191,"test_top core_top0 csr0 w_mstatus", false,-1);
        tracep->declBus(c+192,"test_top core_top0 csr0 mie", false,-1, 31,0);
        tracep->declBit(c+81,"test_top core_top0 csr0 mie_external", false,-1);
        tracep->declBit(c+82,"test_top core_top0 csr0 mie_timer", false,-1);
        tracep->declBit(c+83,"test_top core_top0 csr0 mie_software", false,-1);
        tracep->declBit(c+193,"test_top core_top0 csr0 w_mie", false,-1);
        tracep->declBus(c+87,"test_top core_top0 csr0 mtvec", false,-1, 31,0);
        tracep->declBit(c+194,"test_top core_top0 csr0 w_mtvec", false,-1);
        tracep->declBus(c+195,"test_top core_top0 csr0 mscratch", false,-1, 31,0);
        tracep->declBit(c+196,"test_top core_top0 csr0 w_mscratch", false,-1);
        tracep->declBus(c+88,"test_top core_top0 csr0 mepc", false,-1, 31,0);
        tracep->declBit(c+197,"test_top core_top0 csr0 w_mepc", false,-1);
        tracep->declBus(c+198,"test_top core_top0 csr0 mcause", false,-1, 31,0);
        tracep->declBus(c+199,"test_top core_top0 csr0 cause", false,-1, 3,0);
        tracep->declBus(c+200,"test_top core_top0 csr0 cause_rem", false,-1, 26,0);
        tracep->declBit(c+201,"test_top core_top0 csr0 interrupt_type", false,-1);
        tracep->declBit(c+202,"test_top core_top0 csr0 w_mcause", false,-1);
        tracep->declBus(c+203,"test_top core_top0 csr0 mip", false,-1, 31,0);
        tracep->declBit(c+84,"test_top core_top0 csr0 mip_external", false,-1);
        tracep->declBit(c+85,"test_top core_top0 csr0 mip_timer", false,-1);
        tracep->declBit(c+86,"test_top core_top0 csr0 mip_software", false,-1);
        tracep->declBus(c+204,"test_top core_top0 csr0 mtval", false,-1, 31,0);
        tracep->declBit(c+205,"test_top core_top0 csr0 w_mtval", false,-1);
        tracep->declBus(c+422,"test_top data_ram0 RAM_SIZE", false,-1, 31,0);
        tracep->declBus(c+423,"test_top data_ram0 RAM_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+381,"test_top data_ram0 clk_i", false,-1);
        tracep->declBit(c+376,"test_top data_ram0 ce_i", false,-1);
        tracep->declBus(c+377,"test_top data_ram0 addr_i", false,-1, 31,0);
        tracep->declBit(c+378,"test_top data_ram0 we_i", false,-1);
        tracep->declBus(c+379,"test_top data_ram0 data_i", false,-1, 31,0);
        tracep->declBus(c+389,"test_top data_ram0 data_o", false,-1, 31,0);
        tracep->declBit(c+17,"test_top data_ram0 inst_ce_i", false,-1);
        tracep->declBus(c+18,"test_top data_ram0 pc_i", false,-1, 31,0);
        tracep->declBus(c+384,"test_top data_ram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+380,"test_top data_ram0 addr4", false,-1, 20,0);
        tracep->declBus(c+206,"test_top data_ram0 rom_addr4", false,-1, 20,0);
        tracep->declBit(c+381,"test_top core_top0 regfile0 clk_i", false,-1);
        tracep->declBit(c+382,"test_top core_top0 regfile0 rst_i", false,-1);
        tracep->declBit(c+73,"test_top core_top0 regfile0 we_i", false,-1);
        tracep->declBus(c+72,"test_top core_top0 regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+74,"test_top core_top0 regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+318,"test_top core_top0 regfile0 re1_i", false,-1);
        tracep->declBus(c+316,"test_top core_top0 regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+319,"test_top core_top0 regfile0 re2_i", false,-1);
        tracep->declBus(c+317,"test_top core_top0 regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+345,"test_top core_top0 regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+207+i*1,"test_top core_top0 regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+13,"test_top core_top0 regfile0 i", false,-1, 31,0);
    }
}

void Vtest_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtest_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtest_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        tracep->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        tracep->fullBit(oldp+15,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
        tracep->fullBit(oldp+16,(((~ (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                  [0U]))) 
                                               - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                              >> 0x3fU))) 
                                  & (0ULL != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
        tracep->fullBit(oldp+17,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
        tracep->fullQData(oldp+24,((((QData)((IData)(
                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                     [1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [0U])))),64);
        tracep->fullQData(oldp+26,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
        tracep->fullQData(oldp+28,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
        tracep->fullBit(oldp+30,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                  [0U])));
        tracep->fullBit(oldp+31,((0U == (0xffU & vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                         [0U]))));
        tracep->fullQData(oldp+32,(((((QData)((IData)(
                                                      vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                      [1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                  [0U]))) 
                                    - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
        tracep->fullBit(oldp+34,((1U & (~ (IData)((
                                                   ((((QData)((IData)(
                                                                      vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                      [1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                       [0U]))) 
                                                    - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                   >> 0x3fU))))));
        tracep->fullBit(oldp+35,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
        tracep->fullCData(oldp+36,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        tracep->fullBit(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
        tracep->fullBit(oldp+40,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
        tracep->fullCData(oldp+41,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
        tracep->fullBit(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
        tracep->fullBit(oldp+44,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
        tracep->fullIData(oldp+45,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                     ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                   ? 0U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                                     : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                         ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : 
                                             ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                               ? ((1U 
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
                                               : (0xfffffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                                         : 0U))),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        tracep->fullBit(oldp+48,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                  & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                     | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        tracep->fullIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        tracep->fullBit(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        tracep->fullCData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        tracep->fullBit(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
        tracep->fullSData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
        tracep->fullCData(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        tracep->fullBit(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        tracep->fullIData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        tracep->fullCData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        tracep->fullBit(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
        tracep->fullSData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o),12);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
        tracep->fullCData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullBit(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
        tracep->fullSData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
        tracep->fullBit(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
        tracep->fullIData(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
        tracep->fullBit(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
        tracep->fullBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
        tracep->fullBit(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
        tracep->fullBit(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
        tracep->fullIData(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
        tracep->fullIData(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
        tracep->fullCData(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
        tracep->fullCData(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
        tracep->fullBit(oldp+91,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
        tracep->fullBit(oldp+92,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                        >> 1U))));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
        tracep->fullBit(oldp+96,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))));
        tracep->fullBit(oldp+97,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                         & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                        | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                           >> 1U)))));
        tracep->fullIData(oldp+98,((0x3fffffffU & (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                                                   >> 2U))),30);
        tracep->fullIData(oldp+99,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                     ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                         ? ((0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                            + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                               << 2U))
                                         : (0xfffffffcU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                     : (0xfffffffcU 
                                        & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        tracep->fullIData(oldp+100,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                      ? ((0xfffffffcU 
                                          & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                         + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                            << 2U))
                                      : (0xfffffffcU 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        tracep->fullIData(oldp+101,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                     << 2U)),32);
        tracep->fullBit(oldp+102,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
        tracep->fullIData(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
        tracep->fullCData(oldp+104,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0x19U))),7);
        tracep->fullCData(oldp+105,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+106,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+107,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 7U))),5);
        tracep->fullCData(oldp+108,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+109,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+110,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_raddr_o),5);
        tracep->fullCData(oldp+111,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_raddr_o),5);
        tracep->fullBit(oldp+112,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg1_re_o));
        tracep->fullBit(oldp+113,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg2_re_o));
        tracep->fullIData(oldp+114,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_we_o));
        tracep->fullCData(oldp+116,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_reg_waddr_o),5);
        tracep->fullCData(oldp+117,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xfU))
                                      : 0U)),5);
        tracep->fullCData(oldp+118,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U))
                                      : 0U)),5);
        tracep->fullBit(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        tracep->fullBit(oldp+121,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        tracep->fullCData(oldp+122,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullBit(oldp+123,((0x13U == (0x7fU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        tracep->fullBit(oldp+125,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
        tracep->fullCData(oldp+126,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+127,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+128,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 0x19U))),7);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_addr_o),32);
        tracep->fullBit(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_jump_enable_o));
        tracep->fullBit(oldp+131,(VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        tracep->fullBit(oldp+132,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                   >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        tracep->fullIData(oldp+133,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                     >> (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
        tracep->fullIData(oldp+134,((0xffffffffU >> 
                                     (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))),32);
        tracep->fullBit(oldp+135,((0x13U == (0x7fU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        tracep->fullIData(oldp+137,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x14U)))),32);
        tracep->fullIData(oldp+138,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 7U))))),32);
        tracep->fullBit(oldp+139,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        tracep->fullBit(oldp+140,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_signed));
        tracep->fullBit(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_ge_op2_unsigned));
        tracep->fullIData(oldp+142,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__b_imm),32);
        tracep->fullIData(oldp+143,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                      | ((0x800U & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)))))),32);
        tracep->fullBit(oldp+144,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
        tracep->fullIData(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
        tracep->fullBit(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
        tracep->fullBit(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
        tracep->fullQData(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
        tracep->fullBit(oldp+150,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+151,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+152,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
        tracep->fullBit(oldp+154,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt)))))));
        tracep->fullIData(oldp+155,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32),32);
        tracep->fullWData(oldp+156,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result),65);
        tracep->fullCData(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt),6);
        tracep->fullCData(oldp+160,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S),3);
        tracep->fullBit(oldp+161,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U])));
        tracep->fullIData(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]),32);
        tracep->fullQData(oldp+163,((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                        + (QData)((IData)(
                                                          vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp1[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[0U];
        __Vtemp1[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                                  + (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))));
        __Vtemp1[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__reg32)) 
                                                   + (QData)((IData)(
                                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__result[1U])))) 
                                >> 0x20U));
        tracep->fullWData(oldp+165,(__Vtemp1),65);
        tracep->fullBit(oldp+168,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
        tracep->fullIData(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
        tracep->fullWData(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
        tracep->fullCData(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
        tracep->fullIData(oldp+175,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                                      << 0x1fU) | (
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                                   >> 1U))),32);
        tracep->fullCData(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
        tracep->fullBit(oldp+177,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                   >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
        tracep->fullQData(oldp+178,((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
        __Vtemp2[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
        __Vtemp2[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                  - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
        __Vtemp2[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                >> 0x20U));
        tracep->fullWData(oldp+180,(__Vtemp2),65);
        tracep->fullBit(oldp+183,((0x73U == (0x7fU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        tracep->fullCData(oldp+184,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        tracep->fullQData(oldp+185,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
        tracep->fullQData(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
        tracep->fullIData(oldp+189,((0x1800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                                 << 7U) 
                                                | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                   << 3U)))),32);
        tracep->fullBit(oldp+190,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
        tracep->fullBit(oldp+191,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        tracep->fullIData(oldp+192,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                                   << 7U) 
                                                  | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                                     << 3U)))),32);
        tracep->fullBit(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
        tracep->fullBit(oldp+194,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        tracep->fullIData(oldp+195,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
        tracep->fullBit(oldp+196,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        tracep->fullBit(oldp+197,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        tracep->fullIData(oldp+198,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                      << 0x1fU) | (
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                                    << 4U) 
                                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
        tracep->fullCData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
        tracep->fullBit(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
        tracep->fullIData(oldp+203,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                                   << 7U) 
                                                  | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                                     << 3U)))),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
        tracep->fullBit(oldp+205,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        tracep->fullIData(oldp+206,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+209,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+214,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+216,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+217,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+218,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+219,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+220,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+238,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        tracep->fullBit(oldp+239,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                    & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                   | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                      & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
        tracep->fullBit(oldp+240,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o))));
        tracep->fullIData(oldp+241,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                      : 0U)),32);
        tracep->fullIData(oldp+242,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                      ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                      : 0U)),32);
        tracep->fullCData(oldp+243,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                      ? ((1U & ((~ (IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))) 
                                                | (~ (IData)(
                                                             (0U 
                                                              != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)))))
                                          ? 3U : 1U)
                                      : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
        tracep->fullCData(oldp+244,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                      ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                          ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                              | (0U 
                                                 == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                              ? 3U : 1U)
                                          : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                                     ? 1U
                                                     : 3U)
                                                    : 0U))),3);
        tracep->fullBit(oldp+245,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        tracep->fullIData(oldp+247,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        tracep->fullBit(oldp+248,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        tracep->fullIData(oldp+249,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        tracep->fullIData(oldp+250,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        tracep->fullBit(oldp+251,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        tracep->fullBit(oldp+252,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        tracep->fullBit(oldp+253,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
        tracep->fullIData(oldp+254,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        tracep->fullIData(oldp+255,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        tracep->fullIData(oldp+256,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
        tracep->fullBit(oldp+257,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
        tracep->fullIData(oldp+260,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        tracep->fullIData(oldp+261,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        tracep->fullIData(oldp+262,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
        tracep->fullIData(oldp+263,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        tracep->fullIData(oldp+264,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        tracep->fullIData(oldp+265,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
        tracep->fullBit(oldp+266,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        tracep->fullBit(oldp+267,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullIData(oldp+268,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        tracep->fullBit(oldp+269,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        tracep->fullIData(oldp+270,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        tracep->fullIData(oldp+271,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullBit(oldp+272,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+273,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        tracep->fullBit(oldp+274,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
        tracep->fullIData(oldp+275,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+276,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
        tracep->fullBit(oldp+278,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
        tracep->fullIData(oldp+281,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
        tracep->fullIData(oldp+284,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        tracep->fullIData(oldp+286,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
        tracep->fullBit(oldp+287,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        tracep->fullCData(oldp+288,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
        tracep->fullCData(oldp+289,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
        tracep->fullBit(oldp+290,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [0U]));
        tracep->fullBit(oldp+291,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [0U]));
        tracep->fullIData(oldp+292,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]),32);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
        tracep->fullSData(oldp+295,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U])),16);
        tracep->fullBit(oldp+296,((0xbff8U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))));
        tracep->fullBit(oldp+297,((0xbffcU == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))));
        tracep->fullBit(oldp+298,((0x4000U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))));
        tracep->fullBit(oldp+299,((0x4004U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [0U]))));
        tracep->fullBit(oldp+300,((0U == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U]))));
        tracep->fullBit(oldp+301,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [2U]));
        tracep->fullBit(oldp+302,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [2U]));
        tracep->fullIData(oldp+303,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [2U]),32);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [2U]),32);
        tracep->fullCData(oldp+305,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [2U])),8);
        tracep->fullBit(oldp+306,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
        tracep->fullIData(oldp+307,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
        tracep->fullIData(oldp+308,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
        tracep->fullIData(oldp+309,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                    [0U]),32);
        tracep->fullBit(oldp+310,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
        tracep->fullIData(oldp+311,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
        tracep->fullBit(oldp+312,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        tracep->fullIData(oldp+313,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
        tracep->fullCData(oldp+314,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        tracep->fullIData(oldp+315,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
        tracep->fullCData(oldp+316,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+317,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+318,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+319,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+320,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        tracep->fullIData(oldp+321,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
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
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
        tracep->fullIData(oldp+322,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                          : 0U) : (
                                                   (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : 0U)
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
        tracep->fullBit(oldp+323,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+324,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        tracep->fullBit(oldp+325,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
        tracep->fullSData(oldp+326,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
        tracep->fullIData(oldp+327,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                      << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
        tracep->fullCData(oldp+328,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+329,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+330,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        tracep->fullIData(oldp+331,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        tracep->fullBit(oldp+332,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        tracep->fullIData(oldp+333,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        tracep->fullCData(oldp+334,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        tracep->fullIData(oldp+335,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
        tracep->fullBit(oldp+336,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
        tracep->fullIData(oldp+337,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
        tracep->fullCData(oldp+338,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+339,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+340,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
        tracep->fullIData(oldp+341,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
        tracep->fullBit(oldp+342,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
        tracep->fullSData(oldp+343,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o),12);
        tracep->fullIData(oldp+344,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
        tracep->fullIData(oldp+345,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+346,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        tracep->fullBit(oldp+347,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
        tracep->fullBit(oldp+348,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
        tracep->fullIData(oldp+349,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+350,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullIData(oldp+351,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op1_o),32);
        tracep->fullCData(oldp+352,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        tracep->fullIData(oldp+353,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__i_reg_wdata_o),32);
        tracep->fullIData(oldp+354,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
        tracep->fullBit(oldp+355,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_reg_we_o));
        tracep->fullIData(oldp+356,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_data_o),32);
        tracep->fullIData(oldp+357,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_addr_o),32);
        tracep->fullBit(oldp+358,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_we_o));
        tracep->fullCData(oldp+359,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__s_mem_op_o),4);
        tracep->fullIData(oldp+360,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
        tracep->fullIData(oldp+361,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o),32);
        tracep->fullIData(oldp+362,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o),32);
        tracep->fullIData(oldp+363,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
        tracep->fullIData(oldp+364,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
        tracep->fullIData(oldp+365,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
        tracep->fullBit(oldp+366,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
        tracep->fullBit(oldp+367,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
        tracep->fullBit(oldp+368,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
        tracep->fullIData(oldp+369,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
        tracep->fullQData(oldp+370,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
        tracep->fullBit(oldp+372,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
        tracep->fullBit(oldp+373,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
        tracep->fullBit(oldp+374,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
        tracep->fullBit(oldp+375,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
        tracep->fullBit(oldp+376,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [1U]));
        tracep->fullIData(oldp+377,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [1U]),32);
        tracep->fullBit(oldp+378,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [1U]));
        tracep->fullIData(oldp+379,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [1U]),32);
        tracep->fullIData(oldp+380,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [1U])),21);
        tracep->fullBit(oldp+381,(vlTOPp->clk_i));
        tracep->fullBit(oldp+382,(vlTOPp->rst_i));
        tracep->fullBit(oldp+383,(vlTOPp->halt_o));
        tracep->fullIData(oldp+384,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
        tracep->fullBit(oldp+385,(((~ (IData)(vlTOPp->rst_i)) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->fullBit(oldp+386,(((~ ((IData)(vlTOPp->rst_i) 
                                       | (0x13U != 
                                          (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))) 
                                   & ((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                      & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
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
                                             | ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0xcU)) 
                                                | (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x19U))))))))));
        tracep->fullBit(oldp+387,((1U & ((~ ((IData)(vlTOPp->rst_i) 
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
        tracep->fullBit(oldp+388,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
        tracep->fullIData(oldp+389,((vlSymsp->TOP__test_top.__PVT__device_req
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
        tracep->fullIData(oldp+390,(3U),32);
        tracep->fullIData(oldp+391,(1U),32);
        tracep->fullIData(oldp+392,(0x200000U),32);
        tracep->fullIData(oldp+393,(0x15U),32);
        tracep->fullBit(oldp+394,(0U));
        tracep->fullIData(oldp+395,(3U),32);
        tracep->fullIData(oldp+396,(1U),32);
        tracep->fullIData(oldp+397,(0x20U),32);
        tracep->fullIData(oldp+398,(2U),32);
        tracep->fullIData(oldp+399,(0xffffffffU),32);
        tracep->fullIData(oldp+400,(3U),32);
        tracep->fullIData(oldp+401,(1U),32);
        tracep->fullSData(oldp+402,(0x4000U),16);
        tracep->fullSData(oldp+403,(0U),16);
        tracep->fullSData(oldp+404,(0xbff8U),16);
        tracep->fullBit(oldp+405,(1U));
        tracep->fullCData(oldp+406,(4U),8);
        tracep->fullCData(oldp+407,(8U),8);
        tracep->fullBit(oldp+408,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_flush_o));
        tracep->fullCData(oldp+409,(1U),4);
        tracep->fullCData(oldp+410,(2U),4);
        tracep->fullCData(oldp+411,(4U),4);
        tracep->fullCData(oldp+412,(8U),4);
        tracep->fullIData(oldp+413,(0U),32);
        tracep->fullCData(oldp+414,(0U),3);
        tracep->fullCData(oldp+415,(1U),3);
        tracep->fullCData(oldp+416,(3U),3);
        tracep->fullIData(oldp+417,(0x16U),32);
        tracep->fullCData(oldp+418,(1U),2);
        tracep->fullIData(oldp+419,(0x1100U),26);
        tracep->fullIData(oldp+420,(0x40001100U),32);
        tracep->fullCData(oldp+421,(3U),2);
        tracep->fullIData(oldp+422,(0x200000U),32);
        tracep->fullIData(oldp+423,(0x15U),32);
    }
}
