#include <stdint.h>
#include "kprintf.h"  // 你自定義的輸出函式，或用 <stdio.h> 的 printf()

//-----------------------------------------------------------------
// [1] CSR 讀寫函式：mstatus、mie、mip
//-----------------------------------------------------------------

static inline uint32_t read_mstatus(void)
{
    uint32_t val;
    __asm__ volatile ("csrr %0, mstatus" : "=r"(val));
    return val;
}

static inline uint32_t read_mie(void)
{
    uint32_t val;
    __asm__ volatile ("csrr %0, mie" : "=r"(val));
    return val;
}

static inline uint32_t read_mip(void)
{
    uint32_t val;
    __asm__ volatile ("csrr %0, mip" : "=r"(val));
    return val;
}

//-----------------------------------------------------------------
// [2] CLINT 位址: 讀/寫 mtime & mtimecmp
//-----------------------------------------------------------------
#define CLINT_BASE          0x02000000UL
#define CLINT_MTIME_LO      (CLINT_BASE + 0xBFF8)
#define CLINT_MTIME_HI      (CLINT_BASE + 0xBFFC)
#define CLINT_MTIMECMP_LO   (CLINT_BASE + 0x4000)
#define CLINT_MTIMECMP_HI   (CLINT_BASE + 0x4004)

static inline uint64_t read_mtime(void)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIME_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIME_HI;

    uint32_t hi = *hi_ptr;
    uint32_t lo = *lo_ptr;
    return ((uint64_t)hi << 32) | lo;
}

static inline void write_mtimecmp(uint64_t val)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIMECMP_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIMECMP_HI;

    uint32_t lo = (uint32_t)(val & 0xFFFFFFFFULL);
    uint32_t hi = (uint32_t)(val >> 32);

    // 避免 race condition: 先寫 high=0xFFFFFFFF, 再寫 low, 最後寫回 high
    *hi_ptr = 0xFFFFFFFF;
    *lo_ptr = lo;
    *hi_ptr = hi;
}

//-----------------------------------------------------------------
// [3] 主程式: 設定 & 觀察 mtime、mtimecmp，以及檢查 mstatus/mie/mip
//-----------------------------------------------------------------
int main(void)
{
    printf("[main] Hello from bare-metal RISC-V!\n");

    // 1) 讀取 mtime
    uint64_t now = read_mtime();

    // 2) 設定定時器比較值 => 現在 + 1,000,000,000 ticks
    uint64_t interval = 30000000ULL;
    uint64_t target = now + interval;
    write_mtimecmp(target);

    // 顯示設定後的 mtimecmp
    uint32_t hi = (uint32_t)(target >> 32);
    uint32_t lo = (uint32_t)(target & 0xFFFFFFFFULL);
    printf("[main] Set mtimecmp to 0x%08x_%08x\n", hi, lo);

    // 3) 在迴圈中定期印出目前時間 & 中斷相關 CSR
    //    例如每 5,000,000 ticks 印一次
    uint64_t last_print = now;
    while (1) {
        uint64_t curr = read_mtime();
        uint64_t diff = (curr - last_print);

        if (diff >= 5000000ULL) {
            last_print = curr;

            // 讀取 mstatus, mie, mip
            uint32_t ms = read_mstatus();
            uint32_t mi = read_mie();
            uint32_t mp = read_mip();



            // 印時間 + CSR
            uint32_t chi = (uint32_t)(curr >> 32);
            uint32_t clo = (uint32_t)(curr & 0xFFFFFFFFULL);

            printf("mtime=0x%08x_%08x\n",chi, clo);
            if(chi>=hi&&clo>=lo){
                printf("done\n");
                break;
            } 
        }

        // 當 mtime >= mtimecmp 時，硬體會設 mip.MTIP=1 (定時器中斷 pending)
        // 若 mstatus.MIE=1 && mie.MTIE=1，也會進入 ISR (若 mtvec & trap handler 已設定)
    }

    return 0;
}
