#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xf88bfc75, "iget_failed" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6749d46f, "drop_nlink" },
	{ 0x18721342, "mark_buffer_dirty_inode" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x66c98bf1, "__mark_inode_dirty" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xee52b597, "block_write_begin" },
	{ 0x217900f1, "pagecache_get_page" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x74fc5e04, "__lock_page" },
	{ 0xb64326e, "__lock_buffer" },
	{ 0x1568c13c, "inc_nlink" },
	{ 0xfce92703, "block_read_full_page" },
	{ 0x7d2eeaa3, "mount_bdev" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x4a76a59a, "__getblk_gfp" },
	{ 0xe96dfdde, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x216b208f, "truncate_setsize" },
	{ 0xd310388d, "make_kgid" },
	{ 0xbb62272b, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0x32d5f3e8, "from_kuid" },
	{ 0x712e52f7, "current_task" },
	{ 0x892f30b7, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x61bbcd92, "from_kgid" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xe35470b2, "set_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x82cde409, "setattr_copy" },
	{ 0xb6bb2b81, "page_symlink" },
	{ 0xd6913353, "sync_dirty_buffer" },
	{ 0xa0f021ea, "truncate_pagecache" },
	{ 0x6a287754, "unlock_page" },
	{ 0xc0e93a0e, "generic_file_read_iter" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x528bce9c, "__brelse" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc51140f3, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9859ba1d, "invalidate_inode_buffers" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xb0620560, "generic_file_mmap" },
	{ 0xa3dc989d, "block_write_full_page" },
	{ 0x3306323f, "block_write_end" },
	{ 0xb490365f, "truncate_inode_pages_final" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x726ac8ec, "generic_write_end" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0x3dbce13a, "inode_newsize_ok" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xcc024cc1, "d_tmpfile" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0xd41be403, "generic_file_write_iter" },
	{ 0x8a5e72aa, "iput" },
	{ 0x1bc30bf1, "read_cache_page" },
	{ 0xfa84a6a0, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4da92f5, "page_get_link" },
	{ 0xee22e17b, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x627bb501, "current_time" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0xe1a1a0f4, "block_truncate_page" },
	{ 0xe839a419, "sb_set_blocksize" },
	{ 0xb0844894, "__bforget" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92d11d3f, "__block_write_begin" },
	{ 0x749cbe67, "mark_buffer_dirty" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xe03bc011, "write_one_page" },
	{ 0xfff7156e, "init_special_inode" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x2b84f737, "new_inode" },
	{ 0x57b30bde, "generic_file_splice_read" },
	{ 0x8cd5b57f, "clear_inode" },
	{ 0xe7504ae4, "d_instantiate" },
	{ 0xe48af658, "__put_page" },
	{ 0xeb2820e4, "generic_block_bmap" },
	{ 0x87af384, "iget_locked" },
	{ 0x7ac8ebbf, "setattr_prepare" },
	{ 0x342b21fb, "generic_fillattr" },
	{ 0x915d4265, "inode_init_owner" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xdf929370, "fs_overflowgid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE3D0CAA0658ECAA98DD88C");
