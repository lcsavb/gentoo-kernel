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
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xc8c50f68, "pcm3060_regmap" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x59d18773, "pcm3060_probe" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-pcm3060");

MODULE_ALIAS("spi:pcm3060");

MODULE_INFO(srcversion, "24FC077D764A575802F45DF");
