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
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xc219f6a1, "gpiod_remove_lookup_table" },
	{ 0x5e0b3f66, "gpiod_add_lookup_table" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*PCEngines*:rn*APU2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*apu2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*PCEnginesapu2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*APU3*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*apu3*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*PCEnginesapu3*:");

MODULE_INFO(srcversion, "24F1D3F27FF377BCB2C8B89");
