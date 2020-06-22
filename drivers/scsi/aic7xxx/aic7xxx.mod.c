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
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1e041ba0, "scsi_device_lookup_by_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x1f89f041, "spi_dv_device" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x21c6fd0a, "scsi_block_requests" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xf0d612a3, "scsi_unblock_requests" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xd517f601, "seq_puts" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc5bf69e0, "spi_attach_transport" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x980d5910, "dma_get_required_mask" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2f67abea, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf009edf8, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x62a2a42, "scsi_report_bus_reset" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x90966e04, "scsi_report_device_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00009004d00005078sv00009004sd00007850bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv00009004sd00003869bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006075sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00002178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006038sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008878sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008778sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00000078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd00000181bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd00002180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000E100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd00000003bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00000E11sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd000062A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd00006220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv00009005sd000062A1bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007891bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007892bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007894bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007890sv00009004sd00007893bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000F500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000B500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00009005sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00000E11sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000052sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000054sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000055sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000056sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000057sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000058sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000059sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C1sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C2sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C4sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C5sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C6sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C7sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C8sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C9sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CAsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CBsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CCsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CDsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CEsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CFsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00001078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007815sv*sd*bc01sc00i*");

MODULE_INFO(srcversion, "A4806715763AC5C8D1FD898");
