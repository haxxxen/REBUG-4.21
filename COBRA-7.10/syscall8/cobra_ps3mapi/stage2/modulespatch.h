#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_4_21)

#define VSH_HASH			0xa0026096002dfafb /* D-REX vsh.self */
#define VSH_NRM_HASH			0xa0026096002e22f2 /* D-REX vsh.self.nrm */
#define VSH_CEX_HASH			0xa001ccbe002dcc23 /* D-REX vsh.self.cexsp */
#define BASIC_PLUGINS_HASH		0xd72295740001fa30
#define NAS_PLUGIN_HASH			0xacf4af2b00025d5d
#define EXPLORE_PLUGIN_HASH		0xacf4af2b000e71ca
#define EXPLORE_CATEGORY_GAME_HASH	0x9cb3c54a0005770e /* Rog hash is same as ofw even if file is different. Same for hab, fer, arc */
#define BDP_DISC_CHECK_PLUGIN_HASH	0xb8b7a5f90000319f
#define PS1_EMU_HASH			0x7a67e830000a18b6
#define PS1_NETEMU_HASH			0x7a374d45000c4393
#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001d6d2
#define PSP_EMULATOR_HASH		0x7be65d6d00023701
#define EMULATOR_API_HASH		0xa9f5b2320001e7c6
#define PEMUCORELIB_HASH		0xf349a563000bf7e3
#define EMULATOR_DRM_HASH		0xd2c7f3e20000538f
#define EMULATOR_DRM_DATA_HASH		0xb4f919590001b6e7
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b80000320e
#define LIBFS_EXTERNAL_HASH		0x5bc7bec800006430

#define VSH_SIZE_DEX 0x2FF850
#define VSH_SIZE_CEX 0x303F08
#define vsh_text_size			0x6B0000 // memsz of first program header aligned to 0x10000 //
// #define BASIC_SIZE 0x2F074

// #if defined(DEX)
// vsh dex //
#define elf1_func1 			0x5ED7C8
#define elf1_func1_offset 		0x00
#define elf1_func2 			0x246D6C
#define elf1_func2_offset 		0x14
/* // #define game_update_offset		0x2717C4
// #define ps2tonet_patch			0xC9A30 //
// #define ps2tonet_size_patch		0xC9A24 */
#define psp_drm_patch1			0x244068 // LI R3, 0
#define psp_drm_patch2			0x244B00 // 
#define psp_drm_patch3			0x244740 // 
#define psp_drm_patch4			0x244F48 // 
#define psp_drm_patchA			0x244184 // 
#define psp_drm_patchB			0x244A1C // 
#define psp_drm_patchC			0x243BBC // 
#define psp_drm_patchD			0x24416C // 
#define psp_drm_patchE			0x244170 // 
#define psp_drm_patchF			0x244B34 // 
/* // #define revision_offset			0x65BBA0
// #define revision_offset2		0x6FFC1C // In data section //
// #define spoof_version_patch		0xBDBD0
// #define psn_spoof_version_patch		0x1A75AC */
#define vmode_patch_offset		0x446650
// #endif

// #if defined(CEX)
// vsh cex //
#define cex_elf1_func1 			0x5E5BF0
#define cex_elf1_func1_offset 		0x00
#define cex_elf1_func2 			0x23F560
#define cex_elf1_func2_offset 		0x14
/* // #define game_update_offset		0x269FB8
// #define ps2tonet_patch			0xC44EC
// #define ps2tonet_size_patch		0xC44E0 */
#define cex_psp_drm_patch1			0x23C85C
#define cex_psp_drm_patch2			0x23D2F4
#define cex_psp_drm_patch3			0x23CF34
#define cex_psp_drm_patch4			0x23D73C
#define cex_psp_drm_patchA			0x23C978
#define cex_psp_drm_patchB			0x23D210
#define cex_psp_drm_patchC			0x23C3B0
#define cex_psp_drm_patchD			0x23C960
#define cex_psp_drm_patchE			0x23C964
#define cex_psp_drm_patchF			0x23D328
/* // #define revision_offset			0x653890
// #define revision_offset2		0x6FF280 // In data section //
// #define spoof_version_patch		0xB8D78
// #define psn_spoof_version_patch		0x19FCA4 */
#define cex_vmode_patch_offset		0x43EA78
// #endif

