cmd_drivers/scsi/myrb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/myrb.ko drivers/scsi/myrb.o drivers/scsi/myrb.mod.o;  true
