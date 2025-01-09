TOP = test_top
GTKWAVE = gtkwave

V_SRC = ./rtl/soc/test_top.v
V_SRC += ./rtl/core/core_top.v
V_SRC += $(wildcard ./rtl/core/if/*.v)
V_SRC += $(wildcard ./rtl/core/id/*.v)
V_SRC += $(wildcard ./rtl/core/exe/*.v)
V_SRC += $(wildcard ./rtl/core/mem/*.v)
V_SRC += $(wildcard ./rtl/core/wb/*.v)
V_SRC += $(wildcard ./rtl/core/ctrl/*.v)
V_SRC += $(wildcard ./rtl/device/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./rtl/soc/${TOP}.v
INC = -Irtl/core/include

# [新增] 原本的 PROG = test (表示 default 要編譯 test.S)
#        這裡保留，也可以改成 PROG_TEST = test 之類。
PROG = test
PROG_S = $(wildcard ./test_src/*.S)

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator --cc --trace -Wall --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}.exe : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

#-----------------------------------------------------
# [新增] 定義 A_program, B_program 的變數
#       用來做獨立編譯 + 獨立執行
#-----------------------------------------------------
PROG_A = A_program
PROG_B = B_program

#-----------------------------------------------------
# [原本 rule] : test_src/${PROG}.bin
#   表示預設目標會編譯 test_src/*.S -> test.bin
#-----------------------------------------------------
test_src/${PROG}.bin: ${PROG_S}
	$(MAKE) -C test_src

#-----------------------------------------------------
# [新增] 針對 A_program 的 bin
#   這會呼叫 test_src 裏面的 Makefile
#   傳入 PROG=A_program, 以編譯 A_program.S -> A_program.bin
#-----------------------------------------------------
test_src/${PROG_A}.bin: 
	$(MAKE) -C test_srcA PROG=${PROG_A}

#-----------------------------------------------------
# [新增] 針對 B_program 的 bin
#-----------------------------------------------------
test_src/${PROG_B}.bin: 
	$(MAKE) -C test_srcB PROG=${PROG_B}

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

#-----------------------------------------------------
# [原本 run] : 執行 test.bin
#-----------------------------------------------------
.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} test_src/${PROG}.bin

#-----------------------------------------------------
# [新增] runA : 編譯 A_program.bin, 再載入到 V${TOP}
#-----------------------------------------------------
.PHONY : runA
runA: test_src/${PROG_A}.bin obj_dir/V${TOP}.exe
	obj_dir/V${TOP} test_srcA/${PROG_A}.bin

#-----------------------------------------------------
# [新增] runB : 編譯 B_program.bin, 再載入到 V${TOP}
#-----------------------------------------------------
.PHONY : runB
runB: test_src/${PROG_B}.bin obj_dir/V${TOP}.exe
	obj_dir/V${TOP} test_srcB/${PROG_B}.bin

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin
