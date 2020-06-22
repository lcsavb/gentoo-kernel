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
	{ 0x5c28c01b, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x12ac93c, "dev_disable_lro" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd8cb6643, "vlan_uses_dev" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb04f7cb6, "dev_set_allmulti" },
	{ 0xd6890702, "vlan_vid_del" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xabb82ce8, "vlan_vid_add" },
	{ 0x729d1ca3, "__netpoll_setup" },
	{ 0xed7ebf4a, "vlan_vids_del_by_dev" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x658b427e, "vlan_vids_add_by_dev" },
	{ 0x7d9516d, "netdev_master_upper_dev_link" },
	{ 0xe5aa34d2, "netdev_lower_state_changed" },
	{ 0xae2e6dab, "netdev_change_features" },
	{ 0xc7dddb7c, "netpoll_send_skb_on_dev" },
	{ 0xe9f6f34f, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbc9e6657, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9938aa0, "dev_close" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x5a7b4409, "dev_mc_flush" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaaf0dac0, "dev_open" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x5cac86df, "dev_uc_flush" },
	{ 0x681e3cee, "module_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x496e2a71, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x96b53640, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x671802bd, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xc596eb47, "dev_uc_sync_multiple" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe832e90f, "__netpoll_free" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xfd8073e5, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4629A44914375A1B79DCA31");
