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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xa2413051, "pm_relax" },
	{ 0x96848186, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x933efdaa, "device_property_read_string" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x4b088d38, "device_get_child_node_count" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0xa76474c2, "gpiod_set_debounce" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa9247868, "gpiod_is_active_low" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0xb492c183, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x550f97b4, "devm_request_any_context_irq" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x38367274, "pm_stay_awake" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xad0cba41, "input_event" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x17475388, "_dev_warn" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
