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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7355e4d0, "regmap_raw_write" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x5c84b9d9, "snd_soc_dapm_force_bias_level" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x100e7ce, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x6fbbd82c, "snd_soc_dapm_force_enable_pin" },
	{ 0x13ba4b94, "snd_soc_dapm_disable_pin" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0xdc029e18, "regmap_raw_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0xaf34c6f1, "snd_soc_bytes_info_ext" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:10508825:*");
MODULE_ALIAS("i2c:nau8825");

MODULE_INFO(srcversion, "A9E75AA742E77669D5335F8");
