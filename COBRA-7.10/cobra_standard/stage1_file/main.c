#include <stddef.h>

#include <lv2/lv2.h>
#include <debug.h>
#include <lv2/memory.h>
#include <lv2/io.h>
#include <lv2/libc.h>
#include <lv2/thread.h>
#include <lv2/patch.h>

#include <lv1/lv1.h>


#ifdef DEBUG
#define DPRINTF		_debug_printf
#define DPRINT_HEX	debug_print_hex
#else
#define DPRINTF(...)
#define DPRINT_HEX(a, b)
#endif

#if defined(CEX_KERNEL)
#define STAGE2_FILE	"/dev_flash/rebug/cobra/stage2.cex"
#elif defined(DEX_KERNEL)
#define STAGE2_FILE	"/dev_flash/rebug/cobra/stage2.dex"
#endif
#define FLAG_FILE	"/dev_flash/nostage"
#define FLAG_PATH	"/dev_usb000/core_flags/nostage"

void flash_mount_clone(void);

int main(void)
{
	void *stage2 = NULL;
	
	f_desc_t f;
	int (* func)(void);	
	int ret;
	
#ifdef DEBUG		
	debug_init();
#if defined(CEX_KERNEL)
	DPRINTF("CEX Stage 1 says hello.\n");	
#elif defined(DEX_KERNEL)
	DPRINTF("DEX Stage 1 says hello.\n");	
#endif
#endif
	f.addr = flash_mount_clone;
	f.toc = (void *)MKA(TOC);
	func = (void *)&f;
	
	ret = func();
	
	if (ret != 0 && ret != 1)
	{
		DPRINTF("Flash mount failed!\n");		
	}
	else
	{
		CellFsStat stat;
		
		DPRINTF("Flash mounted\n");
/* 
		cellFsUtilMount("CELL_FS_IOS:USB_MASS_STORAGE000", "CELL_FS_FAT", "/dev_usb000", 0, 0, 0, 0, 0);
		if (cellFsStat(FLAG_PATH, &stat) == 0)
		{
			DPRINTF("Flag file found on USB! Skip Stage 2 loading...\n");
			goto nostage;
		}
		cellFsUtilUmount("/dev_usb000", 0, 0);
 */		
		if (cellFsStat(FLAG_FILE, &stat) == 0)
		{
#if defined(CEX_KERNEL)
			DPRINTF("Flag file found!\nSkip loading CEX Stage 2...\n");
#elif defined(DEX_KERNEL)
			DPRINTF("Flag file found!\nSkip loading DEX Stage 2...\n");
#endif
			goto nostage;
		}

		else {
		
			if (cellFsStat(STAGE2_FILE, &stat) == 0)
			{
				int fd;
				
				if (cellFsOpen(STAGE2_FILE, CELL_FS_O_RDONLY, &fd, 0, NULL, 0) == 0)
				{
					uint32_t psize = stat.st_size;
					
#if defined(CEX_KERNEL)
					DPRINTF("CEX Payload size = %d\n", psize);
#elif defined(DEX_KERNEL)
					DPRINTF("DEX Payload size = %d\n", psize);
#endif
					
					stage2 = alloc(psize, 0x27);
					if (stage2)
					{
						uint64_t rs;
						
						if (cellFsRead(fd, stage2, psize, &rs) != 0)
						{
#if defined(CEX_KERNEL)
							DPRINTF("CEX Stage 2 read fail.\n");
#elif defined(DEX_KERNEL)
							DPRINTF("DEX Stage 2 read fail.\n");
#endif
							dealloc(stage2, 0x27);
							stage2 = NULL;
						}
					}
					
					else
					{
#if defined(CEX_KERNEL)
						DPRINTF("Cannot allocate CEX Stage 2\n");
#elif defined(DEX_KERNEL)
						DPRINTF("Cannot allocate DEX Stage 2\n");
#endif
					}
					
					cellFsClose(fd);
				}
			}
/* 			
			else
			{
				goto nostage;
			} */
		}
	}
	
	if (stage2)
	{
		f.addr = stage2;			
		func = (void *)&f;	
#if defined(CEX_KERNEL)
		DPRINTF("Calling CEX Stage 2...\n");
#elif defined(DEX_KERNEL)
		DPRINTF("Calling DEX Stage 2...\n");
#endif
		func();
	}
	
	return ret;

nostage:
#if defined(CEX_KERNEL)
	DPRINTF("There is no CEX Stage 2, booting system.\n");
#elif defined(DEX_KERNEL)
	DPRINTF("There is no DEX Stage 2, booting system.\n");
#endif
	return ret;
}
