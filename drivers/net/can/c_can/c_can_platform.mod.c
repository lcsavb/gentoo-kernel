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
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x72928266, "register_c_can_dev" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc90797b, "alloc_c_can_dev" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa2ce47ee, "free_c_can_dev" },
	{ 0xc6edaab0, "unregister_c_can_dev" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x6efe85e4, "c_can_power_down" },
	{ 0x17475388, "_dev_warn" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xee4992e1, "c_can_power_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "CD28ACAF9C879C7B0D4B433");
