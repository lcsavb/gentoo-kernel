cmd_lib/crc7.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o;  true
