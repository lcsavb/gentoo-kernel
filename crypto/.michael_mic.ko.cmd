cmd_crypto/michael_mic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o;  true
