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
	{ 0x5f1c150e, "smscore_register_hotplug" },
	{ 0xe506acc, "smscore_get_board_id" },
	{ 0x25279075, "sms_board_setup" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0xa2bd9956, "sms_board_event" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x29b82c34, "sms_board_lna_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6d6d153b, "smscore_putbuffer" },
	{ 0xd06140af, "media_device_cleanup" },
	{ 0x20439d8e, "smscore_unregister_hotplug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0x6d10c56, "sms_board_power" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x36b1fc18, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x3240b62c, "smscore_register_client" },
	{ 0x7813e863, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x40133f35, "media_device_unregister" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "8DA3BAA1B84ED234E2EE6A6");
