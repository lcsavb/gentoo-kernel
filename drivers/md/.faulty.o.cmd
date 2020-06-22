cmd_drivers/md/faulty.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/faulty.o drivers/md/md-faulty.o
