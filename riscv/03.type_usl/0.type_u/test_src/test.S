.org 0x0
.global _start
_start:
    ori x1, x0, 10

    addi x2, x0, 200

    


    add x10, x1, x2        # x10 = x1 + x2

    sub x11, x2, x1        # x11 = x2 - x1

    slt x12, x1, x2        # x12 = (x1 < x2) ? 1 : 0

    sltu x13, x1, x2       # x13 = (x1 < x2) 

    and x14, x2, x2        # x14 = x1 & x2

    or x15, x1, x1         # x15 = x1 | x2

    xor x16, x1, x2        # x16 = x1 ^ x2

    sll x17, x1, x3        # x17 = x1 << x3[4:0]

    srl x18, x1, x3        # x18 = x1 >> x3[4:0]

    sra x19, x1, x3        # x19 = x1 >> x3[4:0]

ori x20, x0, 10
ori x21, x0, 10
ori x22, x0, 10
ori x23, x0, 10
ori x24, x0, 10

