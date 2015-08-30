@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=../ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

if exist COBRA_RELEASE rm -fr COBRA_RELEASE/*.*>nul
if exist COBRA_RELEASE rm -fr COBRA_RELEASE
if exist COBRA_DEBUG rm -fr COBRA_DEBUG/*.*>nul
if exist COBRA_DEBUG rm -fr COBRA_DEBUG

make -f netemu/Makefile clean
make -f stage0_file/Makefile clean
make -f stage1_file/Makefile clean
make -f stage2/Makefile clean

REM pause