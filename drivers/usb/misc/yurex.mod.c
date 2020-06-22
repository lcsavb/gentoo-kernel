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
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xc0e474fd, "usb_poison_urb" },
	{ 0x3a3dea8e, "usb_deregister_dev" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x62f1259e, "usb_register_dev" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xf8a66f0d, "usb_get_intf" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x712e52f7, "current_task" },
	{ 0x566257fc, "kill_fasync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x685562b7, "usb_find_interface" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xe1b5d657, "usb_put_intf" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "828AB5495726902C349F3F1");
