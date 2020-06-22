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
	{ 0x60a4c06b, "wmi_driver_unregister" },
	{ 0xb43ec756, "__wmi_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x9559234e, "dell_wmi_get_interface_version" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa3dcfa65, "dell_wmi_get_descriptor_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc2871e79, "dell_smbios_error" },
	{ 0x37a0cba, "kfree" },
	{ 0x45170471, "dell_smbios_call" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xb9400dbf, "dell_laptop_call_notifier" },
	{ 0x7cc484a5, "acpi_video_handles_brightness_key_presses" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdb064b1c, "sparse_keymap_report_entry" },
	{ 0xe76d743a, "sparse_keymap_entry_from_scancode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,dell-wmi-descriptor,dell-smbios,video");

MODULE_ALIAS("wmi:9DBB5994-A997-11DA-B012-B622A1EF5492");

MODULE_INFO(srcversion, "223C4FD616D31D3F114AFA4");
