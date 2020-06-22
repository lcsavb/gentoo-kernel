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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xe8d32f6a, "mfd_remove_devices" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xae359c03, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x5f5897ee, "mfd_add_devices" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ac7defe, "hid_set_field" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "mfd-core");

MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "9408E5408504C528CE75E74");
