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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x17475388, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c");

MODULE_ALIAS("i2c:rt5682");
MODULE_ALIAS("acpi*:10EC5682:*");

MODULE_INFO(srcversion, "4BB500388D74CEA04A668E4");
