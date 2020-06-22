cmd_fs/nls/nls_koi8-ru.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_koi8-ru.ko fs/nls/nls_koi8-ru.o fs/nls/nls_koi8-ru.mod.o;  true
