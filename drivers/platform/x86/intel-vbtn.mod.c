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
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3d5dc63c, "acpi_create_platform_device" },
	{ 0x72676450, "acpi_match_device_ids" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad0cba41, "input_event" },
	{ 0x6bdef35c, "acpi_ec_mark_gpe_for_wake" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xc5850110, "printk" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0xe76d743a, "sparse_keymap_entry_from_scancode" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:INT33D6:*");

MODULE_INFO(srcversion, "E2CF221A80287FE488E92AC");
