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
	{ 0x53022356, "dp_altmode_probe" },
	{ 0x2da62f91, "typec_altmode_unregister_driver" },
	{ 0xd0d2854f, "dp_altmode_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb517810a, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec_displayport,typec");

MODULE_ALIAS("typec:id0955m*");

MODULE_INFO(srcversion, "D220EB7B35E281872FDF894");
