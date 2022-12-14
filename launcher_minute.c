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
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
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
	int iVar2[3];
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
	iLocal_52 = __LIB_17__::func_26(56);
	iLocal_53 = __LIB_17__::func_26(57);
	iLocal_54 = __LIB_17__::func_26(59);
	iLocal_55 = joaat("pranger");
	iLocal_56 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_582();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_581(&Var0);
	Var1 = { ScriptParam_60.f_1[0 /*3*/] };
	iVar2[0] = 32;
	iVar2[1] = 33;
	iVar2[2] = 34;
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
		func_275(&Var0, 1);
	}
	if (!__LIB_37__::func_631(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_263(Var0.f_0))
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
	while (!func_248(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_275(&Var0, 1);
		}
	}
	if (Var0.f_0 == 32)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), 0);
		MISC::CLEAR_AREA(Var1, 40f, true, false, false, false);
	}
	else if (Var0.f_0 == 34)
	{
		iLocal_57 = __LIB_38__::func_285();
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_644(&Var0, 1))
		{
			func_275(&Var0, 1);
		}
		if (Var0.f_0 == 32)
		{
			__LIB_38__::func_277();
			if (__LIB_0__::func_695(Var0.f_35[1]))
			{
				if (!__LIB_37__::func_652(329.513f, 3402.691f, 36.258f, ENTITY::GET_ENTITY_COORDS(Var0.f_35[1], true), 1056964608))
				{
					__LIB_0__::func_135("Player has moved SURFER2 vehicle [TERMINATING]");
					__LIB_37__::func_621(&Var0);
					func_275(&Var0, 1);
				}
			}
		}
		__LIB_37__::func_592(Var0.f_0);
		__LIB_37__::func_623(&iLocal_56, &(Var0.f_9), Var1);
		if (Var0.f_0 == 32)
		{
			__LIB_37__::func_657(&Var0, Var1, "MIN1AUD", "MIN1_AMB", 3, "JOE", 4, "JOSEF", &uLocal_59);
		}
		else if (Var0.f_0 == 34)
		{
			__LIB_37__::func_622(&Var0, Var1, "MIN3AUD", "MIN3_AMB", 3, "MANUEL", 5000, 1101004800);
		}
		if (__LIB_37__::func_646(&Var0, 0))
		{
			if (__LIB_37__::func_566(Var0.f_0))
			{
				__LIB_37__::func_590(Var0.f_0, &iLocal_58);
			}
			if (!__LIB_37__::func_653(&Var0))
			{
				func_275(&Var0, 1);
			}
			if (__LIB_37__::func_562(&Var0))
			{
				func_275(&Var0, 0);
			}
		}
	}
}

int func_248(int iParam0)//Position - 0xEFED
{
	switch (*iParam0)
	{
		case 32:
			if (!func_260(iParam0))
			{
				return 0;
			}
			break;
		case 33:
			if (!func_259(iParam0))
			{
				return 0;
			}
			break;
		case 34:
			if (!func_249(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_249(var uParam0)//Position - 0xF04B
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	iVar0[0] = joaat("sabregt");
	iVar0[1] = joaat("bison");
	iVar0[2] = iLocal_54;
	iVar0[3] = joaat("prop_table_03_chr");
	iVar0[4] = joaat("prop_cs_rolled_paper");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 4;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_17[0 /*3*/] = { -303.51196f, 6211.8096f, 30.487585f };
			uParam0->f_17[1 /*3*/] = { 20f, 20f, 3f };
			__LIB_14__::func_825(&(uParam0->f_48), "rcmminute3base", "base", "beckon");
			uParam0->f_48.f_5 = { -303.73f, 6211.56f, 31.49f };
			uParam0->f_48.f_8 = { 0f, 0f, -2.8f };
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			return 0;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			return 0;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[3], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_593(&(uParam0->f_28[0]), 59, uParam0->f_48.f_5, -2.8f, "RCM MINUTE - MANUEL", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], -281.93f, 6198.32f, 30.77f, -135.32f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[1]), iVar0[1], -291.72f, 6208.33f, 30.87f, -134.50163f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[4], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.12f, 0f, 0.03f, 90f, 0f, 90f, false, false, false, false, 2, true, 0);
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

int func_259(var uParam0)//Position - 0xF639
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			return 0;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			return 0;
			break;
		case 2:
			__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 5, false);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 14f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
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

int func_260(var uParam0)//Position - 0xF74C
{
	int iVar0[4];
	int iVar1;
	bool bVar2;
	iVar0[0] = iLocal_55;
	iVar0[1] = joaat("surfer2");
	iVar0[2] = iLocal_52;
	iVar0[3] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "MMB_1_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmminute1");
			MISC::CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, true, false, false, false);
			iLocal_51 = 1;
			break;
		case 1:
			MISC::CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, true, false, false, false);
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_593(&(uParam0->f_28[0]), 56, 329.3f, 3404.2f, 35.8f, -174.9f, "RCM MINUTE - JOE", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (__LIB_37__::func_593(&(uParam0->f_28[1]), 57, 328.1f, 3403.8f, 35.8f, -149.6f, "RCM MINUTE - JOSEF", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], 321.69f, 3408.64f, 35.34f, -105.8f);
				func_261(uParam0->f_35[0], iVar0[0]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[1]), iVar0[1], 329.49f, 3402.71f, 36.29f, 284.36f);
				func_261(uParam0->f_35[1], iVar0[1]);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_35[1], false);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 3))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[0]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 8f, -8f, -1, 1, 0f, false, false, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
					}
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmminute1", "base_josef", 8f, -8f, -1, 1, 0f, false, false, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 185, true);
				}
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

void func_261(int iParam0, int iParam1)//Position - 0xFA6D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		VEHICLE::SET_VEHICLE_ALARM(iParam0, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iParam1, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iParam0, false, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam0, true);
	}
}

int func_263(int iParam0)//Position - 0xFAF4
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
	if (!func_264(iParam0))
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

int func_264(int iParam0)//Position - 0xFBAD
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
		if (func_265(5))
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

int func_265(int iParam0)//Position - 0xFC6E
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
			if (func_265(iVar0))
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

void func_275(int iParam0, bool bParam1)//Position - 0xFFFD
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_58))
	{
		HUD::REMOVE_BLIP(&iLocal_58);
	}
	if (*iParam0 == 32)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), true, true);
	}
	else if (*iParam0 == 34)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, false);
	}
	__LIB_37__::func_619(&(iParam0->f_48));
	if (iLocal_56 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_331(&iLocal_56);
	}
	switch (*iParam0)
	{
		case 32:
			sVar0 = "MIN1_AMB";
			break;
		case 34:
			sVar0 = "MIN3_AMB";
			break;
	}
	__LIB_37__::func_595(sVar0);
	if (bParam1)
	{
		__LIB_37__::func_592(*iParam0);
	}
	__LIB_37__::func_588();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

