cmd_sound/ac97_bus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o;  true
