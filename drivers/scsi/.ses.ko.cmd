cmd_drivers/scsi/ses.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ses.ko drivers/scsi/ses.o drivers/scsi/ses.mod.o;  true
