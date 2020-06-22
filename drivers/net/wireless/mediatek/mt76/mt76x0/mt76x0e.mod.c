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
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x863032cd, "__mt76_poll" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x6f6b2200, "mt76_sw_scan" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x2a7a9326, "mt76x02_conf_tx" },
	{ 0x4667f800, "mt76x02_ampdu_action" },
	{ 0xeecc2fd0, "mt76x02_mcu_cleanup" },
	{ 0x42e9baf7, "mt76x02_tx_prepare_skb" },
	{ 0xcf379e6f, "mt76x02_add_interface" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x48cba9c, "mt76x02_bss_info_changed" },
	{ 0x3189446e, "mt76x0_init_hardware" },
	{ 0xe7b3f2d4, "mt76x02_mcu_msg_send" },
	{ 0x448f4cb0, "mt76_sta_state" },
	{ 0xa742c70b, "mt76x02_tx_complete_skb" },
	{ 0x87f47071, "mt76x02_set_rts_threshold" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x112e5060, "mt76_get_survey" },
	{ 0x3d79100d, "mt76x0_mac_stop" },
	{ 0x29460ad7, "mt76_unregister_device" },
	{ 0x262bbadf, "mt76x02_sta_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa658206b, "mt76x02_sta_remove" },
	{ 0xa4c38871, "mt76_mmio_init" },
	{ 0x941bb2f7, "mt76x02_tx" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0xa00e91b7, "mt76x02_sw_scan_complete" },
	{ 0x50e02eaa, "mt76_set_tim" },
	{ 0x3d43dcce, "mt76x0_phy_calibrate" },
	{ 0x8fa1c970, "mt76x02_rx_poll_complete" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd2caa1e1, "mt76x0_register_device" },
	{ 0xf5179e52, "mt76x0_config" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xa4b07b27, "mt76x02_queue_rx_skb" },
	{ 0xff6d3a1b, "mt76x0_chip_onoff" },
	{ 0x562d876a, "mt76_free_device" },
	{ 0xda67f857, "mt76x02_configure_filter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7fac48f0, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x42264606, "mt76x02_set_coverage_class" },
	{ 0x5e831987, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6c71e480, "mt76x02_dma_cleanup" },
	{ 0x29829b98, "mt76x02_sta_rate_tbl_update" },
	{ 0x94fc618, "mt76x02_sta_ps" },
	{ 0x24a63e2d, "mt76x02e_init_beacon_config" },
	{ 0xcf67bf46, "mt76_wake_tx_queue" },
	{ 0x7562b930, "mt76x02_dma_disable" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc8b88e09, "mt76_get_txpower" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb400637e, "mt76_release_buffered_frames" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x7a2d6a65, "mt76x02_set_key" },
	{ 0xd56985c, "mt76x02_set_ethtool_fwver" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x245db3ea, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76x0-common,mac80211");

MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D62B9C57FFA9D3B3E4ABA9F");
