cmd_sound/isa/sb/snd-sb-common.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/isa/sb/snd-sb-common.o sound/isa/sb/sb_common.o sound/isa/sb/sb_mixer.o
