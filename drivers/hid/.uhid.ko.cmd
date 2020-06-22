cmd_drivers/hid/uhid.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/uhid.ko drivers/hid/uhid.o drivers/hid/uhid.mod.o;  true
