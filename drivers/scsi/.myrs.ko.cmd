cmd_drivers/scsi/myrs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/myrs.ko drivers/scsi/myrs.o drivers/scsi/myrs.mod.o;  true
