# 範例程式碼使用 RV32I 指令集的四個基本指令 (LUI, AUIPC, JAL, JALR)

    .text                    # 定義程式碼段的開始
    .global _start           # 定義全局標籤 _start 作為程序入口

_start:
    # 範例 1: LUI (Load Upper Immediate)
    lui x10, 0x12345         # 將立即數 0x12345 載入寄存器 x10 的高 20 位
                             # 最終 x10 的值為 0x12345000

    # 範例 2: AUIPC (Add Upper Immediate to PC)
    auipc x11, 0x2           # 將立即數 0x2 載入並加到當前的 PC（程序計數器），結果存入寄存器 x11
                             # 最終 x11 的值為 PC + (0x2 << 12)


    .end                    # 程式結束