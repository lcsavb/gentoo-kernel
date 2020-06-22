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
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1d82023b, "ib_create_ah_from_wc" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xad30ae9, "ib_find_pkey" },
	{ 0xc922a86a, "ib_register_mad_agent" },
	{ 0xeb450818, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xe3c61c15, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x950b7e30, "ib_free_send_mad" },
	{ 0x557b2d1b, "rdma_destroy_ah_user" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0x6d495207, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x4776ef58, "ib_set_client_data" },
	{ 0xef3ceb8a, "ib_create_send_mad" },
	{ 0xa20dd5b7, "ib_post_send_mad" },
	{ 0x17e2ffb2, "ib_unregister_mad_agent" },
	{ 0x3929792d, "ib_register_client" },
	{ 0x8ca3b139, "ib_unregister_event_handler" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x761f70c5, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3300a0d, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xd4159d41, "eth_commit_mac_addr_change" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xb6841bf7, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xd8f2abb, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0xfd8073e5, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "EF492556E87EA79321D9594");
