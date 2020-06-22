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
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x4266b6e6, "udp_tunnel_xmit_skb" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x7d336e05, "dst_release" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xadb5d596, "setup_udp_tunnel_sock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7419e1ca, "fput" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0xcb785b84, "__put_net" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0xbcb7f597, "get_net_ns_by_fd" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x44226a8, "release_sock" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel");


MODULE_INFO(srcversion, "BBF869A9B82D3A3F069079B");
