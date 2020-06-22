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
	{ 0xe520da1c, "deregister_atm_ioctl" },
	{ 0x7f4d204f, "register_atm_ioctl" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x1a281859, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6b89683, "vcc_process_recv_queue" },
	{ 0x36a099f6, "__module_get" },
	{ 0x35f9e09e, "ppp_register_channel" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xee565529, "ppp_unit_number" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92a91221, "ppp_channel_index" },
	{ 0x7bab5dba, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1cf67453, "ppp_input_error" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x681e3cee, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xe0cb126d, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb4af225e, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");
