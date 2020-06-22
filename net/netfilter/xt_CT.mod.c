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
	{ 0x8fe66800, "xt_unregister_target" },
	{ 0x7c427ce6, "xt_register_targets" },
	{ 0xa448c1d1, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6b6df32, "nf_ct_set_timeout" },
	{ 0xc055d362, "nf_ct_l4proto_find" },
	{ 0x793477af, "nf_ct_helper_ext_add" },
	{ 0xad5f4bbe, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
	{ 0x541662b, "nf_ct_tmpl_free" },
	{ 0x6791e905, "nf_ct_tmpl_alloc" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x46b178d4, "nf_ct_destroy_timeout" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0x6faf2c6f, "nf_conntrack_helper_put" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7AE17D4C9B3259276ED6FB0");
