cmd_drivers/hwmon/lm93.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/lm93.ko drivers/hwmon/lm93.o drivers/hwmon/lm93.mod.o;  true
