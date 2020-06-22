cmd_drivers/net/gtp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/gtp.ko drivers/net/gtp.o drivers/net/gtp.mod.o;  true
