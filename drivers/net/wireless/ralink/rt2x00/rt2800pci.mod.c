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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xaef89d5e, "rt2x00mac_tx_frames_pending" },
	{ 0x7fb9560b, "rt2x00mac_get_ringparam" },
	{ 0xd92ccb80, "rt2x00mac_flush" },
	{ 0x18a73dda, "rt2x00mac_rfkill_poll" },
	{ 0x21724c04, "rt2800_get_survey" },
	{ 0x4169ab0d, "rt2800_ampdu_action" },
	{ 0xb0e43b9, "rt2800_get_tsf" },
	{ 0x195d9d43, "rt2800_conf_tx" },
	{ 0x2504ce4a, "rt2800_sta_remove" },
	{ 0xb8ff6a7a, "rt2800_sta_add" },
	{ 0xa8ccf36b, "rt2800_set_rts_threshold" },
	{ 0x6ae5ee79, "rt2800_get_key_seq" },
	{ 0x2f06e9b5, "rt2x00mac_get_stats" },
	{ 0x1bf10b7f, "rt2x00mac_sw_scan_complete" },
	{ 0x557f871a, "rt2x00mac_sw_scan_start" },
	{ 0x9cf7c88b, "rt2x00mac_set_key" },
	{ 0xef9fa45f, "rt2x00mac_configure_filter" },
	{ 0x3abee6d, "rt2x00mac_bss_info_changed" },
	{ 0x4fe3a2d1, "rt2x00mac_config" },
	{ 0xd6e178b6, "rt2x00mac_remove_interface" },
	{ 0x64b96889, "rt2x00mac_add_interface" },
	{ 0x9ae03312, "rt2x00mac_stop" },
	{ 0x61b82900, "rt2x00mac_start" },
	{ 0xd3e5afb8, "rt2x00mac_tx" },
	{ 0x3430d9f1, "rt2800mmio_get_dma_done" },
	{ 0x61845186, "rt2800mmio_get_txwi" },
	{ 0xe8ccb555, "rt2800mmio_init_registers" },
	{ 0xb3ff6d1c, "rt2x00mmio_regbusy_read" },
	{ 0x43bcb25, "rt2800_pre_reset_hw" },
	{ 0xaa99716, "rt2800_config" },
	{ 0xec16c5fa, "rt2800_config_ant" },
	{ 0x83794c88, "rt2800_config_erp" },
	{ 0x78265597, "rt2800_config_intf" },
	{ 0xecb6ede9, "rt2800_config_filter" },
	{ 0xd3c4a29f, "rt2800_config_pairwise_key" },
	{ 0x348bde49, "rt2800_config_shared_key" },
	{ 0xd60ac1e1, "rt2800mmio_fill_rxdone" },
	{ 0xc1b830cb, "rt2800_clear_beacon" },
	{ 0xc7182d5e, "rt2800_write_beacon" },
	{ 0xcd25a707, "rt2800_write_tx_data" },
	{ 0xa779788b, "rt2800mmio_write_tx_desc" },
	{ 0xa9dda0c8, "rt2800mmio_flush_queue" },
	{ 0x75810d2b, "rt2800mmio_stop_queue" },
	{ 0x382a9eaa, "rt2800mmio_kick_queue" },
	{ 0xaa44032b, "rt2800mmio_start_queue" },
	{ 0x64652356, "rt2800_watchdog" },
	{ 0xf89b4317, "rt2800_vco_calibration" },
	{ 0xdd9f910e, "rt2800_gain_calibration" },
	{ 0xda9d5628, "rt2800_link_tuner" },
	{ 0xef6287e, "rt2800_reset_tuner" },
	{ 0x5d31348b, "rt2800_link_stats" },
	{ 0xd8f08dbf, "rt2800_rfkill_poll" },
	{ 0xb45a868e, "rt2800mmio_clear_entry" },
	{ 0x8dd84741, "rt2800mmio_get_entry_state" },
	{ 0xb8633160, "rt2x00mmio_uninitialize" },
	{ 0xe85b7198, "rt2x00mmio_initialize" },
	{ 0xd52d0491, "rt2800_load_firmware" },
	{ 0xcbe5653b, "rt2800_check_firmware" },
	{ 0xea7eafed, "rt2800mmio_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0x219a3ced, "rt2800_rt2x00debug" },
	{ 0x183a2d3a, "rt2800mmio_queue_init" },
	{ 0xebab3aff, "rt2x00pci_resume" },
	{ 0xbbea8551, "rt2x00pci_suspend" },
	{ 0x7f00abfa, "rt2x00pci_remove" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xd276ace7, "rt2800mmio_toggle_irq" },
	{ 0x63f985d1, "rt2800mmio_enable_radio" },
	{ 0x1fe926d1, "rt2800_mcu_request" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xf27af98a, "rt2800_read_eeprom_efuse" },
	{ 0xc48e40fd, "rt2800_efuse_detect" },
	{ 0x1f9a0368, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F308CBBB92C7269AB6539DE");
