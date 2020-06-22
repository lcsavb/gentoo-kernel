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
	{ 0x572cc80c, "iscsi_eh_cmd_timed_out" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x6f6026eb, "iscsi_target_alloc" },
	{ 0x31d430cc, "iscsi_eh_recover_target" },
	{ 0x27692bd5, "iscsi_eh_device_reset" },
	{ 0xeeea6452, "iscsi_eh_abort" },
	{ 0x6d22abc7, "iscsi_queuecommand" },
	{ 0xd0870b8c, "iscsi_session_recovery_timedout" },
	{ 0xc60941ad, "iscsi_tcp_cleanup_task" },
	{ 0x5092eb4d, "iscsi_tcp_task_xmit" },
	{ 0xc05f841b, "iscsi_tcp_task_init" },
	{ 0x9d0d1ea5, "iscsi_conn_send_pdu" },
	{ 0xc26798, "iscsi_host_set_param" },
	{ 0x6c076856, "iscsi_session_get_param" },
	{ 0x54f95d31, "iscsi_conn_start" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xadc7b5e2, "iscsi_unregister_transport" },
	{ 0x3914eecf, "iscsi_register_transport" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xd37ca5bc, "iscsi_tcp_conn_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x13f4d4f3, "iscsi_conn_stop" },
	{ 0xc188e41a, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x76c13282, "iscsi_tcp_conn_teardown" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xafe0bdcb, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0xe31efa66, "iscsi_tcp_r2tpool_alloc" },
	{ 0x58d6e949, "iscsi_session_setup" },
	{ 0xe0e57a59, "iscsi_host_add" },
	{ 0x12c401b5, "iscsi_host_alloc" },
	{ 0xffe85b6a, "iscsi_host_free" },
	{ 0xf32e8d81, "iscsi_host_remove" },
	{ 0xbe3496f3, "iscsi_session_teardown" },
	{ 0x2ad021d2, "iscsi_tcp_r2tpool_free" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0xe8cb1a9c, "iscsi_tcp_recv_skb" },
	{ 0x5dd81d45, "tcp_read_sock" },
	{ 0xea5d8ef2, "iscsi_conn_queue_work" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x7419e1ca, "fput" },
	{ 0x7dbbf771, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc3851c10, "sk_set_memalloc" },
	{ 0x7f74d826, "iscsi_conn_bind" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x9d0b4986, "iscsi_tcp_set_max_r2t" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0xdf1dd849, "iscsi_set_param" },
	{ 0x8742d5f3, "kernel_getpeername" },
	{ 0xfd637d13, "iscsi_conn_get_param" },
	{ 0x207c79eb, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7801aa84, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2d30aa39, "iscsi_tcp_conn_get_stats" },
	{ 0x7b69d1a3, "iscsi_conn_failure" },
	{ 0x712e52f7, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x109ef9f5, "iscsi_tcp_segment_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d04c11d, "iscsi_tcp_segment_done" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0x96bc736a, "iscsi_tcp_dgst_header" },
	{ 0x293e2a44, "iscsi_segment_seek_sg" },
	{ 0xef536e7f, "iscsi_segment_init_linear" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xad18a559, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");
