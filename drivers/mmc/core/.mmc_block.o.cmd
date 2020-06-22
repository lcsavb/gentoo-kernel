cmd_drivers/mmc/core/mmc_block.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mmc/core/mmc_block.o drivers/mmc/core/block.o drivers/mmc/core/queue.o
