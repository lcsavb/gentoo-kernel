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
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x98001cfc, "init_net" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0x42c30b8a, "nf_nat_ipv6_register_fn" },
	{ 0x3b769345, "ip6t_register_table" },
	{ 0xbee4dfca, "ip6t_alloc_initial_table" },
	{ 0x773e77e2, "ip6t_unregister_table" },
	{ 0x10414e77, "nf_nat_ipv6_unregister_fn" },
	{ 0x9ec41703, "ip6t_do_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,ip6_tables");


MODULE_INFO(srcversion, "F0CC28CFFA2B0586E68A033");
