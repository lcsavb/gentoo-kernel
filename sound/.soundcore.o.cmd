cmd_sound/soundcore.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/soundcore.o sound/sound_core.o
