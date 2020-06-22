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
	{ 0x70a48bc, "dm_unregister_target" },
	{ 0x541dfd75, "dm_register_target" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x181e27b, "bio_associate_blkg" },
	{ 0x51305c7e, "dm_per_bio_data" },
	{ 0xc5850110, "printk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x425be464, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x6447e654, "dm_put_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xe0440f0f, "dm_remap_zone_report" },
	{ 0xa36c3a18, "blkdev_report_zones" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "1554017CC611C168E574228");
