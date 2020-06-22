cmd_drivers/hwmon/lm63.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm63.ko drivers/hwmon/lm63.o drivers/hwmon/lm63.mod.o;  true
