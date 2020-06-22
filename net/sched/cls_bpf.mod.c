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
	{ 0xb1191624, "unregister_tcf_proto_ops" },
	{ 0x4e974bd6, "register_tcf_proto_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe8e3627, "tcf_block_netif_keep_dst" },
	{ 0xf5e85695, "bpf_prog_get_type_dev" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x377de0d8, "bpf_prog_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8e39a203, "tcf_exts_validate" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc5850110, "printk" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x754d539c, "strlen" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa4353be2, "tcf_exts_dump_stats" },
	{ 0xbdc5a18a, "tcf_exts_dump" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x879ac1d4, "tc_setup_cb_call" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x7c6d89c5, "tcf_action_exec" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcb785b84, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6222e5fd, "tcf_exts_destroy" },
	{ 0x61f204df, "bpf_prog_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x2524b0e1, "bpf_prog_destroy" },
	{ 0x12a947b5, "tc_setup_cb_destroy" },
	{ 0x3a612e31, "tc_setup_cb_replace" },
	{ 0x60157142, "tc_setup_cb_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1cf0f8b9, "tc_setup_cb_reoffload" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C6DF610B46A35FFF577D7E");
