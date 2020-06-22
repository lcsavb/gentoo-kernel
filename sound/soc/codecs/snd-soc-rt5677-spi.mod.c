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
	{ 0x3d38ff95, "module_layout" },
	{ 0x48f53964, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd020fb51, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x775e5e4c, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:RT5677AA:*");

MODULE_INFO(srcversion, "CFA413D037319247036B992");
