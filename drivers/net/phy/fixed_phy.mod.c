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
	{ 0x103342e0, "get_phy_device" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0xb9f7065b, "phy_device_register" },
	{ 0x8089c6c5, "phy_device_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x2359cbee, "phy_device_remove" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xac66f59b, "phy_advertise_supported" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe4e48b12, "swphy_validate_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x6adf9e76, "gpiod_put" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "6956339DF443AB6DA1123B0");
