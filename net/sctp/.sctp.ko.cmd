cmd_net/sctp/sctp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sctp/sctp.ko net/sctp/sctp.o net/sctp/sctp.mod.o;  true
