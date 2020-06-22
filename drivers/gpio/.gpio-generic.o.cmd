cmd_drivers/gpio/gpio-generic.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gpio/gpio-generic.o drivers/gpio/gpio-mmio.o
