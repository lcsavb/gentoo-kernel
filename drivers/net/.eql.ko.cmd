cmd_drivers/net/eql.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/eql.ko drivers/net/eql.o drivers/net/eql.mod.o;  true
