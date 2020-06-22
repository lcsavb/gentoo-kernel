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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xad0cba41, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0x82e367b9, "sysfs_merge_group" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x935d41c7, "sysfs_unmerge_group" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xaa92d4c6, "i2c_smbus_xfer" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x3f4eb6c0, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x95b86149, "i2c_smbus_write_i2c_block_data" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "i2c-core,crc-itu-t");

MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "AC30D18DCD18C9C272DC60A");
