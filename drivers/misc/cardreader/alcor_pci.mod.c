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
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xe8d32f6a, "mfd_remove_devices" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x5f5897ee, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "mfd-core");

MODULE_ALIAS("pci:v00001AEAd00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006621sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "542DA1503A3365AE66BA5ED");
