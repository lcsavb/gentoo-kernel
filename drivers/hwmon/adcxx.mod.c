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
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:adcxx1s");
MODULE_ALIAS("spi:adcxx2s");
MODULE_ALIAS("spi:adcxx4s");
MODULE_ALIAS("spi:adcxx8s");

MODULE_INFO(srcversion, "B0C5C316B7A87133E1533CB");
