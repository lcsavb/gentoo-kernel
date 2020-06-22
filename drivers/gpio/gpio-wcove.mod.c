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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5d31566a, "gpiochip_set_nested_irqchip" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x5e75c55f, "gpiochip_irqchip_add_key" },
	{ 0x4109798, "handle_simple_irq" },
	{ 0xd30737d8, "devm_gpiochip_add_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xc5850110, "printk" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C7C2362BA78AB48D0406D8C");
