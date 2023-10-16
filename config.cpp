#define _ARMA_

class CfgPatches
{
	class division7_weapons_ammo
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"division7_core", "OPTRE_Weapons", "TCF_WEAPONRY", "TCF_MUNITIONS"};
	};
};

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;

class PointerSlot;

class CfgWeapons
{
	class OPTRE_M45A;
	class OPTRE_M90A;
	class OPTRE_M392_DMR;

	class OPTRE_M247H_Etilka;

	class OPTRE_M6B;
	class OPTRE_M6G;
	class OPTRE_M6C;
	class TCF_M6D;

	// Pistols

	class DIV7_OPTRE_M6B : OPTRE_M6B
	{
		baseWeapon = "DIV7_OPTRE_M6B";
		displayName = "[DIV7] M6B";
		magazines[] += {"DIV7_12Rnd_127x40_Mag_JHP"};
	};

	class DIV7_OPTRE_M6C : OPTRE_M6C
	{
		baseWeapon = "DIV7_OPTRE_M6C";
		displayName = "[DIV7] M6C";
		magazines[] += {"DIV7_16Rnd_127x40_Mag"};
	};

	class DIV7_M6D : TCF_M6D
	{
		baseWeapon = "DIV7_M6D";
		displayName = "[DIV7] M6D";
		magazines[] += {"DIV7_12Rnd_127x40_Mag_SAPHE", "DIV7_12Rnd_127x40_Mag_JHP"};
	};

	class DIV7_OPTRE_M6G : OPTRE_M6G
	{
		baseWeapon = "DIV7_OPTRE_M6G";
		displayName = "[DIV7] M6G";
		magazines[] += {"DIV7_12Rnd_127x40_Mag_JHP"};
	};

	// Etilka

	class DIV7_M247H_Etilka : OPTRE_M247H_Etilka
	{
		baseWeapon = "DIV7_M247H_Etilka";
		displayName = "[DIV7] M247H HMG ""Etilka""";
		dlc = "DIV7";
		scope = 2;
		scopeArsenal = 2;
		magazines[] += { "DIV7_200Rnd_127x99_M247H_Etilka_Ball" };
	};

	//DMR

	class DIV7_OPTRE_M392_DMR : OPTRE_M392_DMR
	{
		baseWeapon = "DIV7_OPTRE_M392_DMR";
		displayName = "[DIV7] M392 DMR";
		canShootInWater = 1;
		magazines[] += {"DIV7__Mag_762x51mm_15Rnd_APFSDS_Tracer", "DIV7__Mag_762x51mm_15Rnd_APFSDS"};
	};

	//Shotguns

	class DIV7_M45A : OPTRE_M45A
	{
		baseWeapon = "DIV7_OPTRE_M45A";
		displayName = "[DIV7] M45A";
		magazines[] += {"DIV7_12Rnd_8Gauge_Pellets_M45"};
	};

	class DIV7_M90A : OPTRE_M90A
	{
		baseWeapon = "DIV7_OPTRE_M90A";
		displayName = "[DIV7] M90";
		magazines[] += {"DIV7_12Rnd_8Gauge_Pellets_M90"};
	};



};

class CfgAmmo
	{
		class OPTRE_8Gauge_Pellets;
		class OPTRE_B_127x40_Ball;
		class B_762x51_Ball;
		class TCF_B_127x40_SAPHE;
		class TCF_B_127x40_JHP;

		class DIV7_762x51_Ball : B_762x51_Ball
		{
			caliber = 2.1;
			hit = 24;
			typicalSpeed = 750;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};

		class DIV7_8Gause_Pellets_M90 : OPTRE_8Gauge_Pellets
		{
			caliber = 4;
			hit = 25;
		};

		class DIV7_8Gause_Pellets_M45 : OPTRE_8Gauge_Pellets
		{
			caliber = 4;
			hit = 20;
		};

		class TEST_762x51_Ball_Baseline : B_762x51_Ball
		{
			caliber = 2.1;
			hit = 12;
			typicalSpeed = 750;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};

		class DIV7_127x40_SAPHE : TCF_B_127x40_SAPHE
		{
			hit = 32;
			caliber = 2.5;
		};

		class DIV7_127x40_JHP : TCF_B_127x40_JHP
		{
			hit = 32;
			caliber = 1;
		};

		class DIV7_127x40_Ball : OPTRE_B_127x40_Ball
		{
			hit = 20;
			caliber = 2;
		};
	};

class CfgMagazines
{

	class 20Rnd_762x51_Mag;
	class OPTRE_200Rnd_127x99_M247H_Etilka_Ball;

	class DIV7__Mag_762x51mm_15Rnd_APFSDS : 20Rnd_762x51_Mag
	{
		dlc = "DIV7";
		model = "\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
		displayname = "15Rnd 7.62x51mm APFSDS Magazine";
		displaynameshort = "7.62x51mm APFSDS";
		ammo = "DIV7_762x51_Ball";
		count = 15;
		initspeed = 1000;
		picture = "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort = "7.62x51mm APFSDS";
		mass = 5;
		tracersEvery = 0;
		lastRoundsTracer = 3;
	};

