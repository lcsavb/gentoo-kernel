cmd_fs/befs/befs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/befs/befs.ko fs/befs/befs.o fs/befs/befs.mod.o;  true
