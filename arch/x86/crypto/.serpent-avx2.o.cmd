cmd_arch/x86/crypto/serpent-avx2.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o arch/x86/crypto/serpent-avx2.o arch/x86/crypto/serpent-avx2-asm_64.o arch/x86/crypto/serpent_avx2_glue.o
