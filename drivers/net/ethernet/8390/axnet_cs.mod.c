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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x786cd351, "netdev_notice" },
	{ 0xc5850110, "printk" },
	{ 0x6d495207, "register_netdev" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0xd08cd179, "pcmcia_loop_config" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x66db98ba, "pcmcia_request_io" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf1ffc1b3, "pcmcia_dev_present" },
	{ 0xf163231, "netdev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xe7fbf033, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x6abdbf6e, "pcmcia_write_config_byte" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m016Cc0081f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m018Ac0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc2328f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0303f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0309f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1106f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m8A01cC1ABf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0202f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mFFFFc1090f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa49B020A7pb119CC9FCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb9A12EB6Apc*pdAB9BE5EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0959823BpbAB9BE5EFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa552AB682pbBC3B87E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00FA7BC8pb00E990CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpb78C5F40Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb436768C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb730DF72Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb3ABBD061pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa55632FD5pb66BC2A90pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb233ADAC2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb232019A8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbF91AF609pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9AA79DC3pb40FAD875pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7C2ADD04pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7EF26116pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb2E272058pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa820A67B6pb*pc*pdAB9BE5EF*");

MODULE_INFO(srcversion, "84A0E847BE606439ECFB557");
