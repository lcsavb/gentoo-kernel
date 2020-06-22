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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x41882528, "usb_serial_deregister_drivers" },
	{ 0xc4a8677d, "usb_serial_register_drivers" },
	{ 0x60b411bb, "usb_serial_port_softint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc996376c, "tty_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v104Fp0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E079DA3B9C2CCE14D6701C");
