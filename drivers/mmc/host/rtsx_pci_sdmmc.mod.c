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
	{ 0x441e5d91, "rtsx_pci_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x84a4c480, "rtsx_pci_dma_transfer" },
	{ 0xa7c66231, "rtsx_pci_send_cmd_no_wait" },
	{ 0xa9dc2cfe, "rtsx_pci_read_ppbuf" },
	{ 0x3dfdc66c, "rtsx_pci_switch_clock" },
	{ 0xc6cb0179, "rtsx_pci_card_power_on" },
	{ 0xc0ef5a85, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x45ca1fde, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xe63605f4, "rtsx_pci_card_power_off" },
	{ 0x1ddf4723, "rtsx_pci_send_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb42f8fa7, "rtsx_pci_switch_output_voltage" },
	{ 0x571ff63c, "rtsx_pci_read_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf3aa65dc, "rtsx_pci_card_exclusive_check" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1a35dd3f, "rtsx_pci_dma_map_sg" },
	{ 0x30ab3896, "rtsx_pci_card_exist" },
	{ 0xf2c45500, "rtsx_pci_dma_unmap_sg" },
	{ 0x1c188950, "rtsx_pci_add_cmd" },
	{ 0xe484e35f, "ioread32" },
	{ 0x8e65c5b8, "rtsx_pci_start_run" },
	{ 0x114b0eb2, "rtsx_pci_write_register" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0x6473c7f3, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci,mmc_core");

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "B8BC3A9CFAD037D8EBF5848");
