cmd_fs/nls/nls_koi8-u.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_koi8-u.ko fs/nls/nls_koi8-u.o fs/nls/nls_koi8-u.mod.o;  true
