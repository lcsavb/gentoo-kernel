cmd_drivers/block/null_blk.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/block/null_blk.o drivers/block/null_blk_main.o drivers/block/null_blk_zoned.o
