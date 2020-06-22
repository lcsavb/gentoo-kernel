cmd_net/nfc/nci/nci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/nfc/nci/nci.ko net/nfc/nci/nci.o net/nfc/nci/nci.mod.o;  true
