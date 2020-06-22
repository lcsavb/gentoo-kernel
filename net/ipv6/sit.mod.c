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
	{ 0xaa91c651, "ip_tunnel_get_link_net" },
	{ 0x834d1e70, "ip_tunnel_get_iflink" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xc6ed38e2, "xfrm4_tunnel_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x5b1bfbf7, "xfrm4_tunnel_deregister" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0xb6730df, "dst_cache_set_ip4" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf8c097e2, "iptunnel_xmit" },
	{ 0x224c836d, "iptun_encaps" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbd6c9927, "skb_set_owner_w" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0xe223dc3a, "dst_cache_get_ip4" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x7d336e05, "dst_release" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xc5850110, "printk" },
	{ 0xcd4137d6, "ipv6_chk_prefix" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd83ad25f, "ipv6_chk_custom_prefix" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619c2ac5, "ip_tunnel_rcv" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa75614d3, "ip_tunnel_xmit" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6d495207, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x98001cfc, "init_net" },
	{ 0x4d0d0639, "ip_tunnel_encap_setup" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0x68d580e4, "ip6_err_gen_icmpv6_unreach" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb8b7e7ef, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "CF3D9714B0344C39A71FFF9");
