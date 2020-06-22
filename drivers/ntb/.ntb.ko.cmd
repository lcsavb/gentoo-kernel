cmd_drivers/ntb/ntb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ntb/ntb.ko drivers/ntb/ntb.o drivers/ntb/ntb.mod.o;  true
