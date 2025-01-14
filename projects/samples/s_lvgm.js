//*****************************************************************************
// PROJECT CONFIG OVERWRITE
//*****************************************************************************

//-- Target MSX machine version (string)
Machine = "1";

//-- List of library modules to build (array)
LibModules = [ "psg", "scc", "msx-music", "msx-audio", "lvgm/lvgm_player", "system", "bios", "vdp", "print", "input", "memory" ];

//-- Add SCC extension (boolean)
EmulSCC = true;

//-- Add MSX-Music extension (boolean)
EmulMSXMusic = true;

//-- Add MSX-Audio extension (boolean)
EmulMSXAudio = true;
