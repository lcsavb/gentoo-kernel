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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x9a4a70b7, "iio_trigger_alloc" },
	{ 0x18ed6f56, "spi_sync_locked" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x9b4babd5, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe8799010, "spi_sync" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc3fd5bb6, "spi_bus_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x8c8b285d, "iio_trigger_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0xd1dd8721, "iio_validate_scan_mask_onehot" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0x77c0a083, "spi_bus_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "EE2D9713A1097E083035497");
