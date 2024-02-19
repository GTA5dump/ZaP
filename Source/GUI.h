#pragma once

enum SubMenus { //Add Sub Menus in here
	NOMENU,
	mainmenu,
	quick,
	self,
	plist,
	changename,
	plrveh,
	spawnplrveh,
	pmenu,
	plrped,
	modelchanger,
	bodyguards,
	weathermenu,
	vismenu,
	timemenu,
	tpmenu,
	ipl,
	objmenu,
	attatch,
	plrobj,
	protmenu,
	lastobj,
	stealthmoney,
	spawnobj,
	Moneylobby,
	test,
	senas,
	anmenu,
	sessiontime,
	allplrs,
	PTFXO,
	vehacro,
	PTFX,
	lobbyanimation,
	shootveh,
	Esp,
	lobbyweather,
	WB,
	lobbytroll,
	plrweps,
	network,
	weps,
	ptp,
	remoteopt,
	sport,
	emergency,
	motorcycles,
	arenawar,
	sedans,
	coupes,
	boats,
	offroad,
	commercial,
	compacts,
	vans,
	Walkstyles,
	Animations,
	Character,
	Vision,
	animals,
	normal,
	SWAT,
	Cool,
	Fav,
	utility,
	trains,
	trailer,
	service,
	planes,
	helicopters,
	military,
	cycles,
	industrial,
	muscle,
	suv,
	sedan,
	compact,
	sportclassic,
	psport,
	pdlc,
	dlc,
	psuper,
	pemergency,
	pmotorcycles,
	psedans,
	pcoupes,
	pboats,
	poffroad,
	pcommercial,
	pcompacts,
	pvans,
	putility,
	ptrains,
	ptrailer,
	pservice,
	pplanes,
	phelicopters,
	pmilitary,
	pcycles,
	pindustrial,
	pmuscle,
	psuv,
	psedan,
	pcompact,
	psportclassic,
	spawnveh,
	worldmenu,
	watermenu,
	doorsmenu,
	multipliers,
	mobilelsc,
	colors,
	lsc,
	moneyoptions,
	statsoptions,
	rankoptions,
	recovery,
	tunables,
	miscmenu,
	plranimations,
	niceopts,
	abusemenu,
	super,
	spawnoptions,
	vehmenu,
	settings,
	exitgta,
	settingstheme,
	Credits,
	themeloader,
	settingstitlerect,
	settingsscroller,
	settingsoptiontext,
	font,
	hotkeys,
	common,
	protections,
	LobbyESP,
	playersvehicle,
	espsp,
	Scripts,
	tpplayer,
	Cloth,

};
extern enum SubMenus;

typedef struct VECTOR2 {
	float x, y;
};
typedef struct VECTOR2_2 {
	float w, h;
};
typedef struct FVECTOR2
{
	float x;
	float y;
};
typedef struct RGBAF {
	int r, g, b, a, f;
};
typedef struct RGBA {
	int r, g, b, a;
};
typedef struct RGB {
	int r, g, b;
};
namespace Menu {
	const std::string GetModulePath(HMODULE module);
	bool FileExists(const std::string& fileName);
	int RegisterFile(const std::string& fullPath, const std::string& fileName);
	namespace Drawing {
		void DrawSprite(char * textureDict, char * textureName, VECTOR2 pos, VECTOR2 size, float rotation, RGBA color);
		void Text(const char* text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center);
		void Title(const char* text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center);
		void Sprite(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a);
		void Rect(RGBA rgba, VECTOR2 position, VECTOR2_2 size);
		void Spriter(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a);
	}
	namespace Settings {
		extern bool selectPressed;
		extern bool leftPressed;
		extern bool rightPressed;
		extern bool center;
		extern bool controllerinput;

		extern bool BackgroundImage;

		//Mod bools
		extern bool godMode;
		extern bool neverWanted;
		extern bool infAmmo;
		extern bool rapidFire;
		extern bool explosiveAmmo;
		extern bool explosiveMelee;
		extern bool powerMultiplier;
		extern bool torqueMultiplier;

		extern int maxVisOptions;
		extern int currentOption;
		extern int optionCount;

		extern char* spawnVeh;

		extern std::string testveh;

		extern SubMenus currentMenu;
		extern int menuLevel;
		extern int optionsArray[1000];
		extern SubMenus menusArray[1000];

		extern float menuX;
		extern RGBAF count;
		extern RGBAF titleText;
		extern RGBA titleRect;
		extern RGBA Glare;
		extern RGBA ytd;
		extern RGBAF breakText;
		extern RGBAF optionText;
		extern RGBA selectedText;
		extern RGBAF arrow;
		extern RGBAF integre;
		extern RGBA optionRect;
		extern RGBA scroller;
		extern RGBA primarycolor;
		extern RGBA secondarycolor;
		extern RGBA powervalue;
		extern RGBA wantedlevel;
		extern RGBA plralpha;
		extern RGBA FastRun;
		extern RGBA torquevalue;
		extern RGBA frictionvalue;
		extern RGBA accelerationvalue;
		extern RGBA suspentionvalue;
		extern RGBA selectedDoor;
		extern RGBA line;
		extern RGBA primary;
		extern RGBA secondary;

		extern int keyPressDelay;
		extern int keyPressPreviousTick;
		extern int keyPressDelay2;
		extern int keyPressPreviousTick2;
		extern int keyPressDelay3;
		extern int hornpower;
		extern int keyPressPreviousTick3;
		extern int openKey;
		extern int backKey;
		extern int upKey;
		extern int downKey;
		extern int leftKey;
		extern int rightKey;
		extern int selectKey;
		extern int arrowupKey;
		extern int arrowdownKey;
		extern int arrowleftKey;
		extern int arrowrightKey;
		extern int enterKey;
		extern int deleteKey;
		extern int openpress;
		extern int downpress;
		extern int uppress;
		extern int backpress;
		extern int click;
		extern int leftpress;
		extern int rightpress;


	}
	namespace MenuLevelHandler {
		void MoveMenu(SubMenus menu);
		void BackMenu();
	}
	namespace Checks {
		void Controlls();
	}
	namespace Tools {
		char* StringToChar(std::string string);
	}
	namespace Files {
		void WriteStringToIni(std::string string, std::string file, std::string app, std::string key);
		std::string ReadStringFromIni(std::string file, std::string app, std::string key);
		void WriteIntToIni(int intValue, std::string file, std::string app, std::string key);
		int ReadIntFromIni(std::string file, std::string app, std::string key);
		void WriteFloatToIni(float floatValue, std::string file, std::string app, std::string key);
		float ReadFloatFromIni(std::string file, std::string app, std::string key);
		void WriteBoolToIni(bool b00l, std::string file, std::string app, std::string key);
		bool ReadBoolFromIni(std::string file, std::string app, std::string key);
		namespace StyleSaver {
			void SaveStyles();
			void LoadStyles();
		}
	}
	void Title(const char* title);
	void info(const char * title);
	void Vehicle(std::string texture1, std::string texture2);
	void Speedometer(char* text);
	void fps(char* text);
	void AddSmallTitle(char* text);
	void AddSmallInfo(char* text, short line);
	void AddSmallTitle2(char* text);
	void AddSmallInfo2(char* text, short line);
	void AddSmallTitle3(char* text);
	void AddSmallInfo3(char* text, short line);
	bool Break(const char* option);
	bool Option(const char* option);
	bool Option(const char* option, std::function<void()> function);
	bool MenuOption(const char* option, SubMenus newSub);
	bool MenuOption(const char* option, SubMenus newSub, std::function<void()> function);
	void Beg();
	void Beg(const char* option);
	bool Toggle(const char* option, bool& b00l);
	bool Toggle(const char* option, bool& b00l, std::function<void()> function);
	bool BoolOption(const char* option, bool& b00l);
	bool BoolOption(const char* option, bool& b00l, std::function<void()> function);
	bool Int(const char* option, int& _int, int min, int max);
	bool Int(const char* option, int& _int, int min, int max, int step);
	bool Char(const char* text, const char line);
	bool Int(const char* option, int& _int, int min, int max, std::function<void()> function);
	bool Int(const char* option, int& _int, int min, int max, int step, std::function<void()> function);
	bool Float(const char* option, float& _float, int min, int max);
	bool Float(const char* option, float& _float, int min, int max, int step);
	bool Float(const char* option, float& _float, int min, int max, std::function<void()> function);
	bool Float(const char* option, float& _float, int min, int max, int step, std::function<void()> function);
	bool IntVector(const char* option, std::vector<int> Vector, int& position);
	bool IntVector(const char* option, std::vector<int> Vector, int& position, std::function<void()> function);
	bool FloatVector(const char* option, std::vector<float> Vector, int& position);
	bool FloatVector(const char* option, std::vector<float> Vector, int& position, std::function<void()> function);
	bool StringVector(const char* option, std::vector<std::string> Vector, int& position);
	bool StringVector(const char* option, std::vector<std::string> Vector, int& position, std::function<void()> function);
	bool StringVector(const char* option, std::vector<char*> Vector, int& position);
	bool StringVector(const char* option, std::vector<char*> Vector, int& position, std::function<void()> function);
	bool Teleport(const char* option, Vector3 coords);
	bool Teleport(const char* option, Vector3 coords, std::function<void()> function);
	void End();
	bool FileExists(const std::string & fileName);
	const std::string GetModulePath(HMODULE module);
	int RegisterFile(const std::string & fullPath, const std::string & fileName);
}
