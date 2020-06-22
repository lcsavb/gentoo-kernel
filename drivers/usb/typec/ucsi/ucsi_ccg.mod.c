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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4841bdee, "strnchr" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x91d805c1, "ucsi_register_ppm" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb636b978, "device_property_read_u16_array" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xc7891ef0, "ucsi_notify" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xc61460dd, "ucsi_unregister_ppm" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x815fdc2d, "ucsi_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,typec_ucsi");

MODULE_ALIAS("i2c:ccgx-ucsi");

MODULE_INFO(srcversion, "29B9E12ADC88EF92DF73CFD");
