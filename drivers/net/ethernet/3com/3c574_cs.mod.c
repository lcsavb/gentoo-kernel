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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe6c0621, "pcmcia_get_tuple" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0x7210e0de, "pcmcia_request_irq" },
	{ 0x66db98ba, "pcmcia_request_io" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf1ffc1b3, "pcmcia_dev_present" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf163231, "netdev_info" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x786cd351, "netdev_notice" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0101c0574f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0556f*fn00pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "58BEA8886F42EA6B4AAB857");
