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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0xa571ade0, "__platform_driver_probe" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xad0cba41, "input_event" },
	{ 0xdff396a7, "serio_interrupt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x30b2832b, "i8042_remove_filter" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf7d38860, "i8042_install_filter" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20017*:pvr*LenovoIdeaPadY550*:");
MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20035*:pvr*LenovoIdeaPadY550P*:");

MODULE_INFO(srcversion, "D9237722A08D77EEFE91FCC");
