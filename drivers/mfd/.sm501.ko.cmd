cmd_drivers/mfd/sm501.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/sm501.ko drivers/mfd/sm501.o drivers/mfd/sm501.mod.o;  true
