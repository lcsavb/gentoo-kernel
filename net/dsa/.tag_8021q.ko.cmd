cmd_net/dsa/tag_8021q.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_8021q.ko net/dsa/tag_8021q.o net/dsa/tag_8021q.mod.o;  true
