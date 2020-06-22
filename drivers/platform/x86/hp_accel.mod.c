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
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xf7d38860, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xda472d87, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xdff396a7, "serio_interrupt" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x206a8607, "lis3lv02d_remove_fs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x903609fb, "lis3lv02d_joystick_disable" },
	{ 0x30b2832b, "i8042_remove_filter" },
	{ 0xd7d4d2ca, "lis3lv02d_poweroff" },
	{ 0xf5ded7a2, "lis3lv02d_poweron" },
	{ 0x82b81def, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "8ABE96A4833FFBD5EA2A2BD");
