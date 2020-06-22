cmd_fs/nls/nls_cp869.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_cp869.ko fs/nls/nls_cp869.o fs/nls/nls_cp869.mod.o;  true
