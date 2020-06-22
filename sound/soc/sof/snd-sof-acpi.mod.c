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
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xb268b2cb, "snd_sof_suspend" },
	{ 0xdee57318, "snd_sof_device_probe" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x65146092, "snd_sof_resume" },
	{ 0xf7ea45c4, "snd_sof_runtime_suspend" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0x374a9e63, "snd_sof_device_remove" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0x38bf1abf, "snd_sof_runtime_resume" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xaaff208e, "snd_sof_runtime_idle" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-sof,snd-soc-acpi");


MODULE_INFO(srcversion, "DA00605F2B809569FFC3CC7");
