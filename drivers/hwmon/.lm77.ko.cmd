cmd_drivers/hwmon/lm77.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm77.ko drivers/hwmon/lm77.o drivers/hwmon/lm77.mod.o;  true
