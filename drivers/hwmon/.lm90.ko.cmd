cmd_drivers/hwmon/lm90.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm90.ko drivers/hwmon/lm90.o drivers/hwmon/lm90.mod.o;  true
