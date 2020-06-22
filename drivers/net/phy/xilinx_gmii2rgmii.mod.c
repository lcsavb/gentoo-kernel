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
	{ 0x5754634f, "mdio_driver_unregister" },
	{ 0x2bf10d87, "mdio_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Cxlnx,gmii-to-rgmii-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,gmii-to-rgmii-1.0C*");

MODULE_INFO(srcversion, "E5887AA654DDCA47D57CC7B");
