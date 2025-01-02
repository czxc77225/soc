#include "util.h"
#include "soc_reg.h"
#include "kprintf.h"

// 定義 Timer 寄存器地址
#define CTRL_BASE         0x40000000  // 假設的控制基址，請根據實際硬體修改
#define TIMER_CTRL_ADDR   (CTRL_BASE + 0x04)
#define TIMER_COUNT_ADDR  (CTRL_BASE + 0x08)

// 設置 Timer
void timer_init() {
    // 啟用 Timer，假設寫入 1 到控制寄存器啟動 Timer
    DEV_WRITE(TIMER_CTRL_ADDR, 1);
    printf("Timer initialized and started.\n");
}

// 讀取 Timer 計數值
unsigned int read_timer_count() {
    unsigned int count = 0;
    DEV_READ(TIMER_COUNT_ADDR, count);
    return count;
}

int main(int argc, char **argv) {
    // 初始化 Timer
    timer_init();

    // 讀取起始計數值
    unsigned int start_count = read_timer_count();
    printf("Start Timer Count: %d\n", start_count);

    // 執行一些操作，例如計算兩數相乘
    int i=10;
    int a[i],b[i],c[i];
    for(int j=0;j<i;j++){
      a[j]=j+2;
      b[j]=j*2;
      c[j]=a[j]+b[j];
      printf("c[%d]=%d\n",j,c[j]);
    }

    // 讀取結束計數值
    unsigned int end_count = read_timer_count();
    printf("End Timer Count: %d\n", end_count);

    // 計算操作所花費的時間
    unsigned int elapsed = end_count - start_count;
    printf("Elapsed Timer Count: %d\n", elapsed);

    // 停止 Timer
    DEV_WRITE(TIMER_CTRL_ADDR, 0);
    printf("Timer stopped.\n");

    return 0;
}