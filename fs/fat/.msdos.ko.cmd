cmd_fs/fat/msdos.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/fat/msdos.ko fs/fat/msdos.o fs/fat/msdos.mod.o;  true
