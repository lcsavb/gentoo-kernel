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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5931612, "s5h1420_get_tuner_i2c_adapter" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0xa4e78af9, "cx24113_agc_callback" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0xdf3a9e00, "cx24123_get_tuner_i2c_adapter" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123,i2c-core");


MODULE_INFO(srcversion, "99DAA093927433C0AB79241");
