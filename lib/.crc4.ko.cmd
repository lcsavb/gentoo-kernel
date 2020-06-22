cmd_lib/crc4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/crc4.ko lib/crc4.o lib/crc4.mod.o;  true
