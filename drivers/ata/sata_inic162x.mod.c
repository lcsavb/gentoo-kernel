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
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xb44bb37d, "sata_port_ops" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0x5de909dc, "_dev_alert" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdb6a8d7d, "ata_link_printk" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xa2a43110, "ata_wait_after_reset" },
	{ 0x81482de2, "ata_link_online" },
	{ 0x5d722623, "sata_link_resume" },
	{ 0xc452769e, "ata_msleep" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xb4841c1a, "ata_std_error_handler" },
	{ 0x61f1f937, "__ata_ehi_push_desc" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0xa9779716, "ata_port_printk" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x62c6434, "ata_qc_complete" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6A9EB4F6804735C7981064");
