cmd_drivers/md/linear.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/linear.o drivers/md/md-linear.o
