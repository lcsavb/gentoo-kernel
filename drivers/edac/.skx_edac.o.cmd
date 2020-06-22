cmd_drivers/edac/skx_edac.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/edac/skx_edac.o drivers/edac/skx_common.o drivers/edac/skx_base.o
