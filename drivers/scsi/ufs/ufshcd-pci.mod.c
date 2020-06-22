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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0xf1d32450, "ufshcd_init" },
	{ 0x4ed05789, "ufshcd_alloc_host" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x3a510b5d, "ufshcd_dealloc_host" },
	{ 0x82e3e9b5, "ufshcd_remove" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x4e33e53e, "ufshcd_shutdown" },
	{ 0x55c2b2e4, "ufshcd_system_suspend" },
	{ 0xb5a1e1ae, "ufshcd_system_resume" },
	{ 0x4f4ba9f4, "ufshcd_runtime_suspend" },
	{ 0xe66e8cba, "ufshcd_runtime_resume" },
	{ 0x9c696ea1, "ufshcd_runtime_idle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3db8b3f1, "ufshcd_dme_set_attr" },
	{ 0x12bed0de, "ufshcd_dme_get_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-core");

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B43sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6915A58F7CEFCA8C8F2FBC9");
