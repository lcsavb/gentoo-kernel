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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2f22f86f, "get_tree_bdev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x604cec56, "page_symlink_inode_operations" },
	{ 0x70facfe, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd310388d, "make_kgid" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x157a5167, "generic_ro_fops" },
	{ 0xaea9b3da, "wait_on_page_bit" },
	{ 0x6a287754, "unlock_page" },
	{ 0xea4ef64c, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a55f270, "unlock_new_inode" },
	{ 0xd6e0d4d5, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x78f88d93, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x406615c7, "logfc" },
	{ 0x1bc30bf1, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x4129a391, "d_splice_alias" },
	{ 0x8d72717b, "sync_filesystem" },
	{ 0xdabd431d, "d_make_root" },
	{ 0xf8eecd11, "unregister_filesystem" },
	{ 0xfff7156e, "init_special_inode" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x87af384, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B70DDCA38FD0722D56ABA8B");
