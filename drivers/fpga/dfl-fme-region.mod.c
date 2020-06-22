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
	{ 0xf5272fda, "fpga_bridge_get_to_list" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb75491af, "fpga_region_register" },
	{ 0xdcc15df6, "devm_fpga_region_create" },
	{ 0x10ed1fc0, "fpga_mgr_get" },
	{ 0xa7aab594, "fpga_mgr_put" },
	{ 0xf79cdf89, "fpga_region_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-bridge,fpga-region,fpga-mgr");


MODULE_INFO(srcversion, "BF908449DC68F7E3EEB89ED");
