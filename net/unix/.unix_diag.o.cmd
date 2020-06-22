cmd_net/unix/unix_diag.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/unix/unix_diag.o net/unix/diag.o
