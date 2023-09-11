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
		requiredAddons[] = {"OPTRE_Core", "OPTRE_Weapons"};
	};
};

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class OPTRE_M392_DMR;

	class DIV7_OPTRE_M392_DMR : OPTRE_M392_DMR
	{
		baseWeapon = "DIV7_OPTRE_M392_DMR";
		displayName = "[DIV7] M392 DMR";
		canShootInWater = 1;
		magazineWell[] = {};
		magazines[] = {"TEST_mag_762x51_Hit50", "TEST_mag_762x51_Hit100", "TEST_mag_762x51_HitN50", "TEST_mag_762x51_Caliber50", "TEST_mag_762x51_Caliber100", "TEST_mag_762x51_CaliberN50", "TEST_mag_762x51_CaliberN100", "OPTRE_15Rnd_762x51_Mag", "OPTRE_15Rnd_762x51_Mag_Tracer", "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow"};
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
				compatibleitems[] = {"OPTRE_M7_Flashlight", "OPTRE_M7_Laser", "OPTRE_M7_Vis_Red_Laser", "OPTRE_BMR_Laser", "OPTRE_BMR_MEQ_Flashlight", "OPTRE_BMR_Vis_Red_Laser", "optre_m12_laser", "OPTRE_M12_Vis_Red_Laser", "OPTRE_M12_Flashlight", "optre_m45_flashlight", "optre_m45_flashlight_red", "OPTRE_M6C_Laser", "OPTRE_M6C_Vis_Red_Laser", "OPTRE_M6C_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser", "OPTRE_M6G_Flashlight", "acc_pointer_ir", "acc_flashlight", "ace_acc_pointer_green"};
			};
		};
	};
};

	class CfgAmmo
	{

		class B_762x51_Ball;
		class TEST_762x51_Ball_Baseline : B_762x51_Ball
		{
			caliber = 2.1;
			hit = 12;
			typicalSpeed = 750;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};

		class TEST_B_762x51_Tracer_Hit50 : TEST_762x51_Ball_Baseline
		{
			hit = 18;
		};
		class TEST_B_762x51_Tracer_Hit100 : TEST_762x51_Ball_Baseline
		{
			hit = 24;
		};
		class TEST_B_762x51_Tracer_HitN50 : TEST_762x51_Ball_Baseline
		{
			hit = 6;
		};
		class TEST_B_762x51_Tracer_Caliber50 : TEST_762x51_Ball_Baseline
		{
			caliber = 3.15;
		};
		class TEST_B_762x51_Tracer_Caliber100 : TEST_762x51_Ball_Baseline
		{
			caliber = 4,2;
		};
		class TEST_B_762x51_Tracer_CaliberN50 : TEST_762x51_Ball_Baseline
		{
			caliber = 1;
		};
	};

	class CfgMagazines
	{
		class 20Rnd_762x51_Mag;
		class TEST_mag_762x51_Control_Group : 20Rnd_762x51_Mag
		{
			dlc = "OPTRE";
			model = "\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
			displayname = "[test] Control Group";
			displaynameshort = "Control Group";
			ammo = "TEST_762x51_Ball_Baseline";
			count = 600;
			initspeed = 900;
			picture = "\OPTRE_weapons\ar\icons\magazine.paa";
			descriptionshort = "Control Group";
			mass = 1;
			tracersEvery = 1;
			lastRoundsTracer = 5;
		};

		class TEST_mag_762x51_Hit50 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_Hit50";
			displayname = "[test] hit 50%";
			displaynameshort = "hit 50%";
			descriptionshort = "hit 50%";
		};

		class TEST_mag_762x51_Hit100 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_HitN100";
			displayname = "[test] hit 100%";
			displaynameshort = "Hit 100%";
			descriptionshort = "Hit 100%";
		};

		class TEST_mag_762x51_HitN50 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_HitN50";
			displayname = "[test] hit -50%";
			displaynameshort = "Hit -50%";
			descriptionshort = "Hit -50%";
		};

		class TEST_mag_762x51_Caliber50 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_Caliber50";
			displayname = "[test] caliber 50%";
			displaynameshort = "caliber 50%";
			descriptionshort = "caliber 50%";
		};

		class TEST_mag_762x51_Caliber100 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_Caliber100";
			displayname = "[test] caliber 100%";
			displaynameshort = "caliber 100%";
			descriptionshort = "caliber 100%";
		};

		class TEST_mag_762x51_CaliberN50 : TEST_mag_762x51_Control_Group
		{
			ammo = "TEST_B_762x51_Tracer_CaliberN50";
			displayname = "[test] caliber -50%";
			displaynameshort = "caliber -50%";
			descriptionshort = "caliber -50%";
		};
	};
