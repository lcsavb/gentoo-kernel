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
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:TPS0001:*");
MODULE_ALIAS("acpi*:TPSACPI01:*");

MODULE_INFO(srcversion, "16A5C2775E9AC0963E1D355");
