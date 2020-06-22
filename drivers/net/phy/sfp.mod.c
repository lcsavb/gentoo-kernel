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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa393cfd8, "hwmon_device_register_with_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x536822e3, "sfp_module_insert" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b413c9b, "sfp_link_down" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x4870666c, "sfp_add_phy" },
	{ 0xf5b8fe94, "mdiobus_scan" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x58def6ca, "sfp_module_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8089c6c5, "phy_device_free" },
	{ 0x2359cbee, "phy_device_remove" },
	{ 0x6129fb93, "sfp_remove_phy" },
	{ 0xf3225e40, "phy_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0xceac1bd, "sfp_register_socket" },
	{ 0x17475388, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0xcaa3b106, "mdio_i2c_alloc" },
	{ 0x11b1b6d5, "i2c_acpi_find_adapter_by_handle" },
	{ 0xa1e13ea5, "__acpi_node_get_property_reference" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xbd4f8c4a, "gpiod_direction_input" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xdee7c5d3, "i2c_put_adapter" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x66b97421, "sfp_link_up" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xb6787346, "sfp_unregister_socket" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,mdio-i2c,i2c-core");

MODULE_ALIAS("of:N*T*Csff,sff");
MODULE_ALIAS("of:N*T*Csff,sffC*");
MODULE_ALIAS("of:N*T*Csff,sfp");
MODULE_ALIAS("of:N*T*Csff,sfpC*");

MODULE_INFO(srcversion, "E3EB9538D7A52C2D2DF6810");
