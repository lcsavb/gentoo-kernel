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
	{ 0x8993a7de, "tcp_vegas_get_info" },
	{ 0x7bb4ccd4, "tcp_reno_undo_cwnd" },
	{ 0x8be9a5d7, "tcp_vegas_cwnd_event" },
	{ 0x18ecc2ce, "tcp_vegas_state" },
	{ 0x2f52f6c1, "tcp_unregister_congestion_control" },
	{ 0x190f88e0, "tcp_register_congestion_control" },
	{ 0xd5360c30, "tcp_vegas_init" },
	{ 0x7d310b25, "tcp_cong_avoid_ai" },
	{ 0x645fa37b, "tcp_slow_start" },
	{ 0x20d6856c, "tcp_vegas_pkts_acked" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcp_vegas");


MODULE_INFO(srcversion, "F927DC3BDBC486D372C13F8");
