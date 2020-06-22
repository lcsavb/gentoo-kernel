cmd_lib/crc8.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o;  true
