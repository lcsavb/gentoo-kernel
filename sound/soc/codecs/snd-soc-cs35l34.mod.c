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
	{ 0xff8d5a6a, "snd_soc_get_volsw_sx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x1b3fd53e, "snd_soc_info_volsw_sx" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x8b23a6f4, "snd_soc_put_volsw_sx" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core,i2c-core,snd-pcm,regmap-i2c");

MODULE_ALIAS("of:N*T*Ccirrus,cs35l34");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l34C*");
MODULE_ALIAS("i2c:cs35l34");

MODULE_INFO(srcversion, "D8626E28E9ADC9F26B11543");
