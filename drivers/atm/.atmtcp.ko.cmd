cmd_drivers/atm/atmtcp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/atmtcp.ko drivers/atm/atmtcp.o drivers/atm/atmtcp.mod.o;  true
