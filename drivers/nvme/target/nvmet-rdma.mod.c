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
	{ 0x274ab7bb, "rdma_rw_ctx_init" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xb394f402, "nvmet_req_uninit" },
	{ 0x6fc1b092, "ib_dealloc_pd_user" },
	{ 0xc847fc78, "nvmet_ctrl_fatal_error" },
	{ 0x95abaabe, "ib_drain_qp" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x62db3bf, "__rdma_create_id" },
	{ 0xfee7e042, "nvmet_sq_init" },
	{ 0xf2411869, "rdma_destroy_id" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x1a281859, "pv_ops" },
	{ 0x620bf0e8, "ib_create_srq" },
	{ 0xc5c90059, "nvmet_req_execute" },
	{ 0x803cc1b2, "__rdma_accept" },
	{ 0xa4c058d7, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x72c22753, "__ib_alloc_cq_user" },
	{ 0x4cc78d06, "rdma_destroy_qp" },
	{ 0x85222b2, "rdma_listen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x12b1a778, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0xafc8ad58, "rdma_set_afonly" },
	{ 0xdd1eb331, "rdma_notify" },
	{ 0xb05f8b13, "nvmet_register_transport" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x98001cfc, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c37baec, "rdma_rw_ctx_wrs" },
	{ 0x8fe32628, "nvmet_req_free_sgl" },
	{ 0xd96feaac, "rdma_create_qp" },
	{ 0xbda2c563, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3929792d, "ib_register_client" },
	{ 0x24d786ed, "rdma_bind_addr" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x472dbb54, "nvmet_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69949a0a, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2f641e, "ib_destroy_srq_user" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbbde792b, "rdma_disconnect" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe9a8b792, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xa1099c48, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8abd729, "nvmet_req_alloc_sgl" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xbcd5aa22, "nvmet_req_complete" },
	{ 0xfae2dde0, "__ib_alloc_pd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xeb80c599, "rdma_rw_ctx_destroy" },
	{ 0x5cfb729d, "rdma_reject_msg" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd8f2abb, "ib_unregister_client" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xb8f5516e, "ib_free_cq_user" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core,nvmet,rdma_cm");


MODULE_INFO(srcversion, "F40FA49A8037C34945DFDC2");
