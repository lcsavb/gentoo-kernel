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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xaea92c90, "__tracepoint_iscsi_dbg_eh" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x7edf9f64, "iscsi_block_session" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xcec4405d, "iscsi_remove_session" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x9a93ffef, "iscsi_unblock_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9ee71fad, "iscsi_add_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x648a845, "iscsi_recv_pdu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbf8a80d3, "iscsi_create_conn" },
	{ 0xbd048300, "flush_signals" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3133dc5c, "__tracepoint_iscsi_dbg_session" },
	{ 0x681e3cee, "module_put" },
	{ 0x953919ae, "iscsi_destroy_conn" },
	{ 0xc66da23c, "scsi_host_get" },
	{ 0x94bd2068, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1215923f, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0x6b4e8b0b, "iscsi_free_session" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xad18a559, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaac3519d, "__tracepoint_iscsi_dbg_conn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xac321fc7, "iscsi_host_for_each_session" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xe9c9428d, "iscsi_session_chkready" },
	{ 0x2c86fcac, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "scsi_transport_iscsi");


MODULE_INFO(srcversion, "65F5FE66038317A8D7908D9");
