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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x754d539c, "strlen" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B02");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B34");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B3E");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B09");

MODULE_INFO(srcversion, "1BA6BB242ADED06F5C6C948");
