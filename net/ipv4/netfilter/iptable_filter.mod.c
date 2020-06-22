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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x14ef9997, "xt_hook_ops_alloc" },
	{ 0x98001cfc, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x93f31b91, "ipt_register_table" },
	{ 0xa9dcc5e5, "ipt_alloc_initial_table" },
	{ 0x11a15be1, "ipt_do_table" },
	{ 0x638e473d, "ipt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tables");


MODULE_INFO(srcversion, "4B536AA51E969CB07EDA8CC");
