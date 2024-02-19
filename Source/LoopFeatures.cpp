#include "stdafx.h"
#include "math.h"
//#include "utils.h"



int LoopFeatures::TimePD;
int playerplpha = 255;

#define PROP_MONEY_BAG_01 0x113FD533
#define PICKUP_MONEY_CASE 0x1E9A99F8

double DegreeToRadian(double n) {
	return n * 0.017453292519943295;
}

Vector3 RotationToDirection(Vector3 rot) {
	double num = DegreeToRadian(rot.z);
	double num2 = DegreeToRadian(rot.x);
	double val = cos(num2);
	double num3 = abs(val);
	rot.x = (float)(-(float)sin(num) * num3);
	rot.y = (float)(cos(num) * num3);
	rot.z = (float)sin(num2);
	return rot;
}

Vector3 addVector(Vector3 vector, Vector3 vector2) {
	vector.x += vector2.x;
	vector.y += vector2.y;
	vector.z += vector2.z;
	vector._paddingx += vector2._paddingx;
	vector._paddingy += vector2._paddingy;
	vector._paddingz += vector2._paddingz;
	return vector;
}

Vector3 multiplyVector(Vector3 vector, float inc) {
	vector.x *= inc;
	vector.y *= inc;
	vector.z *= inc;
	vector._paddingx *= inc;
	vector._paddingy *= inc;
	vector._paddingz *= inc;
	return vector;
}


int LoopFeatures::Dropfreqvalue = 100;

void LoopFeatures::UpdateLoop()
{
	Godmode ? godmode(true) : NULL;

	if (RapidFire)
	{
		rapidfire(true);
	}

	Ghostmode ? ghostmode(true) : NULL;

	PowerMultiplier ? powermultiplier(true) : NULL;

	TorqueMultiplier ? torquemultiplier(true) : NULL;

	Superjump ? superjump(true) : NULL;

	Neverwanted ? neverwanted(true) : NULL;

	OfRadar ? ofradar(true) : NULL;

	rainbowmenu ? Rainbowmenu(true) : NULL;

	Rainbowcar ? rainbowcar(true) : NULL;

	RainbowPedCars ? rainbowPedCars(true) : NULL;

	SmoothRainbowcar ? Smoothrainbowcar(true) : NULL;

	FireAmmo ? fireammo(true) : NULL;

	InfiniteAmmo ? infiniteammo(true) : NULL;

	ExplosiveAmmo ? explosiveammo(true) : NULL;

	TPGun ? tpgun(true) : NULL;

	GodmodeVeh ? godmodeveh(true) : NULL;

	SuperRun ? Superun(true) : NULL;

	Loop2K ? loop2k(true) : NULL;

	SelfLoop2K ? selfloop2k(true) : NULL;

	SpectatePlayer ? spectateplayer(true) : NULL;

	Aimbot ? aimbot(true) : NULL;

	ExVeh ? exVeh(true) : NULL;	
	DeleteVeh ? deleteVeh(true) : NULL;
	HornVeh ? hornVeh(true) : NULL;
	BurstVeh ? burstVeh(true) : NULL;
	FixVeh ? fixVeh(true) : NULL;

	StickyBomb ? stickyBomb(true) : NULL;

	Valk ? stickyBomb(true) : NULL;

	Firework ? firework(true) : NULL;

	Flare ? flare(true) : NULL;

	Blimp ? blimp(true) : NULL;

	HiOctane ? hiOctane(true) : NULL;

	MoneyRain ? moneyrain(true) : NULL;

	FreezeTime ? freezetime(true) : NULL;

	Fly ? fly(true) : NULL;

	FrictionMultiplier ? frictionmultiplier(true) : NULL;

	IdleKick ? idlekick(true) : NULL;

	FireLoop ? fireloop(true) : NULL;

	ExplosiveMelee ? explosivemelee(true) : NULL;

	ESP ? esp(true) : NULL;

	RainbowGun ? rainbowgun(true) : NULL;

	OneShotKill ? oneshotkill(true) : NULL;

	FastRun ? fastrun(true) : NULL;

	PTLoopedO ? PTLopperO(true) : NULL;

	Freeze ? freeze(true) : NULL;

	TinyPlayer ? tinyplayer(true) : NULL;

	PropShoot ? propshoot(true) : NULL;

	HornBoost ? hornboost(true) : NULL;

	SpawnInVehicle ? spawninvehicle(true) : NULL;

	SpawnMaxedVehicle ? spawnmaxedvehicle(true) : NULL;

	NoPhone ? nophone(true) : NULL;

	ExplodeNearbyVehicles ? explodeNearbyVehicles(true) : NULL;

	MoneyGun ? moneygun(true) : NULL;

	ArmourDrop ? armourDrop(true) : NULL;

	Health ? health(true) : NULL;

	ParachuteDrop ? parachuteDrop : NULL;

	RainbowPedCars ? rainbowPedCars(true) : NULL;

	ExsplodeP ? exsplodeP(true) : NULL;

	FreezeP ? freezeP(true) : NULL;

	AttachP ? attachP(true) : NULL;

	FlyPedCars ? flypedcars(true) : NULL;

	NoRagdoll ? noragdoll(true) : NULL;

	LightningStrike ? lightningStrike(true) : NULL;

	F4 ? f4(true) : NULL;

	F5 ? f5(true) : NULL;

	DriveWater ? driveWater(true) : NULL;

	F7 ? f7(true) : NULL;

	NoClip ? noClip(true) : NULL;

	DeleteGun ? deletegun(true) : NULL;

	giver ? StealthDropinte(true) : NULL;

	ShootCars ? shootCars(true) : NULL;
	ShootCars1 ? shootCars1(true) : NULL; 
	ShootCars2 ? shootCars2(true) : NULL;
	ShootCars3 ? shootCars3(true) : NULL;


	FreeCam ? freeCam(true) : NULL;

	ShakeCam ? shakecam(true) : NULL;

	expammo ? Expammos(true) : NULL;

	AirstrikeGun ? airstrikeGun(true) : NULL;

	VehicleGun1 ? vehicleGun1(true) : NULL;

	KeyNote ? keyNote(true) : NULL;

	GravityGun ? gravityGun(true) : NULL;
	
	CarWeapons ? carweapons(true) : NULL;

	CR ? cr(true) : NULL;

	SV ? sv(true) : NULL;

	FB ? fb(true) : NULL;

	PLAYER::_SET_WORLD_BOUNDS_LIMIT(FLT_MAX, FLT_MAX, FLT_MAX);
	for (int ix = 0; ix < 33; ix++)
	{
		if (PTLoopedO[ix])
		{
			PTLopperO(ix);
		}
		if (ESP)
		{
			esp(ix);
		}
		if (ESPBox)
		{
			espbox(ix);
		}
		if (ESPname)
		{
			espName(ix);
		}
		if (ESPs)
		{
		    LoopFeatures::esps(selectedPlayer);
		}
		if (ESPBoxs)
		{
			LoopFeatures::espboxs(selectedPlayer);
		}
		if (ESPnames)
		{
			LoopFeatures::espNames(selectedPlayer);
		}
	}

	globalHandle(4267883).As<BOOL>() = true;
}
//uint Weapons[] = { GAMEPLAY::GET_HASH_KEY("WEAPON_RAYPISTOL"), GAMEPLAY::GET_HASH_KEY("WEAPON_RAYCARBINE"), GAMEPLAY::GET_HASH_KEY("WEAPON_RAYMINIGUN"), 0x6D544C99, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };

int LoopFeatures::TimePD1;

int LoopFeatures::Dropmoneyvalue = 2000;

bool LoopFeatures::Godmode = false;
void LoopFeatures::godmode(bool toggle)
{
	if (toggle == true)

		Memory::set_value<bool>({ OFFSET_PLAYER , OFFSET_ENTITY_GOD }, 1);
	else
		Memory::set_value<bool>({ OFFSET_PLAYER , OFFSET_ENTITY_GOD }, 0);
}

bool LoopFeatures::Moneylobby = false;
void LoopFeatures::moneylobby(bool toggle)
{
	LoopFeatures::DropCashLobby(selectedPlayer);
}

void LoopFeatures::DropCashLobby(Ped playerPed)
{
	if ((timeGetTime() - LoopFeatures::TimePD1) > LoopFeatures::Dropfreqvalue)
	{
		for (int i = 0; i < 32; i++)
		{
			int excludeMe = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
			if (excludeMe > 0 && excludeMe != PLAYER::PLAYER_PED_ID())
			{
				Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				STREAMING::REQUEST_MODEL(PROP_MONEY_BAG_01);
				if (!STREAMING::HAS_MODEL_LOADED(PROP_MONEY_BAG_01)) {
					WAIT(0);
				}
				else {
					Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
					OBJECT::CREATE_AMBIENT_PICKUP(PICKUP_MONEY_CASE, playerPosition.x, playerPosition.y, playerPosition.z + 1.0f, 0, 2000, PROP_MONEY_BAG_01, FALSE, TRUE);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(PROP_MONEY_BAG_01);
				}
				LoopFeatures::TimePD1 = timeGetTime();
			}
		}

	}
}

#include "xutility"
#include <climits>
#include <cstdlib>
#include <utility>

bool LoopFeatures::SV = false;
void LoopFeatures::sv(bool toggle)
{
	
	auto playerPed = PLAYER::PLAYER_PED_ID();
	static bool start_supervis;
	float s = std::distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(playerPed, true)) + 5.25;
	auto h = ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(playerPed, PED::GET_PED_BONE_INDEX(playerPed, SKEL_Head));
	float end = std::distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) + 1000.0;
	if (PED::IS_PED_ON_FOOT(playerPed) && IsKeyPressed(VK_LBUTTON))
	{
		if (start_supervis) {
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			start_supervis = false;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(playerPed, $("WEAPON_UNARMED"), 1);
		ENTITY::SET_ENTITY_ROTATION(playerPed, 0, 0, CAM::GET_GAMEPLAY_CAM_ROT(0).z, 1, true);

		auto war = $("WEAPON_RAILGUN");
		if (!WEAPON::HAS_WEAPON_ASSET_LOADED(war))
		{
			WEAPON::REQUEST_WEAPON_ASSET(war, 31, false);
			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(war))
				WAIT(0);
		}
		Vector3 startCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), s));
		Vector3 endCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), end));
		GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(startCoords.x, startCoords.y, startCoords.z, endCoords.x, endCoords.y, endCoords.z, 250, 1, war, playerPed, 1, 0, -1.0);
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(playerPed, war, 1, 0);
		auto camrot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		auto camdir = rot_to_direction(&camrot);
		auto start = ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID()), 1);

		auto end = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&camdir, 10.f));
		if (ENTITY::DOES_ENTITY_EXIST(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID())) && CONTROLS::IS_CONTROL_PRESSED(2, INPUT_AIM))
			GRAPHICS::DRAW_LINE(start.x, start.y, start.z, end.x, end.y, end.z, 255, 0, 0, 255);
	}
	else {
		start_supervis = true;
	}
	

}


