.org 0x0
.global _start
_start:
    ori x1, x0, 10

    addi x2, x0, 200

    slti x3, x0, -2 

    sltiu x4, x0, -2

    andi x5, x1, 7

    slli x6, x1, 2

    srli x7, x2, 2

    srai x8, x2, 3  

    xori x9, x2, 10
    
    nop



