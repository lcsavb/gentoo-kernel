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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x9b0f7400, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x9ff35e4d, "mt76x02_phy_set_txdac" },
	{ 0x863032cd, "__mt76_poll" },
	{ 0x7b1f827, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xc7cbae1b, "mt76x02_phy_set_txpower" },
	{ 0x391e9757, "mt76x02_mcu_function_select" },
	{ 0xd276b85b, "mt76x02_mcu_calibrate" },
	{ 0xf4a350a0, "mt76x02_eeprom_copy" },
	{ 0x3dafa235, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x13119a41, "mt76x02_dfs_init_params" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x88cebfcc, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x73caae97, "mt76x02_init_agc_gain" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0x17475388, "_dev_warn" },
	{ 0xd444a266, "mt76x02_init_debugfs" },
	{ 0x3234fb65, "mt76x02_get_lna_gain" },
	{ 0x27a5e2fc, "mt76x02_edcca_init" },
	{ 0x694f03f1, "mt76x02_phy_set_rxpath" },
	{ 0xa930d541, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0x5504f26f, "mt76x02_init_device" },
	{ 0x63019a6a, "mt76_set_channel" },
	{ 0xece1d18e, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f041f53, "mt76x02_phy_set_bw" },
	{ 0xff0a348e, "mt76_register_device" },
	{ 0x4af5c5d9, "mt76x02_mac_setaddr" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x34a2c43, "mt76_eeprom_init" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x98ee2e6b, "mt76x02_get_rx_gain" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cbabd68, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x62ca0bdc, "mt76x02_ext_pa_enabled" },
	{ 0x44d295dc, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x164984b7, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x21dc8283, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
