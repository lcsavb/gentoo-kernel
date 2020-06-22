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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xc01aa915, "nfc_alloc_recv_skb" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd789caba, "nfc_digital_register_device" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x84103f97, "nfc_digital_allocate_device" },
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xec0aa2b6, "devm_gpiod_get_index_optional" },
	{ 0x70edc336, "devm_gpiod_get_index" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf2f3f65, "nfc_digital_free_device" },
	{ 0x43ffb7ba, "nfc_digital_unregister_device" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "1D42F87F197EEB48234EE3E");
