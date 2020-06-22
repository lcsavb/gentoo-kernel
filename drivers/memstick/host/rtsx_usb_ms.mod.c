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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x846318b6, "rtsx_usb_switch_clock" },
	{ 0xa472f097, "rtsx_usb_transfer_data" },
	{ 0x4f84f541, "rtsx_usb_card_exclusive_check" },
	{ 0xfd38f624, "rtsx_usb_ep0_write_register" },
	{ 0x4fe15e9f, "rtsx_usb_ep0_read_register" },
	{ 0xefeb1770, "rtsx_usb_get_rsp" },
	{ 0x45ddc0b5, "rtsx_usb_send_cmd" },
	{ 0x40e44c85, "rtsx_usb_add_cmd" },
	{ 0x76322ba9, "memstick_add_host" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5017f298, "memstick_alloc_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x93010e39, "rtsx_usb_write_register" },
	{ 0x47d74844, "rtsx_usb_read_register" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x6f3f6fea, "memstick_free_host" },
	{ 0xd926f038, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf0e0846b, "memstick_next_req" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8c446112, "memstick_suspend_host" },
	{ 0x680ad139, "memstick_resume_host" },
	{ 0xc24a75f7, "memstick_detect_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,memstick");

MODULE_ALIAS("platform:rtsx_usb_ms");

MODULE_INFO(srcversion, "0EA7D665C9A5E9B3B71BED1");
