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
	{ 0x3fde148d, "tb_xdomain_disable_paths" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x489fb314, "tb_ring_poll" },
	{ 0x32c1e7b2, "tb_xdomain_request" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xba91e49b, "tb_ring_stop" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x463590d3, "tb_ring_alloc_rx" },
	{ 0x6c19b8a9, "tb_ring_poll_complete" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x2f8d4a87, "tb_unregister_service_driver" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e64bdfd, "tb_register_protocol_handler" },
	{ 0x658e3d97, "tb_property_add_immediate" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe118d281, "__alloc_pages_nodemask" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x603249ed, "tb_unregister_property_dir" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1cfd1ff, "tb_register_property_dir" },
	{ 0x5b0bdf06, "tb_xdomain_response" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x607ef36b, "tb_register_service_driver" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e3f3817, "tb_service_type" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x28102011, "build_skb" },
	{ 0x393b4f2f, "tb_property_free_dir" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0xf76028c7, "tb_unregister_protocol_handler" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x4af16f74, "tb_ring_alloc_tx" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0x20e2c1a4, "skb_add_rx_frag" },
	{ 0x9c073e7b, "tb_ring_free" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf40d6795, "tb_xdomain_enable_paths" },
	{ 0x2f172945, "__tb_ring_enqueue" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d23ee1, "tb_property_create_dir" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x75370ff9, "tb_ring_start" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xf060d222, "tb_xdomain_type" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "thunderbolt");

MODULE_ALIAS("tbsvc:knetworkp00000001v*r*");

MODULE_INFO(srcversion, "893BB9F54C6C3BE58CD85FC");
