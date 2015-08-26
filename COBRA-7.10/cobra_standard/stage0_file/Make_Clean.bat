@echo off

set PS3DEV=../ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

REM if exist cobra\lite del cobra\lite\*.bin>nul
REM if exist cobra\lite rmdir cobra\lite

REM if exist cobra del cobra\*.bin>nul
REM if exist cobra rmdir cobra

REM if exist mamba\lite\bin del mamba\lite\bin\*.bin>nul
REM if exist mamba\lite\bin rmdir mamba\lite\bin

REM if exist mamba\bin del mamba\bin\*.bin>nul
REM if exist mamba\bin rmdir mamba\bin

REM if exist mamba\lite del mamba\lite\*lz.bin>nul
REM if exist mamba\lite rmdir mamba\lite

REM if exist mamba del mamba\*lz.bin>nul
REM if exist mamba rmdir mamba

make clean

REM pause