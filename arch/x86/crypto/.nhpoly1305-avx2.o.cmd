cmd_arch/x86/crypto/nhpoly1305-avx2.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o arch/x86/crypto/nhpoly1305-avx2.o arch/x86/crypto/nh-avx2-x86_64.o arch/x86/crypto/nhpoly1305-avx2-glue.o
