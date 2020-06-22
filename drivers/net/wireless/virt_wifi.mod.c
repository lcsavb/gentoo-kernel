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
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0xa36fd63d, "wiphy_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x681e3cee, "module_put" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0x36a099f6, "__module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xec3022dd, "netdev_upper_dev_link" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x7852d76c, "netif_stacked_transfer_operstate" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x54b1ba53, "cfg80211_disconnected" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xebc0c847, "cfg80211_connect_done" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x7b9bcae3, "cfg80211_scan_done" },
	{ 0xaeedd606, "cfg80211_put_bss" },
	{ 0x45cc952, "cfg80211_inform_bss_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "CB287642FF1C6AC583FEE08");
