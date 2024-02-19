#pragma once
#include "stdafx.h"
#include <string>
#include <shlwapi.h>
#include <fstream>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#include <iostream>
#include <stdio.h>
#include "Auth/Networking/WinHttpClient.h"
#include "Auth/Networking/Web2.0.h"

// Lunar Menu
// lunarmenu.tk
//He helped

#define SelfLocation ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)

using namespace std;
bool testing = true;
bool null;
int inull;
int selectedPlayer;
int selectedDoor;
int HourTime = 1;
int MinuteTime = 1;
int SecondTime = 1;
int ShootRate = 1;
int WalkMultiplier;
float WalkMulti;
int timeer = 0;
int intensity = 0;
int playerAlpha = 255;

extern bool spawnincar;
extern bool spawnmaxed;
extern bool spawngodmode;

char customshoot;

int moneyamount = 1;

int pcolor = 1;
int wheeletype = 1;
int testingfet = 1;
int scolor = 1;
int Glasses_ = 0;
int Ears_ = 0;
int Mask_ = 0;
int Hair_ = 0;
int Torso_ = 0;
int Legs_ = 0;
int Hands_ = 0;
int Shoes_ = 0;
int Watches_ = 0;
int Special1_ = 0;
int Special2_ = 0;
int Special3_ = 0;
int Texture_ = 0;
int Torso2_ = 0;
int selectedOutfit = 0;
int outfit1 = 0;
int outfit2 = 0;
int outfit3 = 0;
int outfit4 = 0;
int mask1 = 0;
int mask2 = 0;
int shirt1 = 0;
int pants1 = 0;
int hands1 = 0;
int shoes1 = 0;
int eyes1 = 0;
int Accessories1 = 0;
int mission1 = 0;
int decals1 = 0;
int collars1 = 0;

int ncolorr = 1;
int ncolorg = 1;
int ncolorb = 1;

//Vehicle RTM
int armor;
int engine;
int brakes;
int horn;
int plate;
int windowtint;
int transmission;
int suspension;
int turbo;

int rpvalue;


int spoiler;
int fbumper;
int bbumper;
int skirt;
int exhaust;
int frame;
int grille;
int hood;
int fender;
int rightfender;
int roof;

#define PROP_MONEY_BAG_01 0x113FD533
#define PICKUP_MONEY_CASE 0xCE6FDD6B

const std::vector<std::string> vValues_ModSlotNames
{
	"CMOD_MOD_SPO",
	"CMOD_BUM_1",
	"CMOD_BUM_4",
	"CMOD_MOD_SKI",
	"CMOD_MOD_MUF",
	"CMOD_MOD_CHA",
	"CMOD_MOD_GRL",
	"CMOD_MOD_HOD",
	"CMOD_MOD_FEN",
	"CMOD_MOD_FEN",
	"CMOD_MOD_ROF",
	"CMOD_MOD_ENG",
	"CMOD_MOD_BRA",
	"CMOD_MOD_TRN",
	"CMOD_MOD_HRN",
	"CMOD_MOD_SUS",
	"CMOD_MOD_ARM",
	"Unknown 17",
	"CMOD_MOD_TUR",
	"Unknown 19",
	"Tyre Smoke",
	"Unknown 21",
	"CMOD_MOD_LGT",
	"CMOD_MOD_WHEM",
	"CMOD_WHE0_1",


	/*"VEM_SUPERMOD_0",
	"VEM_SUPERMOD_1",
	"VEM_SUPERMOD_2",
	"VEM_SUPERMOD_3",
	"VEM_SUPERMOD_4",
	"VEM_SUPERMOD_5",
	"VEM_SUPERMOD_6",
	"VEM_SUPERMOD_7",
	"VEM_SUPERMOD_8",
	"VEM_SUPERMOD_9",
	"VEM_SUPERMOD_10",
	"VEM_SUPERMOD_11",
	"VEM_SUPERMOD_12",
	"VEM_SUPERMOD_13",
	"VEM_SUPERMOD_14",
	"VEM_SUPERMOD_15",
	"VEM_SUPERMOD_16",
	"VEM_SUPERMOD_17",
	"VEM_SUPERMOD_18",
	"VEM_SUPERMOD_19",
	"VEM_SUPERMOD_20",
	"VEM_SUPERMOD_21",
	"VEM_SUPERMOD_22",
	"VEM_SUPERMOD_23",*/
	"CMM_MOD_S0",//"Plateholder",
	"CMM_MOD_S1",//"Vanity Plate",
	"CMM_MOD_S2",//"Trim Design",
	"CMM_MOD_S3",//"Ornament",
	"CMM_MOD_S4",//"Dash",
	"CMM_MOD_S5",//"Dial Design",
	"CMM_MOD_S6",//"Doorcards",
	"CMM_MOD_S7",//"Leather Seats",
	"CMM_MOD_S8",//"Steering Wheel",
	"CMM_MOD_S9",//"Column Shifter Lever",
	"CMM_MOD_S10",//"Plaque",
	"CMM_MOD_S11",//"Speakers",
	"CMM_MOD_S12",//"Trunk",
	"CMM_MOD_S13",//"Hydraulics",
	"CMM_MOD_S14",//"Engine Block",
	"CMM_MOD_S15",//"Air Filter",
	"CMM_MOD_S16",//"Struts",
	"CMM_MOD_S17",//"Arch Cover",
	"CMM_MOD_S18",//"Aerials",
	"CMM_MOD_S19",//"Trim",
	"CMM_MOD_S20",//"Tank",
	"CMM_MOD_S21",//"Windows",
	"CMM_MOD_S22",//"Unknown 47",
	"CMM_MOD_S23",//"Livery",
};
#define OFFSET_PLAYER_NAME_LOCAL        0x7C



MODULEINFO g_MainModuleInfo = { 0 };
void SetName(char* name)
{
	DWORD64 start = DWORD64(g_MainModuleInfo.lpBaseOfDll);

	uintptr_t nameOffset1 = Memory::get_base_offsetted(0x28B59BC);
	uintptr_t nameOffset2 = Memory::get_base_offsetted(0x28BB8C4);
	uintptr_t nameOffset3 = Memory::get_base_offsetted(0x2CE7FEC); // go test okay boss
	uintptr_t nameOffset4 = Memory::get_base_offsetted(0x2CEAFBF);
	uintptr_t nameOffset5 = Memory::get_base_offsetted(0x2CEE3BF);
	uintptr_t nameOffset6 = Memory::get_base_offsetted(0x2CEE654);
	uintptr_t nameOffset7 = Memory::get_multilayer_pointer(Hooking::getWorldPtr(), { OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_NAME_LOCAL });

	memcpy(reinterpret_cast<void*>(nameOffset1), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset2), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset3), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset4), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset5), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset6), name, 16);
	memcpy(reinterpret_cast<void*>(nameOffset7), name, 16);

	notifyMap(Menu::Tools::StringToChar("~b~Setting Ingame Name To " + (std::string)name));
	notifyMap("~b~Join a new session to apply the name change");
}


static char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3"
};
static char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY"
};
static char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT"
};
static char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS"
};
static char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO"
};
static char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2"
};
static char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2"
};
static char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5"
};
static char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA"
};
static char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON"
};
static char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER",
};
static char* DLC[] = {
"CARACARA2","DRAFTER","DYNASTY","EMERUS","GAUNTLET3","GAUNTLET4","HELLION","ISSI7","JUGULAR",
"KRIEGER","LOCUST","NEBULA","NEO","NOVAK","PARAGON","PARAGON2","PEYOTE2","RROCKET",
"S80","THRAX","ZION3","ZORRUSSO"
};
static char* ArenaWar[] = {
	"Bruiser", "Brutus", "Cerberus", "Cerberus2", "Deathbike", "Deathbike2", "Deathbike3", "Dominator", "Dominator2", "Dominator3", "Impaler", "Impaler2", "Impaler3",
	"Impaler4", "Imperator", "Imperator2", "Imperator3", "Issi", "Issi2", "Issi2",
	"Sasquatch", "Sasquatch2", "Sasquatch3", "Scarab", "Scarab2", "Scarab3", "Slamvan", "Slamvan2", "ZR380", "ZR3802", "ZR3803", "Clique", "Deveste","Deviant", "Bruiser2", "Bruiser3", "Brutus2",
	"Brutus3", "Cerberus", "GTO", "Bandito","GT", "Toros","Tulip", "Vamos"
};
static char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARTZER", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON"
};
static char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2",
};
static char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1"
};
static char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2"
};
static char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2"
};
char* Favorites[] =
{
	"MP_F_Misty_01","U_M_Y_ImpoRage", "U_M_Y_Zombie_01", "S_F_Y_Stripper_01", "S_M_Y_Swat_01", "S_M_Y_Pilot_01", "S_M_M_MovAlien_01", "S_M_M_HairDress_01","S_M_M_HighSec_01","S_M_M_HighSec_02","S_M_M_Janitor","S_M_M_LatHandy_01","S_M_M_LifeInvad_01","S_M_M_Linecook","S_M_M_LSMetro_01","S_M_M_Mariachi_01","S_M_M_Marine_01","S_M_M_Marine_02","S_M_M_Migrant_01",
	"S_M_M_MovAlien_01","S_M_M_MovPrem_01","S_M_M_MovSpace_01","S_M_M_Paramedic_01","S_M_M_Pilot_01","S_M_M_Pilot_02","S_M_M_Postal_01","S_M_M_Postal_02","S_M_M_PrisGuard_01","S_M_M_Scientist_01","S_M_M_Security_01","S_M_M_SnowCop_01",
	"S_M_M_StrPerf_01","S_M_M_StrPreach_01","S_M_M_StrVend_01","S_M_M_Trucker_01","S_M_M_UPS_01","S_M_M_UPS_02","S_M_O_Busker_01","S_M_Y_AirWorker","S_M_Y_AmmuCity_01","S_M_Y_ArmyMech_01","S_M_Y_Autopsy_01","S_M_Y_Barman_01","S_M_Y_BayWatch_01",
	"S_M_Y_BlackOps_01","S_M_Y_BlackOps_02","S_M_Y_BlackOps_03","S_M_Y_BusBoy_01","S_M_Y_Chef_01","S_M_Y_Clown_01","S_M_Y_Construct_01","S_M_Y_Construct_02","S_M_Y_Cop_01","S_M_Y_Dealer_01","S_M_Y_DevinSec_01","S_M_Y_DockWork_01","S_M_Y_Doorman_01",
	"S_M_Y_DWService_01","S_M_Y_DWService_02","S_M_Y_Factory_01","S_M_Y_Fireman_01","S_M_Y_Garbage","S_M_Y_Grip_01","S_M_Y_HwayCop_01","S_M_Y_Marine_01","S_M_Y_Marine_02","S_M_Y_Marine_03","S_M_Y_Mime","S_M_Y_PestCont_01",
	"S_M_Y_PrisMuscl_01","S_M_Y_Ranger_01","S_M_Y_Robber_01","S_M_Y_Sheriff_01","S_M_Y_Shop_MASK","S_M_Y_StrVend_01","S_M_Y_USCG_01","S_M_Y_Valet_01","S_M_Y_Waiter_01",
	"S_M_Y_WinClean_01","S_M_Y_XMech_01","S_M_Y_XMech_02","U_F_M_Corpse_01","U_F_M_Miranda","U_F_M_ProMourn_01","U_F_O_MovieStar","U_F_O_ProlHost_01","U_F_Y_BikerChic","U_F_Y_COMJane","U_F_Y_corpse_01","U_F_Y_corpse_02",
	"U_F_Y_HotPosh_01","U_F_Y_JewelAss_01","U_F_Y_Mistress","U_F_Y_PoppyMich","U_F_Y_Princess","U_F_Y_SpyActress","U_M_M_Aldinapoli","U_M_M_BankMan","U_M_M_BikeHire_01","U_M_M_FIBArchitect","U_M_M_FilmDirector","U_M_M_GlenStank_01",
	"U_M_M_Griff_01","U_M_M_Jesus_01","U_M_M_JewelSec_01","U_M_M_JewelThief","U_M_M_MarkFost","U_M_M_PartyTarget","U_M_M_ProlSec_01","U_M_M_ProMourn_01","U_M_M_RivalPap","U_M_M_SpyActor","U_M_M_WillyFist","U_M_O_FinGuru_01",
	"U_M_O_TapHillBilly","U_M_O_Tramp_01","U_M_Y_Abner","U_M_Y_AntonB",	"U_M_Y_BabyD","U_M_Y_Baygor","U_M_Y_BurgerDrug_01","U_M_Y_Chip","U_M_Y_Cyclist_01","U_M_Y_Guido_01","U_M_Y_GunVend_01","U_M_Y_Hippie_01",
	"U_M_Y_ImpoRage","U_M_Y_Justin","U_M_Y_Mani","U_M_Y_MilitaryBum","U_M_Y_Paparazzi","U_M_Y_Party_01","U_M_Y_Pogo_01","U_M_Y_Prisoner_01","U_M_Y_ProlDriver_01","U_M_Y_RSRanger_01","U_M_Y_SBike","U_M_Y_StagGrm_01","U_M_Y_Tattoo_01", "S_M_Y_Swat_01", "U_M_Y_FIBMugger_01", "U_M_M_FIBArchitect", "U_M_Y_MilitaryBum", "MP_M_FIBSec_01", "S_M_M_FIBOffice_01","S_M_M_FIBOffice_02", "U_M_Y_MilitaryBum", "S_M_M_Marine_01","S_M_M_Marine_02", "S_M_Y_Prisoner_01",
	"CSB_Cop", "CSB_Ramp_marine", 	"A_F_Y_Topless_01", "A_M_M_Beach_01","A_M_M_Beach_02", "A_M_Y_Beach_01","A_M_Y_Beach_02","A_M_Y_Beach_03", "CSB_PornDudes", "CSB_Stripper_01","CSB_Stripper_02", "U_M_Y_Zombie_01",
};






