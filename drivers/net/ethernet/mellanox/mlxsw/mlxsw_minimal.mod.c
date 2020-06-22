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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0x6a523a90, "mlxsw_core_driver_unregister" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0xc5850110, "printk" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x588b6f4a, "mlxsw_i2c_driver_unregister" },
	{ 0x8b3ebdc8, "mlxsw_core_port_eth_set" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbe82d6cc, "mlxsw_env_get_module_info" },
	{ 0x11be983d, "mlxsw_core_driver_register" },
	{ 0x7495d9e5, "mlxsw_core_port_devlink_port_get" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7fc81f2, "mlxsw_env_get_module_eeprom" },
	{ 0xab24b157, "mlxsw_i2c_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_i2c");

MODULE_ALIAS("i2c:mlxsw_minimal");

MODULE_INFO(srcversion, "AB5A8B2340EE0AE09E909C1");
