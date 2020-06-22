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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0xdb8dcc3, "drm_bridge_add" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xb71eead, "i2c_new_dummy" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0xc0a55a4e, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x966e542c, "drm_dp_link_configure" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x39341958, "drm_dp_dpcd_write" },
	{ 0x6d2d2ac, "drm_dp_link_power_up" },
	{ 0xd2cbdd4a, "drm_dp_link_probe" },
	{ 0x8d1ab596, "drm_helper_hpd_irq_event" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x98229fb1, "drm_connector_update_edid_property" },
	{ 0x64ba2336, "drm_get_edid" },
	{ 0x645b4dd9, "drm_dp_dpcd_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ad6fe01, "drm_add_edid_modes" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x52cf616e, "drm_connector_attach_encoder" },
	{ 0xdec1c514, "drm_connector_register" },
	{ 0x3e2ddf9, "drm_connector_init" },
	{ 0xc19c9751, "drm_dp_aux_register" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x67e1c81f, "gpiod_get_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xce0e5727, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:anx7814");

MODULE_INFO(srcversion, "C39C7C0125D2BF53A883673");
