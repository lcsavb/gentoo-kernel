cmd_net/dsa/dsa_core.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/dsa_core.ko net/dsa/dsa_core.o net/dsa/dsa_core.mod.o;  true
