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
	{ 0x7efaf639, "ata_cable_unknown" },
	{ 0x4d7ebe5c, "ata_cable_40wire" },
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0x98cf352f, "ata_bmdma_dumb_qc_prep" },
	{ 0x760c6597, "ata_bmdma_qc_prep" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x3ada574b, "ata_dummy_port_info" },
	{ 0xd34a1256, "ata_pci_bmdma_init_one" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xc5850110, "printk" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xc859d627, "ata_pci_bmdma_clear_simplex" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001166d00000211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000213sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000214sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9C77F32CA8F16265A883281");
