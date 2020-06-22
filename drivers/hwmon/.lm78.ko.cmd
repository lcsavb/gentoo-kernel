cmd_drivers/hwmon/lm78.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm78.ko drivers/hwmon/lm78.o drivers/hwmon/lm78.mod.o;  true
