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
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xe18f42a5, "isst_if_cdev_unregister" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x9caa133e, "isst_if_cdev_register" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a5c38f2, "isst_store_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x6f7821f, "isst_if_mbox_cmd_set_req" },
	{ 0x58a8261f, "isst_if_mbox_cmd_invalid" },
	{ 0x861369f8, "isst_resume_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "isst_if_common");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");

MODULE_INFO(srcversion, "2E09251510089326D4314E3");
