cmd_drivers/hwmon/lm87.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm87.ko drivers/hwmon/lm87.o drivers/hwmon/lm87.mod.o;  true
