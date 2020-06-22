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
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0x1677e7f5, "desc_to_gpio" },
	{ 0xbfd92640, "gpiod_get_index" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdcdf8c4b, "gpiod_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b93a023, "acpi_device_get_match_data" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C40:*");
MODULE_ALIAS("acpi*:ACPI0011:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "CF130AD740F60C660E67E33");
