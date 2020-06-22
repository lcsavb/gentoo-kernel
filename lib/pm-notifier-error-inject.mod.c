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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x835ce8ae, "notifier_err_inject_init" },
	{ 0x216ea3a4, "notifier_err_inject_dir" },
};

MODULE_INFO(depends, "notifier-error-inject");


MODULE_INFO(srcversion, "D91615DE246609E4DDCB242");
