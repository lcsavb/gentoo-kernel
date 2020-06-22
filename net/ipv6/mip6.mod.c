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
	{ 0xa79ff67f, "rawv6_mh_filter_unregister" },
	{ 0xa1043791, "xfrm_unregister_type" },
	{ 0x452f085d, "rawv6_mh_filter_register" },
	{ 0x67e82f07, "xfrm_register_type" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x42d98b5e, "km_report" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9b60540c, "ipv6_find_tlv" },
	{ 0xc5850110, "printk" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "93321DB396AAC10C837F151");
