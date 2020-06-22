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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0x56e0933c, "amd_mp2_rw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x519a034c, "set_primary_fwnode" },
	{ 0x1b843b6a, "i2c_acpi_find_bus_speed" },
	{ 0xf93e719a, "device_link_add" },
	{ 0x177b2a2b, "amd_mp2_register_cb" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xea862bda, "amd_mp2_find_device" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x9718e66d, "amd_mp2_unregister_cb" },
	{ 0x11b85f9b, "amd_mp2_bus_enable_set" },
	{ 0x127d6da6, "amd_mp2_rw_timeout" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x787a6bde, "amd_mp2_process_event" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-amd-mp2-pci");

MODULE_ALIAS("acpi*:AMDI0011:*");

MODULE_INFO(srcversion, "50A5CC89DC227602FE519FD");
