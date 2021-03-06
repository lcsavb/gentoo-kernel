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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x99eaf1d0, "typec_switch_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd38040b, "typec_mux_get_drvdata" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x618b3ad8, "typec_mux_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xac6fc0a8, "typec_switch_unregister" },
	{ 0x516359ba, "typec_mux_register" },
	{ 0x5ebe221a, "typec_switch_register" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,typec");

MODULE_ALIAS("i2c:pi3usb30532");

MODULE_INFO(srcversion, "9FFD8755ABA77B290ADCE00");
