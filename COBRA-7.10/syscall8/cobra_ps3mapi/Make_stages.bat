@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=../../ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

if exist COBRA_RELEASE rm -fr COBRA_RELEASE/*.cex>nul
if exist COBRA_RELEASE rm -fr COBRA_RELEASE/*.dex>nul

make -f stage2\Makefile all

if not exist COBRA_RELEASE mkdir COBRA_RELEASE
if not exist COBRA_DEBUG mkdir COBRA_DEBUG

if exist stage2.cexr	move  stage2.cexr	COBRA_RELEASE/stage2.cex.bak>nul
if exist stage2.cex     move  stage2.cex	COBRA_DEBUG/stage2.cex.bak>nul
if exist stage2.dexr	move  stage2.dexr	COBRA_RELEASE/stage2.dex.bak>nul
if exist stage2.dex     move  stage2.dex	COBRA_DEBUG/stage2.dex.bak>nul

pause
