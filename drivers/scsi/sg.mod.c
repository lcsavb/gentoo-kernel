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
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc10a5a8d, "class_interface_unregister" },
	{ 0xb6a1b0cd, "remove_proc_subtree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x33650c48, "class_destroy" },
	{ 0x542a5c87, "proc_create_single_data" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x407dd9dc, "proc_create" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0xeb04e97c, "scsi_register_interface" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x4b305b75, "sg_scsi_ioctl" },
	{ 0x60255abc, "blk_trace_startstop" },
	{ 0x123564f1, "blk_trace_remove" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x4cc2b0e5, "blk_trace_setup" },
	{ 0x26584827, "scsi_ioctl" },
	{ 0xed6e3872, "scsi_ioctl_block_when_processing_errors" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x27639220, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbc835177, "blk_rq_map_user_iov" },
	{ 0x3e30f1c, "import_iovec" },
	{ 0xf6c921db, "blk_execute_rq_nowait" },
	{ 0x665e95e2, "blk_rq_map_user" },
	{ 0x9e34b64e, "blk_get_request" },
	{ 0x36a099f6, "__module_get" },
	{ 0x7920c748, "scsi_block_when_processing_errors" },
	{ 0x679a153d, "scsi_autopm_get_device" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x681e3cee, "module_put" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x118cd239, "scsi_autopm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xe3868bff, "__task_pid_nr_ns" },
	{ 0x712e52f7, "current_task" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5f6e040, "blk_rq_unmap_user" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xa6ca64c9, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x566257fc, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x41d7f5a3, "blk_put_request" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40120314, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xd517f601, "seq_puts" },
	{ 0x20978fb9, "idr_find" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xc5850110, "printk" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0xe629aceb, "device_create" },
	{ 0xb4446279, "cdev_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3ac50f37, "cdev_alloc" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A21DFDF3535F121B5149565");
