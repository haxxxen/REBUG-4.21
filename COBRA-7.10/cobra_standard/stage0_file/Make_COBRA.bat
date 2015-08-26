@echo off

set PS3DEV=../ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

REM if exist cobra del cobra\*.bin>nul
REM if exist cobra rmdir cobra

make all

REM if not exist cobra mkdir cobra

REM if exist stage2_COBRA_4_21.bin     move  stage2_COBRA_4_21.bin     cobra\cobra_421C.bin>nul
REM if exist stage2_COBRA_4_21DEX.bin  move  stage2_COBRA_4_21DEX.bin  cobra\cobra_421D.bin>nul
REM if exist stage2.cex     move  stage2.cex     cobra\stage2.cex>nul
REM if exist stage2.dex     move  stage2.dex     cobra\stage2.dex>nul

pause
