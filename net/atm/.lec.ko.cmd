cmd_net/atm/lec.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/atm/lec.ko net/atm/lec.o net/atm/lec.mod.o;  true
