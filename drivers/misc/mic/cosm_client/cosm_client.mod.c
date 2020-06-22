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
	{ 0xf9a482f9, "msleep" },
	{ 0xd57d2bb3, "scif_close" },
	{ 0x79652523, "send_sig" },
	{ 0xc2cf810, "scif_send" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xa5804d6e, "scif_open" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x66613608, "scif_client_register" },
	{ 0xba108e01, "scif_recv" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x573f3ca2, "scif_client_unregister" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x7a95e5ae, "do_settimeofday64" },
	{ 0x29b92641, "scif_connect" },
	{ 0x19dd143b, "scif_poll" },
};

MODULE_INFO(depends, "scif");


MODULE_INFO(srcversion, "48DC6D7DC03A2A0EFF593C2");
