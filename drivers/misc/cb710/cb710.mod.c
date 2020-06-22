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
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x429ada60, "platform_device_register" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x28753ca8, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "26ECB81F2148DE00456492B");
