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
	{ 0x1035c7c2, "__release_region" },
	{ 0x3d2a8587, "telemetry_set_pltdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x659f040f, "intel_pmc_ipc_command" },
	{ 0x8ee9455e, "intel_punit_ipc_command" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedc03953, "iounmap" },
	{ 0x5847f501, "telemetry_clear_pltdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_telemetry_core,intel_punit_ipc");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");

MODULE_INFO(srcversion, "968D8C56B53276DD7CE341C");
