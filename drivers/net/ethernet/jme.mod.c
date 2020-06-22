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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc7dc2635, "pci_pme_active" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x6d495207, "register_netdev" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x211e5efc, "pci_disable_link_state" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf163231, "netdev_info" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x446293a7, "mii_ethtool_set_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A32C94CEED11CDDAB36889");
