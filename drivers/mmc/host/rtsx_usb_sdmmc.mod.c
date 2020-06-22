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
	{ 0x48c2620a, "rtsx_usb_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xa472f097, "rtsx_usb_transfer_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4fe15e9f, "rtsx_usb_ep0_read_register" },
	{ 0x846318b6, "rtsx_usb_switch_clock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0x4f84f541, "rtsx_usb_card_exclusive_check" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93010e39, "rtsx_usb_write_register" },
	{ 0x47d74844, "rtsx_usb_read_register" },
	{ 0x87f19024, "rtsx_usb_read_ppbuf" },
	{ 0xefeb1770, "rtsx_usb_get_rsp" },
	{ 0x45ddc0b5, "rtsx_usb_send_cmd" },
	{ 0x40e44c85, "rtsx_usb_add_cmd" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xfd38f624, "rtsx_usb_ep0_write_register" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa3e706c3, "rtsx_usb_get_card_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,mmc_core");

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "9FB7A9BF9EB028301A802C1");
