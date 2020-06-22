cmd_crypto/crypto_user.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o;  true
