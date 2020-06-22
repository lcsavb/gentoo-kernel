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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xe520da1c, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0x7f4d204f, "register_atm_ioctl" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6b89683, "vcc_process_recv_queue" },
	{ 0x36a099f6, "__module_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6d495207, "register_netdev" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x5a921311, "strncmp" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0x681e3cee, "module_put" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "64A5E06F79A1F9C70A4155C");
