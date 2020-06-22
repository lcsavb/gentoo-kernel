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
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7d336e05, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x38340a35, "nf_route" },
	{ 0xb0e602eb, "memmove" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x2966aa82, "inet_proto_csum_replace4" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
