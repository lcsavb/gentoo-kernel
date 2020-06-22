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
	{ 0xe10cfc9a, "register_candev" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0x62a8f80a, "can_change_state" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x391901a1, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6CAE5F684E0A6B52076E75");
