    .section .text
    .align  2

    .global  _start
_start:
    #-----------------------------------------------------------------
    # 1) 初始化堆疊 (stack)
    #-----------------------------------------------------------------
    la    sp, _stack_start   # 根據你的鏈結腳本提供的符號

    #-----------------------------------------------------------------
    # 2) 清 bss 區 (可選，看你程式需要)
    #-----------------------------------------------------------------
    la    t0, _bss_start
    la    t1, _bss_end
bss_clear_loop:
    bgeu  t0, t1, bss_clear_done
    sw    zero, 0(t0)
    addi  t0, t0, 4
    j     bss_clear_loop
bss_clear_done:

    #-----------------------------------------------------------------
    # 3) 設定 mtvec => 指向我們的 trap_vector
    #    - 若使用「Direct Mode (mode=0)」，最低 bit = 0
    #    - 若使用「Vectored Mode (mode=1)」，最低 bit = 1
    #  這裡示範 Direct: => t0[0] = 0
    #-----------------------------------------------------------------
    la    t0, trap_vector    # 你的中斷/例外處理程式入口標籤
    # 確保 t0對齊 4 bytes；若你要 vectored mode，也可 or上 1
    csrw  mtvec, t0

    #-----------------------------------------------------------------
    # 4) 開啟對應的中斷使能 (mie) 
    #    - bit7(MTIE) = 1 => 允許Timer中斷
    #    - bit3(MSIE) = 1 => 允許Software中斷
    #    - bit11(MEIE)= 1 => 允許External中斷
    #    (這裡示範只開 Timer中斷)
    #-----------------------------------------------------------------
    li    t1, (1 << 7)       # 0x80
    csrs  mie, t1            # set mie.MTIE=1

    # 也可以多開 SW/External: e.g.
    # li    t1, (1 << 7) | (1 << 3) | (1 << 11)
    # csrs  mie, t1

    #-----------------------------------------------------------------
    # 5) 開啟全域中斷 (mstatus.MIE=1)
    #    - bit3 = 1 => MIE
    #-----------------------------------------------------------------
    li    t1, (1 << 3)       # 0x8
    csrs  mstatus, t1

    #-----------------------------------------------------------------
    # 6) 跳到 main (或其他 C 程式入口)
    #    - 可以把 argc=0, argv=0 之類的初始化
    #-----------------------------------------------------------------
    la    a0, 0
    la    a1, 0
    la    t0, main
    jr    t0

    #================================================================
    # 這裡放你的 Trap Vector
    #================================================================
    .align 4
trap_vector:
    #-----------------------------------------------------------------
    # 1) 讀取 mcause, 判斷是中斷或例外
    #    若 bit31=1 => 中斷, 低bits 為原因
    #    若 bit31=0 => 例外, 低bits 為原因
    #-----------------------------------------------------------------
    csrr  t0, mcause
    # 例如判斷是否 0x80000007 => M-mode Timer中斷 
    li    t1, 0x80000007
    beq   t0, t1, handle_timer_interrupt

    #-----------------------------------------------------------------
    # 其餘例外/中斷處理
    #-----------------------------------------------------------------
    j     handle_other_trap

handle_timer_interrupt:
    # 你的定時器中斷服務程式 (ISR)
    # - 通常會更新 mtimecmp 讓之後定期中斷
    # - 清 mip.MTIP 或做任何需要的動作
    # - 然後 mret

    # 假設你透過 CSR 指令或 memory-mapped CLINT 重設 mtimecmp
    # [略] ...
    # 結束時執行 mret
    mret

handle_other_trap:
    # 你可以在這裡放 debug info, 或視情況處理 ecall/misaligned等
    # 最簡單: 進入無窮迴圈
    j     handle_other_trap

    #================================================================
    # 你的程式還可以放其他程式碼, 例如 _stack, bss區符號...
    #================================================================

    .global _stack_start
    .section .bss
    .align 4
_stack_start:
    # 堆疊的開始（由 link.ld 安排具體地址）
    .space 4

    .section .bss
    .align 4
_bss_start:
    # ...
_bss_end:

