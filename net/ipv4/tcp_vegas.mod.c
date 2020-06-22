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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x190f88e0, "tcp_register_congestion_control" },
	{ 0x2f52f6c1, "tcp_unregister_congestion_control" },
	{ 0x2df45ed8, "tcp_reno_ssthresh" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x645fa37b, "tcp_slow_start" },
	{ 0x7bb4ccd4, "tcp_reno_undo_cwnd" },
	{ 0xc44233ff, "tcp_reno_cong_avoid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "719A0C719DFDBBFA14F0E00");
