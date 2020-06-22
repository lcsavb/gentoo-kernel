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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x61773efc, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2693ce9e, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x60d6e001, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xbbe4d611, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x470ea21, "usb_create_hcd" },
	{ 0x55c1c12, "usb_hcd_poll_rh_status" },
	{ 0xf55926cd, "usbip_alloc_iso_desc_pdu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x55573667, "usb_hcd_giveback_urb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5fdaf62, "usb_put_hcd" },
	{ 0x7d5b8c03, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf42961f9, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xb59ac279, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0x56d34d90, "usbip_stop_eh" },
	{ 0x997d0720, "dev_attr_usbip_debug" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7419e1ca, "fput" },
	{ 0xbb484581, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6999339b, "usbip_pad_iso" },
	{ 0xfa8ee75, "usb_hcd_check_unlink_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdfbd988e, "usbip_dump_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xe8f46b5e, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x8b86dad7, "platform_bus" },
	{ 0x74a28b80, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3db4a3f, "usbip_recv_xbuff" },
	{ 0x932f8752, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x98631b8a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x53077ab0, "usb_hcd_resume_root_hub" },
	{ 0xaef4b823, "usbip_start_eh" },
	{ 0x1bf6b87f, "usbip_pack_pdu" },
	{ 0x28753ca8, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "BB7D416D2CA2313C409FEF1");
