cmd_drivers/block/sx8.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/sx8.ko drivers/block/sx8.o drivers/block/sx8.mod.o;  true
