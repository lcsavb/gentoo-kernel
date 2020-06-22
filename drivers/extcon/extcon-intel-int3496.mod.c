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
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xaa45f1f7, "devm_extcon_dev_register" },
	{ 0xa054c4e6, "devm_extcon_dev_allocate" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd7cdab38, "devm_acpi_dev_add_driver_gpios" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc56044c3, "extcon_set_state_sync" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3496:*");

MODULE_INFO(srcversion, "64738E32956F944AF8CCA97");
