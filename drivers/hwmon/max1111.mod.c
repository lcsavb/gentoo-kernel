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
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xcebe7641, "spi_setup" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe8799010, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:max1110");
MODULE_ALIAS("spi:max1111");
MODULE_ALIAS("spi:max1112");
MODULE_ALIAS("spi:max1113");

MODULE_INFO(srcversion, "B411FEBA90B88FFEE82BF67");
