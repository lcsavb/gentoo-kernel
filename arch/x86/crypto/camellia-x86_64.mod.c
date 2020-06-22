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
	{ 0xb8da500, "glue_ctr_req_128bit" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x52ad9379, "crypto_unregister_skciphers" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xd98a776d, "glue_ecb_req_128bit" },
	{ 0x4614f20a, "crypto_register_skciphers" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad509e90, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd28130d, "glue_cbc_encrypt_req_128bit" },
	{ 0xba27221e, "crypto_unregister_alg" },
	{ 0xe510100, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper");


MODULE_INFO(srcversion, "01C311CB21394D7C5005EA6");
