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
	{ 0xac8f52e7, "usb_stor_post_reset" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x7f7a8d8c, "usb_stor_disconnect" },
	{ 0x7a434048, "scsi_eh_restore_cmnd" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1fd68c8f, "usb_stor_probe2" },
	{ 0x47e341fa, "usb_stor_transparent_scsi_command" },
	{ 0x4c8a945, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5005ae7, "usb_stor_pre_reset" },
	{ 0x439a356e, "usb_stor_reset_resume" },
	{ 0x78cab840, "usb_stor_suspend" },
	{ 0xe8e6cf5f, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86d8d47a, "scsi_eh_prep_cmnd" },
	{ 0x15033a3a, "usb_stor_resume" },
	{ 0x1966ea19, "usb_register_driver" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90EF7C6C3F24254FF4072EF");
