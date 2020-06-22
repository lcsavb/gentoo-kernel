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
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0x4d7ebe5c, "ata_cable_40wire" },
	{ 0x2115f76f, "ata_pci_device_resume" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x4e08a3f6, "ata_bmdma_stop" },
	{ 0xe6302de0, "ata_pio_need_iordy" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x2b015283, "ata_bmdma_port_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x2e01c6f9, "ata_bmdma_start" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd34a1256, "ata_pci_bmdma_init_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00004D33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D30sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D213AEA4490D4AD1D1EADA1");
