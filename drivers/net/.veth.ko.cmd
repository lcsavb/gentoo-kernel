cmd_drivers/net/veth.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/veth.ko drivers/net/veth.o drivers/net/veth.mod.o;  true