char* Regular[] =
{
	"A_F_M_Beach_01","A_F_M_BevHills_01","A_F_M_BevHills_02","A_F_M_BodyBuild_01","A_F_M_Business_02","A_F_M_Downtown_01","A_F_M_EastSA_01",
	"A_F_M_EastSA_02","A_F_M_FatBla_01","A_F_M_FatCult_01","A_F_M_FatWhite_01","A_F_M_KTown_01","A_F_M_KTown_02","A_F_M_ProlHost_01","A_F_M_Salton_01","A_F_M_SkidRow_01","A_F_M_SouCentMC_01","A_F_M_SouCent_01","A_F_M_SouCent_02",
	"A_F_M_Tourist_01","A_F_M_TrampBeac_01","A_F_M_Tramp_01","A_F_O_GenStreet_01","A_F_O_Indian_01","A_F_O_KTown_01","A_F_O_Salton_01","A_F_O_SouCent_01","A_F_O_SouCent_02","A_F_Y_Beach_01","A_F_Y_BevHills_01","A_F_Y_BevHills_02",
	"A_F_Y_BevHills_03","A_F_Y_BevHills_04","A_F_Y_Business_01","A_F_Y_Business_02","A_F_Y_Business_03","A_F_Y_Business_04","A_F_Y_EastSA_01","A_F_Y_EastSA_02","A_F_Y_EastSA_03","A_F_Y_Epsilon_01","A_F_Y_Fitness_01",
	"A_F_Y_Fitness_02","A_F_Y_GenHot_01","A_F_Y_Golfer_01","A_F_Y_Hiker_01","A_F_Y_Hippie_01","A_F_Y_Hipster_01","A_F_Y_Hipster_02","A_F_Y_Hipster_03","A_F_Y_Hipster_04","A_F_Y_Indian_01","A_F_Y_Juggalo_01","A_F_Y_Runner_01",
	"A_F_Y_RurMeth_01","A_F_Y_SCDressy_01","A_F_Y_Skater_01","A_F_Y_SouCent_01","A_F_Y_SouCent_02","A_F_Y_SouCent_03", "A_M_M_BevHills_01","A_M_M_BevHills_02","A_M_M_Business_01",
	"A_M_M_EastSA_01","A_M_M_EastSA_02","A_M_M_Farmer_01","A_M_M_FatLatin_01","A_M_M_GenFat_01","A_M_M_GenFat_02","A_M_M_Golfer_01","A_M_M_HasJew_01","A_M_M_Hillbilly_01","A_M_M_Hillbilly_02","A_M_M_Indian_01",
	"A_M_M_KTown_01","A_M_M_Malibu_01","A_M_M_MexCntry_01","A_M_M_MexLabor_01","A_M_M_OG_Boss_01","A_M_M_Paparazzi_01","A_M_M_Polynesian_01","A_M_M_ProlHost_01","A_M_M_RurMeth_01","A_M_M_Salton_01","A_M_M_Salton_02",
	"A_M_M_Salton_03","A_M_M_Salton_04","A_M_M_Skater_01","A_M_M_Skidrow_01","A_M_M_SoCenLat_01","A_M_M_SouCent_01","A_M_M_SouCent_02","A_M_M_SouCent_03","A_M_M_SouCent_04","A_M_M_StLat_02","A_M_M_Tennis_01",
	"A_M_M_Tourist_01","A_M_M_TrampBeac_01","A_M_M_Tramp_01","A_M_M_TranVest_01","A_M_M_TranVest_02","A_M_O_ACult_01","A_M_O_ACult_02","A_M_O_Beach_01","A_M_O_GenStreet_01","A_M_O_KTown_01","A_M_O_Salton_01",
	"A_M_O_SouCent_01","A_M_O_SouCent_02","A_M_O_SouCent_03","A_M_O_Tramp_01","A_M_Y_ACult_01","A_M_Y_ACult_02","A_M_Y_BeachVesp_01","A_M_Y_BeachVesp_02", "A_M_Y_BevHills_01",
	"A_M_Y_BevHills_02", "A_M_Y_Cyclist_01","A_M_Y_DHill_01","A_M_Y_Downtown_01","A_M_Y_EastSA_01","A_M_Y_EastSA_02",
	"A_M_Y_Epsilon_01","A_M_Y_Epsilon_02","A_M_Y_Gay_01","A_M_Y_Gay_02", "A_M_Y_GenStreet_01","A_M_Y_GenStreet_02","A_M_Y_Indian_01","A_M_Y_Jetski_01","A_M_Y_Juggalo_01","A_M_Y_KTown_01","A_M_Y_KTown_02","A_M_Y_Latino_01","A_M_Y_MethHead_01","A_M_Y_MexThug_01","A_M_Y_MotoX_01","A_M_Y_MotoX_02", "CSB_Customer","CSB_Denise_friend",
	"CSB_FOS_rep","CSB_G","CSB_Groom","CSB_Grove_str_dlr","CSB_Hao","CSB_Hugh","CSB_Imran","CSB_Janitor","CSB_Maude","CSB_MWeather","CSB_Ortega","CSB_Oscar", "IG_TylerDix","IG_Wade","IG_Zimbor","MP_F_DeadHooker","MP_F_Freemode_01","MP_F_Misty_01","MP_F_StripperLite","MP_G_M_Pros_01","MP_HeadTargets","MP_M_Claude_01","MP_M_ExArmy_01","MP_M_FamDD_01","MP_M_FIBSec_01","MP_M_Freemode_01",
	"MP_M_Marston_01","MP_M_Niko_01","MP_M_ShopKeep_01","MP_S_M_Armoured_01","Player_One","Player_Two","Player_Zero","slod_human","slod_large_quadped","slod_small_quadped","S_F_M_Fembarber","S_F_M_Maid_01","S_F_M_Shop_HIGH",
	"S_F_M_SweatShop_01","S_F_Y_AirHostess_01","S_F_Y_Bartender_01","S_F_Y_Baywatch_01","S_F_Y_Cop_01","S_F_Y_Factory_01","S_F_Y_Hooker_01","S_F_Y_Hooker_02","S_F_Y_Hooker_03","S_F_Y_Migrant_01","S_F_Y_MovPrem_01","S_F_Y_Ranger_01",
	"S_F_Y_Scrubs_01","S_F_Y_Sheriff_01","S_F_Y_Shop_LOW","S_F_Y_Shop_MID","S_F_Y_StripperLite","S_F_Y_Stripper_01","S_F_Y_Stripper_02","S_F_Y_SweatShop_01","S_M_M_AmmuCountry","S_M_M_Armoured_01","S_M_M_Armoured_02","S_M_M_AutoShop_01",
	"S_M_M_AutoShop_02","S_M_M_Bouncer_01","S_M_M_ChemSec_01","S_M_M_CIASec_01","S_M_M_CntryBar_01","S_M_M_DockWork_01","S_M_M_Doctor_01","S_M_M_Gaffer_01","S_M_M_Gardener_01","S_M_M_GenTransport",
};

char* Coolpeople[] =
{
	"A_M_Y_BreakDance_01","A_M_Y_BusiCas_01","A_M_Y_Business_01","A_M_Y_Business_02","A_M_Y_Business_03", "A_M_Y_Golfer_01","A_M_Y_HasJew_01","A_M_Y_Hiker_01", "A_M_Y_Hippy_01","A_M_Y_Hipster_01","A_M_Y_Hipster_02",
	"A_M_Y_Hipster_03", "CSB_PrologueDriver","CSB_ProlSec","CSB_Ramp_gang",
	"CSB_Ramp_hic","CSB_Ramp_hipster", "CSB_Ramp_mex","CSB_Reporter","CSB_RoccoPelosi","CSB_Screen_Writer","CSB_TrafficWarden","CS_AmandaTownley","CS_Andreas",
	"cs_ashley","CS_Bankman","CS_Barry","CS_Beverly","CS_Brad","CS_BradCadaver","CS_Carbuyer","CS_Casey","CS_ChengSr","CS_ChrisFormage","CS_Clay","CS_Dale","CS_DaveNorton","cs_debra","cs_denise","CS_Devin","CS_Dom","CS_Dreyfuss",
	"CS_DrFriedlander","CS_Fabien","CS_FBISuit_01","CS_Floyd","CS_Guadalope","cs_gurk","CS_Hunter","CS_Janet","CS_JewelAss","CS_JimmyBoston","CS_JimmyDiSanto","CS_JoeMinuteMan","CS_JohnnyKlebitz","CS_Josef","CS_Josh","CS_LamarDavis",
	"CS_Lazlow","CS_LesterCrest","CS_LifeInvad_01","CS_Magenta","CS_Manuel","CS_Marnie","CS_MartinMadrazo","CS_MaryAnn","CS_Michelle","CS_Milton","CS_Molly","CS_MovPremF_01","CS_MovPremMale","CS_MRK","CS_MrsPhillips","CS_MRS_Thornhill",
	"CS_Natalia","CS_NervousRon","CS_Nigel","CS_Old_Man1A","CS_Old_Man2","CS_Omega","CS_Orleans","CS_Paper","CS_Patricia","CS_Priest","CS_ProlSec_02","CS_RussianDrunk","CS_SiemonYetarian","CS_Solomon","CS_SteveHains","CS_Stretch",
	"CS_Tanisha","CS_TaoCheng","CS_TaosTranslator","CS_TennisCoach","CS_Terry","CS_Tom","CS_TomEpsilon","CS_TracyDiSanto","CS_Wade","CS_Zimbor","G_F_Y_ballas_01","G_F_Y_Families_01","G_F_Y_Lost_01","G_F_Y_Vagos_01","G_M_M_ArmBoss_01",
	"G_M_M_ArmGoon_01","G_M_M_ArmLieut_01","G_M_M_ChemWork_01","G_M_M_ChiBoss_01","G_M_M_ChiCold_01","G_M_M_ChiGoon_01","G_M_M_ChiGoon_02","G_M_M_KorBoss_01","G_M_M_MexBoss_01","G_M_M_MexBoss_02","G_M_Y_ArmGoon_02","G_M_Y_Azteca_01",
	"G_M_Y_BallaEast_01","G_M_Y_BallaOrig_01","G_M_Y_BallaSout_01","G_M_Y_FamCA_01","G_M_Y_FamDNF_01","G_M_Y_FamFor_01","G_M_Y_Korean_01","G_M_Y_Korean_02","G_M_Y_KorLieut_01","G_M_Y_Lost_01","G_M_Y_Lost_02","G_M_Y_Lost_03",
	"G_M_Y_MexGang_01","G_M_Y_MexGoon_01","G_M_Y_MexGoon_02","G_M_Y_MexGoon_03","G_M_Y_PoloGoon_01","G_M_Y_PoloGoon_02","G_M_Y_SalvaBoss_01","G_M_Y_SalvaGoon_01","G_M_Y_SalvaGoon_02","G_M_Y_SalvaGoon_03","G_M_Y_StrPunk_01","G_M_Y_StrPunk_02",
	"HC_Driver","HC_Gunman","HC_Hacker","IG_Abigail","IG_AmandaTownley","IG_Andreas","IG_Ashley","IG_BallasOG","IG_Bankman","IG_Barry","IG_BestMen","IG_Beverly","IG_Brad","IG_Bride","IG_Car3guy1","IG_Car3guy2","IG_Casey",
	"IG_Chef","IG_ChengSr","IG_ChrisFormage","IG_Clay","IG_ClayPain","IG_Cletus","IG_Dale","IG_DaveNorton","IG_Denise","IG_Devin","IG_Dom","IG_Dreyfuss","IG_DrFriedlander","IG_Fabien","IG_FBISuit_01","IG_Floyd","IG_Groom",
	"IG_Hao","IG_Hunter","IG_Janet","ig_JAY_Norris","IG_JewelAss","IG_JimmyBoston","IG_JimmyDiSanto","IG_JoeMinuteMan","ig_JohnnyKlebitz","IG_Josef","IG_Josh","IG_KerryMcIntosh","IG_LamarDavis","IG_Lazlow","IG_LesterCrest",
	"IG_LifeInvad_01","IG_LifeInvad_02","IG_Magenta","IG_Manuel","IG_Marnie","IG_MaryAnn","IG_Maude","IG_Michelle","IG_Milton","IG_Molly","IG_MRK","IG_MrsPhillips","IG_MRS_Thornhill","IG_Natalia","IG_NervousRon","IG_Nigel",
	"IG_Old_Man1A","IG_Old_Man2","IG_Omega","IG_ONeil","IG_Orleans","IG_Ortega","IG_Paper","IG_Patricia","IG_Priest","IG_ProlSec_02","IG_Ramp_Gang","IG_Ramp_Hic","IG_Ramp_Hipster","IG_Ramp_Mex","IG_RoccoPelosi","IG_RussianDrunk",
	"IG_Screen_Writer","IG_SiemonYetarian","IG_Solomon","IG_SteveHains","IG_Stretch","IG_Talina","IG_Tanisha","IG_TaoCheng","IG_TaosTranslator","ig_TennisCoach","IG_Terry","IG_TomEpsilon","IG_Tonya","IG_TracyDiSanto","IG_TrafficWarden", "A_F_Y_Tennis_01","A_F_Y_Tourist_01","A_F_Y_Tourist_02","A_F_Y_Vinewood_01",
	"A_F_Y_Vinewood_02","A_F_Y_Vinewood_03","A_F_Y_Vinewood_04","A_F_Y_Yoga_01","A_M_M_ACult_01","A_M_M_AfriAmer_01"
};

char* Animals[] =
{
	"A_C_Boar","A_C_Chickenhawk","A_C_Chimp","A_C_Chop","A_C_Cormorant","A_C_Cow","A_C_Coyote","A_C_Crow","A_C_Deer","A_C_Fish","A_C_Hen","A_C_Husky","A_C_MtLion","A_C_Pig","A_C_Pigeon","A_C_Rat","A_C_Retriever",
	"A_C_Rhesus","A_C_Rottweiler","A_C_Seagull","A_C_SharkTiger","A_C_shepherd",
};

