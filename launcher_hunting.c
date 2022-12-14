#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<2> Local_60 = { 0, 5 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 5;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2[2];
	struct<3> Var3;
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_52 = __LIB_17__::func_26(54);
	iLocal_53 = joaat("dune");
	iLocal_54 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SNIPERRIFLE"));
	iLocal_55 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_SCOPE_LARGE"));
	iLocal_56 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_AR_SUPP_02"));
	Local_57 = { -683.8261f, 5840.8096f, 16.566f };
	iLocal_59 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_582();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_581(&Var0);
	Var1 = { ScriptParam_60.f_1[0 /*3*/] };
	iVar2[0] = 25;
	iVar2[1] = 26;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__::func_135("Relinquishing candidate id...");
				__LIB_0__::func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_262(&Var0, 1);
	}
	if (!__LIB_37__::func_631(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_250(Var0.f_0))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_594(Var0.f_0))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_237(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_262(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, 3f, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_659(&Var0, 1))
		{
			func_262(&Var0, 1);
		}
		__LIB_37__::func_592(Var0.f_0);
		__LIB_37__::func_623(&iLocal_59, &(Var0.f_9), Var1);
		if (Var0.f_0 == 25)
		{
			__LIB_37__::func_622(&Var0, Var1, "HUNT1AU", "HUNT1_AMB", 3, "CLETUS", 5000, 1101004800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		}
		if (Var0.f_0 == 25)
		{
			if (SYSTEM::VDIST2(Var1, Var3) < (10f * 10f))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
		}
		if (__LIB_37__::func_646(&Var0, 0) && MISC::ABSF((Var1.f_2 - Var3.f_2)) < 2.5f)
		{
			if (!__LIB_37__::func_669(&Var0))
			{
				func_262(&Var0, 1);
			}
			if (__LIB_37__::func_562(&Var0))
			{
				func_262(&Var0, 0);
			}
		}
	}
}

int func_237(int iParam0)//Position - 0xE834
{
	switch (*iParam0)
	{
		case 25:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
		case 26:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_238(var uParam0)//Position - 0xE87B
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	iVar0[2] = iLocal_54;
	iVar0[3] = iLocal_55;
	iVar0[4] = iLocal_56;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "HUN_2_MCS_1", 24);
			uParam0->f_15 = 4f;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmhunting2");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_593(&(uParam0->f_28[0]), 54, -683.3276f, 5841.042f, 17.217f, 8.33f, "RC HUNTER 2", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_PUMPSHOTGUN"), 0, true, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_239(&(uParam0->f_35[0]), -685.2281f, 5833.9824f, 16.331f, 313.2204f, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				iLocal_58 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE"), 0, Local_57, false, 1f, 0, 0, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_58, joaat("COMPONENT_AT_SCOPE_LARGE"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_58, joaat("COMPONENT_AT_AR_SUPP_02"));
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_28[0], "rcmhunting2", "_idle_loop", -683.152f, 5841.281f, 17.32f, 0f, 0f, 17.024f, 1000f, -8f, -1, 790537, 0f, 2, 1);
				}
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 3088, 2);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_57, 1f, iLocal_54, false))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_58, 0f, -90f, -162.64f, 2, true);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_239(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xEAB0
{
	__LIB_17__::func_22(iParam0, iLocal_53, Param1, fParam2);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 3, true);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (iParam3 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
		}
	}
}

int func_246(var uParam0)//Position - 0xED55
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "CLETUS_MCS_1_concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_28(&(uParam0->f_48), "special_ped@cletus@base", "cletus_base", 0);
			STREAMING::REQUEST_ANIM_DICT("special_ped@cletus@base");
			iLocal_51 = 1;
			break;
		case 1:
			if ((!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48))) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_593(&(uParam0->f_28[0]), 54, 1804.33f, 3931.33f, 33.83f, 91.63f, "RC HUNTER 1", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), 0, true, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_239(&(uParam0->f_35[0]), 1806.7319f, 3934.3525f, 33.3275f, 76.1155f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(1804.5009f, 3922.917f, 32.8091f, 2f, false, false, false, false, false, false, 0);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02"));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 104, true);
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), true);
				if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "special_ped@cletus@base", "cletus_base", 8f, -8f, -1, 1, 0f, false, false, false);
				}
			}
			MISC::CLEAR_AREA_OF_PEDS(1801.1593f, 3919.6062f, 33.0662f, 5f, 0);
			PED::SET_PED_NON_CREATION_AREA(1803.6034f, 3920.191f, 32.9855f, 1798.4159f, 3918.291f, 35.0579f);
			MISC::CLEAR_AREA_OF_PEDS(1797.2856f, 3927.3591f, 33.0176f, 4f, 0);
			PED::SET_PED_NON_CREATION_AREA(1793.7654f, 3926.7485f, 35.1276f, 1799.7296f, 3927.815f, 32.9875f);
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET", false);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING", false);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING", false);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xF0C2
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_251(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_251(int iParam0)//Position - 0xF17B
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_580(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_579(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_578(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_252(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)//Position - 0xF23C
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_252(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_262(int iParam0, bool bParam1)//Position - 0xF5CB
{
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	if (iLocal_59 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_331(&iLocal_59);
	}
	if (bParam1)
	{
		__LIB_37__::func_592(*iParam0);
	}
	__LIB_37__::func_588();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

