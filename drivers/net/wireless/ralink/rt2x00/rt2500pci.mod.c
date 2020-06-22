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
	{ 0xaef89d5e, "rt2x00mac_tx_frames_pending" },
	{ 0x7fb9560b, "rt2x00mac_get_ringparam" },
	{ 0xb628e355, "rt2x00mac_get_antenna" },
	{ 0xcb0e54ca, "rt2x00mac_set_antenna" },
	{ 0xd92ccb80, "rt2x00mac_flush" },
	{ 0x18a73dda, "rt2x00mac_rfkill_poll" },
	{ 0xed7e8ae5, "rt2x00mac_conf_tx" },
	{ 0x2f06e9b5, "rt2x00mac_get_stats" },
	{ 0x1bf10b7f, "rt2x00mac_sw_scan_complete" },
	{ 0x557f871a, "rt2x00mac_sw_scan_start" },
	{ 0xef9fa45f, "rt2x00mac_configure_filter" },
	{ 0x3abee6d, "rt2x00mac_bss_info_changed" },
	{ 0x4fe3a2d1, "rt2x00mac_config" },
	{ 0xd6e178b6, "rt2x00mac_remove_interface" },
	{ 0x64b96889, "rt2x00mac_add_interface" },
	{ 0x9ae03312, "rt2x00mac_stop" },
	{ 0x61b82900, "rt2x00mac_start" },
	{ 0xd3e5afb8, "rt2x00mac_tx" },
	{ 0x4cb657da, "rt2x00mmio_flush_queue" },
	{ 0xb8633160, "rt2x00mmio_uninitialize" },
	{ 0xe85b7198, "rt2x00mmio_initialize" },
	{ 0xebab3aff, "rt2x00pci_resume" },
	{ 0xbbea8551, "rt2x00pci_suspend" },
	{ 0x7f00abfa, "rt2x00pci_remove" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd1f43da5, "rt2x00lib_beacondone" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9146eb8c, "rt2x00mmio_rxdone" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4f310de, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6485be2c, "rt2x00queue_get_entry" },
	{ 0xed2ed381, "rt2x00lib_txdone" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x379378ea, "rt2x00debug_dump_frame" },
	{ 0xbc5e18b5, "rt2x00queue_map_txskb" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb3ff6d1c, "rt2x00mmio_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f9a0368, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5522D4C1D7BF498F42E7DE6");
