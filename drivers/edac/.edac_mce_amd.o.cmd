cmd_drivers/edac/edac_mce_amd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/edac/edac_mce_amd.o drivers/edac/mce_amd.o
