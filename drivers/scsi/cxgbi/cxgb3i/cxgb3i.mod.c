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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x572cc80c, "iscsi_eh_cmd_timed_out" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x6f6026eb, "iscsi_target_alloc" },
	{ 0x31d430cc, "iscsi_eh_recover_target" },
	{ 0x27692bd5, "iscsi_eh_device_reset" },
	{ 0xeeea6452, "iscsi_eh_abort" },
	{ 0x6d22abc7, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0x9257fa41, "cxgbi_ep_disconnect" },
	{ 0x730a6ceb, "cxgbi_ep_poll" },
	{ 0x374d0730, "cxgbi_ep_connect" },
	{ 0xd0870b8c, "iscsi_session_recovery_timedout" },
	{ 0x954d19bf, "cxgbi_parse_pdu_itt" },
	{ 0x9021096, "cxgbi_conn_init_pdu" },
	{ 0x6e5614b9, "cxgbi_conn_xmit_pdu" },
	{ 0x2e5a2274, "cxgbi_conn_alloc_pdu" },
	{ 0xec4c28eb, "cxgbi_cleanup_task" },
	{ 0x5092eb4d, "iscsi_tcp_task_xmit" },
	{ 0xc05f841b, "iscsi_tcp_task_init" },
	{ 0xee73fb91, "cxgbi_get_conn_stats" },
	{ 0x9d0d1ea5, "iscsi_conn_send_pdu" },
	{ 0xba73d0b, "cxgbi_set_host_param" },
	{ 0x4b5a925d, "cxgbi_get_host_param" },
	{ 0x6c076856, "iscsi_session_get_param" },
	{ 0xfd637d13, "iscsi_conn_get_param" },
	{ 0x8f9652db, "cxgbi_get_ep_param" },
	{ 0x633c3d88, "cxgbi_set_conn_param" },
	{ 0x76c13282, "iscsi_tcp_conn_teardown" },
	{ 0x13f4d4f3, "iscsi_conn_stop" },
	{ 0x54f95d31, "iscsi_conn_start" },
	{ 0x4526a685, "cxgbi_bind_conn" },
	{ 0xf9eaba8, "cxgbi_create_conn" },
	{ 0x15d1ae48, "cxgbi_destroy_session" },
	{ 0xa252061e, "cxgbi_create_session" },
	{ 0x9edfb7f0, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0xc174505f, "cxgb3_unregister_client" },
	{ 0x10ae91b9, "cxgb3_register_client" },
	{ 0xe8d93d7, "cxgbi_iscsi_init" },
	{ 0x91254013, "cxgbi_sock_select_mss" },
	{ 0xa1311672, "cxgb3_alloc_atid" },
	{ 0x21c6ccce, "t3_l2t_get" },
	{ 0x23d984a3, "t3_l2e_free" },
	{ 0x704b8cb4, "cxgb3_remove_tid" },
	{ 0x76f3ea68, "cxgbi_sock_purge_wr_queue" },
	{ 0x8cee9032, "cxgb3_free_atid" },
	{ 0x1e3e4c23, "cxgbi_conn_tx_open" },
	{ 0x8a3c4498, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x39a573d5, "cxgb3_insert_tid" },
	{ 0x861c8650, "cxgbi_sock_free_cpl_skbs" },
	{ 0xb241a8b9, "cxgbi_sock_closed" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x37a0cba, "kfree" },
	{ 0x599cf773, "cxgbi_sock_fail_act_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6905bd2c, "cxgb3_queue_tid_release" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x63cbb90b, "cxgbi_conn_pdu_ready" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x50af4bd5, "cxgbi_sock_skb_entail" },
	{ 0x38e82926, "t3_l2t_send_slow" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9907cd5, "cxgbi_hbas_add" },
	{ 0x17d2e0a6, "cxgbi_device_portmap_create" },
	{ 0x64eb84b2, "cxgbi_ddp_ppm_setup" },
	{ 0x1bdaafe1, "cxgbi_tagmask_set" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2443d25e, "cxgbi_device_register" },
	{ 0xce7beb3c, "cxgbi_sock_rcv_peer_close" },
	{ 0x7c92bb31, "cxgbi_sock_rcv_abort_rpl" },
	{ 0x3d06d726, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xdc1a06a5, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x79b58987, "cxgb3_ofld_send" },
	{ 0x7556301, "cxgbi_device_unregister" },
	{ 0x4da4b38b, "cxgbi_device_find_by_lldev" },
	{ 0xc5850110, "printk" },
	{ 0x1551a9a5, "__kfree_skb" },
	{ 0xa97218ad, "cxgbi_sock_rcv_wr_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb3,libcxgb");


MODULE_INFO(srcversion, "C651F38CC6F0439CB538226");
