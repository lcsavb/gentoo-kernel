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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x3097baff, "__rtc_register_device" },
	{ 0xf5efee6d, "devm_rtc_allocate_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0xb7e1e25d, "rtc_update_irq" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2A8CA0967EC4EA850220B2");
