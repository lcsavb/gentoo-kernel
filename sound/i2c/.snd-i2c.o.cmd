cmd_sound/i2c/snd-i2c.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/i2c/snd-i2c.o sound/i2c/i2c.o
