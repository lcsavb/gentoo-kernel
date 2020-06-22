cmd_drivers/mtd/nand/nandcore.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mtd/nand/nandcore.o drivers/mtd/nand/core.o drivers/mtd/nand/bbt.o
