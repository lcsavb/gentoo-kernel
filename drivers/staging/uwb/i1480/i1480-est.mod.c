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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x5a5bcae2, "uwb_est_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xf9e82859, "uwb_est_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uwb");

MODULE_ALIAS("usb:v8086pDF3Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F88CF98FF27AFFC97B2EF90");
