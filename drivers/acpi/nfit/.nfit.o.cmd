cmd_drivers/acpi/nfit/nfit.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/acpi/nfit/nfit.o drivers/acpi/nfit/core.o drivers/acpi/nfit/intel.o drivers/acpi/nfit/mce.o