// Weapon Lists
Hash raypistol = GAMEPLAY::GET_HASH_KEY("WEAPON_RAYPISTOL");
Hash raycarbine = GAMEPLAY::GET_HASH_KEY("WEAPON_RAYCARBINE");
Hash rayminigun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAYMINIGUN");
uint Weapons[] = { rayminigun, raycarbine, raypistol, 0x6D544C99, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
uint MK2Weapons[] = { 3219281620 ,2024373456 ,961495388 ,4208062921 ,3686625920 ,177293209 , };
ifstream inFile;

char* CharKeyboard(char* windowName = "", int maxInput = 21, char* defaultText = "") {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(0, "", "", defaultText, "", "", "", maxInput);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return "";
	return GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
}
int NumberKeyboard() {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(1, "", "", "", "", "", "", 10);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return 0;
	return atof(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
}
void notifyleft(char* msg) {
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(msg);
	UI::_DRAW_NOTIFICATION(2000, 1);
}

bool Menu::FileExists(const std::string& fileName)
{
	struct stat buffer;
	Log::Msg("Debug File Exists Success");
	return (stat(fileName.c_str(), &buffer) == 0);
}

const std::string Menu::GetModulePath(HMODULE module)
{
	std::string path;
	char buffer[MAX_PATH];
	GetModuleFileNameA(module, buffer, MAX_PATH);
	//PathRemoveFileSpecA(buffer);
	path = buffer;
	Log::Msg("Debug Module Path Success");
	return path;
}

int Menu::RegisterFile(const std::string& fullPath, const std::string& fileName)
{
	Log::Msg("Debug Register File");
	int textureID = -1;
	static uint32_t*(*pRegisterFile)(int*, const char*, bool, const char*, bool) = reinterpret_cast<decltype(pRegisterFile)>(Memory::pattern("48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 54 41 56 41 57 48 83 EC 50 48 8B EA 4C 8B FA 48 8B D9 4D 85 C9").count(1).get(0).get<void>(0));
	if (pRegisterFile(&textureID, fullPath.c_str(), true, fileName.c_str(), false))
	{
		Log::Msg("Debug Register File Success");
		Log::Msg("Registered File %s with ID:%i", fullPath.c_str(), textureID);
		return textureID;
	}
	Log::Msg("Debug Register File Error");
	Log::Error("Failed to register %s", fullPath.c_str());
	return 0;
}

void Menu::Drawing::DrawSprite(char * textureDict, char * textureName, VECTOR2 pos, VECTOR2 size, float rotation, RGBA color)
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
	{
		GRAPHICS::DRAW_SPRITE(textureDict, textureName, pos.x, pos.y, size.x, size.y, rotation, color.r, color.g, color.b, color.a);
		//Log::Msg("Debug Drawed");
	}
}

bool isPlayerFriend(Player player, bool result)
{
	int NETWORK_HANDLE[76];
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, &NETWORK_HANDLE[0], 13);
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&NETWORK_HANDLE[0], 13))
	{
		result = NETWORK::NETWORK_IS_FRIEND(&NETWORK_HANDLE[0]);
		return true;
	}
	return false;
}

std::wstring s2ws(const std::string& str) {
	using convert_typeX = std::codecvt_utf8<wchar_t>;
	std::wstring_convert<convert_typeX, wchar_t> converterX;
	return converterX.from_bytes(str);
}

int NotificationCEO(char *text, char *text2, char *Subject)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG("CHAR_GANGAPP", "CHAR_GANGAPP", false, 7, text2, Subject, 1.0, "___MENU");
	return UI::_DRAW_NOTIFICATION(1, 1);

}

std::string ws_to_s(const std::wstring & s)
{
	const wchar_t * cs = s.c_str();
	const size_t wn = std::wcsrtombs(NULL, &cs, 0, NULL);

	std::vector<char> buf(wn + 1);
	const size_t wn_again = std::wcsrtombs(buf.data(), &cs, wn + 1, NULL);

	return std::string(buf.data(), wn);
}

void TPto(Vector3 Coords)
{
	int Handle = playerPedId;
	if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Handle, false), Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
	}
	else
		ENTITY::SET_ENTITY_COORDS(Handle, Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
}

void spawn_money_safe(Player selectedPlayer)
{
	Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(selectedPlayer, 0.0f, 0.0f, 0.5f);
	Hash PigeonHash = GAMEPLAY::GET_HASH_KEY("a_c_pigeon");
	if (STREAMING::IS_MODEL_IN_CDIMAGE(PigeonHash))
	{
		if (STREAMING::IS_MODEL_VALID(PigeonHash))
		{
			int TenK = 10000;
			STREAMING::REQUEST_MODEL(PigeonHash);
			while (!STREAMING::HAS_MODEL_LOADED(PigeonHash)) WAIT(0);
			Ped pigeonBank = PED::CREATE_PED(26, PigeonHash, coords.x, coords.y + 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);
			Ped pigeonBank2 = PED::CREATE_PED(26, PigeonHash, coords.x, coords.y - 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);

			Ped pigeonBank3 = PED::CREATE_PED(26, PigeonHash, coords.x + 0.15, coords.y, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);
			Ped pigeonBank4 = PED::CREATE_PED(26, PigeonHash, coords.x - 0.15, coords.y, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);

			Ped pigeonBank5 = PED::CREATE_PED(26, PigeonHash, coords.x + 0.15, coords.y + 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);
			Ped pigeonBank6 = PED::CREATE_PED(26, PigeonHash, coords.x + 0.15, coords.y - 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);

			Ped pigeonBank7 = PED::CREATE_PED(26, PigeonHash, coords.x - 0.15, coords.y + 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);
			Ped pigeonBank8 = PED::CREATE_PED(26, PigeonHash, coords.x - 0.15, coords.y - 0.15, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);

			Ped pigeonBank9 = PED::CREATE_PED(26, PigeonHash, coords.x, coords.y, coords.z, ENTITY::GET_ENTITY_HEADING(selectedPlayer), TRUE, TRUE);

			PED::SET_PED_MONEY(pigeonBank, TenK);
			PED::SET_PED_MONEY(pigeonBank2, TenK);
			PED::SET_PED_MONEY(pigeonBank3, TenK);
			PED::SET_PED_MONEY(pigeonBank4, TenK);
			PED::SET_PED_MONEY(pigeonBank5, TenK);
			PED::SET_PED_MONEY(pigeonBank6, TenK);
			PED::SET_PED_MONEY(pigeonBank7, TenK);
			PED::SET_PED_MONEY(pigeonBank8, TenK);
			PED::SET_PED_MONEY(pigeonBank9, TenK);

			ENTITY::SET_ENTITY_HEALTH(pigeonBank, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank2, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank3, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank4, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank5, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank6, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank7, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank8, 0);
			ENTITY::SET_ENTITY_HEALTH(pigeonBank9, 0);
			WAIT(200);

			PED::DELETE_PED(&pigeonBank);
			PED::DELETE_PED(&pigeonBank2);
			PED::DELETE_PED(&pigeonBank3);
			PED::DELETE_PED(&pigeonBank4);
			PED::DELETE_PED(&pigeonBank5);
			PED::DELETE_PED(&pigeonBank6);
			PED::DELETE_PED(&pigeonBank7);
			PED::DELETE_PED(&pigeonBank8);
			PED::DELETE_PED(&pigeonBank9);
		}
	}
}


void main() {
		
	
	
	
	
	HW_PROFILE_INFO hwProfileInfo;

	if (GetCurrentHwProfile(&hwProfileInfo) != NULL) {

		wchar_t* hwidproc = hwProfileInfo.szHwProfileGuid;
		wstring hwidc(hwidproc);

		if (hwidc.empty()) {
			Log::Msg("Incorrect Login HWID");
			return exit(0);
		}

		string hwidPro(hwidc.begin(), hwidc.end());

		char* hwidfinal = new char[hwidPro.size() + 1]; // +1 to account for \0 byte
		*hwidfinal = '\0';
		strncat(hwidfinal, hwidPro.c_str(), hwidPro.size());

		TCHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
		DWORD size = sizeof(computerName) / sizeof(computerName[0]);
		GetComputerName(computerName, &size);
		wstring test(&computerName[0]); //convert to wstring
		string test2(test.begin(), test.end());
		char* compName = new char[test2.size() + 1];
		*compName = '\0';
		strncat(compName, test2.c_str(), test2.size());



		char* combinedHwid = new char[strlen(hwidfinal) + strlen(compName) + 1];
		*combinedHwid = '\0';
		strcat(combinedHwid, compName);
		strcat(combinedHwid, hwidfinal);

		string Username = CharKeyboard("Username", 21, "Username");
		string Password = CharKeyboard("Password", 21, "Password");
		char* username = new char[Username.length() + 1];
		strcpy(username, Username.c_str());
		delete[] username;

		char* password = new char[Password.length() + 1];
		strcpy(password, Password.c_str());
		delete[] password;

		std::wstring hwidfinallink = (L"https://deathrowcheats.com/auth/auth.php?version=standard&username=" + s2ws(username) + L"&password=" + s2ws(password) + L"&hwid=" + s2ws(combinedHwid));
		//NotificationCEO("Authlink", "Zap", hwidPro.);
		WinHttpClient hwidclient(hwidfinallink);
		hwidclient.SetRequireValidSslCertificates(true);


		hwidclient.SendHttpRequest();
		std::wstring hwidresponse = hwidclient.GetResponseContent();
		std::wstring const str = hwidresponse.c_str();


		using convert_type = std::codecvt_utf8<wchar_t>;
		std::wstring_convert<convert_type, wchar_t> converter;

		//use converter (.to_bytes: wstr->str, .from_bytes: str->wstr)
		std::string converted_str = converter.to_bytes(str);
		char* cstr2 = new char[converted_str.length() + 1];
		strcpy(cstr2, converted_str.c_str());
		delete[] cstr2;

		if (converted_str.find("true") == 0 && converted_str.find("standard"))
		{
			NotificationCEO("Welcome to Zap. Open the menu with F8", "Zap", "Standard");
		}
		else
		{
			Log::Msg("Incorrect Login");
			return exit(0);
		}
	}
	
	  
	
		UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("Enter your Username");
	UI::_DRAW_NOTIFICATION(FALSE, FALSE);
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter your Username", "", "", "", "", "", 16);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
	NotificationCEO("Welcome to Zap. Open the menu with F8", "Zap", "Standard");
	




	while (true) {

		Menu::Checks::Controlls();
		LoopFeatures::UpdateLoop();
		switch (Menu::Settings::currentMenu) {

		case mainmenu:
		{
		

			Menu::Title("Main Menu");
			Menu::MenuOption("Self", self);
			Menu::MenuOption("Network", network);
			Menu::MenuOption("Weapon", weps); //Yeet
			Menu::MenuOption("Vehicle", vehmenu); //Yeet
			Menu::MenuOption("Teleport", tpmenu); //Yeet
			Menu::MenuOption("Miscellaneous", miscmenu); //Yeet
			Menu::MenuOption("Hotkeys", hotkeys); //Ýeet
			Menu::MenuOption("Recovery", recovery); //Yeeted for beta
			Menu::MenuOption("Settings", settings);
			Menu::MenuOption("Kill Game", exitgta); //Yeet
			//if (Menu::Option("Unhook Zap")) {

				//Hooking::RequestCleanup();

			//}
		}
		break;
#pragma region Movement
		case Character:
		{
			Menu::Title("Character");
			if (Menu::Int("Movement Multiplying", Menu::Settings::FastRun.r, 0, 20))
			{
				LoopFeatures::FastRun = false;
				Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_PLAYER_INFO , OFFSET_PLAYER_INFO_RUN_SPD }, Menu::Settings::FastRun.r);
			}
			if (Menu::Int("Player Alpha", playerAlpha, 0, 255)) { ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), playerAlpha, 0); }
			if (Menu::Int("Wanted Level", Menu::Settings::wantedlevel.r, 0, 5))
			{
				LoopFeatures::Neverwanted = false;
				Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, Menu::Settings::wantedlevel.r);
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::wantedlevel.r = NumberKeyboard();
					LoopFeatures::Neverwanted = false;
					Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, Menu::Settings::wantedlevel.r);
				}
			}
			Menu::MenuOption("Walk Styles", Walkstyles);
			Menu::MenuOption("Visions", Vision);
			Menu::MenuOption("Animations", Animations);
			Menu::MenuOption("Scenarios", senas);
			Menu::MenuOption("Models", modelchanger);
			Menu::MenuOption("Cloth", Cloth);
		}
		break;
#pragma region Self Menu
		case self:
		{
			Menu::Title("Self Menu");
			Menu::Toggle("Godmode", LoopFeatures::Godmode);
			Menu::Toggle("Never Wanted", LoopFeatures::Neverwanted);
			Menu::Toggle("Super Jump", LoopFeatures::Superjump);
			//Menu::Toggle("Super Vision", LoopFeatures::SV);
			Menu::Toggle("Invisible", LoopFeatures::Ghostmode);
			Menu::Toggle("No Ragdoll", LoopFeatures::NoRagdoll);
			Menu::Toggle("Fly", LoopFeatures::Fly);
			Menu::Toggle("Firebreath", LoopFeatures::FB);
			Menu::Toggle("Flash Run", LoopFeatures::SuperRun);
			Menu::Toggle("No Clip", LoopFeatures::NoClip);
			Menu::MenuOption("Character", Character);
			if (Menu::Option("Remove Wanted Level"))
			{
				Features::RemovedWanted();
			}
			if (Menu::Option("Random Outfit")) { PED::SET_PED_RANDOM_COMPONENT_VARIATION(playerPedId, true); }
			if (Menu::Option("Suicide")) { Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_ENTITY_HEALTH }, 0); }
		}
		break;
#pragma region Network
		case network:
		{
			Menu::Title("Network");
			Menu::MenuOption("Online Players", plist);
			Menu::MenuOption("Session", allplrs);
			Menu::MenuOption("Protections", protections);
			Menu::MenuOption("Name Changer", changename);
		}
		break;
#pragma endregion
#pragma region Name Changer
		case changename:
		{
			Menu::Title("Change Name");
			if (Menu::Option("Plain Text")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(newname);
			}
			if (Menu::Option("~r~Red")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~r~" + (std::string)newname));
			}
			if (Menu::Option("~g~Green")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~g~" + (std::string)newname));
			}
			if (Menu::Option("~b~Blue")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~b~" + (std::string)newname));
			}
			if (Menu::Option("~italic~Italic")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~italic~" + (std::string)newname));
			}
			if (Menu::Option("~bold~Bold")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~bold~" + (std::string)newname));
			}
			if (Menu::Option("~y~Yellow")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~y~" + (std::string)newname));
			}
			if (Menu::Option("~p~Purple")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~p~" + (std::string)newname));
			}
			if (Menu::Option("~o~Orange")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~o~" + (std::string)newname));
			}
			if (Menu::Option("~c~Grey")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~c~" + (std::string)newname));
			}
			if (Menu::Option("~m~Dark Grey")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~m~" + (std::string)newname));
			}
			if (Menu::Option("~u~Black")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~u~" + (std::string)newname));
			}
			if (Menu::Option("~d~Dark Blue")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~d~" + (std::string)newname));
			}
			if (Menu::Option("~f~Light Blue")) {
				char* newname;
				GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "Enter the name you want", "", "", "name", "", "", 16);
				while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
				if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return;
				{
					newname = GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
				}
				SetName(Menu::Tools::StringToChar("~f~" + (std::string)newname));
			}
		}
		break;
