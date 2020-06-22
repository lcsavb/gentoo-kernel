cmd_drivers/mfd/axp20x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/axp20x.ko drivers/mfd/axp20x.o drivers/mfd/axp20x.mod.o;  true
