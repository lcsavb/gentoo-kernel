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
	{ 0x192a3bf, "ipcomp_output" },
	{ 0x62ebfe68, "ipcomp_input" },
	{ 0xe63fe217, "ipcomp_destroy" },
	{ 0x7eba69c1, "xfrm_input" },
	{ 0xb8e8c3b1, "xfrm4_rcv" },
	{ 0x58bb14f0, "xfrm4_protocol_deregister" },
	{ 0xa1043791, "xfrm_unregister_type" },
	{ 0xbdf6516f, "xfrm4_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0x67e82f07, "xfrm_register_type" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5846c5ef, "xfrm_state_insert" },
	{ 0x19622e24, "xfrm_init_state" },
	{ 0xf4829297, "xfrm_state_alloc" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0x955d8a8d, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "0951BE07630704C8C1376DE");
