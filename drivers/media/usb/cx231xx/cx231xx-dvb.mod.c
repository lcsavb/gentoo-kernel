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
	{ 0x167e9e59, "param_ops_short" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xded5e9b3, "cx231xx_unregister_extension" },
	{ 0x14913ee8, "cx231xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x17475388, "_dev_warn" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x24be394, "dvb_create_media_graph" },
	{ 0x7acb014d, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x1c5950b6, "dvb_register_frontend" },
	{ 0x63b4b26a, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x133073e9, "dvb_module_probe" },
	{ 0x6e1230d, "cx231xx_demod_reset" },
	{ 0xac4b7afb, "cx231xx_get_i2c_adap" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xadbb0b84, "cx231xx_init_bulk" },
	{ 0x5b009dc9, "cx231xx_init_isoc" },
	{ 0x97ca4309, "cx231xx_set_alt_setting" },
	{ 0x543348fa, "cx231xx_uninit_isoc" },
	{ 0xdbf7d64c, "cx231xx_uninit_bulk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa10209c7, "dvb_module_release" },
	{ 0x13670a62, "dvb_unregister_adapter" },
	{ 0x3eb6648d, "dvb_frontend_detach" },
	{ 0xda96cd1e, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xe962dace, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1130a163, "cx231xx_set_mode" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "65988010C2915E840DF0678");
