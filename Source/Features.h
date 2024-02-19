namespace Features {


	void PTFXCALL(char *call1, char *call2, char *name);
	void PTFXCALLO(char *call1, char *call2, char *name, Ped target);
	extern int reamount;
	extern int Levels[8000];
	extern int attachobj[100];
	extern int nuattach;
	extern int TimePD;
	extern int TimePD1;
	extern int TimePD2;
	extern int TimePD3;
	extern int TimePD4;
	extern int TimePD5;
	extern int TimePD6;
	extern int TimePD7;
	extern int TimePD8;

	extern bool StealthLooptoggler[35];
	void StealthLoopre(Player player);

	void deposit(long amount);
	void withdraw(long amount);
	void teleporttocoords(Player player, Vector3 target);
	void animatePlayer(Player target, char* dict, char* anim);
	void clearanimateallPlayer();
	void teleportallcoordsns(Vector3 target);
	void teleportallcoords(Vector3 target);
	void RequestControlOfid(Entity netid);
	void RequestControlOfid(DWORD netid);
	void RequestingControl(Entity e);
	void doAnimation(char* anim, char* animid);
	void animateallPlayer(char* dict, char* anim);
	void RemovedWanted();
	void spawn_vehicle(char* toSpawn);
	void spawn_plrvehicle(char* toSpawn);
	void trapcage(Ped ped);
	void bigtrapcage(Ped ped);
	void attachobjects2(char* object);
	void spawnobj(char* object);
	void SetRank(int rpvalue);
	void Create_Object(char* ObjectName, Vector3 Coordinates);
	void vOnline3Stars(Entity entity);
	void ClonePedVehicle(Ped ped);
	void SpawnVehicle(Hash hash);
	void SpawnPlrVehicle(Hash hash, int selectedPlayer);
	void set_vehicle_max_upgrades(Vehicle vehicle, bool upgradeIt, bool invincible, INT8 plateType, std::string plateText, bool neonIt, UINT8 NeonR, UINT8 NeonG, UINT8 NeonB, INT16 prim_col_index, INT16 sec_col_index);
	void change_plate(Vehicle vehicle, INT8 plateType, std::string plateText);
	void Freeze(Ped selectedPlayer);
	int GET_FREE_SEAT(int VehicleHandle);
	void TeleportIntoPlayersCar(int selectedPlayer);
	void kickPlayerFromVeh(Ped selectedPlayer);
	void tracer();
	void massSuicide();
	void killAllBounties();
	void StickyBomb();
	void CageAll();
	void Valk();
	void Firework();
	void Flare();
	void Blimp();
	void HiOctane();
	void StickyBomb();
	Void Mole();
	void changeModel(char* Model);
	void killNearbyPeds();
	void ApplyForceToEntity(Player ped_id, int x, int y, int z);
	void TPto(Vector3 Coords);
	void Male();
	void Female();
	void Drunk();
	void Fatass();
	void Business();
	void Hiker();
	void Running();
	void Limp();

}