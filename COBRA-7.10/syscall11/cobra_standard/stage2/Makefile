clean:
	rm -f *.elf *.bin *.cex *.dex *.bak stage2/*.o stage2/src/*.map *.map lv2/src/*.o lv1/src/*.o debug/src/*.o

all:
	make -f stage2/Makefile clean
	make -f stage2/Makefile_st2Cr.mak
	rm -f *.bin *.elf stage2/*.o stage2/*.map lv2/src/*.o lv1/src/*.o debug/src/*.o
	make -f stage2/Makefile_st2C.mak
	rm -f *.bin *.elf stage2/*.o stage2/*.map lv2/src/*.o lv1/src/*.o debug/src/*.o
	make -f stage2/Makefile_st2Dr.mak
	rm -f *.bin *.elf stage2/*.o stage2/*.map lv2/src/*.o lv1/src/*.o debug/src/*.o
	make -f stage2/Makefile_st2D.mak
	rm -f *.bin *.elf stage2/*.o stage2/*.map lv2/src/*.o lv1/src/*.o debug/src/*.o
