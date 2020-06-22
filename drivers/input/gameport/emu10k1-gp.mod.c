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
	{ 0xc5850110, "printk" },
	{ 0x9f9dea6a, "__gameport_register_port" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7e5f0e69, "gameport_set_phys" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6367a71, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");

MODULE_ALIAS("pci:v00001102d00007002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98172AEDC65AACCC05E9E77");
