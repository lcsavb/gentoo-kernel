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
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe90e6d09, "device_wakeup_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8c07c5a6, "usb_get_from_anchor" },
	{ 0xf5d8d8fa, "usb_enable_autosuspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xef4ca8c2, "btrtl_shutdown_realtek" },
	{ 0x6b280be5, "btrtl_setup_realtek" },
	{ 0x313ceb67, "btbcm_setup_apple" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0x320faa8b, "btbcm_set_bdaddr" },
	{ 0x45c3b3a2, "btbcm_setup_patchram" },
	{ 0x1b895e6d, "usb_match_id" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0xc0c69f14, "btintel_set_diag" },
	{ 0xe531441f, "btintel_hw_error" },
	{ 0xef8cdded, "btintel_set_bdaddr" },
	{ 0xc0373ded, "btintel_set_diag_mfg" },
	{ 0x3bc493ee, "gpiod_get_optional" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbcafef2b, "hci_recv_diag" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x1c234e67, "btintel_set_event_mask" },
	{ 0x2e21279c, "btintel_load_ddc_config" },
	{ 0xbdbfb11e, "btintel_send_intel_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfdfec6f6, "btintel_download_firmware" },
	{ 0x3133114b, "btintel_read_boot_params" },
	{ 0xbff3fe42, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0x3417c42c, "btintel_check_bdaddr" },
	{ 0x999af4ce, "btintel_set_event_mask_mfg" },
	{ 0x78a07301, "btintel_exit_mfg" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x392c4652, "__hci_cmd_sync_ev" },
	{ 0x5e9c8336, "btintel_enter_mfg" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0xcef2a1ad, "btintel_read_version" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8790ad6a, "__hci_cmd_sync" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btrtl,btbcm,bluetooth,btintel");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCE052A6E82A97DBD26331C");
