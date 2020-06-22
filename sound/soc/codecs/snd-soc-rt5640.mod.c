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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9cf22694, "snd_soc_dapm_get_enum_double" },
	{ 0xb3fc5440, "regmap_register_patch" },
	{ 0xe2ba3ef4, "i2c_del_driver" },
	{ 0xa1ff7a89, "snd_soc_dapm_get_volsw" },
	{ 0xbbf830a3, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x70cdec7d, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x3ce4592c, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xba47929c, "snd_soc_component_update_bits" },
	{ 0x7b95f686, "snd_soc_put_volsw" },
	{ 0xd1c3ff95, "regmap_read" },
	{ 0xa2e66d6e, "snd_soc_get_volsw" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xa8eede90, "snd_soc_info_enum_double" },
	{ 0xa99c0f86, "snd_soc_dapm_add_routes" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x98b7a0be, "snd_soc_add_component_controls" },
	{ 0x1db00eaf, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x5e835bef, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde144067, "snd_soc_dapm_put_volsw" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x24306fc3, "devm_gpio_request_one" },
	{ 0xfedbd12f, "snd_soc_info_volsw" },
	{ 0xb7899e03, "i2c_register_driver" },
	{ 0xe16dbcde, "devm_add_action" },
	{ 0x89151a22, "snd_soc_get_enum_double" },
	{ 0xc8c5316a, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa30dcdd, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x11e443df, "devm_snd_soc_register_component" },
	{ 0x958bb5c0, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c141a1, "devm_clk_get" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0x113aeaf8, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x50645846, "regcache_mark_dirty" },
	{ 0x2e069401, "snd_soc_put_enum_double" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf004958a, "snd_soc_dapm_sync_unlocked" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x5135a340, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe36cf4f4, "snd_soc_jack_report" },
	{ 0x1b9c389, "snd_soc_component_read32" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0xb9c3dfb3, "devm_request_threaded_irq" },
	{ 0x735678de, "regmap_write" },
	{ 0x1e2e9a91, "regcache_sync" },
	{ 0x6617ba12, "regcache_cache_only" },
	{ 0x5d47fd60, "device_property_present" },
	{ 0x5fe1515, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c");

MODULE_ALIAS("i2c:rt5640");
MODULE_ALIAS("i2c:rt5639");
MODULE_ALIAS("i2c:rt5642");
MODULE_ALIAS("acpi*:INT33CA:*");
MODULE_ALIAS("acpi*:10EC3276:*");
MODULE_ALIAS("acpi*:10EC5640:*");
MODULE_ALIAS("acpi*:10EC5642:*");
MODULE_ALIAS("acpi*:INTCCFFD:*");

MODULE_INFO(srcversion, "310E332502F511B42125ECD");
