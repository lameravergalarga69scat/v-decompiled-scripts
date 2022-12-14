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
	var uLocal_54 = 0;
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
	iLocal_52 = joaat("IG_Hunter");
	iLocal_53 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_582();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_581(&Var0);
	Var1 = { ScriptParam_55.f_1[0 /*3*/] };
	iVar2[0] = 57;
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
		func_257(&Var0, 1);
	}
	if (!__LIB_37__::func_631(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_245(Var0.f_0))
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
	while (!func_239(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_257(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_644(&Var0, 1))
		{
			func_257(&Var0, 1);
		}
		__LIB_37__::func_592(Var0.f_0);
		func_193(&iLocal_53, &uLocal_54, &(Var0.f_9), Var1, -1295.84f, 4641.98f, 105.33f, -1301.43f, 4641.21f, 105.62f);
		__LIB_37__::func_668(&Var0, Var1, "SAS1AUD", "SAS1_AMB", 4, "HUNTER" /* GXT: FH-1 Hunter */, 10000);
		if (__LIB_37__::func_637(&Var0, 0))
		{
			if (!__LIB_37__::func_651(&Var0))
			{
				func_257(&Var0, 1);
			}
			if (__LIB_37__::func_562(&Var0))
			{
				func_257(&Var0, 0);
			}
		}
	}
}

void func_193(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5)//Position - 0xCAB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			if (__LIB_6__::func_181())
			{
				if (*iParam0 != -1)
				{
					__LIB_37__::func_584(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param3, 1) <= 100f)
				{
					__LIB_37__::func_568(iParam0, 1);
				}
			}
			else
			{
				if (__LIB_37__::func_557(*iParam0) == 2)
				{
					CUTSCENE::STOP_CUTSCENE(false);
					CUTSCENE::REMOVE_CUTSCENE();
					__LIB_37__::func_307(*iParam0, 0);
				}
				else
				{
					fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param4, 1);
					fVar1 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param5, 1);
					fVar2 = (fVar0 - fVar1);
					if (fVar2 < 0f)
					{
						fVar2 = (fVar2 * -1f);
					}
					if (fVar2 > 0.5f)
					{
						if (fVar0 < fVar1)
						{
							if (*uParam1 != 1)
							{
								CUTSCENE::REMOVE_CUTSCENE();
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam2, 5, 8);
								__LIB_37__::func_307(*iParam0, 1);
								*uParam1 = 1;
							}
						}
						else if (*uParam1 != 2)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam2, 6, 8);
							__LIB_37__::func_307(*iParam0, 1);
							*uParam1 = 2;
						}
					}
				}
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Param3, 1) > 120f)
				{
					__LIB_37__::func_584(iParam0);
				}
			}
		}
	}
}

int func_239(int iParam0)//Position - 0xE7D2
{
	if (!func_240(iParam0))
	{
		return 0;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_240(var uParam0)//Position - 0xE7F1
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = iLocal_52;
	iVar0[1] = joaat("dune");
	iVar0[2] = joaat("prop_crate_07a");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "sas_1_rcm_concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmlastone1");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SNIPERRIFLE"), 31, 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (((!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmlastone1")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN"))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SNIPERRIFLE")))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			uParam0->f_28[0] = PED::CREATE_PED(25, iLocal_52, -1299.02f, 4639.86f, 106.66f, 345.7769f, true, true);
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), 100, true, true);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmlastone1", "idle_action_01", 8f, -8f, -1, 1, 0f, false, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
			}
			else
			{
				bVar2 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[1], -1303.1628f, 4648.085f, 104.9664f, 293.1504f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
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

int func_245(int iParam0)//Position - 0xEB3D
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
	if (!func_246(iParam0))
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

int func_246(int iParam0)//Position - 0xEBF6
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
		if (func_247(5))
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

int func_247(int iParam0)//Position - 0xECB7
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
			if (func_247(iVar0))
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

void func_257(int iParam0, bool bParam1)//Position - 0xF046
{
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	__LIB_37__::func_619(&(iParam0->f_48));
	if (iLocal_53 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_331(&iLocal_53);
	}
	if (bParam1)
	{
		__LIB_37__::func_592(*iParam0);
	}
	__LIB_37__::func_588();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

