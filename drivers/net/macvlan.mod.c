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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xad6819d6, "dev_forward_skb" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc03256e8, "dev_uc_add" },
	{ 0xa2b06b98, "__dev_forward_skb" },
	{ 0x73229423, "dev_mc_add_excl" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0x1eb25e58, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb04f7cb6, "dev_set_allmulti" },
	{ 0xd6890702, "vlan_vid_del" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0xe3c61c15, "linkwatch_fire_event" },
	{ 0xabb82ce8, "vlan_vid_add" },
	{ 0x729d1ca3, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xc7dddb7c, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0xbc9e6657, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x6a3b2e99, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x44969c51, "dev_mc_del" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0xc200d029, "ndo_dflt_fdb_dump" },
	{ 0x7852d76c, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x98001cfc, "init_net" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xba2ff8a7, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0x681fe6d8, "eth_header_parse" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x96b53640, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xec3022dd, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x671802bd, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x227bd6bb, "dev_change_proto_down_generic" },
	{ 0x14d717f9, "eth_header_cache" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xfaf2d928, "dev_uc_del" },
	{ 0x1efdcdfa, "dev_uc_sync" },
	{ 0xe832e90f, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0xf5842ee7, "dev_queue_xmit_accel" },
	{ 0xe2fb2662, "netdev_is_rx_handler_busy" },
	{ 0x71a8a488, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xfd8073e5, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "273E473BDCDBE26C0E984D0");
