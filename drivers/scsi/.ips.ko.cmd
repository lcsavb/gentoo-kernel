cmd_drivers/scsi/ips.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ips.ko drivers/scsi/ips.o drivers/scsi/ips.mod.o;  true
