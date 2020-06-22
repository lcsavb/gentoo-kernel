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
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0x9b74e80f, "nvme_reset_ctrl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc33e3ce3, "nvme_stop_ctrl" },
	{ 0x9eeb5e7c, "blk_mq_tagset_busy_iter" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x4597b8ef, "nvmf_register_transport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x695dc900, "nvme_set_queue_count" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x10b8b25b, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa44b88fe, "nvme_complete_async_event" },
	{ 0x74c9a7fe, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x9bb514db, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e31c4c5, "blk_mq_update_nr_hw_queues" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x17475388, "_dev_warn" },
	{ 0x5e6f0187, "nvme_enable_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x3d5f634b, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xee6dd398, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb57fb85, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe629aceb, "device_create" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe69414b5, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf27ecd62, "nvme_init_ctrl" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xefd8ffd, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0x94bd2068, "put_device" },
	{ 0xbca5a0b5, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x63e00706, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6868391, "nvmf_get_address" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa7fabde9, "nvme_should_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x6ddb1c81, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe536fc1f, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x319a177c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x2804b64e, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x9ce2c06, "nvmf_connect_io_queue" },
	{ 0xc1831d82, "blk_mq_unquiesce_queue" },
	{ 0x3e04eeb1, "nvme_start_ctrl" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x7ed0afa5, "nvme_setup_cmd" },
	{ 0x9d84cb0d, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0e8c34f, "nvme_start_queues" },
	{ 0xb7948e05, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c855f65, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3a94415d, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x73110e57, "nvme_uninit_ctrl" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "1BF84958DAF2C7B17E9E4CB");
