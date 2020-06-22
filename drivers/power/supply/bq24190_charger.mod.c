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
	{ 0xb5c4ea33, "rdev_get_drvdata" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xdd65ca27, "power_supply_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x182b9d7, "power_supply_register" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xaa45f1f7, "devm_extcon_dev_register" },
	{ 0xa054c4e6, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0xa7b3b8cc, "devm_regulator_register" },
	{ 0x6da9e8f6, "power_supply_get_battery_info" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6312d169, "power_supply_set_input_current_limit_from_supplier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x17475388, "_dev_warn" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xc56044c3, "extcon_set_state_sync" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "95FC26E29A4DBE75E508E1B");
