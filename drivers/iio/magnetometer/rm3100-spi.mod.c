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
	{ 0xa1424e0, "rm3100_volatile_table" },
	{ 0xaa911f08, "rm3100_readable_table" },
	{ 0xcc7209be, "rm3100_writable_table" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xcaf04c81, "rm3100_common_probe" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xcebe7641, "spi_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rm3100-core,regmap-spi");

MODULE_ALIAS("of:N*T*Cpni,rm3100");
MODULE_ALIAS("of:N*T*Cpni,rm3100C*");

MODULE_INFO(srcversion, "91C017143994DABB6A57711");
