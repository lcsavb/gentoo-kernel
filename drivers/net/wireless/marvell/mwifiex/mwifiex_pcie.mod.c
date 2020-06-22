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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xef180f0a, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xdfa76b2e, "mwifiex_cancel_hs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x86d9214f, "mwifiex_disable_auto_ds" },
	{ 0xa7070c4a, "pci_try_reset_function" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xbcbd0b60, "mwifiex_write_data_complete" },
	{ 0xcfa9c1a8, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd558dcd1, "mwifiex_queue_main_work" },
	{ 0xd3754698, "mwifiex_prepare_fw_dump_info" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5e585a5d, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf53ab1b1, "mwifiex_add_card" },
	{ 0xf10de535, "ioread8" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x629c75a6, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x398e6a6, "mwifiex_reinit_sw" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x302f9ccf, "mwifiex_handle_rx_packet" },
	{ 0x1fecd6a5, "mwifiex_deauthenticate_all" },
	{ 0xebdbf629, "mwifiex_remove_card" },
	{ 0x12b1830a, "mwifiex_enable_hs" },
	{ 0x830d2069, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xed46bcd4, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xde38cd2d, "mwifiex_init_shutdown_fw" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3170075150C37754862FC72");
