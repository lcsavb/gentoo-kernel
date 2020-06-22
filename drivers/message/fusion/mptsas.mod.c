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
	{ 0xe7b108fe, "mptscsih_slave_destroy" },
	{ 0xab675624, "mptscsih_host_reset" },
	{ 0xe0fbb43f, "mptscsih_dev_reset" },
	{ 0xe0541f8f, "mptscsih_abort" },
	{ 0x23b60f, "mptscsih_info" },
	{ 0xd7ab3046, "mptscsih_resume" },
	{ 0x7126817d, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xc72c2383, "sas_release_transport" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x815cead0, "mpt_reset_register" },
	{ 0x4c441a2a, "mpt_event_register" },
	{ 0xf1c959c5, "mptscsih_scandv_complete" },
	{ 0x58fa83e5, "mptscsih_taskmgmt_complete" },
	{ 0x8e8b6525, "mpt_register" },
	{ 0xa9d62e01, "mptscsih_io_done" },
	{ 0xaa98776a, "sas_attach_transport" },
	{ 0xf1bc0fe4, "mpt_GetIocState" },
	{ 0x717b44ff, "mptscsih_get_scsi_lookup" },
	{ 0xf477c88c, "scsi_track_queue_full" },
	{ 0xbf6f3aa0, "mpt_raid_phys_disk_pg1" },
	{ 0xa7b4aea9, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x1dc470d1, "mpt_findImVolumes" },
	{ 0x1f113a18, "mptbase_sas_persist_operation" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x32ed303b, "mptscsih_flush_running_cmds" },
	{ 0xa0436008, "mpt_attach" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2c95b86, "starget_for_each_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xb934f27c, "scsi_is_sas_rphy" },
	{ 0x9740ed4a, "sas_expander_alloc" },
	{ 0x90a3f711, "sas_phy_free" },
	{ 0xb2cdc084, "sas_port_add" },
	{ 0xba3f7496, "sas_port_alloc_num" },
	{ 0xfdabf76d, "sas_phy_alloc" },
	{ 0xa8b2427, "sas_port_mark_backlink" },
	{ 0x3a3ed044, "sas_phy_add" },
	{ 0x6d5ae47e, "sas_port_add_phy" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x15b5cc67, "bsg_job_done" },
	{ 0xe9ed9f7, "sas_port_delete" },
	{ 0x8c317216, "mpt_detach" },
	{ 0xb9588995, "mptscsih_remove" },
	{ 0xf4efd64e, "sas_remove_host" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x3ac62d63, "mptscsih_slave_configure" },
	{ 0x588248bd, "sas_read_port_mode_page" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xee72cd8a, "mptscsih_ioc_reset" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x2cd3716f, "mptscsih_qcmd" },
	{ 0xbab165bc, "mpt_raid_phys_disk_pg0" },
	{ 0x2109546d, "sas_rphy_free" },
	{ 0x6a485c78, "sas_rphy_add" },
	{ 0xf066f81b, "sas_end_device_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7dfd71ac, "mptscsih_taskmgmt_response_code" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7617ce2, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x47885b59, "mpt_put_msg_frame_hi_pri" },
	{ 0xceac44f4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x6b5eeab4, "scsi_device_set_state" },
	{ 0x9d3e00a7, "device_reprobe" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29361773, "complete" },
	{ 0x3f495a5e, "mpt_Soft_Hard_ResetHandler" },
	{ 0xcb6fa083, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xedc94c86, "mpt_put_msg_frame" },
	{ 0xe71b661d, "mpt_get_msg_frame" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x66817e88, "sas_port_delete_phy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x8692e07f, "mpt_config" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0xa193f96a, "mptscsih_raid_id_to_num" },
	{ 0x808a23ba, "mptscsih_is_phys_disk" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_sas");

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B28ED34A9501F84023B5850");
