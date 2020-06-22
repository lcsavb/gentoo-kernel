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
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x1c4d2d7d, "hid_add_device" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x288a4049, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcf414d3c, "hid_parse_report" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7b7151bc, "bt_sock_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xffb8ad78, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x58973956, "sock_no_recvmsg" },
	{ 0xa025f2e7, "bt_sock_unlink" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x9b574915, "l2cap_conn_put" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcc8bc388, "l2cap_is_socket" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x98001cfc, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7419e1ca, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0x2f8d4f1c, "bt_sock_link" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb6285377, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0xe33496c3, "l2cap_register_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xba9610b0, "__module_put_and_exit" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7903c8ae, "hid_destroy_device" },
	{ 0xf8278c, "hid_allocate_device" },
	{ 0x9e27d91b, "l2cap_conn_get" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xef4d20bb, "sock_no_sendmsg" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8fc3c602, "bt_procfs_init" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xec76c2f0, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0xc89dac22, "l2cap_unregister_user" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9EB8F1FB5E365A14B3F24A4");
