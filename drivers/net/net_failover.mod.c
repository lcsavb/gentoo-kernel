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
	{ 0x5c28c01b, "dev_mc_sync_multiple" },
	{ 0xf163231, "netdev_info" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd8cb6643, "vlan_uses_dev" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xd6890702, "vlan_vid_del" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xabb82ce8, "vlan_vid_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xed7ebf4a, "vlan_vids_del_by_dev" },
	{ 0x1a281859, "pv_ops" },
	{ 0x658b427e, "vlan_vids_add_by_dev" },
	{ 0x4e3386de, "failover_register" },
	{ 0xe5aa34d2, "netdev_lower_state_changed" },
	{ 0xae2e6dab, "netdev_change_features" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x83fd15b4, "netif_tx_stop_all_queues" },
	{ 0x96d32183, "__ethtool_get_link_ksettings" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc9938aa0, "dev_close" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xaaf0dac0, "dev_open" },
	{ 0x39147730, "netdev_pick_tx" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b53640, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xc596eb47, "dev_uc_sync_multiple" },
	{ 0xf6e40ceb, "failover_slave_unregister" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc9568069, "failover_unregister" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x18132828, "dev_get_stats" },
	{ 0xfd8073e5, "dev_set_mtu" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");


MODULE_INFO(srcversion, "D81F5D912F9838BFA6FDE45");
