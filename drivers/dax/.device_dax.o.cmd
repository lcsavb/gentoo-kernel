cmd_drivers/dax/device_dax.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dax/device_dax.o drivers/dax/device.o
