cmd_drivers/dca/dca.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dca/dca.o drivers/dca/dca-core.o drivers/dca/dca-sysfs.o
