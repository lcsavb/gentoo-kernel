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
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x96b53640, "passthru_features_check" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x525c71eb, "skb_headers_offset_update" },
	{ 0x4f7afdad, "skb_copy_header" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0xac112f6e, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x28102011, "build_skb" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xcb53c9cf, "xdp_do_redirect" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xccd03132, "rtnl_configure_link" },
	{ 0xcb785b84, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x81a2325, "rtnl_create_link" },
	{ 0x88231882, "rtnl_link_get_net" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x94d49028, "xdp_convert_zc_to_xdp_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9e08d700, "__tracepoint_xdp_bulk_tx" },
	{ 0x244f36c3, "xdp_return_frame_rx_napi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0x61f204df, "bpf_prog_put" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbf950230, "xdp_rxq_info_reg" },
	{ 0xce8777dd, "xdp_rxq_info_reg_mem_model" },
	{ 0x5a171677, "xdp_rxq_info_is_reg" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xa2b06b98, "__dev_forward_skb" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xb894ff90, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x64a4be57, "napi_hash_del" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xafb066eb, "xdp_return_frame" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0C0E9AC1DB9658D92603D0D");