#pragma endregion
					case doorsmenu:
					{
						Menu::Title("Doors");
						if (Menu::Option("Delete Doors"))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							for (int DoorIndex = 0; DoorIndex <= 6; DoorIndex++)
								VEHICLE::SET_VEHICLE_DOOR_BROKEN(playerVeh, DoorIndex, 1);
						}
						if (Menu::Option("Open All Doors"))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							for (int DoorIndex = 0; DoorIndex <= 6; DoorIndex++)

								VEHICLE::SET_VEHICLE_DOOR_OPEN(playerVeh, DoorIndex, 0, 0);
						}
						if (Menu::Option("Close All Doors"))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							for (int DoorIndex = 0; DoorIndex <= 6; DoorIndex++)

								VEHICLE::SET_VEHICLE_DOOR_SHUT(playerVeh, DoorIndex, 0);
						}
						if (Menu::Int("Door", Menu::Settings::selectedDoor.r, 1, 5))
						{
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::torquevalue.r = NumberKeyboard();
							}
						}
						if (Menu::Option("Open Door"))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);

							VEHICLE::SET_VEHICLE_DOOR_OPEN(playerVeh, Menu::Settings::selectedDoor.r, 0, 0);
						}
						if (Menu::Option("Close Door"))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(playerVeh, Menu::Settings::selectedDoor.r, 0);
						}
					}
					break;
					case multipliers:
					{
						Menu::Title("Multipliers");
						if (Menu::Int("Power Multiplier", Menu::Settings::powervalue.r, 1, 255))
						{
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::powervalue.r = NumberKeyboard();
							}
						}
						Menu::Toggle("Power", LoopFeatures::PowerMultiplier);
						if (Menu::Int("Torque Multiplier", Menu::Settings::torquevalue.r, 1, 255))
						{
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::torquevalue.r = NumberKeyboard();
							}
						}
						Menu::Toggle("Torque", LoopFeatures::TorqueMultiplier);
						if (Menu::Int("Friction Multiplier", Menu::Settings::frictionvalue.r, 1, 255))
						{
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::frictionvalue.r = NumberKeyboard();
							}
						}
						Menu::Toggle("Friction", LoopFeatures::FrictionMultiplier);
						if (Menu::Int("Acceleration Multiplier", Menu::Settings::accelerationvalue.r, 1, 255))
						{
							Memory::set_value<float>({ OFFSET_PLAYER_VEHICLE , OFFSET_VEHICLE_HANDLING , OFFSET_VEHICLE_HANDLING_ACCELERATION }, Menu::Settings::accelerationvalue.r);
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::accelerationvalue.r = NumberKeyboard();
								Memory::set_value<float>({ OFFSET_PLAYER_VEHICLE , OFFSET_VEHICLE_HANDLING , OFFSET_VEHICLE_HANDLING_ACCELERATION }, Menu::Settings::accelerationvalue.r);
							}
						}
						if (Menu::Int("Suspention Multiplier", Menu::Settings::suspentionvalue.r, 1, 255))
						{
							Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_PLAYER_VEHICLE , OFFSET_VEHICLE_HANDLING_SUSPENSION_FORCE }, Menu::Settings::suspentionvalue.r);
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								Menu::Settings::suspentionvalue.r = NumberKeyboard();
								Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_PLAYER_VEHICLE , OFFSET_VEHICLE_HANDLING_SUSPENSION_FORCE }, Menu::Settings::suspentionvalue.r);
							}
						}
					}
					break;
					case mobilelsc:
					{
						Menu::Title("LSC");
						if (Menu::Int("Armor", armor, -1, 4))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 16, armor, 0);
						}
						if (Menu::Int("Engine", engine, -1, 3))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 11, engine, 0);
						}
						if (Menu::Int("Brakes", brakes, -1, 2))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 12, brakes, 0);
						}
						if (Menu::Int("Exhaust", exhaust, -1, 4))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 4, exhaust, 0);
						}
						if (Menu::Int("Plate", plate, -1, 3))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 62, plate, 0);
						}
						if (Menu::Int("Grille", grille, -1, 0))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 6, grille, 0);
						}
						if (Menu::Int("Hood", hood, -1, 0))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 7, hood, 0);
						}
						if (Menu::Int("Roof", roof, -1, 0))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 10, roof, 0);
						}
						if (Menu::Int("Skirt", skirt, -1, 0))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 3, skirt, 0);
						}
						if (Menu::Int("Turbo", turbo, -1, 0))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 18, turbo, 0);
						}
						if (Menu::Int("Window Tint", windowtint, -1, 2))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_KIT(playerVeh, 0);
							VEHICLE::SET_VEHICLE_MOD(playerVeh, 46, windowtint, 0);
						}
					}
					break;
					case colors:
					{
						Menu::Title("Colors");
						if (Menu::Int("Primary Color", pcolor, 1, 74))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_COLOR_1(playerVeh, 1, pcolor, 0);
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								pcolor = NumberKeyboard();
								VEHICLE::SET_VEHICLE_MOD_COLOR_1(playerVeh, 1, pcolor, 1);
							}
						}
						if (Menu::Int("Secondary Color", scolor, 1, 74))
						{
							Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
							VEHICLE::SET_VEHICLE_MOD_COLOR_2(playerVeh, 1, scolor);
							if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
								scolor = NumberKeyboard();
								VEHICLE::SET_VEHICLE_MOD_COLOR_2(playerVeh, 1, scolor);
							}
						}
					}
					break;
#pragma endregion Protections
		case protections:
		{
			Menu::Title("protections");
			Menu::Toggle("Event Shield", LoopFeatures::EventShield);
			Menu::Toggle("Kick To Story Mode Protection", LoopFeatures::isKickToSPProtex);
			Menu::Toggle("Kick to Freemode Protection", LoopFeatures::isKickToFMProtex);
			Menu::Toggle("Freeze Protection", LoopFeatures::FreezeP);
			Menu::Toggle("Objects Protection", LoopFeatures::AttachP);
			Menu::Toggle("Exsplode Protection", LoopFeatures::ExsplodeP);
		}
		break;
#pragma endregion

#pragma endregion Playerlist
		case plist:
		{
			Menu::Title("Player List");
			for (int i = 0; i < 32; ++i)
			{
				for (int i = 0; i < 32; ++i)
				{
					DWORD model = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
					Player isFriend = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
					bool is_friend;
					bool handle_valid = isPlayerFriend(i, is_friend);
					BYTE God = PLAYER::GET_PLAYER_INVINCIBLE(selectedPlayer);
					
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)))
					{
						char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
						char Buffer[255];
						if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("Freemode", -1, 0) == i)
						{
							char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
							char Buffer[255];
							sprintf(Buffer, "%s ~s~[~y~Host~s~]", PlayerName);
							PlayerName = Buffer;
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
						else if (isFriend == PLAYER::PLAYER_PED_ID())
						{
							char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
							char Buffer[255];
							sprintf(Buffer, "%s ~s~[~g~Me]", PlayerName);
							PlayerName = Buffer;
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
						else if (handle_valid && is_friend)
						{
							char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
							char Buffer[255];
							sprintf(Buffer, "%s ~s~[~b~Friend]", PlayerName);
							PlayerName = Buffer;
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
						else if (NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)))
						{
							char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
							char Buffer[255];
							sprintf(Buffer, "%s ~s~[~r~Rockstar]", PlayerName);
							PlayerName = Buffer;
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
						else if (God = 1)
						{
							char* PlayerName = PLAYER::GET_PLAYER_NAME(i);
							char Buffer[255];
							sprintf(Buffer, "%s ~s~[~r~Modder]", PlayerName);
							PlayerName = Buffer;
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
						else
						{
							Menu::MenuOption(PlayerName, pmenu) ? selectedPlayer = i : NULL;
						}
					}
				}
				break;
			}
		}
		break;
#pragma endregion
#pragma region All Players
		case allplrs:
		{
			Menu::Title("Session Options");
			if (Menu::Option("Send Lobby Message")) {
				for (int i = 0; i < 32; i++)
				{

					GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "", "", "", "", "", "", 60);
					while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
					int handle[76]; //var num3 = sub_34009(A_0, (A_1) + 264, (A_1) + 272);
					NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), &handle[0], 13);
					NETWORK::NETWORK_SEND_TEXT_MESSAGE(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT(), &handle[0]);
				}

			}
			Menu::MenuOption("Session Grief", lobbytroll);
			Menu::MenuOption("Session ESP", LobbyESP);
			//Menu::MenuOption("Session Moneydrop", Moneylobby);
			Menu::MenuOption("Session Weather", lobbyweather);
			//Menu::MenuOption("Session Time", sessiontime);
			
		}
		break;
#pragma endregion
#pragma region Lobby Weather Changer
		case lobbyweather:
		{
			Menu::Title("Lobby Weather");
			if (Menu::Option("Clear")) {
				Hooking::set_session_weather(2, 2, 76, 0); 
			}
			if (Menu::Option("Fog")) {
				Hooking::set_session_weather(4, 4, 76, 0); 
			}
			if (Menu::Option("Rain")) {
				Hooking::set_session_weather(9, 9, 76, 0); 
			}
			if (Menu::Option("Thunder")) {
				Hooking::set_session_weather(6, 6, 76, 0);
			}
			if (Menu::Option("Blizzard")) {
				Hooking::set_session_weather(12, 12, 76, 0);
			}
			if (Menu::Option("Snow")) {
				Hooking::set_session_weather(13, 13, 76, 0); 
			}
			if (Menu::Option("Halloween")) {
				Hooking::set_session_weather(14, 14, 76, 0); 
			}
		}

		break;
#pragma endregion



#pragma region Money Lobby
		case Moneylobby:
		{
			Menu::Title("Session Money");
			if (Menu::Int("Drop Frequency", LoopFeatures::Dropfreqvalue, 0, 2000))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					LoopFeatures::Dropfreqvalue = NumberKeyboard();
				}
			}
			if (Menu::Int("Drop Value", LoopFeatures::Dropmoneyvalue, 0, 2000))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					LoopFeatures::Dropmoneyvalue = NumberKeyboard();
				}
			}
			Menu::Toggle("Money Drop", LoopFeatures::Moneylobby);
		}
		break;
#pragma endregion
#pragma region All Players ESP
		case LobbyESP:
		{
			Menu::Title("Session ESP");
			Menu::Toggle("ESP Lines", LoopFeatures::ESP);
			Menu::Toggle("ESP Box", LoopFeatures::ESPBox);
			//Menu::Toggle("ESP Name", LoopFeatures::ESPname);
		}
		break;
#pragma endregion
#pragma region All Players Grief
		case lobbytroll:
		{
			Menu::Title("Session Grief");
			if (Menu::Option("Kick All From Car"))
			{
				for (int i = 0; i < 32; i++)
				{
					if (i != PLAYER::PLAYER_ID())
					{
						RequestControlOfEnt(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
					}
				}
			}
			if (Menu::Option("Cage All"))
			{
				Features::CageAll();
				{
					{
						for (int i = 0; i < 32; i++)
						{



							Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
							Hash crashall = GAMEPLAY::GET_HASH_KEY("v_proc2_temp");
							STREAMING::REQUEST_MODEL(crashall);
							while (!STREAMING::HAS_MODEL_LOADED(crashall)) WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
							{
								if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) == PLAYER::PLAYER_PED_ID()) continue;
								{
									Object crashall2 = OBJECT::CREATE_OBJECT(crashall, 0, 0, 0, true, true, false);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(crashall2, playerHandle, PED::GET_PED_BONE_INDEX(playerHandle, SKEL_Spine_Root), 0.0, 0.0, 0.0, 0.0, 90.0, 0, false, false, false, false, 2, true);
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(crashall);

							}
						}
					}
				}
			}
			if (Menu::Option("Explode Session"))
			{
				for (int i = 0; i < 32; ++i) {
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
						Vector3 GetPlayerCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(i), true);
						FIRE::ADD_EXPLOSION(GetPlayerCoords.x, GetPlayerCoords.y, GetPlayerCoords.z, 29, 20, true, false, 10);
						PED::EXPLODE_PED_HEAD(PLAYER::GET_PLAYER_PED(selectedPlayer), 0x145F1012);
					}
				}
			}
			if (Menu::Option("Lag Session (Fucked Up)"))
			{

				for (int i = 0; i < 32; i++)
				{
					Vector3 MyPosition = { -15000, -15000, -50 };
					Features::teleportallcoordsns(MyPosition);
				}
			}
		}
		break;
#pragma endregion
#pragma region Selected Player
		case pmenu:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title(PLAYER::GET_PLAYER_NAME(selectedPlayer));
			Menu::MenuOption("Grief", remoteopt);
			Menu::MenuOption("Helpful", plrped);
			Menu::MenuOption("Vehicle", playersvehicle);
			Menu::MenuOption("ESP", espsp);
			Menu::MenuOption("Objects", plrobj);
			Menu::MenuOption("Script Events", Scripts);
			Menu::MenuOption("Teleport", tpplayer);

			if (Menu::Option("Kick"))
			{
				DWORD64 args[4] = { 3353227751, selectedPlayer, 0, 0 };
				Hooking::trigger_script_event(1, args, 4, 1 << selectedPlayer);
			}
			if (Menu::Option("Host Kick")) {
				NETWORK::NETWORK_SESSION_KICK_PLAYER((selectedPlayer));
			}
			break;
#pragma region Selected Players Vehicle
		case playersvehicle:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Vehicle");
			if (Menu::Option("Kick from Vehicle"))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(selectedPlayer));
				AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED(selectedPlayer));
			}
			if (Menu::Option("Kill Engine"))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(selectedPlayer), 0));
				Player playerPed = PLAYER::GET_PLAYER_PED(selectedPlayer);
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(playerPed, 0);
				{
					RequestControlOfEnt(veh);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veh, -1);
				}

			}
			if (Menu::Option("Pup Tires")) {
				Vehicle selectedlPlayerveh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), false);
				bool isveh = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), false);

				if (isveh)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(selectedlPlayerveh, true);

					for (int i = 5; i--;)
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(selectedlPlayerveh, i, true, 1000.f);
					}
				}
				else
				{

				}
			}
			if (Menu::Option("Boost Vehicle"))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(selectedPlayer), 0))
				{
					Player playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
					Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(playerPed, 0);
					{
						RequestControlOfEnt(veh);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 300.0);
					}
				}
			}
		}
		break;
#pragma endregion
#pragma region ESPS
		case espsp:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("ESP");
			Menu::Toggle("ESP Lines", LoopFeatures::ESPs);
			Menu::Toggle("ESP Box", LoopFeatures::ESPBoxs);
			//Menu::Toggle("ESP Name", LoopFeatures::ESPnames);
		}
		break;
#pragma endregion
#pragma region Scripts for the selected player
		case Scripts:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Script Events");
			if (Menu::Option("Non-host Kick [Story Mode]")) {//done
				DWORD64 args[4] = { 2870072008, selectedPlayer, 0, 0 };
				Hooking::trigger_script_event(1, args, 4, 1 << selectedPlayer);
			}
			if (Menu::Option("CEO Kick with Notification")) { //done
				DWORD64 args[4] = { 3688935101, selectedPlayer, 1, 5 };
				Hooking::trigger_script_event(1, args, 4, 1 << selectedPlayer);
			}
			if (Menu::Option("Infinite Loading Screen")) {
				unsigned int Bit = (1 << selectedPlayer);
				uint64_t infiniteload[9] = { 1365267338, selectedPlayer, 0, -1, 1, 115, 0, 0, 0 };
				Hooking::trigger_script_event(1, infiniteload, 4, Bit);
			}
		}
		break;
