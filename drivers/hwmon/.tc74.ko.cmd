cmd_drivers/hwmon/tc74.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/tc74.ko drivers/hwmon/tc74.o drivers/hwmon/tc74.mod.o;  true
