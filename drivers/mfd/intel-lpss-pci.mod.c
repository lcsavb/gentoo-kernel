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
	{ 0x88b48e8c, "intel_lpss_resume" },
	{ 0x53c081bb, "intel_lpss_suspend" },
	{ 0x7178964a, "intel_lpss_prepare" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x48203a56, "intel_lpss_probe" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xa437d2fb, "intel_lpss_remove" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-lpss");

MODULE_ALIAS("pci:v00008086d000002A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B78sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B79sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A12Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A32Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B10E2DA6AB8B7A9674707B8");
