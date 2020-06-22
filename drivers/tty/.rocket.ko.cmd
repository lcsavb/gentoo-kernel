cmd_drivers/tty/rocket.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/rocket.ko drivers/tty/rocket.o drivers/tty/rocket.mod.o;  true
