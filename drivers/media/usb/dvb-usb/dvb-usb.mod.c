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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0xd0f88e01, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xad0cba41, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0xfb578fc5, "memset" },
	{ 0xa3114135, "rc_free_device" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xd06140af, "media_device_cleanup" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x9fb4c063, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x40133f35, "media_device_unregister" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc,i2c-core");


MODULE_INFO(srcversion, "A98091D964200C88ACB1A38");
