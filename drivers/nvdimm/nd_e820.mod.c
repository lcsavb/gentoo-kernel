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
	{ 0x2d56b737, "nvdimm_bus_attribute_group" },
	{ 0xf15b37a7, "nvdimm_pmem_region_create" },
	{ 0x1b4005c1, "nvdimm_bus_register" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x161efb90, "nd_region_attribute_group" },
	{ 0xb182155d, "nvdimm_bus_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x401edfe8, "nd_device_attribute_group" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0xcc935375, "walk_iomem_res_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c804ab8, "platform_driver_unregister" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "4BD6C260ADD55D9E6E3D169");
