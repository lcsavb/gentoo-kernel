cmd_drivers/scsi/mvumi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/mvumi.ko drivers/scsi/mvumi.o drivers/scsi/mvumi.mod.o;  true
