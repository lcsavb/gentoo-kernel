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
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb254da97, "mtd_device_unregister" },
	{ 0x74fc5e04, "__lock_page" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9c504f2f, "balance_dirty_pages_ratelimited" },
	{ 0x6a287754, "unlock_page" },
	{ 0x4023ac81, "set_page_dirty" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4dc16fce, "mtd_device_parse_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x182a0dc7, "blkdev_get_by_path" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x754d539c, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9f984513, "strrchr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0x6a9c4c5c, "invalidate_mapping_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x5066b9e, "sync_blockdev" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1bc30bf1, "read_cache_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "F0B51A54D1D7B693CFC72AB");
