.org 0x0
.global _start
_start:

    addi x1, x1, 10;

    addi x2 ,x2 ,2;

    add x10, x1, x2        # x10 = x1 + x2

    sub x11, x1, x2       

    slt x12, x2, x1        # x12 = (x1 < x2) ? 1 : 0

    sltu x13, x2, x1       # x13 = (x1 < x2) 

    and x14, x2, x2        # x14 = x1 & x2

    or x15, x1, x1         # x15 = x1 | x2

    xor x16, x1, x2        # x16 = x1 ^ x2

    sll x17, x1, x2        # x17 = x1 << x3[4:0]

    srl x18, x1, x2        # x18 = x1 >> x3[4:0]

    sra x19, x1, x2        # x19 = x1 >> x3[4:0]
