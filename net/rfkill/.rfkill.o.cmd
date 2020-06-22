cmd_net/rfkill/rfkill.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/rfkill/rfkill.o net/rfkill/core.o net/rfkill/input.o
