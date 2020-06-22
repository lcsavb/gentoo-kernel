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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe425e470, "edac_pci_create_generic_ctl" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xcf29d39, "edac_mc_add_mc_with_groups" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0x391c97b1, "pci_scan_single_device" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x64dcc3ae, "edac_mc_alloc" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x4f0af3a3, "edac_mc_handle_error" },
	{ 0xa401e169, "edac_mc_find_csrow_by_page" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xc5850110, "printk" },
	{ 0xf65df7f8, "edac_mc_free" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x62671bad, "edac_mc_del_mc" },
	{ 0xd4152ad1, "edac_pci_release_generic_ctl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003590sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000359Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000035B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F92414C434A5AC60A2C1AE7");
