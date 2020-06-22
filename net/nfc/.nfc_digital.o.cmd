cmd_net/nfc/nfc_digital.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/nfc/nfc_digital.o net/nfc/digital_core.o net/nfc/digital_technology.o net/nfc/digital_dep.o
