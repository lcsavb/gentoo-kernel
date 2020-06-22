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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xe0a05950, "drm_release" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c34b68, "drm_crtc_helper_set_config" },
	{ 0xc8595de7, "drm_compat_ioctl" },
	{ 0x64ba2336, "drm_get_edid" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc734e7ec, "drm_vram_mm_file_operations_mmap" },
	{ 0x8fd044c8, "drm_gem_vram_kunmap" },
	{ 0xf2ac350, "drm_mode_config_cleanup" },
	{ 0xdc2aa7a5, "drm_vram_helper_release_mm" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x5f5d6942, "drm_helper_probe_single_connector_modes" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5268de7e, "remove_conflicting_pci_framebuffers" },
	{ 0x5d042e44, "drm_encoder_init" },
	{ 0xbdd9ee37, "drm_gem_vram_mm_funcs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd43e2b77, "drm_connector_cleanup" },
	{ 0x21ddec67, "drm_fbdev_generic_setup" },
	{ 0xde4bb1ae, "drm_gem_vram_create" },
	{ 0x98229fb1, "drm_connector_update_edid_property" },
	{ 0x881e6e, "drm_helper_connector_dpms" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x5f8510d9, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x18baa19a, "drm_put_dev" },
	{ 0x56f2daee, "drm_gem_fb_create" },
	{ 0x6c80d14b, "drm_gem_object_put_unlocked" },
	{ 0xf75ae0eb, "drm_read" },
	{ 0x6ad6fe01, "drm_add_edid_modes" },
	{ 0xbb45a23f, "drm_connector_init_with_ddc" },
	{ 0x3840f49e, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xa38e2bd1, "vga_remove_vgacon" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xe268c8ec, "drm_gem_vram_fill_create_dumb" },
	{ 0x9776b680, "drm_gem_vram_unpin" },
	{ 0xa4c871e3, "drm_gem_vram_kmap" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xebb49169, "drm_ioctl" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8d85724a, "drm_get_pci_dev" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x52cf616e, "drm_connector_attach_encoder" },
	{ 0x97cab1e3, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x36693b90, "drm_crtc_init" },
	{ 0x4fa5c205, "drm_gem_vram_offset" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0x10ea3d5e, "drm_encoder_cleanup" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x9d6995b7, "drm_crtc_cleanup" },
	{ 0x92c01d4d, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3cf1365f, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x93079156, "drm_gem_prime_mmap" },
	{ 0xf1d5760e, "i2c_bit_add_bus" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdec1c514, "drm_connector_register" },
	{ 0x6136271a, "drm_mode_crtc_set_gamma_size" },
	{ 0x14763fed, "drm_mode_object_find" },
	{ 0x63d22571, "drm_poll" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2e4dc99c, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper,i2c-core,i2c-algo-bit");

MODULE_ALIAS("pci:v0000102Bd00000522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000532sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000538sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3AA709E3012111C641595E5");
