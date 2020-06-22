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
	{ 0x96fce9be, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3359e60b, "ip_set_type_register" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x21368c06, "ip_set_put_extensions" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xfb578fc5, "memset" },
	{ 0x3b7aa46b, "ip_set_extensions" },
	{ 0x37a0cba, "kfree" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0xa5309bd0, "ip_set_elem_len" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x31bd24dd, "ip_set_get_ip_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xffc5dda7, "ip_set_get_extensions" },
	{ 0xeef28666, "ip_set_match_extensions" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "0665C4C095EAAD09F80550D");
