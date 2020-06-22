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
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1fda8a95, "ata_sff_prereset" },
	{ 0xf10de535, "ioread8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xbc45de19, "ata_dev_pair" },
	{ 0x1381355f, "ata_dev_next" },
	{ 0x4e013ccc, "ata_do_set_mode" },
	{ 0xc5850110, "printk" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00004D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00001275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00005275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007275sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5075159EE6BBCFB173580C");
