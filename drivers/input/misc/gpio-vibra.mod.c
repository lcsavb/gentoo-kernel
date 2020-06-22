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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x75920cd5, "input_ff_create_memless" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");


MODULE_INFO(srcversion, "26F3243B941D19655257690");
