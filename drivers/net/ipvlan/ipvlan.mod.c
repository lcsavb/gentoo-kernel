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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xad6819d6, "dev_forward_skb" },
	{ 0xb3e0a582, "dev_change_flags" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x9443a32d, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb04f7cb6, "dev_set_allmulti" },
	{ 0xd6890702, "vlan_vid_del" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0xabb82ce8, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1a281859, "pv_ops" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8ef479e9, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0x7852d76c, "netif_stacked_transfer_operstate" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x3b716094, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x6a06cf13, "nf_register_net_hooks" },
	{ 0xba2ff8a7, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x681fe6d8, "eth_header_parse" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xec3022dd, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x115a40e3, "netdev_features_change" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x14d717f9, "eth_header_cache" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1efdcdfa, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe86f6a5e, "ip6_local_out" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xe2fb2662, "netdev_is_rx_handler_busy" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x71a8a488, "dev_mc_sync" },
	{ 0xafe74a4, "dev_pre_changeaddr_notify" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xdd59a7e6, "ip6_route_input_lookup" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "63802C88B9F97C94933BA5A");