bool LoopFeatures::ArmourDrop = false;
void LoopFeatures::armourDrop(bool toggle)
{
	Vector3 vec = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
	OBJECT::CREATE_AMBIENT_PICKUP(GAMEPLAY::GET_HASH_KEY("PICKUP_ARMOUR_STANDARD"), vec.x, vec.y, vec.z, 0, 2500, 1, 0, 1);
}


bool LoopFeatures::CR = false;
void LoopFeatures::cr(bool toggle)
{
	static Object container;
	auto selfVeh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	Vector3 min, max;
	Vector3 cmin, cmax;
	auto c = ENTITY::GET_ENTITY_COORDS(selfVeh, 1);
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(selfVeh), &min, &max);
	GAMEPLAY::GET_MODEL_DIMENSIONS($("prop_container_ld2"), &cmin, &cmax);

	if (!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) {
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) {
			notifyBottom("~r~Container rider requires a bike.");
			return;
		}
	}

	if (!STREAMING::HAS_MODEL_LOADED($("prop_container_ld2")))
		STREAMING::REQUEST_MODEL($("prop_container_ld2"));

	if (!ENTITY::DOES_ENTITY_EXIST(container) || !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(selfVeh)) {
		static auto tickeer = GetTickCount();
		if ((GetTickCount() - tickeer) >= 1000) {
			if (CONTROLS::IS_CONTROL_PRESSED(2, INPUT_VEH_FLY_PITCH_UP_ONLY)) {
				tickeer = GetTickCount();
				ENTITY::APPLY_FORCE_TO_ENTITY(selfVeh, 0, 0, 0, 1.5, 0, 0, 0, 0, 1, 1, 1, 0, 1);
			}
		}
		static auto ticker = GetTickCount();
		if (ENTITY::DOES_ENTITY_EXIST(container)) {
			RequestControlOfEnt(container);
			ENTITY::SET_ENTITY_COORDS(container, 0.f, 0.f, 0.f, 1, 1, 1, 0);
			ENTITY::DELETE_ENTITY(&container);
			OBJECT::DELETE_OBJECT(&container);
		}
		container = OBJECT::CREATE_OBJECT($("prop_container_ld2"), c.x, c.y, c.z - ((max.z / 2) + cmax.z), 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(container, ENTITY::GET_ENTITY_PITCH(selfVeh), 0.f, ENTITY::GET_ENTITY_HEADING(selfVeh), 0, 0);
	}
}

bool LoopFeatures::Health = false;
void LoopFeatures::health(bool toggle)
{
	Vector3 vec = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
	OBJECT::CREATE_AMBIENT_PICKUP(GAMEPLAY::GET_HASH_KEY("PICKUP_HEALTH_STANDARD"), vec.x, vec.y, vec.z, 0, 2500, 1, 0, 1);
}

bool LoopFeatures::ParachuteDrop = false;
void LoopFeatures::parachuteDrop(bool toggle)
{
	Vector3 vec = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
	OBJECT::CREATE_AMBIENT_PICKUP(GAMEPLAY::GET_HASH_KEY("PICKUP_PARACHUTE"), vec.x, vec.y, vec.z, 0, 2500, 1, 0, 1);
}

bool LoopFeatures::NoPhone = false;
void LoopFeatures::nophone(bool toggle) {
	CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, !toggle);
	//MOBILE::_DISABLE_PHONE_THIS_FRAME(!toggle);
}

bool LoopFeatures::isPlayerFriend(Player player, BOOL result)
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

bool LoopFeatures::NoClip = false;
void LoopFeatures::noClip(bool toggle) {

	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	if (GetAsyncKeyState(VK_KEY_S) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x -= xVec, pos.y -= yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_W) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x += xVec, pos.y += yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_A) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading + 0.5f);
	}
	if (GetAsyncKeyState(VK_KEY_D) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading - 0.5f);
	}
	if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendRb)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z -= 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendLb)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z += 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
}

bool LoopFeatures::KeyNote = false;
void LoopFeatures::keyNote(bool toggle) {

	if (GetAsyncKeyState(VK_F3))
	{
		Ped playerPed = PLAYER::PLAYER_PED_ID();
		Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
		if (GetAsyncKeyState(VK_KEY_S) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) {
			float fivef = .5f;
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			float xVec = fivef * sin(degToRad(heading)) * -1.0f;
			float yVec = fivef * cos(degToRad(heading));
			ENTITY::SET_ENTITY_HEADING(playerPed, heading);

			pos.x -= xVec, pos.y -= yVec;
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
		}
		if (GetAsyncKeyState(VK_KEY_W) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {
			float fivef = .5f;
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			float xVec = fivef * sin(degToRad(heading)) * -1.0f;
			float yVec = fivef * cos(degToRad(heading));
			ENTITY::SET_ENTITY_HEADING(playerPed, heading);

			pos.x += xVec, pos.y += yVec;
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
		}
		if (GetAsyncKeyState(VK_KEY_A) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
			float fivef = .5f;
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			ENTITY::SET_ENTITY_HEADING(playerPed, heading + 0.5f);
		}
		if (GetAsyncKeyState(VK_KEY_D) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
			float fivef = .5f;
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			ENTITY::SET_ENTITY_HEADING(playerPed, heading - 0.5f);
		}
		if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendRb)) {
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			ENTITY::SET_ENTITY_HEADING(playerPed, heading);

			pos.z -= 0.5;
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
		}
		if (GetAsyncKeyState(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendLb)) {
			float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			ENTITY::SET_ENTITY_HEADING(playerPed, heading);

			pos.z += 0.5;
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
		}
	}

	
}

bool LoopFeatures::FreeCam = false;
void LoopFeatures::freeCam(bool toggle)
{


	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	if (GetAsyncKeyState(VK_KEY_S) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x -= xVec, pos.y -= yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_W) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x += xVec, pos.y += yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_A) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading + 0.5f);
	}
	if (GetAsyncKeyState(VK_KEY_D) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading - 0.5f);
	}
	if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendRb)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z -= 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendLb)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z += 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true);
	}
}

void LoopFeatures::LoadPlayerInfo(char* playerName, Player p) {
	Player self = playerPedId;
	Ped ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(p);
	RequestControlOfEnt(ped);
	bool is_friend = false;
	bool handle_valid = LoopFeatures::isPlayerFriend(p, is_friend);
	std::ostringstream Friend;


	int money = globalHandle(1589819).At(p, 818).At(211).At(3).As<int>();
	int rp = globalHandle(1589819).At(p, 818).At(211).At(5).As<int>();
	int rank = globalHandle(1589819).At(p, 818).At(211).At(6).As<int>();
	int kills = globalHandle(1589819).At(p, 818).At(211).At(28).As<int>();
	int deaths = globalHandle(1589819).At(p, 818).At(211).At(29).As<int>();
	float kd = globalHandle(1589819).At(p, 818).At(211).At(26).As<float>();
	int handle = globalHandle(1589819).At(p, 818).At(211).At(56).As<int>();
	int handle2 = globalHandle(1589819).At(p, 818).At(211).At(3).As<int>();
	int bankMoney = handle - handle2;

	std::ostringstream Money, RP, Rank, Kills, Deaths, KD, Bank;

	Money << "~b~Cash:~s~ $" << money;
	Bank << "~b~Bank:~s~ $" << bankMoney;
	RP << "~b~RP:~s~ " << rp;
	Rank << "~b~Rank:~s~ " << rank;
	Kills << "~b~Kills:~s~ " << kills;
	Deaths << "~b~Deaths:~s~ " << deaths;
	KD << "~b~KD Ratio:~s~ " << kd;


	float health = (float)ENTITY::GET_ENTITY_HEALTH(ped);
	float maxHealth = (float)ENTITY::GET_ENTITY_MAX_HEALTH(ped);
	float healthPercent = health * 100 / maxHealth;
	std::ostringstream Health; Health << "~b~Health:~s~ " << healthPercent << "%";
	float armor = (float)PED::GET_PED_ARMOUR(ped);
	float maxArmor = (float)PLAYER::GET_PLAYER_MAX_ARMOUR(p);
	float armorPercent = armor * 100 / maxArmor;
	std::ostringstream Armour; Armour << "~b~Armour:~s~ " << armorPercent << "%";
	bool alive = !PED::IS_PED_DEAD_OR_DYING(ped, 1);
	char* aliveStatus;
	if (alive) aliveStatus = "Yes"; else aliveStatus = "No";
	std::ostringstream Alive; Alive << "~b~Alive:~s~ " << aliveStatus;
	BOOL inVehicle = PED::IS_PED_IN_ANY_VEHICLE(ped, 0);
	std::ostringstream VehicleModel; VehicleModel << "~b~Vehicle:~s~ ";
	std::ostringstream Speed; Speed << "~b~Speed:~s~ ";
	std::ostringstream IsInAVehicle; IsInAVehicle << "~b~In Vehicle:~s~ ";
	if (inVehicle) {
		IsInAVehicle << "Yes";
		Hash vehHash = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(ped, 0));
		VehicleModel << UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(vehHash));
		float vehSpeed = ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(ped, 0));
		float vehSpeedConverted;
		vehSpeedConverted = round(vehSpeed * 1.6f);
		Speed << vehSpeedConverted << " KM/H";
	}
	else {
		IsInAVehicle << "No";
		float speed = round(ENTITY::GET_ENTITY_SPEED(ped) * 100) / 100;
		Speed << speed << " M/S";
		VehicleModel << "--------";
	}
	std::ostringstream WantedLevel; WantedLevel << "~b~Wanted Level:~s~ " << PLAYER::GET_PLAYER_WANTED_LEVEL(p);
	std::ostringstream Weapon; Weapon << "~b~Weapon: ~s~";
	Hash weaponHash;
	if (WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, 1)) {
		char* weaponName;
		if (weaponHash == 2725352035) {
			weaponName = "Unarmed";
		}
		else if (weaponHash == 2578778090) {
			weaponName = "Knife";
		}
		else if (weaponHash == 0x678B81B1) {
			weaponName = "Nightstick";
		}
		else if (weaponHash == 0x4E875F73) {
			weaponName = "Hammer";
		}
		else if (weaponHash == 0x958A4A8F) {
			weaponName = "Bat";
		}
		else if (weaponHash == 0x440E4788) {
			weaponName = "GolfClub";
		}
		else if (weaponHash == 0x84BD7BFD) {
			weaponName = "Crowbar";
		}
		else if (weaponHash == 0x1B06D571) {
			weaponName = "Pistol";
		}
		else if (weaponHash == 0x5EF9FEC4) {
			weaponName = "Combat Pistol";
		}
		else if (weaponHash == 0x22D8FE39) {
			weaponName = "AP Pistol";
		}
		else if (weaponHash == 0x99AEEB3B) {
			weaponName = "Pistol 50";
		}
		else if (weaponHash == 0x13532244) {
			weaponName = "Micro SMG";
		}
		else if (weaponHash == 0x2BE6766B) {
			weaponName = "SMG";
		}
		else if (weaponHash == 0xEFE7E2DF) {
			weaponName = "Assault SMG";
		}
		else if (weaponHash == 0xBFEFFF6D) {
			weaponName = "Assault Riffle";
		}
		else if (weaponHash == 0x83BF0278) {
			weaponName = "Carbine Riffle";
		}
		else if (weaponHash == 0xAF113F99) {
			weaponName = "Advanced Riffle";
		}
		else if (weaponHash == 0x9D07F764) {
			weaponName = "MG";
		}
		else if (weaponHash == 0x7FD62962) {
			weaponName = "Combat MG";
		}
		else if (weaponHash == 0x1D073A89) {
			weaponName = "Pump Shotgun";
		}
		else if (weaponHash == 0x7846A318) {
			weaponName = "Sawed-Off Shotgun";
		}
		else if (weaponHash == 0xE284C527) {
			weaponName = "Assault Shotgun";
		}
		else if (weaponHash == 0x9D61E50F) {
			weaponName = "Bullpup Shotgun";
		}
		else if (weaponHash == 0x3656C8C1) {
			weaponName = "Stun Gun";
		}
		else if (weaponHash == 0x05FC3C11) {
			weaponName = "Sniper Rifle";
		}
		else if (weaponHash == 0x0C472FE2) {
			weaponName = "Heavy Sniper";
		}
		else if (weaponHash == 0xA284510B) {
			weaponName = "Grenade Launcher";
		}
		else if (weaponHash == 0x4DD2DC56) {
			weaponName = "Smoke Grenade Launcher";
		}
		else if (weaponHash == 0xB1CA77B1) {
			weaponName = "RPG";
		}
		else if (weaponHash == 0x42BF8A85) {
			weaponName = "Minigun";
		}
		else if (weaponHash == 0x93E220BD) {
			weaponName = "Grenade";
		}
		else if (weaponHash == 0x2C3731D9) {
			weaponName = "Sticky Bomb";
		}
		else if (weaponHash == 0xFDBC8A50) {
			weaponName = "Smoke Grenade";
		}
		else if (weaponHash == 0xA0973D5E) {
			weaponName = "BZGas";
		}
		else if (weaponHash == 0x24B17070) {
			weaponName = "Molotov";
		}
		else if (weaponHash == 0x060EC506) {
			weaponName = "Fire Extinguisher";
		}
		else if (weaponHash == 0x34A67B97) {
			weaponName = "Petrol Can";
		}
		else if (weaponHash == 0xFDBADCED) {
			weaponName = "Digital scanner";
		}
		else if (weaponHash == 0x88C78EB7) {
			weaponName = "Briefcase";
		}
		else if (weaponHash == 0x23C9F95C) {
			weaponName = "Ball";
		}
		else if (weaponHash == 0x497FACC3) {
			weaponName = "Flare";
		}
		else if (weaponHash == 0xF9E6AA4B) {
			weaponName = "Bottle";
		}
		else if (weaponHash == 0x61012683) {
			weaponName = "Gusenberg";
		}
		else if (weaponHash == 0xC0A3098D) {
			weaponName = "Special Carabine";
		}
		else if (weaponHash == 0xD205520E) {
			weaponName = "Heavy Pistol";
		}
		else if (weaponHash == 0xBFD21232) {
			weaponName = "SNS Pistol";
		}
		else if (weaponHash == 0x7F229F94) {
			weaponName = "Bullpup Rifle";
		}
		else if (weaponHash == 0x92A27487) {
			weaponName = "Dagger";
		}
		else if (weaponHash == 0x083839C4) {
			weaponName = "Vintage Pistol";
		}
		else if (weaponHash == 0x7F7497E5) {
			weaponName = "Firework";
		}
		else if (weaponHash == 0xA89CB99E) {
			weaponName = "Musket";
		}
		else if (weaponHash == 0x3AABBBAA) {
			weaponName = "Heavy Shotgun";
		}
		else if (weaponHash == 0xC734385A) {
			weaponName = "Marksman Rifle";
		}
		else if (weaponHash == 0x63AB0442) {
			weaponName = "Homing Launcher";
		}
		else if (weaponHash == 0xAB564B93) {
			weaponName = "Proximity Mine";
		}
		else if (weaponHash == 0x787F0BB) {
			weaponName = "Snowball";
		}
		else if (weaponHash == 0x47757124) {
			weaponName = "Flare Gun";
		}
		else if (weaponHash == 0xE232C28C) {
			weaponName = "Garbage Bag";
		}
		else if (weaponHash == 0xD04C944D) {
			weaponName = "Handcuffs";
		}
		else if (weaponHash == 0x0A3D4D34) {
			weaponName = "Combat PDW";
		}
		else if (weaponHash == 0xDC4DB296) {
			weaponName = "Marksman Pistol";
		}
		else if (weaponHash == 0xD8DF3C3C) {
			weaponName = "Brass Knuckles";
		}
		else if (weaponHash == 0x6D544C99) {
			weaponName = "Railgun";
		}
		else {
			weaponName = "Unarmed";
		}
		Weapon << weaponName;
	}
	else Weapon << "Unarmed";

	Menu::AddSmallTitle("Player Info");
	Menu::AddSmallInfo((char*)Friend.str().c_str(), 0);
	Menu::AddSmallInfo((char*)Money.str().c_str(), 1);
	Menu::AddSmallInfo((char*)Bank.str().c_str(), 2);
	Menu::AddSmallInfo((char*)RP.str().c_str(), 3);
	Menu::AddSmallInfo((char*)Rank.str().c_str(), 4);
	Menu::AddSmallInfo((char*)Kills.str().c_str(), 5);
	Menu::AddSmallInfo((char*)Deaths.str().c_str(), 6);
	Menu::AddSmallInfo((char*)KD.str().c_str(), 7);
	Menu::AddSmallInfo((char*)Alive.str().c_str(), 8);
	Menu::AddSmallInfo((char*)Health.str().c_str(), 9);
	Menu::AddSmallInfo((char*)Armour.str().c_str(), 10);
	Menu::AddSmallInfo((char*)WantedLevel.str().c_str(), 11);
	Menu::AddSmallInfo((char*)Weapon.str().c_str(), 12);
	Menu::AddSmallInfo((char*)IsInAVehicle.str().c_str(), 13);
	Menu::AddSmallInfo((char*)VehicleModel.str().c_str(), 14);
	Menu::AddSmallInfo((char*)Speed.str().c_str(), 15);
}

char *call1o;
char *call2o;
char *nameo;




bool LoopFeatures::isKickToSPProtex = false;
bool LoopFeatures::isKickToFMProtex = false;

bool LoopFeatures::SpawnInVehicle = false;
void LoopFeatures::spawninvehicle(bool toggle) {

}

bool LoopFeatures::SpawnMaxedVehicle = false;
void LoopFeatures::spawnmaxedvehicle(bool toggle) {

}

bool LoopFeatures::SpawnGodVehicle = false;
void LoopFeatures::spawngodvehicle(bool toggle) {

}

int notificationCEO(char *text, char *text2, char *Subject)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG("CHAR_GANGAPP", "CHAR_GANGAPP", false, 7, text2, Subject, 1.0, "___MENU");
	return UI::_DRAW_NOTIFICATION(1, 1);

}


Ped PTLoopPed;

int Damage_ = 50;
int Shake_ = 0;


char *call1s;
char *call2s;
char *names;

bool LoopFeatures::PTLoopedO[35] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
void LoopFeatures::PTLopperO(Player target)
{

	if ((timeGetTime() - Features::TimePD6) > 500) // Time between drops
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(call1o);
		GRAPHICS::USE_PARTICLE_FX_ASSET(call2o);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(nameo, PTLoopPed, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
		Features::TimePD6 = timeGetTime();

	}
}

bool LoopFeatures::AirstrikeGun = false;
void LoopFeatures::airstrikeGun(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords.x, coords.y, coords.z + 30, coords.x, coords.y, coords.z, 250, 0, GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_SPACE_ROCKET"), 0, 1, 1, 500);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 5, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::TinyPlayer = false;
void LoopFeatures::tinyplayer(bool toggle)
{
	PED::SET_PED_CONFIG_FLAG(playerPedId, 223, !toggle);
}

bool LoopFeatures::OneShotKill = false;
void LoopFeatures::oneshotkill(bool toggle)
{
	if (!toggle) {
		Memory::set_value<float>({ OFFSET_PLAYER, OFFSET_WEAPON_MANAGER, OFFSET_WEAPON_CURRENT, OFFSET_WEAPON_BULLET_DMG }, 10000.f);
	}
	else {
		
	}
}

bool LoopFeatures::F4 = false;
void LoopFeatures::f4(bool toggle)
{
	if (GetAsyncKeyState(VK_F4))
	{
		BOOL bPlayerExists = ENTITY::DOES_ENTITY_EXIST(playerPedId);
		Player player = PLAYER::PLAYER_ID();
		ENTITY::SET_ENTITY_HEALTH(playerPedId, ENTITY::GET_ENTITY_MAX_HEALTH(playerPedId));
		PED::ADD_ARMOUR_TO_PED(playerPedId, PLAYER::GET_PLAYER_MAX_ARMOUR(player) - PED::GET_PED_ARMOUR(playerPedId));
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
		{
			Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
			if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
				VEHICLE::SET_VEHICLE_FIXED(playerVeh);
			notificationCEO("~b~Hotkey Found", "Zap", "Standard");
		}
	}
}



bool LoopFeatures::ShootCars = false;
void LoopFeatures::shootCars(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		float offset;
		int vehmodel = GAMEPLAY::GET_HASH_KEY("LAZER");
		STREAMING::REQUEST_MODEL(vehmodel);

		while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
		Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0, 5.0, 0.0);

		if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
		{
			Vector3 dim1, dim2;
			GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

			offset = dim2.y * 1.6;
		}

		Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(playerPedId);
		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(playerPedId, 1);
		float rot = (ENTITY::GET_ENTITY_ROTATION(playerPedId, 0)).z;
		Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
		Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
		Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 10)));
		Vector3 endCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 500.0f)));

		Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), startCoords.z, rot, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(veh, false, false);

		ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0.0f, 500.0f, 2.0f + endCoords.z, 0.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
	}
}

