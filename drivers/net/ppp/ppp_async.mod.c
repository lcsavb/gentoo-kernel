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
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xe0cb126d, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x35f9e09e, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x64460b89, "tty_mode_ioctl" },
	{ 0x7ebdb85e, "n_tty_ioctl_helper" },
	{ 0x92a91221, "ppp_channel_index" },
	{ 0xee565529, "ppp_unit_number" },
	{ 0xc5850110, "printk" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xf0daef0b, "stop_tty" },
	{ 0x2139c4e6, "start_tty" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x9344bfa1, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x7bab5dba, "ppp_output_wakeup" },
	{ 0x1cf67453, "ppp_input_error" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xb4af225e, "ppp_input" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0x29361773, "complete" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ppp_generic,crc-ccitt");


MODULE_INFO(srcversion, "BC6F52804B158380AAFA03F");