#pragma endregion
#pragma region Grief Options
		case remoteopt:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Grief Options");
			Menu::Toggle("Freeze", LoopFeatures::Freeze);
			Menu::Toggle("Airstrike", LoopFeatures::LightningStrike);
			Menu::MenuOption("SWAT", SWAT);
			if (Menu::Option("Cage Player"))
			{
				Features::trapcage(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer));
			}
			if (Menu::Option("Big Cage Player"))
			{
				Features::bigtrapcage(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer));
			}

			if (Menu::Option("Explode Player"))
			{
				Vector3 GetPlayerCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
				FIRE::ADD_EXPLOSION(GetPlayerCoords.x, GetPlayerCoords.y, GetPlayerCoords.z, 29, 20, true, false, 10);
				PED::EXPLODE_PED_HEAD(PLAYER::GET_PLAYER_PED(selectedPlayer), 0x145F1012);
			}
			if (Menu::Option("Ram Player")) {
				float offset;
				Hash vehmodel = GAMEPLAY::GET_HASH_KEY("TAXI");
				STREAMING::REQUEST_MODEL(vehmodel);

				while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
				Vector3 pCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 0.0, -10.0, 0.0);

				if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
				{
					Vector3 dim1, dim2;
					GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

					offset = dim2.y * 1.6;

					Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer));
					float rot = (ENTITY::GET_ENTITY_ROTATION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 0)).z;

					Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), pCoords.z, rot, 1, 1);

					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veh);
					ENTITY::SET_ENTITY_VISIBLE(veh, true, 0);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 700.0);
				}

			}
			if (Menu::Option("Steal Outfit"))
			{

				Ped playerPed = PLAYER::PLAYER_PED_ID();
				Ped theirPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);

				for (int i = 0; i < 12; i++)
				{
					PED::SET_PED_COMPONENT_VARIATION(playerPed, i, PED::GET_PED_DRAWABLE_VARIATION(theirPed, i),
						PED::GET_PED_TEXTURE_VARIATION(theirPed, i),
						PED::GET_PED_PALETTE_VARIATION(theirPed, i));
					for (int i = 0; i < 2; i++)
					{
						WAIT(0);
					}
				}
			}
		  }
		}

		break;
#pragma endregion
#pragma region Helpful Options
		case plrped:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Helpful Options");
		//	Menu::Toggle("Money Drop", LoopFeatures::Loop2K);
		//	Menu::Toggle("Armour Drop", LoopFeatures::ArmourDrop);
		//	Menu::Toggle("Health Drop", LoopFeatures::Health);
			if (Menu::Option("Give Weapons"))
			{
				for (int a = 0; a < (sizeof(Weapons) / 4); a++)
				{
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED(selectedPlayer), Weapons[a], 9999, 0);
				}
			}
			if (Menu::Option("Semi God"))
			{
				Hash oball = GAMEPLAY::GET_HASH_KEY("prop_juicestand");
				STREAMING::REQUEST_MODEL(oball);
				while (!STREAMING::HAS_MODEL_LOADED(oball))
					WAIT(0);
				int orangeball = OBJECT::CREATE_OBJECT(oball, 0, 0, 0, true, 1, 0);
				RequestControlOfEnt(orangeball);
				ENTITY::SET_ENTITY_VISIBLE(orangeball, 0, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(orangeball, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 2, 1);

			}
		}
		break;
#pragma endregion 
#pragma region Objects
		case plrobj:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Attach");
			Menu::MenuOption("Attatch to Player", attatch);
			if (Menu::Option("Rape"))
			{
				Features::doAnimation("rcmpaparazzo_2", "shag_loop_poppy");
				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPedId, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 0, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, true, true, false, true, 2, true);
			}
			if (Menu::Option("Stop Rape"))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPedId);
				ENTITY::DETACH_ENTITY(playerPedId, true, true);
			}
			if (Menu::Option("Attach"))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPedId, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 0, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, true, true, false, true, 2, true);
			}
			if (Menu::Option("Detach")) {
				ENTITY::DETACH_ENTITY(playerPedId, true, true);
			}
		}
		break;
		case attatch:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Attatch Options");
			if (Menu::Option("Plate")) { Features::attachobjects2("p_oil_slick_01"); }
			if (Menu::Option("EMP")) { Features::attachobjects2("hei_prop_heist_emp"); }
			if (Menu::Option("Orange Ball")) { Features::attachobjects2("prop_juicestand"); }
			if (Menu::Option("Weed")) { Features::attachobjects2("prop_weed_01"); }
			if (Menu::Option("Safe")) { Features::attachobjects2("p_v_43_safe_s"); }
			if (Menu::Option("UFO")) { Features::attachobjects2("p_spinning_anus_s"); }
			if (Menu::Option("Toilet")) { Features::attachobjects2("prop_ld_toilet_01"); }
			if (Menu::Option("Christmas Tree")) { Features::attachobjects2("prop_xmas_tree_int"); }
			if (Menu::Option("Windmill")) { Features::attachobjects2("prop_windmill_01"); }
			if (Menu::Option("Radar")) { Features::attachobjects2("prop_air_bigradar"); }
			char* objects[136] = { "prop_bskball_01", "PROP_MP_RAMP_03", "PROP_MP_RAMP_02", "PROP_MP_RAMP_01", "PROP_JETSKI_RAMP_01", "PROP_WATER_RAMP_03", "PROP_VEND_SNAK_01", "PROP_TRI_START_BANNER", "PROP_TRI_FINISH_BANNER", "PROP_TEMP_BLOCK_BLOCKER", "PROP_SLUICEGATEL", "PROP_SKIP_08A", "PROP_SAM_01", "PROP_RUB_CONT_01B", "PROP_ROADCONE01A", "PROP_MP_ARROW_BARRIER_01", "PROP_HOTEL_CLOCK_01", "PROP_LIFEBLURB_02", "PROP_COFFIN_02B", "PROP_MP_NUM_1", "PROP_MP_NUM_2", "PROP_MP_NUM_3", "PROP_MP_NUM_4", "PROP_MP_NUM_5", "PROP_MP_NUM_6", "PROP_MP_NUM_7", "PROP_MP_NUM_8", "PROP_MP_NUM_9", "prop_xmas_tree_int", "prop_bumper_car_01", "prop_beer_neon_01", "prop_space_rifle", "prop_dummy_01", "prop_rub_trolley01a", "prop_wheelchair_01_s", "PROP_CS_KATANA_01", "PROP_CS_DILDO_01", "prop_armchair_01", "prop_bin_04a", "prop_chair_01a", "prop_dog_cage_01", "prop_dummy_plane", "prop_golf_bag_01", "prop_arcade_01", "hei_prop_heist_emp", "prop_alien_egg_01", "prop_air_towbar_01", "hei_prop_heist_tug", "prop_air_luggtrolley", "PROP_CUP_SAUCER_01", "prop_wheelchair_01", "prop_ld_toilet_01", "prop_acc_guitar_01", "prop_bank_vaultdoor", "p_v_43_safe_s", "p_spinning_anus_s", "prop_can_canoe", "prop_air_woodsteps", "Prop_weed_01", "prop_a_trailer_door_01", "prop_apple_box_01", "prop_air_fueltrail1", "prop_barrel_02a", "prop_barrel_float_1", "prop_barrier_wat_03b", "prop_air_fueltrail2", "prop_air_propeller01", "prop_windmill_01", "prop_Ld_ferris_wheel", "p_tram_crash_s", "p_oil_slick_01", "p_ld_stinger_s", "p_ld_soc_ball_01", "prop_juicestand", "p_oil_pjack_01_s", "prop_barbell_01", "prop_barbell_100kg", "p_parachute1_s", "p_cablecar_s", "prop_beach_fire", "prop_lev_des_barge_02", "prop_lev_des_barge_01", "prop_a_base_bars_01", "prop_beach_bars_01", "prop_air_bigradar", "prop_weed_pallet", "prop_artifact_01", "prop_attache_case_01", "prop_large_gold", "prop_roller_car_01", "prop_water_corpse_01", "prop_water_corpse_02", "prop_dummy_01", "prop_atm_01", "hei_prop_carrier_docklight_01", "hei_prop_carrier_liferafts", "hei_prop_carrier_ord_03", "hei_prop_carrier_defense_02", "hei_prop_carrier_defense_01", "hei_prop_carrier_radar_1", "hei_prop_carrier_radar_2", "hei_prop_hei_bust_01", "hei_prop_wall_alarm_on", "hei_prop_wall_light_10a_cr", "prop_afsign_amun", "prop_afsign_vbike", "prop_aircon_l_01", "prop_aircon_l_02", "prop_aircon_l_03", "prop_aircon_l_04", "prop_airhockey_01", "prop_air_bagloader", "prop_air_blastfence_01", "prop_air_blastfence_02", "prop_air_cargo_01a", "prop_air_chock_01", "prop_air_chock_03", "prop_air_gasbogey_01", "prop_air_generator_03", "prop_air_stair_02", "prop_amb_40oz_02", "prop_amb_40oz_03", "prop_amb_beer_bottle", "prop_amb_donut", "prop_amb_handbag_01", "prop_amp_01", "prop_anim_cash_pile_02", "prop_asteroid_01", "prop_arm_wrestle_01", "prop_ballistic_shield", "prop_bank_shutter", "prop_barier_conc_02b", "prop_barier_conc_05a", "prop_barrel_01a", "prop_bar_stool_01", "prop_basejump_target_01" };

			if (Menu::Option("Delete All Objects")) {
				for (int i = 0; i < 5; i++) {
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 1);
					GAMEPLAY::CLEAR_AREA_OF_PEDS(coords.x, coords.y, coords.z, 2, 0);
					GAMEPLAY::CLEAR_AREA_OF_OBJECTS(coords.x, coords.y, coords.z, 2, 0);
					GAMEPLAY::CLEAR_AREA_OF_VEHICLES(coords.x, coords.y, coords.z, 2, 0, 0, 0, 0, 0);
					for (int i = 0; i < 136; i++) {
						Object obj = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(coords.x, coords.y, coords.z, 4.0, GAMEPLAY::GET_HASH_KEY(objects[i]), 0, 0, 1);

						if (ENTITY::DOES_ENTITY_EXIST(obj) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obj, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer))) {
							RequestControlOfEnt(obj);
							int netID = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(obj);
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(netID, 1);
							Features::RequestControlOfid(netID);
							ENTITY::DETACH_ENTITY(obj, 1, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(obj)) {
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obj, 1, 1);
								ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&obj);
								ENTITY::DELETE_ENTITY(&obj);
							}
						}
					}
				}
			}
		}
		break;
#pragma endregion 
#pragma region Teleport to Player
		case tpplayer:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("Teleport to player");
			if (Menu::Option("Teleport to Player"))
			{
				Vector3 PlayerPos = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
				int Handle = playerPedId;
				if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
					Handle = PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0);
				ENTITY::SET_ENTITY_COORDS(Handle, PlayerPos.x, PlayerPos.y, PlayerPos.z + 0, 0, 0, 0, 1);
			}
			if (Menu::Option("Teleport Into Car"))
			{
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), false);
				for (int i = -1; i < 16; i++)
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(veh, i))
					{
						PED::SET_PED_INTO_VEHICLE(playerPedId, veh, i);
					}
				}
			}
		}
		break;
#pragma endregion
#pragma region SWAT
		case SWAT:
		{
			LoopFeatures::LoadPlayerInfo(Hooking::get_player_name(selectedPlayer), selectedPlayer);
			Menu::Title("SWAT");
			int eclone[1000];
			int egcount = 1;

			if (Menu::Option("SWAT w/ Knife")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_KNIFE");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Pistol")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_PISTOL");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Shutgun")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_PUMPSHOTGUN");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Carbine")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_CARBINERIFLE");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Sniper")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_HEAVYSNIPER");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ RPG")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RPG");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Grenade Launcher")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_GRENADELAUNCHER");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
			if (Menu::Option("SWAT w/ Minigun")) {
				Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer);
				if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_MINIGUN");
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				Hash pedm = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
				STREAMING::REQUEST_MODEL(pedm);
				while (!STREAMING::HAS_MODEL_LOADED(pedm))
					WAIT(0);
				eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				egcount++;
			}
		}
		break;
#pragma endregion
#pragma region Weapons Menu
			case weps:
			{
				Menu::Title("Weapon Options");
				if (Menu::Option("Give All Weapons"))
				{
					for (int a = 0; a < (sizeof(Weapons) / 4); a++)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(playerPedId, Weapons[a], 9999, 0);
					}
				}
				if (Menu::Option("Give All MK2 Weapons"))
				{
					for (int aa = 0; aa < (sizeof(MK2Weapons) / 4); aa++)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(playerPedId, MK2Weapons[aa], 9999, 0);
					}
				}
				if (Menu::Option("Remove All Weapons"))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(playerPedId, true);
				}
				Menu::Toggle("Car gun", LoopFeatures::ShootCars);
				Menu::Toggle("Infinite Ammo", LoopFeatures::InfiniteAmmo);
				Menu::Toggle("Explosive Ammo", LoopFeatures::ExplosiveAmmo);
				Menu::Toggle("Aimbot", LoopFeatures::MoneyGun);
				Menu::Toggle("Fire Ammo", LoopFeatures::FireAmmo);
				Menu::Toggle("Delete Gun", LoopFeatures::DeleteGun);
				Menu::Toggle("Rapid Fire", LoopFeatures::RapidFire);
				Menu::Toggle("Airstrike Gun", LoopFeatures::AirstrikeGun);
				Menu::Toggle("Aimbot Gun", LoopFeatures::Aimbot);
				Menu::Toggle("Teleport Gun", LoopFeatures::TPGun);
				Menu::MenuOption("Shoot Vehicles", shootveh);
			}
			break;
#pragma endregion
#pragma region Weapons Menu
			case shootveh:
			{
				Menu::Title("Shoot Vehicles");
				Menu::Toggle("Shoot Lazer", LoopFeatures::ShootCars);
				Menu::Toggle("Shoot Panto", LoopFeatures::ShootCars1);
				Menu::Toggle("Shoot Adder", LoopFeatures::ShootCars2);
				Menu::Toggle("Shoot Blimp", LoopFeatures::ShootCars3);
			}
			break;
