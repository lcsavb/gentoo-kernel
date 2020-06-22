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
	{ 0x5632543a, "ata_sff_port_ops" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0x3489c20f, "ata_sff_qc_issue" },
	{ 0x1fda8a95, "ata_sff_prereset" },
	{ 0xc5850110, "printk" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x1a281859, "pv_ops" },
	{ 0x62c6434, "ata_qc_complete" },
	{ 0xb6bc045, "ata_sff_check_status" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015E9d00001841sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "145FF154F35A2D160CB6A90");
