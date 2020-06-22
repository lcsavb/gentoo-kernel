cmd_drivers/tty/nozomi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/nozomi.ko drivers/tty/nozomi.o drivers/tty/nozomi.mod.o;  true
