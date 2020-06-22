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
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0xfdcb319, "tty_register_ldisc" },
	{ 0x22d47eca, "tty_register_device" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7ebdb85e, "n_tty_ioctl_helper" },
	{ 0xa0309a72, "tty_port_lower_dtr_rts" },
	{ 0x5c6dfbb0, "tty_port_close_end" },
	{ 0xdd344bc7, "tty_port_close_start" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6d495207, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0x334962a0, "tty_wakeup" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x9189399e, "tty_hangup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbd942eae, "tty_port_install" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x27bc3136, "tty_port_put" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0x712e52f7, "current_task" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xa0b353c7, "skb_dequeue_tail" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xff1d764c, "tty_port_block_til_ready" },
	{ 0xf2b8e756, "tty_port_tty_set" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x750f0e26, "tty_write_room" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xfc6bbfd7, "tty_hung_up_p" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2b24ce7b, "tty_name" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1DF02FB2C725617BA7CC5A4");
