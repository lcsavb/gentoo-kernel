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
	{ 0x384b40d9, "ahci_sdev_attrs" },
	{ 0x500809c8, "ahci_shost_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x955fc4cb, "ata_scsi_change_queue_depth" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0x97c99936, "ahci_ops" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x67ee06a0, "ahci_fill_cmd_slot" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xc5850110, "printk" },
	{ 0xbfc65096, "pcim_pin_device" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x51c5871e, "ahci_host_activate" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfb511a85, "ahci_print_info" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x5ddd724a, "ata_dummy_port_ops" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0x500e289c, "ahci_set_em_messages" },
	{ 0x20fb0c18, "ahci_save_initial_config" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xcdeaf9cd, "pcim_iomap_regions_request_all" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc95d4a5a, "ahci_port_resume" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0xc2660b, "ahci_init_controller" },
	{ 0xe38aa59d, "ahci_reset_controller" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "15DB045D75A82379D45DAE1");
