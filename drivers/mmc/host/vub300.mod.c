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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x861a6924, "usb_lock_device_for_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5f8844bd, "usb_sg_wait" },
	{ 0xafd7db4c, "usb_sg_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc5850110, "printk" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0x9166fada, "strncpy" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x6238ec42, "usb_sg_cancel" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x17475388, "_dev_warn" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xe884de84, "usb_string" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "83D7C33501EC3AD543FACFF");
