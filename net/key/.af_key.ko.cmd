cmd_net/key/af_key.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o;  true
