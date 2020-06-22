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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x75002d2b, "vring_del_virtqueue" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xda584c89, "single_release" },
	{ 0xd517f601, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x9fd3b69, "register_virtio_device" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29cea78, "vringh_complete_kern" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2e76b019, "misc_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xea8f6ba2, "device_find_child" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a04d103, "dma_sync_wait" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xab9ac4d7, "vop_unregister_driver" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xeb3450c2, "unregister_virtio_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc461c922, "virtio_config_changed" },
	{ 0xc520b616, "vringh_init_kern" },
	{ 0x94bd2068, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4d7e3b8b, "vringh_need_notify_kern" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0xa3dbff99, "vop_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc2d9f94, "vringh_getdesc_kern" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0xfd40dcbd, "__vring_new_virtqueue" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x867234, "misc_deregister" },
	{ 0xaeec2c26, "vring_transport_features" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "vringh,vop_bus");


MODULE_INFO(srcversion, "9B69B43EBA046AE89AA539E");
