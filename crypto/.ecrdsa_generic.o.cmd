cmd_crypto/ecrdsa_generic.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o crypto/ecrdsa_generic.o crypto/ecrdsa.o crypto/ecrdsa_params.asn1.o crypto/ecrdsa_pub_key.asn1.o
