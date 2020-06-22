cmd_drivers/net/mdio.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/mdio.ko drivers/net/mdio.o drivers/net/mdio.mod.o;  true
