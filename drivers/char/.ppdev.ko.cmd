cmd_drivers/char/ppdev.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/char/ppdev.ko drivers/char/ppdev.o drivers/char/ppdev.mod.o;  true
