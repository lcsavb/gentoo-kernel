cmd_drivers/acpi/video.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/acpi/video.ko drivers/acpi/video.o drivers/acpi/video.mod.o;  true
