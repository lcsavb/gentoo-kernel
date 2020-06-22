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
	{ 0xaef89d5e, "rt2x00mac_tx_frames_pending" },
	{ 0x7fb9560b, "rt2x00mac_get_ringparam" },
	{ 0xb628e355, "rt2x00mac_get_antenna" },
	{ 0xcb0e54ca, "rt2x00mac_set_antenna" },
	{ 0xd92ccb80, "rt2x00mac_flush" },
	{ 0x18a73dda, "rt2x00mac_rfkill_poll" },
	{ 0xed7e8ae5, "rt2x00mac_conf_tx" },
	{ 0x2f06e9b5, "rt2x00mac_get_stats" },
	{ 0x1bf10b7f, "rt2x00mac_sw_scan_complete" },
	{ 0x557f871a, "rt2x00mac_sw_scan_start" },
	{ 0x9cf7c88b, "rt2x00mac_set_key" },
	{ 0x89e1a8c1, "rt2x00mac_set_tim" },
	{ 0xef9fa45f, "rt2x00mac_configure_filter" },
	{ 0x3abee6d, "rt2x00mac_bss_info_changed" },
	{ 0x4fe3a2d1, "rt2x00mac_config" },
	{ 0xd6e178b6, "rt2x00mac_remove_interface" },
	{ 0x64b96889, "rt2x00mac_add_interface" },
	{ 0x9ae03312, "rt2x00mac_stop" },
	{ 0x61b82900, "rt2x00mac_start" },
	{ 0xd3e5afb8, "rt2x00mac_tx" },
	{ 0x6fa6d65e, "rt2x00usb_flush_queue" },
	{ 0x769b58fd, "rt2x00usb_kick_queue" },
	{ 0x6e088e32, "rt2x00usb_watchdog" },
	{ 0x33a76429, "rt2x00usb_clear_entry" },
	{ 0x1ae8f75a, "rt2x00usb_uninitialize" },
	{ 0xe73968ee, "rt2x00usb_initialize" },
	{ 0x80bbb0c2, "rt2x00usb_resume" },
	{ 0xa212f334, "rt2x00usb_suspend" },
	{ 0xd8183831, "rt2x00usb_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x4f310de, "rt2x00lib_set_mac_address" },
	{ 0xaf22b5fe, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2cd385e, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e86c337, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x379378ea, "rt2x00debug_dump_frame" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f3f4b2, "rt2x00usb_vendor_request_buff" },
	{ 0x66eb8977, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
