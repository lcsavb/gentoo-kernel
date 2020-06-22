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
	{ 0x1d82023b, "ib_create_ah_from_wc" },
	{ 0x5c14d28d, "ib_modify_mad" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc922a86a, "ib_register_mad_agent" },
	{ 0xeb450818, "ib_free_recv_mad" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x68e36e31, "rdma_find_gid" },
	{ 0x53120126, "rdma_move_ah_attr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x1a281859, "pv_ops" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x950b7e30, "ib_free_send_mad" },
	{ 0x557b2d1b, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xbcdcfe3a, "rdma_put_gid_attr" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x21a24dcd, "ib_get_cached_pkey" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x4776ef58, "ib_set_client_data" },
	{ 0xab4cb5a3, "rdma_destroy_ah_attr" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xef3ceb8a, "ib_create_send_mad" },
	{ 0xa20dd5b7, "ib_post_send_mad" },
	{ 0x17e2ffb2, "ib_unregister_mad_agent" },
	{ 0x3929792d, "ib_register_client" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd95da777, "ib_find_cached_pkey" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xd4f2ff00, "ib_init_ah_attr_from_wc" },
	{ 0xe3300a0d, "rdma_create_ah" },
	{ 0xfc90ef10, "ib_cancel_mad" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb6841bf7, "ib_modify_port" },
	{ 0x42f1ae23, "rdma_query_gid" },
	{ 0x37a0cba, "kfree" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x6570cb06, "ib_port_register_module_stat" },
	{ 0x852dc0cd, "ib_port_unregister_module_stat" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec65ce4, "ib_init_ah_attr_from_path" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd8f2abb, "ib_unregister_client" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "8CDF8DD427A373866EA685D");
