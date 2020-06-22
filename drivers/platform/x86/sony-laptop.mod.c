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
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x4f55166f, "acpi_set_current_resources" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2e76b019, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x58e526a5, "acpi_bus_get_status" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x5a921311, "strncmp" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x627bb501, "current_time" },
	{ 0x566257fc, "kill_fasync" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x4174c002, "param_ops_ulong" },
	{ 0x867234, "misc_deregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "backlight,rfkill,video");

MODULE_ALIAS("acpi*:SNY5001:*");
MODULE_ALIAS("acpi*:SNY6001:*");

MODULE_INFO(srcversion, "2AFE8A2B9D774759948D96A");
