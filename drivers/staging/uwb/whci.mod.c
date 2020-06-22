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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xa78b654b, "umc_device_create" },
	{ 0xe384329d, "umc_device_unregister" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xfc1302b, "umc_device_register" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "umc");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "554F23FE4DC9A7E343F31FE");
