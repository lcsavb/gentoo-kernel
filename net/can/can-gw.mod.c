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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xc1d482b6, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xfddaebb4, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0xf832b299, "can_send" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x948fba51, "netlink_capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xe10433, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "53431ACAE20BD3345A2CDF9");