#pragma endregion
#pragma region Vehicle Menu
			case vehmenu:
			{
				Menu::Title("Vehicle Options");
				Menu::MenuOption("Spawner", spawnveh);
				Menu::MenuOption("LSC", lsc);
				Menu::MenuOption("Vehicle Acrobatics", vehacro);
				//Menu::Toggle("Vehicle Godmode", LoopFeatures::GodmodeVeh);
				Menu::Toggle("Rainbow Car", LoopFeatures::Rainbowcar);
				Menu::Toggle("Horn Boost", LoopFeatures::HornBoost);
				if (Menu::Int("Horn Power", Menu::Settings::hornpower, 1, 1000))
				{
					if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
						Menu::Settings::hornpower = NumberKeyboard();
					}
				}
				Menu::Toggle("Container Rider", LoopFeatures::CR);
				Menu::Toggle("Drive on Water", LoopFeatures::DriveWater);
				Menu::Toggle("No Bike Fall Off", LoopFeatures::SmoothRainbowcar);
				if (Menu::Option("Max Vehicle"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
					{
						Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
						if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
							Features::set_vehicle_max_upgrades(playerVeh, true, false, 1, "Zapped", true, 100, 0, 100, 1, 2);
					}
				}
				if (Menu::Option("Change Plate"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
					{
						Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
						if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
							Features::change_plate(playerVeh, 1, CharKeyboard());
					}
				}
				if (Menu::Option("Fix Car")) {
					uint Vehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
					VEHICLE::SET_VEHICLE_FIXED(Vehicle);
					VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
				}
				if (Menu::Option("Flip Vehicle"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
					{
						Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
						if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playerVeh);
					}
				}
				if (Menu::Option("Delete Vehicle"))
				{
					Ped playerPed = playerPedId;
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
					{
						int Vehicle = PED::GET_VEHICLE_PED_IS_USING(playerPed);
						if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Vehicle))
							while (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Vehicle));

						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Vehicle, 1, 1);
						VEHICLE::DELETE_VEHICLE(&Vehicle);
					}
					bool DeleteVehicle = false;
				}
			}
			break;
#pragma endregion
#pragma region Vehicle Menu
			case vehacro:
			{
				Menu::Title("Vehicle Acrobaticks");
				if (Menu::Option("Front Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6.0f, 0, -2.0f, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Double Front Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 12.0f, 0, -4.0f, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Side Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6.0f, 5.0f, 2.0f, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Back Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 6.0f, 0, 2.0f, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Double Back Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 12.0f, 0, 4.0f, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Kick Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 5.0f, 2.0f, 0, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Heel Flip")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 5.0f, -2.0f, 0, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Bunny Hop")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 7.0f, 0, 0, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Launch Up")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 40.0f, 0, 0, 0, true, true, true, true, false, true);
				}
				if (Menu::Option("Crush Vehicle")) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, -40.0f, 0, 0, 0, true, true, true, true, false, true);
				}
			}
			break;
#pragma endregion

#pragma region Spawn Vehicles/settins 
			case spawnveh:
			{
				Menu::Title("Vehicle Spawner");
				Menu::Break("Spawn Options");
				Menu::Toggle("Spawn in Car", LoopFeatures::SpawnInVehicle);
				Menu::Toggle("Spawn Maxed", LoopFeatures::SpawnMaxedVehicle);
				//Menu::Toggle("Godmode", LoopFeatures::SpawnGodVehicle);
				if (Menu::Option("~g~Input Model"))
				{
					Features::spawn_vehicle(CharKeyboard());
				}
				if (Menu::Option("~r~Delete Vehicle"))
				{
					Ped playerPed = playerPedId;
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
					{
						int Vehicle = PED::GET_VEHICLE_PED_IS_USING(playerPed);
						if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Vehicle))
							while (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Vehicle));

						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Vehicle, 1, 1);
						VEHICLE::DELETE_VEHICLE(&Vehicle);
					}
					bool DeleteVehicle = false;
				}
				Menu::MenuOption("DLC", dlc);
				Menu::MenuOption("Super", super);
				Menu::MenuOption("Sports", sport);
				Menu::MenuOption("Sport Classic", sportclassic);
				Menu::MenuOption("Offroad", offroad);
				Menu::MenuOption("Sedans", sedans);
				Menu::MenuOption("Coupes", coupes);
				Menu::MenuOption("Muscle", muscle);
				Menu::MenuOption("Utility", utility);
				Menu::MenuOption("Vans", vans);
				Menu::MenuOption("Emergency", emergency);
				Menu::MenuOption("SUV", suv);
				Menu::MenuOption("Compacts", compacts);
				Menu::MenuOption("Helicopters", helicopters);
				Menu::MenuOption("Planes", planes);
				Menu::MenuOption("Motorcycles", motorcycles);
				Menu::MenuOption("Boats", boats);
				Menu::MenuOption("Arena War", arenawar);
				Menu::MenuOption("Commercial", commercial);
				Menu::MenuOption("Cycles", cycles);
				Menu::MenuOption("Emergency", emergency);
				Menu::MenuOption("Industrial", industrial);
				Menu::MenuOption("Military", military);
				Menu::MenuOption("Service", service);
				Menu::MenuOption("Trailer", trailer);
				Menu::MenuOption("Trains", trains);
				break;
			case dlc:
				Menu::Title("DLC");
				for (int i = 0; i < ARRAYSIZE(DLC); i++)
				{
					if (Menu::Option(DLC[i])) { Features::spawn_vehicle(DLC[i]); }
				}
				break;
			case arenawar:
				Menu::Title("ArenaWar");
				for (int i = 0; i < ARRAYSIZE(ArenaWar); i++)
				{
					if (Menu::Option(ArenaWar[i])) { Features::spawn_vehicle(ArenaWar[i]); }
				}
				break;
			case super:
				Menu::Title("Super");
				for (int i = 0; i < ARRAYSIZE(Super1); i++)
				{
					if (Menu::Option(Super1[i])) { Features::spawn_vehicle(Super1[i]); }
				}
				break;
			case sport:
				Menu::Title("Sports");
				for (int i = 0; i < ARRAYSIZE(Sports1); i++)
				{
					if (Menu::Option(Sports1[i])) { Features::spawn_vehicle(Sports1[i]); }
				}
				break;
			case sportclassic:
				Menu::Title("Sports Classic");
				for (int i = 0; i < ARRAYSIZE(SportsClassics1); i++)
				{
					if (Menu::Option(SportsClassics1[i])) { Features::spawn_vehicle(SportsClassics1[i]); }
				}
				break;
			case offroad:
				Menu::Title("Offroad");
				for (int i = 0; i < ARRAYSIZE(OffRoad1); i++)
				{
					if (Menu::Option(OffRoad1[i])) { Features::spawn_vehicle(OffRoad1[i]); }
				}
				break;
			case sedans:
				Menu::Title("Sedans");
				for (int i = 0; i < ARRAYSIZE(Sedans1); i++)
				{
					if (Menu::Option(Sedans1[i])) { Features::spawn_vehicle(Sedans1[i]); }
				}
				break;
			case coupes:
				Menu::Title("Coupes");
				for (int i = 0; i < ARRAYSIZE(Coupes1); i++)
				{
					if (Menu::Option(Coupes1[i])) { Features::spawn_vehicle(Coupes1[i]); }
				}
				break;
			case muscle:
				Menu::Title("Muscle");
				for (int i = 0; i < ARRAYSIZE(Muscle1); i++)
				{
					if (Menu::Option(Muscle1[i])) { Features::spawn_vehicle(Muscle1[i]); }
				}
				break;
			case boats:
				Menu::Title("Boats");
				for (int i = 0; i < ARRAYSIZE(Boats1); i++)
				{
					if (Menu::Option(Boats1[i])) { Features::spawn_vehicle(Boats1[i]); }
				}
				break;
			case commercial:
				Menu::Title("Commercial");
				for (int i = 0; i < ARRAYSIZE(Commercial1); i++)
				{
					if (Menu::Option(Commercial1[i])) { Features::spawn_vehicle(Commercial1[i]); }
				}
				break;
			case compacts:
				Menu::Title("Compacts");
				for (int i = 0; i < ARRAYSIZE(Compacts1); i++)
				{
					if (Menu::Option(Compacts1[i])) { Features::spawn_vehicle(Compacts1[i]); }
				}
				break;
			case cycles:
				Menu::Title("Cycles");
				for (int i = 0; i < ARRAYSIZE(Cycles1); i++)
				{
					if (Menu::Option(Cycles1[i])) { Features::spawn_vehicle(Cycles1[i]); }
				}
				break;
			case emergency:
				Menu::Title("Emergency");
				for (int i = 0; i < ARRAYSIZE(Emergency1); i++)
				{
					if (Menu::Option(Emergency1[i])) { Features::spawn_vehicle(Emergency1[i]); }
				}
				break;
			case helicopters:
				Menu::Title("Helicopters");
				for (int i = 0; i < ARRAYSIZE(Helicopters1); i++)
				{
					if (Menu::Option(Helicopters1[i])) { Features::spawn_vehicle(Helicopters1[i]); }
				}
				break;
			case industrial:
				Menu::Title("Industrial");
				for (int i = 0; i < ARRAYSIZE(Industrial1); i++)
				{
					if (Menu::Option(Industrial1[i])) { Features::spawn_vehicle(Industrial1[i]); }
				}
				break;
			case military:
				Menu::Title("Military");
				for (int i = 0; i < ARRAYSIZE(Military1); i++)
				{
					if (Menu::Option(Military1[i])) { Features::spawn_vehicle(Military1[i]); }
				}
				break;
			case motorcycles:
				Menu::Title("Motorcycles");
				for (int i = 0; i < ARRAYSIZE(Motorcycles1); i++)
				{
					if (Menu::Option(Motorcycles1[i])) { Features::spawn_vehicle(Motorcycles1[i]); }
				}
				break;
			case planes:
				Menu::Title("Planes");
				for (int i = 0; i < ARRAYSIZE(Planes1); i++)
				{
					if (Menu::Option(Planes1[i])) { Features::spawn_vehicle(Planes1[i]); }
				}
				break;
			case service:
				Menu::Title("Service");
				for (int i = 0; i < ARRAYSIZE(Service1); i++)
				{
					if (Menu::Option(Service1[i])) { Features::spawn_vehicle(Service1[i]); }
				}
				break;
			case suv:
				Menu::Title("SUV");
				for (int i = 0; i < ARRAYSIZE(SUVs1); i++)
				{
					if (Menu::Option(SUVs1[i])) { Features::spawn_vehicle(SUVs1[i]); }
				}
				break;
			case trailer:
				Menu::Title("Trailer");
				for (int i = 0; i < ARRAYSIZE(Trailer1); i++)
				{
					if (Menu::Option(Trailer1[i])) { Features::spawn_vehicle(Trailer1[i]); }
				}
				break;
			case trains:
				Menu::Title("Trains");
				for (int i = 0; i < ARRAYSIZE(Trains1); i++)
				{
					if (Menu::Option(Trains1[i])) { Features::spawn_vehicle(Trains1[i]); }
				}
				break;
			case utility:
				Menu::Title("Utility");
				for (int i = 0; i < ARRAYSIZE(Utility1); i++)
				{
					if (Menu::Option(Utility1[i])) { Features::spawn_vehicle(Utility1[i]); }
				}
				break;
			case vans:
				Menu::Title("Vans");
				for (int i = 0; i < ARRAYSIZE(Vans1); i++)
				{
					if (Menu::Option(Vans1[i])) { Features::spawn_vehicle(Vans1[i]); }
				}
			}
			break;
#pragma endregion
#pragma endregion Kill
			case exitgta:
			{
				Menu::Title("Exit GTA V");
				if (Menu::Option("Yes")) exit(0);
			}
			break;
