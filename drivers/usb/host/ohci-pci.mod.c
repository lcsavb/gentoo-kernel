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
	{ 0xf2e98682, "usb_hcd_pci_pm_ops" },
	{ 0x4378caa4, "usb_hcd_pci_shutdown" },
	{ 0xece83274, "usb_hcd_pci_remove" },
	{ 0xba118c8a, "usb_hcd_pci_probe" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf979d856, "ohci_resume" },
	{ 0x6d9a28d0, "ohci_suspend" },
	{ 0x4914f230, "ohci_init_driver" },
	{ 0xc5850110, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7964ec6d, "ohci_restart" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd87fc0a0, "usb_amd_prefetch_quirk" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xcdfb4f01, "ohci_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32d5a1b9, "pci_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ohci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A055ECA40828DB08D4CDE4");
