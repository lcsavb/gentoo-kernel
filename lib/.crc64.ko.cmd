cmd_lib/crc64.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/crc64.ko lib/crc64.o lib/crc64.mod.o;  true
