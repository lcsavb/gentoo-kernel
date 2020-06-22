cmd_drivers/char/tlclk.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/char/tlclk.ko drivers/char/tlclk.o drivers/char/tlclk.mod.o;  true
