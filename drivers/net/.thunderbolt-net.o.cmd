cmd_drivers/net/thunderbolt-net.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/thunderbolt-net.o drivers/net/thunderbolt.o