bool LoopFeatures::ShootCars1 = false;
void LoopFeatures::shootCars1(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		float offset;
		int vehmodel = GAMEPLAY::GET_HASH_KEY("PANTO");
		STREAMING::REQUEST_MODEL(vehmodel);

		while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
		Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0, 5.0, 0.0);

		if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
		{
			Vector3 dim1, dim2;
			GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

			offset = dim2.y * 1.6;
		}

		Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(playerPedId);
		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(playerPedId, 1);
		float rot = (ENTITY::GET_ENTITY_ROTATION(playerPedId, 0)).z;
		Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
		Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
		Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 10)));
		Vector3 endCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 500.0f)));

		Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), startCoords.z, rot, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(veh, false, false);

		ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0.0f, 500.0f, 2.0f + endCoords.z, 0.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
	}
}

bool LoopFeatures::ShootCars2 = false;
void LoopFeatures::shootCars2(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		float offset;
		int vehmodel = GAMEPLAY::GET_HASH_KEY("ADDER");
		STREAMING::REQUEST_MODEL(vehmodel);

		while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
		Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0, 5.0, 0.0);

		if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
		{
			Vector3 dim1, dim2;
			GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

			offset = dim2.y * 1.6;
		}

		Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(playerPedId);
		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(playerPedId, 1);
		float rot = (ENTITY::GET_ENTITY_ROTATION(playerPedId, 0)).z;
		Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
		Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
		Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 10)));
		Vector3 endCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 500.0f)));

		Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), startCoords.z, rot, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(veh, false, false);

		ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0.0f, 500.0f, 2.0f + endCoords.z, 0.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
	}
}

bool LoopFeatures::ShootCars3 = false;
void LoopFeatures::shootCars3(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		float offset;
		int vehmodel = GAMEPLAY::GET_HASH_KEY("BLIMP");
		STREAMING::REQUEST_MODEL(vehmodel);

		while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
		Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0, 5.0, 0.0);

		if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
		{
			Vector3 dim1, dim2;
			GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

			offset = dim2.y * 1.6;
		}

		Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(playerPedId);
		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(playerPedId, 1);
		float rot = (ENTITY::GET_ENTITY_ROTATION(playerPedId, 0)).z;
		Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
		Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
		Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 10)));
		Vector3 endCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 500.0f)));

		Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), startCoords.z, rot, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(veh, false, false);

		ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0.0f, 500.0f, 2.0f + endCoords.z, 0.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
	}
}



bool LoopFeatures::F5 = false;
void LoopFeatures::f5(bool toggle)
{
	if (GetAsyncKeyState(VK_F5))
	{

		Memory::set_value<bool>({ OFFSET_PLAYER , OFFSET_ENTITY_GOD }, !toggle);
		globalHandle(2422142).At(PLAYER::PLAYER_ID(), 399).At(209).As<int>() ^= 1;
		globalHandle(2433125).At(69).As<int>() = NETWORK::GET_NETWORK_TIME();
		notificationCEO("~b~Hotkey Found", "Zap", "Standard");
	}
}

bool LoopFeatures::Freeze = false;
void LoopFeatures::freeze(bool toggle)
{
	AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(selectedPlayer));
	AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED(selectedPlayer));
}

bool LoopFeatures::LightningStrike = false;
void LoopFeatures::lightningStrike(bool toggle)
{
	Vector3 Coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 1);
	Coords.z += 15;
	GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Coords.x, Coords.y, Coords.z + 35, Coords.x, Coords.y, Coords.z, 250, 1, GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_SPACE_ROCKET"), PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 1, 1, 500);
	GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Coords.x, Coords.y, Coords.z + 30, Coords.x, Coords.y, Coords.z, 250, 0, GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_SPACE_ROCKET"), 0, 1, 1, 500);
	GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Coords.x, Coords.y, Coords.z + 55, Coords.x, Coords.y, Coords.z, 100, false, 0xF8A3939F, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), true, true, 600);
}

bool LoopFeatures::DriveWater = false;
void LoopFeatures::driveWater(bool toggle)
{
	Player player = PLAYER::PLAYER_ID();
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	DWORD model = ENTITY::GET_ENTITY_MODEL(veh);
	Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
	float height = 0;
	WATER::_SET_WAVES_INTENSITY(height);
	if ((!(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veh)))) && WATER::GET_WATER_HEIGHT_NO_WAVES(pos.x, pos.y, pos.z, &height)) {
		Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(container) && height > -50.0f) {
			Vector3 pRot = ENTITY::GET_ENTITY_ROTATION(playerPed, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 1)) pRot = ENTITY::GET_ENTITY_ROTATION(veh, 0);
			RequestControlOfEnt(container);
			ENTITY::SET_ENTITY_COORDS(container, pos.x, pos.y, height - 1.5f, 0, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(container, 0, 0, pRot.z, 0, 1);
			Vector3 containerCoords = ENTITY::GET_ENTITY_COORDS(container, 1);
			if (pos.z < containerCoords.z) {
				if (!PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0)) {
					ENTITY::SET_ENTITY_COORDS(playerPed, pos.x, pos.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
				}
				else {
					RequestControlOfEnt(veh);
					Vector3 vehc = ENTITY::GET_ENTITY_COORDS(veh, 1);
					ENTITY::SET_ENTITY_COORDS(veh, vehc.x, vehc.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
				}
			}
		}
		else {
			Hash model = GAMEPLAY::GET_HASH_KEY("prop_container_ld2");
			STREAMING::REQUEST_MODEL(model);
			while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
			container = OBJECT::CREATE_OBJECT(model, pos.x, pos.y, pos.z, 1, 1, 0);
			RequestControlOfEnt(container);
			ENTITY::FREEZE_ENTITY_POSITION(container, 1);
			ENTITY::SET_ENTITY_ALPHA(container, 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(container, 0, 0);
		}
	}
	else {
		Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(container)) {
			RequestControlOfEnt(container);
			ENTITY::SET_ENTITY_COORDS(container, 0, 0, -1000.0f, 0, 0, 0, 1);
			WAIT(10);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&container);
			ENTITY::DELETE_ENTITY(&container);
			WATER::_RESET_WAVES_INTENSITY();
		}
	}
}


bool LoopFeatures::F7 = false;
void LoopFeatures::f7(bool toggle)
{
	if (GetAsyncKeyState(VK_F7)) {


		void teleport_to_marker();
		{
			Vector3 coords = get_blip_marker();

			Entity e = PLAYER::PLAYER_PED_ID();
			if (PED::IS_PED_IN_ANY_VEHICLE(e, 0))
			{
				e = PED::GET_VEHICLE_PED_IS_USING(e);
			}

			if (coords.x == 0 && coords.y == 0)
			{
				Vector3 Coords;
				Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				teleport_to_coords(e, Coords);
			}

			// load needed map region and check height levels for ground existence
			bool groundFound = false;
			static float groundCheckHeight[] =
			{ 100.0, 150.0, 50.0, 0.0, 200.0, 250.0, 300.0, 350.0, 400.0, 450.0, 500.0, 550.0, 600.0, 650.0, 700.0, 750.0, 800.0 };
			for (int i = 0; i < sizeof(groundCheckHeight) / sizeof(float); i++)
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(e, coords.x, coords.y, groundCheckHeight[i], 0, 0, 1);
				WAIT(100);
				if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(coords.x, coords.y, groundCheckHeight[i], &coords.z, 0))
				{
					groundFound = true;
					coords.z += 3.0;
					break;
				}
			}
			// if ground not found then set Z in air and give player a parachute
			if (!groundFound)
			{
				coords.z = 1000.0;
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 0xFBAB5776, 1, 0);
			}
			//do it
			teleport_to_coords(e, coords);
			notificationCEO("~b~Hotkey Found", "Zap", "Standard");
		}
	}
}

int LoopFeatures::amount = 1;
bool LoopFeatures::banked = false;
bool LoopFeatures::giver = false;
void LoopFeatures::StealthDropinte(bool toggle) {
	//int var0 = 0ul;
	int var3 = 312105838;
	int var0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
	UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&var0, 1474183246, var3, 1445302971, amount, LoopFeatures::banked ? 4 : 1);
	UNK3::_NETWORK_SHOP_CHECKOUT_START(var0);

	Features::TimePD3 = timeGetTime();

}

bool LoopFeatures::Ghostmode = false;
void LoopFeatures::ghostmode(bool toggle)
{
	if (!LoopFeatures::Ghostmode)
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
	else
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
}



bool grav_target_locked = false;
bool LoopFeatures::GravityGun = false;
void LoopFeatures::gravityGun(bool toggle)
{
	Entity EntityTarget;
	DWORD equippedWeapon;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &equippedWeapon, 1);
	Player player = PLAYER::PLAYER_ID();
	Ped playerPed = PLAYER::PLAYER_PED_ID();

	Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
	Vector3 dir = RotationToDirection(rot);
	Vector3 camPosition = CAM::GET_GAMEPLAY_CAM_COORD();
	Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	float spawnDistance = get_distance(&camPosition, &playerPosition);
	spawnDistance += 6;
	Vector3 spawnPosition = add(&camPosition, &multiply(&dir, spawnDistance));


	Player tempPed = PLAYER::PLAYER_ID();

	if (grav_target_locked) //  FIXED, it is, it's using detected natives ok can you find other native for it? No, because only this one is working for it, you need to find signature for it.
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget) && GetAsyncKeyState(VK_RBUTTON))
		{
			Vector3 EntityTargetPos = ENTITY::GET_ENTITY_COORDS(EntityTarget, 0);
			PLAYER::DISABLE_PLAYER_FIRING(tempPed, true);
			if (ENTITY::IS_ENTITY_A_PED(EntityTarget) && PED::IS_PED_IN_ANY_VEHICLE(EntityTarget, 1))
			{
				EntityTarget = PED::GET_VEHICLE_PED_IS_IN(EntityTarget, 0);
			}

			RequestControlOfEnt(EntityTarget);

			if (ENTITY::IS_ENTITY_A_VEHICLE(EntityTarget))
				ENTITY::SET_ENTITY_HEADING(
					EntityTarget, ENTITY::GET_ENTITY_HEADING(tempPed));

			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(EntityTarget, spawnPosition.x, spawnPosition.y, spawnPosition.z, 0, 0, 0);

			if (GetAsyncKeyState(VK_LBUTTON))
			{
				ENTITY::SET_ENTITY_HEADING(EntityTarget, ENTITY::GET_ENTITY_HEADING(tempPed));
				ENTITY::APPLY_FORCE_TO_ENTITY(EntityTarget, 1, dir.x * 10000.0f, dir.y * 10000.0f, dir.z * 10000.0f, 0.0f, 0.0f,
					0.0f, 0, 0, 1, 1, 0, 1);
				grav_target_locked = false;
				PLAYER::DISABLE_PLAYER_FIRING(tempPed, false);
			}
		}
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget))
	{
		grav_target_locked = true;
		PLAYER::DISABLE_PLAYER_FIRING(tempPed, false);
	}
	
}

