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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3120ffbb, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x7533a30b, "device_del" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x45cd73e1, "device_add" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x6866139b, "bus_for_each_dev" },
	{ 0x94bd2068, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x81bd7659, "snd_seq_root" },
	{ 0x38a3a131, "snd_info_free_entry" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x7541304f, "snd_info_create_module_entry" },
	{ 0x621dd945, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5DF8F9C058836CBA2E0F90D");
