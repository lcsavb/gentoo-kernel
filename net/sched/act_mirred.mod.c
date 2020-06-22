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
	{ 0xe76b0eb5, "tcf_unregister_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf69ce444, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb9e6dac8, "tcf_idr_cleanup" },
	{ 0xc2ec78fc, "__tcf_idr_release" },
	{ 0x65336712, "tcf_idr_insert" },
	{ 0x1a281859, "pv_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5afb87, "tcf_chain_put_by_act" },
	{ 0x91556927, "tcf_action_set_ctrlact" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0x52c7de7a, "tcf_action_check_ctrlact" },
	{ 0x4452bd7b, "tcf_idr_create" },
	{ 0x12fd2ea2, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdd7ee6a9, "tcf_idr_search" },
	{ 0x4cf43142, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x1460c9db, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F6CF8AFF818EF3EBD9F2563");
