cmd_drivers/hwmon/jc42.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/jc42.ko drivers/hwmon/jc42.o drivers/hwmon/jc42.mod.o;  true
