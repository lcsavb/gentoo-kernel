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
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xa0b353c7, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xffea6bc9, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");
