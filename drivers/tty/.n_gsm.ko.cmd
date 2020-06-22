cmd_drivers/tty/n_gsm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/n_gsm.ko drivers/tty/n_gsm.o drivers/tty/n_gsm.mod.o;  true
