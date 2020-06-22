cmd_fs/coda/coda.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/coda/coda.ko fs/coda/coda.o fs/coda/coda.mod.o;  true
