cmd_drivers/scsi/ipr.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ipr.ko drivers/scsi/ipr.o drivers/scsi/ipr.mod.o;  true
