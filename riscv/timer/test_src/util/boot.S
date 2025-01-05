#include "soc_reg.h"

.section .text

_start:
  .global _start
  /* set all registers to zero */
  mv  x1, x0
  mv  x2, x1
  mv  x3, x1
  mv  x4, x1
  mv  x5, x1
  mv  x6, x1
  mv  x7, x1
  mv  x8, x1
  mv  x9, x1
  mv x10, x1
  mv x11, x1
  mv x12, x1
  mv x13, x1
  mv x14, x1
  mv x15, x1
  mv x16, x1
  mv x17, x1
  mv x18, x1
  mv x19, x1
  mv x20, x1
  mv x21, x1
  mv x22, x1
  mv x23, x1
  mv x24, x1
  mv x25, x1
  mv x26, x1
  mv x27, x1
  mv x28, x1
  mv x29, x1
  mv x30, x1
  mv x31, x1

  /* stack initilization */
  la   x2, _stack_start

  /* clear BSS */
  la x26, _bss_start
  la x27, _bss_end

  bge x26, x27, zero_loop_end

zero_loop:
  sw x0, 0(x26)
  addi x26, x26, 4
  ble x26, x27, zero_loop
zero_loop_end:

la      s0, data 
lbu     a5,-17(s0)
addi    a5,a5,48
sb      a5,-17(s0)

# (a) 設定 mtvec => 指向 trap_vector
la   t0, trap_vector     # trap_vector 是下方定義的中斷入口
csrw mtvec, t0           # Direct mode => bit0=0

# (b) 開啟 Timer Interrupt (mie.MTIE=bit7)
li   t1, (1 << 7)        # 0x80
csrs mie, t1             # set mie.MTIE=1

# (c) 開啟全域中斷 (mstatus.MIE=bit3)
li   t1, (1 << 3)        # 0x8
csrs mstatus, t1


main_entry:
  /* jump to main program entry point (argc = argv = 0) */
  addi x10, x0, 0
  addi x11, x0, 0
  call   main

  call   sim_halt



trap_vector:
  # 讀取 mcause
  csrr a0, mcause

  # 若 a0=0x80000007 => Timer interrupt
  li   t0, 0x80000007
  beq  a0, t0, handle_timer_int

  # 若不是計時器中斷，示範直接跳到一個死循環觀察
  j   other_trap



handle_timer_int:
    # 這裡可做：
    #   1) 重設 mtimecmp => (mtime + interval)
    #   2) 印訊息 / 其它處理
    # 然後 mret 回主程式

    mret

other_trap:
    # 不處理的例外或中斷 => 掛起
hang_loop:
    j hang_loop

  
  /* If execution ends up here just put the core to sleep */
sleep_loop:
  j sleep_loop

/* =================================================== [ exceptions ] === */
/* This section has to be down here, since we have to disable rvc for it  */











data:
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00
  .byte 0x00

  