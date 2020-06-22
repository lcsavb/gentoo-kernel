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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x68215b58, "dvb_register_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x83185323, "fw_iso_context_start" },
	{ 0x317d5c0, "fw_iso_context_queue_flush" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x331beb68, "dvb_generic_release" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xac51ef1f, "fw_iso_buffer_destroy" },
	{ 0xa9cf7b35, "dvb_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7d9ac42d, "fw_iso_context_queue" },
	{ 0x6a2f79c4, "dvb_generic_ioctl" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x43e73a96, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa2eb1cf5, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d91377d, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x4df02057, "crc32_be" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa25f8b41, "fw_iso_buffer_init" },
	{ 0x906d5355, "fw_run_transaction" },
	{ 0x9c7c8612, "fw_iso_context_destroy" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,firewire-core");

MODULE_ALIAS("ieee1394:ven00001287mo00000024sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000025sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000026sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000034sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000035sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000036sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "9C7AD7F1940ECC4E9413580");
