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
	{ 0x5221c893, "idma32_dma_probe" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x6d28eb20, "dw_dma_probe" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf65d065d, "dw_dma_remove" },
	{ 0xfb8df7a7, "do_dw_dma_enable" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa9845f04, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa40aed48, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDE5CB08D4141DAE60D1364");
