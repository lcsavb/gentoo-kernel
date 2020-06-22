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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0xbfc65096, "pcim_pin_device" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x519a034c, "set_primary_fwnode" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x827e61f8, "acpi_has_watchdog" },
	{ 0x4cbf0428, "pci_bus_read_config_dword" },
	{ 0xd51fe13e, "pci_bus_write_config_byte" },
	{ 0x7f83e6a2, "pci_bus_read_config_byte" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc65e938c, "i2c_handle_smbus_host_notify" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x37a0cba, "kfree" },
	{ 0x81188c30, "match_string" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x17475388, "_dev_warn" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "35FD5AA251AF701850E4708");
