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
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x8581fb1, "clk_register_fixed_rate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000935sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001194sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2D3594F37E1848FCB774674");
