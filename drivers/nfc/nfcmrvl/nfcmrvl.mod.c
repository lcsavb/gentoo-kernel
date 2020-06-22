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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2ca73b0, "nfc_send_to_raw_sock" },
	{ 0xfe745e12, "nci_send_cmd" },
	{ 0x658d6b7a, "nci_recv_frame" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9858c750, "nci_send_frame" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb3a8ad60, "nci_set_config" },
	{ 0xa5f5b554, "nci_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xfe990052, "gpio_free" },
	{ 0x3965dc08, "nfc_fw_download_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x688eab0d, "nci_register_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x1942eabf, "nci_allocate_device" },
	{ 0x9a52a1e4, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nfc,nci");


MODULE_INFO(srcversion, "6B2097389D73A35DA4FFD6C");
