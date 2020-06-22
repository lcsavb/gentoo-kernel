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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x483c3cfa, "memstick_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xac7c929f, "memstick_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc5850110, "printk" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe273edd2, "blk_queue_max_segment_size" },
	{ 0xde8edf5f, "blk_queue_max_segments" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x48ffed47, "blk_mq_init_sq_queue" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1f91d1c0, "memstick_set_rw_addr" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1a281859, "pv_ops" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4a4e5778, "memstick_init_req_sg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfd94814e, "complete_all" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x3d92d67d, "__blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x43a0ed9c, "blk_update_request" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x57e23398, "memstick_new_req" },
	{ 0xae50437c, "memstick_init_req" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x55760da8, "blk_mq_stop_hw_queues" },
	{ 0x1b8dfc22, "blk_mq_start_hw_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");


MODULE_INFO(srcversion, "C22634497601BB91CFE572E");
