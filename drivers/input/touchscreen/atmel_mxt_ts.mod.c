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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29361773, "complete" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0xad0cba41, "input_event" },
	{ 0xcabb7f6d, "input_mt_report_pointer_emulation" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "E6BAE1E69190FF0000A2856");
