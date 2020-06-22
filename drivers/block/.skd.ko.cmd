cmd_drivers/block/skd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/skd.ko drivers/block/skd.o drivers/block/skd.mod.o;  true
