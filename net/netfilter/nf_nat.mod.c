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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa1d4ff34, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x1c72eb53, "nf_ct_kill_acct" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2966aa82, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x17b635d8, "__skb_checksum" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb15b4109, "crc32c" },
	{ 0xcb785b84, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x33989f29, "inet_proto_csum_replace16" },
	{ 0xb8072040, "nf_ct_iterate_destroy" },
	{ 0xb4f523b9, "nf_ip_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xb4d239d, "skb_checksum" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc7586279, "inet_select_addr" },
	{ 0x8ef479e9, "nf_unregister_net_hooks" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0xcc4a7696, "nf_hook_entries_delete_raw" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe91ea5a, "ip_route_me_harder" },
	{ 0xf9c7457b, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x681e3cee, "module_put" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x6a06cf13, "nf_register_net_hooks" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe92c6b47, "nf_ct_iterate_cleanup_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcead5b50, "nf_conntrack_tuple_taken" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0892f92, "nf_ct_extend_unregister" },
	{ 0xf1a3aed0, "nf_ct_helper_expectfn_register" },
	{ 0xa976931f, "nf_ct_extend_register" },
	{ 0x9aa3007e, "__xfrm_decode_session" },
	{ 0x9da2fcba, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x64afe9e1, "nf_ct_seqadj_set" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xe4a6a8f4, "nf_hook_entries_insert_raw" },
	{ 0x3d649b10, "nf_ip6_checksum" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "9972B11ACE02D83E7A733D4");
