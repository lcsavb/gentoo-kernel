cmd_drivers/atm/he.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/he.ko drivers/atm/he.o drivers/atm/he.mod.o;  true
