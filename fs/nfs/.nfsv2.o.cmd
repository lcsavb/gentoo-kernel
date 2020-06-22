cmd_fs/nfs/nfsv2.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/nfs/nfsv2.o fs/nfs/nfs2super.o fs/nfs/proc.o fs/nfs/nfs2xdr.o
