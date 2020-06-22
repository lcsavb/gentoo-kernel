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
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0xf5605828, "ata_std_qc_defer" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x3e94505f, "ata_pci_sff_activate_host" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x2e0c31f6, "ata_pci_bmdma_prepare_host" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x760c6597, "ata_bmdma_qc_prep" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2b015283, "ata_bmdma_port_start" },
	{ 0x35268682, "sata_link_hardreset" },
	{ 0xdb6a8d7d, "ata_link_printk" },
	{ 0x5d722623, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2b2c2c0d, "ata_bmdma_post_internal_cmd" },
	{ 0xf81cf98c, "ata_sff_tf_read" },
	{ 0x728c9327, "ata_bmdma_irq_clear" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0x61f1f937, "__ata_ehi_push_desc" },
	{ 0x21ec8074, "ata_qc_get_active" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xde8edf5f, "blk_queue_max_segments" },
	{ 0x371ade7, "blk_queue_segment_boundary" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x451fe15a, "ata_bmdma_qc_issue" },
	{ 0xa9779716, "ata_port_printk" },
	{ 0x52ac3baf, "ata_bmdma_error_handler" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0xaba870fc, "ata_qc_complete_multiple" },
	{ 0x46574b82, "sata_scr_write" },
	{ 0xa6a00858, "sata_scr_read" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0x20e0f79c, "ata_bmdma_port_intr" },
	{ 0xb6bc045, "ata_sff_check_status" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4e08a3f6, "ata_bmdma_stop" },
	{ 0x785e42b2, "ata_dev_printk" },
	{ 0x955fc4cb, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46184064D200FB05A299F6C");
