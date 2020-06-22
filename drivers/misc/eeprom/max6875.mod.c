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
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xe021294, "sysfs_create_bin_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1ea4e27a, "i2c_new_dummy_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc501cc3c, "i2c_smbus_read_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x71df4628, "sysfs_remove_bin_file" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:max6875");

MODULE_INFO(srcversion, "33362FC31F99AEC9EBF3A24");
