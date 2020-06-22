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
	{ 0x421d7efa, "kfree_skb" },
	{ 0x99704589, "ieee802154_rx_irqsafe" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x29361773, "complete" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd6a9a169, "debugfs_create_devm_seqfile" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xc804b2f8, "ieee802154_register_hw" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2acec9a2, "ieee802154_alloc_hw" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe8799010, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x81388c67, "ieee802154_free_hw" },
	{ 0x63748c50, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:adf7242");
MODULE_ALIAS("spi:adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7242");
MODULE_ALIAS("of:N*T*Cadi,adf7242C*");
MODULE_ALIAS("of:N*T*Cadi,adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7241C*");

MODULE_INFO(srcversion, "862F2ED70254A244FA2CD84");
