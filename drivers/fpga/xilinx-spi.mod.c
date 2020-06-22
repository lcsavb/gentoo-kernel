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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7a3d332d, "fpga_mgr_register" },
	{ 0xe84488d6, "devm_fpga_mgr_create" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x67e1c81f, "gpiod_get_value" },
	{ 0x8c932f30, "fpga_mgr_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serial");
MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serialC*");

MODULE_INFO(srcversion, "542887A4EC01A20FD2D0471");
