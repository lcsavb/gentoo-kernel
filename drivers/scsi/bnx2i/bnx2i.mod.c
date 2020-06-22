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
	{ 0x6084a7f, "iscsi_offload_mesg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xf32e8d81, "iscsi_host_remove" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x46325eb8, "__iscsi_put_task" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x6d22abc7, "iscsi_queuecommand" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x13f4d4f3, "iscsi_conn_stop" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x31d430cc, "iscsi_eh_recover_target" },
	{ 0xadc7b5e2, "iscsi_unregister_transport" },
	{ 0xbe3496f3, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe0e57a59, "iscsi_host_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12c401b5, "iscsi_host_alloc" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xab9c173c, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x3fcf03b9, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x54f95d31, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9d0d1ea5, "iscsi_conn_send_pdu" },
	{ 0x6c076856, "iscsi_session_get_param" },
	{ 0x71d694b8, "iscsi_conn_teardown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xffe85b6a, "iscsi_host_free" },
	{ 0xfd637d13, "iscsi_conn_get_param" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x8c2a2b4f, "blk_mq_rq_cpu" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x636af174, "cnic_unregister_driver" },
	{ 0xb5226890, "iscsi_destroy_endpoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbd048300, "flush_signals" },
	{ 0xdf1dd849, "iscsi_set_param" },
	{ 0x840189d8, "iscsi_session_failure" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xe7010b3b, "cnic_register_driver" },
	{ 0x3914eecf, "iscsi_register_transport" },
	{ 0x27692bd5, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b69d1a3, "iscsi_conn_failure" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x572cc80c, "iscsi_eh_cmd_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc309f69c, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x2b84e672, "iscsi_create_endpoint" },
	{ 0xeeea6452, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x58d6e949, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x207c79eb, "iscsi_host_get_param" },
	{ 0x7f74d826, "iscsi_conn_bind" },
	{ 0xe8a7d617, "__iscsi_complete_pdu" },
	{ 0x6f6026eb, "iscsi_target_alloc" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd0870b8c, "iscsi_session_recovery_timedout" },
	{ 0x4a8cec55, "iscsi_conn_setup" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc7c09627, "iscsi_itt_to_task" },
	{ 0xac321fc7, "iscsi_host_for_each_session" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi,cnic");


MODULE_INFO(srcversion, "C1698C1347541627996A312");
