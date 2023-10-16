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
		requiredAddons[] = {"division7_core", "OPTRE_Weapons"};
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
	
	class DIV7_OPTRE_M392_DMR : OPTRE_M392_DMR
	{
		baseWeapon = "DIV7_OPTRE_M392_DMR";
		displayName = "[DIV7] M392 DMR";
		canShootInWater = 1;
		magazineWell[] = {};
		magazines[] = {"DIV7__Mag_762x51mm_15Rnd_APFSDS_Tracer", "DIV7__Mag_762x51mm_15Rnd_APFSDS", "OPTRE_15Rnd_762x51_Mag", "OPTRE_15Rnd_762x51_Mag_Tracer", "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f", "muzzle_snds_l", "optre_ma5suppressor", "optre_m7_silencer", "optre_m6_silencer", "ace_muzzle_mzls_b", "muzzle_snds_b", "OPTRE_MA37KSuppressor", "muzzle_snds_65_TI_blk_F", "OPTRE_srs99d_suppressor"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {"optic_Yorris", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_snd_F", "optic_MRCO", "optic_Arco", "optic_Arco_ghex_F", "optic_Arco_blk_F", "optic_aco", "optic_ACO_grn", "optic_aco_smg", "optic_ACO_grn_smg", "optic_hamr", "optic_Hamr_khk_F", "optic_Holosight", "optic_Holosight_smg", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F", "OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_M393_Scope", "OPTRE_M393_ACOG", "OPTRE_M393_EOTECH", "OPTRE_M73_SmartLink", "OPTRE_MA5_SmartLink", "OPTRE_MA5_SmartLink_v2", "OPTRE_MA5C_SmartLink_v2", "OPTRE_MA5_SmartLink_legacy", "OPTRE_MA5C_SmartLink_legacy", "OPTRE_M12_Optic", "OPTRE_M12_Optic_Red", "OPTRE_M12_Optic_Green", "optic_ico_01_black_f", "OPTRE_BR45_Scope", "optic_NVS", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_ams", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_old", "optic_SOS", "optic_SOS_khk_F", "OPTRE_M392_Scope_v2", "OPTRE_M393_ACOG_v2", "OPTRE_M393_EOTECH_v2", "OPTRE_BMR_Scope_v2"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight", "optre_dmr_light", "OPTRE_M7_Laser", "OPTRE_M7_Vis_Red_Laser", "OPTRE_BMR_Laser", "OPTRE_BMR_MEQ_Flashlight", "OPTRE_BMR_Vis_Red_Laser", "optre_m12_laser", "OPTRE_M12_Vis_Red_Laser", "OPTRE_M12_Flashlight", "optre_m45_flashlight", "optre_m45_flashlight_red", "OPTRE_M6C_Laser", "OPTRE_M6C_Vis_Red_Laser", "OPTRE_M6C_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser", "OPTRE_M6G_Flashlight", "acc_pointer_ir", "acc_flashlight", "ace_acc_pointer_green"};
			};
		};
	};

	class DIV7_M45A : OPTRE_M45A
	{
		baseWeapon = "DIV7_OPTRE_M45A";
		displayName = "[DIV7] M45A";
		magazineWell[] = {};
		magazines[] = {"OPTRE_12Rnd_8Gauge_Pellets", "OPTRE_6Rnd_8Gauge_Pellets", "OPTRE_12Rnd_8Gauge_Slugs", "OPTRE_6Rnd_8Gauge_Slugs", "DIV7_12Rnd_8Gauge_Pellets_M45"};
		class WeaponSlotsInfo : WeaponSlotsInfo{
				class MuzzleSlot : MuzzleSlot{
						compatibleitems[] = {"muzzle_snds_h_mg_blk_f", "muzzle_snds_l", "optre_ma5suppressor", "optre_m7_silencer", "optre_m6_silencer", "ace_muzzle_mzls_b", "muzzle_snds_b", "OPTRE_MA37KSuppressor", "muzzle_snds_65_TI_blk_F", "OPTRE_srs99d_suppressor", "OPTRE_srs99d_suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","optic_ico_01_black_f","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","OPTRE_M7_Vis_Red_Laser","OPTRE_BMR_Laser","OPTRE_BMR_MEQ_Flashlight","OPTRE_BMR_Vis_Red_Laser","optre_m12_laser","OPTRE_M12_Vis_Red_Laser","OPTRE_M12_Flashlight","optre_m45_flashlight","optre_m45_flashlight_red","OPTRE_M6C_Laser","OPTRE_M6C_Vis_Red_Laser","OPTRE_M6C_Flashlight","OPTRE_M6G_Laser","OPTRE_M6G_Vis_Red_Laser","OPTRE_M6G_Flashlight","acc_pointer_ir","acc_flashlight","ace_acc_pointer_green","acc_pointer_vis_red"};
			};
		};
	};

	class DIV7_M90A : OPTRE_M90A
	{
		baseWeapon = "DIV7_OPTRE_M90A";
		displayName = "[DIV7] M90";
		magazineWell[] = {};
		magazines[] = {"OPTRE_12Rnd_8Gauge_Pellets", "OPTRE_6Rnd_8Gauge_Pellets", "OPTRE_12Rnd_8Gauge_Slugs", "OPTRE_6Rnd_8Gauge_Slugs", "DIV7_12Rnd_8Gauge_Pellets_M90"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f", "muzzle_snds_l", "optre_ma5suppressor", "optre_m7_silencer", "optre_m6_silencer", "ace_muzzle_mzls_b", "muzzle_snds_b", "OPTRE_MA37KSuppressor", "muzzle_snds_65_TI_blk_F", "OPTRE_srs99d_suppressor", "OPTRE_srs99d_suppressor"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight", "OPTRE_M7_Laser", "OPTRE_M7_Vis_Red_Laser", "OPTRE_BMR_Laser", "OPTRE_BMR_MEQ_Flashlight", "OPTRE_BMR_Vis_Red_Laser", "optre_m12_laser", "OPTRE_M12_Vis_Red_Laser", "OPTRE_M12_Flashlight", "optre_m45_flashlight", "optre_m45_flashlight_red", "OPTRE_M6C_Laser", "OPTRE_M6C_Vis_Red_Laser", "OPTRE_M6C_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser", "OPTRE_M6G_Flashlight", "acc_pointer_ir", "acc_flashlight", "ace_acc_pointer_green", "acc_pointer_vis_red"};
			};
		};
	};
};

class CfgAmmo
	{
		class OPTRE_8Gauge_Pellets;
		class B_762x51_Ball;

		class DIV7_762x51_Ball : B_762x51_Ball {
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

	};

class CfgMagazines
{
	class 20Rnd_762x51_Mag;

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