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
	{ 0xdb61793f, "team_mode_unregister" },
	{ 0x3d701510, "team_mode_register" },
	{ 0xc7dddb7c, "netpoll_send_skb_on_dev" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x1a281859, "pv_ops" },
	{ 0x1424ca21, "team_option_inst_set_change" },
	{ 0xcfceb287, "team_options_register" },
	{ 0xe1613060, "team_options_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "AE8329CFED5E18B3CA5E4E6");
