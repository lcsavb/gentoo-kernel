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
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xb9521ad4, "thermal_cooling_device_register" },
	{ 0x1affc119, "acpi_video_get_levels" },
	{ 0x91a14cb0, "backlight_device_get_by_type" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x90355f6f, "backlight_device_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0x926be065, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video,backlight");

MODULE_ALIAS("acpi*:INT3406:*");

MODULE_INFO(srcversion, "C40B94C1049D5F68A499386");
