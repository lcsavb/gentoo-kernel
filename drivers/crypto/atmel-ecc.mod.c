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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x706f789d, "crypto_register_kpp" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc9e729e1, "atmel_i2c_probe" },
	{ 0xc5850110, "printk" },
	{ 0x62c4d626, "crypto_alloc_kpp" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa373dd33, "crypto_unregister_kpp" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ede010f, "atmel_i2c_send_receive" },
	{ 0xc71ed50c, "atmel_i2c_init_genkey_cmd" },
	{ 0xb3e8f750, "crypto_stats_kpp_set_secret" },
	{ 0x515ba532, "crypto_ecdh_decode_key" },
	{ 0xecb08cc6, "crypto_stats_kpp_generate_public_key" },
	{ 0x8d3e6df8, "atmel_i2c_enqueue" },
	{ 0xdecc19d0, "crypto_stats_kpp_compute_shared_secret" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0xfaab573f, "atmel_i2c_init_ecdh_cmd" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,atmel-i2c,ecdh_generic");

MODULE_ALIAS("i2c:atecc508a");

MODULE_INFO(srcversion, "6BF827776408370D17233AA");
