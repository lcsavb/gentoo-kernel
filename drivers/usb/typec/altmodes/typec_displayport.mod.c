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
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdc0f3c8, "typec_altmode_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2da62f91, "typec_altmode_unregister_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x3f158834, "typec_altmode_exit" },
	{ 0x17475388, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x4ec6fbb2, "typec_altmode_vdm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42ecabc6, "typec_altmode_enter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe921e36, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b007ae8, "typec_altmode_get_partner" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb517810a, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec");

MODULE_ALIAS("typec:idFF01m01");

MODULE_INFO(srcversion, "D8CD29FD688BC2C3ACB666B");
