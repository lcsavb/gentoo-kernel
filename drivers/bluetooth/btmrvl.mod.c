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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x79c6daf3, "debugfs_create_u8" },
	{ 0x8790ad6a, "__hci_cmd_sync" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x423d7b3e, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x6a683da4, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0xffea6bc9, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");
