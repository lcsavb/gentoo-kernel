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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xdb3b9bb6, "key_invalidate" },
	{ 0x754d539c, "strlen" },
	{ 0xa221693e, "prepare_kernel_cred" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xec01448a, "generic_key_instantiate" },
	{ 0x4a9307cd, "request_key_tag" },
	{ 0x1b8a376e, "user_read" },
	{ 0x894ed320, "override_creds" },
	{ 0x668b19a1, "down_read" },
	{ 0x2364da19, "key_validate" },
	{ 0x9c23d3bb, "key_revoke" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xa07a37f0, "memchr" },
	{ 0x75e60613, "key_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x649d7b28, "keyring_alloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x2013515b, "user_revoke" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x7b70a782, "user_destroy" },
	{ 0xc228129e, "revert_creds" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94218BAF535B07D968F29ED");
