cmd_crypto/crypto_user.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o crypto/crypto_user.o crypto/crypto_user_base.o crypto/crypto_user_stat.o
