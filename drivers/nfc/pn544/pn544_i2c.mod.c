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
	{ 0x2d3385d3, "system_wq" },
	{ 0x251da8de, "nfc_hci_recv_frame" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0xb4e9023d, "pn544_hci_remove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd7cdab38, "devm_acpi_dev_add_driver_gpios" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x3965dc08, "nfc_fw_download_done" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfeafa30, "pn544_hci_probe" },
};

MODULE_INFO(depends, "hci,i2c-core,pn544,crc-ccitt,nfc");

MODULE_ALIAS("of:N*T*Cnxp,pn544-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn544-i2cC*");
MODULE_ALIAS("acpi*:NXP5440:*");
MODULE_ALIAS("i2c:pn544");

MODULE_INFO(srcversion, "6AD54626CE8856F18FB5541");
