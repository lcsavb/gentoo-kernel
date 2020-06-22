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
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0xdb064b1c, "sparse_keymap_report_entry" },
	{ 0xe76d743a, "sparse_keymap_entry_from_scancode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,ledtrig-audio,sparse-keymap");

MODULE_ALIAS("wmi:59142400-C6A3-40fa-BADB-8A2652834100");
MODULE_ALIAS("wmi:ABBC0F5C-8EA1-11D1-A000-C90629100000");

MODULE_INFO(srcversion, "8243F66E2EF9DECD186F2D2");
