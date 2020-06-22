cmd_drivers/tty/n_hdlc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/n_hdlc.ko drivers/tty/n_hdlc.o drivers/tty/n_hdlc.mod.o;  true
