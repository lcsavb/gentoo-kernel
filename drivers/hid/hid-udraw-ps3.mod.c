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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xad0cba41, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000020D6p0000CB17");

MODULE_INFO(srcversion, "827B64D49745AD1C163074B");
