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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3e2df18c, "target_unregister_template" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfdcaa66f, "target_register_template" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xf77bad0c, "qlt_lport_register" },
	{ 0x66059826, "qlt_rdy_to_xfer" },
	{ 0xcc77416, "qlt_unreg_sess" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x52477eff, "core_tpg_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbfa225ea, "target_execute_cmd" },
	{ 0x40478a24, "transport_generic_request_failure" },
	{ 0x5b840287, "target_remove_session" },
	{ 0xc27b2215, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5fa974c2, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x687af946, "qlt_xmit_response" },
	{ 0x74824280, "target_submit_cmd" },
	{ 0xf753dea4, "target_submit_tmr" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe55cfca, "transport_generic_free_cmd" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x373b0fd9, "qlt_stop_phase2" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x53d7bf97, "qlt_lport_deregister" },
	{ 0x9f857086, "target_show_dynamic_sessions" },
	{ 0x20f6d704, "target_put_sess_cmd" },
	{ 0x2a7bc3b9, "qlt_free_mcmd" },
	{ 0xa9034cf0, "qlt_free_cmd" },
	{ 0xf63d613b, "target_sess_cmd_list_set_waiting" },
	{ 0x6968ff58, "qlt_xmit_tm_rsp" },
	{ 0xf6ded683, "qlt_abort_cmd" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc66da23c, "scsi_host_get" },
	{ 0x7aacd69c, "fc_vport_create" },
	{ 0x647936c9, "fc_vport_terminate" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0955d98, "core_tpg_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x712e52f7, "current_task" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xefcafcbd, "qlt_stop_phase1" },
	{ 0x4051d20d, "qlt_enable_vha" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,qla2xxx,scsi_transport_fc");


MODULE_INFO(srcversion, "FCB5C637AA12BCE37B79078");
