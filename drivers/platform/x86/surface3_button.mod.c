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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x74a28b80, "platform_device_add_data" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0x1677e7f5, "desc_to_gpio" },
	{ 0xbfd92640, "gpiod_get_index" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdcdf8c4b, "gpiod_count" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:MSHW0028:*");

MODULE_INFO(srcversion, "3D355A7E3EB48C366961A03");
