@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=../../ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

if exist COBRA_RELEASE rm -fr COBRA_RELEASE/*.self>nul
if exist *.self rm -fr *.self>nul

make -f stage0_file/Makefile all
make -f stage1_file/Makefile all

if not exist COBRA_RELEASE mkdir COBRA_RELEASE
if not exist COBRA_DEBUG mkdir COBRA_DEBUG

if exist lv2Ckernelr.self	move  lv2Ckernelr.self		COBRA_RELEASE/lv2Ckernel.self>nul
if exist lv2Ckerneld.self	move  lv2Ckerneld.self		COBRA_DEBUG/lv2Ckernel.self>nul
if exist lv2Dkernelr.self	move  lv2Dkernelr.self		COBRA_RELEASE/lv2Dkernel.self>nul
if exist lv2Dkerneld.self	move  lv2Dkerneld.self		COBRA_DEBUG/lv2Dkernel.self>nul

pause
