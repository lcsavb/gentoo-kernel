cmd_crypto/tgr192.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/tgr192.ko crypto/tgr192.o crypto/tgr192.mod.o;  true
