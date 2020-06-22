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
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
};

MODULE_INFO(depends, "i2c-core,snd-soc-core,snd-pcm,regmap-i2c");


MODULE_INFO(srcversion, "440C3FFD15C4BFB8A851156");
