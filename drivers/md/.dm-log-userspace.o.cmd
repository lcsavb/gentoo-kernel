cmd_drivers/md/dm-log-userspace.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/dm-log-userspace.o drivers/md/dm-log-userspace-base.o drivers/md/dm-log-userspace-transfer.o
