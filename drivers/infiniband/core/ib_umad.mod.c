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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc922a86a, "ib_register_mad_agent" },
	{ 0xc1ba5402, "stream_open" },
	{ 0xeb450818, "ib_free_recv_mad" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb48f44d8, "bpf_trace_run3" },
	{ 0x1a281859, "pv_ops" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0x35a048e1, "ib_get_rmpp_segment" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x950b7e30, "ib_free_send_mad" },
	{ 0x557b2d1b, "rdma_destroy_ah_user" },
	{ 0xb75a3450, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x17475388, "_dev_warn" },
	{ 0x712e52f7, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x405357be, "ib_mad_kernel_rmpp_agent" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x4776ef58, "ib_set_client_data" },
	{ 0xab4cb5a3, "rdma_destroy_ah_attr" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xef3ceb8a, "ib_create_send_mad" },
	{ 0xa20dd5b7, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x17e2ffb2, "ib_unregister_mad_agent" },
	{ 0x3929792d, "ib_register_client" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd0b427b1, "cdev_device_add" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd4f2ff00, "ib_init_ah_attr_from_wc" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xbbf9a43e, "rdma_dev_access_netns" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb6841bf7, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x58152db6, "cdev_device_del" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0xd8f2abb, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "D475567CF4CD8E830A4825C");
