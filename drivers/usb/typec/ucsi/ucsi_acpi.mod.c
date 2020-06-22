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
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x91d805c1, "ucsi_register_ppm" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0xcd3e5c7c, "acpi_release_memory" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc7891ef0, "ucsi_notify" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xc61460dd, "ucsi_unregister_ppm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec_ucsi");

MODULE_ALIAS("acpi*:PNP0CA0:*");

MODULE_INFO(srcversion, "EB12CC9AFD782C01E0769A4");
