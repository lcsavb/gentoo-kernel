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
	{ 0x8f5a70f6, "led_trigger_unregister" },
	{ 0x45e47682, "led_trigger_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x85f117af, "sysfs_add_file_to_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x929fbac2, "sysfs_remove_file_from_group" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8a4c70c, "led_set_brightness" },
	{ 0x4eda8d65, "usb_for_each_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0BC3FA19429BCC50DFB290");
