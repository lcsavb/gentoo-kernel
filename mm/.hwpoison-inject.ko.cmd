cmd_mm/hwpoison-inject.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o mm/hwpoison-inject.ko mm/hwpoison-inject.o mm/hwpoison-inject.mod.o;  true
