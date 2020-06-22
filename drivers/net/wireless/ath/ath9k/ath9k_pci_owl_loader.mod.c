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
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbfc65096, "pcim_pin_device" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xad5d6eb3, "pci_rescan_bus" },
	{ 0x2f40834d, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xd468678c, "pcim_iounmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x29361773, "complete" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000168Cd0000FF1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EFC60B738D2E3B49E129FAF");
