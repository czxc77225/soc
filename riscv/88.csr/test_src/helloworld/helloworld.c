#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

// RISC-V 中 mscratch 對應的 CSR 編號 (Machine Mode CSR)
#define CSR_MSCRATCH 0x340

//------------------------------------------------------------------------------
// 讀取 CSR_MSCRATCH： csrr rd, 0x340
//------------------------------------------------------------------------------
static inline uint32_t read_csr_mscratch() {
    uint32_t value;
    asm volatile(
        "csrr %0, %1"
        : "=r"(value)
        : "i"(CSR_MSCRATCH)
    );
    return value;
}

//------------------------------------------------------------------------------
// 用 csrrw 寫 mscratch，最後一個參數可以是「動態變數」(寄存器)
//------------------------------------------------------------------------------
static inline uint32_t csrrw_mscratch(uint32_t new_val) {
    uint32_t old_val;
    asm volatile(
        "csrrw %0, %1, %2"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH), "r"(new_val)
    );
    return old_val;
}

//------------------------------------------------------------------------------
// 用 csrrs 設置 mscratch 某些位，最後一個參數可以是「動態變數」(寄存器)
//------------------------------------------------------------------------------
static inline uint32_t csrrs_mscratch(uint32_t set_bits) {
    uint32_t old_val;
    asm volatile(
        "csrrs %0, %1, %2"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH), "r"(set_bits)
    );
    return old_val;
}

//------------------------------------------------------------------------------
// 用 csrrc 清除 mscratch 某些位，最後一個參數可以是「動態變數」(寄存器)
//------------------------------------------------------------------------------
static inline uint32_t csrrc_mscratch(uint32_t clear_bits) {
    uint32_t old_val;
    asm volatile(
        "csrrc %0, %1, %2"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH), "r"(clear_bits)
    );
    return old_val;
}

//------------------------------------------------------------------------------
// [示範] csrrwi：只能「寫死」一個編譯期 5-bit 常數 (zimm)
//------------------------------------------------------------------------------
static inline uint32_t csrrwi_mscratch_fixed() {
    uint32_t old_val;
    // 寫死 zimm=15 (0x1F)
    asm volatile(
        "csrrwi %0, %1, 15"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH)
    );
    return old_val;
}

//------------------------------------------------------------------------------
// [新增] csrrsi：只能「寫死」一個編譯期 5-bit 常數 (zimm)
//   - 這裡示範 zimm=0xF (31)。會把 mscratch 的低 4 bits 設成 1。
//------------------------------------------------------------------------------
static inline uint32_t csrrsi_mscratch_fixed() {
    uint32_t old_val;
    // 寫死 zimm=31 (0x0F)
    asm volatile(
        "csrrsi %0, %1, 31"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH)
    );
    return old_val;
}

//------------------------------------------------------------------------------
// [新增] csrrci：只能「寫死」一個編譯期 5-bit 常數 (zimm)
//   - 這裡示範 zimm=0xF (15)。會把 mscratch 的低 4 bits 清成 0。
//------------------------------------------------------------------------------
static inline uint32_t csrrci_mscratch_fixed() {
    uint32_t old_val;
    // 寫死 zimm=15 (0x0F)
    asm volatile(
        "csrrci %0, %1, 15"
        : "=r"(old_val)
        : "i"(CSR_MSCRATCH)
    );
    return old_val;
}

int main(void) {
    uint32_t old_mscratch, new_mscratch;

    // 讀取並顯示初始 mscratch
    uint32_t initial_mscratch = read_csr_mscratch();
    printf("Initial mscratch = 0x%08" PRIx32 "\n\n", initial_mscratch);

    //----------------------------------------------------------------------
    // 1) 用 csrrw()：可以帶「動態」參數
    //----------------------------------------------------------------------
    old_mscratch = csrrw_mscratch(0x12345678);
    new_mscratch = read_csr_mscratch();
    printf("[csrrw] write 0x12345678 => mscratch\n");
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    //----------------------------------------------------------------------
    // 2) csrrs()：設定部分位
    //----------------------------------------------------------------------
    uint32_t set_bits = 0x0000FF00;
    old_mscratch = csrrs_mscratch(set_bits);
    new_mscratch = read_csr_mscratch();
    printf("[csrrs] set bits 0x%08" PRIx32 " => mscratch\n", set_bits);
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    //----------------------------------------------------------------------
    // 3) csrrc()：清除部分位
    //----------------------------------------------------------------------
    uint32_t clear_bits = 0x00000F00;
    old_mscratch = csrrc_mscratch(clear_bits);
    new_mscratch = read_csr_mscratch();
    printf("[csrrc] clear bits 0x%08" PRIx32 " => mscratch\n", clear_bits);
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    //----------------------------------------------------------------------
    // 4) [示範] csrrwi(): 寫死 15 (0x1F)
    //----------------------------------------------------------------------
    old_mscratch = csrrwi_mscratch_fixed();
    new_mscratch = read_csr_mscratch();
    printf("[csrrwi] fixed immediate (15) => mscratch\n");
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    //----------------------------------------------------------------------
    // 5) [示範] csrrsi(): 寫死 31 (0x0F)
    //    把 mscratch 的低 4 bits 設成 1
    //----------------------------------------------------------------------
    old_mscratch = csrrsi_mscratch_fixed();
    new_mscratch = read_csr_mscratch();
    printf("[csrrsi] fixed immediate (31) => mscratch\n");
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    //----------------------------------------------------------------------
    // 6) [示範] csrrci(): 寫死 15 (0x0F)
    //    把 mscratch 的低 4 bits 清成 0
    //----------------------------------------------------------------------
    old_mscratch = csrrci_mscratch_fixed();
    new_mscratch = read_csr_mscratch();
    printf("[csrrci] fixed immediate (15) => mscratch\n");
    printf("    Old mscratch = 0x%08" PRIx32 "\n", old_mscratch);
    printf("    New mscratch = 0x%08" PRIx32 "\n\n", new_mscratch);

    return 0;
}
