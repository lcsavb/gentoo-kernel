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
	{ 0x5a8a585d, "mptscsih_host_attrs" },
	{ 0xa4d02eb, "mptscsih_show_info" },
	{ 0xe1b33d43, "mptscsih_bios_param" },
	{ 0x12b20450, "mptscsih_change_queue_depth" },
	{ 0xab675624, "mptscsih_host_reset" },
	{ 0x8424159, "mptscsih_bus_reset" },
	{ 0xe0fbb43f, "mptscsih_dev_reset" },
	{ 0xe0541f8f, "mptscsih_abort" },
	{ 0x23b60f, "mptscsih_info" },
	{ 0x3c1a0236, "mptscsih_shutdown" },
	{ 0x7126817d, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x2f67abea, "spi_release_transport" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x815cead0, "mpt_reset_register" },
	{ 0x4c441a2a, "mpt_event_register" },
	{ 0xf1c959c5, "mptscsih_scandv_complete" },
	{ 0x58fa83e5, "mptscsih_taskmgmt_complete" },
	{ 0x8e8b6525, "mpt_register" },
	{ 0xa9d62e01, "mptscsih_io_done" },
	{ 0xc5bf69e0, "spi_attach_transport" },
	{ 0x79c12439, "mptscsih_IssueTaskMgmt" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xa0436008, "mpt_attach" },
	{ 0xa193f96a, "mptscsih_raid_id_to_num" },
	{ 0xe7b108fe, "mptscsih_slave_destroy" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x1e041ba0, "scsi_device_lookup_by_target" },
	{ 0xee72cd8a, "mptscsih_ioc_reset" },
	{ 0x3ac62d63, "mptscsih_slave_configure" },
	{ 0xe19a8bb5, "scsi_scan_target" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0x1dc470d1, "mpt_findImVolumes" },
	{ 0xf009edf8, "spi_display_xfer_agreement" },
	{ 0x1f89f041, "spi_dv_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x8692e07f, "mpt_config" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xa9591582, "mptscsih_event_process" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x2cd3716f, "mptscsih_qcmd" },
	{ 0x808a23ba, "mptscsih_is_phys_disk" },
	{ 0xb9588995, "mptscsih_remove" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xd7ab3046, "mptscsih_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xcb6fa083, "mpt_free_msg_frame" },
	{ 0xd36e0a68, "mpt_HardResetHandler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xedc94c86, "mpt_put_msg_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe71b661d, "mpt_get_msg_frame" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA585F517EE6F59C8BD3064");
