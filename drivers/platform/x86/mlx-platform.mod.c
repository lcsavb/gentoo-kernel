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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xc8426823, "i2c_get_adapter" },
	{ 0xdee7c5d3, "i2c_put_adapter" },
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0xab1b2d95, "devm_ioport_map" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("dmi*:rn*VMOD0001*:");
MODULE_ALIAS("dmi*:rn*VMOD0002*:");
MODULE_ALIAS("dmi*:rn*VMOD0003*:");
MODULE_ALIAS("dmi*:rn*VMOD0004*:");
MODULE_ALIAS("dmi*:rn*VMOD0005*:");
MODULE_ALIAS("dmi*:rn*VMOD0007*:");
MODULE_ALIAS("dmi*:pn*MSN274*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN24*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN27*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSB*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSX*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN21*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN201*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MQM87*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN37*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN34*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN38*:rvn*MellanoxTechnologies*:");

MODULE_INFO(srcversion, "79E10EB156CC6E247C787D4");
