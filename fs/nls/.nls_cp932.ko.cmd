cmd_fs/nls/nls_cp932.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_cp932.ko fs/nls/nls_cp932.o fs/nls/nls_cp932.mod.o;  true
