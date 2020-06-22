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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xdfa640c4, "ip6_tnl_get_link_net" },
	{ 0xece291a3, "ip6_tnl_get_iflink" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x78fb1de2, "inet6_del_protocol" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x4cf1d4ab, "inet6_add_protocol" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0xee8a8c75, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb4d239d, "skb_checksum" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x743f19dd, "ip6_tnl_xmit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb8b7e7ef, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x694ea9bf, "ip6_tnl_rcv" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0x6b057fb0, "gre_parse_header" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0x2dfd0bd7, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc6ce2030, "ip6_tnl_encap_setup" },
	{ 0xcded9bf6, "ip6_tnl_change_mtu" },
	{ 0x6d495207, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x98001cfc, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x7d336e05, "dst_release" },
	{ 0x5f7eb5d5, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1be1e2fb, "ip6_tnl_get_cap" },
	{ 0x7c8bb9a1, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,gre");


MODULE_INFO(srcversion, "C79CB93F1BE3FBEF12BF197");
