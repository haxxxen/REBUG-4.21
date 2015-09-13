
clean:
	rm -f *.bin *.ori *.elf *.self stage1_file/*.o stage1_file/*.ori stage1_file/*.elf stage1_file/*.self stage1_file/*.421 stage1_file/*.bin stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o

all:
	make -f stage1_file/Makefile clean
	make -f stage1_file/Makefile_421C_0 --no-print-directory

	rm -f *.elf stage1_file/*.o stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o
	make -f stage1_file/Makefile_421C --no-print-directory

	stage1_file/sfk partcopy stage1_file/stage0_base_421C.bin -allfrom 0x0 temp.elf 0x13D90 -yes
	stage1_file/sfk partcopy stage1_file/string_C -allfrom 0x0 temp.elf 0x2DF1C8 -yes
	scetool -v --sce-type=SELF --compress-data=TRUE --compress-data=TRUE --skip-sections=FALSE \
			--self-auth-id=1050000003000001 --self-add-shdrs=TRUE --self-vendor-id=05000002 --self-type=LV2 \
			--self-fw-version=0004002100000000 --key-revision=0 --self-app-version=0004002100000000 --encrypt \
			temp.elf lv2Ckernelr.self

	rm -f *.ori *.elf stage1_file/*.o stage1_file/*.ori stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o
	make -f stage1_file/Makefile_421C_d --no-print-directory

	stage1_file/sfk partcopy stage1_file/stage0_base_421C.bin -allfrom 0x0 temp.elf 0x13D90 -yes
	stage1_file/sfk partcopy stage1_file/string_C -allfrom 0x0 temp.elf 0x2DF1C8 -yes
	scetool -v --sce-type=SELF --compress-data=TRUE --compress-data=TRUE --skip-sections=FALSE \
			--self-auth-id=1050000003000001 --self-add-shdrs=TRUE --self-vendor-id=05000002 --self-type=LV2 \
			--self-fw-version=0004002100000000 --key-revision=0 --self-app-version=0004002100000000 --encrypt \
			temp.elf lv2Ckerneld.self

	rm -f *.ori *.elf stage1_file/*.o stage1_file/*.ori stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o
	make -f stage1_file/Makefile_421D_0 --no-print-directory

	rm -f *.elf stage1_file/*.o stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o
	make -f stage1_file/Makefile_421D --no-print-directory

	stage1_file/sfk partcopy stage1_file/stage0_base_421D.bin -allfrom 0x0 temp.elf 0x13D90 -yes	
	stage1_file/sfk partcopy stage1_file/string_D -allfrom 0x0 temp.elf 0x2F9948 -yes
	scetool -v --sce-type=SELF --compress-data=TRUE --compress-data=TRUE --skip-sections=FALSE \
			--self-auth-id=1050000003000001 --self-add-shdrs=TRUE --self-vendor-id=05000002 --self-type=LV2 \
			--self-fw-version=0004002100000000 --key-revision=0 --self-app-version=0004002100000000 --encrypt \
			temp.elf lv2Dkernelr.self

	rm -f *.ori *.elf stage1_file/*.o stage1_file/*.ori stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o
	make -f stage1_file/Makefile_421D_d --no-print-directory

	stage1_file/sfk partcopy stage1_file/stage0_base_421D.bin -allfrom 0x0 temp.elf 0x13D90 -yes	
	stage1_file/sfk partcopy stage1_file/string_D -allfrom 0x0 temp.elf 0x2F9948 -yes
	scetool -v --sce-type=SELF --compress-data=TRUE --compress-data=TRUE --skip-sections=FALSE \
			--self-auth-id=1050000003000001 --self-add-shdrs=TRUE --self-vendor-id=05000002 --self-type=LV2 \
			--self-fw-version=0004002100000000 --key-revision=0 --self-app-version=0004002100000000 --encrypt \
			temp.elf lv2Dkerneld.self

	rm -f *.ori *.elf stage1_file/*.o stage1_file/*.bin stage1_file/*.ori stage1_file/*.elf stage1_file/*.map lv1/src/*.o debug/src/*.o lv2/src/*.o

