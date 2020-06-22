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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x22ebd899, "platform_device_add_resources" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B948E72546E39D33AE27945");
