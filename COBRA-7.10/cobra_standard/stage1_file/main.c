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
#endif
#if defined(DEX_KERNEL)
#define STAGE2_FILE	"/dev_flash/rebug/cobra/stage2.dex"
#endif
// #define STAGE2_BYPASS	"/dev_usb000/stage2_bypass.txt"

void flash_mount_clone(void);

int main(void)
{
	void *stage2 = NULL;
	
	f_desc_t f;
	int (* func)(void);	
	int ret;
	
#ifdef DEBUG		
	debug_init();
	DPRINTF("Stage1 hello.\n");	
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
				
		if (cellFsStat(STAGE2_FILE, &stat) == 0)
		{
			int fd;
			
			if (cellFsOpen(STAGE2_FILE, CELL_FS_O_RDONLY, &fd, 0, NULL, 0) == 0)
			{
				uint32_t psize = stat.st_size;
				
				DPRINTF("Payload size = %d\n", psize);
				
				stage2 = alloc(psize, 0x27);
				if (stage2)
				{
					uint64_t rs;
					
					if (cellFsRead(fd, stage2, psize, &rs) != 0)
					{
						DPRINTF("Stage 2 read fail.\n");
						dealloc(stage2, 0x27);
						stage2 = NULL;
					}
				}
				else
				{
					DPRINTF("Cannot allocate stage2\n");
				}
				
				cellFsClose(fd);
			}
		}
		else
		{
			DPRINTF("There is no stage 2, booting system.\n");
		}
	}
	
	if (stage2)
	{
		f.addr = stage2;			
		func = (void *)&f;	
		DPRINTF("Calling stage 2...\n");
		func();
	}
	
	return ret;
}
