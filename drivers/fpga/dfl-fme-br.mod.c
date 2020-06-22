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
	{ 0x267d21e4, "dfl_fpga_port_ops_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbae2b39, "__dfl_fpga_cdev_find_port" },
	{ 0xbe78c7f8, "dfl_fpga_check_port_id" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2e475a32, "fpga_bridge_register" },
	{ 0x19424f63, "devm_fpga_bridge_create" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4351cee1, "dfl_fpga_port_ops_put" },
	{ 0x94bd2068, "put_device" },
	{ 0x6c73909c, "fpga_bridge_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl,fpga-bridge");


MODULE_INFO(srcversion, "873AAFD4B7E728D2C486716");
