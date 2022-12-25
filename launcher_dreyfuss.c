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
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<2> Local_58 = { 0, 5 } ;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 5;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
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
	uLocal_52 = __LIB_17__::func_29(68);
	iLocal_53 = joaat("landstalker");
	Local_54 = { -1473.3762f, 517.8441f, 116.8854f };
	fLocal_55 = 97.3011f;
	iLocal_56 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_256();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_255(&Var0);
	Var1 = { ScriptParam_58.f_1[0 /*3*/] };
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
		func_271(&Var0, 1);
	}
	iVar2[0] = 8;
	if (!__LIB_37__::func_305(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_259(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_268(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_240(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_271(&Var0, 1);
		}
	}
	if (Var0.f_0 == 8)
	{
		iLocal_57 = __LIB_37__::func_291();
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_318(&Var0, 1))
		{
			func_271(&Var0, 1);
		}
		__LIB_37__::func_266(Var0.f_0);
		__LIB_37__::func_297(&iLocal_56, &(Var0.f_9), Var1);
		if (Var0.f_0 == 8)
		{
			__LIB_37__::func_296(&Var0, Var1, "DREY1AU", "DREY1_IDLE", 3, "DREYFUSS", 5000, 1101004800);
		}
		if (__LIB_37__::func_320(&Var0, 0) || func_171())
		{
			if (!__LIB_37__::func_327(&Var0))
			{
				func_271(&Var0, 1);
			}
			if (__LIB_37__::func_236(&Var0))
			{
				func_271(&Var0, 0);
			}
		}
	}
}

int func_171()//Position - 0xB6BE
{
	if (__LIB_37__::func_233(2))
	{
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1459.68f, 485.26f, 116.22f, 1) < 6f && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_135("Special launching Dreyfuss1");
				return 1;
			}
			else if ((!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && __LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && __LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, 1056964608, 0, 1, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xE877
{
	if (!func_241(iParam0))
	{
		return 0;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_241(var uParam0)//Position - 0xE896
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1457.2512f, 475.82584f, 114.201454f };
			uParam0->f_17[1 /*3*/] = { -1460.4023f, 490.4705f, 118.60101f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "paper_1_RCM_alt1", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_31(&(uParam0->f_48), "rcmcollect_paperleadinout@", "meditiate_idle", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__::func_267(&(uParam0->f_28[0]), 68, -1459.68f, 485.26f, 116.22f, -131.3f, "DREYFUSS LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[1], Local_54, fLocal_55);
				if (__LIB_0__::func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "DR3YFU55");
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_53, true);
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			__LIB_0__::func_544(99, 1, 0, 1, 0);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), 50f, 0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1471.1663f, 510.6191f, 115.8419f, 4f, false, false, false, false, false, false, 0);
			__LIB_37__::func_292(0);
			return 1;
			break;
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x13143
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
	if (!func_260(iParam0))
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

int func_260(int iParam0)//Position - 0x131FC
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
	if (__LIB_37__::func_254(iParam0))
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
		if (!__LIB_37__::func_253(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_252(iParam0))
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
		if (func_261(5))
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

int func_261(int iParam0)//Position - 0x132BD
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
			if (func_261(iVar0))
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

void func_271(int iParam0, bool bParam1)//Position - 0x1364C
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	__LIB_37__::func_293(&(iParam0->f_48));
	if (iLocal_56 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_5(&iLocal_56);
	}
	switch (*iParam0)
	{
		case 8:
			sVar0 = "DREY1_IDLE";
			break;
	}
	__LIB_37__::func_269(sVar0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_53, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, false);
	__LIB_37__::func_292(1);
	if (bParam1)
	{
		__LIB_37__::func_266(*iParam0);
	}
	__LIB_37__::func_262();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

