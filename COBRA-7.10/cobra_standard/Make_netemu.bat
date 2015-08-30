@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=../ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

make -f netemu/Makefile all

if not exist COBRA_RELEASE mkdir COBRA_RELEASE

if exist ps2_netemu.self	move  ps2_netemu.self		COBRA_RELEASE/ps2_netemu.self>nul

pause
