cmd_fs/ocfs2/ocfs2_stackglue.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/ocfs2/ocfs2_stackglue.o fs/ocfs2/stackglue.o
