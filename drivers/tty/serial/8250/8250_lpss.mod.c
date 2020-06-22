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
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xa05cb8c2, "serial8250_register_8250_port" },
	{ 0x3af38729, "dw8250_setup_port" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x6d28eb20, "dw_dma_probe" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xf65d065d, "dw_dma_remove" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82b51c32, "serial8250_do_set_termios" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2c9a73c, "serial8250_do_get_mctrl" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B96sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B97sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B99sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD9B9F46E67D6A98910FD17");
