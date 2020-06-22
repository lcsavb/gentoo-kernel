cmd_drivers/hwmon/lm80.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm80.ko drivers/hwmon/lm80.o drivers/hwmon/lm80.mod.o;  true
