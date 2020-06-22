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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0x3a282a1a, "dvb_frontend_suspend" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0xf7c78993, "dvb_frontend_resume" },
	{ 0xd0f88e01, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0xa3114135, "rc_free_device" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xd06140af, "media_device_cleanup" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x9fb4c063, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x40133f35, "media_device_unregister" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc,i2c-core");


MODULE_INFO(srcversion, "E613B09C232368D460779F5");
