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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x1a281859, "pv_ops" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001103sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC152CB45573D7FC3756897");
