cmd_drivers/atm/suni.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/suni.ko drivers/atm/suni.o drivers/atm/suni.mod.o;  true
