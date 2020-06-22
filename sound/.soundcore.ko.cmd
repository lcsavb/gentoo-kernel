cmd_sound/soundcore.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/soundcore.ko sound/soundcore.o sound/soundcore.mod.o;  true
