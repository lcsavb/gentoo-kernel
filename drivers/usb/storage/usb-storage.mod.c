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
	{ 0x175e5248, "scsi_get_host_dev" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x38c858e9, "sg_miter_skip" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x5f8844bd, "usb_sg_wait" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x2193496b, "usb_reset_endpoint" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7a434048, "scsi_eh_restore_cmnd" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x861a6924, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xc9437a2d, "blk_queue_update_dma_alignment" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xfb6fd446, "blk_queue_bounce_limit" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6d56570, "dma_max_mapping_size" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6238ec42, "usb_sg_cancel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86d8d47a, "scsi_eh_prep_cmnd" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfbcee99, "usb_autopm_get_interface_no_resume" },
	{ 0xf393e473, "usb_autopm_put_interface_no_suspend" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xafd7db4c, "usb_sg_init" },
	{ 0x62a2a42, "scsi_report_bus_reset" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x90966e04, "scsi_report_device_reset" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v03EBp2002d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EEp6906d0003dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0107d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p070Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p4002d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp6205d0003dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p001Cd0113dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAACEd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAAF5d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAAF6d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0420p0001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d059[2-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0433d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0434d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0444d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0446d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p044Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd03[7-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd0[4-5]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d045[2-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d04[6-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d0[5-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0495d0370dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p04B9d0350dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p05AFd0742dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p06AAd1110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5416d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0457p0150d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0457p0151d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045EpFFFFd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046BpFF40d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0480pD010d0[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0480pD010d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0101d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0107d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A4p0004d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3010d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B0p0301d0010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4001d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0601d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0602d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d2210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d220*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d2[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CEp0002d026Cdc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0901d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0901d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0D05d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp2372d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp2373d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0001d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0002d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0006d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0006d0205dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0007d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0007d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0009d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Ad0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Bd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Cd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0101d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p507Cd0220dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5136d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp80C2d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0115d0133dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA140d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1801d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1804d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1807d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1905d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1911d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d010[6-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0450dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d01[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d04[0-4]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0[2-3]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d05*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0025d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd050[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd2000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd05[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd0[6-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd1*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Dd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed010[6-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed0310dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed01[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed030*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed02*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed0500dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp016Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02A5d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d020*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d0[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Bp0000d0[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Bp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Fp6387d0141dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d2210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d220*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d2[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Bp0001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Bp0040d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp0643d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp0651d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0060d110[4-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0060d1110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp120Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d011[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d00*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0723d9451dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0636p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p0000d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Fp8000d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp1063d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2317d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d010[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0686p4011d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0686p4017d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0693p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Bp3004d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CAp2003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp3203d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp32BBd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp3203d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0727p0306d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0001d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0002d0009dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07ABpFCCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0004d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0004d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA4A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp1001d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp1167d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0839p000Ad0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0082d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0084d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0085d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084BpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084Dp0011d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0851p1542d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0851p1543d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0026d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0026d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0028d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0028d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08BDp1100d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp3103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1050d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp1000d1100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp1132d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp6000d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0004d1000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp2011d0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp20FFd0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3010d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p1060d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad0[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DC4p0073d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DD8p1060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DD8pD202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DDAp0001d0012dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DDAp0301d0012dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E21p0520d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p6660d0300dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p6660d0[1-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EA0p2168d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EA0p6828d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p7636d0103dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F19p0103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F19p0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p042Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCAp8004d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpD008d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpD0E1d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE030d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE031d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE092d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d00*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p070Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10D6p2200d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1186p3E04d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0FFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1210p0003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1001d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1003d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1004d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1401d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1402d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1403d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1404d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1405d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1406d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1407d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1408d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1409d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1410d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1411d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1412d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1413d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1414d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1415d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1416d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1417d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1418d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1419d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1420d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1421d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1422d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1423d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1424d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1425d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1426d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1427d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1428d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1429d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1430d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1431d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1432d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1433d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1434d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1435d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1436d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1437d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1438d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1439d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v132Bp000Bd0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1370p6828d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3609d0209dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FEp3600d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6600d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d011[4-7]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp2329d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp2566d0114dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp2567d0117dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp9561d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0007d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0007d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1652p6600d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v174Cp55AAd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0400d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p1315d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p1320d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p3335d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p1225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B1Cp1AB5d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E68p001Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E74p4621d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2027pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2116p0320d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p3010d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6426d0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2735p100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2CA3p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3340pFFFFd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d0114dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4102p1020d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4102p1059d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4146pBA01d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vC251p4003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vED06p4500d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vED10p7636d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");

MODULE_INFO(srcversion, "E919CDF81BCB80D4A97149D");
