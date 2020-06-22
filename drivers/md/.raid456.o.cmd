cmd_drivers/md/raid456.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/raid456.o drivers/md/raid5.o drivers/md/raid5-cache.o drivers/md/raid5-ppl.o
