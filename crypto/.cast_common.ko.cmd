cmd_crypto/cast_common.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o;  true
