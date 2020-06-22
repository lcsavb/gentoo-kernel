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
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x9627ed0b, "device_match_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x20be2e00, "driver_find_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x27522eea, "pci_intx" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d000015E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1DBD94FBDB5BFDAB154CB7E");
