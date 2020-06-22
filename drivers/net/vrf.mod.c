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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x652a5f26, "ipv6_stub" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbd6c9927, "skb_set_owner_w" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x23cf1cab, "arp_tbl" },
	{ 0x69acdf38, "memcpy" },
	{ 0x680c833f, "__neigh_create" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x783f5d80, "nd_tbl" },
	{ 0xc7586279, "inet_select_addr" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xd72cda94, "ip6_dst_lookup_flow" },
	{ 0x77f4324c, "ip6_dst_alloc" },
	{ 0x905d759c, "fib6_new_table" },
	{ 0xbe59555a, "rt_dst_alloc" },
	{ 0x556b8c71, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3f88ee65, "dev_queue_xmit_nit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x7d9516d, "netdev_master_upper_dev_link" },
	{ 0xf669d8a4, "netdev_master_upper_dev_get" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x55a84e9c, "netdev_lower_get_next" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xb3e0a582, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7d336e05, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa39e1b3e, "nf_hook_slow" },
	{ 0xfe9b6b8c, "ip6_pol_route" },
	{ 0x45331271, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xb3fffb91, "fib_nl_newrule" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "3C0B77D675A576BED9E544E");
