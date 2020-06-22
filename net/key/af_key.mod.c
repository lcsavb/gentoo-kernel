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
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xab207a5c, "sock_no_ioctl" },
	{ 0x156540f8, "datagram_poll" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x453da752, "sock_no_bind" },
	{ 0x10b93d7a, "xfrm_register_km" },
	{ 0x8a91fbff, "sock_register" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xb6285377, "proto_register" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xaac0176a, "xfrm_unregister_km" },
	{ 0x9557df0e, "xfrm_audit_policy_add" },
	{ 0x9ca061ef, "xfrm_policy_insert" },
	{ 0xae31d529, "xfrm_policy_alloc" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x66b2ad86, "xfrm_policy_bysel_ctx" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x3fb885c7, "xfrm_state_add" },
	{ 0xe05effb9, "xfrm_audit_state_add" },
	{ 0x80d5b01b, "xfrm_state_update" },
	{ 0x19622e24, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf4829297, "xfrm_state_alloc" },
	{ 0x70afb477, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xb20133a8, "xfrm_find_acq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdfc78b8f, "xfrm_find_acq_byseq" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x287cbc58, "xfrm_audit_state_delete" },
	{ 0x1a8d9273, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x7dbbd8f, "xfrm_audit_policy_delete" },
	{ 0x828d3917, "xfrm_policy_destroy" },
	{ 0x8c1dd3c4, "xfrm_policy_byid" },
	{ 0x98001cfc, "init_net" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x9ef13cf4, "km_state_notify" },
	{ 0xdd4a83f7, "xfrm_state_flush" },
	{ 0xa69ccf48, "km_policy_notify" },
	{ 0x7c3e4df0, "xfrm_policy_flush" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xec7441cb, "xfrm_migrate" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x60a3cb24, "sock_i_uid" },
	{ 0x21b15091, "sock_i_ino" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xdbfc6e8d, "xfrm_state_walk" },
	{ 0xad02522d, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9200f3, "__sock_recv_ts_and_drops" },
	{ 0xd27628af, "skb_free_datagram" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x70f3685c, "xfrm_policy_walk_done" },
	{ 0x3a371124, "xfrm_policy_walk" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4375c9af, "sock_rfree" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7991E3E77F54710D995FB03");
