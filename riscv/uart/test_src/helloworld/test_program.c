//======================================================================
// test_program.c - All-in-One Bare-metal UART Test (No stdlib)
//======================================================================
// 說明：
//   1. 不使用標準函式庫，不使用標準的 strcmp、printf。
//   2. 自製 strcmp、簡化版 kprintf、UART0/UART1 的初始化與收發。
//   3. 在 main() 中執行數次 UART 傳送、接收與比對測試。
//======================================================================

#include <stdint.h>  // 僅用於固定寬度型別，如 uint32_t
#include <stdio.h>

//------------------------------------------------------------------
// (A) 硬體定義：UART base address & registers
//------------------------------------------------------------------
#define UART0_BASE        0x00300000
#define UART1_BASE        0x00310000

#define UART_REG_CTRL     0x00
#define UART_REG_STATUS   0x04
#define UART_REG_TX       0x08
#define UART_REG_RX       0x0C

//------------------------------------------------------------------
// (B) 狀態暫存器的 bit 定義
//     bit0: TX_BUSY   (1=正在傳送, 0=可送)
//     bit1: RX_READY  (1=有資料可讀, 0=無資料)
//------------------------------------------------------------------
#define TX_BUSY_MASK  (1 << 0)
#define RX_READY_MASK (1 << 1)

//------------------------------------------------------------------
// (C) 基礎的記憶體映射存取函式
//------------------------------------------------------------------
static inline void reg_write(uint32_t addr, uint32_t val) {
    *(volatile uint32_t *)(addr) = val;
}

static inline uint32_t reg_read(uint32_t addr) {
    return *(volatile uint32_t *)(addr);
}

//------------------------------------------------------------------
// (D) 自製 strcmp
//     回傳 0 表示字串相同；若不相同，回傳正負值。
//------------------------------------------------------------------
int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}

//------------------------------------------------------------------
// (E) 簡易 kprintf (非完整 printf)
//     只支援印字串 %s、印整數 %d，無其他格式化功能。
//     所有輸出都透過 UART0 輸出，僅供測試/除錯。
//------------------------------------------------------------------
void uart_send_char(uint32_t base_addr, char c); // 先宣告，後面有實作

void kprintf(const char *fmt, ...) {
    // 簡易變參數實作 (非完整)
//------------------------------------------
// 1) 取得參數指標
//------------------------------------------
    // 'va_list'、'va_start'、'va_arg' 是標準C語法，但
    // 若你完全不用標準庫，可手動實作或改用其它方式。
    // 這裡僅示範概念，如果編譯器不允許，需改更低階作法。

    // 為方便示範，使用編譯器提供的內建變參數功能。
    // 如果 -nostdlib 下無法使用，可考慮直接做「只印字串」的版本。
    __builtin_va_list ap;
    __builtin_va_start(ap, fmt);

//------------------------------------------
// 2) 逐字解析 fmt
//------------------------------------------
    while (*fmt) {
        if (*fmt == '%') {
            // 遇到格式化符號
            fmt++;
            if (*fmt == 's') {
                // 印字串
                char *str = __builtin_va_arg(ap, char *);
                while (*str) {
                    uart_send_char(UART0_BASE, *str++);
                }
            } else if (*fmt == 'd') {
                // 印整數 (十進位)
                int d = __builtin_va_arg(ap, int);
                // 簡易轉成字串輸出
                char buf[16];
                int i = 0;
                if (d == 0) {
                    buf[i++] = '0';
                } else {
                    int neg = (d < 0);
                    if (neg) d = -d;
                    while (d > 0 && i < (int)sizeof(buf) - 1) {
                        buf[i++] = (char)('0' + (d % 10));
                        d /= 10;
                    }
                    if (neg && i < (int)sizeof(buf)) {
                        buf[i++] = '-';
                    }
                }
                // 反轉並輸出
                for (int j = i - 1; j >= 0; j--) {
                    uart_send_char(UART0_BASE, buf[j]);
                }
            } else {
                // 未支援的格式，直接印
                uart_send_char(UART0_BASE, '%');
                uart_send_char(UART0_BASE, *fmt);
            }
        } else {
            // 一般字元，直接輸出
            uart_send_char(UART0_BASE, *fmt);
        }
        fmt++;
    }
    __builtin_va_end(ap);
}

