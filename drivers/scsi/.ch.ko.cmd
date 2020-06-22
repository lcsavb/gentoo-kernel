cmd_drivers/scsi/ch.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ch.ko drivers/scsi/ch.o drivers/scsi/ch.mod.o;  true
