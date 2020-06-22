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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xfdcb319, "tty_register_ldisc" },
	{ 0x27cb981e, "tty_chars_in_buffer" },
	{ 0x94f1c453, "ax25_ip_xmit" },
	{ 0xe7fbf033, "dev_trans_start" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd6841d4, "crc16" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x9344bfa1, "tty_unthrottle" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9bb01f10, "tty_driver_flush_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x241c1195, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x29361773, "complete" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "D30613825BD448E41B9B235");
