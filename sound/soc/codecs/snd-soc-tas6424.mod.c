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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x166d3f38, "snd_soc_put_strobe" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe2ead2eb, "snd_soc_get_strobe" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,i2c-core,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tas6424");

MODULE_INFO(srcversion, "D7DD882E64AC70D0A702440");
