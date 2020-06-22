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
	{ 0x843fb2fe, "transport_class_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x128c3351, "scsi_remove_target" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcb1d4a49, "scsi_flush_work" },
	{ 0x3fd3648b, "blk_mq_run_hw_queues" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6c4937df, "transport_destroy_device" },
	{ 0xf30be844, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0xe19a8bb5, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0xb87590ea, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7533a30b, "device_del" },
	{ 0x741b0126, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfb38c238, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9acc3a68, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x45cd73e1, "device_add" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x75e47ded, "scsi_target_unblock" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc66da23c, "scsi_host_get" },
	{ 0x496e2a71, "netlink_broadcast" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c99b384, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xda96d4fc, "blk_mq_end_request" },
	{ 0xd94181ab, "get_device" },
	{ 0xa7a0cd67, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xbb06d23f, "scsi_is_target_device" },
	{ 0x90fade96, "scsi_nl_sock" },
	{ 0xdaf37dd6, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x569d160, "scsi_target_block" },
	{ 0x15b5cc67, "bsg_job_done" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x555a6dd6, "bsg_remove_queue" },
	{ 0x1ab15099, "bsg_setup_queue" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "933B32C63DC87EA8829348F");
