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
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2822d1ec, "gro_find_receive_by_type" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6dc79747, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0x7d336e05, "dst_release" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4266b6e6, "udp_tunnel_xmit_skb" },
	{ 0xdf30b2c4, "dst_cache_set_ip6" },
	{ 0x4ec8e432, "udp_tun_rx_dst" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xe223dc3a, "dst_cache_get_ip4" },
	{ 0x7634c7f, "dst_cache_get_ip6" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xaaeee204, "udp_sock_create6" },
	{ 0xadb5d596, "setup_udp_tunnel_sock" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x814b68ee, "udp_tunnel_sock_release" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcda533a6, "udp_tunnel_push_rx_port" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xf7a99aa1, "gro_cells_receive" },
	{ 0xfbd5a2a4, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x652a5f26, "ipv6_stub" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xccd03132, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xdd3db2ed, "udp_tunnel_notify_add_rx_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xb553f2ca, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x81a2325, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7c8bb9a1, "gro_cells_init" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x5f7eb5d5, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x52ac31b5, "udp_tunnel6_xmit_skb" },
	{ 0xb6730df, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x696010c7, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4ace5c85, "ip6_dst_hoplimit" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel,ipv6");


MODULE_INFO(srcversion, "981B4164656FEAAE3043C33");
