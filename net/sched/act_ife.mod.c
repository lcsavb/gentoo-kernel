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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x12fd2ea2, "tcf_idr_check_alloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4cf43142, "tcf_generic_walker" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf69ce444, "tcf_register_action" },
	{ 0xe7888e98, "ife_tlv_meta_encode" },
	{ 0x67db2029, "ife_tlv_meta_decode" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc2ec78fc, "__tcf_idr_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xe76b0eb5, "tcf_unregister_action" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x91556927, "tcf_action_set_ctrlact" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6210e871, "ife_tlv_meta_next" },
	{ 0x1460c9db, "tcf_idrinfo_destroy" },
	{ 0x681e3cee, "module_put" },
	{ 0x52c7de7a, "tcf_action_check_ctrlact" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x63c1aa64, "ife_decode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4452bd7b, "tcf_idr_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5afb87, "tcf_chain_put_by_act" },
	{ 0x65336712, "tcf_idr_insert" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xb9e6dac8, "tcf_idr_cleanup" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xdd7ee6a9, "tcf_idr_search" },
	{ 0x3907aa5f, "ife_encode" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "ife");


MODULE_INFO(srcversion, "0A8242C57356EC484D50E8F");
