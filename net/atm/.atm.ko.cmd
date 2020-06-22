cmd_net/atm/atm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o;  true
