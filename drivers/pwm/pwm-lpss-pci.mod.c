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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xa321247f, "pwm_lpss_probe" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf85e7391, "pwm_lpss_remove" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pwm-lpss");

MODULE_ALIAS("pci:v00008086d00000AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AF19BA01319932BF15EEA4F");
