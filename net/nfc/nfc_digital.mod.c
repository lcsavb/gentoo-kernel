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
	{ 0x2d3385d3, "system_wq" },
	{ 0xb99eb7e6, "nfc_register_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x65f5151e, "nfc_dep_link_is_up" },
	{ 0xcb92b15e, "nfc_targets_found" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x406eb3f, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xb389fc81, "nfc_set_remote_general_bytes" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x913a3164, "nfc_get_local_general_bytes" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc01aa915, "nfc_alloc_recv_skb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5b56554d, "__pskb_copy_fclone" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x83f51598, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x5f869cef, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6d2ac5b7, "nfc_unregister_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
};

MODULE_INFO(depends, "nfc,crc-itu-t,crc-ccitt");


MODULE_INFO(srcversion, "3EA7D75209E9D058B872BF1");
