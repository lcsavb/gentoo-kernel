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
	{ 0x519ddc40, "driver_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0x19c8fe81, "driver_create_file" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x17475388, "_dev_warn" },
	{ 0x7a3d332d, "fpga_mgr_register" },
	{ 0xe84488d6, "devm_fpga_mgr_create" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x470971a3, "pci_find_next_ext_capability" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xef180f0a, "pci_release_region" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x8c932f30, "fpga_mgr_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("pci:v00001172d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADF7E1B4B606CB312A936C6");
