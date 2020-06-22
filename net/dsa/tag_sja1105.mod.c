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
	{ 0x324f5d0a, "dsa_tag_drivers_unregister" },
	{ 0x8588a966, "dsa_tag_drivers_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x59a2f0ee, "packing" },
	{ 0x417d1fed, "dsa_8021q_rx_switch_id" },
	{ 0x9e59271d, "dsa_8021q_rx_source_port" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0xeb218a71, "__skb_vlan_pop" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x1a281859, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8d9e84cb, "dsa_defer_xmit" },
	{ 0xedb7f660, "dsa_8021q_xmit" },
	{ 0x38d039bb, "netdev_txq_to_tc" },
	{ 0x97c1651, "dsa_8021q_tx_vid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core,tag_8021q");


MODULE_INFO(srcversion, "D0D57D20640A9C22AFB08EB");
