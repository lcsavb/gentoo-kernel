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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6c5473a, "register_sja1000dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1dbfa72e, "alloc_sja1000dev" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x32536bcf, "free_sja1000dev" },
	{ 0x7850b40d, "unregister_sja1000dev" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("pci:v0000110Ad00002104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004002bc*sc*i*");

MODULE_INFO(srcversion, "94ACAA31193E52B0EFD1BA9");