bool LoopFeatures::RainbowGun = false;
void LoopFeatures::rainbowgun(bool toggle)
{
	Ped playerPed = playerPedId;
	static LPCSTR weaponNames[] = {
		"WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR",
		"WEAPON_PISTOL", "WEAPON_COMBATPISTOL", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_MICROSMG", "WEAPON_SMG",
		"WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG",
		"WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN",
		"WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE",
		"WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS",
		"WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN",
		"WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE", "WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER",
		"WEAPON_PROXMINE", "WEAPON_SNOWBALL", "WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET",
		"WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSHOTGUN", "WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN", "WEAPON_FLAREGUN",
		"WEAPON_KNUCKLE", "GADGET_NIGHTVISION", "GADGET_PARACHUTE", "WEAPON_MARKSMANPISTOL", "", ""
	};
	for (int i = 0; i < sizeof(weaponNames) / sizeof(weaponNames[0]); i++)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(playerPed, GAMEPLAY::GET_HASH_KEY((char *)weaponNames[i]), 0))
		{
			WEAPON::SET_PED_WEAPON_TINT_INDEX(playerPed, GAMEPLAY::GET_HASH_KEY((char *)weaponNames[i]), rand() % 8);
		}
	}
}

bool LoopFeatures::Aimbot = false;
void LoopFeatures::aimbot(bool toggle)
{
	int player = PLAYER::PLAYER_ID();
	int playerPed = PLAYER::PLAYER_PED_ID();

	for (int i = 0; i < 32; i++)
	{
		if (i != player)
		{
			if (GetAsyncKeyState(VK_RBUTTON))
			{
				Ped targetPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				Vector3 targetPos = ENTITY::GET_ENTITY_COORDS(targetPed, 1);
				BOOL exists = ENTITY::DOES_ENTITY_EXIST(targetPed);
				BOOL dead = PLAYER::IS_PLAYER_DEAD(targetPed);

				if (exists && !dead)
				{
					float screenX, screenY;
					BOOL onScreen = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(targetPos.x, targetPos.y, targetPos.z, &screenX, &screenY);
					if (ENTITY::IS_ENTITY_VISIBLE(targetPed) && onScreen)
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, targetPed, 17))
						{
							Vector3 targetCoords = PED::GET_PED_BONE_COORDS(targetPed, 31086, 0, 0, 0);
							PED::SET_PED_SHOOTS_AT_COORD(playerPed, targetCoords.x, targetCoords.y, targetCoords.z, 1);

						}
					}
				}
			}
		}
	}
}

bool LoopFeatures::OfRadar = false;
void LoopFeatures::ofradar(bool toggle)
{
	globalHandle(2422142).At(PLAYER::PLAYER_ID(), 399).At(209).As<int>() ^= 1;
	globalHandle(2433125).At(69).As<int>() = NETWORK::GET_NETWORK_TIME();
}

bool LoopFeatures::ShakeCam = false;
void LoopFeatures::shakecam(bool toggle)
{
	Vector3 GetPlayerCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), true);
	FIRE::ADD_EXPLOSION(GetPlayerCoords.x, GetPlayerCoords.y, GetPlayerCoords.z, 29, 0, false, true, 100);
}

bool LoopFeatures::PowerMultiplier = false;
void LoopFeatures::powermultiplier(bool toggle)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
	{
		Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
		VEHICLE::_SET_VEHICLE_ENGINE_POWER_MULTIPLIER(playerVeh, Menu::Settings::powervalue.r);
	}
}

bool LoopFeatures::IdleKick = false;
void LoopFeatures::idlekick(bool toggle)
{
	STATS::PLAYSTATS_IDLE_KICK(99999999);
}

bool LoopFeatures::TorqueMultiplier = false;
void LoopFeatures::torquemultiplier(bool toggle)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 0))
	{
		Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
		VEHICLE::_SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(playerVeh, Menu::Settings::torquevalue.r);
	}
}

bool LoopFeatures::FrictionMultiplier = false;
void LoopFeatures::frictionmultiplier(bool toggle)
{
	Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
	VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(playerVeh, Menu::Settings::frictionvalue.r);
}



bool LoopFeatures::FireLoop = false;
void LoopFeatures::fireloop(bool toggle)
{
	/*Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(selectedPlayer, FALSE);
	Object obj = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(playerPosition.x, playerPosition.y, playerPosition.z, 3.0f, GAMEPLAY::GET_HASH_KEY("prop_beach_fire"), TRUE, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(obj))
	{
		RequestControlOfEnt(obj);
		OBJECT::DELETE_OBJECT(&obj);
		notifyMap("~HUD_COLOUR_RED~Fire loop stopped!");
	}
	else
	{
		Hash beach_fire_hash = GAMEPLAY::GET_HASH_KEY("prop_beach_fire");
		STREAMING::REQUEST_MODEL(beach_fire_hash);
		while (!STREAMING::HAS_MODEL_LOADED(beach_fire_hash)) WAIT(0);
		{
			Object beach_fire = OBJECT::CREATE_OBJECT(beach_fire_hash, playerPosition.x, playerPosition.y, playerPosition.z, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(beach_fire, selectedPlayer, PED::GET_PED_BONE_INDEX(selectedPlayer, SKEL_Spine_Root), 0.0, 0.0, 0.0, 0.0, 90.0, 0, false, false, false, false, 2, true);
			notifyMap("~HUD_COLOUR_GREEN~Fire loop started!");
		}
	}*/
}
bool LoopFeatures::FastRun = false;
void LoopFeatures::fastrun(bool toggle)
{
	if (!FastRun)
	{
		Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_PLAYER_INFO , OFFSET_PLAYER_INFO_RUN_SPD }, 1);
	}
	else
	{
		Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_PLAYER_INFO , OFFSET_PLAYER_INFO_RUN_SPD }, 2.5);
	}
}



bool LoopFeatures::NoRagdoll = false;
void LoopFeatures::noragdoll(bool toggle)
{
	PED::SET_PED_RAGDOLL_ON_COLLISION(playerPedId, !toggle);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(playerPedId, !toggle);
	PED::SET_PED_CAN_RAGDOLL(playerPedId, !toggle);
}

bool LoopFeatures::Fly = false;
void LoopFeatures::fly(bool toggle)
{
	Hash hash = GAMEPLAY::GET_HASH_KEY("GADGET_PARACHUTE");

	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), hash, 1, 1);
	PED::SET_PED_TO_RAGDOLL_WITH_FALL(PLAYER::PLAYER_PED_ID(), 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);

	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (GetAsyncKeyState(0x53)) // S key
		{
			ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 3, 0, 0);
		}
		if (GetAsyncKeyState(0x57)) // W key
		{
			ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 3, 6, 0);
		}
		if (GetAsyncKeyState(VK_SHIFT)) //VK_SHIFT
		{
			ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
		}
		if (GetAsyncKeyState(VK_SPACE)) //Space Key
		{
			ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 9, 9, 9);
		}
	}
}

bool LoopFeatures::FB = false;
void LoopFeatures::fb(bool toggle)
{
	float XPos = 0.02, YPos = 0.2, ZPos = 0.0, XOff = 90.0, YOff = -100.0, ZOff = 90.0;

	STREAMING::REQUEST_NAMED_PTFX_ASSET("core");
	GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("core");
	if ((timeGetTime() - LoopFeatures::TimePD) > 200)
	{
		int ptfx = GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("ent_sht_flame", PLAYER::PLAYER_PED_ID(), XPos, YPos, ZPos,
			XOff, YOff, ZOff, SKEL_Head, 1, 1, 1, 1);
		LoopFeatures::TimePD = timeGetTime();
	}
	STREAMING::REMOVE_PTFX_ASSET();
}


void LoopFeatures::RequestControlOfid(Entity netid)
{
	int tick = 0;

	while (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(netid) && tick <= 25)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(netid);
		tick++;
	}
}

bool LoopFeatures::BulletProof = false;
void LoopFeatures::bulletproof(bool toggle)
{
	Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(playerVeh, !toggle);
}

bool LoopFeatures::PropShoot = false;
void LoopFeatures::propshoot(bool toggle)
{

	int PedHandle = playerPedId, ObjectHash = GAMEPLAY::GET_HASH_KEY("adder");

	float Coords[3];

	Vector3 Pos;


	if (PED::IS_PED_SHOOTING(PedHandle))

	{

		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &Pos))
		{
			int ObjectHandle = OBJECT::CREATE_OBJECT(ObjectHash, Pos.x, Pos.y, Pos.z, 1, 0, 1);

			ENTITY::FREEZE_ENTITY_POSITION(ObjectHandle, 1);

			RequestControlOfEnt(ObjectHandle);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(ObjectHandle, 300.0);
		}


	}

}

bool LoopFeatures::CarWeapons = false;
void LoopFeatures::carweapons(bool toggle)
{
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	if (GetAsyncKeyState(VK_KEY_S) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x -= xVec, pos.y -= yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_W) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		float xVec = fivef * sin(degToRad(heading)) * -1.0f;
		float yVec = fivef * cos(degToRad(heading));
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.x += xVec, pos.y += yVec;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_KEY_A) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading + 0.5f);
	}
	if (GetAsyncKeyState(VK_KEY_D) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
		float fivef = .5f;
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading - 0.5f);
	}
	if (GetAsyncKeyState(VK_SHIFT)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z -= 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
	if (GetAsyncKeyState(VK_SPACE)) {
		float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
		ENTITY::SET_ENTITY_HEADING(playerPed, heading);

		pos.z += 0.5;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
	}
}

