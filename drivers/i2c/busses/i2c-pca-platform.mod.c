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
	{ 0x3eeb2322, "__wake_up" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x8fdf3be7, "i2c_pca_add_numbered_bus" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xae4a8504, "platform_get_irq_optional" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x17475388, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-algo-pca,i2c-core");


MODULE_INFO(srcversion, "0A6B6789A2A39B1BDA9C39F");
