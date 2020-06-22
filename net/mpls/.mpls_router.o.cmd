cmd_net/mpls/mpls_router.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/mpls/mpls_router.o net/mpls/af_mpls.o
