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
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0xd34a1256, "ata_pci_bmdma_init_one" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x1fda8a95, "ata_sff_prereset" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d7ebe5c, "ata_cable_40wire" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x29025833, "pci_test_config_bits" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00005513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00001180sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8C5CE64D3A42EF2C4319C02");
