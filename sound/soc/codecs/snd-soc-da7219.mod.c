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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7355e4d0, "regmap_raw_write" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x5aa62c1e, "regmap_register_patch" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x6550165d, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc8eba256, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x8b5f6062, "snd_soc_put_volsw_range" },
	{ 0x17475388, "_dev_warn" },
	{ 0x65a5b8a4, "devm_clk_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x62ab1b1e, "snd_soc_info_volsw_range" },
	{ 0x9744b5e3, "device_property_read_string_array" },
	{ 0x5c84b9d9, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x933efdaa, "device_property_read_string" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xf5b5d5b2, "snd_soc_get_volsw_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0x100e7ce, "snd_soc_dapm_sync" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x6fbbd82c, "snd_soc_dapm_force_enable_pin" },
	{ 0x13ba4b94, "snd_soc_dapm_disable_pin" },
	{ 0x6d89b358, "regcache_sync_region" },
	{ 0xdc029e18, "regmap_raw_read" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219C*");

MODULE_INFO(srcversion, "6DA7CFCF5D9593DAAF54ABE");
