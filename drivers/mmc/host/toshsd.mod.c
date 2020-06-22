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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0xc5534d64, "ioread16" },
	{ 0x17475388, "_dev_warn" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("pci:v00001179d00000805sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78995BCC0E7461C33DD6301");
