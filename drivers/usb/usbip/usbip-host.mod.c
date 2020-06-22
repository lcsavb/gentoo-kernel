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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x61773efc, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x754d539c, "strlen" },
	{ 0xdf5be4c, "usb_set_configuration" },
	{ 0xf55926cd, "usbip_alloc_iso_desc_pdu" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x43f1f5a8, "usb_hub_claim_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x7d5b8c03, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x2bd720d8, "usbip_in_eh" },
	{ 0x861a6924, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x52279044, "usb_register_device_driver" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0x26cf3c40, "device_attach" },
	{ 0x56d34d90, "usbip_stop_eh" },
	{ 0x997d0720, "dev_attr_usbip_debug" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7419e1ca, "fput" },
	{ 0xbb484581, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xdfbd988e, "usbip_dump_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x19c8fe81, "driver_create_file" },
	{ 0xe8f46b5e, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3abad5a, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd3db4a3f, "usbip_recv_xbuff" },
	{ 0x4e7cf620, "usb_hub_release_port" },
	{ 0x932f8752, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x519ddc40, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaef4b823, "usbip_start_eh" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x1bf6b87f, "usbip_pack_pdu" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "A706755C3797B38D095777B");
