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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<2> Local_54 = { 0, 5 } ;
	var uLocal_55 = 0;
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
	var uLocal_70 = 5;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	iLocal_51 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__::func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_29__::func_777(&Var0);
	Var1 = { ScriptParam_54.f_1[0 /*3*/] };
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
		func_248(&Var0, 1);
	}
	iVar2[0] = 35;
	if (!__LIB_37__::func_336(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_236(Var0.f_0))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_329(Var0.f_0))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_233(&Var0);
	iLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1 - Vector(20f, 20f, 20f), Var1 + Vector(20f, 20f, 20f), false, true, true, true);
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__::func_979(&Var0, 1))
		{
			func_248(&Var0, 1);
		}
		__LIB_37__::func_326(Var0.f_0);
		__LIB_37__::func_333(&iLocal_51, &(Var0.f_9), Var1);
		if (__LIB_41__::func_978(&Var0, 0))
		{
			if (Var0.f_0 == 35)
			{
				if (iLocal_53 == 0)
				{
					if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(joaat("DOORHASH_T_TRAILER_CS")))
					{
						OBJECT::ADD_DOOR_TO_SYSTEM(joaat("DOORHASH_T_TRAILER_CS"), joaat("v_ilev_trevtraildr"), 1972.77f, 3815.37f, 33.66f, true, true, false);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(joaat("DOORHASH_T_TRAILER_CS")))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(joaat("DOORHASH_T_TRAILER_CS"), 0f, true, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(joaat("DOORHASH_T_TRAILER_CS"), 1, true, false);
						iLocal_53 = 1;
					}
				}
			}
			if (!__LIB_42__::func_851(&Var0))
			{
				func_248(&Var0, 1);
			}
			if (__LIB_29__::func_757(&Var0))
			{
				func_248(&Var0, 0);
			}
		}
	}
}

void func_233(int iParam0)//Position - 0xE506
{
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		__LIB_0__::func_135("Player out of range [TERMINATING]");
		func_248(iParam0, 1);
	}
	func_234(iParam0);
	__LIB_0__::func_135("Created initial scene");
}

void func_234(int iParam0)//Position - 0xE533
{
	iParam0->f_16 = 5;
	iParam0->f_17[0 /*3*/] = { 1973.3237f, 3815.594f, 31.42936f };
	iParam0->f_17[1 /*3*/] = { 1974.9358f, 3812.7473f, 34.438004f };
	iParam0->f_24 = 6.5f;
	iParam0->f_27 = 0;
	StringCopy(&(iParam0->f_9), "TMOM_1_RCM", 24);
}

int func_236(int iParam0)//Position - 0xE5D9
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
	if (!func_237(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__::func_773(iParam0, &sVar0);
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

int func_237(int iParam0)//Position - 0xE692
{
	var uVar0;
	__LIB_6__::func_773(iParam0, &uVar0);
	if (!__LIB_6__::func_763(4))
	{
		if (__LIB_34__::func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_569() && !__LIB_0__::func_568())
	{
		return 0;
	}
	if (__LIB_29__::func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__::func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__::func_865(iParam0))
	{
		if (!__LIB_29__::func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__::func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_238(5))
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

int func_238(int iParam0)//Position - 0xE753
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
			if (func_238(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__::func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_248(int iParam0, bool bParam1)//Position - 0xEAE0
{
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_32__::func_757(iParam0, 0, 0, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_52, false);
	if (iLocal_51 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__::func_764(&iLocal_51);
	}
	if (bParam1)
	{
		__LIB_37__::func_326(*iParam0);
	}
	__LIB_34__::func_838();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

