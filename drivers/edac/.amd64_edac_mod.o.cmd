cmd_drivers/edac/amd64_edac_mod.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/edac/amd64_edac_mod.o drivers/edac/amd64_edac.o drivers/edac/amd64_edac_inj.o
