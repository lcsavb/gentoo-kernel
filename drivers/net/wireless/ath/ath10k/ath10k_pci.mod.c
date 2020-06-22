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
	{ 0x773b4eb4, "ath10k_ce_completed_recv_next_nolock" },
	{ 0xab6f7a56, "ath10k_htt_txrx_compl_task" },
	{ 0x7ca9525b, "ath10k_core_unregister" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77dc7b9f, "ath10k_htt_t2h_msg_handler" },
	{ 0xef180f0a, "pci_release_region" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xd16a25e0, "ath10k_info" },
	{ 0x8571dce6, "ath10k_coredump_new" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x991b8d55, "ath10k_core_register" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xd483fad, "ath10k_ce_init_pipe" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6e7c07a, "ath10k_ce_deinit_pipe" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf28ad2fe, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3116b789, "ath10k_core_destroy" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x22547af4, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x4c50ecff, "__ath10k_ce_rx_num_free_bufs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xef7234cd, "ath10k_core_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x481dbff7, "ath10k_ce_rx_post_buf" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x5e7e091f, "ath10k_ce_enable_interrupts" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x47b7f14b, "ath10k_ce_per_engine_service_any" },
	{ 0x2d780c63, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9cf745c8, "ath10k_ce_completed_send_next" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe1e4b19d, "ath10k_htc_tx_completion_handler" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x9a6714bb, "ath10k_ce_completed_recv_next" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x521243d1, "ath10k_ce_revoke_recv_next" },
	{ 0x6604c301, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x29dc763c, "__ath10k_ce_send_revert" },
	{ 0x5d6545b4, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xa88ac069, "ath10k_ce_rx_update_write_idx" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8a5f944, "ath10k_ce_num_free_src_entries" },
	{ 0xde2b95d6, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0x6124203a, "ath10k_err" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x930e3df7, "ath10k_coredump_get_mem_layout" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe6d2fcde, "ath10k_ce_send" },
	{ 0xb347522b, "ath10k_ce_cancel_send_next" },
	{ 0xacf48c8b, "ath10k_ce_per_engine_service" },
	{ 0xcff44039, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6d5716e3, "ath10k_ce_alloc_pipe" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x444d0405, "ath10k_ce_send_nolock" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xce7eddce, "pcie_capability_write_word" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x207655d3, "pcie_capability_read_word" },
	{ 0x91c60fe0, "ath10k_ce_disable_interrupts" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "375F9AF40EBA2C86A218930");
