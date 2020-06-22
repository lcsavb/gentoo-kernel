cmd_drivers/block/umem.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/umem.ko drivers/block/umem.o drivers/block/umem.mod.o;  true
