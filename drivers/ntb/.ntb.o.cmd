cmd_drivers/ntb/ntb.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/ntb/ntb.o drivers/ntb/core.o
