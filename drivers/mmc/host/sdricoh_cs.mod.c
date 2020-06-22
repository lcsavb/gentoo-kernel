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
	{ 0x1159a640, "param_ops_uint" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,mmc_core");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbC3901202pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbACE80909pc*pd*");

MODULE_INFO(srcversion, "014806DD60080BEA5967047");
