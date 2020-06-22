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
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0xce0cb311, "l2tp_nl_register_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d32e2ef, "l2tp_session_delete" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x36a099f6, "__module_get" },
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0xa8d843c6, "l2tp_session_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x44226a8, "release_sock" },
	{ 0xffd135d2, "kernel_sock_ip_overhead" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x5cf8be39, "l2tp_session_create" },
	{ 0x754d539c, "strlen" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3d29dae0, "__skb_ext_del" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x7d336e05, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xad6819d6, "dev_forward_skb" },
	{ 0x99608c85, "l2tp_xmit_skb" },
	{ 0x681e3cee, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
