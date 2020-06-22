cmd_drivers/char/nvram.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/char/nvram.ko drivers/char/nvram.o drivers/char/nvram.mod.o;  true
