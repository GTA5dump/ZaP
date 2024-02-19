#pragma once

namespace LoopFeatures {

	void UpdateLoop();

	extern int TimePD1;
	extern int Dropmoneyvalue;
	extern int TimePD;
	extern int Dropfreqvalue;

	extern bool PTLoopedO[35];
	void PTLopperO(Player target);

	extern bool isKickToSPProtex;
	extern bool isKickToFMProtex;
	extern bool PTLooped;
	void PTLopper();

	extern bool TinyPlayer;
	void tinyplayer(bool toggle);

	extern bool Godmode;
	void godmode(bool toggle);

	extern bool Moneylobby;
	void moneylobby(bool toggle);

	extern bool SpawnInVehicle;
	void spawninvehicle(bool toggle);

	extern bool SpawnMaxedVehicle;
	void spawnmaxedvehicle(bool toggle);

	extern bool AirstrikeGun;
	void airstrikeGun(bool toggle);

	extern bool Freeze;
	void freeze(bool toggle);

	extern bool SuperRun;
	void Superun(bool toggle);

	extern bool NoClip;
	void noClip(bool toggle);

	extern bool KeyNote;
	void keyNote(bool toggle);

	extern bool SpawnGodVehicle;
	void spawngodvehicle(bool toggle);

	extern bool Ghostmode;
	void ghostmode(bool toggle);

	extern bool GravityGun;
	void gravityGun(bool toggle);

	extern int amount;
	extern bool banked;
	extern bool giver;
	void StealthDropinte(bool toggle);

	extern bool LightningStrike;
	void lightningStrike(bool toggle);

	extern bool DriveWater;
	void driveWater(bool toggle);

	extern bool FreeCam;
	void freeCam(bool toggle);

	extern bool NoPhone;
	void nophone(bool toggle);

	void DropCashLobby(Ped playerPed);

	bool isPlayerFriend(Player player, BOOL result);

	void LoadPlayerInfo(char* playerName, Player p);

	extern bool Superjump;
	void superjump(bool toggle);

	extern bool Particles;
	void particles(bool toggle);

	extern bool InfiniteAmmo;
	void infiniteammo(bool toggle);

	extern bool expammo;
	void Expammos(bool toggle);

	extern bool VehicleGun1;
	void vehicleGun1(bool toggle);

	extern bool FreezeP;
	void freezeP(bool toggle);

	extern bool EventShield;
	void eventShield(bool toggle);

	extern bool AttachP;
	void attachP(bool toggle);

	extern bool ExsplodeP;
	void exsplodeP(bool toggle);

	void RequestControlOfid(Entity netid);

	extern bool FireAmmo;
	void fireammo(bool toggle);

	extern int amountset;
	extern bool MoneyGun;
	void moneygun(bool toggle);

	extern bool RapidFire;
	void rapidfire(bool toggle);

	extern bool PropShoot;
	void propshoot(bool toggle);

	extern bool ExplosiveAmmo;
	void explosiveammo(bool toggle);

	extern bool TPGun;
	void tpgun(bool toggle);

	extern bool PowerMultiplier;
	void powermultiplier(bool toogle);

	extern bool TorqueMultiplier;
	void torquemultiplier(bool toogle);

	extern bool CarWeapons;
	void carweapons(bool toogle);

	extern bool Neverwanted;
	void neverwanted(bool toggle);

	extern bool Valk;
	void valk(bool toggle);

	extern bool Firework;
	void firework(bool toggle);

	extern bool Flare;
	void flare(bool toggle);

	extern bool Blimp;
	void blimp(bool toggle);

	extern bool HiOctane;
	void hiOctane(bool toggle);

	extern bool StickyBomb;
	void stickyBomb(bool toggle);

	extern bool Meletov;
	void moletov(bool toggle);


	extern bool OfRadar;
	void ofradar(bool toggle);

	extern bool ShakeCam;
	void shakecam(bool toggle);

	extern bool SpectatePlayer[32];
	void spectateplayer(bool toggle);

	extern bool Aimbot;
	void aimbot(bool toggle);

	extern bool GodmodeVeh;
	void godmodeveh(bool toggle);

	extern bool Rainbowcar;
	void rainbowcar(bool toggle);

	extern bool SmoothRainbowcar;
	void Smoothrainbowcar(bool toggle);

	extern bool Loop2K;
	void loop2k(bool toggle);

	extern bool SelfLoop2K;
	void selfloop2k(bool toggle);

	extern bool HornBoost;
	void hornboost(bool toggle);

	extern bool MoneyRain;
	void moneyrain(bool toggle);

	extern bool FreezeTime;
	void freezetime(bool toggle);

	extern bool FlyCar;
	void flycar(bool toggle);

	extern bool FrictionMultiplier;
	void frictionmultiplier(bool toggle);

	extern bool FireLoop;
	void fireloop(bool toggle);

	extern bool ExplosiveMelee;
	void explosivemelee(bool toggle);

	extern bool RainbowGun;
	void rainbowgun(bool toggle);

	extern bool FastRun;
	void fastrun(bool toggle);

	extern bool NoRagdoll;
	void noragdoll(bool toggle);
	

	extern bool ShootCars;
	void shootCars(bool toggle);

	extern bool ShootCars1;
	void shootCars1(bool toggle);
	extern bool ShootCars2;
	void shootCars2(bool toggle);
	extern bool ShootCars3;
	void shootCars(bool toggle);
	extern bool ShootCars3;
	void shootCars3(bool toggle);


	extern bool F7;
	void f7(bool toggle);

	extern bool Fly;
	void fly(bool toggle);

	extern bool FB;
	void fb(bool toggle);

	extern bool OneShotKill;
	void oneshotkill(bool toggle);

	extern bool F4;
	void f4(bool toggle);

	extern bool F5;
	void f5(bool toggle);

	extern bool Tpf7;
	void tpf7(bool toggle);

	extern bool IdleKick;
	void idlekick(bool toggle);

	extern bool BulletProof;
	void bulletproof(bool toggle);

	extern bool rainbowmenu;
	void Rainbowmenu(bool toggle); //xd that's gay

	extern bool ExplodeNearbyVehicles;
	void explodeNearbyVehicles(bool toggle);

	extern bool DeleteGun;
	void deletegun(bool toggle);

	extern bool FlyPedCars;
	void flypedcars(bool toggle); //xd

	extern bool ExVeh;
	void exVeh(bool toggle); 

	extern bool DeleteVeh;
	void deleteVeh(bool toggle);

	extern bool HornVeh;
	void hornVeh(bool toggle);

	extern bool FixVeh;
	void fixVeh(bool toggle);

	extern bool BurstVeh;
	void burstVeh(bool toggle);

	extern bool ArmourDrop;
	void armourDrop(bool toggle);

	extern bool SV;
	void sv(bool toggle);

	extern bool CR;
	void cr(bool toggle);

	extern bool Health;
	void health(bool toggle);

	extern bool rainbowmenu;
	void Rainbowmenu(bool toggle); //xd that's gay

	extern bool RainbowPedCars;
	void rainbowPedCars(bool toggle);

	extern bool ParachuteDrop;
	void parachuteDrop(bool toggle);

	extern bool ESP;
	void esp(Player target);

	extern bool ESPBox;
	void espbox(Player target);

	extern bool ESPname;
	void espName(Player target);

	extern bool ESPnames;
	void espNames(Player player);

	extern bool ESPBoxs;
	void espboxs(Player player);

	extern bool ESPs;
	void esps(Player player);
}



