cmd_net/kcm/kcm.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/kcm/kcm.o net/kcm/kcmsock.o net/kcm/kcmproc.o
