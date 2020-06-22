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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x8dbdcb24, "nfc_hci_disconnect_gate" },
	{ 0x171c80a, "nfc_hci_disconnect_all_gates" },
	{ 0x48b63350, "nfc_hci_send_event" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x65f5151e, "nfc_dep_link_is_up" },
	{ 0x305f3f69, "nfc_hci_set_param" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6a58c798, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x26a71f1, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x20069143, "nfc_hci_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x406eb3f, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x219d4809, "nfc_hci_get_clientdata" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd3efa505, "nfc_hci_send_cmd" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb389fc81, "nfc_set_remote_general_bytes" },
	{ 0x45e2e4cd, "nfc_hci_register_device" },
	{ 0x913a3164, "nfc_get_local_general_bytes" },
	{ 0x789945b8, "nfc_se_transaction" },
	{ 0x8a4eded7, "nfc_hci_free_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf70ae81c, "nfc_llc_start" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a185559, "nfc_hci_unregister_device" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5639c94f, "nfc_remove_se" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x83f51598, "nfc_tm_data_received" },
	{ 0x7b114275, "nfc_hci_connect_gate" },
	{ 0x6a86b52d, "nfc_llc_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xc578f209, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7fb9399d, "nfc_hci_send_cmd_async" },
	{ 0x634864b9, "nfc_hci_get_param" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x3ac7a276, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x31fd06c3, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "D34E1E924CFE8D4E7670522");
