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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xc479d27, "adf_reset_sbr" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x30cdd1b6, "pcie_set_readrq" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xe0cb26a6, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x13453842, "adf_dev_stop" },
	{ 0x14076521, "adf_devmgr_rm_dev" },
	{ 0xbda81799, "adf_init_arb" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd43c9c9f, "adf_dev_shutdown" },
	{ 0x688d2ed4, "adf_disable_aer" },
	{ 0xcb2af5fd, "adf_cfg_dev_add" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xc5850110, "printk" },
	{ 0xa9bac2c, "adf_isr_resource_alloc" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x1ac5f5e8, "adf_cfg_dev_remove" },
	{ 0xc4663702, "adf_disable_sriov" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1c6a24e8, "adf_isr_resource_free" },
	{ 0x7e62b22, "adf_devmgr_add_dev" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0x9d5e05f9, "adf_dev_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8612f35, "adf_sriov_configure" },
	{ 0xa1efcb84, "adf_enable_aer" },
	{ 0x109b9b5d, "adf_send_admin_init" },
	{ 0x16f4633d, "adf_init_admin_comms" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xf9e6db08, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x944c43f, "node_states" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xb1ae41cc, "adf_devmgr_pci_to_accel_dev" },
	{ 0x59165a10, "adf_exit_admin_comms" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xd5ac648, "adf_exit_arb" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d00000435sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F4B29900621C3205AD749AF");