bool LoopFeatures::Superjump = false;
void LoopFeatures::superjump(bool toggle)
{
	GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
}
bool LoopFeatures::InfiniteAmmo = false;
void LoopFeatures::infiniteammo(bool toggle)
{
	Hash cur;
	if (WEAPON::GET_CURRENT_PED_WEAPON(playerPedId, &cur, 1))
	{
		if (WEAPON::IS_WEAPON_VALID(cur))
		{
			int maxAmmo;
			if (WEAPON::GET_MAX_AMMO(playerPedId, cur, &maxAmmo))
			{
				WEAPON::SET_PED_AMMO(playerPedId, cur, maxAmmo);

				maxAmmo = WEAPON::GET_MAX_AMMO_IN_CLIP(playerPedId, cur, 1);
				if (maxAmmo > 0)
					WEAPON::SET_AMMO_IN_CLIP(playerPedId, cur, maxAmmo);
			}
		}
	}
}

bool LoopFeatures::SuperRun = false;
void LoopFeatures::Superun(bool toggle)
{
	if (IsKeyPressed('W'))
	{
		Ped ped = PLAYER::PLAYER_PED_ID();
		Vector3 offset = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ped, 0, 0.6, 0);
		ENTITY::APPLY_FORCE_TO_ENTITY(ped, 1, 0.0f, 1.3, 0, 0.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.59);

	}
}

bool LoopFeatures::expammo = false;
void LoopFeatures::Expammos(bool toggle) {
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vector3 pos;
	if (expammo)
	{
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &pos))
		{
			FIRE::ADD_OWNED_EXPLOSION(playerPed, pos.x, pos.y, pos.z, 16, 100, true, false, .25);
		}
	}
	else return;
}

bool LoopFeatures::FreezeP = false;
void LoopFeatures::freezeP(bool oggle)
{
	Hooking::defuseEvent(RockstarEvent::NETWORK_CLEAR_PED_TASKS_EVENT, FreezeP);
}

bool LoopFeatures::AttachP = false;
void LoopFeatures::attachP(bool toggle)
{

	char* objects[136] = { "prop_bskball_01", "PROP_MP_RAMP_03", "PROP_MP_RAMP_02", "PROP_MP_RAMP_01", "PROP_JETSKI_RAMP_01", "PROP_WATER_RAMP_03", "PROP_VEND_SNAK_01", "PROP_TRI_START_BANNER", "PROP_TRI_FINISH_BANNER", "PROP_TEMP_BLOCK_BLOCKER", "PROP_SLUICEGATEL", "PROP_SKIP_08A", "PROP_SAM_01", "PROP_RUB_CONT_01B", "PROP_ROADCONE01A", "PROP_MP_ARROW_BARRIER_01", "PROP_HOTEL_CLOCK_01", "PROP_LIFEBLURB_02", "PROP_COFFIN_02B", "PROP_MP_NUM_1", "PROP_MP_NUM_2", "PROP_MP_NUM_3", "PROP_MP_NUM_4", "PROP_MP_NUM_5", "PROP_MP_NUM_6", "PROP_MP_NUM_7", "PROP_MP_NUM_8", "PROP_MP_NUM_9", "prop_xmas_tree_int", "prop_bumper_car_01", "prop_beer_neon_01", "prop_space_rifle", "prop_dummy_01", "prop_rub_trolley01a", "prop_wheelchair_01_s", "PROP_CS_KATANA_01", "PROP_CS_DILDO_01", "prop_armchair_01", "prop_bin_04a", "prop_chair_01a", "prop_dog_cage_01", "prop_dummy_plane", "prop_golf_bag_01", "prop_arcade_01", "hei_prop_heist_emp", "prop_alien_egg_01", "prop_air_towbar_01", "hei_prop_heist_tug", "prop_air_luggtrolley", "PROP_CUP_SAUCER_01", "prop_wheelchair_01", "prop_ld_toilet_01", "prop_acc_guitar_01", "prop_bank_vaultdoor", "p_v_43_safe_s", "p_spinning_anus_s", "prop_can_canoe", "prop_air_woodsteps", "Prop_weed_01", "prop_a_trailer_door_01", "prop_apple_box_01", "prop_air_fueltrail1", "prop_barrel_02a", "prop_barrel_float_1", "prop_barrier_wat_03b", "prop_air_fueltrail2", "prop_air_propeller01", "prop_windmill_01", "prop_Ld_ferris_wheel", "p_tram_crash_s", "p_oil_slick_01", "p_ld_stinger_s", "p_ld_soc_ball_01", "prop_juicestand", "p_oil_pjack_01_s", "prop_barbell_01", "prop_barbell_100kg", "p_parachute1_s", "p_cablecar_s", "prop_beach_fire", "prop_lev_des_barge_02", "prop_lev_des_barge_01", "prop_a_base_bars_01", "prop_beach_bars_01", "prop_air_bigradar", "prop_weed_pallet", "prop_artifact_01", "prop_attache_case_01", "prop_large_gold", "prop_roller_car_01", "prop_water_corpse_01", "prop_water_corpse_02", "prop_dummy_01", "prop_atm_01", "hei_prop_carrier_docklight_01", "hei_prop_carrier_liferafts", "hei_prop_carrier_ord_03", "hei_prop_carrier_defense_02", "hei_prop_carrier_defense_01", "hei_prop_carrier_radar_1", "hei_prop_carrier_radar_2", "hei_prop_hei_bust_01", "hei_prop_wall_alarm_on", "hei_prop_wall_light_10a_cr", "prop_afsign_amun", "prop_afsign_vbike", "prop_aircon_l_01", "prop_aircon_l_02", "prop_aircon_l_03", "prop_aircon_l_04", "prop_airhockey_01", "prop_air_bagloader", "prop_air_blastfence_01", "prop_air_blastfence_02", "prop_air_cargo_01a", "prop_air_chock_01", "prop_air_chock_03", "prop_air_gasbogey_01", "prop_air_generator_03", "prop_air_stair_02", "prop_amb_40oz_02", "prop_amb_40oz_03", "prop_amb_beer_bottle", "prop_amb_donut", "prop_amb_handbag_01", "prop_amp_01", "prop_anim_cash_pile_02", "prop_asteroid_01", "prop_arm_wrestle_01", "prop_ballistic_shield", "prop_bank_shutter", "prop_barier_conc_02b", "prop_barier_conc_05a", "prop_barrel_01a", "prop_bar_stool_01", "prop_basejump_target_01" };


	for (int i = 0; i < 5; i++) {
		Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_PED_ID()), 1);
		GAMEPLAY::CLEAR_AREA_OF_PEDS(coords.x, coords.y, coords.z, 2, 0);
		GAMEPLAY::CLEAR_AREA_OF_OBJECTS(coords.x, coords.y, coords.z, 2, 0);
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(coords.x, coords.y, coords.z, 2, 0, 0, 0, 0, 0);
		for (int i = 0; i < 136; i++) {
			Object obj = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(coords.x, coords.y, coords.z, 4.0, GAMEPLAY::GET_HASH_KEY(objects[i]), 0, 0, 1);

			if (ENTITY::DOES_ENTITY_EXIST(obj) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obj, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_PED_ID()))) {
				RequestControlOfEnt(obj);
				int netID = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(obj);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(netID, 1);
				LoopFeatures::RequestControlOfid(netID);
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

bool LoopFeatures::ExsplodeP = false;
void LoopFeatures::exsplodeP(bool toggle)
{
	Hooking::defuseEvent(RockstarEvent::FIRE_EVENT, ExsplodeP);
	Hooking::defuseEvent(RockstarEvent::EXPLOSION_EVENT, ExsplodeP);
	Hooking::defuseEvent(RockstarEvent::START_PROJECTILE_EVENT, ExsplodeP);
	Hooking::defuseEvent(RockstarEvent::BLOW_UP_VEHICLE_EVENT, ExsplodeP);
}

bool LoopFeatures::VehicleGun1 = false;
void LoopFeatures::vehicleGun1(bool toggle) {
	Ped playerPed = PLAYER::PLAYER_PED_ID();
	Vector3 coords;
	if (expammo)
	{
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
		{
			Vehicle veh = VEHICLE::CREATE_VEHICLE(GAMEPLAY::GET_HASH_KEY("Adder"), coords.x, coords.y, coords.z, 1.0f, true, true);
		}
	}
}

bool LoopFeatures::Particles = false;
void LoopFeatures::particles(bool toggle)
{

}

bool LoopFeatures::FreezeTime = false;
void LoopFeatures::freezetime(bool toggle)
{

}

bool LoopFeatures::MoneyGun = false;
void LoopFeatures::moneygun(bool toggle)
{
	int player = PLAYER::PLAYER_ID();
	int playerPed = PLAYER::PLAYER_PED_ID();

	for (int i = 0; i < 32; i++)
	{
		if (i != player)
		{
			if (GetAsyncKeyState(VK_RBUTTON))
			{
				Ped targetPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				Vector3 targetPos = ENTITY::GET_ENTITY_COORDS(targetPed, 1);
				BOOL exists = ENTITY::DOES_ENTITY_EXIST(targetPed);
				BOOL dead = PLAYER::IS_PLAYER_DEAD(targetPed);

				if (exists && !dead)
				{
					float screenX, screenY;
					BOOL onScreen = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(targetPos.x, targetPos.y, targetPos.z, &screenX, &screenY);
					if (ENTITY::IS_ENTITY_VISIBLE(targetPed) && onScreen)
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, targetPed, 17))
						{
							Vector3 targetCoords = PED::GET_PED_BONE_COORDS(targetPed, 31086, 0, 0, 0);
							PED::SET_PED_SHOOTS_AT_COORD(playerPed, targetCoords.x, targetCoords.y, targetCoords.z, 1);

						}
					}
				}
			}
		}
	}
}

