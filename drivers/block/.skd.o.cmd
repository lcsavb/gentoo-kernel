cmd_drivers/block/skd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/block/skd.o drivers/block/skd_main.o
