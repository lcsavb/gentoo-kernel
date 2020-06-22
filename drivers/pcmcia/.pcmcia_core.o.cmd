cmd_drivers/pcmcia/pcmcia_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/pcmcia/pcmcia_core.o drivers/pcmcia/cs.o drivers/pcmcia/socket_sysfs.o drivers/pcmcia/cardbus.o
