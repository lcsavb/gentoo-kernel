cmd_drivers/acpi/sbs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/acpi/sbs.ko drivers/acpi/sbs.o drivers/acpi/sbs.mod.o;  true
