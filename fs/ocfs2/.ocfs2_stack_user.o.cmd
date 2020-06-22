cmd_fs/ocfs2/ocfs2_stack_user.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/ocfs2/ocfs2_stack_user.o fs/ocfs2/stack_user.o
