/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __PS2EMU_SYMBOLS_H_S__
#define __PS2EMU_SYMBOLS_H_S__

#if defined(FIRMWARE_4_21)

#if defined(PS2NETEMU)

#define	cdvd_read_symbol			0x12E9BC

#define TOC					0x7DA500

#define ufs_open_symbol				0x1E3E64
#define ufs_close_symbol			0x1E3D18
#define ufs_read_symbol				0x1E47D4
#define ufs_write_symbol			0x1E4660
#define ufs_fstat_symbol			0x1E3968

#define log_printf_symbol			0xB5C98

#define memcpy_symbol				0x111050
#define memset_symbol				0x110FFC
#define memcmp_symbol				0x110E20
#define memchr_symbol				0x1DDFC8
#define snprintf_symbol				0x111CE4
#define strcpy_symbol				0x110E9C
#define strncpy_symbol				0x1E2848
#define strcat_symbol				0x110ED4
#define strlen_symbol				0x110E64
#define strcmp_symbol				0x1E2878
#define strncmp_symbol				0x1E28FC
#define strchr_symbol				0x1E27D0
#define strrchr_symbol				0x1E2804


#endif /* type */

#endif  /* FIRMWARE */

#endif /* __PS2EMU_SYMBOLS_H_S__ */
