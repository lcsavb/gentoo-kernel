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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x486bd35d, "dev_get_flags" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7d336e05, "dst_release" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1d077155, "rtnl_notify" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xbc89dfd1, "ip_tunnel_encap_del_ops" },
	{ 0xfddaebb4, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0xd55e95b2, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0x4c5cf106, "rtnl_af_unregister" },
	{ 0x41804f72, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x652a5f26, "ipv6_stub" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0xff44470a, "ip_valid_fib_dump_req" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc3fffa7a, "rtnl_unicast" },
	{ 0xe9412ded, "rtnl_set_sk_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x94caecd1, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74b280e0, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0x120c0c21, "skb_gso_validate_network_len" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc211151e, "ip_tunnel_encap_add_ops" },
	{ 0xa0164d4a, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "BE272100E9C9509C62694B7");
