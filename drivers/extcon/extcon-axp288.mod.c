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
	{ 0xfed8f9b1, "device_connection_remove" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x4b0285c5, "device_connection_add" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xa9e6a3d1, "devm_extcon_register_notifier_all" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xaa45f1f7, "devm_extcon_dev_register" },
	{ 0xa054c4e6, "devm_extcon_dev_allocate" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x94bd2068, "put_device" },
	{ 0x5110b3c9, "extcon_get_extcon_dev" },
	{ 0x7d0fe4c6, "acpi_dev_get_first_match_dev" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xb6101e02, "usb_role_switch_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17475388, "_dev_warn" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc56044c3, "extcon_set_state_sync" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x4391f7a4, "extcon_get_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("platform:axp288_extcon");

MODULE_INFO(srcversion, "07B1C2D26E7F92D458E2C65");
