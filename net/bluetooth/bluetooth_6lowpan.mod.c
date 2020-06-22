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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x8f854d57, "l2cap_chan_set_defaults" },
	{ 0x40120314, "single_open" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xda584c89, "single_release" },
	{ 0xa314f494, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x1db6ecb8, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2d61ba83, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x6dc09887, "l2cap_add_psm" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xae254cfe, "seq_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xea101c6d, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa0c86f69, "hci_get_route" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0x75021b87, "l2cap_chan_put" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x3441c7b7, "iov_iter_kvec" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x783f5d80, "nd_tbl" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x8259f845, "debugfs_create_file_unsafe" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0xaaf0dac0, "dev_open" },
	{ 0xccb73ceb, "lowpan_header_decompress" },
	{ 0x681e3cee, "module_put" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0x84f34f6d, "lowpan_unregister_netdev" },
	{ 0x9abe2345, "bt_debugfs" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x83754452, "l2cap_chan_connect" },
	{ 0xa725e848, "netdev_notify_peers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd190bb17, "lowpan_register_netdev" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5ba4f9d8, "l2cap_chan_create" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "CB4D52F15DB9F3034CEDEE1");
