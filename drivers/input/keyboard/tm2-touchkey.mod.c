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
	{ 0xfcec0987, "enable_irq" },
	{ 0x17475388, "_dev_warn" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xad0cba41, "input_event" },
	{ 0xc501cc3c, "i2c_smbus_read_byte" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa856a451, "regulator_set_voltage" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkey");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkeyC*");
MODULE_ALIAS("i2c:tm2-touchkey");

MODULE_INFO(srcversion, "9B15999D6DB51D634FA0026");
