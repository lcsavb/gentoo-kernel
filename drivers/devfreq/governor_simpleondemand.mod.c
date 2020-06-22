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
	{ 0xc5850110, "printk" },
	{ 0x164cb77e, "devfreq_remove_governor" },
	{ 0xcfbe3837, "devfreq_add_governor" },
	{ 0x829afbef, "devfreq_monitor_start" },
	{ 0xaacea40c, "devfreq_monitor_suspend" },
	{ 0x6485a84, "devfreq_interval_update" },
	{ 0x96d7b325, "devfreq_monitor_stop" },
	{ 0x9b1f9546, "devfreq_monitor_resume" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B3F6F95B4BEAC5EA5A96DA");
