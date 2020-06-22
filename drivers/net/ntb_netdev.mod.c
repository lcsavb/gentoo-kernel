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
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xf9eb813f, "ntb_transport_unregister_client_dev" },
	{ 0xe9518f4f, "ntb_transport_unregister_client" },
	{ 0x7c94066f, "ntb_transport_register_client" },
	{ 0xf55d6313, "ntb_transport_register_client_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3d54dbfc, "ntb_transport_tx_enqueue" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x32537aca, "ntb_transport_link_query" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6d495207, "register_netdev" },
	{ 0x6685f8d3, "ntb_transport_create_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x862001f, "ntb_transport_tx_free_entry" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c992c8f, "ntb_transport_link_up" },
	{ 0xc37d9036, "ntb_transport_rx_remove" },
	{ 0x436098aa, "ntb_transport_link_down" },
	{ 0x30934216, "ntb_transport_max_size" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xd40e7a02, "ntb_transport_rx_enqueue" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xc270dc24, "ntb_transport_free_queue" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb_transport");


MODULE_INFO(srcversion, "E1DAA000CD010218C1477DA");
