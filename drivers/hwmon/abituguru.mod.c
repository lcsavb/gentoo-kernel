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
	{ 0xece85da4, "param_array_ops" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x22ebd899, "platform_device_add_resources" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xc5850110, "printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x712e52f7, "current_task" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0232A21F450491F5AED5E9E");
