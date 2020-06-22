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
	{ 0x127d8363, "rtl_cam_delete_one_entry" },
	{ 0x1558325c, "rtl_fw_cb" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x88b9bfa4, "rtl_pci_probe" },
	{ 0x97279693, "rtl_cam_get_free_entry" },
	{ 0x7a5d0b5, "rtl92c_phy_set_rfpath_switch" },
	{ 0x34eaeb11, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xc5008eac, "rtl92c_phy_set_txpower_level" },
	{ 0xf8846d25, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x25c015a5, "rtl92c_dm_check_txpower_tracking" },
	{ 0xcb36f5b5, "rtl_ps_disable_nic" },
	{ 0xdd9b665d, "rtl92c_dm_watchdog" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8c015085, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0xf0376edd, "_rtl92c_phy_rf_serial_write" },
	{ 0xdc7f3c77, "rtl_get_tcb_desc" },
	{ 0xc38179cb, "_rtl92c_phy_rf_serial_read" },
	{ 0x49eb13ff, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x806f37f2, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x2c97332c, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd008ff4e, "rtl_phy_scan_operation_backup" },
	{ 0xc75ef963, "rtl92c_dm_init_edca_turbo" },
	{ 0xfa8f5bd7, "rtl92c_phy_iq_calibrate" },
	{ 0x359302ad, "rtl92c_dm_init" },
	{ 0x2dff934a, "rtl92c_phy_set_bb_reg" },
	{ 0xe1ed213, "rtl_pci_resume" },
	{ 0xc97a11ab, "rtl_ps_enable_nic" },
	{ 0x928fb437, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfd5ff44d, "rtl92c_firmware_selfreset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xb8074a4a, "rtl92c_dm_rf_saving" },
	{ 0x1bb316e3, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xe8b9342b, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0x38aee633, "rtl_pci_suspend" },
	{ 0xe38f6cb, "rtlwifi_rate_mapping" },
	{ 0xcf381517, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcfdfd7c9, "rtl92c_download_fw" },
	{ 0x54eaa314, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1f99adee, "rtl_rfreg_delay" },
	{ 0xcc65be64, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0xe0d9871f, "rtl92c_phy_set_io_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x41b53f9b, "rtl_cam_mark_invalid" },
	{ 0x852c8f5d, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xea1c668e, "rtl_cam_del_entry" },
	{ 0x260cb446, "rtl92c_set_p2p_ps_offload_cmd" },
	{ 0x74e91674, "rtl_cam_empty_entry" },
	{ 0x86e6b45, "rtl92ce_phy_set_rf_on" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x7232163b, "rtl92c_phy_query_bb_reg" },
	{ 0xc2d63dec, "rtl_cam_reset_all_entry" },
	{ 0x96a0f71f, "rtl_process_phyinfo" },
	{ 0x198e560d, "efuse_read_1byte" },
	{ 0x91b323b4, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x3463c318, "rtl92c_fill_h2c_cmd" },
	{ 0xf2b12e32, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x48d62551, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,rtl8192c-common,mac80211");

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0C27FAE4DAE18E802DA24E");
