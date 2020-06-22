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
	{ 0xf2f99efb, "ishtp_cl_io_rb_recycle" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcd23e0a5, "ishtp_cl_unlink" },
	{ 0xfed54442, "ishtp_set_connection_state" },
	{ 0x6015bbb3, "ishtp_cl_driver_register" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x13575ec3, "ishtp_cl_flush_queues" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbb55c4f9, "ishtp_put_device" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7892d627, "ishtp_cl_connect" },
	{ 0xa86e874, "ishtp_set_rx_ring_size" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7c147da7, "ishtp_cl_driver_unregister" },
	{ 0x8793624f, "ishtp_device" },
	{ 0xf075a3f, "ishtp_cl_link" },
	{ 0xd703e2d3, "ish_hw_reset" },
	{ 0xb4a7b2c7, "ishtp_cl_disconnect" },
	{ 0x17475388, "_dev_warn" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xb0335193, "ishtp_fw_cl_get_client" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x933efdaa, "device_property_read_string" },
	{ 0x49b69781, "ishtp_get_pci_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xce243177, "ishtp_register_event_cb" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7f759d6d, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x43a23768, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x5c7516b1, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x7078743e, "ishtp_set_tx_ring_size" },
	{ 0x369ef8c4, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3b105169, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa16910fd, "ishtp_cl_set_fw_client_id" },
	{ 0xc66f24fd, "ishtp_cl_free" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4d69d0, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb93d2b1e, "ishtp_cl_allocate" },
	{ 0xa98130, "ishtp_get_ishtp_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x7a11311a, "ishtp_cl_rx_get_rb" },
};

MODULE_INFO(depends, "intel-ishtp");


MODULE_INFO(srcversion, "826ECC9C60F247ED7D10087");
