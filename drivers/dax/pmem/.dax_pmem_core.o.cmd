cmd_drivers/dax/pmem/dax_pmem_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dax/pmem/dax_pmem_core.o drivers/dax/pmem/core.o
