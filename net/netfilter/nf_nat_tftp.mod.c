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
	{ 0x917d2e50, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x67b1a3fc, "nf_nat_tftp_hook" },
	{ 0x9c2e5cdf, "nf_nat_helper_unregister" },
	{ 0x5a0d60c4, "nf_ct_helper_log" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0xe6b03de9, "nf_nat_follow_master" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");


MODULE_INFO(srcversion, "B2342BE7767C8310DBCC780");
