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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xdcec8ed8, "ata_common_sdev_attrs" },
	{ 0x24278e0, "ata_scsi_unlock_native_capacity" },
	{ 0x9528cbc, "ata_std_bios_param" },
	{ 0x955fc4cb, "ata_scsi_change_queue_depth" },
	{ 0x2e1c8a07, "ata_scsi_slave_destroy" },
	{ 0xb6912784, "ata_scsi_slave_config" },
	{ 0x3dc19f15, "ata_scsi_queuecmd" },
	{ 0x23363c4a, "ata_scsi_ioctl" },
	{ 0x5632543a, "ata_sff_port_ops" },
	{ 0xe7d02fb0, "ata_bmdma_port_ops" },
	{ 0xef5d89f3, "ata_pci_device_suspend" },
	{ 0x4d6157fe, "ata_pci_remove_one" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x35268682, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xdb6a8d7d, "ata_link_printk" },
	{ 0xb861b7b6, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x451fe15a, "ata_bmdma_qc_issue" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0xfc1a207c, "sata_async_notification" },
	{ 0x4b3fbdb7, "ata_link_offline" },
	{ 0x20e0f79c, "ata_bmdma_port_intr" },
	{ 0x539d0904, "sata_scr_write_flush" },
	{ 0xa6a00858, "sata_scr_read" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x55f5c9d3, "ata_link_abort" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa9779716, "ata_port_printk" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x815588a6, "clk_enable" },
	{ 0x279b3dbc, "phy_power_on" },
	{ 0x5da971d6, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x572c9830, "clk_get" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xbfc65096, "pcim_pin_device" },
	{ 0xf9d9c681, "ata_print_version" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xb1acb0da, "ata_port_pbar_desc" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf80068a1, "ata_host_alloc_pinfo" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x1cc8040c, "ata_sff_softreset" },
	{ 0x6e5aab7b, "sata_std_hardreset" },
	{ 0x2c371b00, "ata_pci_device_do_resume" },
	{ 0x71d775b5, "dmam_pool_create" },
	{ 0x785e42b2, "ata_dev_printk" },
	{ 0x6f3a4eaa, "sata_pmp_error_handler" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0xd6c80609, "ata_eh_analyze_ncq_error" },
	{ 0xcc32c1e7, "ata_sff_dma_pause" },
	{ 0xf10de535, "ioread8" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaba870fc, "ata_qc_complete_multiple" },
	{ 0x21ec8074, "ata_qc_get_active" },
	{ 0xe68fefc0, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc051fb8b, "ata_host_detach" },
	{ 0x50ecfaf4, "ata_host_suspend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fb1bd08, "ata_host_resume" },
	{ 0xc5850110, "printk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE023A9DF590CFA741594B1");
