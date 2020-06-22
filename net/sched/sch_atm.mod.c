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
	{ 0x6d2bb3cf, "unregister_qdisc" },
	{ 0xe502928, "register_qdisc" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf9494d33, "gnet_stats_copy_queue" },
	{ 0xc01ad164, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4f323e9d, "__qdisc_calculate_pkt_len" },
	{ 0x6bfaa073, "tcf_classify" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2e462c6c, "tcf_block_get" },
	{ 0x6db529cd, "qdisc_create_dflt" },
	{ 0x68d6400a, "pfifo_qdisc_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5d49133f, "noop_qdisc" },
	{ 0x258b4cc8, "qdisc_reset" },
	{ 0xc5850110, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0x7419e1ca, "fput" },
	{ 0xfa0332d1, "tcf_block_put" },
	{ 0x7502b252, "qdisc_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1724F5EE29ADC73F360543A");
