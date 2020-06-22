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
	{ 0xfcec0987, "enable_irq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdee7c5d3, "i2c_put_adapter" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xc8426823, "i2c_get_adapter" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "F9027326400A350F0022FB5");
