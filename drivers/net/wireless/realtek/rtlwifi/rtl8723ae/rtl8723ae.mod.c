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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3df3ecd4, "rtl8723_phy_reload_adda_registers" },
	{ 0x88b9bfa4, "rtl_pci_probe" },
	{ 0x97279693, "rtl_cam_get_free_entry" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x9e9fdf28, "rtl_dm_diginit" },
	{ 0xcb36f5b5, "rtl_ps_disable_nic" },
	{ 0x2da92735, "rtl_btc_get_ops_pointer" },
	{ 0xa3bc5c95, "rtl_hal_pwrseqcmdparsing" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb427fa33, "rtl8723_download_fw" },
	{ 0xdc7f3c77, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
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
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x8c95da7b, "rtl8723_dm_init_dynamic_txpower" },
	{ 0xe1ed213, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8a2aa7cb, "rtl8723_phy_reload_mac_registers" },
	{ 0xc97a11ab, "rtl_ps_enable_nic" },
	{ 0x928fb437, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4990bd3f, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x897acf21, "rtl8723_phy_rf_serial_read" },
	{ 0x2c21aed5, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x284cfeb6, "rtl_signal_scale_mapping" },
	{ 0xcd63f79c, "rtl8723_phy_mac_setting_calibration" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0x1861705e, "rtl8723ae_firmware_selfreset" },
	{ 0x171bfc34, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0xbaa55b2c, "rtl8723_dm_init_edca_turbo" },
	{ 0x38aee633, "rtl_pci_suspend" },
	{ 0xe38f6cb, "rtlwifi_rate_mapping" },
	{ 0xbf4ef377, "rtl8723_phy_pi_mode_switch" },
	{ 0x302407be, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x54eaa314, "rtl_pci_disconnect" },
	{ 0x998c0809, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa41be84f, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x40e09ae4, "rtl8723_phy_txpwr_idx_to_dbm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcf5347f9, "rtl8723_phy_save_mac_registers" },
	{ 0x41b53f9b, "rtl_cam_mark_invalid" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea1c668e, "rtl_cam_del_entry" },
	{ 0x74e91674, "rtl_cam_empty_entry" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc2d63dec, "rtl_cam_reset_all_entry" },
	{ 0xb18cb263, "rtl8723_phy_path_adda_on" },
	{ 0x96a0f71f, "rtl_process_phyinfo" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xa84548f6, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0x198e560d, "efuse_read_1byte" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x49335e0a, "rtl8723_phy_set_bb_reg" },
	{ 0x48d62551, "param_ops_ullong" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

MODULE_INFO(depends, "rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd00008723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6828B67B4471E494CE27C12");
