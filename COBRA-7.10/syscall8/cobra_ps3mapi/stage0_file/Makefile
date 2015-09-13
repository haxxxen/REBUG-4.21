
clean:
	rm -f stage0_file/*.o stage0_file/*.elf stage0_file/*.bin lv1/src/*.o

all:
	make -f stage0_file/Makefile clean
	rm -f stage0_file/*.o stage0_file/*.elf stage0_file/*.bin lv1/src/*.o
	make -f stage0_file/Makefile_421C --no-print-directory

	rm -f stage0_file/*.o stage0_file/*.elf lv1/src/*.o
	make -f stage0_file/Makefile_421D --no-print-directory

	rm -f stage0_file/*.o stage0_file/*.elf lv1/src/*.o

