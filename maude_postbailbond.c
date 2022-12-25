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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!__LIB_0__::func_692(iLocal_42))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_43 = MISC::GET_GAME_TIMER();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		__LIB_14__::func_705(1, &uLocal_48);
	}
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_0__::func_692(iLocal_42))
			{
				func_56();
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_42, true) };
			if (SYSTEM::VDIST2(Var0, Var1) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(Var1, Var0, 18000, 1101004800);
					if (func_25(&iLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(Var1, Var0);
						STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_683());
						iLocal_47 = 1;
					}
					break;
				case 1:
					if (__LIB_14__::func_762(&iLocal_42, &iLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				case 2:
					if (!__LIB_6__::func_572(iLocal_42, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !PED::IS_PED_FLEEING(iLocal_42))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_42, __LIB_14__::func_683(), __LIB_14__::func_681(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1B3
{
	if (__LIB_0__::func_692(iLocal_42))
	{
		__LIB_14__::func_729(&iLocal_42);
		TASK::TASK_SMART_FLEE_PED(iLocal_42, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_42, true);
	}
}

void func_12(struct<3> Param0, struct<3> Param1)//Position - 0x42D
{
	if (__LIB_0__::func_692(iLocal_42))
	{
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42))
		{
			if (SYSTEM::VDIST2(Param1, Param0) < (35f * 35f))
			{
				__LIB_38__::func_484(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_16(bool bParam0)//Position - 0x6BE
{
	struct<6> Var0;
	char* sVar1;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		sVar1 = func_21();
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sVar1))
		{
			if (bParam0)
			{
				__LIB_0__::func_638();
			}
			else
			{
				__LIB_0__::func_429();
			}
		}
	}
}

char* func_21()//Position - 0x75B
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return "BB4_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return "BB3_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return "BB2_loiter";
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

void func_24()//Position - 0x802
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
	}
}

int func_25(int iParam0, bool bParam1)//Position - 0x82A
{
	if (__LIB_0__::func_692(*iParam0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*iParam0))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_39))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_40))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_41))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 61))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(*iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 51))
		{
			return 1;
		}
		if (__LIB_37__::func_310(*iParam0, 1126825984))
		{
			return 1;
		}
		if (__LIB_14__::func_858(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*iParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_43(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)//Position - 0x11EB
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	if (iLocal_44 < iLocal_45)
	{
		if (!__LIB_0__::func_75())
		{
			if (SYSTEM::VDIST2(Param1, Param0) < (fParam3 * fParam3))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_43) > (iParam2 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					uVar0 = 16;
					__LIB_0__::func_222(&uVar0, 3, iLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					__LIB_14__::func_654(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = MISC::GET_GAME_TIMER();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}

char* func_46()//Position - 0x1306
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return "BB4AUD";
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return "BB3AUD";
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return "BB2AUD";
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

int func_49()//Position - 0x14EF
{
	if (BitTest(Global_113386.f_24986, 3))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 2))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 1))
	{
		return 4;
	}
	else if (BitTest(Global_113386.f_24986, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()//Position - 0x1541
{
	struct<3> Var0;
	if (__LIB_0__::func_692(iLocal_42))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_42))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_42, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42, true);
		PED::SET_PED_MONEY(iLocal_42, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_42, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42, joaat("PLAYER"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_42, false);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_42, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_42, 118, false);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_table_03b"), false))
		{
			iLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_table_03b"), true, false, true);
			if (__LIB_0__::func_121(iLocal_40))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_40, 2727.4f, 4145.56f, 43.68f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_40, -92.17f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, true);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_laptop_01a"), false))
		{
			iLocal_41 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_laptop_01a"), false, false, true);
			if (__LIB_0__::func_121(iLocal_41))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_41))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_41, true, false);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_41, 2727.686f, 4145.715f, 44.08f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_41, 71f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_table_03_chr"), false))
		{
			iLocal_39 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_table_03_chr"), false, false, true);
			if (__LIB_0__::func_121(iLocal_39))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_39))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_39, true, false);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_39, 2728.35f, 4145.59f, 43.3f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_39, -91.28f);
			}
		}
	}
}

int func_52()//Position - 0x170E
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (__LIB_0__::func_692(uVar2[iVar1]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == __LIB_2__::func_910(62))
				{
					iLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_56()//Position - 0x17B6
{
	__LIB_14__::func_705(0, &uLocal_48);
	if (__LIB_0__::func_121(iLocal_41))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
	}
	__LIB_0__::func_122(&iLocal_41, 0);
	if (__LIB_0__::func_121(iLocal_40))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
	}
	__LIB_0__::func_122(&iLocal_40, 0);
	if (__LIB_0__::func_121(iLocal_39))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_39, false);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_39, -1000f, true);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_39, __LIB_14__::func_683(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", __LIB_14__::func_683(), -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_39, -1000f, true);
		}
	}
	__LIB_0__::func_122(&iLocal_39, 0);
	if (__LIB_0__::func_692(iLocal_42))
	{
		PED::SET_PED_KEEP_TASK(iLocal_42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_42, 118, true);
	}
	__LIB_0__::func_124(&iLocal_42, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(__LIB_14__::func_683());
	SCRIPT::TERMINATE_THIS_THREAD();
}

