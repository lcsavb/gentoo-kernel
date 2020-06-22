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
	{ 0xcd59b746, "pwm_lpss_resume" },
	{ 0x90a44720, "pwm_lpss_suspend" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xa321247f, "pwm_lpss_probe" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xf85e7391, "pwm_lpss_remove" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pwm-lpss");

MODULE_ALIAS("acpi*:80860F09:*");
MODULE_ALIAS("acpi*:80862288:*");
MODULE_ALIAS("acpi*:80862289:*");
MODULE_ALIAS("acpi*:80865AC8:*");

MODULE_INFO(srcversion, "6A2BCFE3F7187E2AF592CB2");
