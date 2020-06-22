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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb7287a3d, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "295626A50131E9C45175451");
