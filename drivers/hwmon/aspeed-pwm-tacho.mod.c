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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xde5e47, "__devm_reset_control_get" },
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "330388627BFC7BB63D282D1");
