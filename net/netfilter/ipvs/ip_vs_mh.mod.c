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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x66d7f5b3, "unregister_ip_vs_scheduler" },
	{ 0x13a80a93, "register_ip_vs_scheduler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xac2040e6, "ip_vs_scheduler_err" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6481ffe0, "hsiphash_1u32" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xea124bd1, "gcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "EEFAF99718393E14655C135");
