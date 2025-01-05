#include <stdint.h>
#include "kprintf.h"  // 你自定義的 kprintf()

//-----------------------------------------------------------------
// 假設環境: CLINT_BASE = 0x02000000, mtime=0xBFF8, mtimecmp=0x4000
//-----------------------------------------------------------------
#define CLINT_BASE          0x02000000UL
#define CLINT_MTIME_LO      (CLINT_BASE + 0xBFF8)
#define CLINT_MTIME_HI      (CLINT_BASE + 0xBFFC)
#define CLINT_MTIMECMP_LO   (CLINT_BASE + 0x4000)
#define CLINT_MTIMECMP_HI   (CLINT_BASE + 0x4004)

//-----------------------------------------------------------------
// 1) 讀取 64-bit mtime
//    不使用任何 64-bit 除法/餘數，僅做加/減/判斷即可
//-----------------------------------------------------------------
static inline uint64_t read_mtime(void)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIME_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIME_HI;

    // 為了簡化，直接 "先讀 hi，再讀 lo" (如果要更嚴謹，可反覆讀兩次)
    uint32_t hi = *hi_ptr;
    uint32_t lo = *lo_ptr;

    return ((uint64_t)hi << 32) | lo;
}

//-----------------------------------------------------------------
// 2) 寫入 64-bit mtimecmp
//    同樣不用任何除法操作
//-----------------------------------------------------------------
static inline void write_mtimecmp(uint64_t val)
{
    volatile uint32_t *lo_ptr = (uint32_t *)CLINT_MTIMECMP_LO;
    volatile uint32_t *hi_ptr = (uint32_t *)CLINT_MTIMECMP_HI;

    // 避免 race condition: 推薦先把 high 寫為 0xFFFFFFFF
    // 再寫 low，最後寫正確的 high
    uint32_t lo = (uint32_t)(val & 0xFFFFFFFFULL);
    uint32_t hi = (uint32_t)(val >> 32);

    *hi_ptr = 0xFFFFFFFF;
    *lo_ptr = lo;
    *hi_ptr = hi;
}

//-----------------------------------------------------------------
// 3) 主程式，不含任何標準函式庫
//-----------------------------------------------------------------
int main(void)
{
    // 簡單印一行看是否進入 main
    printf("Hello from bare-metal RISC-V!\n");

    // 讀取目前時間 (64-bit)
    uint64_t now = read_mtime();

    // 定義一個區間 (例如 1,000,000 ticks)
    // 這裡僅做加法，不做任何除法、餘數
    uint64_t interval = 1000000000ULL;

    // 設定 mtimecmp => "現在時間 + interval"
    // 當 mtime >= mtimecmp，就會觸發 Machine Timer Interrupt
    write_mtimecmp(now + interval);

    // 顯示設定後的值 (用分兩段的方式印出 64 bits)
    uint32_t hi = (uint32_t)((now + interval) >> 32);
    uint32_t lo = (uint32_t)((now + interval) & 0xFFFFFFFFULL);
    printf("Set mtimecmp to 0x%08x_%08x\n", hi, lo);

    //-------------------------------
    // 簡易迴圈：每隔約5000000 ticks印一次時間
    //  (為了示範, 只用比較, 不做 mod)
    //-------------------------------
    uint64_t last_print_time = now;
    while (1)
    {
        // 不斷讀取 mtime
        uint64_t curr = read_mtime();

        // 如果 mtime - last_print_time >= 5000000
        // 就印一下 (只做64位減法, 不做除法)
        uint64_t diff = curr - last_print_time;
        if (diff >= 5000000ULL)
        {
            uint32_t hi32 = (uint32_t)(curr >> 32);
            uint32_t lo32 = (uint32_t)(curr & 0xFFFFFFFFULL);
            printf("mtime = 0x%08x_%08x\n", hi32, lo32);

            // 更新 last_print_time
            last_print_time = curr;
        }

        // 在此同時, 當 time 到達 mtimecmp, 會觸發中斷
        // trap handler 需在彙編負責: 
        //   - csrr mcause => 0x80000007 => Timer interrupt
        //   - 執行你的ISR => 
        //        handle_m_timer_interrupt(); 
        //        可能重新寫 mtimecmp
        //   - mret 返回此處
    }

    // 理論上不會離開 while(1)
    return 0;
}
