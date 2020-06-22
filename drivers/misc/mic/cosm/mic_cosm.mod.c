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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0xd57d2bb3, "scif_close" },
	{ 0x79652523, "send_sig" },
	{ 0xda584c89, "single_release" },
	{ 0x3fa95a84, "cosm_unregister_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x999a4ef6, "seq_write" },
	{ 0xfa03645f, "kernfs_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x91c5c76f, "scif_listen" },
	{ 0xc2cf810, "scif_send" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x1d263b8b, "device_create_with_groups" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x894ed320, "override_creds" },
	{ 0xae254cfe, "seq_read" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa5804d6e, "scif_open" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xc19ad5ad, "cosm_register_driver" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x9166fada, "strncpy" },
	{ 0xba108e01, "scif_recv" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x35f03a67, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x611bf0f1, "prepare_creds" },
	{ 0x670daf7c, "scif_accept" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x94bd2068, "put_device" },
	{ 0xeebcff12, "scif_bind" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7224ac98, "kernfs_notify" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3507ed, "cosm_find_cdev_by_id" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x96848186, "scnprintf" },
	{ 0x33650c48, "class_destroy" },
	{ 0x19dd143b, "scif_poll" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xc228129e, "revert_creds" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "scif,cosm_bus");


MODULE_INFO(srcversion, "39A592716AE4ED825788520");
