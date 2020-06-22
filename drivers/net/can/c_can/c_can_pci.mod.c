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
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x72928266, "register_c_can_dev" },
	{ 0xc90797b, "alloc_c_can_dev" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xa2ce47ee, "free_c_can_dev" },
	{ 0xc6edaab0, "unregister_c_can_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("pci:v0000104Ad0000CC11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008818sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8833D8DBC372CF14A40EE82");
