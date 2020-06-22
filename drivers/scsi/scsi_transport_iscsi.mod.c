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
	{ 0x843fb2fe, "transport_class_register" },
	{ 0x9cce7054, "class_find_device" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x128c3351, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37aa31bc, "scsi_host_lookup" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6c4937df, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe19a8bb5, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7533a30b, "device_del" },
	{ 0x674fc839, "device_register" },
	{ 0x741b0126, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfb38c238, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xea8f6ba2, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x9dc8a135, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x45cd73e1, "device_add" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x98001cfc, "init_net" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x681e3cee, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x75e47ded, "scsi_target_unblock" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc66da23c, "scsi_host_get" },
	{ 0x496e2a71, "netlink_broadcast" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c99b384, "transport_setup_device" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0xa7a0cd67, "__scsi_init_queue" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x48d7ecd5, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xdaf37dd6, "transport_remove_device" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x569d160, "scsi_target_block" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x15b5cc67, "bsg_job_done" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x555a6dd6, "bsg_remove_queue" },
	{ 0x1ab15099, "bsg_setup_queue" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E00EE389096E73B45150C32");
