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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xf163231, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xf22af22c, "__napi_schedule_irqoff" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x999e8297, "vfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xd8c2e807, "vmap" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xe0c00f84, "softnet_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x20e2c1a4, "skb_add_rx_frag" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb5237b07, "napi_get_frags" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xec668a41, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x2233ddeb, "pci_msix_vec_count" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe48af658, "__put_page" },
	{ 0x719a8826, "napi_gro_frags" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001AE0d00000042sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0159E2B705C44D14501E581");
