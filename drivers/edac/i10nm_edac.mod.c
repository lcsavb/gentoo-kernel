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
	{ 0x3d38ff95, "module_layout" },
	{ 0x1daa88ab, "edac_mc_add_mc_with_groups" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x286b2ae, "pci_dev_get" },
	{ 0x1038b96f, "adxl_get_component_names" },
	{ 0x95ef1ccc, "dmi_memdev_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5c17a587, "edac_mc_handle_error" },
	{ 0xb85cb645, "pci_get_domain_bus_and_slot" },
	{ 0x6b8a44d5, "edac_mc_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8432bac0, "edac_mc_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5b8a4255, "pci_read_config_dword" },
	{ 0x499bbf57, "nfit_get_smbios_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x791748c8, "adxl_decode" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c4e5571, "pci_get_device" },
	{ 0xbbb0677d, "edac_mc_del_mc" },
	{ 0x637fa995, "pci_dev_put" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3df01ad, "pci_enable_device" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

MODULE_INFO(depends, "nfit");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");

MODULE_INFO(srcversion, "6ABF0CD79E7C948785F5FA7");
