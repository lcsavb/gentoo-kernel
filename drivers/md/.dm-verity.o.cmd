cmd_drivers/md/dm-verity.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/dm-verity.o drivers/md/dm-verity-fec.o drivers/md/dm-verity-target.o
