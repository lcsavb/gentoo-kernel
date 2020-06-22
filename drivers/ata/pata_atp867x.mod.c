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
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xfeeecb5e, "ata_port_desc" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xbfc65096, "pcim_pin_device" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x7404045e, "ata_timing_compute" },
	{ 0xbc45de19, "ata_dev_pair" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001191d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "14E060AE28089C0089F13A4");
