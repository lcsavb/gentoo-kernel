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
	{ 0x7355e4d0, "regmap_raw_write" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xea220941, "tcpm_tcpc_reset" },
	{ 0xc8eba256, "device_get_named_child_node" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x94ef476d, "tcpm_register_port" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0xdc029e18, "regmap_raw_read" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
};

MODULE_INFO(depends, "i2c-core,tcpm,regmap-i2c");

MODULE_ALIAS("i2c:tcpci");

MODULE_INFO(srcversion, "835366B09946BBD4A4B3540");
