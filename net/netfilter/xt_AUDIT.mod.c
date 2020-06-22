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
	{ 0x27852741, "xt_unregister_targets" },
	{ 0x7c427ce6, "xt_register_targets" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0xf55d67fd, "audit_log_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "758F07AD431E0E73A5E3747");
