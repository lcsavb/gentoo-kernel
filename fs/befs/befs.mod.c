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
	{ 0xf79bb046, "sb_min_blocksize" },
	{ 0xca3f0972, "unload_nls" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0xddce58c9, "generic_fh_to_parent" },
	{ 0xd517f601, "seq_puts" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xfce92703, "block_read_full_page" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x7d2eeaa3, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x604cec56, "page_symlink_inode_operations" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xd310388d, "make_kgid" },
	{ 0x712e52f7, "current_task" },
	{ 0x892f30b7, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x380db561, "d_obtain_alias" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xe35470b2, "set_nlink" },
	{ 0x3604f9e4, "kmem_cache_create_usercopy" },
	{ 0x157a5167, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xb36f3874, "simple_symlink_inode_operations" },
	{ 0x6a287754, "unlock_page" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x528bce9c, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xc51140f3, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x3f0d847a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x881e2cdf, "load_nls_default" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0xe839a419, "sb_set_blocksize" },
	{ 0xdabd431d, "d_make_root" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x7da820f0, "generic_fh_to_dentry" },
	{ 0xeb2820e4, "generic_block_bmap" },
	{ 0x87af384, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3A0F600283F6052BDD500A4");
