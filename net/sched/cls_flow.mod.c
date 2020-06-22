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
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x962af193, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x32d5f3e8, "from_kuid" },
	{ 0x175ea300, "__tcf_em_tree_match" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0x7c6d89c5, "tcf_action_exec" },
	{ 0x61bbcd92, "from_kgid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe8e3627, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x8e39a203, "tcf_exts_validate" },
	{ 0xf35b802b, "tcf_em_tree_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa4353be2, "tcf_exts_dump_stats" },
	{ 0xb19c813c, "tcf_em_tree_dump" },
	{ 0xbdc5a18a, "tcf_exts_dump" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcb785b84, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4fa3cdff, "tcf_em_tree_destroy" },
	{ 0x6222e5fd, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B666142D3C7A70DC9F55AE9");
