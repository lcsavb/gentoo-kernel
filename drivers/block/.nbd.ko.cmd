cmd_drivers/block/nbd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/nbd.ko drivers/block/nbd.o drivers/block/nbd.mod.o;  true
