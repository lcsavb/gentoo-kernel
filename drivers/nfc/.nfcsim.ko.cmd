cmd_drivers/nfc/nfcsim.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/nfc/nfcsim.ko drivers/nfc/nfcsim.o drivers/nfc/nfcsim.mod.o;  true
