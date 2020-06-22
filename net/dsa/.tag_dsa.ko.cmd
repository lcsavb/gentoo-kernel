cmd_net/dsa/tag_dsa.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_dsa.ko net/dsa/tag_dsa.o net/dsa/tag_dsa.mod.o;  true
