cmd_drivers/misc/mei/mei-me.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/misc/mei/mei-me.o drivers/misc/mei/pci-me.o drivers/misc/mei/hw-me.o
