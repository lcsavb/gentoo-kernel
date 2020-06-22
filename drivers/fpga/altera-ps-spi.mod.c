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
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb46db705, "gpiod_get_raw_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7a3d332d, "fpga_mgr_register" },
	{ 0xe84488d6, "devm_fpga_mgr_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0x8c932f30, "fpga_mgr_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("spi:cyclone-ps-spi");
MODULE_ALIAS("spi:fpga-passive-serial");
MODULE_ALIAS("spi:fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serialC*");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serialC*");

MODULE_INFO(srcversion, "83D3C7086B9A3561FD4B4C6");
