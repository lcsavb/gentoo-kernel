cmd_drivers/media/rc/rc-core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/media/rc/rc-core.o drivers/media/rc/rc-main.o drivers/media/rc/rc-ir-raw.o drivers/media/rc/lirc_dev.o
