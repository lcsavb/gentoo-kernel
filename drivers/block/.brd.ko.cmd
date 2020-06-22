cmd_drivers/block/brd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/brd.ko drivers/block/brd.o drivers/block/brd.mod.o;  true