//------------------------------------------------------------------
// (F) UART 相關函式
//------------------------------------------------------------------
void uart_init(uint32_t base_addr) {
    // 例如：寫 0x1 啟用 UART (視你的實作而定)
    reg_write(base_addr + UART_REG_CTRL, 0x01);
}

// 單一字元發送 (blocking)
void uart_send_char(uint32_t base_addr, char c) {
    // 等待 TX 不忙
    while (reg_read(base_addr + UART_REG_STATUS) & TX_BUSY_MASK) {
        // busy-wait
    }
    // 寫入 TX 寄存器
    reg_write(base_addr + UART_REG_TX, (uint32_t)c);
}

// 單一字元接收 (blocking)
char uart_recv_char(uint32_t base_addr) {
    // 等待有資料可讀
    while (!(reg_read(base_addr + UART_REG_STATUS) & RX_READY_MASK)) {
        // busy-wait
    }
    // 讀出 RX 寄存器
    uint32_t data = reg_read(base_addr + UART_REG_RX);
    return (char)(data & 0xFF);
}

// 傳送字串 (null-terminated)
void uart_send_string(uint32_t base_addr, const char* str) {
    while (*str) {
        uart_send_char(base_addr, *str++);
    }
}

// 接收字串，直到遇到 '\n' 或到達 max_len-1
// 回傳實際收到的字元數 (不含 '\0')
int uart_recv_string(uint32_t base_addr, char* buffer, int max_len) {
    int i = 0;
    while (i < (max_len - 1)) {
        char c = uart_recv_char(base_addr);
        buffer[i++] = c;
        if (c == '\n') {
            break;
        }
    }
    buffer[i] = '\0';
    return i;
}

//------------------------------------------------------------------
// (G) main() - 測試兩個 UART Echo 的流程
//------------------------------------------------------------------
int main(void) {
    // 初始化 UART0 與 UART1
    uart_init(UART0_BASE);
    uart_init(UART1_BASE);


    // 測試用緩衝區
    char rx_buffer0[64];
    char rx_buffer1[64];

    // 要測試的訊息
    const char *msg0 = "Hello from UART0!\n";
    const char *msg1 = "Hello from UART1!\n";

    // 測試迴圈次數
    int num_tests = 3;

    for (int t = 0; t < num_tests; t++) {
        printf("=== Test iteration %d ===\n", t + 1);

        // [1] UART0 傳送 msg0
        uart_send_string(UART0_BASE, msg0);
        printf("Sent via UART0: %s", msg0);

        // [2] UART0 讀回 (假設透過硬體連線 loopback 或透過 UART1 迴送)
        int len0 = uart_recv_string(UART0_BASE, rx_buffer1, sizeof(rx_buffer1));
        printf("UART0 received: %s", rx_buffer1);

        // 驗證
        if (len0 > 0 && strcmp(msg0, rx_buffer1) == 0) {
            printf("UART0 echo test PASS.\n");
        } else {
            printf("UART0 echo test FAIL.\n");
        }

        // [3] UART1 傳送 msg1
        uart_send_string(UART1_BASE, msg1);
        printf("Sent via UART1: %s", msg1);

        // [4] UART1 讀回
        int len1 = uart_recv_string(UART1_BASE, rx_buffer0, sizeof(rx_buffer0));
        printf("UART1 received: %s", rx_buffer0);

        // 驗證
        if (len1 > 0 && strcmp(msg1, rx_buffer0) == 0) {
            printf("UART1 echo test PASS.\n");
        } else {
            printf("UART1 echo test FAIL.\n");
        }

        printf("=== Test iteration %d done ===\n\n", t + 1);
    }

    printf("All tests completed!\n");

    // 視需要結束模擬
    // 例如：*(volatile uint32_t*)(0xFFFFF000) = 0xDEAD_BEEF;  // 喚醒 testbench 偵測

    return 0;
}
