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
	{ 0xe9982a13, "sst_context_init" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0xcb4fd30a, "sst_context_cleanup" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xce51c7fc, "sst_alloc_drv_context" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xf02a87f8, "intel_sst_pm" },
	{ 0x7337ae49, "sst_configure_runtime_pm" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x8a3782a9, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b641f39, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-intel-sst-core,snd-soc-acpi,snd-soc-acpi-intel-match");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "9C6AE97B9603755C9410ABD");
