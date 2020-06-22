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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x8c0e98a4, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf19975a, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a281859, "pv_ops" },
	{ 0x5b29bdee, "nf_queue_entry_release_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x76ed320a, "nf_queue_entry_get_refs" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0xc5850110, "printk" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x544d02d9, "nfnetlink_unicast" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x33dabfbc, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xb4ae0564, "skb_zerocopy_headlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x740f2e4, "skb_tx_error" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x924a79fd, "__nla_reserve" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0x4a060c27, "nfnl_ct_hook" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x277b9370, "nf_register_queue_handler" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x1dcf9431, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x681e3cee, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2bb1b5ce, "nf_reinject" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4cce398, "nf_ct_hook" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "018DF0ECA37E5CF67FA7DD4");
