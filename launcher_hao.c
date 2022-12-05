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
	struct<2> Local_55 = { 0, 5 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_71 = 5;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2[1];
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
	uLocal_52 = __LIB_11__.func_793(53);
	iLocal_53 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__.func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_29__.func_777(&Var0);
	Var1 = { ScriptParam_55.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__.func_135("Relinquishing candidate id...");
				__LIB_0__.func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_261(&Var0, 1);
	}
	iVar2[0] = 24;
	if (!__LIB_37__.func_336(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_249(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__.func_329(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_8__.func_915(41))
	{
		__LIB_0__.func_135("SP_MISSION_FRANKLIN_1 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		__LIB_0__.func_135("SP_MISSION_FRANKLIN_1 is not available...");
	}
	while (!func_238(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__.func_135("Player out of range [TERMINATING]");
			func_261(&Var0, 1);
		}
	}
	iLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(-103.0011f, -1281.6357f, 26.3686f, -23.246f, -1241.361f, 30.335f, false, true, true, true);
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__.func_979(&Var0, 1))
		{
			func_261(&Var0, 1);
		}
		if (__LIB_8__.func_915(41))
		{
			__LIB_0__.func_135("SP_MISSION_FRANKLIN_1 became available... [TERMINATING]");
			func_261(&Var0, 1);
		}
		else
		{
			__LIB_0__.func_135("SP_MISSION_FRANKLIN_1 is not available...");
		}
		if (__LIB_1__.func_183(Var0.f_35[0]))
		{
			if (!__LIB_29__.func_804(-72.323f, -1258.643f, 28.648f, ENTITY::GET_ENTITY_COORDS(Var0.f_35[0], true), 1056964608))
			{
				__LIB_0__.func_135("Player has moved HAO's vehicle [TERMINATING]");
				__LIB_34__.func_844(&Var0);
				func_261(&Var0, 1);
			}
		}
		__LIB_37__.func_326(Var0.f_0);
		__LIB_37__.func_333(&iLocal_53, &(Var0.f_9), Var1);
		__LIB_37__.func_334(&Var0, Var1, "HAO1AU", "HAO1_HCO", 3, "HAO", 5000, 1101004800);
		if (__LIB_41__.func_978(&Var0, 0))
		{
			if (!__LIB_42__.func_852(&Var0))
			{
				func_261(&Var0, 1);
			}
			if (__LIB_29__.func_757(&Var0))
			{
				func_261(&Var0, 0);
			}
		}
	}
}

int func_238(int iParam0)//Position - 0xE86D
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	__LIB_0__.func_135("Created initial scene");
	return 1;
}

int func_239(var uParam0)//Position - 0xE88C
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	sVar3 = "special_ped@hao@base";
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("penumbra");
	iVar0[2] = joaat("prop_npc_phone");
	iVar0[3] = joaat("ruiner");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -72.13491f, -1256.7122f, 27.683605f };
			uParam0->f_17[1 /*3*/] = { -72.18015f, -1267.5868f, 29.248524f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "HAO_MCS_1", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 53, -71.936844f, -1259.7f, 28.193594f, -177.55f, "HAO LAUNCHER RC - HAO", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], -72.3226f, -1258.6433f, 28.1915f, 90.8326f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 38, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 91, 0);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_35[0], 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 0, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 1, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 2, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 3, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 4, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 6, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 7, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 10, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 23, 20);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 0, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 1, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 2, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 3, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 4, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 6, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 7, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 10, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 23, 20, false);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 18, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 17, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 22, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::ROLL_DOWN_WINDOW(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[1]), iVar0[3], -91.07f, -1273.45f, 28.86f, 0.57f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 10);
			}
			if (__LIB_0__.func_121(uParam0->f_28[0]))
			{
				__LIB_10__.func_697(&(uParam0->f_41[0]), iVar0[2], -71.936844f, -1259.0775f, 28.193594f, -177.55f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
			}
			if (bVar4)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_1__.func_197(uParam0->f_28[0]) && __LIB_1__.func_183(uParam0->f_35[0]))
			{
				iVar5 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_35[0], "chassis_dummy");
				Var6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_35[0], iVar5) };
				iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var6, ENTITY::GET_ENTITY_ROTATION(uParam0->f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar2, false);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iVar2, sVar3, "hao_base", 8f, -8f, 9, 16, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
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

int func_249(int iParam0)//Position - 0xF015
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__.func_2(1))
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_250(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__.func_773(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_250(int iParam0)//Position - 0xF0CE
{
	var uVar0;
	__LIB_6__.func_773(iParam0, &uVar0);
	if (!__LIB_6__.func_763(4))
	{
		if (__LIB_34__.func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__.func_569() && !__LIB_0__.func_568())
	{
		return 0;
	}
	if (__LIB_29__.func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__.func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__.func_865(iParam0))
	{
		if (!__LIB_29__.func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__.func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__.func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_251(5))
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

int func_251(int iParam0)//Position - 0xF18F
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
			if (func_251(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__.func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_261(int iParam0, bool bParam1)//Position - 0xF51E
{
	if (bParam1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_32__.func_757(iParam0, 0, 0, 0);
	}
	if (iLocal_53 != -1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__.func_764(&iLocal_53);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54, false);
	if (bParam1)
	{
		__LIB_37__.func_326(*iParam0);
	}
	__LIB_34__.func_838();
	__LIB_0__.func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

