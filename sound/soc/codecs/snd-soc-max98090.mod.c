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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9cf22694, "snd_soc_dapm_get_enum_double" },
	{ 0xe2ba3ef4, "i2c_del_driver" },
	{ 0xa1ff7a89, "snd_soc_dapm_get_volsw" },
	{ 0xbbf830a3, "regmap_update_bits_base" },
	{ 0xb9eb2f4d, "snd_pcm_hw_constraint_msbits" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3ce4592c, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xba47929c, "snd_soc_component_update_bits" },
	{ 0x7b95f686, "snd_soc_put_volsw" },
	{ 0xd1c3ff95, "regmap_read" },
	{ 0xa2e66d6e, "snd_soc_get_volsw" },
	{ 0xa8eede90, "snd_soc_info_enum_double" },
	{ 0xe0d782c2, "acpi_match_device" },
	{ 0xa99c0f86, "snd_soc_dapm_add_routes" },
	{ 0xfa9659ea, "snd_soc_put_volsw_range" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0x98b7a0be, "snd_soc_add_component_controls" },
	{ 0x8313d7f3, "snd_soc_info_volsw_range" },
	{ 0x6e2f7af5, "snd_soc_bytes_info" },
	{ 0xde144067, "snd_soc_dapm_put_volsw" },
	{ 0x5d85d7c9, "snd_soc_get_volsw_range" },
	{ 0xc624e30e, "_dev_err" },
	{ 0xfedbd12f, "snd_soc_info_volsw" },
	{ 0xb7899e03, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x72f697fa, "_dev_info" },
	{ 0x89151a22, "snd_soc_get_enum_double" },
	{ 0xc8c5316a, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa30dcdd, "__devm_regmap_init_i2c" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x754c821c, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x11e443df, "devm_snd_soc_register_component" },
	{ 0x958bb5c0, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c141a1, "devm_clk_get" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x50645846, "regcache_mark_dirty" },
	{ 0x2e069401, "snd_soc_put_enum_double" },
	{ 0xadfb34ad, "snd_soc_bytes_get" },
	{ 0xa5eae68c, "snd_soc_bytes_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe36cf4f4, "snd_soc_jack_report" },
	{ 0x1b9c389, "snd_soc_component_read32" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0xb9c3dfb3, "devm_request_threaded_irq" },
	{ 0x735678de, "regmap_write" },
	{ 0x1e2e9a91, "regcache_sync" },
	{ 0x5bbcbb11, "is_acpi_device_node" },
	{ 0x6617ba12, "regcache_cache_only" },
	{ 0x5fe1515, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:193C9890:*");
MODULE_ALIAS("i2c:max98090");
MODULE_ALIAS("i2c:max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98090");
MODULE_ALIAS("of:N*T*Cmaxim,max98090C*");
MODULE_ALIAS("of:N*T*Cmaxim,max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98091C*");

MODULE_INFO(srcversion, "C2EF0E2EDD1BAA417B018C8");
