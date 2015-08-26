# REBUG 4.21 7.10 COBRA
REBUG 4.21 COBRA 7.10 Port based on official REBUG 4.21 REX

This is my own 4.21 port of COBRA 7.10, that fully compiles on Windows.
When finished, files can be found in COBRA_RELEASE/COBRA_DEBUG folders.

Prerequesites:

- Estwald's PSL1GHT Environment installed and configured (PATH variable in batch!)
- rename bin_rename folder to bin (stupid github)
- rename vsh.self.swp.neu to vsh.self.swp (-""-)


Changes:

- Prepatched modules: Only 6 files are processed by COBRA (vsh.self(s), basic_plugins.sprx, libfs.sprx, emulator_api.sprx, emulator_drm.sprx, PEmuCoreLib.sprx)
- No vsh unsigned-app patch: NPDRM fself work with COBRA enabled or disabled on DEX
- Button shortcut to toggle ps1_emu.self<->ps1_netemu.self (By default ps1_emu.self is used, hold L2+X when starting mounted psx iso to toggle to ps1_netemu.self)
- By default PSP Extra Savedata Patch removed. Can be applied with button shortcut R1+X when launching mounted psp iso (This patch is no good for some games like LocoRoco and they do not work with savedata utility)
- Added fully ported 4.21 ps2netemu. I am too lazy to port ps2emu for backwards and semibackwards and I cannot test them!
- Added prepatched modules with matching hashes

Tools used:

- sfk.exe: "Swiss-File-Knife" (http://stahlworks.com/dev/swiss-file-knife.html). Free file handling tool to apply stage0_base payload
- ps3dev2: gcc Environment to compile COBRA (thanks to Joonie/NzV)
- scetool: To resign lv2_kernels
- mingw/msys

Credits to Joonie, habib, NzV, aldostools, COBRA Developers and all others that are involved with COBRA
