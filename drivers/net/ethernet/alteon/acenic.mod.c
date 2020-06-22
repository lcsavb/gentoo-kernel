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
	{ 0xece85da4, "param_array_ops" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6d495207, "register_netdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xfb578fc5, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x1a281859, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc5850110, "printk" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "9403E74318F8CF10F4CD8D0");
