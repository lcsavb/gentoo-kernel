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
	{ 0xa6d9865a, "drm_atomic_helper_connector_destroy_state" },
	{ 0x38f3cbe7, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd43e2b77, "drm_connector_cleanup" },
	{ 0x5f5d6942, "drm_helper_probe_single_connector_modes" },
	{ 0x5ffdb3ec, "drm_atomic_helper_connector_reset" },
	{ 0xbb5f9e90, "drm_atomic_helper_commit" },
	{ 0xc77797e7, "drm_atomic_helper_check" },
	{ 0xe0a05950, "drm_release" },
	{ 0x2e4dc99c, "drm_open" },
	{ 0x69fd5166, "drm_gem_shmem_mmap" },
	{ 0xc8595de7, "drm_compat_ioctl" },
	{ 0xebb49169, "drm_ioctl" },
	{ 0x63d22571, "drm_poll" },
	{ 0xf75ae0eb, "drm_read" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x9f855dfc, "drm_gem_shmem_dumb_create" },
	{ 0x93079156, "drm_gem_prime_mmap" },
	{ 0x385c4323, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x8cd72a34, "drm_gem_prime_fd_to_handle" },
	{ 0x28e5d756, "drm_gem_prime_handle_to_fd" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a281859, "pv_ops" },
	{ 0xfccafee2, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x70fc1825, "drm_atomic_helper_damage_merged" },
	{ 0xf10de535, "ioread8" },
	{ 0x21ddec67, "drm_fbdev_generic_setup" },
	{ 0x379e8122, "drm_dev_register" },
	{ 0xba21d187, "drm_mode_config_reset" },
	{ 0x14a08aa1, "drm_simple_display_pipe_init" },
	{ 0x3e2ddf9, "drm_connector_init" },
	{ 0x92c01d4d, "drm_mode_config_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb8518a3, "drm_dev_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa38e2bd1, "vga_remove_vgacon" },
	{ 0x5268de7e, "remove_conflicting_pci_framebuffers" },
	{ 0xf3ab6c51, "drm_fb_xrgb8888_to_rgb565_dstclip" },
	{ 0x161c5d62, "drm_fb_memcpy_dstclip" },
	{ 0xb51a629d, "drm_fb_xrgb8888_to_rgb888_dstclip" },
	{ 0xaa4fde11, "drm_gem_shmem_vunmap" },
	{ 0xea37686, "drm_gem_shmem_vmap" },
	{ 0x848d372e, "iowrite8" },
	{ 0x36bf96a8, "drm_set_preferred_mode" },
	{ 0xe2942b9e, "drm_add_modes_noedid" },
	{ 0x342221c5, "drm_gem_fb_create_with_dirty" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x167b5374, "drm_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xf2ac350, "drm_mode_config_cleanup" },
	{ 0x6f9429e6, "drm_dev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "DEC12B4F2FC442A6445B8F1");
