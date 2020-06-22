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
	{ 0xf34dac2b, "nf_log_unregister" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x8c0e98a4, "nfnetlink_subsys_unregister" },
	{ 0xb35a564d, "nf_log_register" },
	{ 0xf19975a, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x9f4a9fde, "nf_log_bind_pf" },
	{ 0x4a060c27, "nfnl_ct_hook" },
	{ 0x5795ddb4, "nf_log_unbind_pf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x84baaff9, "proc_set_user" },
	{ 0xd310388d, "make_kgid" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0x617afa54, "nf_log_unset" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x681e3cee, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb785b84, "__put_net" },
	{ 0x56470118, "__warn_printk" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x544d02d9, "nfnetlink_unicast" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "078D8FF149E84A4B9945E6C");
