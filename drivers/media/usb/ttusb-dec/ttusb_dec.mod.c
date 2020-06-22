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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xc0f421c4, "ttusbdecfe_dvbs_attach" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0xeb33200e, "ttusbdecfe_dvbt_attach" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfb578fc5, "memset" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad0cba41, "input_event" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ttusbdecfe,dvb-core");

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "919EEA1BD9A7A3ECD84E7E6");
