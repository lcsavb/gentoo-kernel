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
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x955fc4cb, "ata_scsi_change_queue_depth" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xd3300d41, "sata_pmp_port_ops" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x27522eea, "pci_intx" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x30cdd1b6, "pcie_set_readrq" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5605828, "ata_std_qc_defer" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc452769e, "ata_msleep" },
	{ 0x4b3fbdb7, "ata_link_offline" },
	{ 0xc32c1c1f, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0x81482de2, "ata_link_online" },
	{ 0xf2eb1b34, "sata_set_spd" },
	{ 0xdb6a8d7d, "ata_link_printk" },
	{ 0x6e5aab7b, "sata_std_hardreset" },
	{ 0x6f3a4eaa, "sata_pmp_error_handler" },
	{ 0xcd986c, "ata_eh_freeze_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0xfc1a207c, "sata_async_notification" },
	{ 0x55f5c9d3, "ata_link_abort" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0xa9779716, "ata_port_printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x1a281859, "pv_ops" },
	{ 0xaba870fc, "ata_qc_complete_multiple" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7ac4717c, "ata_wait_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4DCD523AFA702A637F2DB4E");
