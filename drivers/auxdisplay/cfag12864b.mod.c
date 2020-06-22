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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x14102f23, "ks0108_displaystate" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbf4774db, "ks0108_writecontrol" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4f506333, "ks0108_startline" },
	{ 0xedde6df2, "ks0108_page" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xfee8ef7b, "ks0108_address" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x48a70518, "ks0108_writedata" },
	{ 0x6edae968, "ks0108_isinited" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ks0108");


MODULE_INFO(srcversion, "2F5B030B823FF9F55B6CA02");
