cmd_net/atm/br2684.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/atm/br2684.ko net/atm/br2684.o net/atm/br2684.mod.o;  true
