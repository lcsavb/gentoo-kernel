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
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x33f6b002, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x8bbae8ab, "snd_soc_jack_add_gpios" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core");

MODULE_ALIAS("acpi*:14F10720:*");
MODULE_ALIAS("i2c:cx20721");
MODULE_ALIAS("i2c:cx20723");

MODULE_INFO(srcversion, "F77881C37DE148462C3CFF8");
