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
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe520da1c, "deregister_atm_ioctl" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x7f4d204f, "register_atm_ioctl" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfd8073e5, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a4f695, "br_fdb_test_addr_hook" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x681e3cee, "module_put" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x36a099f6, "__module_get" },
	{ 0x3b24a20b, "vcc_insert_socket" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd517f601, "seq_puts" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x5a639b8f, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "3CFAB19728153A8D4F13B5C");
