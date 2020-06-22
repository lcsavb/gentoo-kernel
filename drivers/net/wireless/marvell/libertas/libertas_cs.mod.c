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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x19f204a7, "lbs_stop_card" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x66db98ba, "pcmcia_request_io" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xbc8047d1, "lbs_start_card" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x12a1ca49, "lbs_queue_event" },
	{ 0x9d18f7d6, "lbs_get_firmware_async" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd08cd179, "pcmcia_loop_config" },
	{ 0x80fea394, "lbs_remove_card" },
	{ 0x3a117b68, "lbs_process_rxed_packet" },
	{ 0xcc580c56, "lbs_host_to_card_done" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x848d372e, "iowrite8" },
	{ 0x50bb222, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfc11f247, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "pcmcia,libertas");

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "EDDF6D269978A30118DF4A1");
