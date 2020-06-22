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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xf88bfc75, "iget_failed" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf79bb046, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xca3f0972, "unload_nls" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3cea4168, "iget5_locked" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd517f601, "seq_puts" },
	{ 0x217900f1, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x463e745, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7d2eeaa3, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x604cec56, "page_symlink_inode_operations" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4a76a59a, "__getblk_gfp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xd310388d, "make_kgid" },
	{ 0xb148c919, "mpage_readpages" },
	{ 0x7b6f14cc, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x712e52f7, "current_task" },
	{ 0x892f30b7, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x380db561, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xe35470b2, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63c33c8, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x157a5167, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6a287754, "unlock_page" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x528bce9c, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xc51140f3, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x3f0d847a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8a5e72aa, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x881e2cdf, "load_nls_default" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0xe839a419, "sb_set_blocksize" },
	{ 0xdabd431d, "d_make_root" },
	{ 0xbc3e3e87, "ioctl_by_bdev" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xfff7156e, "init_special_inode" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe48af658, "__put_page" },
	{ 0xeb2820e4, "generic_block_bmap" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFE935A48F43241EC039673");
