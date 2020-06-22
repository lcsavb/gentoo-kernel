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
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1d181945, "rdma_get_service_id" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xc1ba5402, "stream_open" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xc150549e, "rdma_join_multicast" },
	{ 0x63057f4b, "ib_copy_path_rec_to_user" },
	{ 0x3c1192d0, "rdma_read_gids" },
	{ 0x62db3bf, "__rdma_create_id" },
	{ 0xf2411869, "rdma_destroy_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x205afc4a, "ib_copy_ah_attr_to_user" },
	{ 0xcc3cb49e, "rdma_init_qp_attr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x9e14ef4a, "rdma_connect" },
	{ 0xe27cd56f, "rdma_set_reuseaddr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xce37231f, "rdma_set_ib_path" },
	{ 0xb36e4148, "ib_sa_pack_path" },
	{ 0x2e76b019, "misc_register" },
	{ 0x803cc1b2, "__rdma_accept" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x85222b2, "rdma_listen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x32d638b4, "ib_copy_qp_attr_to_user" },
	{ 0xafc8ad58, "rdma_set_afonly" },
	{ 0xdd1eb331, "rdma_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x98001cfc, "init_net" },
	{ 0x7419e1ca, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xe3868bff, "__task_pid_nr_ns" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x3929792d, "ib_register_client" },
	{ 0x24d786ed, "rdma_bind_addr" },
	{ 0xf9bda5c5, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd6636ca6, "rdma_addr_size_in6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbbde792b, "rdma_disconnect" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe9a8b792, "rdma_reject" },
	{ 0x86cef180, "rdma_addr_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbc49362e, "rdma_set_service_type" },
	{ 0xd7a682b5, "rdma_set_ack_timeout" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x27cfee, "rdma_resolve_addr" },
	{ 0x305e5701, "rdma_addr_size_kss" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe5a78c1e, "ib_sa_unpack_path" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x867234, "misc_deregister" },
	{ 0xd8f2abb, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe9f64e5d, "rdma_leave_multicast" },
};

MODULE_INFO(depends, "rdma_cm,ib_uverbs,ib_core");


MODULE_INFO(srcversion, "3A77E60953C2A891531818E");
