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
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xade4bf4c, "rl6347a_hw_read" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xa7aa810f, "rl6347a_hw_write" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x100e7ce, "snd_soc_dapm_sync" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x6fbbd82c, "snd_soc_dapm_force_enable_pin" },
	{ 0x13ba4b94, "snd_soc_dapm_disable_pin" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6347a");

MODULE_ALIAS("i2c:rt298");
MODULE_ALIAS("acpi*:INT343A:*");

MODULE_INFO(srcversion, "CAAC0A1224F7E61A6F98880");
