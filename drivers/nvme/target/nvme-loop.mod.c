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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xc33e3ce3, "nvme_stop_ctrl" },
	{ 0x9eeb5e7c, "blk_mq_tagset_busy_iter" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x4597b8ef, "nvmf_register_transport" },
	{ 0xac68af02, "nvme_shutdown_ctrl" },
	{ 0x695dc900, "nvme_set_queue_count" },
	{ 0x10b8b25b, "nvme_stop_queues" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0xa44b88fe, "nvme_complete_async_event" },
	{ 0xfee7e042, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x9bb514db, "nvmf_reg_write32" },
	{ 0x3e31c4c5, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5c90059, "nvmet_req_execute" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0x17475388, "_dev_warn" },
	{ 0x5e6f0187, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x3d5f634b, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0xee6dd398, "nvme_init_identify" },
	{ 0xeb57fb85, "nvmf_reg_read64" },
	{ 0xb05f8b13, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbda2c563, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0xf27ecd62, "nvme_init_ctrl" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xefd8ffd, "nvme_change_ctrl_state" },
	{ 0x472dbb54, "nvmet_unregister_transport" },
	{ 0x94bd2068, "put_device" },
	{ 0xbca5a0b5, "nvmf_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x63e00706, "nvme_cleanup_cmd" },
	{ 0xa9fd03a9, "nvme_cancel_request" },
	{ 0x69949a0a, "nvmet_sq_destroy" },
	{ 0x6868391, "nvmf_get_address" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xa7fabde9, "nvme_should_fail" },
	{ 0xd94181ab, "get_device" },
	{ 0x6ddb1c81, "nvme_delete_ctrl" },
	{ 0xe536fc1f, "nvmf_reg_read32" },
	{ 0x319a177c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x2804b64e, "blk_mq_quiesce_queue" },
	{ 0x9ce2c06, "nvmf_connect_io_queue" },
	{ 0xc1831d82, "blk_mq_unquiesce_queue" },
	{ 0x3e04eeb1, "nvme_start_ctrl" },
	{ 0x7ed0afa5, "nvme_setup_cmd" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0xb7948e05, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7c855f65, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a94415d, "nvme_complete_rq" },
	{ 0x73110e57, "nvme_uninit_ctrl" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics,nvmet");


MODULE_INFO(srcversion, "16F97A299C6B95A47B9C985");
