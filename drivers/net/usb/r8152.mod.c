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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x20e2c1a4, "skb_add_rx_frag" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xec668a41, "__napi_alloc_skb" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0xc2c5802, "work_busy" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbc9e6657, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe0ffbad, "usb_autopm_get_interface_async" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x46638f19, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x717df0de, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6da97085, "usb_driver_set_configuration" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0x786cd351, "netdev_notice" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xf163231, "netdev_info" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x73879934, "usb_queue_reset_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "8DF8608B0C906B5E2D80285");
