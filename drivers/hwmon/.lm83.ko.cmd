cmd_drivers/hwmon/lm83.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm83.ko drivers/hwmon/lm83.o drivers/hwmon/lm83.mod.o;  true
