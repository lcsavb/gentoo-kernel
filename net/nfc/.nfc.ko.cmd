cmd_net/nfc/nfc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o;  true
