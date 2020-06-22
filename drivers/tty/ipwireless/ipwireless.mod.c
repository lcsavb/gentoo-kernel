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
	{ 0x7210e0de, "pcmcia_request_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x96dedfaf, "pcmcia_enable_device" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0xee565529, "ppp_unit_number" },
	{ 0x6d60853f, "pcmcia_register_driver" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x1a01f12, "pcmcia_reset_card" },
	{ 0x8e1e4b64, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe0cb126d, "ppp_unregister_channel" },
	{ 0x65c65f80, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x66db98ba, "pcmcia_request_io" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20061667, "tty_set_operations" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7bab5dba, "ppp_output_wakeup" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xab69978c, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2c00a78, "tty_port_init" },
	{ 0x4ab8ff3c, "pcmcia_request_window" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x1d771356, "tty_port_destroy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa891a378, "tty_vhangup" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xd08cd179, "pcmcia_loop_config" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x750b0db0, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x31d68c60, "tty_unregister_driver" },
	{ 0x9189399e, "tty_hangup" },
	{ 0x715ff16c, "tty_perform_flush" },
	{ 0xee06a2c0, "__tty_alloc_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb4af225e, "ppp_input" },
	{ 0xbeeff62e, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xb7915408, "pcmcia_unregister_driver" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x35f9e09e, "ppp_register_channel" },
	{ 0x92a91221, "ppp_channel_index" },
	{ 0x7a0d6d1f, "pcmcia_disable_device" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "pcmcia,ppp_generic,pcmcia_core");

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "8C90B1E5C75472040D6A236");
