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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xa6d9865a, "drm_atomic_helper_connector_destroy_state" },
	{ 0x38f3cbe7, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd43e2b77, "drm_connector_cleanup" },
	{ 0x5f5d6942, "drm_helper_probe_single_connector_modes" },
	{ 0x5ffdb3ec, "drm_atomic_helper_connector_reset" },
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
	{ 0xbb5f9e90, "drm_atomic_helper_commit" },
	{ 0xc77797e7, "drm_atomic_helper_check" },
	{ 0x342221c5, "drm_gem_fb_create_with_dirty" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x21ddec67, "drm_fbdev_generic_setup" },
	{ 0x379e8122, "drm_dev_register" },
	{ 0xba21d187, "drm_mode_config_reset" },
	{ 0x14a08aa1, "drm_simple_display_pipe_init" },
	{ 0x3e2ddf9, "drm_connector_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92c01d4d, "drm_mode_config_init" },
	{ 0xb8518a3, "drm_dev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6ad6fe01, "drm_add_edid_modes" },
	{ 0x98229fb1, "drm_connector_update_edid_property" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88271118, "drm_dev_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xaa4fde11, "drm_gem_shmem_vunmap" },
	{ 0x2b682ab9, "dma_buf_end_cpu_access" },
	{ 0x7a39a186, "dma_buf_begin_cpu_access" },
	{ 0xea37686, "drm_gem_shmem_vmap" },
	{ 0x93103119, "drm_dev_fini" },
	{ 0xf2ac350, "drm_mode_config_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a281859, "pv_ops" },
	{ 0xfccafee2, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x70fc1825, "drm_atomic_helper_damage_merged" },
	{ 0xd0574859, "drm_mode_object_get" },
	{ 0x167b5374, "drm_dev_put" },
	{ 0x4db5c1bb, "drm_dev_unplug" },
	{ 0xbe3023d, "drm_mode_object_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "43A54364B5059ADD66213BB");
