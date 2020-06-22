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
	{ 0x3a800736, "ieee80211_rx_irqsafe" },
	{ 0x22edc7f5, "rtw_fw_c2h_cmd_rx_irqsafe" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xbb5ca481, "rtw_ops" },
	{ 0xaf1c91c7, "rtw_core_deinit" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x29811563, "rtw_register_hw" },
	{ 0x487f7b17, "rtw8822b_hw_spec" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0xaaf7c448, "rtw_rx_stats" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x2fafc4ce, "ieee80211_stop_queue" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2147ac3f, "rtw_core_init" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x6312e1c6, "rtw_tx_fill_tx_desc" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x56c633df, "rtw_unregister_hw" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x8eb2fa8f, "rtw_chip_info_setup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa7bd1029, "rtw8822c_hw_spec" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8686fcfa, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaf49195e, "ieee80211_wake_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x60303032, "rtw_tx_report_enqueue" },
};

MODULE_INFO(depends, "mac80211,rtw88");

MODULE_ALIAS("pci:v000010ECd0000B822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C822sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F188C6307378DBF909A551A");
