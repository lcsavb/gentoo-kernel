cmd_drivers/scsi/gdth.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/gdth.ko drivers/scsi/gdth.o drivers/scsi/gdth.mod.o;  true
