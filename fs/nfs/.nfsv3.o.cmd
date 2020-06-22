cmd_fs/nfs/nfsv3.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/nfs/nfsv3.o fs/nfs/nfs3super.o fs/nfs/nfs3client.o fs/nfs/nfs3proc.o fs/nfs/nfs3xdr.o fs/nfs/nfs3acl.o
