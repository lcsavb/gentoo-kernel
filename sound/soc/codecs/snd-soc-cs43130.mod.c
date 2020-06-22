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
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8e1f7030, "snd_soc_card_jack_new" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x96848186, "scnprintf" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0x29361773, "complete" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,i2c-core,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:cs43130");
MODULE_ALIAS("i2c:cs4399");
MODULE_ALIAS("i2c:cs43131");
MODULE_ALIAS("i2c:cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198C*");

MODULE_INFO(srcversion, "03F2C24C80B8AF2AD87245A");
