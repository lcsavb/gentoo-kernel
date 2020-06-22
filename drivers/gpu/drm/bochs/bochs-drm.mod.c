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
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x379e8122, "drm_dev_register" },
	{ 0xc8595de7, "drm_compat_ioctl" },
	{ 0xa2a1d1a5, "drm_dev_alloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xab838f60, "drm_mode_config_helper_resume" },
	{ 0xc734e7ec, "drm_vram_mm_file_operations_mmap" },
	{ 0xf2ac350, "drm_mode_config_cleanup" },
	{ 0xdc2aa7a5, "drm_vram_helper_release_mm" },
	{ 0xba21d187, "drm_mode_config_reset" },
	{ 0x5ffdb3ec, "drm_atomic_helper_connector_reset" },
	{ 0x36bf96a8, "drm_set_preferred_mode" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x5f5d6942, "drm_helper_probe_single_connector_modes" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x5268de7e, "remove_conflicting_pci_framebuffers" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdd9ee37, "drm_gem_vram_mm_funcs" },
	{ 0xd43e2b77, "drm_connector_cleanup" },
	{ 0x9a93b1a3, "drm_do_get_edid" },
	{ 0x14a08aa1, "drm_simple_display_pipe_init" },
	{ 0x38f3cbe7, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x21ddec67, "drm_fbdev_generic_setup" },
	{ 0x87d328ee, "drm_connector_attach_edid_property" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0x98229fb1, "drm_connector_update_edid_property" },
	{ 0x881e6e, "drm_helper_connector_dpms" },
	{ 0x167b5374, "drm_dev_put" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6f9429e6, "drm_dev_unregister" },
	{ 0x5f8510d9, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x56f2daee, "drm_gem_fb_create" },
	{ 0xf75ae0eb, "drm_read" },
	{ 0x6ad6fe01, "drm_add_edid_modes" },
	{ 0x3840f49e, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xa38e2bd1, "vga_remove_vgacon" },
	{ 0x944b2c94, "drm_mode_config_helper_suspend" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x3e2ddf9, "drm_connector_init" },
	{ 0x9776b680, "drm_gem_vram_unpin" },
	{ 0xebb49169, "drm_ioctl" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa6d9865a, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc77797e7, "drm_atomic_helper_check" },
	{ 0xbb5f9e90, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfccafee2, "drm_crtc_send_vblank_event" },
	{ 0xe2942b9e, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x92c01d4d, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xfb689a49, "drm_atomic_helper_shutdown" },
	{ 0x3cf1365f, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x93079156, "drm_gem_prime_mmap" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7d10086d, "drm_gem_vram_driver_dumb_create" },
	{ 0xdec1c514, "drm_connector_register" },
	{ 0x63d22571, "drm_poll" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0x2e4dc99c, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper");

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DBDB412D70DEF1E5B28683F");
