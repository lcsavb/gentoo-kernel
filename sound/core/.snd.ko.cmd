cmd_sound/core/snd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o;  true
