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
	{ 0x6d1ee27e, "mt76x02_remove_interface" },
	{ 0xac23edfe, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xfda3d1da, "mt76x2_phy_set_txpower" },
	{ 0xebd9bd40, "mt76x2_phy_set_txpower_regs" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x170436c, "mt76x2_read_rx_gain" },
	{ 0x863032cd, "__mt76_poll" },
	{ 0x7b1f827, "mt76x02_mac_wcid_setup" },
	{ 0x29dc9d71, "mt76x2_get_temp_comp" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x6f6b2200, "mt76_sw_scan" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x391e9757, "mt76x02_mcu_function_select" },
	{ 0x2a7a9326, "mt76x02_conf_tx" },
	{ 0xd276b85b, "mt76x02_mcu_calibrate" },
	{ 0x4667f800, "mt76x02_ampdu_action" },
	{ 0xeecc2fd0, "mt76x02_mcu_cleanup" },
	{ 0x42e9baf7, "mt76x02_tx_prepare_skb" },
	{ 0x3dafa235, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x13119a41, "mt76x02_dfs_init_params" },
	{ 0xcf379e6f, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x88cebfcc, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd7e03ae1, "mt76x2_phy_update_channel_gain" },
	{ 0x73caae97, "mt76x02_init_agc_gain" },
	{ 0x48cba9c, "mt76x02_bss_info_changed" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xbc0754d5, "mt76x2_phy_tssi_compensate" },
	{ 0xe7b3f2d4, "mt76x02_mcu_msg_send" },
	{ 0x448f4cb0, "mt76_sta_state" },
	{ 0xa742c70b, "mt76x02_tx_complete_skb" },
	{ 0x87f47071, "mt76x02_set_rts_threshold" },
	{ 0xa4c915de, "mt76x2_mcu_init_gain" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x112e5060, "mt76_get_survey" },
	{ 0xd444a266, "mt76x02_init_debugfs" },
	{ 0x594d5e25, "mt76x2_init_txpower" },
	{ 0xb0202c5, "mt76x2_mcu_load_cr" },
	{ 0x29460ad7, "mt76_unregister_device" },
	{ 0x262bbadf, "mt76x02_sta_add" },
	{ 0x4c203b97, "mt76x2_eeprom_init" },
	{ 0x27a5e2fc, "mt76x02_edcca_init" },
	{ 0xa658206b, "mt76x02_sta_remove" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0xa4c38871, "mt76_mmio_init" },
	{ 0x941bb2f7, "mt76x02_tx" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0x5504f26f, "mt76x02_init_device" },
	{ 0x63019a6a, "mt76_set_channel" },
	{ 0xece1d18e, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x4f041f53, "mt76x02_phy_set_bw" },
	{ 0xa00e91b7, "mt76x02_sw_scan_complete" },
	{ 0x50e02eaa, "mt76_set_tim" },
	{ 0xff0a348e, "mt76_register_device" },
	{ 0x4af5c5d9, "mt76x02_mac_setaddr" },
	{ 0x8fa1c970, "mt76x02_rx_poll_complete" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xa4b07b27, "mt76x02_queue_rx_skb" },
	{ 0x562d876a, "mt76_free_device" },
	{ 0xda67f857, "mt76x02_configure_filter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xda1525f6, "mt76_pci_disable_aspm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x73a9f764, "mt76x2_configure_tx_delay" },
	{ 0x7fac48f0, "mt76x02_update_channel" },
	{ 0x9462e55a, "mt76x02_set_tx_ackto" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7c30b62, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x42264606, "mt76x02_set_coverage_class" },
	{ 0x62ca0bdc, "mt76x02_ext_pa_enabled" },
	{ 0x44d295dc, "mt76x02_mac_shared_key_setup" },
	{ 0x5e831987, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x29829b98, "mt76x02_sta_rate_tbl_update" },
	{ 0x6c71e480, "mt76x02_dma_cleanup" },
	{ 0x94fc618, "mt76x02_sta_ps" },
	{ 0xb48f0b00, "mt76x2_apply_gain_adj" },
	{ 0x5a90140d, "mt76_set_stream_caps" },
	{ 0x24a63e2d, "mt76x02e_init_beacon_config" },
	{ 0xcf67bf46, "mt76_wake_tx_queue" },
	{ 0x2b39ad43, "mt76x02_mcu_set_radio_state" },
	{ 0x7562b930, "mt76x02_dma_disable" },
	{ 0xdcf69904, "mt76x2_mcu_set_channel" },
	{ 0x674da777, "mt76x2_reset_wlan" },
	{ 0xda1c86c, "mt76_write_mac_initvals" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc8b88e09, "mt76_get_txpower" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb400637e, "mt76_release_buffered_frames" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x7a2d6a65, "mt76x02_set_key" },
	{ 0x940d733b, "mt76x02_tx_set_txpwr_auto" },
	{ 0xd56985c, "mt76x02_set_ethtool_fwver" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x245db3ea, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74286626530837B22A3A2B5");
