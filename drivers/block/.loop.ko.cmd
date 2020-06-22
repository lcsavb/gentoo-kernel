cmd_drivers/block/loop.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/loop.ko drivers/block/loop.o drivers/block/loop.mod.o;  true
