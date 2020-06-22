cmd_drivers/dca/dca.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/dca/dca.ko drivers/dca/dca.o drivers/dca/dca.mod.o;  true
