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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6cb0179, "rtsx_pci_card_power_on" },
	{ 0xc0ef5a85, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x45ca1fde, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xe63605f4, "rtsx_pci_card_power_off" },
	{ 0xf3aa65dc, "rtsx_pci_card_exclusive_check" },
	{ 0xc24a75f7, "memstick_detect_change" },
	{ 0x69b9ba50, "rtsx_pci_transfer_data" },
	{ 0xa7c66231, "rtsx_pci_send_cmd_no_wait" },
	{ 0x3dfdc66c, "rtsx_pci_switch_clock" },
	{ 0x8e65c5b8, "rtsx_pci_start_run" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x114b0eb2, "rtsx_pci_write_register" },
	{ 0x571ff63c, "rtsx_pci_read_register" },
	{ 0x1ddf4723, "rtsx_pci_send_cmd" },
	{ 0x1c188950, "rtsx_pci_add_cmd" },
	{ 0x76322ba9, "memstick_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5017f298, "memstick_alloc_host" },
	{ 0x6f3f6fea, "memstick_free_host" },
	{ 0xd926f038, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf0e0846b, "memstick_next_req" },
	{ 0x6473c7f3, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8c446112, "memstick_suspend_host" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x680ad139, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,memstick");

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "B3E914813B70C28F08D4E99");
