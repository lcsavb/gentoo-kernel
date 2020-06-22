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
	{ 0x4e7e87b9, "tifm_map_sg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1a281859, "pv_ops" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0x3d97198e, "tifm_unmap_sg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5597031d, "tifm_eject" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x712e52f7, "current_task" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core,mmc_core");


MODULE_INFO(srcversion, "FEED3A84F25C97634838DEE");
