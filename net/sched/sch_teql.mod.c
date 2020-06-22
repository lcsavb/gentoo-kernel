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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x6d2bb3cf, "unregister_qdisc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe502928, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6d495207, "register_netdev" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbf6c98a8, "__neigh_event_send" },
	{ 0x680c833f, "__neigh_create" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe0c00f84, "softnet_data" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe324f5ea, "neigh_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5d49133f, "noop_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x258b4cc8, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "601FD5BC0539507CDD36678");
