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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0xad0cba41, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc6fa637d, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "855BAA1E598236A45600F29");
