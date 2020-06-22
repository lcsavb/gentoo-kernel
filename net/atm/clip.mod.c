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
	{ 0x49ed2f18, "neigh_seq_next" },
	{ 0xbec7c50f, "neigh_seq_stop" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7f4d204f, "register_atm_ioctl" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7d336e05, "dst_release" },
	{ 0x680c833f, "__neigh_create" },
	{ 0xe324f5ea, "neigh_lookup" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x6d495207, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xd6b89683, "vcc_process_recv_queue" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x36a099f6, "__module_get" },
	{ 0x3b24a20b, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c2f88e, "atm_charge" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xc5850110, "printk" },
	{ 0xf143cde6, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xd517f601, "seq_puts" },
	{ 0x96848186, "scnprintf" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe520da1c, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x681e3cee, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x98001cfc, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a639b8f, "vcc_release_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6314dd75, "__neigh_for_each_release" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x583eb8bd, "neigh_seq_start" },
	{ 0x23cf1cab, "arp_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86f4a123, "neigh_direct_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "844BAC33546DDAA06571D04");
