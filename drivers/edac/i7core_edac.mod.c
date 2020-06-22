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
	{ 0x374a1918, "param_ops_int" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xf24117c0, "pci_unregister_driver" },
	{ 0x9b9f3648, "pcibios_scan_specific_bus" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x400377d7, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xcc6957ab, "edac_pci_create_generic_ctl" },
	{ 0x7329f5e2, "device_add" },
	{ 0x80288904, "dev_set_name" },
	{ 0x2db17f55, "device_initialize" },
	{ 0x1daa88ab, "edac_mc_add_mc_with_groups" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8432bac0, "edac_mc_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0x286b2ae, "pci_dev_get" },
	{ 0xc3df01ad, "pci_enable_device" },
	{ 0x8c4e5571, "pci_get_device" },
	{ 0x87101c4e, "pci_find_next_bus" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x637fa995, "pci_dev_put" },
	{ 0x6b8a44d5, "edac_mc_free" },
	{ 0xbbb0677d, "edac_mc_del_mc" },
	{ 0x89fee4e, "put_device" },
	{ 0x686dbd24, "device_del" },
	{ 0x4840fd01, "edac_pci_release_generic_ctl" },
	{ 0x5c17a587, "edac_mc_handle_error" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x424aba84, "pci_write_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5b8a4255, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000342Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C430B331228033F350ED7F9");