bool LoopFeatures::FireAmmo = false;
void LoopFeatures::fireammo(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 3, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 3, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::RapidFire = false;
void LoopFeatures::rapidfire(bool toggle)
{
	Player playerPed = playerPedId;
	if (!PED::IS_PED_IN_ANY_VEHICLE(playerPedId, 1)) {
		PLAYER::DISABLE_PLAYER_FIRING(playerPedId, 1);
		Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
		Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
		Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
		Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 1.0f)));
		Vector3 endCoords = addVector(startCoords, multiplyVector(gameplayCamDirection, 500.0f));
		Hash weaponhash;
		WEAPON::GET_CURRENT_PED_WEAPON(playerPed, &weaponhash, 1);
		if (CONTROLS::IS_CONTROL_PRESSED(2, 208) || (GetKeyState(VK_LBUTTON) & 0x8000)) {
			PED::SET_PED_SHOOTS_AT_COORD(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::GET_PLAYER_INDEX()), endCoords.x, endCoords.y, endCoords.z, true);
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(startCoords.x, startCoords.y, startCoords.z, endCoords.x, endCoords.y, endCoords.z, 50, 1, weaponhash, playerPed, 1, 1, 0xbf800000);
		}
	}
}

bool LoopFeatures::FlyCar = false;
void LoopFeatures::flycar(bool toggle)
{


}

bool LoopFeatures::TPGun = false;
void LoopFeatures::tpgun(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			ENTITY::SET_ENTITY_COORDS(playerPedId, coords.x, coords.y, coords.z, 0, 0, 0, 1);
		}
	}
}

bool LoopFeatures::ExplosiveAmmo = false;
void LoopFeatures::explosiveammo(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 5, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 5, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::Valk = false;
void LoopFeatures::valk(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 38, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 38, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::StickyBomb = false;
void LoopFeatures::stickyBomb(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 2, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 2, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::Flare = false;
void LoopFeatures::flare(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 22, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 22, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::HiOctane = false;
void LoopFeatures::hiOctane(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 6, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 6, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::Firework = false;
void LoopFeatures::firework(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 35, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 35, 1000, true, false, .1);
		}
	}
}

bool LoopFeatures::Blimp = false;
void LoopFeatures::blimp(bool toggle)
{
	if (PED::IS_PED_SHOOTING(playerPedId))
	{
		Vector3 coords;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPedId, &coords))
		{
			GAMEPLAY::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 29, 1000, true, false, .1);
			FIRE::ADD_OWNED_EXPLOSION(playerPedId, coords.x, coords.y, coords.z, 5, 1000, true, false, .1);
		}
	}
}


bool LoopFeatures::ExplosiveMelee = false;
void LoopFeatures::explosivemelee(bool toggle)
{
	GAMEPLAY::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
}

bool LoopFeatures::SpectatePlayer[32] = { false };
void LoopFeatures::spectateplayer(bool toggle)
{
	NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(!toggle, PLAYER::GET_PLAYER_PED(selectedPlayer));
}

bool LoopFeatures::Neverwanted = false;
void LoopFeatures::neverwanted(bool toggle)
{
	Menu::Settings::wantedlevel.r = 0;
	Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, 0);
	//PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
// Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, 0); That is a Memory Feature when you find the new hash for the never wanted offset change it in Structs.h!!

bool LoopFeatures::GodmodeVeh = false;
void LoopFeatures::godmodeveh(bool toggle)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(playerPedId, false))
	{
		if (toggle == true)

			Memory::set_value<bool>({ OFFSET_ENTITY_GOD }, 1);
		else
			Memory::set_value<bool>({ OFFSET_ENTITY_GOD }, 0);
	}
}

bool LoopFeatures::MoneyRain = false;
void LoopFeatures::moneyrain(bool toggle)
{
	for (int i = 0; i < 32; ++i) 
	{

		Ped iPed = PLAYER::PLAYER_PED_ID();

		int amount1 = 2000;

		if ((timeGetTime() - LoopFeatures::TimePD1) > 1000) // Time between drops
		{
			STREAMING::REQUEST_MODEL(PROP_MONEY_BAG_01);
			if (!STREAMING::HAS_MODEL_LOADED(PROP_MONEY_BAG_01)) {
				WAIT(0);
			}
			else {
				Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
				OBJECT::CREATE_AMBIENT_PICKUP(PICKUP_MONEY_CASE, playerPosition.x, playerPosition.y, playerPosition.z + 0.5f, 0, amount1, PROP_MONEY_BAG_01, FALSE, TRUE);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(PROP_MONEY_BAG_01);

				LoopFeatures::TimePD1 = timeGetTime();

			}
		}
	}
}

bool LoopFeatures::ESP = false;
void LoopFeatures::esp(Player target)
{
	if (target != PLAYER::PLAYER_ID() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target)))
	{
		Vector3 entitylocation = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target), false);
		Vector3 top1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 bottom1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };

		Vector3 locationOne = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target), false);
		Vector3 locationTwo = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		GRAPHICS::DRAW_LINE(locationOne.x, locationOne.y, locationOne.z, locationTwo.x, locationTwo.y, locationTwo.z, 255, 0, 0, 255);
	}
}


bool LoopFeatures::ESPBox = false;
void LoopFeatures::espbox(Player target)
{
	std::string PlayerNameESP = PLAYER::GET_PLAYER_NAME(selectedPlayer);

	if (target != PLAYER::PLAYER_ID() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target)))
	{
		Vector3 entitylocation = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target), false);
		Vector3 top1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 bottom1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };


		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, top2world.x, top2world.y, top2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top2world.x, top2world.y, top2world.z, top4world.x, top4world.y, top4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top4world.x, top4world.y, top4world.z, top3world.x, top3world.y, top3world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, top3world.x, top3world.y, top3world.z, 255, 0, 0, 255);

		GRAPHICS::DRAW_LINE(bottom1world.x, bottom1world.y, bottom1world.z, bottom2world.x, bottom2world.y, bottom2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom2world.x, bottom2world.y, bottom2world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom3world.x, bottom3world.y, bottom3world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom3world.x, bottom3world.y, bottom3world.z, bottom1world.x, bottom1world.y, bottom1world.z, 255, 0, 0, 255);

		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, bottom1world.x, bottom1world.y, bottom1world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top2world.x, top2world.y, top2world.z, bottom2world.x, bottom2world.y, bottom2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top3world.x, top3world.y, top3world.z, bottom3world.x, bottom3world.y, bottom3world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top4world.x, top4world.y, top4world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);


		Vector3 locationOne = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target), false);
		Vector3 locationTwo = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);

	}

}

bool LoopFeatures::ESPname = false;
void LoopFeatures::espName(Player target)
{
	if (ESPname)
	{

		Player playerPed = PLAYER::PLAYER_PED_ID();

		for (int i = 0; i < 32; i++)
		{
			Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
			Vector3 handleCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerHandle, 0, 0, 0);
			Vector3 playerCoords = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
			const char* Name = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

			if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
			{
				float x1;
				float y1;

				BOOL screenCoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(handleCoords.x, handleCoords.y, handleCoords.z + 0.90f, &x1, &y1);

				std::string playerName = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

				std::string nameSetupRed = "~HUD_COLOUR_RED~" + playerName;
				std::string nameSetupGreen = "~HUD_COLOUR_GREEN~" + playerName;

				char* playerInfoRed = new char[nameSetupRed.length() + 1];
				char* playerInfoGreen = new char[nameSetupGreen.length() + 1];

				std::strcpy(playerInfoRed, nameSetupRed.c_str());
				std::strcpy(playerInfoGreen, nameSetupGreen.c_str());

				UI::SET_TEXT_FONT(4);
				UI::SET_TEXT_SCALE(0.0, 0.40);
				UI::SET_TEXT_COLOUR(0, 255, 0, 225);
				UI::SET_TEXT_CENTRE(0);
				UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
				UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, playerHandle, 17))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoGreen);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoRed);
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(x1, y1);
				UI::SET_TEXT_OUTLINE();
				UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
			}
		}
	}
}

bool LoopFeatures::ESPs = false;
void LoopFeatures::esps(Player player)
{
	if (player != PLAYER::PLAYER_ID() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player)))
	{
		Vector3 entitylocation = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player), false);
		Vector3 top1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 bottom1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };

		Vector3 locationOne = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player), false);
		Vector3 locationTwo = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		GRAPHICS::DRAW_LINE(locationOne.x, locationOne.y, locationOne.z, locationTwo.x, locationTwo.y, locationTwo.z, 255, 0, 0, 255);
	}
}


bool LoopFeatures::ESPBoxs = false;
void LoopFeatures::espboxs(Player player)
{
	std::string PlayerNameESP = PLAYER::GET_PLAYER_NAME(selectedPlayer);

	if (player != PLAYER::PLAYER_ID() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player)))
	{
		Vector3 entitylocation = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player), false);
		Vector3 top1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 top4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z + .8f, NULL };
		Vector3 bottom1world = { entitylocation.x + 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom2world = { entitylocation.x - 0.3f, NULL, entitylocation.y + 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom3world = { entitylocation.x + 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };
		Vector3 bottom4world = { entitylocation.x - 0.3f, NULL, entitylocation.y - 0.3f, NULL, entitylocation.z - .8f, NULL };


		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, top2world.x, top2world.y, top2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top2world.x, top2world.y, top2world.z, top4world.x, top4world.y, top4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top4world.x, top4world.y, top4world.z, top3world.x, top3world.y, top3world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, top3world.x, top3world.y, top3world.z, 255, 0, 0, 255);

		GRAPHICS::DRAW_LINE(bottom1world.x, bottom1world.y, bottom1world.z, bottom2world.x, bottom2world.y, bottom2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom2world.x, bottom2world.y, bottom2world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom3world.x, bottom3world.y, bottom3world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(bottom3world.x, bottom3world.y, bottom3world.z, bottom1world.x, bottom1world.y, bottom1world.z, 255, 0, 0, 255);

		GRAPHICS::DRAW_LINE(top1world.x, top1world.y, top1world.z, bottom1world.x, bottom1world.y, bottom1world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top2world.x, top2world.y, top2world.z, bottom2world.x, bottom2world.y, bottom2world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top3world.x, top3world.y, top3world.z, bottom3world.x, bottom3world.y, bottom3world.z, 255, 0, 0, 255);
		GRAPHICS::DRAW_LINE(top4world.x, top4world.y, top4world.z, bottom4world.x, bottom4world.y, bottom4world.z, 255, 0, 0, 255);


		Vector3 locationOne = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player), false);
		Vector3 locationTwo = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);

	}

}

