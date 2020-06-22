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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5f2af34c, "mrp_uninit_applicant" },
	{ 0xb3e0a582, "dev_change_flags" },
	{ 0x85597722, "vlan_filter_push_vids" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0xc04da80f, "mrp_request_leave" },
	{ 0xa88671c7, "vlan_filter_drop_vids" },
	{ 0x486bd35d, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x542a5c87, "proc_create_single_data" },
	{ 0xbd28258d, "garp_uninit_applicant" },
	{ 0x17eb15ba, "vlan_dev_vlan_id" },
	{ 0xc03256e8, "dev_uc_add" },
	{ 0xd517f601, "seq_puts" },
	{ 0x512c5f1e, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd8cb6643, "vlan_uses_dev" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xb04f7cb6, "dev_set_allmulti" },
	{ 0xd6890702, "vlan_vid_del" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0xe3c61c15, "linkwatch_fire_event" },
	{ 0xabb82ce8, "vlan_vid_add" },
	{ 0x729d1ca3, "__netpoll_setup" },
	{ 0xbf15f8e7, "garp_init_applicant" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x55416c13, "proc_remove" },
	{ 0xced593d9, "vlan_ioctl_set" },
	{ 0xc7dddb7c, "netpoll_send_skb_on_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x5cacd8c0, "garp_register_application" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc10153f0, "proc_mkdir_data" },
	{ 0x7852d76c, "netif_stacked_transfer_operstate" },
	{ 0x98001cfc, "init_net" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x84e081e, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x681fe6d8, "eth_header_parse" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xeffc7019, "mrp_init_applicant" },
	{ 0xec3022dd, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0x9c9fafe0, "__dev_get_by_name" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xad3bc4e6, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x671802bd, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7a8d05c, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xfaf2d928, "dev_uc_del" },
	{ 0x1efdcdfa, "dev_uc_sync" },
	{ 0xe832e90f, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xbe810c62, "mrp_unregister_application" },
	{ 0x47e66f17, "mrp_request_join" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x71a8a488, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x18132828, "dev_get_stats" },
	{ 0xfd8073e5, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "9B6F10924C07FAEE243BFB2");
