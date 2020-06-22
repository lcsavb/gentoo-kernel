cmd_lib/math/cordic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/math/cordic.ko lib/math/cordic.o lib/math/cordic.mod.o;  true