bool LoopFeatures::ESPnames = false;
void LoopFeatures::espNames(Player player)
{
	if (ESPname)
	{

		Player playerPed = PLAYER::PLAYER_PED_ID();

		for (int i = 0; i < 32; i++)
		{
			Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
			Vector3 handleCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerHandle, 0, 0, 0);
			Vector3 playerCoords = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
			const char* Name = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

			if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
			{
				float x1;
				float y1;

				BOOL screenCoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(handleCoords.x, handleCoords.y, handleCoords.z + 0.90f, &x1, &y1);

				std::string playerName = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

				std::string nameSetupRed = "~HUD_COLOUR_RED~" + playerName;
				std::string nameSetupGreen = "~HUD_COLOUR_GREEN~" + playerName;

				char* playerInfoRed = new char[nameSetupRed.length() + 1];
				char* playerInfoGreen = new char[nameSetupGreen.length() + 1];

				std::strcpy(playerInfoRed, nameSetupRed.c_str());
				std::strcpy(playerInfoGreen, nameSetupGreen.c_str());

				UI::SET_TEXT_FONT(4);
				UI::SET_TEXT_SCALE(0.0, 0.40);
				UI::SET_TEXT_COLOUR(0, 255, 0, 225);
				UI::SET_TEXT_CENTRE(0);
				UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
				UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, playerHandle, 17))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoGreen);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoRed);
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(x1, y1);
				UI::SET_TEXT_OUTLINE();
				UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
			}
		}
	}
}


bool LoopFeatures::DeleteGun = false;
void LoopFeatures::deletegun(bool toggle)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_ANY_PED_SHOOTING_IN_AREA)
	{
		Vector3 iCoord;
		if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &iCoord))
		{
			GAMEPLAY::_CLEAR_AREA_OF_EVERYTHING(iCoord.x, iCoord.y, iCoord.z, 2, 0, 0, 0, 0);
		}
	}
}

bool LoopFeatures::Loop2K = false;
void LoopFeatures::loop2k(bool toggle)
{
	Vector3 pos = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED(selectedPlayer), 0.0, 0.0, 2.0);
	OBJECT::CREATE_AMBIENT_PICKUP(GAMEPLAY::GET_HASH_KEY("PICKUP_MONEY_VARIABLE"), pos.x, pos.y, pos.z, 0, 2000, 1, false, true);
}

bool LoopFeatures::SelfLoop2K = false;
void LoopFeatures::selfloop2k(bool toggle)
{
	Vector3 pos = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPedId, 0.0, 0.0, 2.0);
	OBJECT::CREATE_AMBIENT_PICKUP(GAMEPLAY::GET_HASH_KEY("PICKUP_MONEY_CASE"), pos.x, pos.y, pos.z, 0, 2500, 1, false, true);
}

bool LoopFeatures::HornBoost = false;
void LoopFeatures::hornboost(bool toggle) {
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
	{
		Vehicle Veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), false);
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Veh);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Veh))
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Veh, Menu::Settings::hornpower);
		}
	}
}

bool LoopFeatures::Rainbowcar = false;
void LoopFeatures::rainbowcar(bool toggle)
{
	Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPedId);

	int Red = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Green = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Blue = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255);

	VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(playerVeh, Red, Green, Blue);

	VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(playerVeh, Red, Green, Blue);
}

int Red = 1,

Green = 50,

Blue = 100;

bool LoopFeatures::SmoothRainbowcar = false;
void LoopFeatures::Smoothrainbowcar(bool toggle)
{
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), SmoothRainbowcar);

}

bool LoopFeatures::rainbowmenu = false;
void LoopFeatures::Rainbowmenu(bool toggle)
{
	if (Menu::Settings::titleRect.r > 0 && Menu::Settings::titleRect.b == 0, Menu::Settings::scroller.r > 0 && Menu::Settings::scroller.b == 0)
	{
		Menu::Settings::titleRect.r--;
		Menu::Settings::titleRect.g++;
		Menu::Settings::scroller.r--;
		Menu::Settings::scroller.g++;
	}
	if (Menu::Settings::titleRect.g > 0 && Menu::Settings::titleRect.r == 0, Menu::Settings::scroller.g > 0 && Menu::Settings::scroller.r == 0)
	{
		Menu::Settings::titleRect.g--;
		Menu::Settings::titleRect.b++;
		Menu::Settings::scroller.g--;
		Menu::Settings::scroller.b++;
	}
	if (Menu::Settings::titleRect.b > 0 && Menu::Settings::titleRect.g == 0, Menu::Settings::scroller.b > 0 && Menu::Settings::scroller.g == 0)
	{
		Menu::Settings::titleRect.r++;
		Menu::Settings::titleRect.b--;
		Menu::Settings::scroller.r++;
		Menu::Settings::scroller.b--;
	}
	(Menu::Settings::titleRect.r, Menu::Settings::titleRect.g, Menu::Settings::titleRect.b);
	(Menu::Settings::scroller.r, Menu::Settings::scroller.g, Menu::Settings::scroller.b);
}



bool LoopFeatures::ExplodeNearbyVehicles = false;
void LoopFeatures::explodeNearbyVehicles(bool toggle)
{

	int Red = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Green = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Blue = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255);

	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;
	Vehicle veh[arrSize];
	veh[0] = numElements;
	int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
	if (veh != NULL)
	{
		for (int i = 1; i <= count; i++)
		{
			int offsettedID = i;
			if (veh[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[offsettedID]))
			{

				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh[offsettedID], Red, Green, Blue);

				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veh[offsettedID], Red, Green, Blue);
			}
		}
	}
}

bool LoopFeatures::RainbowPedCars = false;
void LoopFeatures::rainbowPedCars(bool toggle)
{

	int Red = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Green = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255),

		Blue = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255);

	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;
	int vehs[arrSize];
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehs[arrSize], Red, Green, Blue);

		VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehs[arrSize], Red, Green, Blue);
	}

}

bool LoopFeatures::FlyPedCars = false;
void LoopFeatures::flypedcars(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;
	Vehicle veh[arrSize];
	veh[0] = numElements;
	int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
	if (veh != NULL)
	{
		for (int i = 1; i <= count; i++)
		{
			int offsettedID = i;
			if (veh[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[offsettedID]))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(veh[offsettedID], 1, 9, 9, 0, 0, 0, 0, 1, true, true, true, true, true);
			}
		}
	}
}




bool LoopFeatures::ExVeh = false;
void LoopFeatures::exVeh(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;  //Start at index 2, and the odd elements are padding
	int vehs[arrSize];
	//0 index is the size of the array
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		int offsettedID = i * 2 + 2;
		if (ENTITY::DOES_ENTITY_EXIST(vehs[offsettedID]))
		{
			if ((vehs[offsettedID]) == PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0)) continue;
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehs[offsettedID]) > 1)
				{
					Vector3 nearbyPedPos = ENTITY::GET_ENTITY_COORDS(vehs[offsettedID], 0);
					FIRE::ADD_EXPLOSION(nearbyPedPos.x, nearbyPedPos.y, nearbyPedPos.z, 2, 1000.f, true, false, true);
					FIRE::ADD_OWNED_EXPLOSION(count, nearbyPedPos.x, nearbyPedPos.y, nearbyPedPos.z, 2, 1000.f, true, false, true);
				}
			}
		}
	}
}

bool LoopFeatures::DeleteVeh = false;
void LoopFeatures::deleteVeh(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;  //Start at index 2, and the odd elements are padding
	int vehs[arrSize];
	//0 index is the size of the array
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		int offsettedID = i * 2 + 2;
		if (ENTITY::DOES_ENTITY_EXIST(vehs[offsettedID]))
		{
			if ((vehs[offsettedID]) == PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0)) continue;
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehs[offsettedID]) > 1)
				{
					RequestControlOfEnt(vehs[offsettedID]);
					ENTITY::SET_ENTITY_COORDS(vehs[offsettedID], 6400.f, 6400.f, 0.f, false, false, false, false);
				}
			}
		}
	}
}

bool LoopFeatures::HornVeh = false;
void LoopFeatures::hornVeh(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;  //Start at index 2, and the odd elements are padding
	int vehs[arrSize];
	//0 index is the size of the array
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		int offsettedID = i * 2 + 2;
		if (ENTITY::DOES_ENTITY_EXIST(vehs[offsettedID]))
		{
			if ((vehs[offsettedID]) == PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0)) continue;
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehs[offsettedID]) > 1)
				{
					RequestControlOfEnt(vehs[offsettedID]);
					VEHICLE::START_VEHICLE_HORN(vehs[offsettedID], 5000, AUDIO::_GET_VEHICLE_HORN_HASH(vehs[offsettedID]), true);
				}
			}
		}
	}
}

bool LoopFeatures::FixVeh = false;
void LoopFeatures::fixVeh(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;  //Start at index 2, and the odd elements are padding
	int vehs[arrSize];
	//0 index is the size of the array
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		int offsettedID = i * 2 + 2;
		if ((vehs[offsettedID]) == PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0)) continue;
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehs[offsettedID]) > 1)
			{
				VEHICLE::SET_VEHICLE_FIXED(vehs[offsettedID]);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(vehs[offsettedID]);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(vehs[offsettedID], 0);
			}
		}
	}
}

bool LoopFeatures::BurstVeh = false;
void LoopFeatures::burstVeh(bool toggle)
{
	const int numElements = 10;
	const int arrSize = numElements * 2 + 2;  //Start at index 2, and the odd elements are padding
	int vehs[arrSize];
	//0 index is the size of the array
	vehs[0] = numElements;

	int count = PED::GET_PED_NEARBY_VEHICLES(playerPedId, vehs);
	for (int i = 0; i < count; ++i)
	{
		int offsettedID = i * 2 + 2;
		if (ENTITY::DOES_ENTITY_EXIST(vehs[offsettedID]))
		{
			if ((vehs[offsettedID]) == PED::GET_VEHICLE_PED_IS_IN(playerPedId, 0)) continue;
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehs[offsettedID]) > 1)
				{
					RequestControlOfEnt(vehs[offsettedID]);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(vehs[offsettedID], TRUE);
					for (int i = 8; i--;) {
						VEHICLE::SET_VEHICLE_TYRE_BURST(vehs[offsettedID], i, TRUE, 1000.f);
					}
				}
			}
		}
	}
}

bool LoopFeatures::EventShield = false;
void LoopFeatures::eventShield(bool toggle)
{
	globalHandle(1386431).At(591).As<int>() = 591; //Freemode
	globalHandle(1386431).At(506).As<int>() = 506; //Freemode
	globalHandle(1386431).At(33).As<int>() = 33; //Freemode
	globalHandle(1386431).At(63).As<int>() = 63; //Freemode

	globalHandle(1386431).At(506).As<int>() = 506; //Infinite Loading

	globalHandle(1386431).At(33).As<int>() = 33; //Sound Spam


}







