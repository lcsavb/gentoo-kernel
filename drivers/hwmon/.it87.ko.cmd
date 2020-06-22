cmd_drivers/hwmon/it87.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/it87.ko drivers/hwmon/it87.o drivers/hwmon/it87.mod.o;  true
