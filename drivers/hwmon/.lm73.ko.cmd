cmd_drivers/hwmon/lm73.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm73.ko drivers/hwmon/lm73.o drivers/hwmon/lm73.mod.o;  true
