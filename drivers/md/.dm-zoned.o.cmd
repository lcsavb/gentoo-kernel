cmd_drivers/md/dm-zoned.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/dm-zoned.o drivers/md/dm-zoned-target.o drivers/md/dm-zoned-metadata.o drivers/md/dm-zoned-reclaim.o
