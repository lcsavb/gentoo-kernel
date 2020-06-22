cmd_drivers/hwmon/lm75.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm75.ko drivers/hwmon/lm75.o drivers/hwmon/lm75.mod.o;  true
