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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x7914789b, "nvme_get_features" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0x9b74e80f, "nvme_reset_ctrl" },
	{ 0x94d98b46, "pci_free_p2pmem" },
	{ 0x71301392, "param_get_int" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x9434a579, "pci_sriov_configure_simple" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0xaeec0664, "pci_p2pmem_virt_to_bus" },
	{ 0x70d1fc5d, "pci_p2pdma_unmap_sg_attrs" },
	{ 0x622a48e, "nvme_wait_reset" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xc33e3ce3, "nvme_stop_ctrl" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x277a969a, "nvme_unfreeze" },
	{ 0x9eeb5e7c, "blk_mq_tagset_busy_iter" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x826e6a66, "nvme_set_features" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xac68af02, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x695dc900, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x10b8b25b, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0xa44b88fe, "nvme_complete_async_event" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9654d3c1, "nvme_kill_queues" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xf89fe065, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e31c4c5, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x1a281859, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x99933c98, "pci_p2pmem_publish" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x229cbf42, "nvme_try_sched_reset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5e6f0187, "nvme_enable_ctrl" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x8ab9a702, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x929fbac2, "sysfs_remove_file_from_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0xee6dd398, "nvme_init_identify" },
	{ 0x51e12b8d, "nvme_remove_namespaces" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x768a0f22, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf6c921db, "blk_execute_rq_nowait" },
	{ 0x9c6e081e, "pci_load_saved_state" },
	{ 0x8ffc488b, "pci_request_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xec431e30, "blk_get_queue" },
	{ 0xf27ecd62, "nvme_init_ctrl" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7c291954, "pci_p2pdma_map_sg_attrs" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0xefd8ffd, "nvme_change_ctrl_state" },
	{ 0x582096bc, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x6579165a, "pci_free_irq" },
	{ 0x94bd2068, "put_device" },
	{ 0xa6d56570, "dma_max_mapping_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8c9b7f2, "nvme_sync_queues" },
	{ 0x63e00706, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa9fd03a9, "nvme_cancel_request" },
	{ 0x8b54e0cd, "nvme_wait_freeze" },
	{ 0xc5f9c6a8, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa7fabde9, "nvme_should_fail" },
	{ 0x74f78f0b, "nvme_disable_ctrl" },
	{ 0xa63f19de, "pci_p2pdma_add_resource" },
	{ 0xd94181ab, "get_device" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x2804b64e, "blk_mq_quiesce_queue" },
	{ 0xa899ae11, "nvme_submit_sync_cmd" },
	{ 0xc1831d82, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0x3e04eeb1, "nvme_start_ctrl" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xed58516c, "pci_alloc_p2pmem" },
	{ 0x7c03e9bb, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0x7ed0afa5, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf9f0342d, "nvme_alloc_request" },
	{ 0xf0e8c34f, "nvme_start_queues" },
	{ 0x85f117af, "sysfs_add_file_to_group" },
	{ 0xb7948e05, "blk_mq_tagset_wait_completed_request" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdbe9fd07, "pci_enable_device_mem" },
	{ 0x87a9358c, "nvme_wait_freeze_timeout" },
	{ 0xdd9c4a32, "pci_release_selected_regions" },
	{ 0x4d73f906, "pci_request_selected_regions" },
	{ 0x3a94415d, "nvme_complete_rq" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x73110e57, "nvme_uninit_ctrl" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x43b55258, "pcie_aspm_enabled" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD88719A57A010E59B3FAF4");
