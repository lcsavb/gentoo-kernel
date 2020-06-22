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
	{ 0x99f9dd68, "adau1761_regmap_config" },
	{ 0xf118350c, "adau17x1_remove" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f77562f, "adau1761_probe" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-adau1761,snd-soc-adau17x1");

MODULE_ALIAS("spi:adau1361");
MODULE_ALIAS("spi:adau1461");
MODULE_ALIAS("spi:adau1761");
MODULE_ALIAS("spi:adau1961");

MODULE_INFO(srcversion, "EFAC17404E4B2E05C0C4A26");
