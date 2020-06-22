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
	{ 0x4174c002, "param_ops_ulong" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd979a547, "__x86_indirect_thunk_rdi" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x32d5a1b9, "pci_match_id" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1adb23eb, "tty_ldisc_flush" },
	{ 0xdd344bc7, "tty_port_close_start" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0xe8cb3def, "tty_prepare_flip_string" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7dce046c, "tty_port_hangup" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xff1d764c, "tty_port_block_til_ready" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf2b8e756, "tty_port_tty_set" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x334962a0, "tty_wakeup" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xe914e41e, "strcpy" },
	{ 0x17475388, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc996376c, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x712e52f7, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011FEd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A0BF5DE06DC0DFC5614FC8D");
