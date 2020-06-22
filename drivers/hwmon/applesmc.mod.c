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
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b09348e, "input_register_polled_device" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x36bf2262, "input_allocate_polled_device" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9a482f9, "msleep" },
	{ 0xad0cba41, "input_event" },
	{ 0x274a25f4, "sysfs_create_file_ns" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xb0aad46c, "input_free_polled_device" },
	{ 0x7b161289, "input_unregister_polled_device" },
	{ 0x1b069d36, "sysfs_remove_file_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("dmi*:pn*MacBookAir*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBookPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBook*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*Macmini*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*iMac*:rvn*Apple*:");

MODULE_INFO(srcversion, "71B8F765780E5200F17CCAC");
