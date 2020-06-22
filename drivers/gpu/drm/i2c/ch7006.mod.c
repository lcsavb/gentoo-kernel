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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xb2c15df6, "drm_property_create_range" },
	{ 0x5f5d6942, "drm_helper_probe_single_connector_modes" },
	{ 0xb3f51963, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x3ed02a68, "drm_object_attach_property" },
	{ 0x8eb501ca, "drm_mode_duplicate" },
	{ 0xc6b51239, "drm_mode_create_tv_properties" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3cea9a9d, "drm_crtc_helper_set_mode" },
	{ 0xaad36266, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x8868a3e6, "drm_property_destroy" },
	{ 0x7830231, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "i2c-core,drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "2E136D47188C67686B2B9F3");
