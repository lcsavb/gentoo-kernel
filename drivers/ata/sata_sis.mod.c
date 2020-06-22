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
	{ 0x2115f76f, "ata_pci_device_resume" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ff8acc0, "sis_info133_for_sata" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37b58a05, "ata_slave_link_init" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x27522eea, "pci_intx" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x2e0c31f6, "ata_pci_bmdma_prepare_host" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pata_sis");

MODULE_ALIAS("pci:v00001039d00000180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000181sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000182sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000183sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00001182sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00001183sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "840EE7441CD384C55B5B873");
