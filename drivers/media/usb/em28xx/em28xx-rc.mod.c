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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6abbfca, "em28xx_read_reg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x5f7d9f4c, "em28xx_write_regs" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa41a12e7, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0xad0cba41, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x40db6e21, "em28xx_find_led" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa3114135, "rc_free_device" },
	{ 0x76ff6096, "em28xx_toggle_reg_bits" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0xa405964, "em28xx_unregister_extension" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0xecb90d21, "em28xx_write_reg_bits" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x6f777e92, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x46d5d90d, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core,i2c-core");


MODULE_INFO(srcversion, "E094AB33D95D0157684DA56");
