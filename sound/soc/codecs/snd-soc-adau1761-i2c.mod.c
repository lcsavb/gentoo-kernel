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
	{ 0x99f9dd68, "adau1761_regmap_config" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xf118350c, "adau17x1_remove" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f77562f, "adau1761_probe" },
};

MODULE_INFO(depends, "snd-soc-adau1761,i2c-core,snd-soc-adau17x1,regmap-i2c");

MODULE_ALIAS("i2c:adau1361");
MODULE_ALIAS("i2c:adau1461");
MODULE_ALIAS("i2c:adau1761");
MODULE_ALIAS("i2c:adau1961");

MODULE_INFO(srcversion, "9EAA6B1DB9614265B345D3C");