// basic_plugins //
#define ps1emu_type_check_offset	0x20114
#define pspemu_path_offset		0x4AF28
#define psptrans_path_offset		0x4BB98

// explore_plugin //
#define app_home_offset			0x246AE8
// #define ps2_nonbw_offset		0xDAFBC

/* // nas_plugin //
// #define elf2_func1 			0x2DCF0
// #define elf2_func1_offset		0x374
// #define geohot_pkg_offset		0x3174

// explore_category_game //
// #define ps2_nonbw_offset2		0x75460
// #define unk_patch_offset1		0x546C // unknown patch from E3 cfw //
// #define unk_patch_offset2		0x5490 // unknown patch from E3 cfw //

// bdp_disc_check_plugin //
// #define dvd_video_region_check_offset	0x1528

// ps1_emu //
// #define ps1_emu_get_region_offset	0x3E74	

// ps1_netemu //
// #define ps1_netemu_get_region_offset	0xB18BC

// game_ext_plugin //
// #define sfo_check_offset		0x23054
// #define ps2_nonbw_offset3		0x16788
// #define ps_region_error_offset		0x6810

// psp_emulator //
// #define psp_set_psp_mode_offset		0x1BE0 */

/* emulator_api */
#define psp_read			0xFC64
#define psp_read_header			0x10BE8
#define psp_drm_patch5			0x10A0C
#define psp_drm_patch6			0x10A3C
#define psp_drm_patch7			0x10A54
#define psp_drm_patch8			0x10A58
#define psp_drm_patch9			0x10B98
#define psp_drm_patch11			0x10B9C
#define psp_drm_patch12			0x10BAC
#define psp_product_id_patch1		0x10CAC
#define psp_product_id_patch3		0x10F84
#define umd_mutex_offset		(0x64480+0x38C)

/* pemucorelib */
#define psp_eboot_dec_patch		0x5E35C
#define psp_prx_patch			0x57478
#define psp_savedata_bind_patch1	0x79810
#define psp_savedata_bind_patch2	0x79868
#define psp_savedata_bind_patch3	0x79384
#define psp_extra_savedata_patch	0x851A8
#define psp_prometheus_patch		0x12E870
#define prx_patch_call_lr		0x585CC

/* emulator_drm */
#define psp_drm_tag_overwrite		0x4C64
#define psp_drm_key_overwrite		(0x27580-0xBE80)

/* // libsysutil_savedata_psp //
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
// #define psp_savedata_patch3		0x4504
// #define psp_savedata_patch4		0x453C
// #define psp_savedata_patch5		0x4550
// #define psp_savedata_patch6		0x46B8 */

/* libfs (external */
#define aio_copy_root_offset		0xD5B4

#endif /* FIRMWARE */

typedef struct
{
	uint32_t offset;
	uint32_t data;
	uint8_t *condition;
} SprxPatch;

extern uint8_t condition_ps2softemu;
extern uint8_t condition_apphome;
extern uint8_t condition_psp_iso;
extern uint8_t condition_psp_dec;
extern uint8_t condition_psp_keys;
extern uint8_t condition_psp_change_emu;
extern uint8_t condition_psp_prometheus;
extern uint8_t condition_vsh_check;
extern uint8_t condition_toggle_psxemu;
extern uint64_t vsh_check;

extern uint8_t block_peek;

extern process_t vsh_process;
extern uint8_t safe_mode;

/* Functions for kernel */
void modules_patch_init(void);
//void do_spoof_patches(void);  Spoof is not needed due to REX's static spoof 
void load_boot_plugins(void);
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

/* Syscalls */
//int sys_vsh_spoof_version(char *version_str);  //Spoof is not needed due to REX's static spoof 
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

// PS3Mapi v1.2.1
int ps3mapi_unload_vsh_plugin(char* name); 
void unhook_all_modules(void);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);

#endif /* __MODULESPATCH_H__ */
