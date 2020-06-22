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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x128c3351, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc72c2383, "sas_release_transport" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x71301392, "param_get_int" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x21c6fd0a, "scsi_block_requests" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0xe9d1ff3b, "pci_irq_get_affinity" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x2553c594, "sas_is_tlr_enabled" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd23de523, "pci_stop_and_remove_bus_device_locked" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x3a3ed044, "sas_phy_add" },
	{ 0xf0d612a3, "scsi_unblock_requests" },
	{ 0xf27897db, "sas_disable_tlr" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6d5ae47e, "sas_port_add_phy" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x66817e88, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xf89fe065, "param_set_int" },
	{ 0x6a485c78, "sas_rphy_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x65440e45, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x1a281859, "pv_ops" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xe9ed9f7, "sas_port_delete" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd0bfbde1, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x980d5910, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9afa5ded, "scsi_internal_device_block_nowait" },
	{ 0xa346fd46, "raid_class_release" },
	{ 0xaa98776a, "sas_attach_transport" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x2e76b019, "misc_register" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x9740ed4a, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x588248bd, "sas_read_port_mode_page" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf066f81b, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x768a0f22, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb2cdc084, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x31252c0d, "raid_class_attach" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0xe7275a55, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x90a3f711, "sas_phy_free" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x211e5efc, "pci_disable_link_state" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2c95b86, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9d3e00a7, "device_reprobe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x6b5eeab4, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xfdabf76d, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf4efd64e, "sas_remove_host" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x6acf08bf, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba3f7496, "sas_port_alloc_num" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x72606b64, "scsi_get_vpd_page" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x566257fc, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x15b5cc67, "bsg_job_done" },
	{ 0xdbe9fd07, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdd9c4a32, "pci_release_selected_regions" },
	{ 0x4d73f906, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x867234, "misc_deregister" },
	{ 0x3054f028, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x207655d3, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x48d62551, "param_ops_ullong" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas,raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "07BC4E27C6788735AE33ACA");
