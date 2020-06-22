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
	{ 0xf6767462, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9cf22694, "snd_soc_dapm_get_enum_double" },
	{ 0x83b3c0f, "irq_set_chip" },
	{ 0xb3fc5440, "regmap_register_patch" },
	{ 0xe2ba3ef4, "i2c_del_driver" },
	{ 0xa1ff7a89, "snd_soc_dapm_get_volsw" },
	{ 0xbbf830a3, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xd53976a0, "regcache_cache_bypass" },
	{ 0x563e033d, "irq_find_mapping" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf06e1560, "irq_create_mapping" },
	{ 0x7b95f686, "snd_soc_put_volsw" },
	{ 0xd1c3ff95, "regmap_read" },
	{ 0xa2e66d6e, "snd_soc_get_volsw" },
	{ 0xeeb235cc, "gpiochip_remove" },
	{ 0x91daeed5, "gpiochip_add_data_with_key" },
	{ 0xa8eede90, "snd_soc_info_enum_double" },
	{ 0xe0d782c2, "acpi_match_device" },
	{ 0xa99c0f86, "snd_soc_dapm_add_routes" },
	{ 0xee38d0b3, "__irq_domain_add" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5e835bef, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde144067, "snd_soc_dapm_put_volsw" },
	{ 0x97cf1399, "device_property_read_u8_array" },
	{ 0xc624e30e, "_dev_err" },
	{ 0xc8d8bafa, "gpiochip_get_data" },
	{ 0xfedbd12f, "snd_soc_info_volsw" },
	{ 0xb7899e03, "i2c_register_driver" },
	{ 0xc8c5316a, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa30dcdd, "__devm_regmap_init_i2c" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x11e443df, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x62f2f731, "devm_gpiod_get_optional" },
	{ 0x50645846, "regcache_mark_dirty" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x18e5cab5, "request_firmware" },
	{ 0x987b2558, "gpiod_set_value_cansleep" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0x311f1704, "rt5677_spi_write_firmware" },
	{ 0xb9c3dfb3, "devm_request_threaded_irq" },
	{ 0x735678de, "regmap_write" },
	{ 0x1e2e9a91, "regcache_sync" },
	{ 0x5bbcbb11, "is_acpi_device_node" },
	{ 0x6617ba12, "regcache_cache_only" },
	{ 0xf7205fad, "release_firmware" },
	{ 0x4415d80a, "irq_domain_xlate_twocell" },
	{ 0x5d47fd60, "device_property_present" },
	{ 0x5fe1515, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c,snd-soc-rt5677-spi");

MODULE_ALIAS("of:N*T*Crealtek,rt5677");
MODULE_ALIAS("of:N*T*Crealtek,rt5677C*");
MODULE_ALIAS("acpi*:RT5677CE:*");

MODULE_INFO(srcversion, "54EE48CC6DF13CDEDE788D4");
