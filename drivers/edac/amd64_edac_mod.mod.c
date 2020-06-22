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
	{ 0x81221cad, "amd_nb_num" },
	{ 0xcf29d39, "edac_mc_add_mc_with_groups" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x665987cc, "node_to_amd_nb" },
	{ 0x3441445f, "msrs_free" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xd4152ad1, "edac_pci_release_generic_ctl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5a5c84c, "msrs_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf05c32ad, "rdmsr_on_cpus" },
	{ 0x4f0af3a3, "edac_mc_handle_error" },
	{ 0x14878009, "amd_report_gart_errors" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x830c469f, "amd_register_ecc_decoder" },
	{ 0xf65df7f8, "edac_mc_free" },
	{ 0xf4a565fd, "wrmsr_on_cpus" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x64dcc3ae, "edac_mc_alloc" },
	{ 0xe425e470, "edac_pci_create_generic_ctl" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0x9817af80, "find_mci_by_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0xd919806a, "amd_cache_northbridges" },
	{ 0xaf761418, "amd_unregister_ecc_decoder" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x6cc032b, "edac_mc_find" },
	{ 0x62671bad, "edac_mc_del_mc" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xa9854364, "umc_normaddr_to_sysaddr" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0xefeafcf1, "edac_has_mcs" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

MODULE_INFO(depends, "edac_mce_amd");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0010mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0015mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0016mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0009fam0018mod*:feature:*");

MODULE_INFO(srcversion, "886379A160503E1AAD25817");
