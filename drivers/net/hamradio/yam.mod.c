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
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x98001cfc, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6d495207, "register_netdev" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x94f1c453, "ax25_ip_xmit" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x241c1195, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "CD5470A176061871EAC7CBC");
