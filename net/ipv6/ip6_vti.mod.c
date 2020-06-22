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
	{ 0xdfa640c4, "ip6_tnl_get_link_net" },
	{ 0xece291a3, "ip6_tnl_get_iflink" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x2b3ab9b2, "xfrm6_protocol_deregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x66578b1f, "xfrm6_protocol_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xdc228543, "xfrm6_rcv_tnl" },
	{ 0xeb95c72e, "ip6_tnl_rcv_ctl" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee8a8c75, "ip6_tnl_xmit_ctl" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0x1e1bd78c, "ip_route_output_key_hash" },
	{ 0x9aa3007e, "__xfrm_decode_session" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x98001cfc, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb8b7e7ef, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7d336e05, "dst_release" },
	{ 0x5f7eb5d5, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x1be1e2fb, "ip6_tnl_get_cap" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6");


MODULE_INFO(srcversion, "E3230682B03162C771B69B3");
