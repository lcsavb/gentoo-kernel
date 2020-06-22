cmd_sound/i2c/snd-i2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/i2c/snd-i2c.ko sound/i2c/snd-i2c.o sound/i2c/snd-i2c.mod.o;  true
