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
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xf1ffc1b3, "pcmcia_dev_present" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0x7210e0de, "pcmcia_request_irq" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0x66db98ba, "pcmcia_request_io" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "34A761266B261211BE921B8");
