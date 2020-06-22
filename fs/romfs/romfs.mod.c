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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2f22f86f, "get_tree_bdev" },
	{ 0x604cec56, "page_symlink_inode_operations" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x892f30b7, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xe35470b2, "set_nlink" },
	{ 0xa07a37f0, "memchr" },
	{ 0x157a5167, "generic_ro_fops" },
	{ 0x6a287754, "unlock_page" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x528bce9c, "__brelse" },
	{ 0xc51140f3, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x406615c7, "logfc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0xe839a419, "sb_set_blocksize" },
	{ 0xdabd431d, "d_make_root" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xfff7156e, "init_special_inode" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x87af384, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F033E87C739F0ECD6739E53");
