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
	{ 0xf69ce444, "tcf_register_action" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x457a8dd5, "psample_sample_packet" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdd7ee6a9, "tcf_idr_search" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9e6dac8, "tcf_idr_cleanup" },
	{ 0x65336712, "tcf_idr_insert" },
	{ 0x91556927, "tcf_action_set_ctrlact" },
	{ 0x4aab6b09, "psample_group_get" },
	{ 0x4452bd7b, "tcf_idr_create" },
	{ 0xc2ec78fc, "__tcf_idr_release" },
	{ 0x5afb87, "tcf_chain_put_by_act" },
	{ 0x52c7de7a, "tcf_action_check_ctrlact" },
	{ 0x12fd2ea2, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x4cf43142, "tcf_generic_walker" },
	{ 0x38b5419, "psample_group_put" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc34e040f, "psample_group_take" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x1460c9db, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "psample");


MODULE_INFO(srcversion, "7EB6180C8EF8C8A1E65D360");
