    .text
    .global _start

_start:
    # 初始化記憶體空間 (模擬資料)
    la x10, data         # 將 data 的地址載入 x10 作為基址

    # 範例 1: LB (Load Byte - 符號擴展載入 8 位元組)
    li x11, 0x80         # 放入 0x80 到 x11，這是負數的 8-bit 表示 (符號位元為 1)
    sb x11, 0(x10)       # 將 x11 的低 8 位儲存到 data[0]
    lb x12, 0(x10)       # 符號擴展載入 data[0] 到 x12
    # 結果: x12 = 0xFFFFFF80 (符號擴展)

    # 範例 2: LH (Load Halfword - 符號擴展載入 16 位元組)
    li x11, 0x8001       # 放入 0x8001 到 x11
    sh x11, 2(x10)       # 將 x11 的低 16 位儲存到 data[2]
    lh x13, 2(x10)       # 符號擴展載入 data[2] 和 data[3] 到 x13

    # 結果: x13 = 0xFFFF8001 (符號擴展)

    # 範例 3: LW (Load Word - 符號擴展載入 32 位元組)
    li x11, 0x80000001   # 放入 0x80000001 到 x11
    sw x11, 4(x10)       # 將 x11 儲存到 data[4] 到 data[7]
    lw x14, 4(x10)       # 載入 data[4] 到 data[7] 到 x14
    # 結果: x14 = 0x80000001 (符號擴展)

    # 範例 4: LBU (Load Byte Unsigned - 零擴展載入 8 位元組)
    li x11, 0x80         # 放入 0x80 到 x11
    sb x11, 0(x10)       # 將 x11 的低 8 位儲存到 data[0]
    lbu x15, 0(x10)      # 零擴展載入 data[0] 到 x15
    # 結果: x15 = 0x00000080 (零擴展)

    # 範例 5: LHU (Load Halfword Unsigned - 零擴展載入 16 位元組)
    li x11, 0x8001       # 放入 0x8001 到 x11
    sh x11, 2(x10)       # 將 x11 的低 16 位儲存到 data[2]
    lhu x16, 2(x10)      # 零擴展載入 data[2] 和 data[3] 到 x16
    # 結果: x16 = 0x00008001 (零擴展)

    # 結束
    li x17, 10           # 用於退出的系統呼叫號碼 (環境不同可能需要修改)

.data
data:                    # 定義一個 8 位元組的資料空間
    .byte 0x00
    .byte 0x00
    .byte 0x00
    .byte 0x00
    .byte 0x00
    .byte 0x00
    .byte 0x00
    .byte 0x00
