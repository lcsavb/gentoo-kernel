cmd_drivers/hid/i2c-hid/i2c-hid.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/hid/i2c-hid/i2c-hid.o drivers/hid/i2c-hid/i2c-hid-core.o drivers/hid/i2c-hid/i2c-hid-dmi-quirks.o
