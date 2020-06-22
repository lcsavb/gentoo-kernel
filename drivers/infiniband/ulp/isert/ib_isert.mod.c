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
	{ 0xb81348d0, "iscsit_unregister_transport" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8059e386, "iscsit_register_transport" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5cfb729d, "rdma_reject_msg" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xfae2dde0, "__ib_alloc_pd" },
	{ 0x72c22753, "__ib_alloc_cq_user" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x803cc1b2, "__rdma_accept" },
	{ 0xcf2a6966, "up" },
	{ 0xe9a8b792, "rdma_reject" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x85222b2, "rdma_listen" },
	{ 0x24d786ed, "rdma_bind_addr" },
	{ 0x62db3bf, "__rdma_create_id" },
	{ 0x98001cfc, "init_net" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5fff0644, "iscsit_process_text_cmd" },
	{ 0xcf7b3b59, "iscsit_setup_text_cmd" },
	{ 0x7ed6dad9, "iscsit_find_cmd_from_itt" },
	{ 0x8f9e9c78, "iscsit_set_unsolicited_dataout" },
	{ 0x6a5c21c0, "iscsit_sequence_cmd" },
	{ 0x3ed5cce4, "iscsit_process_scsi_cmd" },
	{ 0xf872ca08, "iscsit_setup_scsi_cmd" },
	{ 0x60eb20e1, "iscsit_process_nop_out" },
	{ 0x14867500, "iscsit_setup_nop_out" },
	{ 0x6cec9564, "iscsit_handle_logout_cmd" },
	{ 0x7e0d9b67, "iscsit_check_dataout_payload" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x3d7d78c9, "iscsit_check_dataout_hdr" },
	{ 0x23c6f2b2, "iscsit_handle_task_mgt_cmd" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x78ce2213, "iscsit_build_text_rsp" },
	{ 0x428bfeea, "iscsit_build_logout_rsp" },
	{ 0x97dc163f, "iscsit_build_task_mgt_rsp" },
	{ 0x3b841ad9, "iscsit_build_reject" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa7a98893, "iscsit_build_nopin_rsp" },
	{ 0x118ea70b, "iscsit_build_rsp_pdu" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xbfa225ea, "target_execute_cmd" },
	{ 0x40478a24, "transport_generic_request_failure" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x99ca31c8, "iscsit_logout_post_handler" },
	{ 0xf664b341, "iscsit_tmr_post_handler" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x712e52f7, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa4c058d7, "ib_destroy_qp_user" },
	{ 0xf2411869, "rdma_destroy_id" },
	{ 0xe5d4a82e, "iscsit_cause_connection_reinstatement" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc27b2215, "target_wait_for_sess_cmds" },
	{ 0xf63d613b, "target_sess_cmd_list_set_waiting" },
	{ 0x95abaabe, "ib_drain_qp" },
	{ 0x20f6d704, "target_put_sess_cmd" },
	{ 0x9ece11f3, "iscsit_release_cmd" },
	{ 0xe55cfca, "transport_generic_free_cmd" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x6fc1b092, "ib_dealloc_pd_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xffcc661d, "iscsit_stop_dataout_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe497c20a, "rdma_rw_ctx_destroy_signature" },
	{ 0xeb80c599, "rdma_rw_ctx_destroy" },
	{ 0xf7d73606, "iscsit_allocate_cmd" },
	{ 0xbbde792b, "rdma_disconnect" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xd96feaac, "rdma_create_qp" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8f5516e, "ib_free_cq_user" },
	{ 0xf249db55, "rdma_rw_ctx_signature_init" },
	{ 0xa1099c48, "rdma_rw_ctx_post" },
	{ 0x274ab7bb, "rdma_rw_ctx_init" },
	{ 0x8dc62afb, "ib_check_mr_status" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdd1eb331, "rdma_notify" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_target_mod,rdma_cm,ib_core,target_core_mod");


MODULE_INFO(srcversion, "F084E49E3060371562B56AB");
