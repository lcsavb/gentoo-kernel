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
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xd7c3e743, "usb_role_switch_register" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0xf29cdf27, "software_node_register" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17475388, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x8d6ac24d, "software_node_fwnode" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("platform:intel_xhci_usb_sw");

MODULE_INFO(srcversion, "366FCEEC632F329C43F8214");
