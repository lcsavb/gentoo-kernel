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
	{ 0x9625ba10, "noop_llseek" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xa3114135, "rc_free_device" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x62f1259e, "usb_register_dev" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0xad0cba41, "input_event" },
	{ 0xa3a91d0f, "rc_keyup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17475388, "_dev_warn" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3a3dea8e, "usb_deregister_dev" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x712e52f7, "current_task" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x685562b7, "usb_find_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29361773, "complete" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xa2dad3de, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3B6BBB89337C1129902B18");
