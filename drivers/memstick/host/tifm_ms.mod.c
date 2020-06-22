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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x9c3c164b, "tifm_unregister_driver" },
	{ 0xa33d216d, "tifm_register_driver" },
	{ 0x5597031d, "tifm_eject" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x712e52f7, "current_task" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4e7e87b9, "tifm_map_sg" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x76322ba9, "memstick_add_host" },
	{ 0x791cdc1f, "tifm_has_ms_pif" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5017f298, "memstick_alloc_host" },
	{ 0x3d97198e, "tifm_unmap_sg" },
	{ 0x6f3f6fea, "memstick_free_host" },
	{ 0xd926f038, "memstick_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf0e0846b, "memstick_next_req" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8c446112, "memstick_suspend_host" },
	{ 0x680ad139, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core,memstick");


MODULE_INFO(srcversion, "B3210FFB9D6C76EEC0E93E2");
