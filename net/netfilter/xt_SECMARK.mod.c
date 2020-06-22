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
	{ 0x8fe66800, "xt_unregister_target" },
	{ 0xa448c1d1, "xt_register_target" },
	{ 0xc5850110, "printk" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0x754d539c, "strlen" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "856A4A9BD6E3F538E546472");
