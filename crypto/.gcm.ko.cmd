cmd_crypto/gcm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o;  true
