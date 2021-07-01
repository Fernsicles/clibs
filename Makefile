memcpy.o: string/memcpy.c string.h
	riscv64-elf-gcc -march=rv32i -mabi=ilp32 -O3 -ffreestanding -nostdlib -c string/memcpy.c -o memcpy.o

memset.o: string/memset.c string.h
	riscv64-elf-gcc -march=rv32i -mabi=ilp32 -O3 -ffreestanding -nostdlib -c string/memset.c -o memset.o