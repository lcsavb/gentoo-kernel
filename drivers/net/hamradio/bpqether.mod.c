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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0xc5850110, "printk" },
	{ 0x94f1c453, "ax25_ip_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x98001cfc, "init_net" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x241c1195, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "3EA3D7B331A15E8D2A39F5A");
