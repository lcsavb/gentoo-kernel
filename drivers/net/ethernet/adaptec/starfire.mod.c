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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x446293a7, "mii_ethtool_set_link_ksettings" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0x3006f0bf, "mii_link_ok" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00009004d00006915sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6483AE67069A4C30F5311AE");
