cmd_net/dsa/tag_qca.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_qca.ko net/dsa/tag_qca.o net/dsa/tag_qca.mod.o;  true
