cmd_drivers/block/rbd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/rbd.ko drivers/block/rbd.o drivers/block/rbd.mod.o;  true
