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
	{ 0xe9982a13, "sst_context_init" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0xcb4fd30a, "sst_context_cleanup" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0xce51c7fc, "sst_alloc_drv_context" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xf02a87f8, "intel_sst_pm" },
	{ 0x7337ae49, "sst_configure_runtime_pm" },
	{ 0x709cd25f, "relocate_imr_addr_mrfld" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "snd-intel-sst-core");


MODULE_INFO(srcversion, "F16587AB81DA2F95A75068F");