	class DIV7__Mag_762x51mm_15Rnd_APFSDS_Tracer : DIV7__Mag_762x51mm_15Rnd_APFSDS
	{
		dlc = "DIV7";
		displayname = "15Rnd 7.62x51mm APFSDS Magazine (Tracer)";
		displaynameshort = "7.62x51mm APFSDS (Tracer)";
		ammo = "DIV7_762x51_Ball";
		descriptionshort = "7.62x51mm APFSDS (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 15;
	};

	class DIV7_12Rnd_8Gauge_Pellets_M90 : 20Rnd_762x51_Mag
	{
		dlc = "DIV7";
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope = 2;
		displayname = "[DIV7] 12Rnd 8 Gauge Pellets M90";
		ammo = "DIV7_8Gause_Pellets_M90";
		count = 12;
		initspeed = 500;
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort = "12 Rounds of 8 Gauge Pellets M90";
		mass = 16;
	};

	class DIV7_12Rnd_8Gauge_Pellets_M45 : DIV7_12Rnd_8Gauge_Pellets_M90

	{
		displayname = "[DIV7] 12Rnd 8 Gauge Pellets M45";
		ammo = "DIV7_8Gause_Pellets_M45";
		descriptionshort = "12 Rounds of 8 Gauge Pellets M45";
	};

	class DIV7_16Rnd_127x40_Mag : 20Rnd_762x51_Mag
	{
		dlc = "DIV7";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\optre_weapons\pistol\data\M6G_CO.paa"};
		displayname = "16Rnd 12.7x40mm Magazine";
		displaynameshort = "12.7x40mm";
		ammo = "DIV7_127x40_Ball";
		count = 16;
		initspeed = 600;
		picture = "\OPTRE_weapons\pistol\icons\magazine.paa";
		descriptionshort = "8 Round Magazine<br/>12.7x40mm<br/>Semi-Armor Piercing High Explosive";
		mass = 9;
		tracersEvery = 0;
		lastRoundsTracer = 2;
		model = "\OPTRE_Weapons\Pistol\m6_magazine.p3d";
		modelSpecial = "\OPTRE_Weapons\Pistol\m6_magazine.p3d";
		modelSpecialIsProxy = 1;
	};

	class DIV7_12Rnd_127x40_Mag_SAPHE : DIV7_16Rnd_127x40_Mag
	{
		dlc = "DIV7";
		displayname = "12Rnd 12.7x40mm SAPHE Magazine";
		displaynameshort = "12.7x40mm SAPHE";
		ammo = "DIV7_127x40_SAPHE";
		count = 12;
		initspeed = 620;
		descriptionshort = "12 Round Magazine<br/>12.7x40mm<br/>Semi-Armor Piercing High Explosive";
		mass = 9;
	};

	class DIV7_12Rnd_127x40_Mag_JHP : DIV7_16Rnd_127x40_Mag
	{
		dlc = "DIV7";
		displayname = "12Rnd 12.7x40mm JHP Magazine";
		displaynameshort = "12.7x40mm JHP";
		ammo = "DIV7_127x40_JHP";
		count = 12;
		initspeed = 580;
		descriptionshort = "12 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point";
	};

	class DIV7_200Rnd_127x99_M247H_Etilka_Ball : OPTRE_200Rnd_127x99_M247H_Etilka_Ball 
	{
		dlc = "DIV7";
		mass = 75;
	};

};

/*
class CfgVehicles
{
	class Weapon_Bag_Base;
	class DIV7_SOVUSHKA_Pack : Weapon_Bag_Base
	{
		dlc = "DIV7";
		scope = 2;
		scopeCurator = 2;
		author = "Division-7";
		displayName = "UNSC Rucksack (Sovushka)";
		picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
		model = "\OPTRE_unsc_units\army\rucksack";
		hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Radio"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\soft_backpack_co", ""};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "DIV7_SOVUSHKA_TEST";
			displayName = "Sovushka Tripod Turret";
			dissasembleTo[] = {};
		};
	};

	class B_T_HMG_01_F;
	class DIV7_SOVUSHKA_TEST : B_T_HMG_01_F
	{
		dlc = "DIV7";
		scope = 2;
		scopeCurator = 2;
		author = "Division-7";
		model = "division7_weapons\SOVA\m37_sovushka_A3T.p3d";
		hiddenSelections[] = {"body", "box", "handle", "screen", "shield", "strance"};
		hiddenSelectionsMaterials[] = {"\division7_weapons\SOVA\DIV7_M37(Sovushka)_body.rvmat", "division7_weapons\SOVA\DIV7_M37(Sovushka)_box.rvmat", "division7_weapons\SOVA\DIV7_M37(Sovushka)_handle.rvmat", "division7_weapons\SOVA\DIV7_M37(Sovushka)_screen.rvmat", "division7_weapons\SOVA\DIV7_M37(Sovushka)_shield.rvmat", "division7_weapons\SOVA\DIV7_M37(Sovushka)_stance.rvmat"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"DIV7_SOVUSHKA_Pack"};
		};
	};
};
*/