#pragma endregion
#pragma region Animations
		case Animations:
		{
			Menu::Title("Animations");
			if (Menu::Option("Reset")) AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPedId);
			if (Menu::Option("Pole Dance")) { Features::doAnimation("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			if (Menu::Option("Push Ups")) { Features::doAnimation("amb@world_human_push_ups@male@base", "base"); }
			if (Menu::Option("Sit Ups")) { Features::doAnimation("amb@world_human_sit_ups@male@base", "base"); }
			if (Menu::Option("Meditation")) { Features::doAnimation("rcmcollect_paperleadinout@", "meditiate_idle"); }
			if (Menu::Option("On Fire")) { Features::doAnimation("random@arrests", "kneeling_arrest_idle"); }
			if (Menu::Option("Celebrate")) { Features::doAnimation("rcmfanatic1celebrate", "celebrate"); }
			if (Menu::Option("Electrocution")) { Features::doAnimation("ragdoll@human", "electrocute"); }
			if (Menu::Option("Suicide")) { Features::doAnimation("mp_suicide", "pistol"); }
			if (Menu::Option("Showering")) { Features::doAnimation("mp_safehouseshower@male@", "male_shower_idle_b"); }
			if (Menu::Option("Sex Receiver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_poppy"); }
			if (Menu::Option("Sex Giver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_a"); }
			if (Menu::Option("Stripper Dance")) { Features::doAnimation("mini@strip_club@private_dance@part1", "priv_dance_p1"); }
		}
		break;
#pragma region Scenarious
		case senas:
		{
			Menu::Title("Scenarios");
			if (Menu::Option("Reset")) AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPedId);
			if (Menu::Option("Paparizzi")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_PAPARAZZI", 0, true);
			if (Menu::Option("Drug Dealer")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_DRUG_DEALER_HARD", 0, true);
			if (Menu::Option("Drinking Coffee")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_AA_COFFEE", 0, true);
			if (Menu::Option("Playing Instruments")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_MUSICIAN", 0, true);
			if (Menu::Option("Flexing")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_MUSCLE_FLEX", 0, true);
			if (Menu::Option("Jogging")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_JOG_STANDING", 0, true);
			if (Menu::Option("Binoculars")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_BINOCULARS", 0, true);
			if (Menu::Option("Clipboard")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_CLIPBOARD", 0, true);
			if (Menu::Option("Bench Press")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "PROP_HUMAN_SEAT_MUSCLE_BENCH_PRESS", 0, true);
			if (Menu::Option("Chin Ups")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "PROP_HUMAN_MUSCLE_CHIN_UPS", 0, true);
			if (Menu::Option("BBQ")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "PROP_HUMAN_BBQ", 0, true);
			if (Menu::Option("Superhero")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_SUPERHERO", 0, true);
			if (Menu::Option("Fishing")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_STAND_FISHING", 0, true);
			if (Menu::Option("Security")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 0, true);
			if (Menu::Option("Leaf Blower")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 0, true);
			if (Menu::Option("Film Shocking")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, true);
			if (Menu::Option("Idle Cop")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_COP_IDLES", 0, true);
			if (Menu::Option("Drinking")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_DRINKING", 0, true);
			if (Menu::Option("Golf Player")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_GOLF_PLAYER", 0, true);
			if (Menu::Option("Welding")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_WELDING", 0, true);
			if (Menu::Option("Smoking Pot")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_SMOKING_POT", 0, true);
			if (Menu::Option("Hammering")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_HAMMERING", 0, true);
			if (Menu::Option("Tennis")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_TENNIS_PLAYER", 0, true);
			if (Menu::Option("Drilling")) AI::TASK_START_SCENARIO_IN_PLACE(playerPedId, "WORLD_HUMAN_CONST_DRILL", 0, true);
		}
		break;
#pragma region Visions Menu
		case Vision:
		{
			Menu::Title("Visions");

			if (Menu::Option("Clear Vision"))
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}

			if (Menu::Option("Canyon Mission"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("canyon_mission");
			}
			if (Menu::Option("Chop"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CHOP");
			}
			if (Menu::Option("Cinema"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("cinema");
			}
			if (Menu::Option("Cinema 2"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("cinema_001");
			}
			if (Menu::Option("Cops"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("cops");
			}
			if (Menu::Option("Damage"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("damage");
			}
			if (Menu::Option("Death"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_death_grade");
			}
			if (Menu::Option("Drugs 1"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_drive_blend01");
			}
			if (Menu::Option("Drugs 2"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_drive_blend02");
			}
			if (Menu::Option("Drugs 3"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_flying_01");
			}
			if (Menu::Option("Prologue"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("prologue");
			}
			if (Menu::Option("Prologue Reflection"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("prologue_reflection_opt");
			}
			if (Menu::Option("Prolouge Shootout"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("prologue_shootout");
			}
			if (Menu::Option("Prolouge Shootout 2"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Prologue_shootout_opt");
			}
			if (Menu::Option("Pulse"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("pulse");
			}
			if (Menu::Option("Bank HLWD"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Bank_HLWD");
			}
			if (Menu::Option("Barry Stoned"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Barry1_Stoned");
			}
			if (Menu::Option("Barry Fade Out"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("BarryFadeOut");
			}
			if (Menu::Option("Bloom Light"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("BloomLight");
			}
			if (Menu::Option("Building Top"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("buildingTOP");
			}
			if (Menu::Option("Bullet Time Dark"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("BulletTimeDark");
			}
			if (Menu::Option("Building Time Light"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("BulletTimeLight");
			}
			if (Menu::Option("Camera BW"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_BW");
			}
			if (Menu::Option("Camera Security"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
			}
			if (Menu::Option("Camera Secuirty Buzz"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
			}
			if (Menu::Option("Race Turbo Dark"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("RaceTurboDark");
			}
			if (Menu::Option("Race Turbo Flash"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("RaceTurboFlash");
			}
			if (Menu::Option("Race Turbo Light"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("RaceTurboLight");
			}
			if (Menu::Option("Ranch"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("ranch");
			}
			if (Menu::Option("Red Mist"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("REDMIST");
			}
			if (Menu::Option("Red Mist Blend"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("REDMIST_blend");
			}
			if (Menu::Option("UFO"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("ufo");
			}
			if (Menu::Option("UFO Deathray"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("ufo_deathray");
			}
			if (Menu::Option("Under Water"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("underwater");
			}
			if (Menu::Option("Silverlake Water"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("WATER_silverlake");
			}
			if (Menu::Option("Night Lighting"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("whitenightlighting");
			}
			if (Menu::Option("White Out"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("WhiteOut");
			}
			if (Menu::Option("Tunnel"))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Tunnel");
			}
		}
		break;
#pragma endregion
#pragma region Walkstyles
		case Walkstyles:
		{
			Menu::Title("Walkstyles");
			if (Menu::Option("Default Male")) Features::Male;
			if (Menu::Option(" Deafault Female")) Features::Female;
			if (Menu::Option("Drunk ")) Features::Drunk;
			if (Menu::Option("Over Weight ")) Features::Fatass;
			if (Menu::Option("Business")) Features::Business;
			if (Menu::Option("Hiker ")) Features::Hiker;
			if (Menu::Option("Running ")) Features::Running;
			if (Menu::Option("Limp ")) Features::Limp;
		}
		break;
		case modelchanger:
		{
			Menu::Title("Models");
			Menu::MenuOption("Animals", animals);
			Menu::MenuOption("Favorite", Fav);
			Menu::MenuOption("Cool People", Cool);
			Menu::MenuOption("Regulars", normal);
		}
		break;
		case animals:
		{
			Menu::Title("Animals");
			for (int i = 0; i < ARRAYSIZE(Animals); i++)
			{
				if (Menu::Option(Animals[i]))
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY(Animals[i]);
					STREAMING::REQUEST_MODEL(model);
					while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(playerPedId);
					WAIT(10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
					WAIT(10);
				}
			}
		}
		break;
		case Fav:
		{
			Menu::Title("Favorite");
			for (int i = 0; i < ARRAYSIZE(Favorites); i++)
			{
				if (Menu::Option(Favorites[i]))
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY(Favorites[i]);
					STREAMING::REQUEST_MODEL(model);
					while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(playerPedId);
					WAIT(10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
					WAIT(10);
				}
			}

		}
		break;
		case Cool:
		{
			Menu::Title("Cool People");
			for (int i = 0; i < ARRAYSIZE(Coolpeople); i++)
			{
				if (Menu::Option(Coolpeople[i]))
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY(Coolpeople[i]);
					STREAMING::REQUEST_MODEL(model);
					while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(playerPedId);
					WAIT(10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
					WAIT(10);
				}
			}
		}
		break;
		case normal:
		{
			Menu::Title("Regulars");
			for (int i = 0; i < ARRAYSIZE(Regular); i++)
			{
				if (Menu::Option(Regular[i]))
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY(Regular[i]);
					STREAMING::REQUEST_MODEL(model);
					while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(playerPedId);
					WAIT(10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
					WAIT(10);
				}
			}
		}
		break;
#pragma endregion
#pragma region Hot Keys
		case hotkeys:
		{
			Menu::Title("Hot Keys");
			Menu::Toggle("Repair Vehicle (F4)", LoopFeatures::F4);
			Menu::Toggle("Godmode (F5)", LoopFeatures::F5);
			Menu::Toggle("Teleport to Waypoint (F7)", LoopFeatures::F7);
			Menu::Toggle("Noclip (F3)", LoopFeatures::KeyNote);
		}
		break;
#pragma endregion 
#pragma region Weather
		case weathermenu:
		{
			Menu::Title("Weather Options");
			Menu::Toggle("Snow", globalHandle(0x40001 + 0x1271).As<bool>());
			if (Menu::Option("Sunny")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clear"); }
			if (Menu::Option("Rain")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clearing"); }
			if (Menu::Option("Christmas")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Snowlight"); }
			if (Menu::Option("Thunder")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Thunder"); }
			if (Menu::Option("Blizzard")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Blizzard"); }
			if (Menu::Option("Overcast")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Overcast"); }
			if (Menu::Option("Foggy")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Foggy"); }
			if (Menu::Option("Smog")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Smog"); }
			if (Menu::Option("Clouds")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clouds"); }
			//if (Menu::Option("Lightning")) { GAMEPLAY::FORCE_LIGHTNING_FLASH; }

		}
		break;
		case watermenu:
		{
			Menu::Title("Water Options");
			Menu::Int("Water Intensity", intensity, 1, 100);
			if (Menu::Option("Set Intensity")) { WATER::_SET_CURRENT_INTENSITY(intensity); }
		}
		break;
#pragma endregion
#pragma region Misc
#pragma region Misc Menu
		case miscmenu:
		{
			Menu::Title("Miscellaneous Options");
			Menu::MenuOption("World", worldmenu);
			//Menu::Toggle("Rainbow Vehicles", LoopFeatures::RainbowPedCars);
			Menu::Toggle("Rainbow Vehicles", LoopFeatures::ExplodeNearbyVehicles);
			Menu::Toggle("Fly Cars", LoopFeatures::FlyPedCars);
			Menu::Toggle("Explode Cars", LoopFeatures::ExVeh);
			Menu::Toggle("Delete Cars", LoopFeatures::DeleteVeh);
			Menu::Toggle("Horn Cars", LoopFeatures::HornVeh);
			Menu::Toggle("Fix Cars", LoopFeatures::FixVeh);
			Menu::Toggle("Burst Tires on Cars", LoopFeatures::BurstVeh);
			if (Menu::Option("Create Random Ped"))
			{
				Vector3 pos = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPedId, 0.0, 3.0, 0.0);
				PED::CREATE_RANDOM_PED(pos.x, pos.y, pos.z);
			}
			if (Menu::Option("Kill nearby Peds"))
			{
				Features::killNearbyPeds();
			}
			Menu::Toggle("Disable Phone", LoopFeatures::NoPhone);
			if (Menu::Option("Solo Session"))
			{
				Sleep(10000);
				WAIT(250);
			}
		}
		break;
		case tunables:
		{
			Menu::Title("Tunables");
			/*Menu::Toggle("Rockstars RP Bonus", globalHandle(0x40001 + 0x1284).As<bool>());
			Menu::Toggle("XMAS Content", globalHandle(0x40001 + 0x127C).As<bool>());
			Menu::Toggle("Valentine 2016 Clothing", globalHandle(0x40001 + 0x2FD9).As<bool>());
			Menu::Toggle("Valentine 2016 Vehicle", globalHandle(0x40001 + 0x2FDA).As<bool>());
			Menu::Toggle("Valentine Weapon", globalHandle(0x40001 + 0x2A90).As<bool>());
			Menu::Toggle("Valentine Vehicle", globalHandle(0x40001 + 0x2A91).As<bool>());
			Menu::Toggle("Valentine Masks", globalHandle(0x40001 + 0x2A92).As<bool>());
			Menu::Toggle("Valentine Hair", globalHandle(0x40001 + 0x2A93).As<bool>());
			Menu::Toggle("Valentine Clothing", globalHandle(0x40001 + 0x2A94).As<bool>());
			Menu::Toggle("Be My Valentine", globalHandle(0x40001 + 0x300D).As<bool>());
			Menu::Toggle("Valentine Event", globalHandle(0x40001 + 0x1766).As<bool>());
			Menu::Toggle("Halloween Sounds", globalHandle(0x40001 + 0x2D2F).As<bool>());
			Menu::Toggle("Halloween Anims", globalHandle(0x40001 + 0x2AAD).As<bool>());
			Menu::Toggle("Halloween Weapons", globalHandle(0x40001 + 0x2AA6).As<bool>());*/
		}
		break;
#pragma endregion 
#pragma region Time
		case timemenu:
		{
			Menu::Title("Time Options");
			Menu::Toggle("Freeze Time", LoopFeatures::FreezeTime);
			Menu::Int("Choose Time", timeer, 0, 24);
			if (Menu::Option("Set Time")) { NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(timeer, 0, 0); }
			if (Menu::Option("Reset Time"))
			{
				TIME::SET_CLOCK_TIME(TIME::GET_CLOCK_HOURS(), TIME::GET_CLOCK_MINUTES(), TIME::GET_CLOCK_SECONDS());
			}
		}
		break;
#pragma endregion
#pragma endregion
		case worldmenu:
		{
			Menu::Title("World");
			Menu::MenuOption("Time", timemenu);
			Menu::MenuOption("Weather", weathermenu);
			if (Menu::Option("Disable Gravity")) {
				GAMEPLAY::SET_GRAVITY_LEVEL(3);
			}
			if (Menu::Option("Enable Moon Graivty")) {
				GAMEPLAY::SET_GRAVITY_LEVEL(2);
			}
			if (Menu::Option("Enable Gravity")) {
				GAMEPLAY::SET_GRAVITY_LEVEL(1);
			}
			//Menu::MenuOption("Tunables", tunables);
			break;
		}
#pragma endregion
#pragma region lsc Menu
		case lsc:
		{
			Menu::Title("LSC");
			Menu::MenuOption("Colors", colors);
			Menu::MenuOption("Doors", doorsmenu);
			Menu::MenuOption("Multipliers ", multipliers);


		}
		break;
#pragma endregion 
#pragma region Teleport Menu
		case tpmenu:
		{
			Menu::Title("Teleport Options");
			if (Menu::Option("Teleport 2 M infront")) {
				Vector3 Coords;
				Coords.x = SelfLocation.x - 2.5f; Coords.y = SelfLocation.y; Coords.z = SelfLocation.z;
				TPto(Coords);
			}
			Menu::MenuOption("IPLs", ipl);
			Menu::MenuOption("Common", common);
			if (Menu::Option("Waypoint"))
			{
				int WaypointHandle = UI::GET_FIRST_BLIP_INFO_ID(8);
				if (UI::DOES_BLIP_EXIST(WaypointHandle))
				{
					Vector3 WaypointPos = UI::GET_BLIP_COORDS(WaypointHandle);
					int Handle = playerPedId;
					if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
						Handle = PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0);
					ENTITY::SET_ENTITY_COORDS(Handle, WaypointPos.x, WaypointPos.y, WaypointPos.z + 35.0f, 0, 0, 0, 1);
				}
			}
		}
		break;
		case ipl:
		{
			Menu::Title("IPLs");
			if (Menu::Option("North Yankton")) {
				STREAMING::REQUEST_IPL("prologue01");
				STREAMING::REQUEST_IPL("Prologue01c");
				STREAMING::REQUEST_IPL("Prologue01d");
				STREAMING::REQUEST_IPL("Prologue01e");
				STREAMING::REQUEST_IPL("Prologue01f");
				STREAMING::REQUEST_IPL("Prologue01g");
				STREAMING::REQUEST_IPL("prologue01h");
				STREAMING::REQUEST_IPL("prologue01i");
				STREAMING::REQUEST_IPL("prologue01j");
				STREAMING::REQUEST_IPL("prologue01k");
				STREAMING::REQUEST_IPL("prologue01z");
				STREAMING::REQUEST_IPL("prologue02");
				STREAMING::REQUEST_IPL("prologue03");
				STREAMING::REQUEST_IPL("prologue03b");
				STREAMING::REQUEST_IPL("prologue03_grv_cov");
				STREAMING::REQUEST_IPL("prologue03_grv_dug");
				STREAMING::REQUEST_IPL("prologue03_grv_fun");
				STREAMING::REQUEST_IPL("prologue04");
				STREAMING::REQUEST_IPL("prologue04b");
				STREAMING::REQUEST_IPL("prologue04_cover");
				STREAMING::REQUEST_IPL("prologue05");
				STREAMING::REQUEST_IPL("prologue05b");
				STREAMING::REQUEST_IPL("prologue06");
				STREAMING::REQUEST_IPL("prologue06b");
				STREAMING::REQUEST_IPL("prologue06_int");
				STREAMING::REQUEST_IPL("prologuerd");
				STREAMING::REQUEST_IPL("prologuerdb");
				STREAMING::REQUEST_IPL("prologue_DistantLights");
				STREAMING::REQUEST_IPL("prologue_grv_torch");
				STREAMING::REQUEST_IPL("prologue_m2_door");
				STREAMING::REQUEST_IPL("prologue_LODLights");
				STREAMING::REQUEST_IPL("DES_ProTree_start");
				Vector3 Coords;
				Coords.x = 3595.39673f; Coords.y = -4893.727f; Coords.z = 115.838394f;
				TPto(Coords);
			}
			if (Menu::Option("Porn Yacht")) {
				STREAMING::REQUEST_IPL("smboat");
				Vector3 Coords;
				Coords.x = -2045.8f; Coords.y = -1031.2f; Coords.z = 11.9f;
				TPto(Coords);
			}
			if (Menu::Option("Aircraft Carrier")) {
				STREAMING::REQUEST_IPL("hei_carrier");
				STREAMING::REQUEST_IPL("hei_carrier_DistantLights");
				STREAMING::REQUEST_IPL("hei_Carrier_int1");
				STREAMING::REQUEST_IPL("hei_Carrier_int2");
				STREAMING::REQUEST_IPL("hei_Carrier_int3");
				STREAMING::REQUEST_IPL("hei_Carrier_int4");
				STREAMING::REQUEST_IPL("hei_Carrier_int5");
				STREAMING::REQUEST_IPL("hei_Carrier_int6");
				STREAMING::REQUEST_IPL("hei_carrier_LODLights");
				Vector3 Coords;
				Coords.x = 3069.330f; Coords.y = -4632.4f; Coords.z = 15.043f;
				TPto(Coords);
			}
			if (Menu::Option("Sunken Cargoship")) {
				STREAMING::REQUEST_IPL("sunkcargoship");
				Vector3 Coords;
				Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 0.0f;
				TPto(Coords);
			}
			if (Menu::Option("Hospital")) {
				STREAMING::REQUEST_IPL("RC12B_HospitalInterior");
				STREAMING::REQUEST_IPL("RC12B_Destroyed");
				Vector3 Coords;
				Coords.x = 356.8f; Coords.y = -590.1f; Coords.z = 43.3f;
				TPto(Coords);
			}
			if (Menu::Option("Oneil Farm")) {
				STREAMING::REMOVE_IPL("farm_burnt");
				STREAMING::REMOVE_IPL("farm_burnt_props");
				STREAMING::REQUEST_IPL("farm");
				STREAMING::REQUEST_IPL("farm_props");
				STREAMING::REQUEST_IPL("farmint");
				STREAMING::REQUEST_IPL("farmint_cap");
				Vector3 Coords;
				Coords.x = 2441.2f; Coords.y = 4968.5f; Coords.z = 51.7f;
				TPto(Coords);
			}
			if (Menu::Option("Life Invader Office")) {
				STREAMING::REQUEST_IPL("facelobby");
				STREAMING::REQUEST_IPL("facelobbyfake");
				Vector3 Coords;
				Coords.x = -1047.9f; Coords.y = -233.0f; Coords.z = 39.0f;
				TPto(Coords);
			}
			if (Menu::Option("Cargoship")) {
				STREAMING::REQUEST_IPL("cargoship");
				Vector3 Coords;
				Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 9.3192f;
				TPto(Coords);
			}
			if (Menu::Option("Jewelry Store")) {
				STREAMING::REQUEST_IPL("jewel2fake");
				STREAMING::REQUEST_IPL("post_hiest_unload");
				STREAMING::REQUEST_IPL("bh1_16_refurb");
				Vector3 Coords;
				Coords.x = -630.4f; Coords.y = -236.7f; Coords.z = 40.0f;
				TPto(Coords);
			}
			if (Menu::Option("Morgue")) {
				STREAMING::REQUEST_IPL("Coroner_Int_on");
				Vector3 Coords;
				Coords.x = 244.9f; Coords.y = -1374.7f; Coords.z = 39.5f;
				TPto(Coords);
			}

		}
		break;
#pragma region Common Teleports
		case common:
		{
			Menu::Title("Common");
			if (Menu::Option("Mount Chiliad")) {
				Vector3 Coords;
				Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				TPto(Coords);
			}
			if (Menu::Option("Maze Bank")) {
				Vector3 Coords;
				Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
				TPto(Coords);
			}
			if (Menu::Option("Military Base")) {
				Vector3 Coords;
				Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
				TPto(Coords);
			}
			if (Menu::Option("Zancudo Tower")) {
				Vector3 Coords;
				Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
				TPto(Coords);
			}
			if (Menu::Option("Mask Shop")) {
				Vector3 Coords;
				Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
				TPto(Coords);
			}
			if (Menu::Option("LSC")) {
				Vector3 Coords;
				Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
				TPto(Coords);
			}
			if (Menu::Option("Ammunation")) {
				Vector3 Coords;
				Coords.x = 247.3652; Coords.y = -45.8777; Coords.z = 69.9411;
				TPto(Coords);
			}
			if (Menu::Option("Airport")) {
				Vector3 Coords;
				Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
				TPto(Coords);
			}
			if (Menu::Option("Clothes Store")) {
				Vector3 Coords;
				Coords.x = -718.91; Coords.y = -158.16; Coords.z = 37.00;
				TPto(Coords);
			}
			if (Menu::Option("Waterfall")) {
				Vector3 Coords;
				Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
				TPto(Coords);
			}
			if (Menu::Option("FIB")) {
				Vector3 Coords;
				Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
				TPto(Coords);
			}
			if (Menu::Option("Human Labs")) {
				Vector3 Coords;
				Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
				TPto(Coords);
			}
			if (Menu::Option("MMI")) {
				Vector3 Coords;
				Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
				TPto(Coords);
			}
			if (Menu::Option("Sandy Shores Airfield")) {
				Vector3 Coords;
				Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
				TPto(Coords);
			}
		}
		break;

#pragma endregion
#pragma region Recovery
		case recovery:
		{

			Menu::Title("Rovery");
			Menu::MenuOption("Stealth", stealthmoney);
			if (Menu::Int("Choose Level", rpvalue, 1, 8000))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					rpvalue = NumberKeyboard();
				}
			}
			if (Menu::Option("Set the Choosen Level"))
			{
				Features::SetRank(rpvalue);
			}
			Menu::Break("Account Unlocks");
			if (Menu::Option("Kills")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MPPLY_KILLS_PLAYERS"), NumberKeyboard(), 1);
			}
			if (Menu::Option("Deaths")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MPPLY_DEATHS_PLAYER"), NumberKeyboard(), 1);
			}
			if (Menu::Option("Unlock Everything")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_12"), -1, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ENEMYDRIVEBYKILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_USJS_FOUND"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), 1000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_KILLS_PLAYERS"), 1000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 21, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_MVP"), 60, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_HOLD_UP_SHOPS"), 20, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), 101, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), 21, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMBBETWIN"), 50000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 51, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), 500, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), 412, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PLAYER_HEADSHOTS"), 623, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 63, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), 13, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), 12, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_WON"), 101, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_LOST"), 36, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_25_KILLS_STICKYBOMBS"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_50_KILLS_GRENADES"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_20_KILLS_MELEE"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TORSO"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_DECL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TORSO"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_DECL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_0"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_12"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_13"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_14"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_15"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_16"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_17"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_18"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_19"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_21"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_22"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_23"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_25"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_26"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_27"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_28"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_29"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_30"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_31"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_32"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_33"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_34"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_35"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_36"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_37"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_38"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_39"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_40"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_13"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
			}

			if (Menu::Option("Clear Badsport")) {
				STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MPPLY_OVERALL_BADSPORT"), 0.0f, TRUE);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_DESTROYED_PVEHICLES"), 0, TRUE);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BADSPORT_MESSAGE"), 0, TRUE);
			}
			if (Menu::Option("Max Stats")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, true);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, true);
			}

			if (Menu::Option("Unlock Tattos")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_12"), -1, 1);
			}
			if (Menu::Option("Unlock All Achievements")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ENEMYDRIVEBYKILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_USJS_FOUND"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), 1000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_KILLS_PLAYERS"), 1000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 21, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_MVP"), 60, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_HOLD_UP_SHOPS"), 20, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), 101, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), 21, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMBBETWIN"), 50000, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 51, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), 500, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), 412, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PLAYER_HEADSHOTS"), 623, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 63, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), 13, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), 12, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), 2, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_WON"), 101, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_LOST"), 36, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_25_KILLS_STICKYBOMBS"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_50_KILLS_GRENADES"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_AWD_20_KILLS_MELEE"), 50, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 0);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);
			}

			if (Menu::Option("Unlock all Clothing")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TORSO"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_DECL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TORSO"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_DECL"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_0"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_12"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_13"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_14"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_15"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_16"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_17"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_18"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_19"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_21"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_22"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_23"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_25"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_26"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_27"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_28"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_29"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_30"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_31"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_32"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_33"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_34"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_35"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_36"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_37"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_38"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_39"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_40"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_2"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_3"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_4"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_5"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_6"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_7"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_8"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_9"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_13"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);

			}
			if (Menu::Option("Clear Badsport Stats")) {
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MPPLY_DESTROYED_PVEHICLES"), 0, TRUE);
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MPPLY_BADSPORT_MESSAGE"), 0, TRUE);
			}
			if (Menu::Option("2B Snacks"))
			{
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_YUM_SNACKS"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_HEALTH_SNACKS"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_EPIC_SNACKS"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_ORANGE_BOUGHT"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_CIGARETTES_BOUGHT"), 2000000000, 1);
			}
			if (Menu::Option("2B Armor"))
			{
				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MP_CHAR_ARMOUR_1_COUNT"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MP_CHAR_ARMOUR_2_COUNT"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MP_CHAR_ARMOUR_3_COUNT"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MP_CHAR_ARMOUR_4_COUNT"), 2000000000, 1);

				Hooking::stat_set_int(GAMEPLAY::GET_HASH_KEY("MP0_MP_CHAR_ARMOUR_5_COUNT"), 2000000000, 1);
			}
		}
		break;
#pragma region Settings
		case settings:
		{
			Menu::Title("Settings");
			if (Menu::Option("MenuX plus")) {
				if (Menu::Settings::menuX < 0.81f) Menu::Settings::menuX += 0.01f;
			}
			if (Menu::Option("MenuX minus")) {
				if (Menu::Settings::menuX > 0.17f) Menu::Settings::menuX -= 0.01f;
			}
			if (Menu::Option("Left Menu")) {
				Menu::Settings::menuX = 0.17f;
			}
			if (Menu::Option("Right Menu")) {
				Menu::Settings::menuX = 0.81f;
			}
			Menu::MenuOption("Themes", themeloader);
			//Menu::Option("~HUD_COLOUR_GOLD~Zap Account:");
			//Menu::Option(Username.c_str());

		}
		break;
		case themeloader:
		{
			Menu::Title("Theme Colors");
			if (Menu::Option("Yellow Theme")) {
				Menu::Settings::optionRect = { 250, 250, 0, 255 };
				Menu::Settings::scroller = { 250, 250, 0, 255 };
			}
			if (Menu::Option("Red Theme")) {
				Menu::Settings::optionRect = { 60, 0, 0, 255 };
				Menu::Settings::scroller = { 100, 0, 0, 255 };
			}
			if (Menu::Option("Blue Theme")) {
				Menu::Settings::optionRect = { 0, 0, 160, 255 };
				Menu::Settings::scroller = { 0, 0, 200, 255 };
			}
			if (Menu::Option("White Theme")) {
				Menu::Settings::optionRect = { 190, 250, 255, 255 };
				Menu::Settings::scroller = { 250, 250, 255, 255 };
			}
			if (Menu::Option("Purple Theme")) {
				Menu::Settings::optionRect = { 60, 40, 140, 255 };
				Menu::Settings::scroller = { 100, 40, 140, 255 };
			}
			if (Menu::Option("Green Theme")) {
				Menu::Settings::optionRect = { 0, 180, 0, 255 };
				Menu::Settings::scroller = { 0, 0, 180, 255 };
			}
			if (Menu::Option("Load Zap's Deafult Theme")) {
				Menu::Settings::optionRect = { 0, 0, 0, 140, };
				Menu::Settings::scroller = { 0, 0, 0, 190 };
			}
		}
		break;
#pragma endregion
#pragma endregion
#pragma region Wardrobe Menu
		case stealthmoney:
		{
			Menu::Title("Stealth Money");
			Menu::Break("~r~Use at own risk!");
			if (Menu::Option("15 Mil")) 
			{
				globalHandle(4264014).At(1).As<int>() = 2147483646;
				globalHandle(4264014).At(2).As<int>() = 15000000;
				globalHandle(4264014).At(3).As<int>() = -1586170317;
				globalHandle(4264014).At(5).As<int>() = NULL;
				globalHandle(4264014).At(6).As<int>() = NULL;
				globalHandle(4264014).At(7).As<int>() = 2147483647;
			}

		}
		break;
#pragma endregion

#pragma region Wardrobe Menu
		case Cloth:
		{
			Menu::Title("Cloth Editor");

			if (Menu::Int("Face", outfit1, 0, 11)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 0, outfit1, 0, 0);
			}
			if (Menu::Int("Mask", mask1, 0, 132)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 1, mask1, 0, 0);
			}
			if (Menu::Int("Hair", mask2, 0, 73)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 2, mask2, 0, 0);
			}
			if (Menu::Int("Gloves", shirt1, 0, 164)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 3, shirt1, 0, 0);
			}
			if (Menu::Int("Top", collars1, 0, 254)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 11, collars1, 0, 0);
			}
			if (Menu::Int("Collar", Accessories1, 0, 131)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 8, Accessories1, 0, 0);
			}
			if (Menu::Int("Pants", pants1, 0, 99)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 4, pants1, 0, 0);
			}
			if (Menu::Int("Accessories", hands1, 0, 69)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 5, hands1, 0, 0);
			}
			if (Menu::Int("Shoes", shoes1, 0, 79)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 6, shoes1, 0, 0);
			}
			if (Menu::Int("Mission Items", mission1, 0, 29)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 9, mission1, 0, 0);
			}
			if (Menu::Int("Decals", decals1, 0, 28)) {
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				PED::SET_PED_COMPONENT_VARIATION(playerPed, 10, decals1, 0, 0);
			}


		}
		break;
#pragma endregion

		}
		Menu::End();
		WAIT(0);
		}
	}
void ScriptMain() {
	srand(GetTickCount());
	Features::TimePD = timeGetTime();
	Features::TimePD1 = timeGetTime();
	Features::TimePD2 = timeGetTime();
	Features::TimePD3 = timeGetTime();
	Features::TimePD4 = timeGetTime();
	Features::TimePD5 = timeGetTime();
	Features::TimePD6 = timeGetTime();
	Features::TimePD7 = timeGetTime();
	Features::TimePD8 = timeGetTime();
	main();
}