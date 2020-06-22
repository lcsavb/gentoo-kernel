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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x2e34683b, "__devm_create_dev_dax" },
	{ 0x77358855, "iomem_resource" },
	{ 0x6e03c6f8, "nvdimm_namespace_common_probe" },
	{ 0xdb171e14, "devm_nsio_disable" },
	{ 0x1f9f498d, "alloc_dax_region" },
	{ 0x17475388, "_dev_warn" },
	{ 0x259badda, "devm_nsio_enable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb329df6b, "dax_region_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4dbe62c, "nvdimm_setup_pfn" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce96644, "to_nd_dax" },
	{ 0x51c663d6, "to_nd_region" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "2B48A802BC85C0EA54B5E69");
