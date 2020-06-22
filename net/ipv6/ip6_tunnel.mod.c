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
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0xac9da672, "xfrm6_tunnel_deregister" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x754d539c, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7d336e05, "dst_release" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdf30b2c4, "dst_cache_set_ip6" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xbd6c9927, "skb_set_owner_w" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a820d3, "dst_cache_get" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xf7a99aa1, "gro_cells_receive" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x15896e9f, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x3b716094, "ip_route_input_noref" },
	{ 0x4b553401, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b7e7ef, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7c8bb9a1, "gro_cells_init" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x5f7eb5d5, "rt6_lookup" },
	{ 0xa6257463, "ip6tun_encaps" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe86f6a5e, "ip6_local_out" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4ace5c85, "ip6_dst_hoplimit" },
	{ 0xa3d6113c, "xfrm6_tunnel_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xcfa9e86b, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "9716D7337E4DCA03786982A");
