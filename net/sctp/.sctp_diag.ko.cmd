cmd_net/sctp/sctp_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sctp/sctp_diag.ko net/sctp/sctp_diag.o net/sctp/sctp_diag.mod.o;  true
