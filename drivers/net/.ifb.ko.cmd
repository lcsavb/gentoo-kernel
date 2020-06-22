cmd_drivers/net/ifb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ifb.ko drivers/net/ifb.o drivers/net/ifb.mod.o;  true
