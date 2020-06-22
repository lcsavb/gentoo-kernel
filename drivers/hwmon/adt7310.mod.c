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
	{ 0x9aff9833, "adt7x10_dev_pm_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0x6b38194e, "adt7x10_probe" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x5f54b030, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("spi:adt7310");
MODULE_ALIAS("spi:adt7320");

MODULE_INFO(srcversion, "2C289629AC4D8E73FA7D8E1");
