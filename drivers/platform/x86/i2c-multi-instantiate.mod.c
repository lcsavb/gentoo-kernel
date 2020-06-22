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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x9fbe20e, "acpi_dev_gpio_irq_get" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x754d539c, "strlen" },
	{ 0xf8f0c157, "i2c_acpi_new_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x16dbec87, "acpi_dev_get_resources" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:BSG1160:*");
MODULE_ALIAS("acpi*:BSG2150:*");
MODULE_ALIAS("acpi*:INT3515:*");

MODULE_INFO(srcversion, "AB5962EE3066EB3ABAA8C78");
