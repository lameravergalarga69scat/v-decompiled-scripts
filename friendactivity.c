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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<858> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
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
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69[2] = { 0, 0 };
	int iLocal_70 = 0;
	struct<5> Local_71 = { 0, 0, 0, 0, 0 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 21;
	var uLocal_75 = 6;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = joaat("p_amb_phone_01");
	Local_65 = { 0f, 0f, 0f };
	Local_66 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_82 = joaat("S_M_M_AutoShop_02");
	iLocal_83 = joaat("taxi");
	iLocal_85 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
		{
			func_1046(0);
		}
		else
		{
			func_1046(5);
		}
		func_1039();
	}
	func_1029();
	SYSTEM::WAIT(0);
	while (iLocal_85)
	{
		SYSTEM::WAIT(0);
		switch (Local_49.f_0)
		{
			case 0:
				func_1028(iScriptParam_87);
				if (Local_49.f_1 != 7)
				{
					func_1046(Local_49.f_1);
				}
				break;
			case 1:
				func_1018();
				if (Local_49.f_1 != 7)
				{
					func_1046(Local_49.f_1);
				}
				break;
			case 2:
				if (Local_49.f_2)
				{
					Local_49.f_2 = 0;
					func_1009();
				}
				func_937();
				if (Local_49.f_1 != 7)
				{
					func_1046(Local_49.f_1);
				}
				break;
			case 3:
				if (func_936())
				{
					func_925();
				}
				break;
			case 4:
				if (func_924())
				{
					func_922();
				}
				break;
			case 5:
				if (func_887())
				{
					func_925();
				}
				break;
			case 6:
				if (Local_49.f_2)
				{
					Local_49.f_2 = 0;
					func_881();
				}
				func_305();
				if (Local_49.f_1 != 7)
				{
					func_1046(Local_49.f_1);
				}
				break;
			case 7:
				if (func_4(1))
				{
					func_1();
				}
				break;
			case 8:
				if (func_4(0))
				{
					func_1();
				}
				break;
			default:
				break;
		}
	}
	func_1039();
}

void func_1()//Position - 0x1E4
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_533();
	iLocal_85 = 0;
}

int func_4(bool bParam0)//Position - 0x26C
{
	struct<151> Var0;
	int iVar1;
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		func_300();
		func_299(4);
		return 0;
	}
	else if (__LIB_0__::func_134())
	{
		if (__LIB_0__::func_204())
		{
			func_299(3);
			return 0;
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_299(0);
		return 0;
	}
	else if ((__LIB_6__::func_854(6) && !__LIB_0__::func_39(6)) && !__LIB_0__::func_39(7))
	{
		func_299(1);
		return 0;
	}
	else
	{
		Var0 = 6;
		Var0.f_112 = 2;
		Var0.f_140 = 3;
		Var0.f_150 = 3;
		if (bParam0)
		{
			func_292(Local_49.f_644, &Var0);
		}
		else
		{
			func_291(Global_96268, &Var0);
		}
		if (func_74(&Var0, &(Local_49.f_650), &(Local_49.f_259), &(Local_49.f_257), &(Local_49.f_651), Local_49.f_56.f_7, Local_49.f_109.f_7, &(Local_49.f_649), Local_49.f_56.f_8, Local_49.f_109.f_8))
		{
			iVar1 = 0;
			while (iVar1 < 9)
			{
				if (__LIB_11__::func_898(iVar1) == 4 && __LIB_24__::func_732(iVar1) == 0)
				{
					func_71(iVar1);
				}
				iVar1++;
			}
			if (Local_49.f_56.f_1 != 145)
			{
				STATS::PLAYSTATS_FRIEND_ACTIVITY(__LIB_20__::func_260(Local_49.f_56.f_1), false);
			}
			if (Local_49.f_109.f_1 != 145)
			{
				STATS::PLAYSTATS_FRIEND_ACTIVITY(__LIB_20__::func_260(Local_49.f_109.f_1), false);
			}
			func_5(&(Local_49.f_3), 0, 1);
			func_5(&(Local_49.f_56), 0, 1);
			func_5(&(Local_49.f_109), 0, 1);
			return 1;
		}
	}
	return 0;
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x3EF
{
	if (*uParam0 != 0)
	{
		if (__LIB_0__::func_43(uParam0->f_1))
		{
			MISC::CLEAR_BIT(&Global_96292, uParam0->f_1);
		}
		func_65(uParam0);
		func_64(uParam0, 0);
		func_58(uParam0);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_11));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
			}
			OBJECT::DELETE_OBJECT(&(uParam0->f_9));
		}
		func_56(uParam0);
		func_53(uParam0);
		if (uParam0->f_35 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_35);
		}
		if (uParam0->f_34 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_34);
		}
		if (uParam0->f_50)
		{
			__LIB_24__::func_731(uParam0->f_1);
		}
		if (__LIB_0__::func_43(uParam0->f_1) && (((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam2))
		{
			func_49(uParam0, 2, 0);
		}
		else
		{
			func_49(uParam0, 1, 0);
		}
		func_48(uParam0->f_1, 1);
		func_47(uParam0);
		func_43(uParam0->f_1);
		if (iParam1 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_8, false))
			{
				VEHICLE::DELETE_VEHICLE(&(uParam0->f_8));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && uParam0->f_7 != PLAYER::PLAYER_PED_ID())
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				PED::DELETE_PED(&(uParam0->f_7));
			}
			else if (iParam1 == 2)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_7));
			}
			else if (iParam1 == 4)
			{
				func_42(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 5)
			{
				func_14(uParam0->f_7, uParam0->f_1, Global_96288);
			}
			else if (iParam1 == 6)
			{
				func_11(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 3)
			{
			}
		}
		func_6(uParam0);
	}
}

void func_6(var uParam0)//Position - 0x5C8
{
	*uParam0 = 0;
	uParam0->f_1 = 145;
	uParam0->f_2 = 25;
	StringCopy(&(uParam0->f_3), "", 16);
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	__LIB_6__::func_892(&(uParam0->f_15));
	uParam0->f_21 = { 0f, 0f, 0f };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	__LIB_1__::func_37(&(uParam0->f_29));
	uParam0->f_32 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 7;
}

void func_11(int iParam0, int iParam1)//Position - 0x72A
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_399()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_WANDER_STANDARD"));
		if (iVar0 != 1 && iVar0 != 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
		}
	}
	func_12(iParam0, iParam1, 5);
}

void func_12(int iParam0, int iParam1, int iParam2)//Position - 0x78E
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (!__LIB_0__::func_43(iParam1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (Global_78319)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("friends_controller")) == 0)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (__LIB_0__::func_39(2))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if ((Global_43052 == 6 || Global_43052 == 7) && Global_96267 < 22)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else
	{
		if (!PED::IS_PED_INJURED(Global_96279[iParam1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
		Global_96279[iParam1] = iParam0;
		Global_96283[iParam1] = iParam2;
	}
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0x854
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	float* fVar4;
	int* iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_399()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
		TASK::CLEAR_PED_TASKS(iParam0);
		bVar0 = false;
		if (iParam2 == 44)
		{
			Var1 = { 1382.8588f, -1706.0695f, 62.8927f };
			bVar0 = true;
		}
		else if (iParam2 != -1)
		{
			iVar2 = Global_91229[iParam2 /*34*/].f_10;
			if (__LIB_30__::func_700(iVar2))
			{
				Var3 = { __LIB_11__::func_156(iVar2, __LIB_18__::func_173()) };
			}
			else
			{
				Var3 = { __LIB_11__::func_156(iVar2, 0) };
			}
			Var1 = { Var3 + __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0, true) - Var3) * Vector(50f, 50f, 50f) };
			if (func_15(Var1, &Var1, &fVar4, &iVar5, 1, 0, 1))
			{
				bVar0 = true;
			}
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 3072, 2);
		TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(800, 1200));
		if (bVar0)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 1f, -1, 0.25f, 5, 40000f);
		}
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
	}
	func_12(iParam0, iParam1, 4);
}

int func_15(struct<3> Param0, var* uParam1, float* fParam2, int* iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x990
{
	int iVar0;
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam4, uParam1, fParam2, iParam3, 1, 3f, 0f))
		{
			if (__LIB_24__::func_960(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam4++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam1 = { Param0 };
			return 0;
		}
	}
	return 0;
}

void func_42(int iParam0, int iParam1)//Position - 0x12F2
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_399()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED"));
		if (iVar0 != 1 && iVar0 != 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 5000f, -1, true, false);
		}
	}
	func_12(iParam0, iParam1, 6);
}

int func_43(int iParam0)//Position - 0x135C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_34__::func_224(iVar0, &iVar1, &iVar2);
		if (iVar1 == iParam0 || iVar2 == iParam0)
		{
			iVar4 = __LIB_11__::func_898(iVar0);
			if (iVar4 == 3 || iVar4 == 4)
			{
				__LIB_12__::func_295(iVar0, 0);
				iVar3 = 1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_47(var uParam0)//Position - 0x1495
{
	if (*uParam0 != 0)
	{
		if (uParam0->f_2 < 24)
		{
			if (uParam0->f_28 != 0)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_28, false);
				uParam0->f_28 = 0;
			}
		}
	}
}

void func_48(int iParam0, int iParam1)//Position - 0x14C3
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				Global_95447[8] = 140;
				break;
			case 1:
				break;
			case 2:
				Global_95447[9] = 140;
				break;
			case 19:
				Global_95447[6] = 140;
				break;
			case 14:
				Global_95447[0] = 140;
				break;
			case 17:
				Global_95447[2] = 140;
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (Global_95447[8] == 140)
				{
					Global_95447[8] = 141;
				}
				break;
			case 1:
				break;
			case 2:
				if (Global_95447[9] == 140)
				{
					Global_95447[9] = 141;
				}
				break;
			case 19:
				if (Global_95447[6] == 140)
				{
					Global_95447[6] = 141;
				}
				break;
			case 14:
				if (Global_95447[0] == 140)
				{
					Global_95447[0] = 141;
				}
				break;
			case 17:
				if (Global_95447[2] == 140)
				{
					Global_95447[2] = 141;
				}
				break;
			default:
				break;
			}
	}
}

void func_49(var uParam0, int iParam1, int iParam2)//Position - 0x15EC
{
	if (uParam0->f_50 || iParam2)
	{
		if (Local_49.f_3.f_1 != 145 && Local_49.f_3.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_3.f_1, uParam0->f_1, iParam1);
		}
		if (Local_49.f_56.f_50 && Local_49.f_56.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_56.f_1, uParam0->f_1, iParam1);
		}
		if (Local_49.f_109.f_50 && Local_49.f_109.f_1 != uParam0->f_1)
		{
			func_50(Local_49.f_109.f_1, uParam0->f_1, iParam1);
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)//Position - 0x1681
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_20__::func_260(iParam0);
	iVar1 = __LIB_20__::func_260(iParam1);
	iVar2 = func_51(iVar0, iVar1);
	if (iVar2 != 10)
	{
		__LIB_6__::func_892(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5));
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

int func_51(bool bParam0, bool bParam1)//Position - 0x16CE
{
	int iVar0;
	if ((bParam0 != 0 && bParam0 != 1) && bParam0 != 2)
	{
		if ((bParam1 == 0 || bParam1 == 1) || bParam1 == 2)
		{
			iVar0 = bParam1;
			bParam1 = bParam0;
			bParam0 = iVar0;
		}
	}
	switch (bParam0)
	{
		case 0:
			switch (bParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 0;
					break;
				case 2:
					return 2;
					break;
				case 3:
					return 10;
					break;
				case 4:
					return 5;
					break;
				case 5:
					return 8;
					break;
				default:
					return 10;
					break;
			}
			break;
		case 1:
			switch (bParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 10;
					break;
				case 2:
					return 1;
					break;
				case 3:
					return 3;
					break;
				case 4:
					return 6;
					break;
				case 5:
					return 10;
					break;
				default:
					return 10;
					break;
			}
			break;
		case 2:
			switch (bParam1)
			{
				case 0:
					return 2;
					break;
				case 1:
					return 1;
					break;
				case 2:
					return 10;
					break;
				case 3:
					return 4;
					break;
				case 4:
					return 7;
					break;
				case 5:
					return 10;
					break;
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

void func_53(var uParam0)//Position - 0x18B0
{
	if (*uParam0 != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_7, true);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_7, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 107, false);
			if (PED::DOES_GROUP_EXIST(__LIB_0__::func_399()) && PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
			{
				PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(uParam0->f_7, __LIB_0__::func_399(), false);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_7, false);
			if (uParam0->f_1 != 0)
			{
				if (__LIB_0__::func_382(4, uParam0->f_7))
				{
					__LIB_0__::func_387(4, uParam0->f_7, 0);
				}
			}
			if (uParam0->f_7 != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_GROUP(uParam0->f_7))
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				}
			}
		}
	}
}

void func_56(var uParam0)//Position - 0x1A56
{
	char* sVar0;
	if (func_57(uParam0, &sVar0))
	{
		STREAMING::REMOVE_ANIM_DICT(&sVar0);
	}
}

int func_57(var uParam0, char* sParam1)//Position - 0x1A6F
{
	if (uParam0->f_1 == 0)
	{
		StringCopy(sParam1, "friends@frm@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		StringCopy(sParam1, "friends@frf@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		StringCopy(sParam1, "friends@frt@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		StringCopy(sParam1, "friends@frl@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		StringCopy(sParam1, "friends@frj@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		StringCopy(sParam1, "friends@fra@ig_1", 64);
		return 1;
	}
	return 0;
}

void func_58(var uParam0)//Position - 0x1AFB
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_11));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
	if (uParam0->f_47 == 1)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		uParam0->f_47 = 0;
	}
	func_62("FR_HV_HORN" /* GXT: Press ~INPUT_VEH_HORN~ to use the vehicle horn and attract ~a~'s attention. */, &(uParam0->f_3));
	func_62("FR_H_PKUP", &(uParam0->f_3));
	func_62("FR_H_WAIT", &(uParam0->f_3));
	func_62("FR_H_DROPOFF0", &(uParam0->f_3));
	func_62("FR_H_DROPOFF1", &(uParam0->f_3));
	func_62("FR_H_DROPOFF2", &(uParam0->f_3));
	func_61("FR_GETBACK", &(uParam0->f_3));
	func_59("FR_GETBACK2");
}

void func_59(char* sParam0)//Position - 0x1B9B
{
	if (__LIB_0__::func_405(sParam0, 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}

void func_61(char* sParam0, char* sParam1)//Position - 0x1BD0
{
	if (__LIB_0__::func_405(sParam0, 1, sParam1))
	{
		HUD::CLEAR_PRINTS();
	}
}

void func_62(char* sParam0, char* sParam1)//Position - 0x1BE8
{
	if (__LIB_2__::func_161(sParam0, sParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_64(var uParam0, int iParam1)//Position - 0x1C19
{
	if (uParam0->f_47 || iParam1)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		uParam0->f_47 = 0;
	}
	func_62("FR_HV_HORN" /* GXT: Press ~INPUT_VEH_HORN~ to use the vehicle horn and attract ~a~'s attention. */, &(uParam0->f_3));
}

void func_65(var uParam0)//Position - 0x1C51
{
	if (*uParam0 != 0)
	{
		if (__LIB_0__::func_43(uParam0->f_1))
		{
			if (uParam0->f_45)
			{
				if ((Global_113386.f_18533[uParam0->f_1] == 2 || Global_113386.f_18533[uParam0->f_1] == 3) || Global_113386.f_18533[uParam0->f_1] == 4)
				{
					func_66(uParam0->f_1);
				}
				uParam0->f_45 = 0;
			}
		}
	}
}

void func_66(int iParam0)//Position - 0x1CBB
{
	if ((Global_113386.f_18533[iParam0] != 2 && Global_113386.f_18533[iParam0] != 3) && Global_113386.f_18533[iParam0] != 4)
	{
		return;
	}
	Global_113386.f_18533[iParam0] = 318;
	Global_98552[iParam0 /*109*/].f_3 = 145;
	Global_98552[iParam0 /*109*/].f_2 = 318;
	Global_98552[iParam0 /*109*/].f_4 = { 0f, 0f, 0f };
	Global_98552[iParam0 /*109*/].f_7 = 0f;
}

void func_71(int iParam0)//Position - 0x1DD2
{
	if (iParam0 < 9)
	{
		if (!BitTest(Global_113386.f_18103.f_175[iParam0 /*19*/].f_18, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_18103.f_175[iParam0 /*19*/].f_18), 0);
		}
	}
}

int func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int* iParam7, int iParam8, int iParam9)//Position - 0x1E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	struct<2> Var8;
	struct<2> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<3> Var33;
	struct<3> Var34;
	iVar0 = 0;
	if (uParam0->f_124 < 2f)
	{
		if (*uParam3 >= 402)
		{
			iVar0 = 1;
		}
	}
	else if (*uParam3 >= 403 && SYSTEM::TIMERA() > SYSTEM::ROUND(((uParam0->f_124 - 2f) * 1000f)))
	{
		iVar0 = 1;
	}
	if (*uParam3 > 301 && *uParam3 < 900)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam3 = 900;
		}
		else if (iVar0 == 0)
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (__LIB_6__::func_841(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
		}
	}
	if (*uParam3 > 0)
	{
		if (*uParam4 < MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_42__::func_11(PLAYER::PLAYER_PED_ID(), 5000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam5))
			{
				if (__LIB_7__::func_320(iParam5))
				{
					__LIB_42__::func_11(iParam5, 5000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam6))
			{
				if (__LIB_7__::func_320(iParam6))
				{
					__LIB_42__::func_11(iParam6, 5000);
				}
			}
			*uParam4 = MISC::GET_GAME_TIMER() + 5000;
		}
	}
	if (*uParam3 == 0)
	{
		func_160(uParam0->f_105, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		__LIB_0__::func_296();
		*iParam7 = 0;
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_42__::func_11(PLAYER::PLAYER_PED_ID(), 6000);
			}
		}
		if (!PED::IS_PED_INJURED(iParam5))
		{
			if (__LIB_7__::func_320(iParam5))
			{
				__LIB_42__::func_11(iParam5, 6000);
			}
		}
		if (!PED::IS_PED_INJURED(iParam6))
		{
			if (__LIB_7__::func_320(iParam6))
			{
				__LIB_42__::func_11(iParam6, 6000);
			}
		}
		*uParam4 = MISC::GET_GAME_TIMER() + 5000;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			*uParam3 = 101;
		}
		else
		{
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 101)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_109, 1f, 20000, 0.25f, 0, 40000f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		if (!PED::IS_PED_INJURED(iParam5))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam5, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 550, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_112[0 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(iParam5, iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		if (!PED::IS_PED_INJURED(iParam6))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam6, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 800, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_112[1 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(iParam6, iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		SYSTEM::SETTIMERA(0);
		*uParam3++;
	}
	else if (*uParam3 == 102)
	{
		if (SYSTEM::TIMERA() > 1500)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 301)
	{
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		*uParam1 = func_158(uParam0, iParam7, iParam5, iParam6, iParam8, iParam9, iVar3);
		if (*uParam1 == 3)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
			{
				if (SYSTEM::TIMERA() < 15000)
				{
					*iParam7 = func_157(uParam0->f_105, uParam0->f_108);
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
					{
						return 0;
					}
				}
				else
				{
					*uParam1 = 0;
					*iParam7 = iVar3;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam7, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam7, true, false);
			}
		}
		if (*uParam1 != 1)
		{
			if (iParam8 != *iParam7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam8))
				{
					VEHICLE::DELETE_VEHICLE(&iParam8);
				}
			}
		}
		if (*uParam1 != 2)
		{
			if (iParam9 != *iParam7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam9))
				{
					VEHICLE::DELETE_VEHICLE(&iParam9);
				}
			}
		}
		if (*uParam1 != 0)
		{
			if (*iParam7 != iVar3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_155(iVar3, &(uParam0->f_135), 0);
				}
			}
		}
		if (*uParam1 == 2)
		{
			*uParam1 = 1;
		}
		Var4 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var5 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_109, 150f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_109, 150f, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(Var4, Var5, false, 0);
		PATHFIND::SET_ROADS_IN_AREA(Var4, Var5, false, true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, true);
			if (__LIB_7__::func_320(iParam5))
			{
				__LIB_42__::func_11(PLAYER::PLAYER_PED_ID(), 20000);
			}
			if (__LIB_1__::func_197(iParam5))
			{
				TASK::CLEAR_PED_TASKS(iParam5);
				AUDIO::STOP_PED_SPEAKING(iParam5, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam5, true);
				PED::SET_PED_CONFIG_FLAG(iParam5, 240, true);
				if (PED::IS_PED_IN_GROUP(iParam5))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam5);
				}
				if (__LIB_7__::func_320(iParam5))
				{
					__LIB_42__::func_11(iParam5, 20000);
				}
			}
			if (__LIB_1__::func_197(iParam6))
			{
				TASK::CLEAR_PED_TASKS(iParam6);
				AUDIO::STOP_PED_SPEAKING(iParam6, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam6, true);
				PED::SET_PED_CONFIG_FLAG(iParam6, 240, true);
				if (PED::IS_PED_IN_GROUP(iParam6))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam6);
				}
				if (__LIB_7__::func_320(iParam6))
				{
					__LIB_42__::func_11(iParam6, 20000);
				}
			}
			MISC::CLEAR_AREA(uParam0->f_109, 15f, true, false, false, false);
			Var6 = { uParam0->f_109 + Vector(1f, 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &(Var6.f_2), false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var6, true, false, false, true);
			__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), uParam0->f_112[0 /*3*/] + uParam0->f_112[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
			if (__LIB_1__::func_197(iParam5))
			{
				Var6 = { uParam0->f_112[0 /*3*/] + Vector(1f, 0f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &(Var6.f_2), false, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam5);
				ENTITY::SET_ENTITY_COORDS(iParam5, Var6, true, false, false, true);
				__LIB_10__::func_624(iParam5, uParam0->f_109);
			}
			if (__LIB_1__::func_197(iParam6))
			{
				Var6 = { uParam0->f_112[1 /*3*/] + Vector(1f, 0f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &(Var6.f_2), false, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam6);
				ENTITY::SET_ENTITY_COORDS(iParam6, Var6, true, false, false, true);
				__LIB_10__::func_624(iParam6, uParam0->f_109);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam7, false))
				{
					VEHICLE::DELETE_VEHICLE(iParam7);
				}
				else
				{
					MISC::CLEAR_AREA(uParam0->f_105, 15f, true, false, false, false);
					ENTITY::SET_ENTITY_COORDS(*iParam7, uParam0->f_105, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(*iParam7, uParam0->f_108);
					if (*uParam1 == 1)
					{
						if (!func_152(*iParam7, uParam0->f_132))
						{
							ENTITY::SET_ENTITY_HEADING(*iParam7, (uParam0->f_108 + 180f));
						}
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam7, 5f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(*iParam7, true);
				}
			}
			if (*uParam1 == 0)
			{
				if (*iParam7 == iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar3);
						if (iVar7 != 0)
						{
							MISC::GET_MODEL_DIMENSIONS(iVar7, &Var8, &Var9);
							if (((Var9.f_0 > 2.5f || Var9.f_1 > 4f) || Var8.f_0 < -2.5f) || Var8.f_1 < -4f)
							{
								func_155(iVar3, &(uParam0->f_135), 1);
							}
						}
					}
				}
			}
			func_151(uParam0[0 /*15*/]);
			SYSTEM::SETTIMERA(-SYSTEM::ROUND((uParam0->f_123 * 1000f)));
			SYSTEM::SETTIMERB(0);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		*uParam3++;
	}
	else if (*uParam3 == 302)
	{
		if (SYSTEM::TIMERA() > 0)
		{
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
					{
						iVar10 = 60;
					}
					else if (__LIB_1__::func_197(iParam5) && __LIB_1__::func_197(iParam6))
					{
						iVar10 = 61;
					}
					else
					{
						iVar10 = 59;
					}
					iVar11 = iParam5;
					if (PED::IS_PED_INJURED(iParam5))
					{
						iVar11 = iParam6;
					}
					if (__LIB_1__::func_197(iVar11))
					{
						if (func_128(PLAYER::PLAYER_PED_ID(), iVar11, iVar10, uParam2))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar11, -1, 2048, 4);
							*uParam3++;
						}
					}
					else
					{
						*uParam3++;
					}
				}
			}
			else
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 303)
	{
		if (!__LIB_0__::func_75())
		{
			if (SYSTEM::TIMERB() > SYSTEM::ROUND(((uParam0[0 /*15*/])->f_13 * 1000f)))
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 304)
	{
		if ((PED::IS_PED_INJURED(iParam5) || !PED::IS_PED_IN_ANY_VEHICLE(iParam5, false)) && (PED::IS_PED_INJURED(iParam6) || !PED::IS_PED_IN_ANY_VEHICLE(iParam6, false)))
		{
			if (uParam0->f_127 && !PED::IS_PED_INJURED(iParam6))
			{
				func_151(uParam0[2 /*15*/]);
			}
			else
			{
				func_151(uParam0[1 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 305)
	{
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_197(iParam5))
		{
			iVar12 = __LIB_18__::func_173();
			iVar13 = func_124(iParam5);
			iVar14 = 50;
			if (iVar12 != 145 && iVar13 != 145)
			{
				iVar14 = func_123(iVar12, iVar13);
			}
			if (__LIB_7__::func_320(iParam5))
			{
				iVar15 = 65;
			}
			else if (iVar14 < 20)
			{
				iVar15 = 64;
			}
			else if (iVar14 < 40)
			{
				iVar15 = 63;
			}
			else
			{
				iVar15 = 62;
			}
			if (func_128(PLAYER::PLAYER_PED_ID(), iParam5, iVar15, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 306)
	{
		if (!__LIB_0__::func_75())
		{
			if (uParam0->f_127 == 0 && !PED::IS_PED_INJURED(iParam6))
			{
				func_151(uParam0[2 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 307)
	{
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_197(iParam6))
		{
			iVar16 = __LIB_18__::func_173();
			iVar17 = func_124(iParam6);
			iVar18 = 50;
			if (iVar16 != 145 && iVar17 != 145)
			{
				iVar18 = func_123(iVar16, iVar17);
			}
			if (__LIB_7__::func_320(iParam6))
			{
				iVar19 = 65;
			}
			else if (iVar18 < 20)
			{
				iVar19 = 64;
			}
			else if (iVar18 < 40)
			{
				iVar19 = 63;
			}
			else
			{
				iVar19 = 62;
			}
			if (func_128(PLAYER::PLAYER_PED_ID(), iParam6, iVar19, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 308)
	{
		if (!__LIB_0__::func_75())
		{
			*uParam3 = 401;
		}
	}
	else if (*uParam3 == 401)
	{
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (*uParam1 != 1)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		iVar20 = 1;
		iVar21 = 2;
		if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
		{
			if (!PED::IS_PED_INJURED(iParam5))
			{
				Var22 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam7) };
				Var23 = { Var22.f_1, -Var22.f_0, 0f };
				Var24 = { ENTITY::GET_ENTITY_COORDS(iParam5, true) - ENTITY::GET_ENTITY_COORDS(*iParam7, true) };
				if (__LIB_0__::func_715(Var23, Var24) > 0f)
				{
					iVar20 = 2;
					iVar21 = 1;
				}
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam7) != iLocal_83)
			{
				if (!PED::IS_PED_INJURED(iParam5))
				{
					iVar20 = -1;
				}
				else
				{
					iVar20 = iVar21;
					iVar21 = -1;
				}
			}
		}
		if (__LIB_1__::func_197(iParam5))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam5);
			TASK::CLEAR_PED_TASKS(iParam5);
			if (*uParam1 == 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam5, uParam0->f_129, 1f, -1, 0.25f, 0, 40000f);
			}
			else if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
			{
				TASK::TASK_ENTER_VEHICLE(iParam5, *iParam7, 20000, iVar20, 1f, 1, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam5, uParam0->f_119, 1f, -1, 0.25f, 0, 40000f);
			}
		}
		if (__LIB_1__::func_197(iParam6))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam6);
			TASK::CLEAR_PED_TASKS(iParam6);
			TASK::OPEN_SEQUENCE_TASK(&iVar25);
			TASK::TASK_PAUSE(0, 500);
			if (*uParam1 == 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_129, 1f, -1, 0.25f, 0, 40000f);
			}
			else if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
			{
				TASK::TASK_ENTER_VEHICLE(0, *iParam7, 20000, iVar21, 1f, 1, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_119, 1f, -1, 0.25f, 0, 40000f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar25);
			TASK::TASK_PERFORM_SEQUENCE(iParam6, iVar25);
			TASK::CLEAR_SEQUENCE_TASK(&iVar25);
		}
		*uParam3++;
	}
	else if (*uParam3 == 402)
	{
		if (SYSTEM::TIMERA() > 500)
		{
			if (*uParam1 != 1)
			{
				func_151(uParam0[3 /*15*/]);
			}
			else
			{
				func_151(uParam0[4 /*15*/]);
			}
			SYSTEM::SETTIMERA(0);
			if (*uParam1 != 1)
			{
				*uParam3++;
			}
			else
			{
				*uParam3 = 501;
			}
		}
	}
	else if (*uParam3 == 403)
	{
		if (uParam0->f_124 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_124 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 10000)
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		else if (SYSTEM::TIMERA() > 2500)
		{
			if (*uParam1 != 3)
			{
				if ((PED::IS_PED_INJURED(iParam5) || !ENTITY::IS_ENTITY_AT_ENTITY(iParam5, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0)) && (PED::IS_PED_INJURED(iParam6) || !ENTITY::IS_ENTITY_AT_ENTITY(iParam6, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0)))
				{
					*uParam3 = 900;
				}
				else if ((!PED::IS_PED_INJURED(iParam5) && ENTITY::IS_ENTITY_AT_COORD(iParam5, uParam0->f_119, 0.5f, 0.5f, 0.5f, false, true, 0)) || (!PED::IS_PED_INJURED(iParam6) && ENTITY::IS_ENTITY_AT_COORD(iParam6, uParam0->f_119, 0.5f, 0.5f, 0.5f, false, true, 0)))
				{
					*uParam3 = 900;
				}
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false) || !ENTITY::IS_ENTITY_AT_ENTITY(*iParam7, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, false, true, 0))
			{
				*uParam3 = 900;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false) && ENTITY::IS_ENTITY_AT_COORD(*iParam7, uParam0->f_132, 1f, 1f, 1f, false, true, 0))
			{
				*uParam3 = 900;
			}
		}
		if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false))
		{
			if ((PED::IS_PED_INJURED(iParam5) || PED::IS_PED_IN_ANY_VEHICLE(iParam5, false)) && (PED::IS_PED_INJURED(iParam6) || PED::IS_PED_IN_ANY_VEHICLE(iParam6, false)))
			{
				iVar26 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, false);
				if (!PED::IS_PED_INJURED(iVar26))
				{
					if (!__LIB_4__::func_465(iVar26, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")))
					{
						TASK::CLEAR_PED_TASKS(iVar26);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar26, *iParam7, uParam0->f_132, 10f, 0, iLocal_83, 786603, 5f, 5f);
					}
				}
			}
		}
	}
	else if (*uParam3 == 501)
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
		else if ((PED::IS_PED_INJURED(iParam5) || !ENTITY::IS_ENTITY_ON_SCREEN(iParam5)) && (PED::IS_PED_INJURED(iParam6) || !ENTITY::IS_ENTITY_ON_SCREEN(iParam6)))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 502)
	{
		if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_125 * 1000f)))
		{
			iVar27 = 0;
			if (!PED::IS_PED_INJURED(iParam5))
			{
				PED::SET_PED_INTO_VEHICLE(iParam5, *iParam7, -1);
				if (!PED::IS_PED_INJURED(iParam6))
				{
					PED::SET_PED_INTO_VEHICLE(iParam6, *iParam7, 0);
				}
				iVar27 = iParam5;
			}
			else if (!PED::IS_PED_INJURED(iParam6))
			{
				PED::SET_PED_INTO_VEHICLE(iParam6, *iParam7, -1);
				iVar27 = iParam6;
			}
			if (!PED::IS_PED_INJURED(iVar27))
			{
				TASK::CLEAR_PED_TASKS(iVar27);
				TASK::OPEN_SEQUENCE_TASK(&iVar28);
				TASK::TASK_PAUSE(0, 750);
				iVar29 = 786469 | 512;
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, *iParam7, uParam0->f_132, 10f, 0, ENTITY::GET_ENTITY_MODEL(*iParam7), iVar29, 5f, 5f);
				TASK::CLOSE_SEQUENCE_TASK(iVar28);
				TASK::TASK_PERFORM_SEQUENCE(iVar27, iVar28);
				TASK::CLEAR_SEQUENCE_TASK(&iVar28);
			}
			SYSTEM::SETTIMERA(0);
			func_151(uParam0[5 /*15*/]);
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), uParam0->f_105);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 503)
	{
		if (uParam0->f_126 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_126 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 20000)
		{
			*uParam3 = 900;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false) || !ENTITY::IS_ENTITY_ON_SCREEN(*iParam7))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 504)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			*uParam3 = 900;
		}
	}
	else if (*uParam3 == 900)
	{
		if (*uParam1 != 1)
		{
			func_120(&(uParam0->f_91), uParam0->f_97);
		}
		else
		{
			func_120(&(uParam0->f_98), uParam0->f_104);
		}
		__LIB_0__::func_296();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam7) && !ENTITY::IS_ENTITY_DEAD(*iParam7, false))
		{
			if (__LIB_1__::func_197(iParam5) && func_116(*iParam7, iParam5))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam7, 2);
			}
			if (__LIB_1__::func_197(Local_49.f_109.f_7) && func_116(*iParam7, iParam6))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam7, 2);
			}
		}
		if (__LIB_1__::func_197(iParam5))
		{
			iVar30 = func_124(iParam5);
			if (__LIB_0__::func_43(iVar30))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false) && PED::IS_PED_IN_VEHICLE(iParam5, *iParam7, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, false) == iParam5)
				{
					ENTITY::SET_ENTITY_COORDS(*iParam7, uParam0->f_140[2 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(*iParam7, uParam0->f_150[2]);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam7, 5f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iParam5, uParam0->f_140[0 /*3*/] - Vector(1f, 0f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iParam5, uParam0->f_150[0]);
				}
				func_91(iParam5, 0);
				func_84(iParam5, &(Global_99845[iVar30 /*98*/]), &(Global_100148[iVar30 /*3*/]), &(Global_100158[iVar30]), &(Global_100140[iVar30]), &(Global_4541522[iVar30]));
				Global_113386.f_18533[iVar30] = 318;
				if (Global_100140[iVar30] == 1)
				{
					Global_100140[iVar30] = 0;
				}
			}
			PED::DELETE_PED(&iParam5);
		}
		if (__LIB_1__::func_197(iParam6))
		{
			iVar31 = func_124(iParam6);
			if (__LIB_0__::func_43(iVar31))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam7, false) && PED::IS_PED_IN_VEHICLE(iParam6, *iParam7, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, false) == iParam6)
				{
					ENTITY::SET_ENTITY_COORDS(*iParam7, uParam0->f_140[2 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(*iParam7, uParam0->f_150[2]);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam7, 5f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iParam6, uParam0->f_140[1 /*3*/] - Vector(1f, 0f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iParam6, uParam0->f_150[1]);
				}
				func_91(iParam6, 0);
				func_84(iParam6, &(Global_99845[iVar31 /*98*/]), &(Global_100148[iVar31 /*3*/]), &(Global_100158[iVar31]), &(Global_100140[iVar31]), &(Global_4541522[iVar31]));
				Global_113386.f_18533[iVar31] = 318;
				if (Global_100140[iVar31] == 1)
				{
					Global_100140[iVar31] = 0;
				}
			}
			PED::DELETE_PED(&iParam6);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
		{
			if (*uParam1 != 3)
			{
				if (*uParam1 == 1)
				{
					VEHICLE::DELETE_VEHICLE(iParam7);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam7);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam7, false))
				{
					iVar32 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar32))
					{
						PED::DELETE_PED(&iVar32);
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam7);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
		*uParam3++;
	}
	else if (*uParam3 == 901)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_84[0]))
		{
			CAM::DESTROY_CAM(iLocal_84[0], false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_84[1]))
		{
			CAM::DESTROY_CAM(iLocal_84[1], false);
		}
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, false);
		}
		Var33 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var34 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var33, Var34, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var33, Var34, 1);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		__LIB_35__::func_891(0, 0, 1, 1);
		return 1;
	}
	return 0;
}

void func_84(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x35C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = __LIB_18__::func_168(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar2], false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100144[iVar2], -1, false))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar2], true) };
						if (ENTITY::GET_ENTITY_MODEL(Global_100144[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var4) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_100144[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_85(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_85(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x3699
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_113386.f_9085.f_99.f_58[45] || Global_113386.f_9085.f_99.f_58[12]) || Global_113386.f_9085.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false) || iParam7)
		{
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_77137.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar0], false))
			{
				if (!__LIB_6__::func_769(Global_100144[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_100144[iVar0], false))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar0], true) };
					if (__LIB_10__::func_265(iParam0, Global_100144[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var3) < 22500f)
						{
							*uParam3 = { Var3 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_100144[iVar0]);
							*uParam5 = 1;
							Global_100144[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var3) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar5))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar5);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar4 = 0;
		while (iVar4 < 12)
		{
			uParam2->f_11[iVar4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar4 + 1);
			iVar4++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, false))
		{
			iVar6 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar6 == 0 || iVar6 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		__LIB_0__::func_107(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_97 = __LIB_0__::func_117(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_113386.f_32749.f_69[0 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			case 1:
				if (Global_113386.f_32749.f_69[1 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			case 2:
				if (Global_113386.f_32749.f_69[2 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar4 = 0;
		while (iVar4 < uParam2->f_11)
		{
			uParam2->f_11[iVar4] = 0;
			iVar4++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

void func_91(int iParam0, bool bParam1)//Position - 0x3FDB
{
	func_104(iParam0);
	__LIB_32__::func_749(iParam0, bParam1);
	__LIB_34__::func_233(iParam0);
	__LIB_18__::func_218(iParam0);
	__LIB_34__::func_232(iParam0);
	__LIB_34__::func_231(iParam0);
	__LIB_34__::func_230(iParam0);
}

void func_104(int iParam0)//Position - 0x56E8
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_37__::func_609();
	}
}

int func_116(int iParam0, int iParam1)//Position - 0x5A0B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<82> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!__LIB_0__::func_654(iParam0, 1))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			iVar1 = func_124(iParam1);
			bVar2 = __LIB_0__::func_43(iVar1);
			if (iVar1 < __LIB_0__::func_505())
			{
				Var3.f_11 = 12;
				Var3.f_31 = 49;
				Var3.f_81 = 2;
				if (bVar2)
				{
					__LIB_0__::func_120(iVar1, &Var3, 1);
				}
				else
				{
					func_117(iVar1, &Var3, 1);
				}
				if (Var3.f_0 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3.f_0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3.f_0)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					__LIB_0__::func_120(iVar1, &Var3, 2);
				}
				else
				{
					func_117(iVar1, &Var3, 2);
				}
				if (Var3.f_0 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3.f_0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3.f_0)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					__LIB_0__::func_120(iVar1, &Var3, 3);
				}
				else
				{
					func_117(iVar1, &Var3, 3);
				}
				if (Var3.f_0 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3.f_0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3.f_0)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0x5B4A
{
	int iVar0;
	struct<98> Var1;
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("tribike"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1.f_0 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				case joaat("faggio2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1.f_0 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				case joaat("emperor"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		case 29:
			Var1.f_0 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		case 30:
			Var1.f_0 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		default:
			break;
	}
	*iParam1 = { Var1 };
}

int func_120(var uParam0, float fParam1)//Position - 0x61D9
{
	if (CAM::DOES_CAM_EXIST(iLocal_84[0]))
	{
		CAM::DESTROY_CAM(iLocal_84[0], false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_84[1]))
	{
		CAM::DESTROY_CAM(iLocal_84[1], false);
	}
	iLocal_84[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (CAM::DOES_CAM_EXIST(iLocal_84[0]))
	{
		CAM::SET_CAM_COORD(iLocal_84[0], *uParam0);
		CAM::SET_CAM_ROT(iLocal_84[0], uParam0->f_3, 2);
		CAM::SET_CAM_FOV(iLocal_84[0], fParam1);
		CAM::SET_CAM_ACTIVE(iLocal_84[0], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

int func_123(int iParam0, int iParam1)//Position - 0x62BE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	iVar2 = func_51(bVar0, bVar1);
	return Global_113386.f_18103.f_175[iVar2 /*19*/].f_17;
}

int func_124(int iParam0)//Position - 0x62EF
{
	int iVar0;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (iVar0 == 145)
	{
		iVar0 = __LIB_26__::func_456(iParam0);
	}
	return iVar0;
}

int func_128(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x6395
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	int iVar3;
	iVar2 = func_124(iParam0);
	iVar3 = func_124(iParam1);
	__LIB_34__::func_228(uParam3, iVar2, iParam0, 1);
	__LIB_34__::func_228(uParam3, iVar3, iParam1, 1);
	if (func_143(iVar2, iVar3, iParam2, &sVar0, &cVar1))
	{
		if (__LIB_35__::func_536(uParam3, &sVar0, &cVar1, 4, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x6B03
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	if (bVar0 == 7 || bVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { func_144(bVar0, bVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "PkOk", 16);
			break;
		case 1:
			StringConCat(sParam4, "PkLt", 16);
			break;
		case 2:
			StringConCat(sParam4, "PkFt", 16);
			break;
		case 3:
			StringConCat(sParam4, "PkFul", 16);
			break;
		case 4:
			StringConCat(sParam4, "PkOdd", 16);
			break;
		case 5:
			StringConCat(sParam4, "PkUDr", 16);
			break;
		case 6:
			StringConCat(sParam4, "GrOk", 16);
			break;
		case 7:
			StringConCat(sParam4, "GrIr", 16);
			break;
		case 8:
			StringConCat(sParam4, "GrVi", 16);
			break;
		case 9:
			StringConCat(sParam4, "GrPl", 16);
			break;
		case 10:
			StringConCat(sParam4, "GrUDr", 16);
			break;
		case 11:
			StringConCat(sParam4, "AmbH_ok", 16);
			break;
		case 12:
			StringConCat(sParam4, "AmbH_rc", 16);
			break;
		case 13:
			StringConCat(sParam4, "AmbH_ir", 16);
			break;
		case 14:
			StringConCat(sParam4, "AmbB_mi", 16);
			break;
		case 15:
			StringConCat(sParam4, "AmbB_ok", 16);
			break;
		case 16:
			StringConCat(sParam4, "AmbO_qu", 16);
			break;
		case 17:
			StringConCat(sParam4, "AmbO_Y1", 16);
			break;
		case 18:
			StringConCat(sParam4, "AmbO_Y2", 16);
			break;
		case 19:
			StringConCat(sParam4, "AmbO_N1", 16);
			break;
		case 20:
			StringConCat(sParam4, "AmbG_ok", 16);
			break;
		case 21:
			StringConCat(sParam4, "AmbG_ir", 16);
			break;
		case 22:
			StringConCat(sParam4, "AmbS1", 16);
			break;
		case 23:
			StringConCat(sParam4, "AmbS2", 16);
			break;
		case 24:
			StringConCat(sParam4, "AmbS3", 16);
			break;
		case 25:
			StringConCat(sParam4, "AmbS4_1", 16);
			break;
		case 26:
			StringConCat(sParam4, "AmbS4_2", 16);
			break;
		case 27:
			StringConCat(sParam4, "AmbS4_3", 16);
			break;
		case 28:
			StringConCat(sParam4, "AmbS4_4", 16);
			break;
		case 29:
			StringConCat(sParam4, "AmbS_ft", 16);
			break;
		case 30:
			StringConCat(sParam4, "AmbT1", 16);
			break;
		case 31:
			StringConCat(sParam4, "AmbT1_r", 16);
			break;
		case 32:
			StringConCat(sParam4, "AmbT2", 16);
			break;
		case 33:
			StringConCat(sParam4, "AmbT3", 16);
			break;
		case 34:
			StringConCat(sParam4, "AmbT4", 16);
			break;
		case 35:
			StringConCat(sParam4, "AmbP1a", 16);
			break;
		case 36:
			StringConCat(sParam4, "AmbP1b", 16);
			break;
		case 37:
			StringConCat(sParam4, "AmbP1c", 16);
			break;
		case 38:
			StringConCat(sParam4, "AmbP2", 16);
			break;
		case 39:
			StringConCat(sParam4, "VDrunk", 16);
			break;
		case 40:
			StringConCat(sParam4, "Satis", 16);
			break;
		case 41:
			StringConCat(sParam4, "Done", 16);
			break;
		case 42:
			StringConCat(sParam4, "ZnStory", 16);
			break;
		case 43:
			StringConCat(sParam4, "ZnSquad", 16);
			break;
		case 44:
			StringConCat(sParam4, "ZnDrunk", 16);
			break;
		case 45:
			StringConCat(sParam4, "ZnCncl", 16);
			break;
		case 46:
			StringConCat(sParam4, "ZnCnclD", 16);
			break;
		case 47:
			StringConCat(sParam4, "RjTime", 16);
			break;
		case 48:
			StringConCat(sParam4, "RjOk", 16);
			break;
		case 49:
			StringConCat(sParam4, "RjCrazy", 16);
			break;
		case 50:
			StringConCat(sParam4, "RjStuck", 16);
			break;
		case 51:
			StringConCat(sParam4, "SqStart", 16);
			break;
		case 52:
			StringConCat(sParam4, "SqPass", 16);
			break;
		case 53:
			StringConCat(sParam4, "NewH", 16);
			break;
		case 54:
			StringConCat(sParam4, "NewC", 16);
			break;
		case 55:
			StringConCat(sParam4, "NewT", 16);
			break;
		case 56:
			StringConCat(sParam4, "CinMlt", 16);
			break;
		case 57:
			StringConCat(sParam4, "CarDam", 16);
			break;
		case 58:
			StringConCat(sParam4, "PedDam", 16);
			break;
		case 59:
			StringConCat(sParam4, "DrpOp", 16);
			break;
		case 60:
			StringConCat(sParam4, "DrpOpDr", 16);
			break;
		case 61:
			StringConCat(sParam4, "DrpOpPl", 16);
			break;
		case 62:
			StringConCat(sParam4, "DrpA", 16);
			break;
		case 63:
			StringConCat(sParam4, "DrpB", 16);
			break;
		case 64:
			StringConCat(sParam4, "DrpC", 16);
			break;
		case 65:
			StringConCat(sParam4, "DrpDr", 16);
			break;
		case 66:
			StringConCat(sParam4, "DrpCar", 16);
			break;
		case 67:
			StringConCat(sParam4, "Death", 16);
			break;
		default:
			if (iParam2 != 69)
			{
			}
			return 0;
			break;
	}
	return 1;
}

struct<4> func_144(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x6FF0
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam0), 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam0), 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (bParam2 < bParam1)
		{
			iVar1 = bParam1;
			bParam1 = bParam2;
			bParam2 = iVar1;
		}
		if (bParam1 < bParam0)
		{
			iVar2 = bParam0;
			bParam0 = bParam1;
			bParam1 = iVar2;
		}
		if (bParam2 < bParam1)
		{
			iVar3 = bParam1;
			bParam1 = bParam2;
			bParam2 = iVar3;
		}
		StringConCat(&Var0, __LIB_24__::func_735(bParam0), 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam1), 16);
		if (bParam2 != 7)
		{
			StringConCat(&Var0, __LIB_24__::func_735(bParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam0), 16);
		StringConCat(&Var0, __LIB_24__::func_735(bParam1), 16);
		if (bParam2 != 7)
		{
			StringConCat(&Var0, __LIB_24__::func_735(bParam2), 16);
		}
	}
	return Var0;
}

int func_151(var uParam0)//Position - 0x7317
{
	if (uParam0->f_14)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_84[0]))
		{
			CAM::DESTROY_CAM(iLocal_84[0], false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_84[1]))
		{
			CAM::DESTROY_CAM(iLocal_84[1], false);
		}
		iLocal_84[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		iLocal_84[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		if (CAM::DOES_CAM_EXIST(iLocal_84[0]) && CAM::DOES_CAM_EXIST(iLocal_84[1]))
		{
			CAM::SET_CAM_COORD(iLocal_84[0], *uParam0);
			CAM::SET_CAM_ROT(iLocal_84[0], uParam0->f_3, 2);
			CAM::SET_CAM_FOV(iLocal_84[0], uParam0->f_12);
			CAM::SET_CAM_COORD(iLocal_84[1], uParam0->f_6);
			CAM::SET_CAM_ROT(iLocal_84[1], uParam0->f_6.f_3, 2);
			CAM::SET_CAM_FOV(iLocal_84[1], uParam0->f_12);
			CAM::SHAKE_CAM(iLocal_84[0], "HAND_SHAKE", 0.25f);
			CAM::SHAKE_CAM(iLocal_84[1], "HAND_SHAKE", 0.25f);
			if (uParam0->f_13 > 0.1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84[1], iLocal_84[0], SYSTEM::ROUND((uParam0->f_13 * 1000f)), 1, 1);
			}
			else
			{
				CAM::SET_CAM_ACTIVE(iLocal_84[0], true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0, struct<3> Param1)//Position - 0x7460
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	if (__LIB_0__::func_715(Var0, Var1) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_155(int iParam0, var uParam1, int iParam2)//Position - 0x7517
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<3> Var3;
	bool bVar4;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		VEHICLE::DELETE_VEHICLE(&iParam0);
	}
	else
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var2);
		Var3 = { 0f, 0f, 0f };
		bVar4 = false;
		Var2.f_0 = (Var2.f_0 - 1.02f);
		Var1.f_0 = (Var1.f_0 + 1.02f);
		Var2.f_1 = (Var2.f_1 - 2.57f);
		Var1.f_1 = (Var1.f_1 + 2.61f);
		if (__LIB_0__::func_517(uParam1->f_4, 1) && (iParam2 || Var2.f_0 > 0f))
		{
			Var3.f_0 = (Var3.f_0 - Var2.f_0);
			bVar4 = true;
		}
		else if (__LIB_0__::func_517(uParam1->f_4, 2) && (iParam2 || Var1.f_0 < 0f))
		{
			Var3.f_0 = (Var3.f_0 - Var1.f_0);
			bVar4 = true;
		}
		if (__LIB_0__::func_517(uParam1->f_4, 4) && (iParam2 || Var1.f_1 < 0f))
		{
			Var3.f_1 = (Var3.f_1 - Var1.f_1);
			bVar4 = true;
		}
		else if (__LIB_0__::func_517(uParam1->f_4, 8) && (iParam2 || Var2.f_1 > 0f))
		{
			Var3.f_1 = (Var3.f_1 - Var2.f_1);
			bVar4 = true;
		}
		if (bVar4)
		{
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam1->f_3, Var3) };
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, *uParam1 + Vector(1f, 0f, 0f), false, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, uParam1->f_3);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, true);
	}
}

int func_157(struct<3> Param0, float fParam1)//Position - 0x7688
{
	int iVar0;
	int iVar1;
	STREAMING::REQUEST_MODEL(iLocal_82);
	STREAMING::REQUEST_MODEL(iLocal_83);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_82) && STREAMING::HAS_MODEL_LOADED(iLocal_83))
	{
		MISC::CLEAR_AREA(Param0, 6f, true, false, false, false);
		iVar0 = VEHICLE::CREATE_VEHICLE(iLocal_83, Param0, fParam1, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar0, 4, iLocal_82, -1, true, true);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
					return iVar0;
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iVar0);
			}
		}
	}
	return 0;
}

int func_158(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x772C
{
	int iVar0;
	iVar0 = 0;
	if (uParam0->f_128 == 0 && (uParam0[5 /*15*/])->f_14 == 0)
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	else if ((__LIB_1__::func_197(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false)) && ENTITY::IS_ENTITY_AT_COORD(iParam4, uParam0->f_105, 60f, 60f, 60f, false, true, 0))
	{
		*uParam1 = iParam4;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if ((__LIB_1__::func_197(iParam3) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam5, false)) && ENTITY::IS_ENTITY_AT_COORD(iParam5, uParam0->f_105, 60f, 60f, 60f, false, true, 0))
	{
		*uParam1 = iParam5;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (uParam0->f_128)
	{
		*uParam1 = 0;
		iVar0 = 3;
	}
	else
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	return iVar0;
}

void func_160(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x7824
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_277(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_162(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_277(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_162(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_277(PLAYER::PLAYER_PED_ID(), 8, 1) || func_277(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_162(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_277(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_162(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_43 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_43 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x7A1E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_78128++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { func_213(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
			if (iVar10 == joaat("Player_Zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_One"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_Two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_78173 };
		}
		else
		{
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { func_213(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_78190 };
						}
						else
						{
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { func_213(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_174(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("Player_One") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_174(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_213(iVar10, iVar0, func_171(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_170(iParam0, iVar10, &iVar4, 1))
							{
								func_162(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_162(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_213(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_162(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_213(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_162(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_213(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_162(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_213(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_162(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_213(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_162(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_213(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_174(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_174(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_174(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_162(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_165(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_170(iParam0, iVar10, &iVar4, 0))
		{
			func_162(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_163(iParam0, iVar10, &iVar4))
		{
			func_162(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x8230
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_277(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

void func_165(int iParam0, int iParam1, int iParam2)//Position - 0x82F7
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (func_167(iParam0, 12, iVar0))
	{
		if (__LIB_0__::func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__::func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

bool func_167(int iParam0, int iParam1, int iParam2)//Position - 0x845F
{
	Global_78130[1 /*14*/] = { func_213(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

int func_170(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8B24
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_277(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0, int iParam1, int iParam2)//Position - 0x8BBA
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_277(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_277(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9012
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_6__::func_795(iParam0, 1);
				iVar0 = __LIB_0__::func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__::func_795(iParam0, 2);
				iVar0 = __LIB_0__::func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__::func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__::func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__::func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_6__::func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__::func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_177(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_6__::func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_177(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__::func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_177(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_177(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_177(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_177(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__::func_829(iParam0, 3, 176, 191) && !__LIB_6__::func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_177(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_6__::func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__::func_795(iParam0, 11);
								iVar5 = func_176(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__::func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__::func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_6__::func_795(iParam0, 8);
								iVar8 = __LIB_6__::func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_176(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_176(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_6__::func_795(iParam0, 11);
								iVar0 = func_176(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9EA9
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_177(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_177(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_177(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA170
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_167(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

struct<14> func_213(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11F52
{
	__LIB_0__::func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		func_258(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_239(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_214(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_214(int iParam0, int iParam1)//Position - 0x11FA4
{
	switch (iParam0)
	{
		case 0:
			__LIB_24__::func_747(iParam1);
			break;
		case 2:
			__LIB_24__::func_746(iParam1);
			break;
		case 3:
			__LIB_26__::func_240(iParam1);
			break;
		case 4:
			__LIB_20__::func_198(iParam1);
			break;
		case 6:
			__LIB_20__::func_197(iParam1);
			break;
		case 5:
			__LIB_20__::func_196(iParam1);
			break;
		case 8:
			__LIB_20__::func_195(iParam1);
			break;
		case 9:
			__LIB_20__::func_194(iParam1);
			break;
		case 10:
			__LIB_20__::func_193(iParam1);
			break;
		case 1:
			__LIB_20__::func_192(iParam1);
			break;
		case 7:
			__LIB_20__::func_191(iParam1);
			break;
		case 11:
			__LIB_20__::func_190(iParam1);
			break;
		case 12:
			__LIB_20__::func_189(iParam1);
			break;
		case 13:
			__LIB_20__::func_188(iParam1);
			break;
		case 14:
			__LIB_20__::func_321(iParam1);
			break;
	}
}

void func_239(int iParam0, int iParam1)//Position - 0x189B4
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__::func_219(iParam1);
			break;
		case 2:
			__LIB_20__::func_218(iParam1);
			break;
		case 3:
			__LIB_26__::func_241(iParam1);
			break;
		case 4:
			__LIB_20__::func_214(iParam1);
			break;
		case 6:
			__LIB_20__::func_213(iParam1);
			break;
		case 5:
			__LIB_20__::func_212(iParam1);
			break;
		case 8:
			__LIB_20__::func_211(iParam1);
			break;
		case 9:
			__LIB_20__::func_210(iParam1);
			break;
		case 10:
			__LIB_20__::func_209(iParam1);
			break;
		case 1:
			__LIB_20__::func_208(iParam1);
			break;
		case 7:
			__LIB_20__::func_207(iParam1);
			break;
		case 11:
			__LIB_20__::func_206(iParam1);
			break;
		case 12:
			__LIB_20__::func_205(iParam1);
			break;
		case 13:
			__LIB_24__::func_748(iParam1);
			break;
		case 14:
			__LIB_20__::func_203(iParam1);
			break;
	}
}

void func_258(int iParam0, int iParam1)//Position - 0x204A5
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__::func_235(iParam1);
			break;
		case 2:
			__LIB_20__::func_234(iParam1);
			break;
		case 3:
			__LIB_26__::func_242(iParam1);
			break;
		case 4:
			__LIB_24__::func_750(iParam1);
			break;
		case 6:
			__LIB_20__::func_230(iParam1);
			break;
		case 5:
			__LIB_20__::func_229(iParam1);
			break;
		case 8:
			__LIB_20__::func_228(iParam1);
			break;
		case 9:
			__LIB_20__::func_227(iParam1);
			break;
		case 10:
			__LIB_20__::func_226(iParam1);
			break;
		case 1:
			__LIB_20__::func_225(iParam1);
			break;
		case 7:
			__LIB_20__::func_224(iParam1);
			break;
		case 11:
			__LIB_20__::func_223(iParam1);
			break;
		case 12:
			__LIB_20__::func_222(iParam1);
			break;
		case 13:
			__LIB_20__::func_221(iParam1);
			break;
		case 14:
			__LIB_20__::func_220(iParam1);
			break;
	}
}

int func_277(int iParam0, int iParam1, int iParam2)//Position - 0x25ABC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { func_213(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_277(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_277(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_213(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_277(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_213(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_277(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0, var uParam1)//Position - 0x2605A
{
	switch (iParam0)
	{
		case 7:
			*(uParam1[0 /*15*/]) = { 405.9127f, -711.7676f, 31.2618f };
			(uParam1[0 /*15*/])->f_3 = { 19.919f, 0f, 90.3396f };
			(uParam1[0 /*15*/])->f_6 = { 405.4205f, -711.784f, 29.3979f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.5077f, 0f, 99.6259f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 398.0591f, -714.2009f, 29.6786f };
			(uParam1[1 /*15*/])->f_3 = { -2.2484f, 0.0024f, 51.3791f };
			(uParam1[1 /*15*/])->f_6 = { 397.969f, -714.1289f, 29.6741f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.2484f, 0.0024f, 51.174f };
			(uParam1[1 /*15*/])->f_12 = 38.1457f;
			(uParam1[1 /*15*/])->f_13 = 5.58f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 398.3901f, -714.3004f, 29.7155f };
			(uParam1[2 /*15*/])->f_3 = { -1.9825f, -0.0437f, 50.2219f };
			(uParam1[2 /*15*/])->f_6 = { 398.3167f, -714.2393f, 29.7122f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.9825f, -0.0437f, 48.076f };
			(uParam1[2 /*15*/])->f_12 = 39.2093f;
			(uParam1[2 /*15*/])->f_13 = 13f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 405.5188f, -709.9571f, 29.6613f };
			(uParam1[3 /*15*/])->f_3 = { -2.8617f, 0.0312f, 110.409f };
			(uParam1[3 /*15*/])->f_6 = { 405.8275f, -709.2303f, 29.6882f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.8617f, 0.0312f, 103.4981f };
			(uParam1[3 /*15*/])->f_12 = 38.1457f;
			(uParam1[3 /*15*/])->f_13 = 8.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_6 = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 397.4691f, -712.0601f, 29.7563f };
			uParam1->f_91.f_3 = { -5.987f, -0.017f, 154.1207f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 397.6112f, -710.4716f, 29.7051f };
			uParam1->f_98.f_3 = { 4.6835f, -0.3053f, 163.9312f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 401.2501f, -709.6287f, 28.1688f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 396.8529f, -713.7012f, 28.2854f };
			uParam1->f_112[0 /*3*/] = { 395.8499f, -711.9299f, 28.2849f };
			uParam1->f_112[1 /*3*/] = { 397.0676f, -712.2994f, 28.285f };
			uParam1->f_119 = { 396.5359f, -692.8924f, 28.2871f };
			uParam1->f_123 = 1.55f;
			uParam1->f_124 = 7.705f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.115f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 398.3131f, -708.6296f, 28.2844f };
			uParam1->f_132 = { 402.7359f, -689.6898f, 28.2549f };
			uParam1->f_135 = { 401.3918f, -718.0711f, 28.1762f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 390.1166f, -686.0222f, 28.27f };
			uParam1->f_150[0] = 94.1853f;
			uParam1->f_140[1 /*3*/] = { 444.7804f, -686.5525f, 27.5881f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 382.391f, -671.3192f, 28.2481f };
			uParam1->f_150[2] = 57.3318f;
			return 1;
			break;
		case 8:
			*(uParam1[0 /*15*/]) = { -1405.1483f, -195.824f, 50.5379f };
			(uParam1[0 /*15*/])->f_3 = { 15.4864f, 0f, 126.9167f };
			(uParam1[0 /*15*/])->f_6 = { -1405.4717f, -195.2269f, 48.3459f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.4786f, 0f, 133.4543f };
			(uParam1[0 /*15*/])->f_12 = 43.8728f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1414.1422f, -200.2502f, 47.8477f };
			(uParam1[1 /*15*/])->f_3 = { -3.1055f, 0f, -105.8073f };
			(uParam1[1 /*15*/])->f_6 = { -1414.1171f, -200.2495f, 47.8464f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1055f, 0f, -105.1865f };
			(uParam1[1 /*15*/])->f_12 = 35.8476f;
			(uParam1[1 /*15*/])->f_13 = 8.425f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1414.2623f, -199.6994f, 47.8791f };
			(uParam1[2 /*15*/])->f_3 = { -3.8011f, 0f, -118.3642f };
			(uParam1[2 /*15*/])->f_6 = { -1414.0961f, -199.7538f, 47.8676f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8011f, 0f, -119.1302f };
			(uParam1[2 /*15*/])->f_12 = 35.8476f;
			(uParam1[2 /*15*/])->f_13 = 11.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1410.3827f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_3 = { -2.9923f, 0f, 176.5927f };
			(uParam1[3 /*15*/])->f_6 = { -1410.3827f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.9923f, 0f, -172.945f };
			(uParam1[3 /*15*/])->f_12 = 40.3821f;
			(uParam1[3 /*15*/])->f_13 = 6.35f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1411.7035f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_6 = { -1411.7035f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_12 = 50.0049f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1411.7035f, -200.2036f, 47.7778f };
			uParam1->f_91.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_97 = 50.0049f;
			uParam1->f_98 = { -1411.7035f, -200.2036f, 47.7778f };
			uParam1->f_98.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_104 = 50.0049f;
			uParam1->f_105 = { -1407.5757f, -199.3733f, 46.0344f };
			uParam1->f_108 = 216.25f;
			uParam1->f_109 = { -1412.9637f, -200.9753f, 46.2845f };
			uParam1->f_112[0 /*3*/] = { -1410.9816f, -200.6391f, 46.2294f };
			uParam1->f_112[1 /*3*/] = { -1411.2316f, -201.405f, 46.2381f };
			uParam1->f_119 = { -1427.7881f, -187.1937f, 46.4753f };
			uParam1->f_123 = 1.75f;
			uParam1->f_124 = 9.84f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { -1427.7881f, -187.1937f, 46.4753f };
			uParam1->f_132 = { -1358.1135f, -272.4378f, 41.4143f };
			uParam1->f_135 = { -1439.4601f, -202.4132f, 46.6154f };
			uParam1->f_135.f_3 = 322.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1383.7635f, -264.7188f, 41.9284f };
			uParam1->f_150[0] = 130.32f;
			uParam1->f_140[1 /*3*/] = { -1473.486f, -257.2262f, 48.9357f };
			uParam1->f_150[1] = 44.64f;
			uParam1->f_140[2 /*3*/] = { -1382.0347f, -271.8694f, 41.9838f };
			uParam1->f_150[2] = 132.0433f;
			return 1;
			break;
		case 9:
			*(uParam1[0 /*15*/]) = { 290.8533f, 172.5629f, 105.446f };
			(uParam1[0 /*15*/])->f_3 = { 24.0829f, 0f, -19.9766f };
			(uParam1[0 /*15*/])->f_6 = { 290.8804f, 172.6505f, 105.1818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.3518f, 0f, -17.3689f };
			(uParam1[0 /*15*/])->f_12 = 36.3239f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 298.6032f, 181.1218f, 104.7438f };
			(uParam1[1 /*15*/])->f_3 = { -3.2463f, 0f, 81.368f };
			(uParam1[1 /*15*/])->f_6 = { 298.5056f, 181.1366f, 104.7382f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1642f, 0f, 81.8605f };
			(uParam1[1 /*15*/])->f_12 = 35.122f;
			(uParam1[1 /*15*/])->f_13 = 6.625f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 298.311f, 180.892f, 104.7343f };
			(uParam1[2 /*15*/])->f_3 = { -3.3284f, 0f, 74.3088f };
			(uParam1[2 /*15*/])->f_6 = { 298.2302f, 180.9147f, 104.7294f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.3434f, 0f, 73.7343f };
			(uParam1[2 /*15*/])->f_12 = 35.122f;
			(uParam1[2 /*15*/])->f_13 = 10.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_3 = { 0.7548f, 0f, 40.582f };
			(uParam1[3 /*15*/])->f_6 = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.7548f, 0f, 60.3641f };
			(uParam1[3 /*15*/])->f_12 = 42.6649f;
			(uParam1[3 /*15*/])->f_13 = 6.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_6 = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_12 = 49.972f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_91.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_97 = 49.972f;
			uParam1->f_98 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_98.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_104 = 49.972f;
			uParam1->f_105 = { 290.7559f, 177.1301f, 103.1523f };
			uParam1->f_108 = 74.52f;
			uParam1->f_109 = { 297.1597f, 181.7558f, 103.2131f };
			uParam1->f_112[0 /*3*/] = { 295.0739f, 181.1341f, 103.2455f };
			uParam1->f_112[1 /*3*/] = { 294.9557f, 182.0589f, 103.2534f };
			uParam1->f_119 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_123 = 1.65f;
			uParam1->f_124 = 11.1f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_132 = { 153.4835f, 223.6109f, 105.7286f };
			uParam1->f_135 = { 280.205f, 152.9264f, 103.1841f };
			uParam1->f_135.f_3 = 248.76f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 227.2966f, 223.5158f, 104.5494f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { 196.4739f, 139.1099f, 100.2864f };
			uParam1->f_150[1] = 159.8148f;
			uParam1->f_140[2 /*3*/] = { 225.8337f, 237.2527f, 104.5132f };
			uParam1->f_150[2] = 337.7378f;
			return 1;
			break;
	}
	return 0;
}

int func_292(int iParam0, var uParam1)//Position - 0x26DB6
{
	switch (iParam0)
	{
		case 1:
			*(uParam1[0 /*15*/]) = { -826.7827f, 183.7083f, 72.275f };
			(uParam1[0 /*15*/])->f_3 = { 24.3451f, 0f, -121.7598f };
			(uParam1[0 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[0 /*15*/])->f_12 = 47.4693f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -826.2693f, 180.629f, 71.8522f };
			(uParam1[1 /*15*/])->f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_6 = { -826.1978f, 180.5609f, 71.8527f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_12 = 32.278f;
			(uParam1[1 /*15*/])->f_13 = 2.6f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -825.2714f, 181.3561f, 71.8458f };
			(uParam1[2 /*15*/])->f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_6 = { -825.2325f, 181.2749f, 71.8464f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_12 = 29.2584f;
			(uParam1[2 /*15*/])->f_13 = 3f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -823.177f, 180.3802f, 71.8216f };
			(uParam1[3 /*15*/])->f_3 = { -3.9551f, 0f, 122.8645f };
			(uParam1[3 /*15*/])->f_6 = { -823.3178f, 180.3653f, 71.8129f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.7621f, 0f, 116.8534f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 3f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_12 = 47.4693f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_91.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_97 = 47.4693f;
			uParam1->f_98 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_98.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_104 = 47.4693f;
			uParam1->f_105 = { -830.1575f, 175.3299f, 71.1486f };
			uParam1->f_108 = 335f;
			uParam1->f_109 = { -825.5045f, 179.6075f, 70.4304f };
			uParam1->f_112[0 /*3*/] = { -824.0706f, 179.5434f, 70.4812f };
			uParam1->f_112[1 /*3*/] = { -824.3851f, 178.7221f, 70.3815f };
			uParam1->f_119 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_123 = 3.03f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_132 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_135 = { -857.8395f, 158.6697f, 64.0398f };
			uParam1->f_135.f_3 = 352.08f;
			uParam1->f_135.f_4 = 1;
			uParam1->f_140[0 /*3*/] = { -791.8809f, 155.0175f, 70.6749f };
			uParam1->f_150[0] = 189.9119f;
			uParam1->f_140[1 /*3*/] = { -795.0798f, 176.0365f, 72.835f };
			uParam1->f_150[1] = 186.5013f;
			return 1;
			break;
		case 2:
			*(uParam1[0 /*15*/]) = { 1988.6624f, 3809.2454f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.4095f, 3808.3806f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.1309f, 3808.3823f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.1309f, 3808.3823f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.5365f, 3808.7122f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.7468f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.6704f, 3817.9023f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.8875f, 3817.2974f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_98.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 1984.5452f, 3797.0647f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.3514f, 3809.7446f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.5624f, 3811.7476f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.7986f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.8676f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1977.8676f, 3815.664f, 32.7359f };
			uParam1->f_132 = { 1977.8676f, 3815.664f, 32.7359f };
			uParam1->f_135 = { 1996.4338f, 3822.8494f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.1608f, 3832.6973f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.8464f, 3793.4844f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		case 3:
			*(uParam1[0 /*15*/]) = { -15.8397f, -1454.1493f, 32.0213f };
			(uParam1[0 /*15*/])->f_3 = { -0.6298f, 0.0085f, -9.3542f };
			(uParam1[0 /*15*/])->f_6 = { -15.0177f, -1455.2998f, 31.1352f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.2034f, -0.0715f, -24.1621f };
			(uParam1[0 /*15*/])->f_12 = 38.6495f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -25.7417f, -1450.1324f, 33.5422f };
			(uParam1[1 /*15*/])->f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_6 = { -25.7417f, -1450.1324f, 30.5422f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_12 = 38.2875f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -13.6389f, -1451.0558f, 31.0825f };
			(uParam1[2 /*15*/])->f_3 = { -3.2369f, -0.029f, 176.9312f };
			(uParam1[2 /*15*/])->f_6 = { -25.7417f, -1450.1324f, 30.5422f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[2 /*15*/])->f_12 = 26.097f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -15.5813f, -1457.1489f, 30.8433f };
			(uParam1[3 /*15*/])->f_3 = { -1.3844f, 0f, -15.1833f };
			(uParam1[3 /*15*/])->f_6 = { -15.6248f, -1457.0215f, 30.8406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4872f, 0f, -12.8425f };
			(uParam1[3 /*15*/])->f_12 = 32.9661f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_6 = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -14.4f, -1453.1f, 31f };
			uParam1->f_91.f_3 = { -3f, 0f, -144f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -14.4f, -1453.1f, 31f };
			uParam1->f_98.f_3 = { -3f, 0f, -144f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -5.0612f, -1456.5503f, 29.4097f };
			uParam1->f_108 = 96.12f;
			uParam1->f_109 = { -13.8595f, -1454.3317f, 29.5001f };
			uParam1->f_112[0 /*3*/] = { -14.2219f, -1452.3647f, 29.5429f };
			uParam1->f_112[1 /*3*/] = { -13.2385f, -1452.1836f, 29.548f };
			uParam1->f_119 = { -13.9595f, -1441.4316f, 30.2797f };
			uParam1->f_123 = 3f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -13.9595f, -1441.4316f, 30.2797f };
			uParam1->f_132 = { -13.9595f, -1441.4316f, 30.2797f };
			uParam1->f_135 = { -31.3914f, -1468.3141f, 30.0697f };
			uParam1->f_135.f_3 = 274.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -14.3429f, -1423.3442f, 29.7124f };
			uParam1->f_150[0] = 257.04f;
			uParam1->f_140[1 /*3*/] = { 9.0406f, -1416.8967f, 28.3067f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		case 4:
			*(uParam1[0 /*15*/]) = { 21.2376f, 576.7308f, 185.7817f };
			(uParam1[0 /*15*/])->f_3 = { 1.9456f, 0.0255f, 179.1536f };
			(uParam1[0 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[0 /*15*/])->f_12 = 39.704f;
			(uParam1[0 /*15*/])->f_13 = 6f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 12.3045f, 550.5663f, 176.4523f };
			(uParam1[1 /*15*/])->f_3 = { -4.0739f, 0f, 153.0748f };
			(uParam1[1 /*15*/])->f_6 = { 12.171f, 550.1313f, 176.4203f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1393f, 0f, 151.833f };
			(uParam1[1 /*15*/])->f_12 = 31.4978f;
			(uParam1[1 /*15*/])->f_13 = 10f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -9.2007f, 554.8126f, 180.3407f };
			(uParam1[2 /*15*/])->f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_6 = { -9.2007f, 554.8126f, 177.3407f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_12 = 35.9812f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 11.9662f, 545.9982f, 176.342f };
			(uParam1[3 /*15*/])->f_3 = { -4.2197f, 0.0086f, 36.2193f };
			(uParam1[3 /*15*/])->f_6 = { 11.9368f, 546.1504f, 176.3316f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -4.2197f, 0.0086f, 35.5229f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_12 = 39.704f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_91.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_97 = 39.704f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 16.4339f, 549.3853f, 175.3116f };
			uParam1->f_108 = 56.25f;
			uParam1->f_109 = { 10.8375f, 549.054f, 174.9718f };
			uParam1->f_112[0 /*3*/] = { 11.4257f, 547.3162f, 174.9038f };
			uParam1->f_112[1 /*3*/] = { 10.0769f, 547.0983f, 174.7723f };
			uParam1->f_119 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_123 = 3.025f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 24.9549f, 566.2881f, 177.4016f };
			uParam1->f_135.f_3 = 110.16f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 14.6234f, 526.126f, 173.6292f };
			uParam1->f_150[0] = 115.56f;
			uParam1->f_140[1 /*3*/] = { 11.0096f, 521.315f, 169.2275f };
			uParam1->f_150[1] = 197.1696f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		case 5:
			*(uParam1[0 /*15*/]) = { 1988.6624f, 3809.2454f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.4095f, 3808.3806f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.1309f, 3808.3823f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.1309f, 3808.3823f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.5365f, 3808.7122f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.7468f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.6704f, 3817.9023f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.8875f, 3817.2974f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 1984.5452f, 3797.0647f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.3514f, 3809.7446f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.5624f, 3811.7476f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.7986f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.8676f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 1996.4338f, 3822.8494f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.1608f, 3832.6973f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.8464f, 3793.4844f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		case 6:
			*(uParam1[0 /*15*/]) = { -1189.4192f, -1506.4888f, 4.811f };
			(uParam1[0 /*15*/])->f_3 = { 4.0569f, 0f, -111.2564f };
			(uParam1[0 /*15*/])->f_6 = { -1189.1421f, -1505.7709f, 4.8109f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1072f, 0.0399f, -111.7328f };
			(uParam1[0 /*15*/])->f_12 = 41.5362f;
			(uParam1[0 /*15*/])->f_13 = 5.55f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1160.0498f, -1514.5123f, 4.7395f };
			(uParam1[1 /*15*/])->f_3 = { -2.2734f, 0.0031f, -127.6174f };
			(uParam1[1 /*15*/])->f_6 = { -1159.9036f, -1514.6249f, 4.7321f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.9723f, 0.0031f, -126.8698f };
			(uParam1[1 /*15*/])->f_12 = 26.7346f;
			(uParam1[1 /*15*/])->f_13 = 5.65f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1159.954f, -1514.0223f, 4.7491f };
			(uParam1[2 /*15*/])->f_3 = { -2.2734f, 0.0031f, -143.3719f };
			(uParam1[2 /*15*/])->f_6 = { -1159.8395f, -1514.1755f, 4.7415f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.2734f, 0.0031f, -144.9591f };
			(uParam1[2 /*15*/])->f_12 = 26.7346f;
			(uParam1[2 /*15*/])->f_13 = 10f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1157.1967f, -1524.0415f, 4.3609f };
			(uParam1[3 /*15*/])->f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_6 = { -1157.1533f, -1523.6282f, 4.3821f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_12 = 26.7346f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_6 = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_91.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_98.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -1168.0422f, -1519.4583f, 3.2867f };
			uParam1->f_108 = 306.25f;
			uParam1->f_109 = { -1158.2429f, -1515.2214f, 3.2073f };
			uParam1->f_112[0 /*3*/] = { -1157.5536f, -1517.0989f, 3.3741f };
			uParam1->f_112[1 /*3*/] = { -1158.4923f, -1517.4436f, 3.357f };
			uParam1->f_119 = { -1148.8429f, -1521.8014f, 3.4073f };
			uParam1->f_123 = 2.95f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1148.8429f, -1521.8014f, 3.4073f };
			uParam1->f_132 = { -1148.8429f, -1521.8014f, 3.4073f };
			uParam1->f_135 = { -1176.7615f, -1521.6707f, 3.4037f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1148.8997f, -1523.4792f, 9.6331f };
			uParam1->f_150[0] = 34.92f;
			uParam1->f_140[1 /*3*/] = { -1134.435f, -1532.0051f, 3.315f };
			uParam1->f_150[1] = 309.24f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		case 7:
			*(uParam1[0 /*15*/]) = { 129.8136f, -1313.4695f, 29.9182f };
			(uParam1[0 /*15*/])->f_3 = { 21.2995f, -0.0209f, -12.3644f };
			(uParam1[0 /*15*/])->f_6 = { 129.8168f, -1313.4559f, 29.3543f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8903f, -0.0209f, -14.9554f };
			(uParam1[0 /*15*/])->f_12 = 36.2014f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.5266f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.6449f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.5769f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.7227f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.4554f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_6 = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_91.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 133.1947f, -1312.1494f, 28.1072f };
			uParam1->f_108 = 126.05f;
			uParam1->f_109 = { 133.0748f, -1306.5093f, 28.133f };
			uParam1->f_112[0 /*3*/] = { 132.4439f, -1304.6599f, 28.2045f };
			uParam1->f_112[1 /*3*/] = { 133.2145f, -1304.7501f, 28.1905f };
			uParam1->f_119 = { 128.5787f, -1298.3682f, 28.3026f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.3682f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.3682f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.6957f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 95.7223f, -1313.1714f, 28.294f };
			uParam1->f_150[0] = 83.16f;
			uParam1->f_140[1 /*3*/] = { 112.8357f, -1276.4932f, 28.0221f };
			uParam1->f_150[1] = 99.36f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		case 8:
			*(uParam1[0 /*15*/]) = { 166.9471f, -1340.8126f, 31.2908f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { 166.9471f, -1340.8126f, 29.2908f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.5266f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.6449f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.5769f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.7227f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.4554f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 166.9471f, -1340.8126f, 31.2908f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { 166.9471f, -1340.8126f, 31.2908f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 166.9471f, -1340.8126f, 31.2908f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 176.9471f, -1340.8126f, 28.2908f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 176.9471f, -1340.8126f, 28.2908f };
			uParam1->f_112[0 /*3*/] = { 177.5471f, -1340.5126f, 28.2908f };
			uParam1->f_112[1 /*3*/] = { 177.5471f, -1341.1127f, 28.2908f };
			uParam1->f_119 = { 181.9471f, -1340.8126f, 28.2908f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.3682f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.3682f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.6957f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 176.9471f, -1340.8126f, 28.2908f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { 176.9471f, -1340.8126f, 28.2908f };
			uParam1->f_150[1] = 0f;
			return 1;
			break;
		case 9:
			*(uParam1[0 /*15*/]) = { -56.3573f, -1460.4274f, 34.1991f };
			(uParam1[0 /*15*/])->f_3 = { 8.1986f, 0f, 33.5765f };
			(uParam1[0 /*15*/])->f_6 = { -56.5558f, -1460.1489f, 32.6568f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.0126f, 0f, 51.7138f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 6.3f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -57.7509f, -1459.4553f, 32.518f };
			(uParam1[1 /*15*/])->f_3 = { -2.6848f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_6 = { -57.7917f, -1459.4448f, 32.516f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4783f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_12 = 26.9657f;
			(uParam1[1 /*15*/])->f_13 = 5.375f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -57.7837f, -1459.7937f, 32.5223f };
			(uParam1[2 /*15*/])->f_3 = { -2.6848f, 0f, 58.9447f };
			(uParam1[2 /*15*/])->f_6 = { -57.8125f, -1459.6873f, 32.5185f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.6848f, 0f, 58.169f };
			(uParam1[2 /*15*/])->f_12 = 26.9657f;
			(uParam1[2 /*15*/])->f_13 = 10.975f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -61.4802f, -1449.4677f, 32.2744f };
			(uParam1[3 /*15*/])->f_3 = { 0.1485f, 0f, -174.2878f };
			(uParam1[3 /*15*/])->f_6 = { -61.4802f, -1449.4677f, 32.2744f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.1485f, 0f, -177.7354f };
			(uParam1[3 /*15*/])->f_12 = 35.5635f;
			(uParam1[3 /*15*/])->f_13 = 4.175f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_6 = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_91.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_98.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -62.9473f, -1462.4595f, 30.9713f };
			uParam1->f_108 = 116.37f;
			uParam1->f_109 = { -59.0633f, -1459.5398f, 30.9904f };
			uParam1->f_112[0 /*3*/] = { -60.5552f, -1458.2078f, 31.0545f };
			uParam1->f_112[1 /*3*/] = { -59.8892f, -1457.4618f, 31.0777f };
			uParam1->f_119 = { -67.2833f, -1451.7397f, 30.994f };
			uParam1->f_123 = 3.55f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -67.2833f, -1451.7397f, 30.994f };
			uParam1->f_132 = { -67.2833f, -1451.7397f, 30.994f };
			uParam1->f_135 = { -46.4771f, -1460.5109f, 30.8037f };
			uParam1->f_135.f_3 = 95.76f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -68.4237f, -1436.7537f, 31.1236f };
			uParam1->f_150[0] = 116.64f;
			uParam1->f_140[1 /*3*/] = { -74.2421f, -1420.8674f, 28.3225f };
			uParam1->f_150[1] = 271.8f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		case 10:
			*(uParam1[0 /*15*/]) = { -10.932f, -117.3033f, 57.4867f };
			(uParam1[0 /*15*/])->f_3 = { 28.1405f, -0.0662f, 15.2927f };
			(uParam1[0 /*15*/])->f_6 = { -11.2653f, -117.2236f, 57.1882f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.5113f, -0.0662f, 30.565f };
			(uParam1[0 /*15*/])->f_12 = 49.9706f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -7.0757f, -120.2365f, 61.4475f };
			(uParam1[1 /*15*/])->f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_12 = 44.4311f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -11.5998f, -116.8049f, 57.3232f };
			(uParam1[2 /*15*/])->f_3 = { -1.4412f, 0f, 19.334f };
			(uParam1[2 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[2 /*15*/])->f_12 = 28.2808f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_3 = { -1.4928f, 0f, -95.3855f };
			(uParam1[3 /*15*/])->f_6 = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.4928f, 0f, -89.5594f };
			(uParam1[3 /*15*/])->f_12 = 42.4439f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -12.2428f, -118.5385f, 57.0926f };
			(uParam1[4 /*15*/])->f_3 = { -2.338f, -0.0148f, -1.9302f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 49.9706f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_3 = { -0.7f, 0f, 115.2f };
			(uParam1[5 /*15*/])->f_6 = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -0.7f, 0f, 109.1433f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 4.575f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -10.7f, -114.5f, 57.2f };
			uParam1->f_91.f_3 = { -0.7f, 0f, 115.2f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -13.0725f, -115.19f, 57.2984f };
			uParam1->f_98.f_3 = { -4.2214f, -0.8691f, -107.3625f };
			uParam1->f_104 = 49.9706f;
			uParam1->f_105 = { -18.5821f, -115.3713f, 55.7963f };
			uParam1->f_108 = 73.08f;
			uParam1->f_109 = { -11.6174f, -115.3955f, 55.781f };
			uParam1->f_112[0 /*3*/] = { -13.4109f, -114.6339f, 55.8221f };
			uParam1->f_112[1 /*3*/] = { -12.6469f, -114.0475f, 55.8117f };
			uParam1->f_119 = { -13.4678f, -109.2617f, 56.1351f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 6f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -16.8713f, -118.8766f, 55.8675f };
			uParam1->f_132 = { -97.4889f, -89.0346f, 56.5371f };
			uParam1->f_135 = { -1.682f, -108.0647f, 55.8574f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -60.4338f, -88.276f, 56.7463f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -29.7926f, -85.2089f, 56.2538f };
			uParam1->f_150[1] = 42.12f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		case 11:
			*(uParam1[0 /*15*/]) = { -599.6635f, -307.1347f, 35.5723f };
			(uParam1[0 /*15*/])->f_3 = { 6.6136f, 0.0661f, 14.4573f };
			(uParam1[0 /*15*/])->f_6 = { -599.6488f, -307.1032f, 35.4806f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.6974f, 0.0661f, -24.9427f };
			(uParam1[0 /*15*/])->f_12 = 45.1942f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -598.3406f, -305.7075f, 35.495f };
			(uParam1[1 /*15*/])->f_3 = { -1.8206f, 0f, -24.4412f };
			(uParam1[1 /*15*/])->f_6 = { -598.2725f, -305.5562f, 35.4897f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2461f, 0f, -23.8667f };
			(uParam1[1 /*15*/])->f_12 = 27.1855f;
			(uParam1[1 /*15*/])->f_13 = 10.225f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -595.8862f, -335.8199f, 39.8311f };
			(uParam1[2 /*15*/])->f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_6 = { -595.8862f, -335.8199f, 36.8311f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_12 = 30.8234f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -603.5041f, -298.5019f, 35.5324f };
			(uParam1[3 /*15*/])->f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_6 = { -603.7752f, -298.292f, 35.8069f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_12 = 37.7459f;
			(uParam1[3 /*15*/])->f_13 = 4.875f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -589.7507f, -307.463f, 35.5272f };
			(uParam1[4 /*15*/])->f_3 = { -4.1072f, 0.0055f, 69.2885f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.1002f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_3 = { 0.3f, 0f, -105.1f };
			(uParam1[5 /*15*/])->f_6 = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0.3f, 0f, -118.5139f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 6.525f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_91.f_3 = { 0.3f, 0f, -105.1f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_98.f_3 = { 0.3f, 0f, -118.5139f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -591.6484f, -304.453f, 33.8604f };
			uParam1->f_108 = 122.04f;
			uParam1->f_109 = { -597.5052f, -304.8516f, 33.9584f };
			uParam1->f_112[0 /*3*/] = { -597.8029f, -303.0807f, 33.9633f };
			uParam1->f_112[1 /*3*/] = { -596.705f, -302.7705f, 33.9718f };
			uParam1->f_119 = { -604.737f, -293.2985f, 33.9548f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.37f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -591.2324f, -302.5901f, 33.9939f };
			uParam1->f_132 = { -612.3061f, -316.7069f, 33.7226f };
			uParam1->f_135 = { -585.7039f, -300.9887f, 33.9348f };
			uParam1->f_135.f_3 = 116.64f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -623.0575f, -252.5577f, 37.6049f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -585.6531f, -270.6682f, 34.6228f };
			uParam1->f_150[1] = 33.48f;
			uParam1->f_140[2 /*3*/] = { -649.7907f, -296.3604f, 34.3442f };
			uParam1->f_150[2] = 32.4f;
			return 1;
			break;
		case 12:
			*(uParam1[0 /*15*/]) = { -158.1838f, -175.1498f, 44.1235f };
			(uParam1[0 /*15*/])->f_3 = { -1.234f, 0f, -24.3748f };
			(uParam1[0 /*15*/])->f_6 = { -157.466f, -176.0162f, 44.1356f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.234f, 0f, -54.2213f };
			(uParam1[0 /*15*/])->f_12 = 38.9525f;
			(uParam1[0 /*15*/])->f_13 = 7.5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[1 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_12 = 30.9732f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[2 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_12 = 30.9732f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_6 = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_91.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_98.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -159.0514f, -179.6376f, 42.6038f };
			uParam1->f_108 = 340.79f;
			uParam1->f_109 = { -155.6107f, -175.4378f, 42.7616f };
			uParam1->f_112[0 /*3*/] = { -155.2113f, -173.4781f, 42.7592f };
			uParam1->f_112[1 /*3*/] = { -154.2314f, -173.6778f, 42.7592f };
			uParam1->f_119 = { -151.4107f, -167.0978f, 42.7614f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.985f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -157.8152f, -173.411f, 42.6205f };
			uParam1->f_132 = { -180.3291f, -85.6264f, 51.5502f };
			uParam1->f_135 = { -178.2606f, -176.797f, 42.6219f };
			uParam1->f_135.f_3 = 247.32f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -111.5168f, -176.4249f, 49.3869f };
			uParam1->f_150[0] = 337.9647f;
			uParam1->f_140[1 /*3*/] = { -146.1066f, -289.7199f, 40.319f };
			uParam1->f_150[1] = 162.6801f;
			uParam1->f_140[2 /*3*/] = { -184.0584f, -92.239f, 51.4793f };
			uParam1->f_150[2] = 339.5543f;
			return 1;
			break;
		case 13:
			*(uParam1[0 /*15*/]) = { 216.6692f, -50.2341f, 71.0802f };
			(uParam1[0 /*15*/])->f_3 = { 9.2136f, 0.0713f, 39.639f };
			(uParam1[0 /*15*/])->f_6 = { 215.4209f, -49.6516f, 69.8986f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.9289f, 0.0803f, 45.7664f };
			(uParam1[0 /*15*/])->f_12 = 24.7144f;
			(uParam1[0 /*15*/])->f_13 = 6.025f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 210.3946f, -45.6195f, 69.3571f };
			(uParam1[1 /*15*/])->f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_6 = { 210.3504f, -45.577f, 69.3572f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_12 = 24.7144f;
			(uParam1[1 /*15*/])->f_13 = 5.9f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 210.6824f, -46.2715f, 69.2401f };
			(uParam1[2 /*15*/])->f_3 = { -0.8841f, 0.0714f, 32.8208f };
			(uParam1[2 /*15*/])->f_6 = { 210.5762f, -46.1068f, 69.2371f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.8841f, 0.0714f, 31.8309f };
			(uParam1[2 /*15*/])->f_12 = 24.7144f;
			(uParam1[2 /*15*/])->f_13 = 11.2f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_3 = { 2.7258f, 0.0713f, 56.249f };
			(uParam1[3 /*15*/])->f_6 = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.5404f, 0.0713f, 52.4503f };
			(uParam1[3 /*15*/])->f_12 = 33.9919f;
			(uParam1[3 /*15*/])->f_13 = 4.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 202.2701f, -56.2778f, 69.5264f };
			(uParam1[4 /*15*/])->f_3 = { -4.8356f, 0.0133f, -30.2715f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.7144f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_3 = { -6.8f, 0f, 164.6f };
			(uParam1[5 /*15*/])->f_6 = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.8f, 0f, 158.8225f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 5.625f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_91.f_3 = { -6.8f, 0f, 164.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_98.f_3 = { -6.8f, 0f, 158.8225f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 210.5713f, -51.1838f, 67.8538f };
			uParam1->f_108 = 70.71f;
			uParam1->f_109 = { 209.114f, -45.0546f, 67.9221f };
			uParam1->f_112[0 /*3*/] = { 208.0977f, -42.7594f, 67.8671f };
			uParam1->f_112[1 /*3*/] = { 209.2602f, -42.3165f, 67.9124f };
			uParam1->f_119 = { 201.3204f, -27.2177f, 68.9116f };
			uParam1->f_123 = 3.425f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 201.3804f, -45.9723f, 67.6405f };
			uParam1->f_132 = { 169.5868f, -39.8977f, 67.1079f };
			uParam1->f_135 = { 220.3531f, -54.6546f, 68.0668f };
			uParam1->f_135.f_3 = 72.36f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 142.2029f, -8.6707f, 66.601f };
			uParam1->f_150[0] = 341.28f;
			uParam1->f_140[1 /*3*/] = { 193.9097f, -0.0854f, 72.4415f };
			uParam1->f_150[1] = 63.36f;
			uParam1->f_140[2 /*3*/] = { 141.1481f, 4.3401f, 67.0326f };
			uParam1->f_150[2] = 340.2f;
			return 1;
			break;
		case 14:
			*(uParam1[0 /*15*/]) = { -190.1953f, -796.7072f, 31.3248f };
			(uParam1[0 /*15*/])->f_3 = { 5.1543f, -0.1219f, 2.2711f };
			(uParam1[0 /*15*/])->f_6 = { -190.1855f, -796.9056f, 31.3069f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.8464f, -0.1219f, 21.1543f };
			(uParam1[0 /*15*/])->f_12 = 37.4511f;
			(uParam1[0 /*15*/])->f_13 = 5.7f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -195.8433f, -782.9503f, 30.9256f };
			(uParam1[1 /*15*/])->f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_6 = { -196.0999f, -782.7787f, 30.9187f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_12 = 27.5662f;
			(uParam1[1 /*15*/])->f_13 = 11.4f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -174.1382f, -798.4118f, 34.3625f };
			(uParam1[2 /*15*/])->f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_6 = { -174.1382f, -798.4118f, 31.3625f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_12 = 45f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -207.453f, -783.0007f, 30.6883f };
			(uParam1[3 /*15*/])->f_3 = { 0.9957f, -0.0267f, -64.616f };
			(uParam1[3 /*15*/])->f_6 = { -207.483f, -782.9033f, 30.6885f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.9957f, -0.0267f, -64.1235f };
			(uParam1[3 /*15*/])->f_12 = 39.0431f;
			(uParam1[3 /*15*/])->f_13 = 3.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -199.962f, -783.7169f, 30.9963f };
			(uParam1[4 /*15*/])->f_3 = { -3.9471f, 0.0848f, -37.9213f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 27.5662f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_6 = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -198.6f, -781.3f, 31f };
			uParam1->f_91.f_3 = { -3.1f, 0f, -86.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -194.9262f, -780.7396f, 30.7532f };
			uParam1->f_98.f_3 = { -1.3809f, 0f, 100.1161f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -162.74f, -789.3305f, 30.9774f };
			uParam1->f_108 = 154.8f;
			uParam1->f_109 = { -197.2339f, -781.257f, 29.454f };
			uParam1->f_112[0 /*3*/] = { -200.024f, -781.1829f, 29.454f };
			uParam1->f_112[1 /*3*/] = { -199.6951f, -780.3373f, 29.454f };
			uParam1->f_119 = { -208.5797f, -778.6299f, 29.3554f };
			uParam1->f_123 = 3.05f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0.2f;
			uParam1->f_126 = 5.175f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -193.8266f, -787.1005f, 29.454f };
			uParam1->f_132 = { -176.0065f, -830.4868f, 29.6752f };
			uParam1->f_135 = { -160.5266f, -783.0484f, 31.0433f };
			uParam1->f_135.f_3 = 164.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -245.7672f, -772.6562f, 31.4945f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { -240.8987f, -803.7341f, 29.8505f };
			uParam1->f_150[1] = 78.12f;
			uParam1->f_140[2 /*3*/] = { -219.2494f, -869.4808f, 28.864f };
			uParam1->f_150[2] = 73.08f;
			return 1;
			break;
		case 15:
			*(uParam1[0 /*15*/]) = { -830.9531f, -1088.2756f, 13.0086f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { -830.9531f, -1088.2756f, 11.0086f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 0f;
			(uParam1[0 /*15*/])->f_14 = 0;
			*(uParam1[1 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_12 = 0f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_12 = 0f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -830.9531f, -1088.2756f, 13.0086f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { -830.9531f, -1088.2756f, 13.0086f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -830.9531f, -1088.2756f, 13.0086f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 0f, 0f, 0f };
			uParam1->f_98.f_3 = { 0f, 0f, 0f };
			uParam1->f_104 = 0f;
			uParam1->f_105 = { -820.9531f, -1088.2756f, 10.0086f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { -820.9531f, -1088.2756f, 10.0086f };
			uParam1->f_112[0 /*3*/] = { -820.3531f, -1087.9756f, 10.0086f };
			uParam1->f_112[1 /*3*/] = { -820.3531f, -1088.5757f, 10.0086f };
			uParam1->f_119 = { -815.9531f, -1088.2756f, 10.0086f };
			uParam1->f_123 = 0f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 0f, 0f, 0f };
			uParam1->f_132 = { 0f, 0f, 0f };
			uParam1->f_135 = { 0f, 0f, 0f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 0;
			uParam1->f_140[0 /*3*/] = { -820.9531f, -1088.2756f, 10.0086f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { -820.9531f, -1088.2756f, 10.0086f };
			uParam1->f_150[1] = 0f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		case 16:
			*(uParam1[0 /*15*/]) = { 231.1337f, -972.4833f, 30.5744f };
			(uParam1[0 /*15*/])->f_3 = { 16.554f, 0f, 19.9826f };
			(uParam1[0 /*15*/])->f_6 = { 231.1004f, -972.3924f, 30.3643f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.1901f, 0f, 18.1092f };
			(uParam1[0 /*15*/])->f_12 = 39.727f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 231.1243f, -960.4684f, 29.9486f };
			(uParam1[1 /*15*/])->f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_6 = { 231.0919f, -960.4258f, 29.9455f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_12 = 18.438f;
			(uParam1[1 /*15*/])->f_13 = 4.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 231.1691f, -961.2233f, 29.9703f };
			(uParam1[2 /*15*/])->f_3 = { -1.486f, 0f, 33.1161f };
			(uParam1[2 /*15*/])->f_6 = { 231.019f, -960.993f, 29.9631f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.486f, 0f, 33.6074f };
			(uParam1[2 /*15*/])->f_12 = 18.8257f;
			(uParam1[2 /*15*/])->f_13 = 9.525f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 201.2578f, -968.2456f, 31.4906f };
			(uParam1[3 /*15*/])->f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_6 = { 201.1927f, -968.077f, 31.4906f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_12 = 30.4755f;
			(uParam1[3 /*15*/])->f_13 = 4.95f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 242.8073f, -959.5851f, 29.7023f };
			(uParam1[4 /*15*/])->f_3 = { 0.2064f, 0.0551f, 93.2706f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 35.954f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_3 = { -3.2186f, 0f, -71.4419f };
			(uParam1[5 /*15*/])->f_6 = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2186f, 0f, -75.0536f };
			(uParam1[5 /*15*/])->f_12 = 50.036f;
			(uParam1[5 /*15*/])->f_13 = 5.31f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_91.f_3 = { -3.2186f, 0f, -71.4419f };
			uParam1->f_97 = 50.036f;
			uParam1->f_98 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_98.f_3 = { -3.2186f, 0f, -75.0536f };
			uParam1->f_104 = 50.036f;
			uParam1->f_105 = { 240.7464f, -951.9853f, 28.1878f };
			uParam1->f_108 = 158.97f;
			uParam1->f_109 = { 230.4242f, -959.2939f, 28.3431f };
			uParam1->f_112[0 /*3*/] = { 228.2315f, -958.0656f, 28.3444f };
			uParam1->f_112[1 /*3*/] = { 228.8929f, -957.1745f, 28.3397f };
			uParam1->f_119 = { 213.1038f, -944.3844f, 29.6918f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.635f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 236.7469f, -954.621f, 28.2767f };
			uParam1->f_132 = { 229.3741f, -985.0717f, 28.207f };
			uParam1->f_135 = { 243.9274f, -942.5368f, 28.2134f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 209.7067f, -912.3889f, 29.6919f };
			uParam1->f_150[0] = 325.08f;
			uParam1->f_140[1 /*3*/] = { 195.2277f, -985.6662f, 29.0919f };
			uParam1->f_150[1] = 108f;
			uParam1->f_140[2 /*3*/] = { 145.6692f, -1008.5768f, 28.4015f };
			uParam1->f_150[2] = 74.2663f;
			return 1;
			break;
		case 17:
			*(uParam1[0 /*15*/]) = { 248.2705f, -1007.8845f, 29.7324f };
			(uParam1[0 /*15*/])->f_3 = { 62.7218f, 0f, -110.9959f };
			(uParam1[0 /*15*/])->f_6 = { 248.4682f, -1007.9604f, 29.724f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.253f, 0f, -107.2616f };
			(uParam1[0 /*15*/])->f_12 = 40.2691f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 229.6498f, -1017.9327f, 34.3134f };
			(uParam1[1 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_6 = { 229.6498f, -1017.9327f, 31.3134f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_12 = 36.2565f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 229.6498f, -1017.9327f, 34.3134f };
			(uParam1[2 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_6 = { 229.6498f, -1017.9327f, 31.3134f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_12 = 36.2565f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 245.8116f, -1013.3066f, 29.7147f };
			(uParam1[3 /*15*/])->f_3 = { 1.2147f, 0f, -54.9007f };
			(uParam1[3 /*15*/])->f_6 = { 245.8373f, -1013.3431f, 29.7147f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 1.2147f, 0f, -57.703f };
			(uParam1[3 /*15*/])->f_12 = 40.2691f;
			(uParam1[3 /*15*/])->f_13 = 3.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 244.272f, -1004.543f, 29.5566f };
			(uParam1[4 /*15*/])->f_3 = { -4.8904f, -0.4852f, -110.0739f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 45f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 250.6561f, -1009.1505f, 29.8025f };
			(uParam1[5 /*15*/])->f_3 = { -5.4451f, 0f, 14.2227f };
			(uParam1[5 /*15*/])->f_6 = { 250.6561f, -1009.1505f, 29.8025f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.4451f, 0f, 12.1978f };
			(uParam1[5 /*15*/])->f_12 = 49.9613f;
			(uParam1[5 /*15*/])->f_13 = 6.945f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 250.6561f, -1009.1505f, 29.8025f };
			uParam1->f_91.f_3 = { -5.4451f, 0f, 14.2227f };
			uParam1->f_97 = 49.9613f;
			uParam1->f_98 = { 248.7408f, -1006.5201f, 29.6853f };
			uParam1->f_98.f_3 = { -2.7843f, 0.0116f, -145.7124f };
			uParam1->f_104 = 49.9613f;
			uParam1->f_105 = { 247.4841f, -1004.881f, 28.1653f };
			uParam1->f_108 = 345.6f;
			uParam1->f_109 = { 250.0948f, -1007.8876f, 28.272f };
			uParam1->f_112[0 /*3*/] = { 251.6908f, -1009.0301f, 28.2721f };
			uParam1->f_112[1 /*3*/] = { 250.5304f, -1009.5927f, 28.2708f };
			uParam1->f_119 = { 255.7346f, -1013.6077f, 28.2705f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 247.3293f, -1011.4324f, 28.2669f };
			uParam1->f_132 = { 282.2794f, -906.4485f, 27.9033f };
			uParam1->f_135 = { 244.7239f, -1014.8864f, 28.1332f };
			uParam1->f_135.f_3 = 348.48f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 265.8661f, -1031.151f, 28.2119f };
			uParam1->f_150[0] = 218.52f;
			uParam1->f_140[1 /*3*/] = { 279.8312f, -962.0749f, 28.4125f };
			uParam1->f_150[1] = 266.76f;
			uParam1->f_140[2 /*3*/] = { 284.2156f, -955.7428f, 28.3454f };
			uParam1->f_150[2] = 267.5414f;
			return 1;
			break;
		case 18:
			*(uParam1[0 /*15*/]) = { -223.04f, -1494.4606f, 32.1563f };
			(uParam1[0 /*15*/])->f_3 = { -2.3031f, 0.0137f, 170.1147f };
			(uParam1[0 /*15*/])->f_6 = { -222.5391f, -1494.2854f, 32.1495f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.3031f, 0.0137f, -141.8289f };
			(uParam1[0 /*15*/])->f_12 = 33.267f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -216.6314f, -1498.6526f, 31.918f };
			(uParam1[1 /*15*/])->f_3 = { -1.2591f, -0.0294f, -155.8858f };
			(uParam1[1 /*15*/])->f_6 = { -216.5979f, -1498.7275f, 31.9162f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2591f, -0.0294f, -157.2869f };
			(uParam1[1 /*15*/])->f_12 = 17.2517f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -216.0729f, -1498.9364f, 31.8561f };
			(uParam1[2 /*15*/])->f_3 = { -1.2116f, 0.0137f, -167.8524f };
			(uParam1[2 /*15*/])->f_6 = { -216.035f, -1499.1124f, 31.8523f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.2116f, 0.0137f, -169.2618f };
			(uParam1[2 /*15*/])->f_12 = 21.1725f;
			(uParam1[2 /*15*/])->f_13 = 10.4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -215.1879f, -1494.0775f, 31.6461f };
			(uParam1[3 /*15*/])->f_3 = { -0.3716f, 0.0137f, 167.1272f };
			(uParam1[3 /*15*/])->f_6 = { -215.4108f, -1494.4918f, 31.6431f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.3716f, 0.0137f, 164.7599f };
			(uParam1[3 /*15*/])->f_12 = 34.7576f;
			(uParam1[3 /*15*/])->f_13 = 4.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -214.1399f, -1497.8629f, 31.5615f };
			(uParam1[4 /*15*/])->f_3 = { -1.6427f, 0.0712f, 174.9291f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 50f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -215.9396f, -1502.0917f, 31.9881f };
			(uParam1[5 /*15*/])->f_3 = { -8.182f, 0.0137f, -39.2424f };
			(uParam1[5 /*15*/])->f_6 = { -215.9396f, -1502.0917f, 31.9881f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -8.182f, 0.0137f, -42.089f };
			(uParam1[5 /*15*/])->f_12 = 50.0069f;
			(uParam1[5 /*15*/])->f_13 = 6.795f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -215.9396f, -1502.0917f, 31.9881f };
			uParam1->f_91.f_3 = { -8.182f, 0.0137f, -39.2424f };
			uParam1->f_97 = 50.0069f;
			uParam1->f_98 = { -213.5682f, -1500.0767f, 31.854f };
			uParam1->f_98.f_3 = { -2.4576f, 0.0837f, 111.3005f };
			uParam1->f_104 = 50.0069f;
			uParam1->f_105 = { -209.7381f, -1495.071f, 30.2667f };
			uParam1->f_108 = 141.48f;
			uParam1->f_109 = { -215.1646f, -1500.8119f, 30.4305f };
			uParam1->f_112[0 /*3*/] = { -215.0512f, -1503.3674f, 30.4623f };
			uParam1->f_112[1 /*3*/] = { -215.9888f, -1503.2892f, 30.4622f };
			uParam1->f_119 = { -222.2676f, -1510.9921f, 30.6938f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.175f;
			uParam1->f_125 = 0.54f;
			uParam1->f_126 = 9.69f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -206.9685f, -1494.6144f, 30.4733f };
			uParam1->f_132 = { -162.9734f, -1508.3855f, 32.3938f };
			uParam1->f_135 = { -224.7263f, -1488.1644f, 30.3038f };
			uParam1->f_135.f_3 = 139.68f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -239.6648f, -1549.7312f, 30.6344f };
			uParam1->f_150[0] = 136.44f;
			uParam1->f_140[1 /*3*/] = { -263.615f, -1540.6875f, 30.6904f };
			uParam1->f_150[1] = 187.56f;
			uParam1->f_140[2 /*3*/] = { -144.4396f, -1549.4728f, 33.4471f };
			uParam1->f_150[2] = 139.0999f;
			return 1;
			break;
		case 19:
			*(uParam1[0 /*15*/]) = { -1181.3975f, -826.845f, 16.5792f };
			(uParam1[0 /*15*/])->f_3 = { 9.6959f, 0f, 47.2246f };
			(uParam1[0 /*15*/])->f_6 = { -1181.9803f, -827.2338f, 14.7335f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1175f, 0f, 52.9134f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1184.3304f, -826.4483f, 14.7437f };
			(uParam1[1 /*15*/])->f_3 = { -0.6489f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_6 = { -1184.571f, -826.3248f, 14.7407f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.1044f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_12 = 18.4352f;
			(uParam1[1 /*15*/])->f_13 = 5.55f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1184.3384f, -826.9095f, 14.7463f };
			(uParam1[2 /*15*/])->f_3 = { -0.6489f, -0.0007f, 50.098f };
			(uParam1[2 /*15*/])->f_6 = { -1184.4329f, -826.8304f, 14.7449f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.6489f, -0.0007f, 48.6321f };
			(uParam1[2 /*15*/])->f_12 = 18.4352f;
			(uParam1[2 /*15*/])->f_13 = 11.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1183.2001f, -830.7167f, 14.5212f };
			(uParam1[3 /*15*/])->f_3 = { 1.0563f, 0f, 27.379f };
			(uParam1[3 /*15*/])->f_6 = { -1183.0219f, -830.6245f, 14.5212f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.0449f, 0f, 26.6091f };
			(uParam1[3 /*15*/])->f_12 = 42.0117f;
			(uParam1[3 /*15*/])->f_13 = 5.2f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1188.4661f, -824.3413f, 14.8546f };
			(uParam1[4 /*15*/])->f_3 = { 1.5615f, -0.1037f, -118.6105f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 53.386f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1186.4714f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_3 = { -3.8721f, 0f, 169.2043f };
			(uParam1[5 /*15*/])->f_6 = { -1186.4714f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8721f, 0f, 173.8093f };
			(uParam1[5 /*15*/])->f_12 = 49.9849f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1186.4714f, -824.6526f, 14.8865f };
			uParam1->f_91.f_3 = { -3.8721f, 0f, 169.2043f };
			uParam1->f_97 = 49.9849f;
			uParam1->f_98 = { -1186.4286f, -827.6542f, 14.7835f };
			uParam1->f_98.f_3 = { -0.7502f, 0.0313f, -9.5858f };
			uParam1->f_104 = 49.9849f;
			uParam1->f_105 = { -1189.1278f, -832.9972f, 13.2161f };
			uParam1->f_108 = 218.52f;
			uParam1->f_109 = { -1186.425f, -825.9056f, 13.3321f };
			uParam1->f_112[0 /*3*/] = { -1187.7395f, -824.2661f, 13.3448f };
			uParam1->f_112[1 /*3*/] = { -1186.3999f, -824.4038f, 13.3008f };
			uParam1->f_119 = { -1190.961f, -806.6936f, 17.0174f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0.27f;
			uParam1->f_126 = 8.625f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1192.5244f, -834.0498f, 13.3085f };
			uParam1->f_132 = { -1131.694f, -912.2311f, 2.2148f };
			uParam1->f_135 = { -1196.7207f, -872.5267f, 12.5092f };
			uParam1->f_135.f_3 = 299.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1265.4348f, -727.5261f, 21.1402f };
			uParam1->f_150[0] = 25.92f;
			uParam1->f_140[1 /*3*/] = { -1222.2693f, -784.6736f, 16.6973f };
			uParam1->f_150[1] = 30.96f;
			uParam1->f_140[2 /*3*/] = { -1140.7695f, -935.9708f, 1.6022f };
			uParam1->f_150[2] = 125.0739f;
			return 1;
			break;
		case 20:
			*(uParam1[0 /*15*/]) = { -1400.4379f, -585.9051f, 30.9432f };
			(uParam1[0 /*15*/])->f_3 = { 32.3305f, 0f, -105.6953f };
			(uParam1[0 /*15*/])->f_6 = { -1400.362f, -585.9331f, 30.9394f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.7052f, 0f, -110.3139f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1397.601f, -589.7619f, 30.8651f };
			(uParam1[1 /*15*/])->f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_6 = { -1397.428f, -589.6965f, 30.8501f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_12 = 25.7248f;
			(uParam1[1 /*15*/])->f_13 = 5.075f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1398.3654f, -590.4213f, 30.7041f };
			(uParam1[2 /*15*/])->f_3 = { -1.8133f, 0.0007f, -54.5359f };
			(uParam1[2 /*15*/])->f_6 = { -1398.2682f, -590.3511f, 30.7003f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.8133f, 0.0007f, -53.8792f };
			(uParam1[2 /*15*/])->f_12 = 25.7248f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1392.4342f, -584.4755f, 30.6697f };
			(uParam1[3 /*15*/])->f_3 = { -3.5396f, 0f, 147.9476f };
			(uParam1[3 /*15*/])->f_6 = { -1392.6837f, -584.874f, 30.6406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.1681f, 0f, 149.1801f };
			(uParam1[3 /*15*/])->f_12 = 32.1336f;
			(uParam1[3 /*15*/])->f_13 = 8.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1395.9674f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_3 = { -7.0494f, 0f, -16.7103f };
			(uParam1[5 /*15*/])->f_6 = { -1395.9674f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -7.0494f, 0f, -2.2177f };
			(uParam1[5 /*15*/])->f_12 = 49.3689f;
			(uParam1[5 /*15*/])->f_13 = 4.785f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1395.9674f, -590.8463f, 30.9775f };
			uParam1->f_91.f_3 = { -7.0494f, 0f, -16.7103f };
			uParam1->f_97 = 49.3689f;
			uParam1->f_98 = { -1395.9674f, -590.8463f, 30.9775f };
			uParam1->f_98.f_3 = { -7.0494f, 0f, -2.2177f };
			uParam1->f_104 = 49.3689f;
			uParam1->f_105 = { -1396.8634f, -583.7726f, 29.2332f };
			uParam1->f_108 = 305.28f;
			uParam1->f_109 = { -1395.6896f, -589.4706f, 29.2947f };
			uParam1->f_112[0 /*3*/] = { -1394.4778f, -588.175f, 29.2765f };
			uParam1->f_112[1 /*3*/] = { -1395.2493f, -586.9717f, 29.2791f };
			uParam1->f_119 = { -1387.3744f, -586.2861f, 29.2117f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.16f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1395.3645f, -585.9979f, 29.2759f };
			uParam1->f_132 = { -1437.2358f, -602.3437f, 29.7106f };
			uParam1->f_135 = { -1402.1808f, -587.1375f, 29.2292f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1363.9341f, -597.2744f, 28.115f };
			uParam1->f_150[0] = 212.4f;
			uParam1->f_140[1 /*3*/] = { -1317.0858f, -534.9244f, 31.6545f };
			uParam1->f_150[1] = 284.04f;
			uParam1->f_140[2 /*3*/] = { -1521.9221f, -692.8118f, 27.4762f };
			uParam1->f_150[2] = 232.8838f;
			return 1;
			break;
		case 21:
			*(uParam1[0 /*15*/]) = { -1366.9222f, -398.731f, 41.0798f };
			(uParam1[0 /*15*/])->f_3 = { 17.4675f, -0.1845f, -77.0057f };
			(uParam1[0 /*15*/])->f_6 = { -1366.9297f, -398.9865f, 40.0866f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -5.1001f, -0.1845f, -65.4537f };
			(uParam1[0 /*15*/])->f_12 = 30.8234f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1345.7203f, -386.2633f, 37.2103f };
			(uParam1[1 /*15*/])->f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_6 = { -1345.5809f, -386.1886f, 37.2074f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_12 = 21.5932f;
			(uParam1[1 /*15*/])->f_13 = 6.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1345.955f, -386.2108f, 37.2211f };
			(uParam1[2 /*15*/])->f_3 = { -3.4291f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_6 = { -1345.7772f, -386.153f, 37.2099f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.185f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_12 = 21.5932f;
			(uParam1[2 /*15*/])->f_13 = 10.075f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1337.8141f, -390.8861f, 37.0116f };
			(uParam1[3 /*15*/])->f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_6 = { -1338.0637f, -391.1115f, 37.0105f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_12 = 33.8628f;
			(uParam1[3 /*15*/])->f_13 = 10.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1347.6074f, -384.3f, 37.2427f };
			(uParam1[4 /*15*/])->f_3 = { -5.1716f, -0.1784f, -101.7165f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 33.8628f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1342.9149f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_3 = { -3.0101f, -0.1845f, 62.5899f };
			(uParam1[5 /*15*/])->f_6 = { -1342.9149f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.0101f, -0.1845f, 49.9371f };
			(uParam1[5 /*15*/])->f_12 = 49.9943f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1342.9149f, -385.4987f, 37.2378f };
			uParam1->f_91.f_3 = { -3.0101f, -0.1845f, 62.5899f };
			uParam1->f_97 = 49.9943f;
			uParam1->f_98 = { -1344.6967f, -383.5359f, 37.1767f };
			uParam1->f_98.f_3 = { -7.7089f, -0.22f, -177.5366f };
			uParam1->f_104 = 49.9943f;
			uParam1->f_105 = { -1346.6592f, -382.4048f, 35.755f };
			uParam1->f_108 = 304.2f;
			uParam1->f_109 = { -1344.3192f, -385.1048f, 35.7534f };
			uParam1->f_112[0 /*3*/] = { -1342.3458f, -384.7795f, 35.7455f };
			uParam1->f_112[1 /*3*/] = { -1342.1832f, -385.7662f, 35.745f };
			uParam1->f_119 = { -1315.982f, -383.286f, 35.7237f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.685f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1341.6716f, -376.5873f, 35.7475f };
			uParam1->f_132 = { -1275.441f, -344.9638f, 35.6584f };
			uParam1->f_135 = { -1326.1108f, -395.0894f, 35.4495f };
			uParam1->f_135.f_3 = 212.4f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -1300.4432f, -383.3367f, 35.5787f };
			uParam1->f_150[0] = 208.44f;
			uParam1->f_140[1 /*3*/] = { -1331.9393f, -325.6764f, 36.3622f };
			uParam1->f_150[1] = 29.88f;
			uParam1->f_140[2 /*3*/] = { -1293.1658f, -383.7935f, 35.5591f };
			uParam1->f_150[2] = 207.2801f;
			return 1;
			break;
		case 22:
			*(uParam1[0 /*15*/]) = { -12.9499f, 6502.845f, 32.7873f };
			(uParam1[0 /*15*/])->f_3 = { 9.5209f, 0f, 28.9591f };
			(uParam1[0 /*15*/])->f_6 = { -12.9172f, 6502.981f, 32.0578f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.2163f, 0f, 28.4487f };
			(uParam1[0 /*15*/])->f_12 = 31.35f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -15.8414f, 6504.559f, 32.0731f };
			(uParam1[1 /*15*/])->f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_6 = { -15.719f, 6504.5776f, 32.0677f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_12 = 26.7402f;
			(uParam1[1 /*15*/])->f_13 = 6.8f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -15.2964f, 6503.4614f, 32.0741f };
			(uParam1[2 /*15*/])->f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_6 = { -15.2178f, 6503.554f, 32.0673f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_12 = 31.35f;
			(uParam1[2 /*15*/])->f_13 = 9.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -17.4111f, 6499.129f, 31.9122f };
			(uParam1[3 /*15*/])->f_3 = { -1.2605f, 0f, -35.0484f };
			(uParam1[3 /*15*/])->f_6 = { -17.3962f, 6499.2446f, 31.9101f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.2605f, 0f, -38.0048f };
			(uParam1[3 /*15*/])->f_12 = 28.2785f;
			(uParam1[3 /*15*/])->f_13 = 10.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -13.457f, 6504.1426f, 32.0189f };
			(uParam1[5 /*15*/])->f_3 = { -5.428f, 0f, 29.793f };
			(uParam1[5 /*15*/])->f_6 = { -13.457f, 6504.1426f, 32.0189f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.428f, 0f, 25.0133f };
			(uParam1[5 /*15*/])->f_12 = 49.9863f;
			(uParam1[5 /*15*/])->f_13 = 5.1f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -13.457f, 6504.1426f, 32.0189f };
			uParam1->f_91.f_3 = { -5.428f, 0f, 29.793f };
			uParam1->f_97 = 49.9863f;
			uParam1->f_98 = { -14.0094f, 6506.8496f, 32.039f };
			uParam1->f_98.f_3 = { -7.8212f, 0f, 154.0325f };
			uParam1->f_104 = 49.9863f;
			uParam1->f_105 = { -14.8887f, 6510.313f, 30.2857f };
			uParam1->f_108 = 317.16f;
			uParam1->f_109 = { -14.6068f, 6505.2427f, 30.5313f };
			uParam1->f_112[0 /*3*/] = { -13.406f, 6504.6445f, 30.5605f };
			uParam1->f_112[1 /*3*/] = { -13.3913f, 6506.082f, 30.5421f };
			uParam1->f_119 = { -2.3765f, 6505.2393f, 30.4432f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.32f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -14.5603f, 6510.5703f, 30.2871f };
			uParam1->f_132 = { 21.5285f, 6548.2393f, 30.2918f };
			uParam1->f_135 = { -22.4419f, 6502.5464f, 30.2973f };
			uParam1->f_135.f_3 = 313.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 0.2704f, 6440.619f, 30.4253f };
			uParam1->f_150[0] = 226.08f;
			uParam1->f_140[1 /*3*/] = { 42.3786f, 6499.0776f, 30.4253f };
			uParam1->f_150[1] = 230.76f;
			uParam1->f_140[2 /*3*/] = { 85.8481f, 6593.306f, 30.4944f };
			uParam1->f_150[2] = 229.9428f;
			return 1;
			break;
		case 23:
			*(uParam1[0 /*15*/]) = { 1398.3656f, 3589.792f, 35.7675f };
			(uParam1[0 /*15*/])->f_3 = { 16.1439f, 0f, 12.7999f };
			(uParam1[0 /*15*/])->f_6 = { 1398.3864f, 3589.7795f, 35.4151f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.1277f, 0f, 60.2753f };
			(uParam1[0 /*15*/])->f_12 = 41.4763f;
			(uParam1[0 /*15*/])->f_13 = 6.45f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1393.1771f, 3589.7578f, 35.3621f };
			(uParam1[1 /*15*/])->f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_6 = { 1393.2351f, 3589.8105f, 35.3597f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_12 = 25.6712f;
			(uParam1[1 /*15*/])->f_13 = 5.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 1393.2328f, 3589.3816f, 35.3779f };
			(uParam1[2 /*15*/])->f_3 = { -4.1375f, 0f, -43.9328f };
			(uParam1[2 /*15*/])->f_6 = { 1393.3842f, 3589.5383f, 35.3621f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8599f, 0f, -43.0485f };
			(uParam1[2 /*15*/])->f_12 = 25.6712f;
			(uParam1[2 /*15*/])->f_13 = 10.675f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1401.436f, 3593.2778f, 34.9226f };
			(uParam1[3 /*15*/])->f_3 = { 4.7665f, 0f, 89.9214f };
			(uParam1[3 /*15*/])->f_6 = { 1401.411f, 3593.2778f, 34.9247f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.3666f, 0f, 93.3675f };
			(uParam1[3 /*15*/])->f_12 = 40.2577f;
			(uParam1[3 /*15*/])->f_13 = 7.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1393.0144f, 3590.3909f, 35.3415f };
			(uParam1[5 /*15*/])->f_3 = { -3.6763f, 0f, -73.5766f };
			(uParam1[5 /*15*/])->f_6 = { 1393.0144f, 3590.3909f, 35.3415f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.6763f, 0f, -76.3552f };
			(uParam1[5 /*15*/])->f_12 = 49.9894f;
			(uParam1[5 /*15*/])->f_13 = 5.895f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1393.0144f, 3590.3909f, 35.3415f };
			uParam1->f_91.f_3 = { -3.6763f, 0f, -73.5766f };
			uParam1->f_97 = 49.9894f;
			uParam1->f_98 = { 1395.9813f, 3590.8003f, 35.2591f };
			uParam1->f_98.f_3 = { -1.4534f, -0.0615f, 64.6092f };
			uParam1->f_104 = 49.9894f;
			uParam1->f_105 = { 1401.1758f, 3591.5845f, 33.9257f };
			uParam1->f_108 = 287.28f;
			uParam1->f_109 = { 1394.2062f, 3591.3108f, 33.8731f };
			uParam1->f_112[0 /*3*/] = { 1395.7977f, 3592.1204f, 33.885f };
			uParam1->f_112[1 /*3*/] = { 1395.8606f, 3591.1497f, 33.8331f };
			uParam1->f_119 = { 1394.2177f, 3599.6748f, 33.9149f };
			uParam1->f_123 = 3.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.205f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1398.3474f, 3589.3406f, 33.9425f };
			uParam1->f_132 = { 1489.7838f, 3614.9602f, 33.8271f };
			uParam1->f_135 = { 1382.2739f, 3593.8064f, 33.8937f };
			uParam1->f_135.f_3 = 12.96f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 1452.4491f, 3638.9067f, 33.6778f };
			uParam1->f_150[0] = 13.68f;
			uParam1->f_140[1 /*3*/] = { 1347.2308f, 3612.0645f, 33.876f };
			uParam1->f_150[1] = 28.8212f;
			uParam1->f_140[2 /*3*/] = { 1459.6494f, 3651.6704f, 33.5887f };
			uParam1->f_150[2] = 14.7733f;
			return 1;
			break;
	}
	return 0;
}

void func_299(int iParam0)//Position - 0x2D57F
{
	Local_49.f_1 = iParam0;
}

void func_300()//Position - 0x2D58D
{
	int iVar0;
	int iVar1;
	if (Local_49.f_258 != 0)
	{
		func_58(&(Local_49.f_3));
		func_58(&(Local_49.f_56));
		func_58(&(Local_49.f_109));
		if (HUD::DOES_BLIP_EXIST(Local_49.f_648))
		{
			HUD::REMOVE_BLIP(&(Local_49.f_648));
		}
		if (__LIB_0__::func_1("FR_H_ACTIV1"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("FR_H_ACTIV2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (Local_49.f_618)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				iVar1 = Global_96177[iVar0 /*2*/];
				if (__LIB_10__::func_861(iVar1))
				{
					__LIB_10__::func_604(iVar1, 0, 0);
				}
				iVar0++;
			}
			__LIB_14__::func_317(&(Local_49.f_631));
			Local_49.f_633 = 0;
		}
		Local_49.f_258 = 0;
	}
}

void func_305()//Position - 0x2D796
{
	func_880();
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		func_300();
		func_299(4);
		return;
	}
	else if (__LIB_0__::func_134())
	{
		if (__LIB_0__::func_204())
		{
			func_299(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_300();
		func_299(0);
	}
	else if (((__LIB_6__::func_854(6) && !__LIB_0__::func_39(6)) && !__LIB_0__::func_39(7)) && !__LIB_0__::func_39(2))
	{
		func_300();
		func_877(0, 48, 0);
		func_299(1);
	}
	else if (func_876())
	{
		func_491();
		func_458();
		func_309(1);
		func_300();
		if (!func_308())
		{
			if (func_306())
			{
				func_299(6);
			}
		}
	}
}

int func_306()//Position - 0x2D84F
{
	int iVar0;
	if (Local_49.f_56 != 0 || Local_49.f_109 != 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_49.f_162[iVar0 /*28*/].f_1 != 0 && Local_49.f_162[iVar0 /*28*/].f_1 != 11)
		{
			return 0;
		}
		iVar0++;
	}
	if (__LIB_0__::func_348(&(Local_49.f_703)) == 3 || Local_49.f_670 > 0)
	{
		return 0;
	}
	return 1;
}

int func_308()//Position - 0x2D8D2
{
	int iVar0;
	if ((Local_49.f_56 != 0 && Local_49.f_56 < 7) || (Local_49.f_109 != 0 && Local_49.f_109 < 7))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Local_49.f_162[iVar0 /*28*/].f_1 != 0 && Local_49.f_162[iVar0 /*28*/].f_1 != 11) && Local_49.f_162[iVar0 /*28*/].f_1 < 14)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_309(bool bParam0)//Position - 0x2D953
{
	func_389(&(Local_49.f_703), &(Local_49.f_737));
	func_384();
	func_381();
	func_313();
	if (bParam0)
	{
		func_310();
	}
}

void func_310()//Position - 0x2D97E
{
	if (Global_113386.f_18103.f_408 == 0)
	{
		if (Local_49.f_162[0 /*28*/].f_1 == 3 || Local_49.f_162[0 /*28*/].f_1 == 7)
		{
			if (func_311("FR_H_BUDM_A"))
			{
				Global_113386.f_18103.f_408 = 1;
				return;
			}
		}
		else if (Local_49.f_162[1 /*28*/].f_1 == 3 || Local_49.f_162[1 /*28*/].f_1 == 7)
		{
			if (func_311("FR_H_BUDF_A"))
			{
				Global_113386.f_18103.f_408 = 1;
				return;
			}
		}
		else if (Local_49.f_162[2 /*28*/].f_1 == 3 || Local_49.f_162[2 /*28*/].f_1 == 7)
		{
			if (func_311("FR_H_BUDT_A"))
			{
				Global_113386.f_18103.f_408 = 1;
				return;
			}
		}
	}
	if (Global_113386.f_18103.f_409 == 0)
	{
		if (Local_49.f_857)
		{
			if (func_311("FR_H_BUD_SW"))
			{
				Global_113386.f_18103.f_409 = 1;
				return;
			}
		}
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_0__::func_1("FR_H_BUD_SW"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

int func_311(char* sParam0)//Position - 0x2DA92
{
	if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		__LIB_0__::func_151(sParam0, -1);
		return 1;
	}
	return 0;
}

void func_313()//Position - 0x2DAC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_18__::func_173();
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Local_49.f_671[iVar1 /*6*/].f_1 != 6 && Local_49.f_671[iVar1 /*6*/] != iVar0)
		{
			if (!__LIB_0__::func_516(&(Local_49.f_671[iVar1 /*6*/].f_3)) || __LIB_26__::func_251(&(Local_49.f_671[iVar1 /*6*/].f_3), 0f))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(func_375(Local_49.f_671[iVar1 /*6*/])))
				{
					iVar2 = joaat("TEXT_FRIEND");
					if (Local_49.f_671[iVar1 /*6*/].f_1 == 2)
					{
						iVar2 = func_374(__LIB_20__::func_260(Local_49.f_671[iVar1 /*6*/]));
					}
					if (iVar2 != -1)
					{
						__LIB_42__::func_748(iVar0, Local_49.f_671[iVar1 /*6*/], Local_49.f_671[iVar1 /*6*/].f_1, 1, Local_49.f_671[iVar1 /*6*/].f_2, iVar2, -1);
					}
					Local_49.f_671[iVar1 /*6*/].f_1 = 6;
					Local_49.f_702 = (Local_49.f_702 - 1);
				}
			}
		}
		iVar1++;
	}
}

int func_374(bool bParam0)//Position - 0x30804
{
	if (bParam0 == 0)
	{
		return joaat("TEXT_FRIEND_GRIEF_MICHAEL");
	}
	else if (bParam0 == 1)
	{
		return joaat("TEXT_FRIEND_GRIEF_FRANKLIN");
	}
	else if (bParam0 == 2)
	{
		return joaat("TEXT_FRIEND_GRIEF_TREVOR");
	}
	else if (bParam0 == 3)
	{
		return joaat("TEXT_FRIEND_GRIEF_LAMAR");
	}
	else if (bParam0 == 4)
	{
		return joaat("TEXT_FRIEND_GRIEF_JIMMY");
	}
	else if (bParam0 == 5)
	{
		return joaat("TEXT_FRIEND_GRIEF_AMANDA");
	}
	return -1;
}

int func_375(int iParam0)//Position - 0x30870
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_0__::func_43(iParam0))
	{
		iVar0 = __LIB_0__::func_504(iParam0);
		return Global_97919[iVar0];
	}
	else
	{
		bVar1 = __LIB_20__::func_260(iParam0);
		if (bVar1 != 7)
		{
			iVar2 = (bVar1 - 3);
			if (iVar2 < 3)
			{
				return Global_96275[iVar2];
			}
		}
	}
	return 0;
}

void func_381()//Position - 0x30973
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	int iVar3;
	if (Local_49.f_670 > 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = Local_49.f_654[0 /*3*/];
			bVar1 = __LIB_20__::func_260(Local_49.f_654[0 /*3*/]);
			if (bVar1 < 6)
			{
				Var2 = { __LIB_0__::func_165(iVar0) };
				switch (Local_49.f_654[0 /*3*/].f_1)
				{
					case 0:
						if (bVar1 != 5)
						{
							__LIB_4__::func_936("FR_X_INJ_1m" /* GXT: ~a~ was injured. */, &Var2, -1);
						}
						else
						{
							__LIB_4__::func_936("FR_X_INJ_1f" /* GXT: ~a~ was injured. */, &Var2, -1);
						}
						if (Local_49.f_654[0 /*3*/].f_2 != 0)
						{
							func_382(Local_49.f_654[0 /*3*/], 2, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						}
						break;
					case 3:
						if (bVar1 != 5)
						{
							__LIB_4__::func_936("FR_X_FLEE_1m", &Var2, -1);
						}
						else
						{
							__LIB_4__::func_936("FR_X_FLEE_1f", &Var2, -1);
						}
						break;
					case 4:
						if (bVar1 != 5)
						{
							__LIB_4__::func_936("FR_X_ATAC_1m", &Var2, -1);
						}
						else
						{
							__LIB_4__::func_936("FR_X_ATAC_1f", &Var2, -1);
						}
						break;
					case 1:
						if (bVar1 != 5)
						{
							__LIB_4__::func_936("FR_X_LOST_1m", &Var2, -1);
						}
						else
						{
							__LIB_4__::func_936("FR_X_LOST_1f", &Var2, -1);
						}
						func_382(Local_49.f_654[0 /*3*/], 0, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						break;
					case 2:
						__LIB_4__::func_936("FR_X_LATE", &Var2, -1);
						func_382(Local_49.f_654[0 /*3*/], 1, 1092616192, Local_49.f_654[0 /*3*/].f_2);
						break;
				}
			}
			Local_49.f_670 = (Local_49.f_670 - 1);
			iVar3 = 0;
			while (iVar3 < Local_49.f_670)
			{
				Local_49.f_654[iVar3 /*3*/] = { Local_49.f_654[iVar3 + 1 /*3*/] };
				iVar3++;
			}
		}
	}
}

int func_382(int iParam0, int iParam1, float fParam2, var uParam3)//Position - 0x30B19
{
	int iVar0;
	if (iParam0 >= 145)
	{
	}
	else if (iParam1 >= 5)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_49.f_671[iVar0 /*6*/].f_1 == 6)
			{
				Local_49.f_671[iVar0 /*6*/] = iParam0;
				Local_49.f_671[iVar0 /*6*/].f_1 = iParam1;
				Local_49.f_671[iVar0 /*6*/].f_2 = uParam3;
				__LIB_2__::func_186(&(Local_49.f_671[iVar0 /*6*/].f_3), -fParam2);
				Local_49.f_702++;
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_384()//Position - 0x30BBB
{
	if (__LIB_11__::func_91() != Local_49.f_56.f_7)
	{
		func_387(Local_49.f_56.f_7);
	}
	if (__LIB_11__::func_90() != Local_49.f_109.f_7)
	{
		func_385(Local_49.f_109.f_7);
	}
}

void func_385(int iParam0)//Position - 0x30BF1
{
	Global_96274 = iParam0;
}

void func_387(int iParam0)//Position - 0x30C0B
{
	Global_96273 = iParam0;
}

void func_389(var uParam0, var uParam1)//Position - 0x30C25
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar2 = __LIB_18__::func_173();
	switch (*uParam0)
	{
		case 20:
			if (uParam0->f_3 != 20)
			{
				func_457(uParam0, uParam0->f_3, 145, 69);
			}
			break;
		case 0:
			if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 0);
				}
				else
				{
					uParam0->f_32 = func_451(0);
					if (func_143(iVar2, uParam0->f_32, func_450(), &sVar0, &cVar1))
					{
						func_449(uParam1, &sVar0, &cVar1);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_457(uParam0, 1, 145, 69);
				}
			}
			break;
		case 1:
			break;
		case 2:
			if (uParam0->f_2 == 0)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 20f))
				{
					uParam0->f_2++;
				}
				else if (func_456(uParam1))
				{
					uParam0->f_32 = func_451(0);
					if (func_143(iVar2, uParam0->f_32, func_448(), &sVar0, &cVar1))
					{
						func_449(uParam1, &sVar0, &cVar1);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 3:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (func_456(uParam1))
				{
					if (func_143(iVar2, uParam0->f_32, uParam0->f_33, &sVar0, &cVar1))
					{
						func_449(uParam1, &sVar0, &cVar1);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 4:
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_300())
			{
				func_447(uParam0);
			}
			else
			{
				__LIB_24__::func_753(uParam1, 1);
			}
			break;
		case 5:
			if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 1);
				}
				func_447(uParam0);
			}
			break;
		case 6:
			if (uParam0->f_2 == 0)
			{
				func_455(uParam1, 0);
				if (__LIB_26__::func_251(&(uParam0->f_7), -100f))
				{
					__LIB_2__::func_186(&(uParam0->f_7), -100f);
				}
				uParam0->f_2++;
			}
			else if (uParam0->f_2 == 1)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 60f))
				{
					uParam0->f_2++;
				}
				else if (__LIB_26__::func_251(&(uParam0->f_4), 3f))
				{
					if (__LIB_24__::func_752(1))
					{
						if (func_456(uParam1))
						{
							if ((iVar2 == 2 && Local_49.f_56.f_1 == 19) && func_432(2, 19, 1, 2, __LIB_28__::func_361(), &sVar0, &cVar1, 1))
							{
								func_449(uParam1, &sVar0, &cVar1);
								uParam0->f_2++;
							}
							else if (func_432(iVar2, Local_49.f_56.f_1, Local_49.f_109.f_1, 2, __LIB_28__::func_361(), &sVar0, &cVar1, 1))
							{
								func_449(uParam1, &sVar0, &cVar1);
								uParam0->f_2++;
							}
							else
							{
								uParam0->f_32 = func_451(0);
								if (uParam0->f_32 == 145 || !func_143(iVar2, uParam0->f_32, 39, &sVar0, &cVar1))
								{
									uParam0->f_2++;
								}
								else
								{
									func_449(uParam1, &sVar0, &cVar1);
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 7:
			if (!BitTest(Global_96292, 3))
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_300())
				{
					func_447(uParam0);
				}
			}
			else
			{
				__LIB_24__::func_753(uParam1, 1);
				if (__LIB_26__::func_251(&(uParam0->f_4), 0f))
				{
					if (!func_431(uParam1))
					{
						iVar3 = 0;
						if (__LIB_0__::func_502())
						{
							if (func_429(&(Local_49.f_56)))
							{
								iVar3 = Local_49.f_56.f_7;
							}
						}
						else if (func_429(&(Local_49.f_109)))
						{
							iVar3 = Local_49.f_109.f_7;
						}
						if (!PED::IS_PED_INJURED(iVar3) && !AUDIO::IS_ANY_SPEECH_PLAYING(iVar3))
						{
							__LIB_6__::func_834(iVar3, "ROBBERY_FRIEND_WITNESS", 3);
							if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar3))
							{
								__LIB_2__::func_186(&(uParam0->f_4), -5f);
							}
						}
					}
				}
			}
			break;
		case 8:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (!func_456(uParam1))
				{
					func_455(uParam1, 0);
				}
				else
				{
					if (func_143(iVar2, uParam0->f_32, func_422(uParam0->f_32, &bVar4), &sVar0, &cVar1))
					{
						func_449(uParam1, &sVar0, &cVar1);
					}
					if (bVar4)
					{
						func_419(iVar2, uParam0->f_32, 3);
					}
					__LIB_6__::func_892(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 20f) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 30f) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					uParam0->f_2++;
				}
				else if (PED::IS_PED_IN_VEHICLE(func_375(uParam0->f_32), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (func_456(uParam1))
					{
						if (func_143(iVar2, uParam0->f_32, func_418(uParam0->f_32), &sVar0, &cVar1))
						{
							func_449(uParam1, &sVar0, &cVar1);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 9:
			func_447(uParam0);
			break;
		case 10:
			if (uParam0->f_2 == 0)
			{
				if (func_417(Global_96268) != 4)
				{
					func_455(uParam1, 0);
					uParam0->f_2++;
				}
				else
				{
					uParam0->f_2 = 2;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 30f))
				{
					uParam0->f_2++;
				}
				else if (__LIB_26__::func_251(&(uParam0->f_4), 0.5f))
				{
					if (func_456(uParam1))
					{
						if (((Global_96268 < 22 && Global_96177[Global_96268 /*2*/].f_1 == 1) && Local_49.f_3.f_1 == 0) && Local_49.f_56.f_1 == 17)
						{
							if (!PED::IS_PED_INJURED(Local_49.f_56.f_7))
							{
								if (Global_96269 == 0)
								{
									__LIB_6__::func_834(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_WON", 3);
								}
								else if (Global_96269 == 3)
								{
									__LIB_6__::func_834(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_LOST", 3);
								}
								else if (Global_96269 == 2)
								{
									__LIB_6__::func_834(Local_49.f_56.f_7, "FAC_LEAVE_TENNIS_QUIT", 3);
								}
							}
							uParam0->f_2++;
						}
						else if (Global_96268 == 12)
						{
							uParam0->f_32 = func_451(1);
							if (uParam0->f_32 != 145)
							{
								if (func_416(iVar2, uParam0->f_32, Global_96268, Global_96269, __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()), &sVar0, &cVar1))
								{
									func_449(uParam1, &sVar0, &cVar1);
								}
								uParam0->f_2++;
							}
						}
						else
						{
							uParam0->f_32 = func_451(0);
							if (func_416(iVar2, uParam0->f_32, Global_96268, Global_96269, __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()), &sVar0, &cVar1))
							{
								func_449(uParam1, &sVar0, &cVar1);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (((Global_96268 < 22 && Global_96177[Global_96268 /*2*/].f_1 == 1) && Local_49.f_3.f_1 == 0) && Local_49.f_56.f_1 == 17)
				{
					if (PED::IS_PED_INJURED(Local_49.f_56.f_7) || !AUDIO::IS_ANY_SPEECH_PLAYING(Local_49.f_56.f_7))
					{
						__LIB_6__::func_892(&(uParam0->f_4));
						uParam0->f_2++;
					}
				}
				else if (func_456(uParam1))
				{
					__LIB_6__::func_892(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (__LIB_26__::func_251(&(uParam0->f_4), 1.5f))
				{
					if (func_414(1))
					{
						if (func_456(uParam1))
						{
							uParam0->f_32 = func_451(0);
							if (func_143(iVar2, uParam0->f_32, func_413(), &sVar0, &cVar1))
							{
								func_449(uParam1, &sVar0, &cVar1);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 11:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				__LIB_24__::func_753(uParam1, 0);
				iVar5 = func_375(uParam0->f_32);
				if (PED::IS_PED_INJURED(iVar5) || !PED::IS_PED_RAGDOLL(iVar5))
				{
					if (func_456(uParam1))
					{
						if (func_143(iVar2, uParam0->f_32, uParam0->f_33, &sVar0, &cVar1))
						{
							func_449(uParam1, &sVar0, &cVar1);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 12:
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_447(uParam0);
			}
			else
			{
				__LIB_24__::func_753(uParam1, 1);
				if (uParam0->f_2 == 0)
				{
					if (!func_431(uParam1))
					{
						iVar6 = 0;
						if (__LIB_0__::func_502())
						{
							if (func_429(&(Local_49.f_56)))
							{
								iVar6 = Local_49.f_56.f_7;
							}
						}
						else if (func_429(&(Local_49.f_109)))
						{
							iVar6 = Local_49.f_109.f_7;
						}
						if (!PED::IS_PED_INJURED(iVar6) && !AUDIO::IS_ANY_SPEECH_PLAYING(iVar6))
						{
							__LIB_6__::func_834(iVar6, "GET_WANTED_LEVEL", 3);
							if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar6))
							{
								uParam0->f_2++;
							}
						}
					}
				}
			}
			break;
		case 13:
			if (func_456(uParam1))
			{
				__LIB_6__::func_892(&(uParam0->f_10));
				func_412(uParam0);
				func_447(uParam0);
			}
			else if (((uParam0->f_28[0] != 145 && !func_411(uParam0->f_28[0])) || (uParam0->f_28[1] != 145 && !func_411(uParam0->f_28[1]))) || (uParam0->f_28[2] != 145 && !func_411(uParam0->f_28[2])))
			{
				func_455(uParam1, 0);
				__LIB_6__::func_892(&(uParam0->f_10));
				func_447(uParam0);
			}
			else
			{
				func_408(uParam0, uParam1);
			}
			break;
		case 14:
			if (uParam0->f_32 == 145)
			{
				func_447(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				__LIB_24__::func_753(uParam1, 1);
				if (func_456(uParam1))
				{
					if (func_143(iVar2, uParam0->f_32, uParam0->f_33, &sVar0, &cVar1))
					{
						func_449(uParam1, &sVar0, &cVar1);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					func_447(uParam0);
				}
			}
			break;
		case 15:
			if (func_456(uParam1))
			{
				func_447(uParam0);
			}
			break;
		case 16:
			if (uParam0->f_2 == 0)
			{
				if (uParam0->f_13 == 0)
				{
					if (__LIB_24__::func_752(0))
					{
						if (__LIB_26__::func_251(&(uParam0->f_4), 5f))
						{
							if (func_456(uParam1))
							{
								uParam0->f_32 = func_451(0);
								if (func_432(iVar2, uParam0->f_32, 145, 1, __LIB_28__::func_361(), &sVar0, &cVar1, 1))
								{
									func_449(uParam1, &sVar0, &cVar1);
									uParam0->f_13 = 1;
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_456(uParam1))
				{
					uParam0->f_2 = 0;
				}
			}
			break;
		case 17:
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && !__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
			{
				if (func_456(uParam1))
				{
					if (func_407(uParam0, 120000))
					{
						if (!__LIB_26__::func_251(&(uParam0->f_4), 15f))
						{
							if (__LIB_26__::func_251(&(uParam0->f_4), 1.5f) && __LIB_24__::func_752(0))
							{
								if (func_457(uParam0, 13, 145, 69))
								{
									func_406(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23));
									func_405(uParam0, uParam0->f_28[0], uParam0->f_28[1], uParam0->f_28[2]);
									__LIB_2__::func_186(&(uParam0->f_7), func_404(uParam0));
									func_412(uParam0);
								}
							}
						}
						else
						{
							func_412(uParam0);
						}
					}
					else
					{
						if (uParam0->f_14 == 0)
						{
							if (__LIB_26__::func_251(&(uParam0->f_4), 5f) && __LIB_26__::func_251(&(uParam0->f_7), 0f))
							{
								if (__LIB_24__::func_752(0))
								{
									if (func_432(iVar2, Local_49.f_56.f_1, Local_49.f_109.f_1, 0, __LIB_28__::func_361(), &sVar0, &cVar1, 1) && func_457(uParam0, 13, 145, 69))
									{
										func_449(uParam1, &sVar0, &cVar1);
										func_405(uParam0, iVar2, Local_49.f_56.f_1, Local_49.f_109.f_1);
										__LIB_2__::func_186(&(uParam0->f_7), func_404(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						else if (uParam0->f_14 < 3)
						{
							if (__LIB_26__::func_251(&(uParam0->f_4), 5f) && __LIB_26__::func_251(&(uParam0->f_7), 0f))
							{
								if (__LIB_24__::func_752(0))
								{
									if (func_432(iVar2, Local_49.f_56.f_1, Local_49.f_109.f_1, 1, __LIB_28__::func_361(), &sVar0, &cVar1, 1) && func_457(uParam0, 13, 145, 69))
									{
										func_449(uParam1, &sVar0, &cVar1);
										func_405(uParam0, iVar2, Local_49.f_56.f_1, Local_49.f_109.f_1);
										__LIB_2__::func_186(&(uParam0->f_7), func_404(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						if (__LIB_26__::func_251(&(uParam0->f_4), 3f))
						{
							if (func_414(1))
							{
								if (func_403(iVar2) != Local_49.f_624)
								{
									iVar7 = func_451(1);
									if (iVar7 != 145)
									{
										func_457(uParam0, 14, iVar7, 55);
									}
								}
								else if (func_402(iVar2) != Local_49.f_622)
								{
									iVar7 = func_451(1);
									if (iVar7 != 145)
									{
										func_457(uParam0, 14, iVar7, 53);
									}
								}
								else if (func_401(iVar2) != Local_49.f_623)
								{
									iVar7 = func_451(1);
									if (iVar7 != 145)
									{
										func_457(uParam0, 14, iVar7, 54);
									}
								}
								else if (__LIB_26__::func_251(&(uParam0->f_4), 10f))
								{
									if (uParam0->f_14 > 0)
									{
										if (!__LIB_0__::func_516(&(uParam0->f_10)) || __LIB_26__::func_251(&(uParam0->f_10), 20f))
										{
											iVar8 = Local_49.f_642;
											if (func_397(iVar8) || func_395(Local_49.f_3.f_1, Local_49.f_56.f_1, &iVar8))
											{
												iVar7 = func_451(0);
												if (iVar7 != 145 && iVar8 < 22)
												{
													if (func_394(iVar2, iVar7, iVar8, &sVar0, &cVar1) && func_457(uParam0, 15, 145, 69))
													{
														func_392(Local_49.f_3.f_1, Local_49.f_56.f_1, iVar8);
														func_449(uParam1, &sVar0, &cVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 18:
			break;
		default:
			break;
	}
	if (*uParam0 != 12)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_457(uParam0, 12, 145, 69);
			}
		}
	}
	if (*uParam0 != 7)
	{
		if (BitTest(Global_96292, 3))
		{
			func_457(uParam0, 7, 145, 69);
		}
	}
	if (*uParam0 != 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_300())
		{
			func_457(uParam0, 4, 145, 69);
		}
	}
	if ((((((*uParam0 != 16 && *uParam0 != 17) && *uParam0 != 8) && *uParam0 != 9) && *uParam0 != 10) && *uParam0 != 4) && *uParam0 != 20)
	{
		Local_49.f_623 = func_401(iVar2);
		Local_49.f_622 = func_402(iVar2);
		Local_49.f_624 = func_403(iVar2);
	}
	func_390(uParam1);
}

void func_390(var uParam0)//Position - 0x31B83
{
	switch (*uParam0)
	{
		case 1:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_35__::func_536(&(Local_49.f_259), &(uParam0->f_1), &(uParam0->f_5), 3, 0, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_36__::func_42(&(Local_49.f_259), &(uParam0->f_1), &(uParam0->f_5), &(uParam0->f_9), 3, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_75())
			{
				*uParam0 = 0;
			}
			break;
	}
}

void func_392(int iParam0, int iParam1, int iParam2)//Position - 0x31C59
{
	func_393(&(Local_49.f_634), Global_96177[iParam2 /*2*/].f_1);
	if (iParam1 == 14)
	{
		if (iParam2 < 22 && Global_96177[iParam2 /*2*/].f_1 == 5)
		{
			if (iParam0 == 0)
			{
				MISC::SET_BIT(&(Global_113386.f_18103.f_410), 5);
			}
			else if (iParam0 == 2)
			{
				MISC::SET_BIT(&(Global_113386.f_18103.f_410), 4);
			}
		}
	}
}

void func_393(int* iParam0, int iParam1)//Position - 0x31CC1
{
	if (iParam1 < 32)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else if (iParam1 < 64)
	{
		MISC::SET_BIT(&(iParam0->f_1), (iParam1 - 32));
	}
}

int func_394(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x31CF2
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	if (bVar0 == 7 || bVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { func_144(bVar0, bVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_Sg", 16);
	switch (Global_96177[iParam2 /*2*/].f_1)
	{
		case 4:
			StringConCat(sParam4, "Cin", 16);
			break;
		case 0:
			StringConCat(sParam4, "Glf", 16);
			break;
		case 2:
			StringConCat(sParam4, "Str", 16);
			break;
		case 1:
			StringConCat(sParam4, "Tns", 16);
			break;
		case 3:
			StringConCat(sParam4, "Drt", 16);
			break;
		case 5:
			StringConCat(sParam4, "Bar", 16);
			break;
		default:
			StringConCat(sParam4, "BAD", 16);
			return 0;
			break;
	}
	return 1;
}

int func_395(int iParam0, int iParam1, int iParam2)//Position - 0x31DCA
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	if (iParam1 == 14)
	{
		if ((iParam0 == 0 && !BitTest(Global_113386.f_18103.f_410, 5)) || (iParam0 == 2 && !BitTest(Global_113386.f_18103.f_410, 4)))
		{
			if (!func_396(&(Local_49.f_634), 5))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 23;
					fVar1 = (100000f * 100000f);
					iVar2 = 0;
					while (iVar2 < 22)
					{
						if (Global_96177[iVar2 /*2*/].f_1 == 5)
						{
							fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_11__::func_156(Global_96177[iVar2 /*2*/], 0));
							if (fVar1 > fVar3)
							{
								fVar1 = fVar3;
								iVar0 = iVar2;
							}
						}
						iVar2++;
					}
					if (iVar0 != 23 && fVar1 < (400f * 400f))
					{
						*iParam2 = iVar0;
						return 1;
					}
				}
			}
		}
	}
	*iParam2 = 23;
	return 0;
}

int func_396(var uParam0, int iParam1)//Position - 0x31EB0
{
	if (iParam1 < 32)
	{
		return BitTest(*uParam0, iParam1);
	}
	if (iParam1 < 64)
	{
		return BitTest(uParam0->f_1, (iParam1 - 32));
	}
	return 0;
}

int func_397(int iParam0)//Position - 0x31EE3
{
	int iVar0;
	if (Local_49.f_642 < 22 && Local_49.f_642 != 16)
	{
		iVar0 = Global_96177[iParam0 /*2*/].f_1;
		if (func_396(&(Local_49.f_631), iVar0) && !func_396(&(Local_49.f_634), iVar0))
		{
			if (__LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), func_400(iParam0), 175f) && func_398(PLAYER::PLAYER_PED_ID(), func_400(iParam0), 75f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_398(int iParam0, struct<3> Param1, float fParam2)//Position - 0x31F61
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var0.f_0 = (Var0.f_0 - Param1.f_0);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam2 * fParam2);
}

Vector3 func_400(int iParam0)//Position - 0x32007
{
	return __LIB_11__::func_156(Global_96177[iParam0 /*2*/], 0);
}

int func_401(int iParam0)//Position - 0x3201C
{
	if (__LIB_0__::func_43(iParam0))
	{
		return Global_113386.f_2363.f_539.f_2336[iParam0];
	}
	return -15;
}

int func_402(int iParam0)//Position - 0x32044
{
	if (__LIB_0__::func_43(iParam0))
	{
		return Global_113386.f_2363.f_539.f_2340[iParam0];
	}
	return -1;
}

int func_403(int iParam0)//Position - 0x3206A
{
	if (__LIB_0__::func_43(iParam0))
	{
		return Global_113386.f_2363.f_539.f_2344[iParam0];
	}
	return -1;
}

float func_404(var uParam0)//Position - 0x32090
{
	float fVar0;
	float fVar1;
	fVar0 = (2f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	fVar1 = (3f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	return MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar1 * -60f), (fVar0 * -60f));
}

void func_405(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x320D0
{
	uParam0->f_28[0] = iParam1;
	uParam0->f_28[1] = uParam2;
	uParam0->f_28[2] = uParam3;
}

void func_406(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x320F3
{
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_75())
		{
			*uParam0 = 2;
			uParam0->f_1 = { *uParam1 };
			uParam0->f_5 = { *uParam2 };
			uParam0->f_9 = { *uParam3 };
		}
	}
}

int func_407(var uParam0, int iParam1)//Position - 0x3212C
{
	if (iParam1 < 0 || (MISC::GET_GAME_TIMER() - uParam0->f_27) < iParam1)
	{
		if (((((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_15)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "NULL")) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_19))) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_19), "NULL")) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23))) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_23), "NULL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_408(var uParam0, var uParam1)//Position - 0x321AA
{
	if (func_409(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23)))
	{
		uParam0->f_27 = MISC::GET_GAME_TIMER();
	}
	else
	{
		StringCopy(&(uParam0->f_15), "", 16);
		StringCopy(&(uParam0->f_19), "", 16);
		StringCopy(&(uParam0->f_23), "", 16);
	}
}

int func_409(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x321EA
{
	if (*uParam0 == 3)
	{
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			*uParam1 = { uParam0->f_1 };
			*uParam2 = { uParam0->f_5 };
			MemCopy(uParam3, {__LIB_0__::func_389()}, 4);
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0)//Position - 0x322CE
{
	if (iParam0 == __LIB_18__::func_173())
	{
		return 1;
	}
	else
	{
		if (Local_49.f_56.f_1 == iParam0)
		{
			if (Local_49.f_56 == 2)
			{
				return 1;
			}
		}
		if (Local_49.f_109.f_1 == iParam0)
		{
			if (Local_49.f_109 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_412(var uParam0)//Position - 0x32315
{
	StringCopy(&(uParam0->f_15), "", 16);
	StringCopy(&(uParam0->f_19), "", 16);
	StringCopy(&(uParam0->f_23), "", 16);
}

int func_413()//Position - 0x32335
{
	if (Local_49.f_640 == 1)
	{
		return 40;
	}
	else if (Local_49.f_641)
	{
		return 41;
	}
	return 69;
}

int func_414(int iParam0)//Position - 0x3235D
{
	struct<3> Var0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (iParam0 && HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	else if (__LIB_0__::func_527())
	{
		return 0;
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (Local_49.f_56.f_50)
		{
			if ((Local_49.f_56 != 2 || !ENTITY::IS_ENTITY_AT_COORD(Local_49.f_56.f_7, Var0, 25f, 25f, 25f, false, true, 0)) || PED::IS_PED_IN_COMBAT(Local_49.f_56.f_7, 0))
			{
				return 0;
			}
		}
		if (Local_49.f_109.f_50)
		{
			if ((Local_49.f_109 != 2 || !ENTITY::IS_ENTITY_AT_COORD(Local_49.f_109.f_7, Var0, 25f, 25f, 25f, false, true, 0)) || PED::IS_PED_IN_COMBAT(Local_49.f_109.f_7, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_416(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, char* sParam6)//Position - 0x32455
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	if (bVar0 == 7 || bVar1 == 7)
	{
		return 0;
	}
	*sParam6 = { func_144(bVar0, bVar1, 7, 1) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	iVar2 = Global_96177[iParam2 /*2*/].f_1;
	StringConCat(sParam6, "_", 16);
	switch (iVar2)
	{
		case 4:
			StringConCat(sParam6, "Cin", 16);
			break;
		case 5:
			StringConCat(sParam6, "Bar", 16);
			break;
		case 0:
			StringConCat(sParam6, "Glf", 16);
			break;
		case 2:
			StringConCat(sParam6, "Str", 16);
			break;
		case 1:
			StringConCat(sParam6, "Tns", 16);
			break;
		case 3:
			StringConCat(sParam6, "Drt", 16);
			break;
		default:
			StringConCat(sParam6, "BAD", 16);
			return 0;
			break;
	}
	if (bParam4 && (iVar2 != 0 && iVar2 != 1))
	{
		StringConCat(sParam6, "Dr", 16);
	}
	else
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam6, "Wn", 16);
				break;
			case 3:
				StringConCat(sParam6, "Ls", 16);
				break;
			case 4:
				StringConCat(sParam6, "Ls", 16);
				break;
			case 1:
				StringConCat(sParam6, "Ti", 16);
				break;
			case 2:
				StringConCat(sParam6, "Qt", 16);
				break;
			default:
				StringConCat(sParam6, "XX", 16);
				return 0;
				break;
			}
	}
	return 1;
}

int func_417(int iParam0)//Position - 0x325BE
{
	if (iParam0 < 22)
	{
		return Global_96177[iParam0 /*2*/].f_1;
	}
	return 8;
}

int func_418(int iParam0)//Position - 0x325DC
{
	int iVar0;
	iVar0 = func_123(__LIB_18__::func_173(), iParam0);
	if (((Local_49.f_56.f_1 == iParam0 && ENTITY::DOES_ENTITY_EXIST(Local_49.f_56.f_8)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_49.f_56.f_8, false)) && func_116(Local_49.f_56.f_8, Local_49.f_56.f_7))
	{
		return 10;
	}
	else if (((Local_49.f_109.f_1 == iParam0 && ENTITY::DOES_ENTITY_EXIST(Local_49.f_109.f_8)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_49.f_109.f_8, false)) && func_116(Local_49.f_56.f_8, Local_49.f_56.f_7))
	{
		return 10;
	}
	else if (Local_49.f_56 == 2 && Local_49.f_109 == 2)
	{
		return 9;
	}
	else if (iVar0 < 20)
	{
		return 8;
	}
	else if (iVar0 < 40)
	{
		return 7;
	}
	return 6;
}

void func_419(int iParam0, int iParam1, int iParam2)//Position - 0x326BF
{
	switch (iParam2)
	{
		case 0:
			func_420(iParam0, iParam1, -1);
			break;
		case 5:
			func_420(iParam0, iParam1, -1);
			break;
		case 3:
			func_420(iParam0, iParam1, -2);
			break;
		case 4:
			func_420(iParam0, iParam1, -5);
			break;
		case 1:
			func_420(iParam0, iParam1, -5);
			break;
		case 2:
			func_420(iParam0, iParam1, -5);
			break;
		case 6:
			func_420(iParam0, iParam1, 5);
			break;
		case 7:
			func_420(iParam0, iParam1, 3);
			break;
		default:
			break;
	}
}

void func_420(int iParam0, int iParam1, int iParam2)//Position - 0x32769
{
	func_421(iParam0, iParam1, (func_123(iParam0, iParam1) + iParam2));
}

void func_421(int iParam0, int iParam1, int iParam2)//Position - 0x32784
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	iVar2 = func_51(bVar0, bVar1);
	Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = iParam2;
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 < 0)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 0;
	}
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 > 100)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 100;
	}
}

int func_422(int iParam0, var uParam1)//Position - 0x327FF
{
	if (iParam0 == Local_49.f_56.f_1)
	{
		return func_423(&(Local_49.f_3), &(Local_49.f_56), uParam1);
	}
	else if (iParam0 == Local_49.f_109.f_1)
	{
		return func_423(&(Local_49.f_3), &(Local_49.f_109), uParam1);
	}
	return 69;
}

int func_423(var uParam0, var uParam1, var uParam2)//Position - 0x32844
{
	int iVar0;
	*uParam2 = 0;
	if (uParam1->f_51)
	{
		return 69;
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_516(&(uParam1->f_12))) && !__LIB_26__::func_251(&(uParam1->f_12), 8f))
	{
		return 5;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_10__::func_946(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			return 3;
		}
	}
	if ((Local_49.f_653 == 0 && __LIB_26__::func_251(&(uParam1->f_15), (2f * 60f))) || (Local_49.f_653 == 1 && __LIB_26__::func_251(&(uParam1->f_15), (3.5f * 60f))))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 2;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 15f, 15f, 15f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_7, iVar0, 15f, 15f, 15f, false, true, 0))
	{
		return 2;
	}
	if ((((((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || __LIB_28__::func_359(ENTITY::GET_ENTITY_MODEL(iVar0))) || ENTITY::GET_ENTITY_HEALTH(iVar0) < 500)
	{
		if ((((uParam0->f_1 != 0 && uParam1->f_1 != 14) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 4;
		}
	}
	return 0;
}

int func_429(var uParam0)//Position - 0x330DA
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_197(uParam0->f_7))
	{
		if (uParam0->f_1 == __LIB_18__::func_173())
		{
			return 1;
		}
		if (*uParam0 == 2 || *uParam0 == 4)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 75f, 75f, 75f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_431(var uParam0)//Position - 0x33160
{
	if (*uParam0 == 3)
	{
		if (__LIB_0__::func_75())
		{
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x3317B
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	bVar2 = __LIB_20__::func_260(iParam2);
	if ((bVar0 == 7 || bVar1 == 7) || (bVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (bVar2 == 7)
	{
		iVar5 = func_51(bVar0, bVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && __LIB_0__::func_368(137)) && iParam3 == 1)
		{
			if (__LIB_28__::func_360(&(Global_113386.f_18103.f_388), iParam3, &iVar3, &iVar4, uParam4))
			{
				if (bParam7)
				{
					__LIB_34__::func_226(&(Global_113386.f_18103.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (__LIB_28__::func_360(&(Global_113386.f_18103.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				__LIB_34__::func_226(&(Global_113386.f_18103.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_433(bVar0, bVar1, bVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (__LIB_28__::func_360(&(Global_113386.f_18103.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				__LIB_34__::func_226(&(Global_113386.f_18103.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_144(bVar0, bVar1, bVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

int func_433(bool bParam0, bool bParam1, bool bParam2)//Position - 0x33426
{
	if ((bParam0 == bParam1 || bParam1 == bParam2) || bParam2 == bParam0)
	{
		return 3;
	}
	if (((bParam0 == 1 || bParam1 == 1) || bParam2 == 1) && ((bParam0 == 2 || bParam1 == 2) || bParam2 == 2))
	{
		if ((bParam0 == 0 || bParam1 == 0) || bParam2 == 0)
		{
			return 0;
		}
		if ((bParam0 == 3 || bParam1 == 3) || bParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_447(var uParam0)//Position - 0x33AE5
{
	*uParam0 = 20;
	uParam0->f_1 = 8;
	uParam0->f_32 = 145;
	uParam0->f_33 = 69;
	uParam0->f_2 = 0;
}

int func_448()//Position - 0x33B09
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
	{
		return 46;
	}
	return 45;
}

void func_449(var uParam0, char* sParam1, char[4] cParam2)//Position - 0x33B31
{
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_75())
		{
			*uParam0 = 1;
			uParam0->f_1 = { *sParam1 };
			uParam0->f_5 = { *cParam2 };
		}
	}
}

int func_450()//Position - 0x33B60
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
	{
		return 44;
	}
	return 42;
}

int func_451(int iParam0)//Position - 0x33B88
{
	var uVar0[5];
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (func_429(&(Local_49.f_56)))
	{
		if (iParam0 == 0 || func_454(&(Local_49.f_56)))
		{
			uVar0[iVar1] = Local_49.f_56.f_1;
			iVar1++;
		}
	}
	if (func_429(&(Local_49.f_109)))
	{
		if (iParam0 == 0 || func_454(&(Local_49.f_109)))
		{
			uVar0[iVar1] = Local_49.f_109.f_1;
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_453(&(Local_49.f_162[iVar2 /*28*/])))
		{
			if (iParam0 == 0 || func_452(&(Local_49.f_162[iVar2 /*28*/])))
			{
				uVar0[iVar1] = Local_49.f_162[iVar2 /*28*/];
				iVar1++;
			}
		}
		iVar2++;
	}
	if (iVar1 > 0)
	{
		return uVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)];
	}
	return 145;
}

int func_452(var uParam0)//Position - 0x33C60
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_3) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_453(var uParam0)//Position - 0x33C85
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_197(uParam0->f_3))
	{
		if (*uParam0 == __LIB_18__::func_173())
		{
			return 1;
		}
		if (((uParam0->f_1 == 4 || uParam0->f_1 == 5) || uParam0->f_1 == 6) || uParam0->f_1 == 12)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 75f, 75f, 75f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_454(var uParam0)//Position - 0x33D07
{
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_7) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_455(var uParam0, bool bParam1)//Position - 0x33D2C
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam1);
	*uParam0 = 0;
}

int func_456(var uParam0)//Position - 0x33D3F
{
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_75())
		{
			return 1;
		}
	}
	return 0;
}

int func_457(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33D5B
{
	int iVar0;
	bool bVar1;
	iVar0 = 8;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 3)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 4)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 5)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 6)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 7)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 8)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 9)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 10)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 11)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 12)
	{
		iVar0 = 5;
	}
	else if (iParam1 == 13)
	{
		iVar0 = 6;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 15)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 16)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 18)
	{
		iVar0 = 8;
	}
	bVar1 = iVar0 > uParam0->f_1;
	if (bVar1 == 0)
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iVar0;
		uParam0->f_32 = iParam2;
		uParam0->f_33 = iParam3;
		uParam0->f_2 = 0;
		__LIB_6__::func_892(&(uParam0->f_4));
		return 1;
	}
	return 0;
}

void func_458()//Position - 0x33E91
{
	bool bVar0;
	func_470();
	bVar0 = false;
	if (!func_468())
	{
		if (Local_49.f_56 >= 7)
		{
			func_467(&(Local_49.f_56), &(Local_49.f_629));
			func_461(&(Local_49.f_56));
			bVar0 = true;
		}
		if (Local_49.f_109 >= 7)
		{
			func_467(&(Local_49.f_109), &(Local_49.f_630));
			func_461(&(Local_49.f_109));
			bVar0 = true;
		}
		if (bVar0)
		{
			func_459(1);
		}
	}
}

int func_459(bool bParam0)//Position - 0x33EF3
{
	int iVar0;
	bool bVar1;
	struct<53> Var2;
	struct<53> Var3;
	struct<53> Var4;
	iVar0 = __LIB_18__::func_173();
	bVar1 = false;
	if (Local_49.f_56 != 0 && Local_49.f_56.f_1 == iVar0)
	{
		Var2 = { Local_49.f_3 };
		Local_49.f_3 = { Local_49.f_56 };
		Local_49.f_56 = { Var2 };
		bVar1 = true;
	}
	if (Local_49.f_109 != 0 && Local_49.f_109.f_1 == iVar0)
	{
		Var3 = { Local_49.f_3 };
		Local_49.f_3 = { Local_49.f_109 };
		Local_49.f_109 = { Var3 };
		bVar1 = true;
	}
	if (bParam0)
	{
		if (Local_49.f_56 == 0 && Local_49.f_109 != 0)
		{
			Var4 = { Local_49.f_56 };
			Local_49.f_56 = { Local_49.f_109 };
			Local_49.f_109 = { Var4 };
			bVar1 = true;
		}
	}
	func_460();
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_460()//Position - 0x33FD5
{
	if (__LIB_1__::func_197(Local_49.f_3.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_49.f_3.f_7, 206, false);
	}
	if (__LIB_1__::func_197(Local_49.f_56.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_49.f_56.f_7, 206, false);
	}
	if (__LIB_1__::func_197(Local_49.f_109.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_49.f_109.f_7, 206, false);
	}
	if (__LIB_1__::func_197(Local_49.f_56.f_7) && Local_49.f_56.f_50)
	{
		if (!Local_49.f_109.f_50)
		{
			PED::SET_PED_CONFIG_FLAG(Local_49.f_56.f_7, 206, true);
			return Local_49.f_56.f_1;
		}
	}
	if (__LIB_1__::func_197(Local_49.f_109.f_7) && Local_49.f_109.f_50)
	{
		if (!Local_49.f_56.f_50)
		{
			PED::SET_PED_CONFIG_FLAG(Local_49.f_109.f_7, 206, true);
			return Local_49.f_56.f_1;
		}
	}
	return 145;
}

void func_461(var uParam0)//Position - 0x3409F
{
	bool bVar0;
	if (*uParam0 == 9)
	{
		bVar0 = __LIB_20__::func_260(uParam0->f_1);
		func_465(bVar0, func_374(bVar0));
		func_462(uParam0->f_1, 0, __LIB_20__::func_687(uParam0->f_7));
		func_5(uParam0, 2, 0);
	}
	else if (*uParam0 == 10)
	{
		func_462(uParam0->f_1, 2, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 11)
	{
		func_462(uParam0->f_1, 1, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 8)
	{
		func_5(uParam0, 5, 0);
	}
	else if (*uParam0 == 12)
	{
		func_462(uParam0->f_1, 3, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 13)
	{
		func_462(uParam0->f_1, 4, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 14)
	{
		func_5(uParam0, 6, 0);
	}
	else if (*uParam0 == 7)
	{
		func_5(uParam0, 6, 0);
	}
	else
	{
		func_5(uParam0, 6, 0);
	}
}

void func_462(var uParam0, int iParam1, int iParam2)//Position - 0x34195
{
	if (Local_49.f_670 < 5)
	{
		Local_49.f_654[Local_49.f_670 /*3*/] = uParam0;
		Local_49.f_654[Local_49.f_670 /*3*/].f_1 = iParam1;
		Local_49.f_654[Local_49.f_670 /*3*/].f_2 = iParam2;
		Local_49.f_670++;
	}
}

void func_465(bool bParam0, int iParam1)//Position - 0x342F0
{
	if (bParam0 < 6)
	{
		__LIB_6__::func_892(&(Global_113386.f_18103.f_362[bParam0 /*3*/]));
		Global_113386.f_18103.f_381[bParam0] = iParam1;
		if (iParam1 != -1)
		{
			__LIB_21__::func_175(&(Global_113386.f_18103.f_362[bParam0 /*3*/]));
		}
	}
}

void func_467(var uParam0, var uParam1)//Position - 0x34372
{
	if (*uParam0 != 7)
	{
		*uParam1 = uParam0->f_1;
	}
}

int func_468()//Position - 0x34388
{
	if (__LIB_0__::func_198())
	{
		return 1;
	}
	return 0;
}

void func_470()//Position - 0x343B8
{
	if ((Local_49.f_614 && Global_96287 != 4) && Global_96287 != 5)
	{
		if (func_489())
		{
			if ((Local_49.f_703 != 0 && Local_49.f_703 != 1) && Local_49.f_615 != Global_96288)
			{
				func_457(&(Local_49.f_703), 0, 145, 69);
				Local_49.f_615 = Global_96288;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (Local_49.f_703 != 0)
					{
						func_877(1, 48, 0);
					}
				}
			}
		}
		else if (Local_49.f_703 == 1)
		{
			if (Global_96287 != 3)
			{
				func_457(&(Local_49.f_703), 2, 145, 69);
			}
		}
	}
	if (Local_49.f_56 == 4)
	{
		if (func_488(&(Local_49.f_56)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_0__::func_43(Local_49.f_56.f_1))
			{
				func_486(&(Local_49.f_56), 1, 48);
			}
			else
			{
				func_486(&(Local_49.f_56), 1, 49);
			}
		}
	}
	if (Local_49.f_109 == 4)
	{
		if (func_488(&(Local_49.f_109)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_0__::func_43(Local_49.f_109.f_1))
			{
				func_486(&(Local_49.f_109), 1, 48);
			}
			else
			{
				func_486(&(Local_49.f_109), 1, 49);
			}
		}
	}
	if (func_484())
	{
		if (func_456(&(Local_49.f_737)) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 0.5f))
		{
			func_472(1, 47);
		}
	}
	if (__LIB_11__::func_730(12))
	{
		func_472(1, 69);
	}
}

void func_472(int iParam0, int iParam1)//Position - 0x34553
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_18__::func_173();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != iVar0)
		{
			__LIB_24__::func_754(&(Local_49.f_162[iVar1 /*28*/]), Global_96290, iParam0, iParam1);
		}
		iVar1++;
	}
}

void func_474(var uParam0, int iParam1)//Position - 0x3474D
{
	if (uParam0->f_1 != 0)
	{
		__LIB_0__::func_523(&(uParam0->f_4));
		func_480(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			if (uParam0->f_1 == 12 && iParam1 != 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
					}
				}
			}
			func_479(uParam0);
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_GROUP(uParam0->f_3))
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
				}
				if (iParam1 == 0)
				{
					PED::DELETE_PED(&(uParam0->f_3));
				}
				else if (iParam1 == 2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
				}
			}
		}
		func_477(uParam0);
		func_476(uParam0, &Global_96295);
		func_43(*uParam0);
		func_475(uParam0, *uParam0);
	}
}

void func_475(var uParam0, int iParam1)//Position - 0x34811
{
	*uParam0 = iParam1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1;
	__LIB_1__::func_37(&(uParam0->f_7));
	uParam0->f_10 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 145;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
}

void func_476(var uParam0, int* iParam1)//Position - 0x34886
{
	MISC::CLEAR_BIT(iParam1, *uParam0);
}

void func_477(var uParam0)//Position - 0x34897
{
	bool bVar0;
	int iVar1;
	bVar0 = *uParam0;
	if (BitTest(Global_96294, bVar0))
	{
		MISC::CLEAR_BIT(&Global_96294, bVar0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (*uParam0 != iVar1 && func_478(&(Local_49.f_162[iVar1 /*28*/]), Global_96294))
			{
				func_50(*uParam0, iVar1, 1);
			}
			iVar1++;
		}
	}
}

bool func_478(var uParam0, var uParam1)//Position - 0x348F2
{
	return BitTest(uParam1, *uParam0);
}

void func_479(var uParam0)//Position - 0x34900
{
	if (__LIB_1__::func_197(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3, false, 1);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, false);
		PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_3, 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 107, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 206, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, false, 0);
		if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, false, 0);
		}
	}
}

void func_480(var uParam0)//Position - 0x3497F
{
	float fVar0;
	if (__LIB_1__::func_197(uParam0->f_3))
	{
		if (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) > SYSTEM::FLOOR(200f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->f_3)) * (200f / 400f));
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, SYSTEM::FLOOR(200f));
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, SYSTEM::FLOOR(fVar0), 0);
		}
	}
}

int func_483(int iParam0, int iParam1, char* sParam2)//Position - 0x34A19
{
	switch (iParam1)
	{
		case 48:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				default:
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				default:
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				default:
			}
			break;
		case 52:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				default:
			}
			break;
		default:
			StringCopy(sParam2, "FaFM_BVAA", 16);
			return 0;
			break;
	}
	StringCopy(sParam2, "FaFM_BVAA", 16);
	return 0;
}

int func_484()//Position - 0x34C30
{
	int iVar0;
	int iVar1;
	if (Global_96287 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = __LIB_18__::func_173();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (iVar1 != iVar0)
				{
					if (func_453(&(Local_49.f_162[iVar1 /*28*/])) && func_485(&(Local_49.f_162[iVar1 /*28*/])))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_485(var uParam0)//Position - 0x34C90
{
	if (__LIB_26__::func_251(&(uParam0->f_7), 300f))
	{
		return 1;
	}
	return 0;
}

int func_486(var uParam0, bool bParam1, int iParam2)//Position - 0x34CAD
{
	int iVar0;
	char* sVar1;
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		iVar0 = __LIB_18__::func_173();
		if (__LIB_1__::func_197(uParam0->f_7) && uParam0->f_1 != iVar0)
		{
			if (func_429(uParam0))
			{
				if (iParam2 != 69)
				{
					if (bParam1 == 0)
					{
						if (func_483(uParam0->f_1, iParam2, &sVar1))
						{
							__LIB_5__::func_759(uParam0->f_7, &sVar1, __LIB_24__::func_747(uParam0->f_1), 4);
						}
					}
					else if (__LIB_0__::func_348(&(Local_49.f_703)) != 3)
					{
						func_457(&(Local_49.f_703), 3, uParam0->f_1, iParam2);
					}
				}
			}
		}
		__LIB_1__::func_0(uParam0, 8);
		return 1;
	}
	return 0;
}

int func_488(var uParam0)//Position - 0x34D57
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_489()//Position - 0x34DAA
{
	int iVar0;
	int iVar1;
	if (Global_96287 == 3 && __LIB_0__::func_517(Global_91229[Global_96288 /*34*/].f_11, __LIB_11__::func_913(__LIB_18__::func_173())))
	{
		if ((func_429(&(Local_49.f_56)) && func_490(Local_49.f_56.f_1, Global_96289)) || (func_429(&(Local_49.f_109)) && func_490(Local_49.f_109.f_1, Global_96289)))
		{
			return 1;
		}
		iVar0 = __LIB_18__::func_173();
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (iVar1 != iVar0)
			{
				if (func_453(&(Local_49.f_162[iVar1 /*28*/])) && func_490(iVar1, Global_96289))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_490(int iParam0, var uParam1)//Position - 0x34E5D
{
	return !BitTest(uParam1, __LIB_20__::func_260(iParam0));
}

void func_491()//Position - 0x34E6F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_838(&(Local_49.f_162[iVar0 /*28*/]));
		iVar0++;
	}
	func_493(&(Local_49.f_3));
	func_493(&(Local_49.f_56));
	func_493(&(Local_49.f_109));
	__LIB_0__::func_400();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED(Local_49.f_56.f_7))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_49.f_56.f_7);
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_49.f_56.f_7);
	}
	if (!PED::IS_PED_INJURED(Local_49.f_109.f_7))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_49.f_109.f_7);
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_49.f_109.f_7);
	}
}

void func_493(var uParam0)//Position - 0x34F7E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	char[] cVar9[8];
	if (*uParam0 == 0 || *uParam0 >= 7)
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			iVar1 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_8);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, false))
			{
				if (iVar1 < (uParam0->f_38 - 50))
				{
					bVar0 = true;
				}
			}
			uParam0->f_38 = iVar1;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_8);
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_8);
		}
		else
		{
			if (uParam0->f_38 != -1)
			{
				bVar0 = true;
			}
			uParam0->f_38 = -1;
		}
	}
	if (__LIB_0__::func_43(uParam0->f_1))
	{
		MISC::CLEAR_BIT(&Global_96292, uParam0->f_1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (uParam0->f_50)
		{
			func_419(Local_49.f_3.f_1, uParam0->f_1, 1);
		}
		if (__LIB_0__::func_43(uParam0->f_1))
		{
			func_65(uParam0);
			Global_113386.f_18533[uParam0->f_1] = 0;
		}
		func_837(1);
		__LIB_1__::func_0(uParam0, 9);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
		{
			__LIB_1__::func_0(uParam0, 7);
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && uParam0->f_7 != PLAYER::PLAYER_PED_ID())
	{
		iVar2 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_IN_VEHICLE(uParam0->f_7, iVar3, false))
			{
				iVar2 = 1;
			}
		}
		if (iVar2 == 1)
		{
			uParam0->f_40 = 1;
		}
		else if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(uParam0->f_7)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7))
		{
			uParam0->f_40 = 0;
		}
		iVar4 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_7);
		if (uParam0->f_40 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), true))
			{
				if (iVar4 < (uParam0->f_41 - 10))
				{
					func_836(uParam0, 1);
				}
			}
		}
		uParam0->f_41 = iVar4;
	}
	if (*uParam0 != 4)
	{
		if (func_835())
		{
			if (uParam0->f_1 != __LIB_18__::func_173())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					func_832(uParam0, 1, 0);
				}
			}
			return;
		}
	}
	if (*uParam0 == 1)
	{
		if (uParam0->f_2 == 25 || (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && func_398(uParam0->f_7, uParam0->f_24, 20f)))
		{
			__LIB_6__::func_892(&(uParam0->f_15));
		}
	}
	Global_43604[uParam0->f_1] = MISC::GET_GAME_TIMER() + 20000;
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_7, 328, true);
	}
	if (uParam0->f_1 != __LIB_18__::func_173())
	{
		if (*uParam0 == 1)
		{
			func_831(uParam0);
			if (!func_468())
			{
				if ((Local_49.f_653 == 0 && __LIB_26__::func_251(&(uParam0->f_15), (4f * 60f))) || (Local_49.f_653 == 1 && __LIB_26__::func_251(&(uParam0->f_15), (8f * 60f))))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
					{
						if (!uParam0->f_46)
						{
							func_50(Local_49.f_3.f_1, uParam0->f_1, 0);
							func_419(Local_49.f_3.f_1, uParam0->f_1, 4);
							__LIB_1__::func_0(uParam0, 10);
							return;
						}
					}
				}
				if (!uParam0->f_46)
				{
					if (func_830(uParam0->f_1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
						{
							func_827(&(Local_49.f_424), uParam0->f_1);
						}
						else if (func_819(&(Local_49.f_259), Local_49.f_3.f_1, uParam0->f_1))
						{
							uParam0->f_46 = 1;
							return;
						}
					}
				}
				else if (__LIB_1__::func_412())
				{
					uParam0->f_46 = 0;
					return;
				}
				else if (__LIB_0__::func_509())
				{
					func_50(Local_49.f_3.f_1, uParam0->f_1, 0);
					__LIB_1__::func_0(uParam0, 7);
					return;
				}
				if (!func_468())
				{
					if (!PED::IS_PED_INJURED(uParam0->f_7))
					{
						if (uParam0->f_51 || func_812(uParam0))
						{
							func_809(uParam0);
							func_809(&(Local_49.f_3));
							return;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 25f, 25f, 25f, false, true, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 10f)
							{
								if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
								{
									if (func_808(uParam0, 0))
									{
										func_807(uParam0, 0);
										return;
									}
								}
								else if (func_808(uParam0, 1))
								{
									func_809(uParam0);
									func_809(&(Local_49.f_3));
									return;
								}
							}
						}
					}
				}
				if (func_398(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 10f))
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_24, Global_19, true, true, 0);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(uParam0->f_7))
				{
					if (func_806())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false), true);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7, true);
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false), false);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7, false);
					}
				}
				__LIB_1__::func_37(&(uParam0->f_29));
				uParam0->f_46 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
			{
				if (!func_468())
				{
					func_832(uParam0, 0, 1);
				}
			}
			else if (!func_802(uParam0, func_806()))
			{
				func_513(uParam0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_7))
			{
				func_506(uParam0);
			}
		}
		else if (*uParam0 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_504(uParam0))
			{
				func_807(uParam0, 0);
			}
			else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
			{
				__LIB_1__::func_0(uParam0, 3);
			}
			else if (func_503(uParam0))
			{
				__LIB_1__::func_0(uParam0, 6);
			}
			else if (func_502(uParam0))
			{
				__LIB_1__::func_0(uParam0, 5);
				PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, true);
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
			}
			else
			{
				if (__LIB_0__::func_43(uParam0->f_1))
				{
					MISC::SET_BIT(&Global_96292, uParam0->f_1);
				}
				PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(uParam0->f_7, __LIB_0__::func_399(), true);
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar5) && __LIB_11__::func_679(&iVar5, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false))
					{
						if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_7);
							TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() < uParam0->f_37)
				{
					if (!func_808(uParam0, 1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 20f, 20f, 20f, false, true, 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_7, 1f);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
				{
					if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_LOOK_AT_ENTITY")))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false), false))
						{
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						}
					}
					if (!__LIB_4__::func_465(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || !PED::IS_PED_IN_VEHICLE(uParam0->f_7, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 3000, 0, 2);
						}
					}
				}
				if (bVar0)
				{
					if (__LIB_0__::func_43(uParam0->f_1))
					{
						if (Local_49.f_703 != 11)
						{
							func_457(&(Local_49.f_703), 11, uParam0->f_1, 57);
							uParam0->f_39 = MISC::GET_GAME_TIMER() + 18000;
						}
					}
				}
			}
		}
		else if (*uParam0 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
			{
				if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
				{
					if (__LIB_11__::func_688(&(Local_49.f_589), uParam0->f_7, 25f, 0))
					{
						PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399());
					}
				}
			}
			if (func_504(uParam0))
			{
				func_807(uParam0, 0);
			}
			else if (func_496(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 200f))
			{
				__LIB_1__::func_0(uParam0, 11);
			}
			else if (func_503(uParam0))
			{
				__LIB_1__::func_0(uParam0, 6);
			}
			else if (func_502(uParam0))
			{
				__LIB_1__::func_0(uParam0, 5);
				PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, true);
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
			}
			else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_VEHICLE(uParam0->f_7, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					__LIB_1__::func_0(uParam0, 2);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
				{
					iVar6 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && __LIB_11__::func_679(&iVar6, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false))
					{
						if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_7);
							TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
						}
					}
				}
			}
		}
		else if (*uParam0 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar7) && __LIB_11__::func_679(&iVar7, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
				{
					if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_7);
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
					}
				}
			}
			if (uParam0->f_36 == 0)
			{
				if (func_456(&(Local_49.f_737)) && func_143(__LIB_18__::func_173(), uParam0->f_1, 50, &cVar8, &cVar9))
				{
					if (__LIB_35__::func_536(&(Local_49.f_259), &cVar8, &cVar9, 4, 1, 0, 0))
					{
						uParam0->f_36 = 1;
					}
				}
			}
		}
		else if (*uParam0 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_495(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
				{
					if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
					{
						if (__LIB_11__::func_688(&(Local_49.f_589), uParam0->f_7, 25f, 0))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399());
						}
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
				{
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					__LIB_1__::func_0(uParam0, 3);
				}
			}
			else if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_PAUSE")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				TASK::TASK_PAUSE(uParam0->f_7, -1);
			}
		}
		else if (*uParam0 == 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, true, true);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_494(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(uParam0->f_7);
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
				{
					if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
					{
						if (__LIB_11__::func_688(&(Local_49.f_589), uParam0->f_7, 25f, 0))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399());
						}
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399()))
				{
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					__LIB_1__::func_0(uParam0, 3);
				}
			}
			else
			{
				if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_PARACHUTE_TO_TARGET")))
				{
					uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, false, true, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					TASK::CLEAR_PED_TASKS(uParam0->f_7);
					TASK::TASK_PARACHUTE_TO_TARGET(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = MISC::GET_GAME_TIMER() + 1000;
				}
				else if (uParam0->f_33 < MISC::GET_GAME_TIMER() || ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, false, true, 0))
				{
					uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, false, true, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					TASK::SET_PARACHUTE_TASK_TARGET(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = MISC::GET_GAME_TIMER() + 1000;
				}
				if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_7) == 0)
				{
					PED::FORCE_PED_TO_OPEN_PARACHUTE(uParam0->f_7);
				}
			}
		}
	}
}

int func_494(var uParam0)//Position - 0x35C1F
{
	if (!ENTITY::IS_ENTITY_IN_AIR(uParam0->f_7))
	{
		if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_7) == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_495(var uParam0)//Position - 0x35C44
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
		{
			return 1;
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					return 1;
				}
				else if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 30f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_496(int iParam0, int iParam1, float fParam2)//Position - 0x35CB2
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	Var0.f_0 = (Var0.f_0 - Var1.f_0);
	Var0.f_1 = (Var0.f_1 - Var1.f_1);
	Var0.f_2 = (Var0.f_2 - Var1.f_2);
	return (((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam2 * fParam2);
}

int func_502(var uParam0)//Position - 0x35F1E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
		if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uParam0->f_7))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_7) > 50f)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_7, joaat("GADGET_PARACHUTE"), false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_503(var uParam0)//Position - 0x35F99
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 50f)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_7, joaat("GADGET_PARACHUTE"), false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_504(var uParam0)//Position - 0x36003
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (*uParam0 != 0 && !PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (!func_505(uParam0))
		{
			if (PED::IS_PED_FLEEING(uParam0->f_7))
			{
				return 1;
			}
			else if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
			{
				if (BitTest(Global_96292, 3))
				{
					return 1;
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 1))
				{
					return 1;
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 1))
				{
					return 1;
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var1 = { Var0 - Vector(50f, 50f, 50f) };
						Var2 = { Var0 + Vector(50f, 50f, 50f) };
						if (PED::IS_COP_PED_IN_AREA_3D(Var1, Var2))
						{
							return 1;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (ENTITY::IS_ENTITY_DEAD(iVar3, false) || FIRE::IS_ENTITY_ON_FIRE(iVar3))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_505(var uParam0)//Position - 0x36147
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_506(var uParam0)//Position - 0x3617F
{
	if (!PED::IS_PED_RAGDOLL(uParam0->f_7) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
		{
			func_511(uParam0);
		}
		else if ((__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_24__::func_748(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 15f))
		{
			func_509(uParam0);
		}
		else
		{
			func_507(uParam0);
		}
	}
}

void func_507(var uParam0)//Position - 0x361F5
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	char* sVar3;
	char* sVar4;
	if (func_398(uParam0->f_7, uParam0->f_21, 1.5f))
	{
		if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_7, uParam0->f_21, 2f, -1, 0.25f, 512, 40000f);
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_7) };
		Var1 = { __LIB_0__::func_79(uParam0->f_24 - uParam0->f_21) };
		fVar2 = 0f;
		if ((Var0.f_0 != 0f || Var0.f_1 != 0f) && (Var1.f_0 != 0f || Var1.f_1 != 0f))
		{
			fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		}
		if (fVar2 > 20f || !func_831(uParam0))
		{
			if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) && !__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_7, uParam0->f_24, 6000);
			}
		}
		else if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_PLAY_ANIM")))
		{
			func_57(uParam0, &sVar3);
			func_508(uParam0, &sVar4);
			if (uParam0->f_1 == 17)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, &sVar3, &sVar4, 1.5f, -1.5f, -1, 1, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, &sVar3, &sVar4, 1.5f, -1.5f, -1, 0, 0f, false, false, false);
			}
		}
	}
}

int func_508(var uParam0, char* sParam1)//Position - 0x36359
{
	int iVar0;
	if (uParam0->f_1 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "trevor_impatient_wait_1", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "trevor_impatient_wait_2", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "trevor_impatient_wait_3", 64);
		}
		else
		{
			StringCopy(sParam1, "trevor_impatient_wait_4", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a_lamar", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b_lamar", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_c_lamar", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		return 1;
	}
	return 0;
}

void func_509(var uParam0)//Position - 0x3650A
{
	if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
	{
		if (!PED::IS_PED_INJURED(Local_49.f_3.f_7))
		{
			TASK::TASK_GO_TO_ENTITY(uParam0->f_7, Local_49.f_3.f_7, -1, 5f, 2f, 2f, 0);
		}
	}
}

void func_511(var uParam0)//Position - 0x365AA
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	__LIB_6__::func_892(&(uParam0->f_12));
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
	Var1 = { Global_95742[uParam0->f_2 /*18*/].f_13 };
	fVar2 = __LIB_0__::func_529(uParam0->f_7, Var1, 1);
	iVar3 = 512 | 256 | 32 | 2;
	iVar4 = iVar3 | 524288 | 8 | 4 | 16;
	iVar5 = iVar3 | 1;
	fVar6 = 0f;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_7) <= 1f)
	{
		if (!__LIB_0__::func_516(&(uParam0->f_29)))
		{
			__LIB_6__::func_892(&(uParam0->f_29));
		}
		else
		{
			fVar6 = __LIB_5__::func_736(&(uParam0->f_29));
		}
	}
	else
	{
		__LIB_1__::func_37(&(uParam0->f_29));
	}
	if ((fVar2 < 2f || (fVar2 < 15f && fVar6 > 1f)) || (fVar2 < 20f && fVar6 > 6f))
	{
		if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
		}
	}
	else if (fVar2 < 10f)
	{
		if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_32 != 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_7, iVar0, Var1, 4, 10f, iVar5, 2f, 10f, true);
			uParam0->f_32 = 0;
		}
	}
	else
	{
		if (!__LIB_4__::func_465(uParam0->f_7, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_32 != 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_7, iVar0, Var1, 4, 10f, iVar4, 2f, 20f, true);
			uParam0->f_32 = 1;
		}
		if (fVar2 < 30f)
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_7, 10f);
		}
		else
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_7, 18f);
		}
	}
}

int func_513(var uParam0)//Position - 0x367B2
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<82> Var8;
	bool bVar9;
	if (uParam0->f_2 != 25)
	{
		if (__LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f))
		{
			Var0 = { Global_95742[uParam0->f_2 /*18*/].f_9 };
			fVar1 = Global_95742[uParam0->f_2 /*18*/].f_12;
			if ((Var0.f_0 == 0f && Var0.f_1 == 0f) && Var0.f_2 == 0f)
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var2, &Var3, &Var4, 0f, 180f, 200f, 0, 1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var3, true) < 250f)
				{
					Var4 = { Var2 - Var3 };
					Var0 = { Var3 };
					fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1);
				}
			}
			if ((Var0.f_0 != 0f || Var0.f_1 != 0f) || Var0.f_2 != 0f)
			{
				iVar6 = joaat("asea");
				bVar7 = false;
				Var8.f_11 = 12;
				Var8.f_31 = 49;
				Var8.f_81 = 2;
				if (uParam0->f_49)
				{
					if (((!__LIB_0__::func_43(uParam0->f_1) || Global_100140[uParam0->f_1] != 2) || Global_99845[uParam0->f_1 /*98*/] == 0) || __LIB_28__::func_359(Global_99845[uParam0->f_1 /*98*/]))
					{
						uParam0->f_49 = 0;
					}
				}
				if (uParam0->f_49)
				{
					iVar6 = Global_99845[uParam0->f_1 /*98*/];
					iVar5 = __LIB_6__::func_757(uParam0->f_1);
				}
				else if (__LIB_0__::func_43(uParam0->f_1))
				{
					__LIB_0__::func_120(uParam0->f_1, &Var8, 1);
					iVar6 = Var8.f_0;
					iVar5 = __LIB_6__::func_757(uParam0->f_1);
				}
				else if (uParam0->f_1 == 14)
				{
					func_117(uParam0->f_1, &Var8, 2);
					iVar6 = Var8.f_0;
					iVar5 = __LIB_2__::func_108(uParam0->f_1);
				}
				else
				{
					func_117(uParam0->f_1, &Var8, 1);
					iVar6 = Var8.f_0;
					iVar5 = __LIB_2__::func_108(uParam0->f_1);
				}
				if (iVar6 == 0)
				{
					iVar6 = joaat("asea");
				}
				STREAMING::REQUEST_MODEL(iVar5);
				STREAMING::REQUEST_MODEL(iVar6);
				if (STREAMING::HAS_MODEL_LOADED(iVar6) && STREAMING::HAS_MODEL_LOADED(iVar5))
				{
					if (__LIB_0__::func_43(uParam0->f_1))
					{
						bVar9 = false;
						if (uParam0->f_49)
						{
							bVar9 = func_801(&(uParam0->f_8), uParam0->f_1, Var0, fVar1, 1, &(Global_99845[uParam0->f_1 /*98*/]));
						}
						else
						{
							bVar9 = __LIB_41__::func_4(&(uParam0->f_8), uParam0->f_1, Var0, fVar1, 1, 1);
						}
						if (bVar9)
						{
							bVar7 = func_535(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1, 0, 0);
						}
					}
					else if (func_524(&(uParam0->f_8), uParam0->f_1, Var0, fVar1, 1, 1))
					{
						bVar7 = __LIB_20__::func_681(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1);
						if (!PED::IS_PED_INJURED(uParam0->f_7) && uParam0->f_1 == 17)
						{
							__LIB_39__::func_521(uParam0->f_7, 83);
						}
					}
				}
				if (bVar7)
				{
					if (uParam0->f_49)
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
					{
						ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fVar1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_8, 5f);
					}
					func_514(uParam0, &(Local_49.f_259), 0);
					uParam0->f_48 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_514(var uParam0, var uParam1, bool bParam2)//Position - 0x36AD8
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (bParam2)
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_7);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_7);
				if (!__LIB_0__::func_382(4, uParam0->f_7))
				{
					__LIB_11__::func_952(4, uParam0->f_7);
				}
				__LIB_34__::func_228(uParam1, uParam0->f_1, uParam0->f_7, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, false);
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_7);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_7);
				uParam0->f_41 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_7);
				if (!__LIB_0__::func_382(4, uParam0->f_7))
				{
					__LIB_11__::func_952(4, uParam0->f_7);
				}
				__LIB_34__::func_228(uParam1, uParam0->f_1, uParam0->f_7, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_7, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_7, joaat("PLAYER"));
				PED::SET_PED_HELMET(uParam0->f_7, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_7, true);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_7, true);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(uParam0->f_7, true);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uParam0->f_7, true);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_7, true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_7, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_7, false);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_7, 3);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 107, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, false);
				PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(uParam0->f_7, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 174, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 182, true);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_7, false);
				PED::SET_PED_DIES_IN_WATER(uParam0->f_7, false);
				if (PED::IS_PED_USING_ACTION_MODE(uParam0->f_7))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_7, false, -1, 0);
				}
				if (uParam0->f_1 != 14 && uParam0->f_1 != 17)
				{
					if (!uParam0->f_50)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, true);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 118, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 17, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 23, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 30, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 4, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 3, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 512, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 2048, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 16384, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 131072, true);
					PED::SET_PED_COMBAT_ABILITY(uParam0->f_7, 2);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_7, 2);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 0, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 512, true);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 4, true);
				}
			}
		}
	}
}

int func_524(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x389DA
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_43(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_117(iParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (iParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__::func_202(uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_11__::func_861(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				__LIB_26__::func_511(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					__LIB_11__::func_861(*uParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_535(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x39A16
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_38__::func_950(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_739(*iParam0);
				__LIB_32__::func_750(*iParam0, 1, 0);
				__LIB_26__::func_579(*iParam0);
				__LIB_26__::func_512(*iParam0);
				func_537(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0, bool bParam1)//Position - 0x39B41
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_11__::func_843(iVar0))
	{
		__LIB_12__::func_96(iVar0, 0);
		func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_541(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_12__::func_96(iVar0, 0);
			func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_541(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_277(iParam0, 3, 169))
					{
						func_162(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_277(iParam0, 12, 6))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 17))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 20))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 21))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 22))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 11))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 10))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 50))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 14, 59))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_277(iParam0, 8, 22))
			{
				func_162(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_277(iParam0, 12, 14))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_277(iParam0, 12, 13))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 14))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 15))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 4))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 3))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 14, 82))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_277(iParam0, 8, 76))
			{
				func_162(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_277(iParam0, 12, 1))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_277(iParam0, 12, 12))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 15))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_277(iParam0, 3, 71))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 17))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 18))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 19))
			{
				if (!func_538(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_277(iParam0, 12, 7))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 12, 6))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_277(iParam0, 14, 88))
			{
				func_162(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_277(iParam0, 8, 17))
			{
				func_162(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_277(iParam0, 12, 11))
			{
				func_162(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_538(int iParam0, int iParam1, int iParam2)//Position - 0x3A19F
{
	Global_78130[1 /*14*/] = { func_213(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 1);
}

void func_541(int iParam0, int iParam1)//Position - 0x3A2D2
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_171(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_552(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_24__::func_948(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_816();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_552(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3B2B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_170(iParam0, iVar1, &iVar2, 0))
			{
				func_162(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_163(iParam0, iVar1, &iVar2))
			{
				func_162(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_718(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_555(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_555(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_555(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_555(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3B78C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_679(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_679(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_679(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_555(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_679(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_678(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_555(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_672(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_679(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_679(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_555(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_664(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_663(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_555(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_555(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_555(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_555(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_555(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_555(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_555(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_672(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_663(iVar5, func_678(iParam0, 8, -1), iParam2, func_678(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_598(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_663(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_672(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_663(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_31__::func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_555(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_555(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_663(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_663(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_663(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_575(iParam0, 9, iVar63))
						{
							func_555(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_555(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_555(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_555(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_678(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_678(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_555(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_555(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_555(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_555(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_555(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_555(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_555(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_555(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_555(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_555(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_664(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_556(iParam0, &uVar4))
		{
			func_555(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_555(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_555(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_555(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_678(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_555(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_556(int iParam0, var uParam1)//Position - 0x3D637
{
	int iVar0;
	int iVar1;
	*uParam1 = func_678(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_575(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_575(int iParam0, int iParam1, int iParam2)//Position - 0x418F3
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_575(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_575(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_575(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_575(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_575(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_575(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_598(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4860F
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_599(iParam0, bParam3, 0, -1);
}

void func_599(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4865C
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_643(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_634(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_634(int iParam0, int iParam1)//Position - 0x5775B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_678(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_678(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_643(int iParam0, bool bParam1)//Position - 0x57BB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_678(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_678(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_678(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_678(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_678(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_678(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_678(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_678(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_663(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x60A58
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_663(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_663(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_664(int iParam0)//Position - 0x61D93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_669(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_669(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_669(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6275D
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_678(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_672(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x65079
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_718(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_678(int iParam0, int iParam1, int iParam2)//Position - 0x65329
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_575(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_575(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_679(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x653CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_679(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_679(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_679(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_679(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_679(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_679(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_679(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_679(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_718(int iParam0)//Position - 0x7E0BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_678(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_678(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_739(int iParam0)//Position - 0x7F6B7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_552(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_171(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_740(__LIB_6__::func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_171(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_171(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_740(__LIB_6__::func_757(0), 3, 70, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 3, 71, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 3, 72, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 3, 73, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 3, 74, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 3, 75, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 4, 41, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 4, 42, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 4, 43, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 4, 44, 1, 0, 0, 0);
					func_740(__LIB_6__::func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_171(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_552(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_740(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7F914
{
	func_744(iParam0, iParam1, iParam2, bParam3);
	func_743(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_741(iParam0, iParam1, iParam2, 0);
	}
}

int func_741(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7F959
{
	Global_78130[1 /*14*/] = { func_213(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_743(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7FACF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { func_213(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_743(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_744(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_743(iParam0, 14, uVar4[iVar2], 1, 1);
									func_744(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_743(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_743(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_744(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7FEB1
{
	Global_78130[1 /*14*/] = { func_213(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_801(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, var uParam5)//Position - 0x886AA
{
	if (*uParam5 == 0)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(*uParam0) != *uParam5)
		{
		}
		return 1;
	}
	STREAMING::REQUEST_MODEL(*uParam5);
	if (STREAMING::HAS_MODEL_LOADED(*uParam5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(*uParam5, Param2, fParam3, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
		__LIB_26__::func_511(uParam0, *uParam5);
		if (uParam5->f_97)
		{
			if (iParam1 == 2)
			{
				if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("bodhi2"))
				{
					__LIB_6__::func_845(uParam0);
				}
			}
			__LIB_10__::func_569(*uParam0, iParam1);
		}
		if (bParam4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam5);
		}
		return 1;
	}
	return 0;
}

int func_802(var uParam0, bool bParam1)//Position - 0x88768
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (uParam0->f_2 != 25)
	{
		if (uParam0->f_48 == 0)
		{
			Var0 = { uParam0->f_21 };
			Var1 = { uParam0->f_24 - uParam0->f_21 };
			fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
			fVar3 = 225f;
			if (__LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), Var0, 300f) && (func_398(PLAYER::PLAYER_PED_ID(), Var0, fVar3) || bParam1))
			{
				if (__LIB_0__::func_43(uParam0->f_1))
				{
					bVar4 = func_805(&(uParam0->f_7), uParam0->f_1, Var0, fVar2, 1, 0, 0);
				}
				else
				{
					bVar4 = __LIB_11__::func_893(&(uParam0->f_7), uParam0->f_1, Var0, fVar2, 1);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_7) && uParam0->f_1 == 17)
				{
					func_803(uParam0->f_7);
				}
				if (bVar4)
				{
					func_514(uParam0, &(Local_49.f_259), 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_803(int iParam0)//Position - 0x8884E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	iVar0 = 83;
	if (__LIB_35__::func_89(iVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &uVar13))
	{
		__LIB_11__::func_974(iParam0, iVar2);
		__LIB_11__::func_974(iParam0, iVar3);
		__LIB_11__::func_974(iParam0, iVar4);
		__LIB_11__::func_974(iParam0, iVar5);
		__LIB_11__::func_974(iParam0, iVar6);
		__LIB_11__::func_974(iParam0, iVar7);
		__LIB_11__::func_974(iParam0, iVar8);
		__LIB_11__::func_974(iParam0, iVar9);
		__LIB_11__::func_974(iParam0, iVar10);
		__LIB_11__::func_974(iParam0, iVar11);
		__LIB_11__::func_974(iParam0, iVar12);
		if (__LIB_0__::func_517(uVar13, 1))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
		}
		if (__LIB_0__::func_517(uVar13, 2))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
		}
		if (__LIB_0__::func_517(uVar13, 4))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
		}
	}
}

int func_805(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x889A7
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_38__::func_950(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_739(*iParam0);
			__LIB_32__::func_750(*iParam0, 1, 0);
			__LIB_26__::func_579(*iParam0);
			__LIB_26__::func_512(*iParam0);
			func_537(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_806()//Position - 0x88A46
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if ((STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() == 8) && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_807(var uParam0, int iParam1)//Position - 0x88A7A
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (iParam1 && func_429(uParam0))
			{
				if (__LIB_0__::func_348(&(Local_49.f_703)) != 3)
				{
					func_457(&(Local_49.f_703), 3, uParam0->f_1, 67);
				}
			}
			__LIB_1__::func_0(uParam0, 12);
		}
	}
}

int func_808(var uParam0, bool bParam1)//Position - 0x88AD6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam1)
		{
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f) > 0)
			{
				return 1;
			}
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(uParam0->f_7, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true), 50f) > 0)
			{
				return 1;
			}
		}
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 1))
		{
			return 1;
		}
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 1))
		{
			return 1;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var1 = { Var0 - Vector(50f, 50f, 50f) };
			Var2 = { Var0 + Vector(50f, 50f, 50f) };
			if (PED::IS_COP_PED_IN_AREA_3D(Var1, Var2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_809(var uParam0)//Position - 0x88BCA
{
	__LIB_1__::func_0(uParam0, 2);
	uParam0->f_50 = 1;
	func_56(uParam0);
	if (Local_49.f_3.f_1 != uParam0->f_1)
	{
		__LIB_21__::func_175(&(uParam0->f_15));
		func_460();
		func_65(uParam0);
		func_64(uParam0, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_7);
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 10000;
		PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, __LIB_0__::func_399());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_7, 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
		if (uParam0->f_1 == 19)
		{
			if (Local_49.f_3.f_1 == 1)
			{
				__LIB_0__::func_503(77, 1);
			}
			if (Local_49.f_3.f_1 == 2)
			{
				__LIB_0__::func_503(77, 1);
			}
		}
		if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
		}
		if (!func_810(&(Local_49.f_703)))
		{
			if (uParam0->f_51)
			{
				func_457(&(Local_49.f_703), 9, uParam0->f_1, 69);
			}
			else
			{
				func_457(&(Local_49.f_703), 8, uParam0->f_1, 69);
			}
		}
	}
}

int func_810(var uParam0)//Position - 0x88CD6
{
	if (*uParam0 == 8 || *uParam0 == 9)
	{
		return 1;
	}
	return 0;
}

int func_812(var uParam0)//Position - 0x88D3D
{
	struct<2> Var0;
	bool bVar1;
	StringCopy(&Var0, "FR_HV_HORN" /* GXT: Press ~INPUT_VEH_HORN~ to use the vehicle horn and attract ~a~'s attention. */, 16);
	bVar1 = func_816(uParam0);
	if ((bVar1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_10__::func_585())
	{
		if (uParam0->f_47 == 0)
		{
			if (!CAM::IS_CINEMATIC_CAM_RENDERING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_7, 0f, 0f, 0f, true, -1, 3000, 3000, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					uParam0->f_47 = 1;
				}
			}
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bmx")))
			{
				__LIB_24__::func_741(&Var0, &(uParam0->f_3));
			}
		}
	}
	else
	{
		if (uParam0->f_47 == 1)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			uParam0->f_47 = 0;
		}
		if (__LIB_2__::func_161(&Var0, &(uParam0->f_3)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if ((!PED::IS_PED_RAGDOLL(uParam0->f_7) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7)) && !__LIB_10__::func_585())
	{
		if (bVar1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 1;
			}
			else if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			else if (func_398(uParam0->f_7, uParam0->f_21, 2f))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_437(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_437(uParam0->f_7))
				{
					if (__LIB_24__::func_748(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
					{
						return 1;
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_437(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_437(uParam0->f_7))
					{
						if (__LIB_24__::func_748(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 30f))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_816(var uParam0)//Position - 0x88FB8
{
	if (*uParam0 == 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_24__::func_748(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_7))
						{
							return 1;
						}
					}
				}
				else if (__LIB_24__::func_748(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
				{
					return 1;
				}
				else if (uParam0->f_2 != 25)
				{
					if (__LIB_24__::func_750(uParam0->f_7, uParam0->f_21, 20f))
					{
						if (__LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 12.5f))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_819(var uParam0, int iParam1, int iParam2)//Position - 0x890AF
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	func_826(func_123(iParam1, iParam2), &iVar0, &iVar1);
	func_825(iParam1, iParam2, iVar0, &sVar2, &cVar3);
	func_825(iParam1, iParam2, iVar1, &sVar2, &cVar4);
	__LIB_34__::func_228(uParam0, iParam1, PLAYER::PLAYER_PED_ID(), 1);
	__LIB_34__::func_228(uParam0, iParam2, 0, 1);
	if (func_820(uParam0, iParam2, &sVar2, &cVar3, &cVar3, &cVar4, &cVar4, 12, 1, 0, 0, 0))
	{
		if (iVar1 == 34)
		{
			Global_113386.f_18103.f_405 = 1;
		}
		return 1;
	}
	return 0;
}

bool func_820(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x8912F
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_391(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	__LIB_11__::func_170();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_26__::func_460(2, &uVar0, &uVar1, cParam3, cParam4, cParam5, cParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_32__::func_815(&uVar0, &uVar1, iParam7, bParam11);
}

int func_825(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x895C8
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	if (bVar0 == 7 || bVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { func_144(bVar0, bVar1, 7, 0) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "G1", 16);
			break;
		case 1:
			StringConCat(sParam4, "G2", 16);
			break;
		case 2:
			StringConCat(sParam4, "G2_mm", 16);
			break;
		case 3:
			StringConCat(sParam4, "G2_mf", 16);
			break;
		case 4:
			StringConCat(sParam4, "G2_mt", 16);
			break;
		case 5:
			StringConCat(sParam4, "G2_ml", 16);
			break;
		case 6:
			StringConCat(sParam4, "Y1_ok", 16);
			break;
		case 7:
			StringConCat(sParam4, "Y1_ir", 16);
			break;
		case 8:
			StringConCat(sParam4, "Y1_vi", 16);
			break;
		case 9:
			StringConCat(sParam4, "Y1_fs", 16);
			break;
		case 10:
			StringConCat(sParam4, "Y1_lo", 16);
			break;
		case 11:
			StringConCat(sParam4, "Y1_bs", 16);
			break;
		case 12:
			StringConCat(sParam4, "Y1_cm", 16);
			break;
		case 13:
			StringConCat(sParam4, "Y2_ok", 16);
			break;
		case 14:
			StringConCat(sParam4, "Y2_cm", 16);
			break;
		case 15:
			StringConCat(sParam4, "N1_ok", 16);
			break;
		case 16:
			StringConCat(sParam4, "N1_fc", 16);
			break;
		case 17:
			StringConCat(sParam4, "N1_ph", 16);
			break;
		case 18:
			StringConCat(sParam4, "N1_bl", 16);
			break;
		case 19:
			StringConCat(sParam4, "N2", 16);
			break;
		case 20:
			StringConCat(sParam4, "B1", 16);
			break;
		case 21:
			StringConCat(sParam4, "B1_d2", 16);
			break;
		case 22:
			StringConCat(sParam4, "B1_r", 16);
			break;
		case 23:
			StringConCat(sParam4, "B1_a", 16);
			break;
		case 24:
			StringConCat(sParam4, "B1_b1", 16);
			break;
		case 25:
			StringConCat(sParam4, "B1_b2", 16);
			break;
		case 26:
			StringConCat(sParam4, "B1_f1", 16);
			break;
		case 27:
			StringConCat(sParam4, "B1_f2", 16);
			break;
		case 28:
			StringConCat(sParam4, "B1_f4", 16);
			break;
		case 29:
			StringConCat(sParam4, "B1_f5", 16);
			break;
		case 30:
			StringConCat(sParam4, "Cncl", 16);
			break;
		case 31:
			StringConCat(sParam4, "CnclH", 16);
			break;
		case 32:
			StringConCat(sParam4, "CnclM", 16);
			break;
		case 33:
			StringConCat(sParam4, "CnclL", 16);
			break;
		case 34:
			StringConCat(sParam4, "CnclF", 16);
			break;
		case 35:
			StringConCat(sParam4, "Lay1", 16);
			break;
		case 36:
			StringConCat(sParam4, "Lay2", 16);
			break;
		case 37:
			StringConCat(sParam4, "Lay3", 16);
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

int func_826(int iParam0, var uParam1, var uParam2)//Position - 0x898D6
{
	*uParam1 = 30;
	if (iParam0 > 70)
	{
		*uParam2 = 31;
	}
	else if (iParam0 > 45)
	{
		*uParam2 = 32;
	}
	else
	{
		*uParam2 = 33;
	}
	return 1;
}

int func_827(var uParam0, int iParam1)//Position - 0x89907
{
	int iVar0;
	char* sVar1;
	char[] cVar2[8];
	__LIB_0__::func_203(uParam0, 1, 0, __LIB_24__::func_747(iParam1), 0, 1);
	iVar0 = 0;
	func_829(__LIB_20__::func_260(iParam1), &sVar1, &cVar2);
	if (__LIB_38__::func_30(uParam0, iParam1, &sVar1, &cVar2, 2, iVar0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_829(bool bParam0, char* sParam1, char* sParam2)//Position - 0x899AA
{
	StringCopy(sParam1, "ANAUD", 16);
	switch (bParam0)
	{
		case 0:
			StringCopy(sParam2, "MIC_APH1", 16);
			break;
		case 1:
			StringCopy(sParam2, "ARI_APH1", 16);
			break;
		case 2:
			StringCopy(sParam2, "TRE_APH1", 16);
			break;
		case 3:
			StringCopy(sParam2, "LAM_APH1", 16);
			break;
		case 4:
			StringCopy(sParam2, "JIM_APH1", 16);
			break;
		case 5:
			StringCopy(sParam2, "AMA_APH1", 16);
			break;
		default:
			StringCopy(sParam2, "XXX_APH1", 16);
			return 0;
			break;
	}
	return 1;
}

int func_830(int iParam0)//Position - 0x89A3F
{
	if (Global_22719 == 1)
	{
		return 0;
	}
	if (Global_22718 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_831(var uParam0)//Position - 0x89A93
{
	char* sVar0;
	if (func_57(uParam0, &sVar0))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			return 0;
		}
	}
	return 1;
}

int func_832(var uParam0, int iParam1, bool bParam2)//Position - 0x89ABB
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	bVar0 = false;
	iVar1 = 0;
	if (iParam1 || func_496(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 400f))
	{
		bVar0 = true;
	}
	else if ((PED::IS_PED_FALLING(uParam0->f_7) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(uParam0->f_7)) && ((!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_7) || !MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true), &fVar2, false, false)) || fVar2 < -200f))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	else if ((PED::IS_PED_ON_FOOT(uParam0->f_7) && __LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f)) && func_496(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 175f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar3 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
		}
		if (__LIB_0__::func_43(uParam0->f_1) && iVar1 == 0)
		{
			func_833(uParam0->f_7);
			if (bParam2)
			{
				func_85(uParam0->f_7, iVar3, &(Global_99845[uParam0->f_1 /*98*/]), &(Global_100148[uParam0->f_1 /*3*/]), &(Global_100158[uParam0->f_1]), &(Global_100140[uParam0->f_1]), &(Global_4541522[uParam0->f_1]), 0);
				uParam0->f_49 = 1;
			}
		}
		PED::DELETE_PED(&(uParam0->f_7));
		uParam0->f_7 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar3, true))
		{
			VEHICLE::DELETE_VEHICLE(&iVar3);
		}
		return 1;
	}
	return 0;
}

void func_833(int iParam0)//Position - 0x89C2C
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	iVar0 = __LIB_18__::func_168(iParam0);
	Var1 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
	uVar2 = Global_113386.f_2363.f_539.f_2310[iVar0];
	uVar3 = Global_113386.f_2363.f_539.f_2314[iVar0];
	Var4 = { Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] };
	func_91(iParam0, 0);
	if (!__LIB_0__::func_78(Var1, 0f, 0f, 0f, 0))
	{
		fVar5 = MISC::ABSF((Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 - Var1.f_2));
		fVar6 = SYSTEM::VDIST2(Var1, Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/]);
		fVar7 = SYSTEM::VMAG(Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/]);
		bVar8 = false;
		if (fVar7 > 25f)
		{
			if (fVar5 > 25f)
			{
				bVar8 = true;
			}
			if (fVar6 > (25f * 25f))
			{
				bVar8 = true;
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				bVar8 = true;
			}
			if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
			{
				bVar8 = true;
			}
		}
		if (bVar8)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { Var1 };
			Global_113386.f_2363.f_539.f_2310[iVar0] = uVar2;
			Global_113386.f_2363.f_539.f_2314[iVar0] = uVar3;
			Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { Var4 };
		}
	}
}

int func_835()//Position - 0x89DF2
{
	int iVar0;
	iVar0 = __LIB_18__::func_173();
	if ((iVar0 != Local_49.f_3.f_1 && iVar0 != Local_49.f_56.f_1) && iVar0 != Local_49.f_109.f_1)
	{
		return 1;
	}
	return 0;
}

void func_836(var uParam0, int iParam1)//Position - 0x89E2D
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			func_49(uParam0, 2, iParam1);
			__LIB_1__::func_0(uParam0, 13);
		}
	}
}

void func_837(int iParam0)//Position - 0x89E64
{
	if (Local_49.f_56 == 2 || Local_49.f_56 == 3)
	{
		func_807(&(Local_49.f_56), iParam0);
	}
	if (Local_49.f_109 == 2 || Local_49.f_109 == 3)
	{
		func_807(&(Local_49.f_109), iParam0);
	}
}

void func_838(var uParam0)//Position - 0x89EAA
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && uParam0->f_1 != 0)
	{
		iVar0 = __LIB_18__::func_173();
		if (__LIB_0__::func_43(*uParam0) && !BitTest(Global_96294, *uParam0))
		{
			if (__LIB_1__::func_197(uParam0->f_3))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0) || PLAYER::PLAYER_PED_ID() == uParam0->f_3)
				{
					func_875(uParam0);
				}
			}
		}
		func_874();
		if (iVar0 != *uParam0)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_3))
				{
					uParam0->f_17 = MISC::GET_GAME_TIMER() + 7000;
				}
				else if (PED::IS_PED_IN_COMBAT(uParam0->f_3, 0))
				{
					if (func_873(uParam0))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_3, "SHOOT", __LIB_0__::func_375(34), 1);
						uParam0->f_18 = 1;
					}
				}
				else if (uParam0->f_18)
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_3, "KILLED_ALL", __LIB_0__::func_375(34), 1);
					uParam0->f_18 = 0;
				}
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (uParam0->f_2)
				{
					uParam0->f_10 = func_871(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &(uParam0->f_11));
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uParam0->f_10))
					{
						uParam0->f_11 = { func_870(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_11) };
					}
					uParam0->f_2 = 0;
				}
				if (func_867(uParam0))
				{
					func_866(uParam0);
					func_865(uParam0);
					if (!__LIB_11__::func_730(9))
					{
						func_864(uParam0, 3);
					}
					else
					{
						func_864(uParam0, 7);
					}
				}
				else
				{
					uParam0->f_26++;
				}
				break;
			case 2:
				if (func_863(uParam0))
				{
					func_866(uParam0);
					func_865(uParam0);
					func_864(uParam0, 4);
				}
				else if (uParam0->f_26 < 150)
				{
					uParam0->f_26++;
				}
				else
				{
					func_474(uParam0, 2);
					func_43(*uParam0);
				}
				break;
			case 3:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_860(uParam0))
				{
					if (func_859(uParam0))
					{
						func_864(uParam0, 8);
					}
					else if (func_857(uParam0))
					{
						func_864(uParam0, 6);
					}
					else if (func_856(uParam0, 0))
					{
						func_864(uParam0, 5);
					}
					else if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					func_854(uParam0);
				}
				break;
			case 4:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_853(uParam0))
				{
					func_864(uParam0, 10);
				}
				else if (func_859(uParam0))
				{
					func_864(uParam0, 8);
				}
				else if (func_857(uParam0))
				{
					func_864(uParam0, 6);
				}
				else if (func_856(uParam0, 0))
				{
					func_864(uParam0, 5);
				}
				else if (func_855(uParam0))
				{
					func_864(uParam0, 7);
				}
				else
				{
					func_852(uParam0);
				}
				break;
			case 7:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_853(uParam0))
				{
					func_864(uParam0, 10);
				}
				else if (func_859(uParam0))
				{
					func_864(uParam0, 8);
				}
				else if (func_857(uParam0))
				{
					func_864(uParam0, 6);
				}
				else if (func_856(uParam0, 0))
				{
					func_864(uParam0, 5);
				}
				else if (!func_855(uParam0))
				{
					func_864(uParam0, 4);
				}
				else
				{
					func_849(uParam0);
				}
				break;
			case 5:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_853(uParam0))
				{
					func_864(uParam0, 10);
				}
				else if (func_859(uParam0))
				{
					func_864(uParam0, 8);
				}
				else if (func_857(uParam0))
				{
					func_864(uParam0, 6);
				}
				else if (!func_856(uParam0, 1))
				{
					if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					func_847(uParam0);
				}
				break;
			case 6:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_853(uParam0))
				{
					func_864(uParam0, 10);
				}
				else if (func_859(uParam0))
				{
					func_864(uParam0, 8);
				}
				else if (!func_857(uParam0))
				{
					if (func_856(uParam0, 0))
					{
						func_864(uParam0, 5);
					}
					else if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					func_846(uParam0);
				}
				break;
			case 8:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (func_853(uParam0))
				{
					func_864(uParam0, 10);
				}
				else if (func_845(uParam0))
				{
					if (func_857(uParam0))
					{
						func_864(uParam0, 6);
					}
					else if (func_856(uParam0, 0))
					{
						func_864(uParam0, 5);
					}
					else if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					func_844(uParam0);
				}
				break;
			case 10:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_864(uParam0, 11);
				}
				else if (func_862(uParam0))
				{
					func_864(uParam0, 15);
				}
				else if (func_861())
				{
					func_864(uParam0, 13);
				}
				else if (!func_853(uParam0))
				{
					if (func_859(uParam0))
					{
						func_864(uParam0, 8);
					}
					else if (func_857(uParam0))
					{
						func_864(uParam0, 6);
					}
					else if (func_856(uParam0, 0))
					{
						func_864(uParam0, 5);
					}
					else if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					func_842(uParam0);
				}
				break;
			case 11:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (func_478(uParam0, Global_96295))
				{
					func_864(uParam0, 12);
				}
				else if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
					WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, false, 0);
					if (func_862(uParam0))
					{
						func_864(uParam0, 15);
					}
					else if (func_861())
					{
						func_864(uParam0, 13);
					}
					else if (func_853(uParam0))
					{
						func_864(uParam0, 10);
					}
					else if (func_859(uParam0))
					{
						func_864(uParam0, 8);
					}
					else if (func_857(uParam0))
					{
						func_864(uParam0, 6);
					}
					else if (func_856(uParam0, 0))
					{
						func_864(uParam0, 5);
					}
					else if (func_855(uParam0))
					{
						func_864(uParam0, 7);
					}
					else
					{
						func_864(uParam0, 4);
					}
				}
				else
				{
					uParam0->f_2 = 0;
					uParam0->f_19 = 0;
				}
				break;
			case 12:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_864(uParam0, 14);
				}
				else if (!func_478(uParam0, Global_96295))
				{
					if (*uParam0 == iVar0)
					{
						func_864(uParam0, 11);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
						if (func_862(uParam0))
						{
							func_864(uParam0, 15);
						}
						else if (func_861())
						{
							func_864(uParam0, 13);
						}
						else if (func_853(uParam0))
						{
							func_864(uParam0, 10);
						}
						else if (func_859(uParam0))
						{
							func_864(uParam0, 8);
						}
						else if (func_857(uParam0))
						{
							func_864(uParam0, 6);
						}
						else if (func_856(uParam0, 0))
						{
							func_864(uParam0, 5);
						}
						else if (func_855(uParam0))
						{
							func_864(uParam0, 7);
						}
						else
						{
							func_864(uParam0, 4);
						}
					}
				}
				else
				{
					uParam0->f_19 = 0;
					uParam0->f_2 = 0;
				}
				break;
			case 13:
				MISC::CLEAR_BIT(&Global_96294, *uParam0);
				MISC::CLEAR_BIT(&Global_96295, *uParam0);
				if (uParam0->f_2)
				{
					if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							if ((PED::IS_PED_ON_FOOT(uParam0->f_3) && !ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3)) && !PED::IS_PED_RAGDOLL(uParam0->f_3))
							{
								if (func_874())
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
									ENTITY::SET_ENTITY_PROOFS(uParam0->f_3, true, true, true, true, true, false, false, false);
									PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
									TASK::CLEAR_PED_TASKS(uParam0->f_3);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_PLAY_ANIM(0, "random@arrests", "idle_2_hands_up", 4f, -4f, -1, 8, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "random@arrests", "kneeling_arrest_idle", 4f, -4f, -1, 9, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									uParam0->f_2 = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	func_839(uParam0);
}

void func_839(var uParam0)//Position - 0x8A96C
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if ((((uParam0->f_1 >= 14 || uParam0->f_1 == 1) || uParam0->f_1 == 2) || PED::IS_PED_INJURED(uParam0->f_3)) || uParam0->f_3 == PLAYER::PLAYER_PED_ID())
	{
		bVar0 = false;
	}
	else if (uParam0->f_1 == 3)
	{
		bVar0 = true;
	}
	else if (uParam0->f_1 == 7 && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
	{
		bVar0 = true;
	}
	else if (uParam0->f_1 == 8)
	{
		bVar0 = true;
	}
	else if (uParam0->f_20 == 0)
	{
		bVar0 = false;
		if (func_496(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 100f))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
		if (__LIB_24__::func_748(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 25f) && (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), false))))
		{
			bVar0 = false;
		}
	}
	iVar1 = 0;
	if (bVar0)
	{
		if (!func_478(uParam0, Global_96294))
		{
			iVar1 = 1;
		}
		else if (uParam0->f_1 == 3)
		{
			iVar1 = 1;
		}
		else if (uParam0->f_1 == 7 && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
		{
			iVar1 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
		{
			iVar1 = 2;
		}
		else
		{
			iVar1 = 3;
		}
	}
	if (uParam0->f_20 != iVar1)
	{
		__LIB_0__::func_523(&(uParam0->f_4));
		uParam0->f_20 = 0;
		switch (iVar1)
		{
			case 1:
				uParam0->f_4 = __LIB_10__::func_711(uParam0->f_3, 1, 1, 5);
				if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					if (*uParam0 == 0)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 78);
					}
					else if (*uParam0 == 1)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 88);
					}
					else if (*uParam0 == 2)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 79);
					}
					HUD::SET_BLIP_COLOUR(uParam0->f_4, 3);
				}
				uParam0->f_20 = 1;
				break;
			case 2:
				uParam0->f_4 = __LIB_10__::func_727(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), 1, 5);
				uParam0->f_20 = 2;
				break;
			case 3:
				uParam0->f_4 = __LIB_10__::func_711(uParam0->f_3, 1, 1, 5);
				uParam0->f_20 = 3;
				break;
			}
	}
}

void func_842(var uParam0)//Position - 0x8AC11
{
	if (uParam0->f_2)
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_2 = 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
	{
		PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
	}
}

void func_843(var uParam0)//Position - 0x8AC53
{
	if (__LIB_1__::func_197(uParam0->f_3))
	{
		PED::SET_GROUP_SEPARATION_RANGE(__LIB_0__::func_399(), 100f);
		if (__LIB_11__::func_730(5))
		{
			PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 1);
			PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 4f, -1f, -1f);
		}
		else if (__LIB_11__::func_730(14))
		{
			PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
			PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 2f, -1f, -1f);
		}
		else
		{
			PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, joaat("PLAYER"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_3, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(uParam0->f_3, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uParam0->f_3, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_3, true);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_3, true);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_3, false);
		PED::SET_PED_DIES_IN_WATER(uParam0->f_3, false);
		if (__LIB_11__::func_730(6))
		{
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 23, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 4, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ABILITY(uParam0->f_3, 2);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 512, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_3, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 107, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 182, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 206, __LIB_11__::func_730(11));
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_3, 0);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3, true, 1);
	}
}

void func_844(var uParam0)//Position - 0x8AE04
{
	if (uParam0->f_2)
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_2 = 0;
	}
	if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_PARACHUTE_TO_TARGET")))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		TASK::TASK_PARACHUTE_TO_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
	{
		TASK::SET_PARACHUTE_TASK_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
	}
	if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_3) == 0)
	{
		PED::FORCE_PED_TO_OPEN_PARACHUTE(uParam0->f_3);
	}
}

int func_845(var uParam0)//Position - 0x8AEA2
{
	if (!ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3))
	{
		if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_3) != 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_846(var uParam0)//Position - 0x8AEC7
{
	int iVar0;
	char[] cVar1[8];
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (uParam0->f_2)
	{
		func_843(uParam0);
		if (PED::IS_PED_IN_GROUP(uParam0->f_3))
		{
			PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if (__LIB_11__::func_730(8))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_3, -2145.4856f, 3018.2944f, 31.81f, 10f, false, false);
			uParam0->f_25 = 1;
		}
		else
		{
			PED::REMOVE_PED_DEFENSIVE_AREA(uParam0->f_3, false);
			uParam0->f_25 = 0;
		}
		uParam0->f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 1000));
		uParam0->f_24 = 0;
		uParam0->f_2 = 0;
	}
	if (__LIB_11__::func_730(8) != uParam0->f_25)
	{
		uParam0->f_2 = 1;
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && !func_468())
	{
		if (uParam0->f_19)
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(uParam0->f_3)))
			{
				iVar0 = __LIB_18__::func_173();
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75()) && func_143(iVar0, *uParam0, 51, &cVar1, &sVar2))
				{
					__LIB_34__::func_228(&(Local_49.f_259), *uParam0, uParam0->f_3, 1);
					__LIB_34__::func_228(&(Local_49.f_259), iVar0, PLAYER::PLAYER_PED_ID(), 1);
					if (__LIB_35__::func_536(&(Local_49.f_259), &cVar1, &sVar2, 4, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
						uParam0->f_19 = 0;
					}
				}
				else if (func_483(*uParam0, 51, &sVar2))
				{
					__LIB_5__::func_759(uParam0->f_3, &sVar2, __LIB_24__::func_747(*uParam0), 4);
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
					uParam0->f_19 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false);
			if (ENTITY::GET_ENTITY_SPEED(iVar3) > 3f)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 0.5f, 10, false);
			}
			else if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 257);
			}
		}
		else if (uParam0->f_23 < MISC::GET_GAME_TIMER())
		{
			if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_3, 60f, 0);
			}
		}
		if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_3, &iVar4, true);
			if (iVar4 == joaat("WEAPON_UNARMED") || WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0->f_3, iVar4) == 0)
			{
				iVar5 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, false);
				if (iVar5 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iVar5, true);
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
			{
				if (uParam0->f_24 == 0)
				{
					uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
				}
				else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
				{
					PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, true, 0);
					uParam0->f_24 = 0;
				}
			}
			else
			{
				uParam0->f_24 = 0;
			}
		}
		else if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			if (uParam0->f_24 == 0)
			{
				uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
			}
			else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
			{
				PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, false, 0);
				uParam0->f_24 = 0;
			}
		}
		else
		{
			uParam0->f_24 = 0;
		}
	}
}

void func_847(var uParam0)//Position - 0x8B200
{
	int iVar0;
	char[] cVar1[8];
	char* sVar2;
	int iVar3;
	int iVar4;
	if (uParam0->f_2)
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_3, 100f);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if (__LIB_11__::func_730(5))
		{
			PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 1);
			PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 4f, -1f, -1f);
		}
		else
		{
			PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
		}
		uParam0->f_24 = 0;
		uParam0->f_2 = 0;
	}
	if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
	{
		PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399());
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && !func_468())
	{
		if (uParam0->f_19)
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(uParam0->f_3)))
			{
				iVar0 = __LIB_18__::func_173();
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75()) && func_143(iVar0, *uParam0, 51, &cVar1, &sVar2))
				{
					__LIB_34__::func_228(&(Local_49.f_259), *uParam0, uParam0->f_3, 1);
					__LIB_34__::func_228(&(Local_49.f_259), iVar0, PLAYER::PLAYER_PED_ID(), 1);
					if (__LIB_35__::func_536(&(Local_49.f_259), &cVar1, &sVar2, 4, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
						uParam0->f_19 = 0;
					}
				}
				else if (func_483(*uParam0, 51, &sVar2))
				{
					__LIB_5__::func_759(uParam0->f_3, &sVar2, __LIB_24__::func_747(*uParam0), 4);
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
					uParam0->f_19 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false) && !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), false))
		{
			if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
			}
		}
		else if ((((!__LIB_11__::func_730(13) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), -1, false) == uParam0->f_3) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), 60f, 786468);
			}
		}
		else if (__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) || __LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
		}
		if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_3, &iVar3, true);
			if (iVar3 == joaat("WEAPON_UNARMED") || WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0->f_3, iVar3) == 0)
			{
				iVar4 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, false);
				if (iVar4 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iVar4, true);
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
			{
				if (uParam0->f_24 == 0)
				{
					uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
				}
				else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
				{
					PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, true, 0);
					uParam0->f_24 = 0;
				}
			}
			else
			{
				uParam0->f_24 = 0;
			}
		}
		else if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			if (uParam0->f_24 == 0)
			{
				uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
			}
			else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
			{
				PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, false, 0);
				uParam0->f_24 = 0;
			}
		}
		else
		{
			uParam0->f_24 = 0;
		}
	}
}

void func_849(var uParam0)//Position - 0x8B585
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (uParam0->f_2)
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_22 = __LIB_18__::func_173();
		uParam0->f_21 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = __LIB_0__::func_76(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	iVar1 = 524288 | 512 | 256 | 32 | 2 | 4 | 8 | 16;
	fVar2 = 25f;
	if (__LIB_11__::func_730(10) && fVar0 > 50f)
	{
		fVar2 = 40f;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
	{
		if (func_850(uParam0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_5, false))
			{
				if (__LIB_0__::func_76(uParam0->f_3, uParam0->f_5, 1) > 30f)
				{
					if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
						TASK::TASK_GO_TO_ENTITY(uParam0->f_3, uParam0->f_5, -1, 0.5f, 2f, 2f, 0);
					}
				}
				else if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_3);
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_5, -1, -1, 2f, 1, 0);
				}
			}
		}
		else if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_GO_TO_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 5f, 2f, 2f, 0);
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), false))
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
	}
	else
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), PLAYER::PLAYER_PED_ID(), 7, fVar2, iVar1, 2f, 20f, true);
		}
		TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(uParam0->f_3, fVar2);
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_3, fVar2);
	}
}

int func_850(var uParam0)//Position - 0x8B76D
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_5, false))
	{
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(uParam0->f_3, &iVar0);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[iVar2], false))
			{
				iVar0[iVar2] = 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar2], -1, false)))
			{
				iVar0[iVar2] = 0;
			}
			else
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar2], true) };
				if (SYSTEM::VDIST2(Var4, Var5) > (70f * 70f) || SYSTEM::VDIST2(Var3, Var5) > ((200f - 30f) * (200f - 30f)))
				{
					iVar0[iVar2] = 0;
				}
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (iVar0[iVar2] != 0)
			{
				if (!__LIB_28__::func_359(ENTITY::GET_ENTITY_MODEL(iVar0[iVar2])))
				{
					uParam0->f_5 = iVar0[iVar2];
					return 1;
				}
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (iVar0[iVar2] != 0)
			{
				uParam0->f_5 = iVar0[iVar2];
				return 1;
			}
			iVar2++;
		}
		return 0;
	}
	return 1;
}

void func_852(var uParam0)//Position - 0x8B91D
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (uParam0->f_2 || uParam0->f_22 != __LIB_18__::func_173())
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_22 = __LIB_18__::func_173();
		uParam0->f_21 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = __LIB_0__::func_76(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	iVar1 = 524288 | 512 | 256 | 32 | 2 | 4 | 8 | 16;
	iVar2 = 524288 | 512 | 256 | 32 | 2 | 1;
	fVar3 = 25f;
	if (__LIB_11__::func_730(10))
	{
		fVar3 = 40f;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_GO_TO_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 5f, 2f, 2f, 0);
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), false))
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
	}
	else if (fVar0 > 30f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_21 == 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), PLAYER::PLAYER_PED_ID(), 4, fVar3, iVar1, 10f, 15f, true);
		}
		uParam0->f_21 = 0;
	}
	else if (fVar0 > 12f && ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 1f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), PLAYER::PLAYER_PED_ID(), 4, 10f, iVar2, 10f, 15f, true);
		}
		uParam0->f_21 = 1;
	}
	else if (fVar0 > 12f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
		uParam0->f_21 = 1;
	}
	else
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
		uParam0->f_21 = 1;
	}
}

int func_853(var uParam0)//Position - 0x8BB76
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (__LIB_1__::func_197(iVar1))
			{
				iVar2 = __LIB_18__::func_173();
				iVar3 = 0;
				while (iVar3 < 3)
				{
					if (iVar3 != iVar2 && iVar3 != *uParam0)
					{
						if (Local_49.f_162[iVar3 /*28*/].f_3 == iVar1)
						{
							return 1;
						}
					}
					iVar3++;
				}
			}
		}
	}
	return 0;
}

void func_854(var uParam0)//Position - 0x8BBF1
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	if (uParam0->f_2)
	{
		func_843(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_14 = 0;
		uParam0->f_15 = MISC::GET_GAME_TIMER() + 1000;
		uParam0->f_16 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = __LIB_0__::func_76(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	fVar1 = __LIB_0__::func_529(uParam0->f_3, uParam0->f_11, 1);
	iVar2 = 524288 | 512 | 256 | 32 | 2;
	iVar3 = iVar2 | 8 | 4 | 16;
	iVar4 = iVar2 | 8;
	iVar5 = iVar2 | 8 | 1;
	fVar6 = 20f;
	if (__LIB_11__::func_730(10))
	{
		fVar6 = 40f;
	}
	iVar7 = 0;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 1f)
	{
		uParam0->f_15 = MISC::GET_GAME_TIMER() + 2000;
	}
	else if (uParam0->f_15 < MISC::GET_GAME_TIMER())
	{
		iVar7 = 1;
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), false) || fVar0 < 12f) || ((fVar0 < 20f && fVar1 < 10f) && iVar7))
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) || uParam0->f_14 != 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
			uParam0->f_14 = 0;
		}
	}
	else if (fVar1 < 2f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_14 != 1)
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), uParam0->f_11, 5, 0f, iVar4, 2f, 20f, true);
			uParam0->f_14 = 1;
		}
	}
	else if (fVar1 < 7f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_14 != 2)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), uParam0->f_11, 4, 10f, iVar5, 2f, 20f, true);
			uParam0->f_14 = 2;
		}
	}
	else if (fVar0 < 30f || fVar1 < 40f)
	{
		if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_14 != 3)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), uParam0->f_11, 4, 10f, iVar4, 2f, 20f, true);
			uParam0->f_14 = 3;
		}
	}
	else if (!__LIB_4__::func_465(uParam0->f_3, joaat("SCRIPT_TASK_VEHICLE_MISSION")) || uParam0->f_14 != 4)
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), uParam0->f_11, 4, fVar6, iVar3, 10f, 15f, true);
		uParam0->f_14 = 4;
	}
	if (uParam0->f_16 >= 0)
	{
		if (uParam0->f_16 == 0)
		{
			if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) && !PED::IS_PED_ON_ANY_BIKE(uParam0->f_3)) && ((fVar1 < 2f && iVar7) && fVar0 > 20f))
			{
				AUDIO::SET_HORN_PERMANENTLY_ON_TIME(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), 50f);
				uParam0->f_16 = MISC::GET_GAME_TIMER() + 500;
			}
		}
		else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) || PED::IS_PED_ON_ANY_BIKE(uParam0->f_3))
		{
			uParam0->f_16 = -1;
		}
		else if (uParam0->f_16 < MISC::GET_GAME_TIMER())
		{
			AUDIO::SET_HORN_PERMANENTLY_ON_TIME(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, false), 500f);
			uParam0->f_16 = -1;
		}
	}
}

int func_855(var uParam0)//Position - 0x8BF4B
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && !__LIB_10__::func_946(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		return 1;
	}
	if (__LIB_11__::func_730(9))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_856(var uParam0, bool bParam1)//Position - 0x8BFCC
{
	float fVar0;
	fVar0 = 25f;
	if (bParam1)
	{
		fVar0 = 100f;
		if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, fVar0, fVar0, 3f, false, true, 0))
	{
		if (!func_855(uParam0))
		{
			if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399());
			}
			if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, __LIB_0__::func_399()))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_IN_GROUP(uParam0->f_3))
	{
		PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
	}
	return 0;
}

int func_857(var uParam0)//Position - 0x8C061
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_11__::func_730(8))
		{
			return 1;
		}
	}
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || (__LIB_11__::func_730(9) && (uParam0->f_1 == 7 || uParam0->f_1 == 6)))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 100f, 100f, 50f, false, true, 0))
		{
			if (func_858(uParam0, 100f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_858(var uParam0, float fParam1)//Position - 0x8C0E3
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = PED::GET_PED_NEARBY_PEDS(uParam0->f_3, &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (__LIB_1__::func_197(uVar0[iVar2]))
		{
			iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar2]);
			if (iVar3 != joaat("NO_RELATIONSHIP"))
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("PLAYER"), iVar3) == 5)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(uVar0[iVar2], uParam0->f_3, fParam1, fParam1, fParam1, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_859(var uParam0)//Position - 0x8C162
{
	int iVar0;
	iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_3) > 50f)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("GADGET_PARACHUTE"), false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_860(var uParam0)//Position - 0x8C1D1
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_5, false) || !PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_5, false))
	{
		return 1;
	}
	return 0;
}

int func_861()//Position - 0x8C1FF
{
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		return 1;
	}
	return 0;
}

int func_862(var uParam0)//Position - 0x8C218
{
	if (BitTest(Global_96294, *uParam0))
	{
		if (uParam0->f_1 == 8 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return func_496(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 200f);
		}
		else
		{
			return __LIB_0__::func_76(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1) > 200f;
		}
	}
	return 0;
}

int func_863(var uParam0)//Position - 0x8C273
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = __LIB_6__::func_757(*uParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var1, false, &Var2, 0))
		{
			if (SYSTEM::VDIST(Var1, Var2) < 25f)
			{
				if (func_805(&(uParam0->f_3), *uParam0, Var2, 0f, 1, 0, 0))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("WEAPON_PISTOL"), (WEAPON::GET_WEAPON_CLIP_SIZE(joaat("WEAPON_PISTOL")) * MISC::GET_RANDOM_INT_IN_RANGE(6, 10)), false, true);
						__LIB_32__::func_749(uParam0->f_3, 0);
					}
					uParam0->f_19 = 0;
					uParam0->f_5 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_864(var uParam0, int iParam1)//Position - 0x8C324
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = 1;
}

void func_865(var uParam0)//Position - 0x8C337
{
	float fVar0;
	if (__LIB_1__::func_197(uParam0->f_3))
	{
		if (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) < SYSTEM::FLOOR(400f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->f_3)) * (400f / 200f));
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, SYSTEM::FLOOR(400f));
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, SYSTEM::FLOOR(fVar0), 0);
		}
	}
}

void func_866(var uParam0)//Position - 0x8C398
{
	int iVar0;
	iVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, false);
	WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, true, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iVar0, true);
}

int func_867(var uParam0)//Position - 0x8C3C0
{
	struct<82> Var0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	struct<3> Var5;
	var uVar6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	var uVar12;
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	__LIB_0__::func_120(*uParam0, &Var0, uParam0->f_6);
	iVar1 = __LIB_6__::func_757(*uParam0);
	iVar2 = Var0.f_0;
	if (iVar2 == 0)
	{
		iVar2 = joaat("asea");
	}
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	if (STREAMING::HAS_MODEL_LOADED(iVar2) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		bVar4 = __LIB_11__::func_730(0);
		if (bVar4)
		{
		}
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var3, &Var5, &uVar6, 0f, 180f, 300f, bVar4, 1, 1))
		{
			if (__LIB_11__::func_730(1))
			{
				iVar7 = __LIB_0__::func_659(Var3, 3, 0, 0);
				if (iVar7 != __LIB_0__::func_659(Var5, 3, 0, 0))
				{
					if (!VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&(uParam0->f_11), &Var5, &uVar6, 0f, 180f, 300f, bVar4, 1, 1))
					{
						return 0;
					}
					else if (SYSTEM::VDIST2(Var3, Var5) < (300f * 300f))
					{
						return 0;
					}
					else if (iVar7 != __LIB_0__::func_659(Var5, 3, 0, 0))
					{
						return 0;
					}
				}
			}
			if (__LIB_11__::func_730(2))
			{
				if (uParam0->f_26 < 60)
				{
					if (func_868(Var5, 890f, -3365f, 0f, 1312f, -2888f, 0f))
					{
						return 0;
					}
				}
			}
			if (uParam0->f_26 < 30)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(iVar2, Var5, true))
				{
					return 0;
				}
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Var5, 10f, false, false, false, false, false, false, 0);
			Var8 = { Var5 - Vector(3f, 3f, 3f) };
			Var9 = { Var5 + Vector(3f, 3f, 3f) };
			if (MISC::IS_AREA_OCCUPIED(Var8, Var9, false, true, false, false, false, 0, false))
			{
				return 0;
			}
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, 1, &Var10, &fVar11, &uVar12, 1, 3f, 0f);
			Var10 = { Var5 };
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if (__LIB_41__::func_4(&(uParam0->f_5), *uParam0, Var10, fVar11, 1, uParam0->f_6))
				{
					if (__LIB_0__::func_715(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_5), Var10 - Var3) > 0f)
					{
						ENTITY::SET_ENTITY_HEADING(uParam0->f_5, (fVar11 + 180f));
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_5, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_5, true, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if (func_535(&(uParam0->f_3), *uParam0, uParam0->f_5, -1, 1, 0, 0))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("WEAPON_PISTOL"), (WEAPON::GET_WEAPON_CLIP_SIZE(joaat("WEAPON_PISTOL")) * MISC::GET_RANDOM_INT_IN_RANGE(6, 10)), false, true);
						__LIB_32__::func_749(uParam0->f_3, 0);
					}
					uParam0->f_19 = 1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_868(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, struct<2> Param4, float fParam5)//Position - 0x8C661
{
	if (((Param2.f_0 <= Param0.f_0 && Param0.f_0 <= Param4.f_0) && Param2.f_1 <= Param0.f_1) && Param0.f_1 <= Param4.f_1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_870(struct<3> Param0, struct<3> Param1)//Position - 0x8D3F0
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	bVar0 = PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Param1, 0, &Var2);
	bVar1 = PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Param1, 1, &Var3);
	if (bVar0)
	{
		Var2 = { Var2 + __LIB_0__::func_79(Param1 - Var2) * Vector(3.5f, 3.5f, 3.5f) };
	}
	if (bVar1)
	{
		Var3 = { Var3 + __LIB_0__::func_79(Param1 - Var3) * Vector(3.5f, 3.5f, 3.5f) };
	}
	if (bVar0 && bVar1)
	{
		if (SYSTEM::VDIST2(Param0, Var2) < SYSTEM::VDIST2(Param0, Var3))
		{
			return Var2;
		}
		else
		{
			return Var3;
		}
	}
	if (bVar0)
	{
		return Var2;
	}
	if (bVar1)
	{
		return Var3;
	}
	return Param1;
}

int func_871(struct<3> Param0, var* uParam1)//Position - 0x8D4B4
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_11__::func_730(3);
	iVar0 = func_872(Param0, uParam1, 4);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar0) && (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, *uParam1, true) < 50f || iVar1))
	{
		return iVar0;
	}
	if (iVar1 == 0)
	{
		iVar0 = func_872(Param0, uParam1, 5);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar0))
		{
			return iVar0;
		}
	}
	*uParam1 = { Param0 };
	return 0;
}

int func_872(struct<3> Param0, var* uParam1, int iParam2)//Position - 0x8D528
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, iVar0, iParam2, 3f, 0f);
	while (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 != 0 && Local_49.f_162[iVar2 /*28*/].f_10 == iVar1)
			{
				iVar1 = 0;
				iVar0++;
			}
			iVar2++;
		}
		if (iVar1 == 0)
		{
			iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, iVar0, iParam2, 3f, 0f);
		}
		else
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, uParam1);
			return iVar1;
		}
	}
	return 0;
}

int func_873(var uParam0)//Position - 0x8D5B2
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	iVar2 = PED::GET_PED_NEARBY_PEDS(uParam0->f_3, &uVar0, -1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar0[iVar1], uParam0->f_3, true) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uVar0[iVar1], 0, 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uVar0[iVar1]);
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_874()//Position - 0x8D620
{
	STREAMING::REQUEST_ANIM_DICT("random@arrests");
	return STREAMING::HAS_ANIM_DICT_LOADED("random@arrests");
}

void func_875(var uParam0)//Position - 0x8D63A
{
	bool bVar0;
	bVar0 = *uParam0;
	if (!BitTest(Global_96294, bVar0))
	{
		MISC::SET_BIT(&Global_96294, bVar0);
		__LIB_6__::func_892(&(uParam0->f_7));
	}
}

int func_876()//Position - 0x8D664
{
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FRIENDS", 5))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		return 0;
	}
	return 1;
}

void func_877(bool bParam0, int iParam1, bool bParam2)//Position - 0x8D68C
{
	if (bParam0)
	{
	}
	if (bParam2)
	{
		if (func_879(&(Local_49.f_56)) && !func_488(&(Local_49.f_56)))
		{
			func_878(&(Local_49.f_56));
		}
		else
		{
			func_486(&(Local_49.f_56), bParam0, iParam1);
		}
	}
	else if (func_490(Local_49.f_56.f_1, Global_96289) || !func_429(&(Local_49.f_56)))
	{
		func_486(&(Local_49.f_56), bParam0, iParam1);
	}
	if (bParam2)
	{
		if (func_879(&(Local_49.f_109)) && !func_488(&(Local_49.f_109)))
		{
			func_878(&(Local_49.f_109));
		}
		else
		{
			func_486(&(Local_49.f_109), bParam0, iParam1);
		}
	}
	else if (func_490(Local_49.f_109.f_1, Global_96289) || !func_429(&(Local_49.f_109)))
	{
		func_486(&(Local_49.f_109), bParam0, iParam1);
	}
}

void func_878(var uParam0)//Position - 0x8D768
{
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		TASK::TASK_PAUSE(uParam0->f_7, -1);
		uParam0->f_36 = 0;
		__LIB_1__::func_0(uParam0, 4);
	}
}

int func_879(var uParam0)//Position - 0x8D791
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		return 1;
	}
	return 0;
}

void func_880()//Position - 0x8D7B0
{
	Local_49.f_1 = 7;
}

void func_881()//Position - 0x8D7BD
{
	func_883();
	func_882(0);
}

void func_882(int iParam0)//Position - 0x8D7CE
{
	if (Local_49.f_614 != iParam0)
	{
		Local_49.f_614 = iParam0;
		if (iParam0 == 1)
		{
		}
		else
		{
			if (Local_49.f_703 == 0 || Local_49.f_703 == 1)
			{
				func_447(&(Local_49.f_703));
			}
			Local_49.f_615 = -1;
		}
	}
}

void func_883()//Position - 0x8D819
{
	func_884(Global_96288, Global_96289, 0);
}

void func_884(int iParam0, var uParam1, int iParam2)//Position - 0x8D82E
{
	if (iParam0 == -1)
	{
	}
	else if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 15))
	{
	}
	else
	{
		Global_96290 = iParam0;
		Global_96291 = uParam1;
		if (iParam2 || !__LIB_0__::func_39(2))
		{
			__LIB_11__::func_731(iParam0);
		}
	}
}

int func_887()//Position - 0x8D916
{
	struct<74> Var0;
	Var0 = 2;
	Var0.f_19 = 2;
	Var0.f_53 = 3;
	Var0.f_63 = 3;
	Var0.f_73 = 3;
	func_921(Global_96267, &Var0);
	if (func_889(Global_96267, &Var0, &(Local_49.f_257), Local_49.f_56.f_7, Local_49.f_109.f_7, &(Local_49.f_259)))
	{
		__LIB_11__::func_89(Global_96267, 0);
		return 1;
	}
	return 0;
}

int func_889(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x8D9A1
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char[] cVar6[8];
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	if (uParam1->f_44 == 0)
	{
		if (*uParam2 > 0 && *uParam2 < 4)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CLOCK::ADD_TO_CLOCK_TIME(iLocal_81, 0, 0);
				*uParam2 = 98;
				return 0;
			}
			else if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (__LIB_6__::func_841(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
		}
		if (*uParam2 < 3)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
		}
	}
	if (*uParam2 != -1)
	{
		PLAYER::DISABLE_CAMERA_VIEW_MODE_CYCLE(PLAYER::PLAYER_ID());
	}
	if (*uParam2 == 0)
	{
		if (func_918(5f))
		{
			func_160(uParam1->f_53[0 /*3*/], 1, 1, 0, 0, 0, 1, 1, 1, 1, 1);
			iLocal_70 = 0;
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(uParam1->f_46, uParam1->f_49, uParam1->f_52, true, false, false, false, false, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(uParam1->f_46, uParam1->f_49, uParam1->f_52, false, false, true);
			func_917(uParam1, &Var0, &Var1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Var0, Var1, false, 0);
			MISC::CLEAR_AREA(Var0 + Var1 * Vector(0.5f, 0.5f, 0.5f), (SYSTEM::VDIST(Var1, Var0) * 0.5f), true, false, false, false);
			SYSTEM::SETTIMERA(0);
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(25, 35);
			iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_915(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iParam0, 0, 0, 0);
				if (__LIB_1__::func_197(iParam3))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[0 /*3*/], true, false, false, true);
					__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), uParam1->f_53[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_53[1 /*3*/], 1f, -1, 0.25f, 1024, 40000f);
					if (uParam1->f_44 && !__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam3, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[0 /*3*/], true, false, false, true);
					__LIB_10__::func_624(iParam3, uParam1->f_63[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
					PED::SET_PED_STEALTH_MOVEMENT(iParam3, false, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam3, joaat("WEAPON_UNARMED"), true);
					AUDIO::STOP_PED_SPEAKING(iParam3, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_63[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					if (uParam1->f_44 && !__LIB_7__::func_320(iParam3))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iParam3, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				if (__LIB_1__::func_197(iParam4))
				{
					ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[0 /*3*/], true, false, false, true);
					__LIB_10__::func_624(iParam4, uParam1->f_73[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
					PED::SET_PED_STEALTH_MOVEMENT(iParam4, false, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam4, joaat("WEAPON_UNARMED"), true);
					AUDIO::STOP_PED_SPEAKING(iParam4, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_73[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					if (uParam1->f_44 && !__LIB_7__::func_320(iParam4))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iParam4, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				if (uParam1->f_44 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_914(PLAYER::PLAYER_PED_ID(), iParam0, iVar3);
					}
					if (!PED::IS_PED_INJURED(iParam3))
					{
						func_914(iParam3, iParam0, iVar3);
					}
					if (!PED::IS_PED_INJURED(iParam4))
					{
						func_914(iParam4, iParam0, iVar3);
					}
					func_913(iParam0);
				}
				iLocal_69[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::SET_CAM_COORD(iLocal_69[0], *(uParam1[0 /*6*/]));
				CAM::SET_CAM_ROT(iLocal_69[0], (uParam1[0 /*6*/])->f_3, 2);
				CAM::SET_CAM_FOV(iLocal_69[0], uParam1->f_32);
				iLocal_69[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::SET_CAM_COORD(iLocal_69[1], *(uParam1[1 /*6*/]));
				CAM::SET_CAM_ROT(iLocal_69[1], (uParam1[1 /*6*/])->f_3, 2);
				CAM::SET_CAM_FOV(iLocal_69[1], uParam1->f_32);
				fVar4 = uParam1->f_35;
				if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
				{
					fVar4 = uParam1->f_36;
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_69[1], iLocal_69[0], SYSTEM::FLOOR((fVar4 * 1000f)), 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			*uParam2++;
		}
	}
	else if (*uParam2 == 1)
	{
		if ((uParam1->f_44 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iParam3))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				iVar7 = __LIB_18__::func_173();
				iVar8 = func_124(iParam3);
				if ((((Global_96269 == 1 && iVar7 == 1) && iVar8 == 0) && !__LIB_7__::func_320(PLAYER::PLAYER_PED_ID())) && func_143(iVar7, iVar8, 56, &sVar5, &cVar6))
				{
					if (SYSTEM::TIMERA() > SYSTEM::FLOOR((uParam1->f_35 * 1000f)) || __LIB_35__::func_536(uParam5, &sVar5, &cVar6, 4, 0, 0, 0))
					{
						*uParam2++;
					}
				}
				else
				{
					if (Global_96269 == 1)
					{
						Global_96269 = 0;
					}
					if ((!func_416(iVar7, iVar8, 7, Global_96269, __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()), &sVar5, &cVar6) || __LIB_35__::func_536(uParam5, &sVar5, &cVar6, 4, 0, 0, 0)) || SYSTEM::TIMERA() > SYSTEM::FLOOR((uParam1->f_35 * 1000f)))
					{
						*uParam2++;
					}
				}
			}
		}
		else
		{
			*uParam2++;
		}
	}
	else if (*uParam2 == 2)
	{
		fVar9 = uParam1->f_35;
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
		{
			fVar9 = uParam1->f_36;
		}
		if (SYSTEM::TIMERA() > SYSTEM::FLOOR((fVar9 * 1000f)))
		{
			if (uParam1->f_44)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					*uParam2 = 50;
				}
				else
				{
					func_912(iParam0);
					*uParam2 = 100;
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_69[0]))
				{
					CAM::DESTROY_CAM(iLocal_69[0], false);
				}
				iLocal_69[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::SET_CAM_COORD(iLocal_69[0], uParam1->f_13);
				CAM::SET_CAM_ROT(iLocal_69[0], uParam1->f_13.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_69[0], uParam1->f_33);
				CAM::SET_CAM_ACTIVE(iLocal_69[0], true);
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				HUD::CLEAR_PRINTS();
				iVar10 = 55;
				if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_124(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_124(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_124(iParam4) == 2))
				{
					iVar10 = 75;
				}
				iVar10 += 2;
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (!__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_7__::func_787(PLAYER::PLAYER_PED_ID(), iVar10 * 1000, 0);
					}
					else
					{
						__LIB_42__::func_11(PLAYER::PLAYER_PED_ID(), iVar10 * 1000);
					}
				}
				if (!PED::IS_PED_INJURED(iParam3))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
					if (!__LIB_7__::func_320(iParam3))
					{
						__LIB_7__::func_787(iParam3, iVar10 * 1000, 0);
					}
					else
					{
						__LIB_42__::func_11(iParam3, iVar10 * 1000);
					}
				}
				if (__LIB_1__::func_197(iParam4))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
					if (!__LIB_7__::func_320(iParam4))
					{
						__LIB_7__::func_787(iParam4, iVar10 * 1000, 0);
					}
					else
					{
						__LIB_42__::func_11(iParam4, iVar10 * 1000);
					}
				}
				iLocal_70 = 1;
				SYSTEM::SETTIMERA(0);
				*uParam2++;
			}
		}
	}
	else if (*uParam2 == 3)
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1))
		{
			Local_71.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			CAM::ADD_CAM_SPLINE_NODE(Local_71.f_4, uParam1->f_13, uParam1->f_13.f_3, 2500, 3, 2);
			CAM::ADD_CAM_SPLINE_NODE(Local_71.f_4, uParam1->f_13, uParam1->f_13.f_3, 2500, 3, 2);
			CAM::SET_CAM_FOV(Local_71.f_4, uParam1->f_33);
			CAM::SET_CAM_ACTIVE(Local_71.f_4, true);
			Local_71.f_0 = __LIB_37__::func_609();
			Local_71.f_1 = __LIB_37__::func_609();
			func_909(&Local_71, 1, 0, 2000, 1, 1, 0, 1);
			iLocal_79 = ((CLOCK::GET_CLOCK_HOURS() + iLocal_81) % 24);
			iLocal_80 = CLOCK::GET_CLOCK_MINUTES();
			*uParam2++;
		}
	}
	else if (*uParam2 == 4)
	{
		if (__LIB_40__::func_671(iLocal_79, iLocal_80, "", "", &Local_71, -1082130432, 0, 1, 1065353216))
		{
			*uParam2++;
		}
	}
	else if (*uParam2 == 5)
	{
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[1 /*3*/], true, false, false, true);
			__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/]);
			TASK::OPEN_SEQUENCE_TASK(&iVar11);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_53[2 /*3*/], 1f, -1, 0.25f, 8192, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar11);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar11);
			TASK::CLEAR_SEQUENCE_TASK(&iVar11);
			if (!PED::IS_PED_INJURED(iParam3))
			{
				ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[1 /*3*/], true, false, false, true);
				__LIB_10__::func_624(iParam3, uParam1->f_63[2 /*3*/]);
				if (PED::IS_PED_GROUP_MEMBER(iParam3, __LIB_0__::func_399()))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam3);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar11);
				TASK::TASK_PAUSE(0, 250);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_63[2 /*3*/], 1f, -1, 0.25f, 8192, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar11);
				TASK::TASK_PERFORM_SEQUENCE(iParam3, iVar11);
				TASK::CLEAR_SEQUENCE_TASK(&iVar11);
			}
			if (__LIB_1__::func_197(iParam4))
			{
				ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[1 /*3*/], true, false, false, true);
				__LIB_10__::func_624(iParam4, uParam1->f_73[2 /*3*/]);
				if (PED::IS_PED_GROUP_MEMBER(iParam4, __LIB_0__::func_399()))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam4);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar11);
				TASK::TASK_PAUSE(0, 1200);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_73[2 /*3*/], 1f, -1, 0.25f, 8192, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar11);
				TASK::TASK_PERFORM_SEQUENCE(iParam4, iVar11);
				TASK::CLEAR_SEQUENCE_TASK(&iVar11);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_69[0]))
			{
				CAM::DESTROY_CAM(iLocal_69[0], false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_69[1]))
			{
				CAM::DESTROY_CAM(iLocal_69[1], false);
			}
			func_909(&Local_71, 0, 0, 2000, 1, 0, 0, 1);
			iLocal_69[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_COORD(iLocal_69[0], uParam1->f_19[0 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_69[0], uParam1->f_19[0 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_69[0], uParam1->f_34);
			iLocal_69[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_COORD(iLocal_69[1], uParam1->f_19[1 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_69[1], uParam1->f_19[1 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_69[1], uParam1->f_34);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_69[1], iLocal_69[0], 5000, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		if (iParam0 == 2)
		{
			MISC::CLEAR_AREA_OF_PEDS(uParam1->f_53[0 /*3*/], 300f, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam1->f_53[0 /*3*/], 300f, 0);
		}
		*uParam2++;
	}
	else if (*uParam2 == 6)
	{
		if (SYSTEM::TIMERA() > 5000)
		{
			iVar12 = 55;
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_124(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_124(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_124(iParam4) == 2))
			{
				iVar12 = 75;
			}
			__LIB_4__::func_57(iVar12 * 1000, 30000, 1050253722, 1065353216, 0, 0);
			Global_44211 = 0.25f;
			StringCopy(&Global_44212, "DRUNK", 16);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				*uParam2 = 50;
			}
			else
			{
				if (uParam1->f_45)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_69[1]))
					{
						CAM::DESTROY_CAM(iLocal_69[1], false);
					}
					iLocal_69[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					CAM::SET_CAM_COORD(iLocal_69[1], uParam1->f_37);
					CAM::SET_CAM_ROT(iLocal_69[1], uParam1->f_37.f_3, 2);
					CAM::SET_CAM_FOV(iLocal_69[1], uParam1->f_43);
					CAM::SET_CAM_ACTIVE(iLocal_69[1], true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				*uParam2 = 100;
			}
		}
	}
	else if (*uParam2 == 50)
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
		SYSTEM::SETTIMERA(0);
		*uParam2++;
	}
	else if (*uParam2 == 51)
	{
		if (SYSTEM::TIMERA() > 300)
		{
			*uParam2 = 100;
		}
	}
	else if (*uParam2 == 98)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_69[0]))
		{
			CAM::DESTROY_CAM(iLocal_69[0], false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_69[1]))
		{
			CAM::DESTROY_CAM(iLocal_69[1], false);
		}
		iLocal_69[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		if (uParam1->f_45 == 0)
		{
			CAM::SET_CAM_COORD(iLocal_69[1], uParam1->f_19[1 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_69[1], uParam1->f_19[1 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_69[1], uParam1->f_34);
		}
		else
		{
			CAM::SET_CAM_COORD(iLocal_69[1], uParam1->f_37);
			CAM::SET_CAM_ROT(iLocal_69[1], uParam1->f_37.f_3, 2);
			CAM::SET_CAM_FOV(iLocal_69[1], uParam1->f_43);
		}
		CAM::SET_CAM_ACTIVE(iLocal_69[1], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/], true, false, false, true);
			__LIB_10__::func_624(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/] + uParam1->f_53[2 /*3*/] - uParam1->f_53[1 /*3*/]);
		}
		if (!PED::IS_PED_INJURED(iParam3))
		{
			ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[2 /*3*/], true, false, false, true);
			__LIB_10__::func_624(iParam3, uParam1->f_63[2 /*3*/] + uParam1->f_63[2 /*3*/] - uParam1->f_63[1 /*3*/]);
			if (PED::IS_PED_GROUP_MEMBER(iParam3, __LIB_0__::func_399()))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam3);
			}
		}
		if (__LIB_1__::func_197(iParam4))
		{
			ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[2 /*3*/], true, false, false, true);
			__LIB_10__::func_624(iParam4, uParam1->f_73[2 /*3*/] + uParam1->f_73[2 /*3*/] - uParam1->f_73[1 /*3*/]);
			if (PED::IS_PED_GROUP_MEMBER(iParam4, __LIB_0__::func_399()))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam4);
			}
		}
		iVar13 = 55;
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_124(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_124(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_124(iParam4) == 2))
		{
			iVar13 = 75;
		}
		__LIB_4__::func_57(iVar13 * 1000, 30000, 1050253722, 1065353216, 0, 0);
		Global_44211 = 0.25f;
		StringCopy(&Global_44212, "DRUNK", 16);
		iVar13++;
		if (iLocal_70 == 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (!__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_7__::func_787(PLAYER::PLAYER_PED_ID(), iVar13 * 1000, 0);
				}
				else
				{
					__LIB_42__::func_11(PLAYER::PLAYER_PED_ID(), iVar13 * 1000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam3))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
				if (!__LIB_7__::func_320(iParam3))
				{
					__LIB_7__::func_787(iParam3, iVar13 * 1000, 0);
				}
				else
				{
					__LIB_42__::func_11(iParam3, iVar13 * 1000);
				}
			}
			if (__LIB_1__::func_197(iParam4))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
				if (!__LIB_7__::func_320(iParam3))
				{
					__LIB_7__::func_787(iParam4, iVar13 * 1000, 0);
				}
				else
				{
					__LIB_42__::func_11(iParam4, iVar13 * 1000);
				}
			}
			iLocal_70 = 1;
		}
		SYSTEM::SETTIMERA(0);
		*uParam2++;
	}
	else if (*uParam2 == 99)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			CAM::DO_SCREEN_FADE_IN(1000);
			*uParam2++;
		}
	}
	else if (*uParam2 == 100)
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
		}
		iVar14 = 0;
		while (iVar14 < iLocal_69)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_69[iVar14]))
			{
				CAM::DESTROY_CAM(iLocal_69[iVar14], false);
			}
			iVar14++;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		if (!PED::IS_PED_INJURED(iParam3))
		{
			AUDIO::STOP_PED_SPEAKING(iParam3, false);
		}
		if (!PED::IS_PED_INJURED(iParam4))
		{
			AUDIO::STOP_PED_SPEAKING(iParam4, false);
		}
		func_917(uParam1, &Var15, &Var16);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var15, Var16, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uParam1->f_46, uParam1->f_49, uParam1->f_52, 1);
		__LIB_35__::func_891(1, 0, 1, 1);
		*uParam2 = -1;
	}
	if (*uParam2 == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
			{
				if (!PED::IS_PED_GROUP_MEMBER(iParam3, __LIB_0__::func_399()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iParam3, __LIB_0__::func_399());
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam3, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam4) && !PED::IS_PED_INJURED(iParam4))
			{
				if (!PED::IS_PED_GROUP_MEMBER(iParam4, __LIB_0__::func_399()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iParam4, __LIB_0__::func_399());
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam4, 0);
				}
			}
		}
		__LIB_32__::func_495(SYSTEM::TO_FLOAT(iLocal_81));
		CAM::DO_SCREEN_FADE_IN(1000);
		return 1;
	}
	return 0;
}

void func_909(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x8F57C
{
	int iVar0;
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_7__::func_279(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_9__::func_994();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = __LIB_37__::func_609();
		}
	}
}

void func_912(int iParam0)//Position - 0x8F7DF
{
	int iVar0;
	iVar0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		switch (iParam0)
		{
			case 7:
				CAM::SET_CAM_COORD(iVar0, 397.2f, -716.2f, 29.9f);
				CAM::SET_CAM_ROT(iVar0, -4f, 0f, -9.3f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			case 8:
				CAM::SET_CAM_COORD(iVar0, -1411.5f, -200.6f, 47.8f);
				CAM::SET_CAM_ROT(iVar0, -3.8f, 0f, 19.7f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			case 9:
				CAM::SET_CAM_COORD(iVar0, 298.9f, 200.8f, 105f);
				CAM::SET_CAM_ROT(iVar0, -7.6f, 0f, 161.6f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			default:
				return;
				break;
		}
		if (CAM::DOES_CAM_EXIST(iLocal_69[0]))
		{
			CAM::DESTROY_CAM(iLocal_69[0], false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_69[1]))
		{
			CAM::DESTROY_CAM(iLocal_69[1], false);
		}
		CAM::SET_CAM_ACTIVE(iVar0, true);
		iLocal_69[0] = iVar0;
	}
}

void func_913(int iParam0)//Position - 0x8F8F8
{
	if ((iParam0 == 0 || iParam0 == 4) || iParam0 == 6)
	{
		__LIB_0__::func_181(70, 1);
	}
	else
	{
		__LIB_0__::func_181(72, 1);
	}
}

void func_914(int iParam0, int iParam1, int iParam2)//Position - 0x8F92C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 14;
			break;
		case 1:
			iVar0 = 15;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 19;
			break;
		case 4:
			iVar0 = 17;
			break;
		case 5:
			iVar0 = 18;
			break;
		case 6:
			iVar0 = 20;
			break;
	}
	iVar1 = func_124(iParam0);
	if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
	{
		iVar2 = __LIB_9__::func_231(iVar1);
		if (iVar2 > iParam2)
		{
			__LIB_40__::func_982(iVar1, iVar0, iParam2);
		}
		else if (iVar2 > 0)
		{
			__LIB_40__::func_982(iVar1, iVar0, iVar2);
		}
	}
}

int func_915(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8F9EA
{
	struct<3> Var0;
	if (func_916(iParam1, &Var0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (iParam2 == 0 || ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
			{
				if (iParam1 == 10 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("swift"))
				{
					Var0 = { 2015.5687f, 3060.9106f, 46.0499f };
					Var0.f_3 = 62.5587f;
					Var0.f_4 = 0;
				}
				if ((iParam3 == 0 || (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !CAM::IS_SPHERE_VISIBLE(Var0, 5f))) || (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_VISIBLE(iParam0)))
				{
					func_155(iParam0, &Var0, iParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_916(int iParam0, var uParam1)//Position - 0x8FAA0
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1396.9028f, -584.5709f, 29.15f };
			uParam1->f_3 = 298.9717f;
			uParam1->f_4 = 9;
			return 1;
			break;
		case 1:
			*uParam1 = { -255.8321f, 6287.2563f, 30.4584f };
			uParam1->f_3 = 127.8f;
			uParam1->f_4 = 9;
			return 1;
			break;
		case 2:
			*uParam1 = { 972.553f, -117.5186f, 73.3531f };
			uParam1->f_3 = 318.8789f;
			uParam1->f_4 = 10;
			return 1;
			break;
		case 3:
			*uParam1 = { 246.8546f, -1007.3677f, 28.2705f };
			uParam1->f_3 = 345.6f;
			uParam1->f_4 = 5;
			return 1;
			break;
		case 4:
			*uParam1 = { 506.485f, -1535.9747f, 28.1243f };
			uParam1->f_3 = 143.9599f;
			uParam1->f_4 = 9;
			return 1;
			break;
		case 5:
			*uParam1 = { -141.1919f, 6386.0737f, 30.5182f };
			uParam1->f_3 = 311.4f;
			uParam1->f_4 = 5;
			return 1;
			break;
		case 6:
			*uParam1 = { 231.4387f, 301.6899f, 104.5082f };
			uParam1->f_3 = 266.2629f;
			uParam1->f_4 = 4;
			return 1;
			break;
		case 7:
			*uParam1 = { 401.448f, -706.8287f, 28.2877f };
			uParam1->f_3 = 176.4f;
			uParam1->f_4 = 9;
			return 1;
			break;
		case 8:
			*uParam1 = { -1404.611f, -203.9962f, 45.6678f };
			uParam1->f_3 = 33.7834f;
			uParam1->f_4 = 10;
			return 1;
			break;
		case 9:
			*uParam1 = { 292.0633f, 176.608f, 103.3739f };
			uParam1->f_3 = 74.52f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 10:
			*uParam1 = { 1991.6521f, 3075.7288f, 46.0322f };
			uParam1->f_3 = 64.5087f;
			uParam1->f_4 = 10;
			return 1;
			break;
		case 11:
			*uParam1 = { -1391.1478f, 53.6687f, 52.5963f };
			uParam1->f_3 = 309.1061f;
			uParam1->f_4 = 8;
			return 1;
			break;
		case 13:
			*uParam1 = { -1161.3501f, -1593.9133f, 3.357f };
			uParam1->f_3 = 214.4588f;
			uParam1->f_4 = 6;
			return 1;
			break;
		case 14:
			*uParam1 = { -2885.4353f, -24.0344f, 4.722f };
			uParam1->f_3 = 72.8704f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 15:
			*uParam1 = { -1655.6605f, 292.1499f, 59.3852f };
			uParam1->f_3 = 291.5096f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 16:
			*uParam1 = { -824.0479f, 157.3689f, 68.7834f };
			uParam1->f_3 = 263.9772f;
			uParam1->f_4 = 8;
			return 1;
			break;
		case 17:
			*uParam1 = { -1246.8259f, 383.8191f, 74.3899f };
			uParam1->f_3 = 108.8693f;
			uParam1->f_4 = 10;
			return 1;
			break;
		case 18:
			*uParam1 = { -939.0586f, -1230.3401f, 4.1746f };
			uParam1->f_3 = 300.1688f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 19:
			*uParam1 = { 510.0929f, -241.3109f, 47.5251f };
			uParam1->f_3 = 159.3072f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 20:
			*uParam1 = { -1391.2991f, -123.1333f, 48.9688f };
			uParam1->f_3 = 4.0577f;
			uParam1->f_4 = 1;
			return 1;
			break;
		case 12:
			*uParam1 = { 136.4575f, -1301.642f, 28.2124f };
			uParam1->f_3 = 60.6745f;
			uParam1->f_4 = 8;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			uParam1->f_3 = 0f;
			uParam1->f_4 = 1;
			return 0;
			break;
	}
	return 0;
}

void func_917(var uParam0, var uParam1, var uParam2)//Position - 0x8FE9F
{
	int iVar0;
	struct<3> Var1;
	*uParam1 = { uParam0->f_53[0 /*3*/] };
	*uParam2 = { uParam0->f_53[0 /*3*/] };
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == 0)
		{
			Var1 = { uParam0->f_53[0 /*3*/] };
		}
		else if (iVar0 == 1)
		{
			Var1 = { uParam0->f_53[1 /*3*/] };
		}
		else if (iVar0 == 2)
		{
			Var1 = { uParam0->f_53[2 /*3*/] };
		}
		else if (iVar0 == 3)
		{
			Var1 = { uParam0->f_63[0 /*3*/] };
		}
		else if (iVar0 == 4)
		{
			Var1 = { uParam0->f_63[1 /*3*/] };
		}
		else if (iVar0 == 5)
		{
			Var1 = { uParam0->f_63[2 /*3*/] };
		}
		else if (iVar0 == 6)
		{
			Var1 = { uParam0->f_73[0 /*3*/] };
		}
		else if (iVar0 == 7)
		{
			Var1 = { uParam0->f_73[1 /*3*/] };
		}
		else if (iVar0 == 8)
		{
			Var1 = { uParam0->f_73[2 /*3*/] };
		}
		if (uParam0->f_44 == 0 || (iVar0 % 3) != 2)
		{
			if (Var1.f_0 < *uParam1)
			{
				*uParam1 = Var1.f_0;
			}
			if (Var1.f_1 < uParam1->f_1)
			{
				uParam1->f_1 = Var1.f_1;
			}
			if (Var1.f_2 < uParam1->f_2)
			{
				uParam1->f_2 = Var1.f_2;
			}
			if (Var1.f_0 > *uParam2)
			{
				*uParam2 = Var1.f_0;
			}
			if (Var1.f_1 > uParam2->f_1)
			{
				uParam2->f_1 = Var1.f_1;
			}
			if (Var1.f_2 > uParam2->f_2)
			{
				uParam2->f_2 = Var1.f_2;
			}
		}
		iVar0++;
	}
	*uParam1 = { *uParam1 - Vector(2.5f, 0.5f, 0.5f) };
	*uParam2 = { *uParam2 + Vector(2.5f, 0.5f, 0.5f) };
}

int func_918(float fParam0)//Position - 0x9004A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fParam0, 1, 1056964608, 0, 1, 0))
		{
			return 0;
		}
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			return 0;
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	}
	return 1;
}

int func_921(int iParam0, var uParam1)//Position - 0x902CB
{
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*6*/]) = { -1391.3512f, -582.5974f, 30.663f };
			(uParam1[0 /*6*/])->f_3 = { 0.5957f, 0f, -144.2531f };
			*(uParam1[1 /*6*/]) = { -1391.281f, -581.3097f, 31.7334f };
			(uParam1[1 /*6*/])->f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_32 = 39.9409f;
			uParam1->f_13 = { -1391.281f, -581.3097f, 31.7334f };
			uParam1->f_13.f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_33 = 39.9409f;
			uParam1->f_19[0 /*6*/] = { -1391.281f, -581.3097f, 31.7334f };
			uParam1->f_19[0 /*6*/].f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_19[1 /*6*/] = { -1392.1105f, -581.7819f, 30.0333f };
			uParam1->f_19[1 /*6*/].f_3 = { 6.5184f, 0f, -146.8236f };
			uParam1->f_34 = 39.9409f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6.25f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -1391.6658f, -583.7601f, 29.2301f };
			uParam1->f_53[1 /*3*/] = { -1388.3436f, -587.0388f, 29.2182f };
			uParam1->f_53[2 /*3*/] = { -1390.4368f, -583.8992f, 29.2238f };
			uParam1->f_63[0 /*3*/] = { -1392.9694f, -585.0537f, 29.2474f };
			uParam1->f_63[1 /*3*/] = { -1389.9476f, -586.8618f, 29.2263f };
			uParam1->f_63[2 /*3*/] = { -1391.2449f, -585.6469f, 29.2325f };
			uParam1->f_73[0 /*3*/] = { -1388.3442f, -583.0257f, 29.2097f };
			uParam1->f_73[1 /*3*/] = { -1387.8643f, -586.0078f, 29.2138f };
			uParam1->f_73[2 /*3*/] = { -1388.823f, -584.4099f, 29.216f };
			uParam1->f_46 = { -1394.7904f, -577.7897f, 29.2828f };
			uParam1->f_49 = { -1388.2317f, -587.291f, 38.4828f };
			uParam1->f_52 = 7.4f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 1:
			*(uParam1[0 /*6*/]) = { -259.9789f, 6286.261f, 31.6806f };
			(uParam1[0 /*6*/])->f_3 = { 1.7404f, 0f, 32.0027f };
			*(uParam1[1 /*6*/]) = { -260.7272f, 6283.5938f, 34.3499f };
			(uParam1[1 /*6*/])->f_3 = { 12.5339f, 0f, 13.1607f };
			uParam1->f_32 = 39.9699f;
			uParam1->f_13 = { -260.7272f, 6283.5938f, 34.3499f };
			uParam1->f_13.f_3 = { 12.5339f, 0f, 13.1607f };
			uParam1->f_33 = 39.9699f;
			uParam1->f_19[0 /*6*/] = { -257.0971f, 6298.8657f, 32.2329f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.4313f, 0f, 156.46f };
			uParam1->f_19[1 /*6*/] = { -255.0959f, 6296.0127f, 31.8561f };
			uParam1->f_19[1 /*6*/].f_3 = { 3.6231f, 0f, 140.3088f };
			uParam1->f_34 = 49.9655f;
			uParam1->f_35 = 4.5f;
			uParam1->f_36 = 6f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -262.3289f, 6286.172f, 30.4615f };
			uParam1->f_53[1 /*3*/] = { -262.2624f, 6291.064f, 30.4905f };
			uParam1->f_53[2 /*3*/] = { -260.3908f, 6289.659f, 30.4718f };
			uParam1->f_63[0 /*3*/] = { -263.8451f, 6286.9497f, 30.4752f };
			uParam1->f_63[1 /*3*/] = { -262.683f, 6290.633f, 30.49f };
			uParam1->f_63[2 /*3*/] = { -261.1694f, 6288.4624f, 30.469f };
			uParam1->f_73[0 /*3*/] = { -263.6732f, 6285.289f, 30.464f };
			uParam1->f_73[1 /*3*/] = { -261.9075f, 6292.0776f, 30.4943f };
			uParam1->f_73[2 /*3*/] = { -260.8339f, 6291.501f, 30.4857f };
			uParam1->f_46 = { -264.4563f, 6284.892f, 30.4666f };
			uParam1->f_49 = { -252.8467f, 6295.897f, 39.4666f };
			uParam1->f_52 = 13.2f;
			uParam1->f_37 = { -258.3154f, 6289.8125f, 31.883162f };
			uParam1->f_37.f_3 = { 2.278223f, -0.211094f, 96.083275f };
			uParam1->f_43 = 50.006855f;
			uParam1->f_45 = 1;
			return 1;
			break;
		case 2:
			*(uParam1[0 /*6*/]) = { 988.7534f, -105.37f, 75.0866f };
			(uParam1[0 /*6*/])->f_3 = { 1.7315f, 0f, 79.8844f };
			*(uParam1[1 /*6*/]) = { 990.1754f, -104.45258f, 77.38616f };
			(uParam1[1 /*6*/])->f_3 = { 15.288944f, 0f, 99.28104f };
			uParam1->f_32 = 39.2167f;
			uParam1->f_13 = { 990.1754f, -104.45258f, 77.38616f };
			uParam1->f_13.f_3 = { 15.288944f, 0f, 99.28104f };
			uParam1->f_33 = 39.2167f;
			uParam1->f_19[0 /*6*/] = { 990.1754f, -104.45258f, 77.38616f };
			uParam1->f_19[0 /*6*/].f_3 = { 15.288944f, 0f, 99.28104f };
			uParam1->f_19[1 /*6*/] = { 988.2397f, -108.0459f, 74.6292f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8744f, 0f, 65.974f };
			uParam1->f_34 = 39.2167f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 984.4031f, -107.614f, 73.3531f };
			uParam1->f_53[1 /*3*/] = { 981.8692f, -103.1675f, 73.8535f };
			uParam1->f_53[2 /*3*/] = { 984.304f, -106.5439f, 73.3531f };
			uParam1->f_63[0 /*3*/] = { 984.598f, -108.5928f, 73.3531f };
			uParam1->f_63[1 /*3*/] = { 981.6747f, -104.151f, 73.8535f };
			uParam1->f_63[2 /*3*/] = { 983.0098f, -106.4819f, 73.3531f };
			uParam1->f_73[0 /*3*/] = { 985.7677f, -107.4711f, 73.3531f };
			uParam1->f_73[1 /*3*/] = { 982.6229f, -102.9315f, 73.8535f };
			uParam1->f_73[2 /*3*/] = { 983.2742f, -103.8405f, 73.8535f };
			uParam1->f_46 = { 988.8345f, -110.7915f, 73.0401f };
			uParam1->f_49 = { 981.274f, -103.3357f, 82.7901f };
			uParam1->f_52 = 12.9f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 3:
			*(uParam1[0 /*6*/]) = { 250.298f, -1011.3746f, 28.8803f };
			(uParam1[0 /*6*/])->f_3 = { 9.4187f, 0f, -112.0547f };
			*(uParam1[1 /*6*/]) = { 250.1848f, -1011.1891f, 28.9707f };
			(uParam1[1 /*6*/])->f_3 = { 68.6477f, 0f, -125.9116f };
			uParam1->f_32 = 41.2174f;
			uParam1->f_13 = { 250.1848f, -1011.1891f, 28.9707f };
			uParam1->f_13.f_3 = { 68.6477f, 0f, -125.9116f };
			uParam1->f_33 = 41.2174f;
			uParam1->f_19[0 /*6*/] = { 250.5783f, -1019.1293f, 29.3398f };
			uParam1->f_19[0 /*6*/].f_3 = { 2.5216f, 0f, -25.583f };
			uParam1->f_19[1 /*6*/] = { 250.4407f, -1018.3758f, 29.3662f };
			uParam1->f_19[1 /*6*/].f_3 = { 2.5216f, 0f, -16.6002f };
			uParam1->f_34 = 50.0143f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6.5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 251.4444f, -1010.5997f, 28.2705f };
			uParam1->f_53[1 /*3*/] = { 255.0215f, -1013.0981f, 28.2704f };
			uParam1->f_53[2 /*3*/] = { 252.7474f, -1012.3459f, 28.2699f };
			uParam1->f_63[0 /*3*/] = { 250.1186f, -1013.4296f, 28.2671f };
			uParam1->f_63[1 /*3*/] = { 254.7028f, -1013.8532f, 28.2703f };
			uParam1->f_63[2 /*3*/] = { 251.1483f, -1012.7039f, 28.2685f };
			uParam1->f_73[0 /*3*/] = { 251.5051f, -1009.0486f, 28.2719f };
			uParam1->f_73[1 /*3*/] = { 255.8904f, -1012.5917f, 28.2714f };
			uParam1->f_73[2 /*3*/] = { 251.1808f, -1010.1984f, 28.2707f };
			uParam1->f_46 = { 252.6843f, -1007.8513f, 28.2784f };
			uParam1->f_49 = { 249.2258f, -1018.6283f, 32.5284f };
			uParam1->f_52 = 8.8f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 4:
			*(uParam1[0 /*6*/]) = { 499.1641f, -1542.4603f, 29.695f };
			(uParam1[0 /*6*/])->f_3 = { -1.8745f, 0f, 76.9106f };
			*(uParam1[1 /*6*/]) = { 501.6507f, -1541.1014f, 31.2484f };
			(uParam1[1 /*6*/])->f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_32 = 37.9427f;
			uParam1->f_13 = { 501.6507f, -1541.1014f, 31.2484f };
			uParam1->f_13.f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_33 = 37.9427f;
			uParam1->f_19[0 /*6*/] = { 501.6507f, -1541.1014f, 31.2484f };
			uParam1->f_19[0 /*6*/].f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_19[1 /*6*/] = { 501.2673f, -1539.4803f, 29.6989f };
			uParam1->f_19[1 /*6*/].f_3 = { -3.6143f, 0.0075f, 113.304f };
			uParam1->f_34 = 37.9427f;
			uParam1->f_35 = 5.5f;
			uParam1->f_36 = 6.75f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 499.1487f, -1540.3121f, 28.2512f };
			uParam1->f_53[1 /*3*/] = { 493.8625f, -1541.5378f, 28.2877f };
			uParam1->f_53[2 /*3*/] = { 496.6065f, -1542.5469f, 28.2572f };
			uParam1->f_63[0 /*3*/] = { 499.6836f, -1538.1771f, 28.2656f };
			uParam1->f_63[1 /*3*/] = { 495.8752f, -1540.6436f, 28.2805f };
			uParam1->f_63[2 /*3*/] = { 496.1659f, -1541.4502f, 28.2708f };
			uParam1->f_73[0 /*3*/] = { 499.701f, -1543.8729f, 28.1129f };
			uParam1->f_73[1 /*3*/] = { 494.0248f, -1542.4833f, 28.2833f };
			uParam1->f_73[2 /*3*/] = { 495.5604f, -1544.2053f, 28.2538f };
			uParam1->f_46 = { 492.2227f, -1547.434f, 28.2585f };
			uParam1->f_49 = { 500.1553f, -1537.77f, 35.2585f };
			uParam1->f_52 = 14f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 5:
			*(uParam1[0 /*6*/]) = { -138.1448f, 6379.6206f, 33.59f };
			(uParam1[0 /*6*/])->f_3 = { -12.7782f, 0f, -106.0116f };
			*(uParam1[1 /*6*/]) = { -138.6336f, 6380.503f, 34.4018f };
			(uParam1[1 /*6*/])->f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { -138.6336f, 6380.503f, 34.4018f };
			uParam1->f_13.f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { -138.6336f, 6380.503f, 34.4018f };
			uParam1->f_19[0 /*6*/].f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_19[1 /*6*/] = { -139.2361f, 6381.063f, 31.9137f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8374f, 0f, -107.1374f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5.25f;
			uParam1->f_36 = 6.5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -136.33f, 6380.167f, 30.5513f };
			uParam1->f_53[1 /*3*/] = { -132.3319f, 6376.8076f, 31.18f };
			uParam1->f_53[2 /*3*/] = { -135.7501f, 6379.6777f, 30.6291f };
			uParam1->f_63[0 /*3*/] = { -137.1064f, 6379.521f, 30.5464f };
			uParam1->f_63[1 /*3*/] = { -133.3788f, 6376.069f, 31.18f };
			uParam1->f_63[2 /*3*/] = { -135.8515f, 6378.645f, 30.6931f };
			uParam1->f_73[0 /*3*/] = { -136.2626f, 6382.05f, 30.5032f };
			uParam1->f_73[1 /*3*/] = { -132.1531f, 6377.452f, 31.18f };
			uParam1->f_73[2 /*3*/] = { -133.3998f, 6379.0327f, 30.8417f };
			uParam1->f_46 = { -141.2375f, 6383.4414f, 30.5265f };
			uParam1->f_49 = { -133.2909f, 6375.6445f, 36.5765f };
			uParam1->f_52 = 8.1f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 6:
			*(uParam1[0 /*6*/]) = { 228.6531f, 306.2192f, 106.3708f };
			(uParam1[0 /*6*/])->f_3 = { -5.0435f, 0.2052f, 109.1608f };
			*(uParam1[1 /*6*/]) = { 229.2501f, 305.8874f, 107.8613f };
			(uParam1[1 /*6*/])->f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_32 = 49.9886f;
			uParam1->f_13 = { 229.2501f, 305.8874f, 107.8613f };
			uParam1->f_13.f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_33 = 49.9886f;
			uParam1->f_19[0 /*6*/] = { 229.2501f, 305.8874f, 107.8613f };
			uParam1->f_19[0 /*6*/].f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_19[1 /*6*/] = { 228.8797f, 305.0008f, 106.0803f };
			uParam1->f_19[1 /*6*/].f_3 = { -7.3693f, 0.2052f, 137.621f };
			uParam1->f_34 = 49.9886f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 227.038f, 302.324f, 104.534f };
			uParam1->f_53[1 /*3*/] = { 221.2218f, 304.1971f, 104.5653f };
			uParam1->f_53[2 /*3*/] = { 227.038f, 302.324f, 104.534f };
			uParam1->f_63[0 /*3*/] = { 228.5144f, 302.3003f, 104.3811f };
			uParam1->f_63[1 /*3*/] = { 219.9782f, 305.6431f, 104.5847f };
			uParam1->f_63[2 /*3*/] = { 224.1672f, 302.8337f, 104.5366f };
			uParam1->f_73[0 /*3*/] = { 227.6132f, 301.1576f, 104.5328f };
			uParam1->f_73[1 /*3*/] = { 220.1857f, 303.6531f, 104.5743f };
			uParam1->f_73[2 /*3*/] = { 222.3438f, 302.954f, 104.5386f };
			uParam1->f_46 = { 230.5813f, 304.3873f, 104.4136f };
			uParam1->f_49 = { 220.4306f, 307.9557f, 112.5136f };
			uParam1->f_52 = 12.5f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 7:
			*(uParam1[0 /*6*/]) = { 405.9127f, -711.7676f, 31.2618f };
			(uParam1[0 /*6*/])->f_3 = { 19.919f, 0f, 90.3396f };
			*(uParam1[1 /*6*/]) = { 405.4205f, -711.784f, 29.3979f };
			(uParam1[1 /*6*/])->f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_13.f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_19[1 /*6*/] = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_19[1 /*6*/].f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { 393.142f, -713.4531f, 28.2855f };
			uParam1->f_53[1 /*3*/] = { 397.1506f, -714.0617f, 28.2857f };
			uParam1->f_53[2 /*3*/] = { 399.4089f, -714.5928f, 28.2858f };
			uParam1->f_63[0 /*3*/] = { 394.7705f, -712.7902f, 28.2853f };
			uParam1->f_63[1 /*3*/] = { 397.9654f, -713.1153f, 28.2854f };
			uParam1->f_63[2 /*3*/] = { 398.8918f, -713.4561f, 28.2855f };
			uParam1->f_73[0 /*3*/] = { 395.3366f, -714.9562f, 28.2859f };
			uParam1->f_73[1 /*3*/] = { 397.7031f, -715.1816f, 28.286f };
			uParam1->f_73[2 /*3*/] = { 398.9623f, -715.4068f, 28.286f };
			uParam1->f_46 = { 392.7992f, -712.5184f, 28.2852f };
			uParam1->f_49 = { 411.5248f, -712.1509f, 32.5352f };
			uParam1->f_52 = 9.2f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 8:
			*(uParam1[0 /*6*/]) = { -1405.7139f, -195.728f, 54.0098f };
			(uParam1[0 /*6*/])->f_3 = { -4.2783f, 0f, 121.8633f };
			*(uParam1[1 /*6*/]) = { -1407.5447f, -194.7853f, 47.9021f };
			(uParam1[1 /*6*/])->f_3 = { 4.3037f, 0f, 134.3144f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { -1407.5447f, -194.7853f, 47.9021f };
			uParam1->f_13.f_3 = { 4.3037f, 0f, 134.3144f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 989.1804f, -103.8445f, 78.8565f };
			uParam1->f_19[0 /*6*/].f_3 = { 2.7704f, 0f, 103.6486f };
			uParam1->f_19[1 /*6*/] = { 988.2397f, -108.0459f, 74.6292f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8744f, 0f, 65.974f };
			uParam1->f_34 = 39.2167f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { -1417.2899f, -203.6409f, 45.5004f };
			uParam1->f_53[1 /*3*/] = { -1412.4402f, -199.2623f, 46.2752f };
			uParam1->f_53[2 /*3*/] = { -1403.62f, -162.356f, 46.5711f };
			uParam1->f_63[0 /*3*/] = { -1416.8081f, -201.9135f, 46.1048f };
			uParam1->f_63[1 /*3*/] = { -1412.8599f, -197.2908f, 46.2686f };
			uParam1->f_63[2 /*3*/] = { -1404.78f, -163.073f, 46.5422f };
			uParam1->f_73[0 /*3*/] = { -1419.2917f, -202.7134f, 45.5004f };
			uParam1->f_73[1 /*3*/] = { -1414.3977f, -198.1992f, 46.2804f };
			uParam1->f_73[2 /*3*/] = { -1411.0284f, -198.9657f, 46.2444f };
			uParam1->f_46 = { -1426.3295f, -215.1618f, 45.5004f };
			uParam1->f_49 = { -1404.3307f, -192.3439f, 51.2004f };
			uParam1->f_52 = 9.6f;
			uParam1->f_45 = 0;
			return 1;
			break;
		case 9:
			*(uParam1[0 /*6*/]) = { 293.481f, 195.6959f, 105.3287f };
			(uParam1[0 /*6*/])->f_3 = { 28.8303f, 0f, -42.0262f };
			*(uParam1[1 /*6*/]) = { 293.481f, 195.6959f, 105.3287f };
			(uParam1[1 /*6*/])->f_3 = { 7.0245f, 0f, -60.5823f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { 320.8777f, 167.7101f, 104.4684f };
			uParam1->f_13.f_3 = { 6.111f, 0f, -66.0239f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 323.4883f, 156.7916f, 103.6546f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.5771f, 0f, -38.892f };
			uParam1->f_19[1 /*6*/] = { 323.4883f, 156.7916f, 103.6546f };
			uParam1->f_19[1 /*6*/].f_3 = { 5.5771f, 0f, -38.892f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { 300.1136f, 202.9304f, 103.3684f };
			uParam1->f_53[1 /*3*/] = { 298.376f, 199.1103f, 103.3446f };
			uParam1->f_53[2 /*3*/] = { 337.552f, 166.9108f, 102.3808f };
			uParam1->f_63[0 /*3*/] = { 301.1823f, 202.7771f, 103.3837f };
			uParam1->f_63[1 /*3*/] = { 299.3044f, 198.6458f, 103.3357f };
			uParam1->f_63[2 /*3*/] = { 238.395f, 299.476f, 104.589f };
			uParam1->f_73[0 /*3*/] = { 299.5274f, 203.6378f, 103.3739f };
			uParam1->f_73[1 /*3*/] = { 297.01f, 198.748f, 103.3481f };
			uParam1->f_73[2 /*3*/] = { 238.394f, 299.476f, 104.589f };
			uParam1->f_46 = { 336.7123f, 180.7974f, 102.009f };
			uParam1->f_49 = { 313.8644f, 161.0981f, 106.609f };
			uParam1->f_52 = 10.7f;
			uParam1->f_45 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_922()//Position - 0x9187A
{
	func_923(2);
}

void func_923(int iParam0)//Position - 0x91887
{
	if (Local_49.f_0 != iParam0)
	{
		Local_49.f_0 = iParam0;
		Local_49.f_2 = 1;
		Local_49.f_257 = 0;
	}
}

int func_924()//Position - 0x918A5
{
	struct<74> Var0;
	Var0 = 2;
	Var0.f_19 = 2;
	Var0.f_53 = 3;
	Var0.f_63 = 3;
	Var0.f_73 = 3;
	func_921(Global_96268, &Var0);
	if (func_889(Global_96268, &Var0, &(Local_49.f_257), Local_49.f_56.f_7, Local_49.f_109.f_7, &(Local_49.f_259)))
	{
		return 1;
	}
	return 0;
}

void func_925()//Position - 0x918FF
{
	Global_43052 = 6;
	if (__LIB_0__::func_516(&(Local_49.f_703.f_7)) && __LIB_0__::func_515(&(Local_49.f_703.f_7)))
	{
		__LIB_28__::func_364(&(Local_49.f_703.f_7));
	}
	__LIB_6__::func_892(&(Local_49.f_703.f_10));
	func_447(&(Local_49.f_703));
	if (Global_96268 == 21)
	{
		func_447(&(Local_49.f_703));
		func_457(&(Local_49.f_703), 17, 145, 69);
		func_923(2);
	}
	else
	{
		func_393(&(Local_49.f_636), Global_96177[Global_96268 /*2*/].f_1);
		func_393(&(Local_49.f_638), Global_96268);
		Local_49.f_640++;
		if (Local_49.f_640 >= 4 && Global_96268 != 12)
		{
			Local_49.f_641 = 1;
		}
		if (((Global_96269 == 0 || Global_96269 == 1) || Global_96269 == 3) || Global_96269 == 4)
		{
			if (Local_49.f_640 < 4)
			{
				if (Local_49.f_56 != 0)
				{
					func_419(Local_49.f_3.f_1, Local_49.f_56.f_1, 7);
				}
				if (Local_49.f_109 != 0)
				{
					func_419(Local_49.f_3.f_1, Local_49.f_109.f_1, 7);
				}
			}
		}
		switch (Global_96177[Global_96268 /*2*/].f_1)
		{
			case 5:
				__LIB_24__::func_943(312, 0, 0);
				break;
			case 4:
				__LIB_24__::func_943(313, 0, 0);
				break;
			case 3:
				__LIB_24__::func_943(314, 0, 0);
				break;
			case 0:
				__LIB_24__::func_943(315, 0, 0);
				break;
			case 2:
				__LIB_24__::func_943(316, 0, 0);
				break;
			case 1:
				__LIB_24__::func_943(317, 0, 0);
				break;
		}
		if ((((Global_96268 < 22 && Global_96177[Global_96268 /*2*/].f_1 != 2) && Global_96177[Global_96268 /*2*/].f_1 != 0) && Global_96177[Global_96268 /*2*/].f_1 != 5) && Global_96177[Global_96268 /*2*/].f_1 != 1)
		{
			func_915(Local_49.f_252, Global_96268, 0, 0, 0);
		}
		if (Global_96268 < 22 && Global_96177[Global_96268 /*2*/].f_1 == 4)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 10)
			{
				func_923(8);
			}
			else
			{
				func_923(4);
			}
		}
		else
		{
			if (Global_96269 == 5)
			{
				func_836(&(Local_49.f_56), 0);
				func_932(&(Local_49.f_109), 0);
			}
			else if (Global_96269 == 6)
			{
				func_836(&(Local_49.f_109), 0);
				func_932(&(Local_49.f_56), 0);
			}
			else if (Global_96269 == 7)
			{
				func_836(&(Local_49.f_56), 0);
				func_836(&(Local_49.f_109), 0);
			}
			else if (Global_96268 == 12)
			{
				func_926(&(Local_49.f_56), 1);
				func_926(&(Local_49.f_109), 1);
			}
			func_514(&(Local_49.f_3), &(Local_49.f_259), 1);
			func_514(&(Local_49.f_56), &(Local_49.f_259), 0);
			func_514(&(Local_49.f_109), &(Local_49.f_259), 0);
			func_923(2);
		}
	}
}

void func_926(var uParam0, int iParam1)//Position - 0x91BE0
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (*uParam0 != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if ((((iParam1 == 1 || *uParam0 == 5) || *uParam0 == 6) || *uParam0 == 3) || *uParam0 == 11)
			{
				bVar0 = true;
			}
			else
			{
				iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(121.9946f, -1292.5457f, 29.2792f);
				if (iVar1 != 0)
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_7) == iVar1)
					{
						bVar0 = true;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_10) && HUD::GET_BLIP_FROM_ENTITY(uParam0->f_7) == 0)
		{
			func_928(uParam0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		func_927(uParam0);
	}
}

void func_927(var uParam0)//Position - 0x91C9E
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_928(var uParam0)//Position - 0x91CB9
{
	if (*uParam0 == 0)
	{
	}
	else if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		uParam0->f_10 = __LIB_6__::func_850(uParam0->f_7, 0, 145);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uParam0->f_10, true);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, &(uParam0->f_3));
		}
		return uParam0->f_10;
	}
	return 0;
}

void func_932(var uParam0, int iParam1)//Position - 0x91E13
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			func_49(uParam0, 2, iParam1);
			__LIB_1__::func_0(uParam0, 14);
		}
	}
}

int func_936()//Position - 0x92429
{
	if (Global_96267 != 23)
	{
		if (!__LIB_0__::func_39(7))
		{
			Global_43052 = 7;
		}
		if (__LIB_0__::func_516(&(Local_49.f_703.f_7)) && !__LIB_0__::func_515(&(Local_49.f_703.f_7)))
		{
			__LIB_21__::func_175(&(Local_49.f_703.f_7));
		}
		if (Local_49.f_625 == 0)
		{
			if (((((((((Global_96267 == 12 || Global_96267 == 11) || Global_96267 == 13) || Global_96267 == 14) || Global_96267 == 15) || Global_96267 == 16) || Global_96267 == 17) || Global_96267 == 18) || Global_96267 == 19) || Global_96267 == 20)
			{
				if (func_915(Local_49.f_252, Global_96267, 1, 1, 0))
				{
					Local_49.f_625 = 1;
				}
			}
		}
		return 0;
	}
	return 1;
}

void func_937()//Position - 0x92516
{
	int iVar0;
	bool bVar1;
	int iVar2;
	func_880();
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		func_300();
		func_299(4);
		return;
	}
	else if (__LIB_0__::func_134())
	{
		func_300();
		if (__LIB_0__::func_204())
		{
			func_299(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_300();
		func_299(0);
	}
	else if (__LIB_0__::func_39(2))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		func_300();
		func_457(&(Local_49.f_703), 5, 145, 69);
		__LIB_5__::func_951(&(Local_49.f_703), 18);
		Local_49.f_629 = 145;
		Local_49.f_630 = 145;
		func_877(0, 48, 1);
		func_923(6);
	}
	else if (__LIB_0__::func_39(18))
	{
		func_300();
		func_1007();
		func_299(1);
	}
	else if ((__LIB_6__::func_854(6) && !__LIB_0__::func_39(6)) && !__LIB_0__::func_39(7))
	{
		func_300();
		func_877(0, 48, 0);
		func_299(1);
	}
	else if (Global_96267 != 23)
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (Global_96267 < 22)
		{
			iVar0 = Global_96177[Global_96267 /*2*/].f_1;
			if (((iVar0 == 5 || iVar0 == 0) || iVar0 == 2) || iVar0 == 6)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
			}
			else
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
		}
		else
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		}
		func_300();
		func_923(3);
	}
	else if (func_1004())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		func_300();
		func_923(5);
	}
	else if (func_1002())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		func_300();
		func_923(7);
		return;
	}
	else if (!func_999(&(Local_49.f_256)))
	{
		__LIB_0__::func_186();
		return;
	}
	else if (func_876())
	{
		bVar1 = func_957(1);
		func_491();
		func_458();
		func_309(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
		}
		if (Global_77137.f_577 == 1)
		{
			if (Local_49.f_252 != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_49.f_252))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_49.f_252, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49.f_252));
					}
					Local_49.f_252 = 0;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (Local_49.f_252 != iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_49.f_252))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_49.f_252, false))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49.f_252));
						}
						Local_49.f_252 = 0;
					}
					Local_49.f_252 = iVar2;
					if (Local_49.f_56 != 0)
					{
						if (__LIB_12__::func_181(iVar2, Local_49.f_56.f_1, 0))
						{
							Local_49.f_56.f_8 = iVar2;
						}
					}
					if (Local_49.f_109 != 0)
					{
						if (__LIB_12__::func_181(iVar2, Local_49.f_109.f_1, 0))
						{
							Local_49.f_109.f_8 = iVar2;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_49.f_252))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_49.f_252, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49.f_252, true, true);
				}
			}
		}
		func_954();
		if (Local_49.f_619 == 0)
		{
			if (func_396(&(Local_49.f_638), 12))
			{
				if (func_398(PLAYER::PLAYER_PED_ID(), __LIB_11__::func_156(94, 0), 200f))
				{
					if ((PED::IS_PED_INJURED(Local_49.f_56.f_7) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_49.f_56.f_7) == 0) && (PED::IS_PED_INJURED(Local_49.f_109.f_7) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_49.f_109.f_7) == 0))
					{
						__LIB_9__::func_989(0, 9, 0);
						Local_49.f_619 = 1;
					}
				}
			}
		}
		if (!func_308())
		{
			func_300();
			if (func_306())
			{
				func_299(6);
			}
		}
		else if (((Local_49.f_56 == 3 || Local_49.f_56 == 11) || Local_49.f_56 == 6) || ((Local_49.f_109 == 3 || Local_49.f_109 == 11) || Local_49.f_109 == 6))
		{
			func_950();
		}
		else
		{
			func_938(bVar1);
		}
	}
}

void func_938(bool bParam0)//Position - 0x928E0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	bVar2 = false;
	if (Local_49.f_258 != 5)
	{
		func_300();
		Local_49.f_258 = 5;
		if (Local_49.f_640 > 0)
		{
			Var3 = { Local_49.f_645 };
			func_949(Local_49.f_644, &Var3);
			Local_49.f_648 = __LIB_0__::func_392(Var3, 0);
			Local_49.f_652 = 0;
			if (HUD::DOES_BLIP_EXIST(Local_49.f_648))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_49.f_648, "FR_DROPBLIP" /* GXT: Friend Drop Off */);
			}
		}
		bParam0 = true;
		bVar2 = true;
	}
	else if (bParam0)
	{
		bVar2 = true;
	}
	if (Global_113386.f_18103.f_401 == 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Global_113386.f_18103.f_401 = 1;
			__LIB_0__::func_151("FR_H_ACTIV1", -1);
		}
	}
	else if (Global_113386.f_18103.f_402 == 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Global_113386.f_18103.f_402 = 1;
			__LIB_0__::func_151("FR_H_ACTIV2", -1);
		}
	}
	else if (Global_113386.f_18103.f_403 == 0)
	{
		if (Local_49.f_640 > 0)
		{
			Global_113386.f_18103.f_403 = 1;
			if (Local_49.f_109 == 0)
			{
				if (Local_49.f_56.f_1 != 17)
				{
					__LIB_4__::func_936("FR_H_DROPOFF0", &(Local_49.f_56.f_3), -1);
				}
				else
				{
					__LIB_4__::func_936("FR_H_DROPOFF1", &(Local_49.f_56.f_3), -1);
				}
			}
			else
			{
				__LIB_0__::func_151("FR_H_DROPOFF2", -1);
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_49.f_648))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Local_49.f_652 == 0)
			{
				iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((PED::IS_PED_INJURED(Local_49.f_56.f_7) || PED::IS_PED_IN_VEHICLE(Local_49.f_56.f_7, iVar4, false)) && (PED::IS_PED_INJURED(Local_49.f_109.f_7) || PED::IS_PED_IN_VEHICLE(Local_49.f_109.f_7, iVar4, false)))
				{
					HUD::SET_BLIP_ROUTE(Local_49.f_648, true);
					Local_49.f_652 = 1;
				}
			}
		}
		else if (Local_49.f_652 == 1)
		{
			HUD::SET_BLIP_ROUTE(Local_49.f_648, false);
			Local_49.f_652 = 0;
		}
	}
	iVar5 = func_947();
	iVar6 = func_946();
	if (!bParam0)
	{
		if (!Local_49.f_641)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (Local_49.f_616 != iVar5 || Local_49.f_617 != iVar6)
				{
					bParam0 = true;
					bVar2 = true;
				}
			}
		}
	}
	if (bParam0)
	{
		__LIB_14__::func_317(&(Local_49.f_631));
		Local_49.f_633 = 0;
		iVar0 = 0;
		while (iVar0 < 22)
		{
			iVar1 = Global_96177[iVar0 /*2*/];
			if (!Local_49.f_641 && func_942(iVar0, Local_49.f_3.f_1, Local_49.f_56.f_1, Local_49.f_109.f_1, Local_49.f_636, Local_49.f_638, Local_49.f_644, iVar5, iVar6, bVar2))
			{
				__LIB_10__::func_604(iVar1, 1, 0);
				__LIB_24__::func_742(iVar1, 0);
				__LIB_29__::func_873(iVar1, 5);
				if (!func_396(&(Local_49.f_631), Global_96177[iVar0 /*2*/].f_1))
				{
					func_393(&(Local_49.f_631), Global_96177[iVar0 /*2*/].f_1);
					Local_49.f_633++;
				}
			}
			else
			{
				__LIB_10__::func_604(iVar1, 0, 0);
			}
			iVar0++;
		}
		Local_49.f_616 = iVar5;
		Local_49.f_617 = iVar6;
	}
	iVar7 = Local_49.f_642;
	fVar8 = (99999f * 99999f);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_96177[iVar0 /*2*/];
		if (BitTest(Global_32338[iVar1 /*23*/].f_11, 0))
		{
			fVar9 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_11__::func_156(Global_96177[iVar0 /*2*/], 0));
			if (fVar8 > fVar9)
			{
				iVar7 = iVar0;
				fVar8 = fVar9;
			}
		}
		iVar0++;
	}
	if (Local_49.f_642 != iVar7)
	{
		Local_49.f_642 = iVar7;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_96177[iVar0 /*2*/];
		if (BitTest(Global_32338[iVar1 /*23*/].f_11, 0))
		{
			if (iVar0 == Local_49.f_642)
			{
				if (!BitTest(Global_32338[iVar1 /*23*/].f_11, 6))
				{
					__LIB_11__::func_500(iVar1, 1, 0);
				}
			}
			else if (BitTest(Global_32338[iVar1 /*23*/].f_11, 6))
			{
				__LIB_11__::func_500(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	func_926(&(Local_49.f_56), 0);
	func_926(&(Local_49.f_109), 0);
}

int func_942(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x92E49
{
	struct<3> Var0;
	bool bVar1;
	if (iParam0 >= 22)
	{
		return 0;
	}
	if (iParam0 == 21)
	{
		if (bParam11)
		{
		}
		return 0;
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 4)
	{
		if (iParam9 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 0)
	{
		if (iParam10 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (func_944(iParam1, 12) || func_944(iParam1, 13))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 16)
	{
		if ((((((((func_944(iParam1, 14) || func_944(iParam1, 17)) || func_944(iParam1, 18)) || func_944(iParam1, 19)) || func_944(iParam1, 20)) || func_944(iParam1, 21)) || func_944(iParam1, 22)) || func_944(iParam1, 46)) || func_944(iParam1, 62))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 9)
	{
		if (func_944(iParam1, 49))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 12)
	{
		if (((func_944(iParam1, 76) || func_944(iParam1, 77)) || func_944(iParam1, 84)) || func_944(iParam1, 85))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 13)
	{
		if (((func_944(iParam1, 71) || func_944(iParam1, 74)) || func_944(iParam1, 75)) || func_944(iParam1, 65))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 != 5)
	{
		if (func_396(&uParam4, Global_96177[iParam0 /*2*/].f_1))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	else if (func_396(&uParam6, iParam0))
	{
		if (bParam11)
		{
		}
		return 0;
	}
	if (iParam8 == 17)
	{
		if (iParam0 == 3)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam8 == 20)
	{
		if (iParam0 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam8 == 7)
	{
		if (iParam0 == 12)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 3 || Global_96177[iParam0 /*2*/].f_1 == 1)
	{
		if (iParam2 != 145 && iParam3 != 145)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 16)
	{
		if ((iParam1 != 0 && iParam2 != 0) && iParam3 != 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 != 5 && Global_96177[iParam0 /*2*/].f_1 != 1)
	{
		if (iParam2 == 17)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 1)
	{
		if ((iParam1 == 1 || iParam2 == 1) || iParam3 == 1)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 1)
	{
		if ((iParam1 == 19 || iParam2 == 19) || iParam3 == 19)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 0)
	{
		if (((((iParam1 == 14 || iParam1 == 19) || iParam2 == 14) || iParam2 == 19) || iParam3 == 14) || iParam3 == 19)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_96177[iParam0 /*2*/].f_1 == 5 || Global_96177[iParam0 /*2*/].f_1 == 2)
	{
		if ((iParam1 == 0 || iParam1 == 2) && iParam2 == 14)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 2)
	{
		if ((iParam1 == 2 || iParam2 == 2) || iParam3 == 2)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (__LIB_0__::func_368(130) && !__LIB_0__::func_368(131))
	{
		if (((iParam1 != 1 && iParam1 != 19) || ((iParam2 != 1 && iParam2 != 19) && iParam2 != 145)) || ((iParam3 != 1 && iParam3 != 19) && iParam3 != 145))
		{
			Var0 = { __LIB_11__::func_156(Global_96177[iParam0 /*2*/], 0) };
			if (__LIB_13__::func_208(Var0))
			{
				if (bParam11)
				{
				}
				return 0;
			}
		}
	}
	if (!__LIB_0__::func_368(73))
	{
		if (iParam0 == 10)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_113386.f_9085)
	{
		bVar1 = false;
		switch (Global_96177[iParam0 /*2*/].f_1)
		{
			case 0:
				bVar1 = __LIB_0__::func_573(0, 2);
				break;
			case 1:
				bVar1 = __LIB_0__::func_573(0, 13);
				break;
			case 2:
				bVar1 = __LIB_0__::func_573(0, 9);
				break;
			case 3:
				bVar1 = __LIB_0__::func_573(0, 1);
				break;
			case 4:
				bVar1 = __LIB_0__::func_368(53);
				break;
			case 5:
				bVar1 = true;
				break;
			default:
				if (bParam11)
				{
				}
				return 0;
				break;
		}
		if (!bVar1)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (bParam11)
	{
	}
	return 1;
}

int func_944(int iParam0, int iParam1)//Position - 0x933CE
{
	if (__LIB_8__::func_915(iParam1))
	{
		if (__LIB_0__::func_517(Global_91229[iParam1 /*34*/].f_11, __LIB_11__::func_913(iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_946()//Position - 0x93463
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_37__::func_609();
	iVar1 = __LIB_0__::func_196(iVar0);
	if (iVar1 >= 6 && iVar1 < 18)
	{
		return 1;
	}
	return 0;
}

int func_947()//Position - 0x9348F
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_37__::func_609();
	iVar1 = __LIB_0__::func_196(iVar0);
	if (iVar1 >= 10 && iVar1 <= 22)
	{
		return 1;
	}
	return 0;
}

int func_949(int iParam0, var uParam1)//Position - 0x934E8
{
	struct<151> Var0;
	Var0 = 6;
	Var0.f_112 = 2;
	Var0.f_140 = 3;
	Var0.f_150 = 3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 != 25)
		{
			if (func_292(iParam0, &Var0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					*uParam1 = { Var0.f_105 };
				}
				else
				{
					*uParam1 = { Var0.f_109 };
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_950()//Position - 0x9354F
{
	int iVar0;
	if (Local_49.f_258 == 4)
	{
		iVar0 = 4;
	}
	else if (((Local_49.f_56 == 3 || Local_49.f_56 == 11) || Local_49.f_56 == 6) && ((Local_49.f_109 == 3 || Local_49.f_109 == 11) || Local_49.f_109 == 6))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 3;
	}
	if (Local_49.f_258 != iVar0)
	{
		func_300();
		if (iVar0 == 3)
		{
			if ((Local_49.f_56 == 3 || Local_49.f_56 == 11) || Local_49.f_56 == 6)
			{
				__LIB_0__::func_446("FR_GETBACK", &(Local_49.f_56.f_3), 7500, 0);
			}
			else if ((Local_49.f_109 == 3 || Local_49.f_109 == 11) || Local_49.f_109 == 6)
			{
				__LIB_0__::func_446("FR_GETBACK", &(Local_49.f_109.f_3), 7500, 0);
			}
		}
		else
		{
			__LIB_0__::func_210("FR_GETBACK2", 7500, 0);
		}
		Local_49.f_258 = iVar0;
	}
	func_926(&(Local_49.f_56), 0);
	func_926(&(Local_49.f_109), 0);
}

void func_954()//Position - 0x93713
{
	int iVar0;
	iVar0 = 1;
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
	{
		iVar0 = 2;
	}
	else if (Local_49.f_56.f_1 == 14 || Local_49.f_56.f_1 == 17)
	{
		if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f) > 0)
		{
			iVar0 = 3;
		}
	}
	if (Local_49.f_621 != iVar0)
	{
		if (PED::DOES_GROUP_EXIST(__LIB_0__::func_399()))
		{
			Local_49.f_621 = iVar0;
			if (iVar0 == 1)
			{
				PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
				PED::RESET_GROUP_FORMATION_DEFAULT_SPACING(__LIB_0__::func_399());
			}
			else if (iVar0 == 2)
			{
				PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 0);
				PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 1.5f, -1f, -1f);
			}
			else if (iVar0 == 3)
			{
				PED::SET_GROUP_FORMATION(__LIB_0__::func_399(), 1);
				PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_399(), 6.5f, -1f, -1f);
			}
			else
			{
				Local_49.f_621 = 0;
			}
		}
		else
		{
			Local_49.f_621 = 0;
		}
	}
}

int func_957(bool bParam0)//Position - 0x938CF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!func_468())
	{
		if (func_997(&iVar0) > 0)
		{
			if (func_995(iVar0, &iVar1))
			{
				bVar2 = false;
				if (__LIB_24__::func_732(iVar0) == 3)
				{
					bVar2 = true;
				}
				if (bVar2)
				{
					bVar3 = false;
					if (Local_49.f_56 == 1)
					{
						func_5(&(Local_49.f_56), 2, 0);
						bVar3 = true;
					}
					if (Local_49.f_109 == 1)
					{
						func_5(&(Local_49.f_109), 2, 0);
						bVar3 = true;
					}
					if (bVar3)
					{
						func_459(1);
					}
				}
				else if (bParam0)
				{
					__LIB_12__::func_295(iVar0, 0);
					return 0;
				}
				if (Local_49.f_56 == 0)
				{
					iVar4 = func_983(Local_49.f_3.f_1, iVar1, 1, Local_49.f_109.f_2);
					if (func_979(iVar0, 0))
					{
						if (func_972(&(Local_49.f_56), iVar1, iVar4, 0, bVar2))
						{
							func_958(Local_49.f_56.f_1, Local_49.f_3.f_1);
							func_958(Local_49.f_56.f_1, Local_49.f_109.f_1);
							return 1;
						}
					}
				}
				else if (Local_49.f_109 == 0)
				{
					iVar5 = func_983(Local_49.f_3.f_1, iVar1, 1, Local_49.f_56.f_2);
					if (func_979(iVar0, 0))
					{
						if (func_972(&(Local_49.f_109), iVar1, iVar5, 1, bVar2))
						{
							func_958(Local_49.f_109.f_1, Local_49.f_3.f_1);
							func_958(Local_49.f_109.f_1, Local_49.f_56.f_1);
							return 1;
						}
					}
				}
			}
			__LIB_12__::func_295(iVar0, 0);
			return 0;
		}
	}
	return 0;
}

void func_958(int iParam0, int iParam1)//Position - 0x93A20
{
	if (iParam0 != 145 && iParam1 != 145)
	{
		if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
		{
			func_959(joaat("TEXT_FRIEND"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_MICHAEL"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_FRANKLIN"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_TREVOR"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_LAMAR"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_JIMMY"), iParam0, iParam1);
			func_959(joaat("TEXT_FRIEND_GRIEF_AMANDA"), iParam0, iParam1);
		}
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			func_959(joaat("TEXT_FRIEND"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_MICHAEL"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_FRANKLIN"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_TREVOR"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_LAMAR"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_JIMMY"), iParam1, iParam0);
			func_959(joaat("TEXT_FRIEND_GRIEF_AMANDA"), iParam1, iParam0);
		}
	}
}

int func_959(int iParam0, int iParam1, int iParam2)//Position - 0x93B34
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_43(iParam1))
	{
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if ((Global_113386.f_7688[iVar0 /*15*/] == iParam0 && Global_113386.f_7688[iVar0 /*15*/].f_6 == iParam2) && BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, iParam1))
		{
			if (Global_43599 != iVar0)
			{
				__LIB_19__::func_912(iVar0);
				__LIB_32__::func_719(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if ((Global_113386.f_7688.f_137[iVar0 /*15*/] == iParam0 && Global_113386.f_7688.f_137[iVar0 /*15*/].f_6 == iParam2) && BitTest(Global_113386.f_7688.f_137[iVar0 /*15*/].f_2, iParam1))
		{
			__LIB_32__::func_719(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if ((Global_113386.f_7688.f_199[iVar0 /*15*/] == iParam0 && Global_113386.f_7688.f_199[iVar0 /*15*/].f_6 == iParam2) && BitTest(Global_113386.f_7688.f_199[iVar0 /*15*/].f_2, iParam1))
		{
			__LIB_9__::func_775(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if ((Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0 && Global_113386.f_7688.f_651[iVar0 /*14*/].f_6 == iParam2) && BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_2, iParam1))
		{
			__LIB_20__::func_660(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if ((Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0 && Global_113386.f_7688.f_765[iVar0 /*10*/].f_6 == iParam2) && BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_2, iParam1))
		{
			__LIB_9__::func_774(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_972(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x942AE
{
	int iVar0;
	struct<82> Var1;
	if (iParam1 == 145)
	{
	}
	else
	{
		iVar0 = __LIB_20__::func_260(iParam1);
		if (iVar0 >= 6)
		{
		}
		else
		{
			__LIB_1__::func_0(uParam0, 1);
			uParam0->f_1 = iParam1;
			uParam0->f_2 = iParam2;
			uParam0->f_3 = { __LIB_0__::func_165(iParam1) };
			__LIB_6__::func_892(&(uParam0->f_15));
			if (iParam2 < 24)
			{
				func_978(uParam0, iParam3);
				func_976(uParam0);
				if (((iParam2 == 2 || iParam2 == 5) || iParam2 == 22) || iParam2 == 23)
				{
					Local_49.f_653 = 1;
				}
			}
			if (iParam2 == 0)
			{
				uParam0->f_48 = 1;
			}
			func_975(uParam0);
			if (bParam4)
			{
				uParam0->f_51 = 1;
				func_809(uParam0);
				func_809(&(Local_49.f_3));
			}
			else
			{
				uParam0->f_51 = 0;
				func_973(uParam0);
			}
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (__LIB_0__::func_43(uParam0->f_1))
			{
				__LIB_0__::func_120(uParam0->f_1, &Var1, 1);
				uParam0->f_35 = Var1.f_0;
				uParam0->f_34 = __LIB_6__::func_757(uParam0->f_1);
			}
			else if (uParam0->f_1 == 14)
			{
				func_117(uParam0->f_1, &Var1, 2);
				uParam0->f_35 = Var1.f_0;
				uParam0->f_34 = __LIB_2__::func_108(uParam0->f_1);
			}
			else
			{
				func_117(uParam0->f_1, &Var1, 1);
				uParam0->f_35 = Var1.f_0;
				uParam0->f_34 = __LIB_2__::func_108(uParam0->f_1);
			}
			if (uParam0->f_35 == 0)
			{
				uParam0->f_35 = joaat("asea");
			}
			STREAMING::REQUEST_MODEL(uParam0->f_35);
			STREAMING::REQUEST_MODEL(uParam0->f_34);
			func_48(iParam1, 0);
			return 1;
		}
	}
	return 0;
}

void func_973(var uParam0)//Position - 0x94426
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (*uParam0 != 0)
	{
		if (uParam0->f_2 < 24)
		{
			if (uParam0->f_28 == 0)
			{
				fVar0 = (10f / 2f);
				Var1 = { fVar0, fVar0, fVar0 };
				Var2 = { func_974(uParam0->f_2) - Var1 };
				Var3 = { func_974(uParam0->f_2) + Var1 };
				uParam0->f_28 = PED::ADD_SCENARIO_BLOCKING_AREA(Var2, Var3, false, true, true, true);
			}
		}
	}
}

Vector3 func_974(int iParam0)//Position - 0x94492
{
	return Global_95742[iParam0 /*18*/];
}

void func_975(var uParam0)//Position - 0x944A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (*uParam0 != 0)
	{
		if (uParam0->f_1 == __LIB_18__::func_173())
		{
			if (uParam0->f_7 != PLAYER::PLAYER_PED_ID())
			{
				uParam0->f_7 = PLAYER::PLAYER_PED_ID();
				func_514(uParam0, &(Local_49.f_259), 1);
			}
			return;
		}
		else if (uParam0->f_1 != 145)
		{
			if (__LIB_0__::func_43(uParam0->f_1))
			{
				iVar0 = __LIB_0__::func_504(uParam0->f_1);
				iVar1 = Global_97919[iVar0];
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = iVar1;
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::DELETE_PED(&(uParam0->f_7));
				}
			}
			else
			{
				iVar2 = __LIB_20__::func_260(uParam0->f_1);
				iVar3 = (iVar2 - 3);
				if (iVar2 == 7)
				{
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = Global_96275[iVar3];
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar3]))
				{
					PED::DELETE_PED(&(uParam0->f_7));
				}
			}
			if (!PED::IS_PED_INJURED(uParam0->f_7))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_7, true))
				{
					if (uParam0->f_50)
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7, true, true);
					func_514(uParam0, &(Local_49.f_259), 0);
				}
			}
		}
	}
}

void func_976(var uParam0)//Position - 0x945B7
{
	struct<3> Var0;
	if (*uParam0 != 0)
	{
		if (__LIB_0__::func_43(uParam0->f_1))
		{
			if (uParam0->f_2 < 24)
			{
				Var0 = { uParam0->f_24 - uParam0->f_21 };
				func_977(uParam0->f_1, uParam0->f_21, MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1));
				uParam0->f_45 = 1;
			}
		}
	}
}

void func_977(int iParam0, struct<3> Param1, float fParam2)//Position - 0x94608
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_18533[iParam0] = 2;
			break;
		case 1:
			Global_113386.f_18533[iParam0] = 3;
			break;
		case 2:
			Global_113386.f_18533[iParam0] = 4;
			break;
		default:
			return;
			break;
	}
	Global_98552[iParam0 /*109*/].f_3 = iParam0;
	Global_98552[iParam0 /*109*/].f_2 = Global_113386.f_18533[iParam0];
	Global_98552[iParam0 /*109*/].f_4 = { Param1 };
	Global_98552[iParam0 /*109*/].f_7 = fParam2;
}

void func_978(var uParam0, int iParam1)//Position - 0x94699
{
	struct<3> Var0;
	if (uParam0->f_2 < 24)
	{
		if (iParam1 == 0)
		{
			Var0 = { Global_95742[uParam0->f_2 /*18*/].f_3 };
		}
		else if (iParam1 == 1)
		{
			Var0 = { Global_95742[uParam0->f_2 /*18*/].f_6 };
		}
		else
		{
			Var0 = { Global_95742[uParam0->f_2 /*18*/].f_6 };
			iParam1 = 1;
		}
		uParam0->f_24 = { Global_95742[uParam0->f_2 /*18*/] };
		uParam0->f_21 = { Global_95742[uParam0->f_2 /*18*/] + Var0 };
		uParam0->f_27 = iParam1;
	}
}

int func_979(int iParam0, int iParam1)//Position - 0x94724
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_24__::func_745(&iVar0);
	if (iVar2 == 0)
	{
		__LIB_12__::func_295(iParam0, 4);
		func_981(iParam0, iParam1);
		return 1;
	}
	else if (iVar2 == 1)
	{
		if (func_980(iParam0, iVar0, &iVar1) && __LIB_11__::func_898(iVar1) != -1)
		{
			__LIB_12__::func_295(iParam0, 4);
			__LIB_12__::func_295(iVar1, 4);
			func_981(iParam0, iParam1);
			func_981(iVar1, iParam1);
			return 1;
		}
	}
	return 0;
}

int func_980(int iParam0, int iParam1, var uParam2)//Position - 0x94793
{
	int iVar0;
	int iVar1;
	iVar0 = 7;
	iVar1 = 7;
	if (Global_113386.f_18103.f_175[iParam0 /*19*/] == Global_113386.f_18103.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_113386.f_18103.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_113386.f_18103.f_175[iParam1 /*19*/].f_1;
	}
	else if (Global_113386.f_18103.f_175[iParam0 /*19*/].f_1 == Global_113386.f_18103.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_113386.f_18103.f_175[iParam0 /*19*/];
		iVar1 = Global_113386.f_18103.f_175[iParam1 /*19*/];
	}
	else if (Global_113386.f_18103.f_175[iParam0 /*19*/] == Global_113386.f_18103.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_113386.f_18103.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_113386.f_18103.f_175[iParam1 /*19*/];
	}
	else if (Global_113386.f_18103.f_175[iParam0 /*19*/].f_1 == Global_113386.f_18103.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_113386.f_18103.f_175[iParam0 /*19*/];
		iVar1 = Global_113386.f_18103.f_175[iParam1 /*19*/].f_1;
	}
	if (__LIB_0__::func_43(__LIB_24__::func_730(iVar0)) || __LIB_0__::func_43(__LIB_24__::func_730(iVar1)))
	{
		*uParam2 = func_51(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

void func_981(int iParam0, var uParam1)//Position - 0x948E0
{
	if (iParam0 < 9)
	{
		Global_96297[iParam0 /*2*/].f_1 = uParam1;
	}
}

int func_983(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x94942
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	float fVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	iVar0 = __LIB_20__::func_260(iParam0);
	iVar1 = __LIB_20__::func_260(iParam1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (iParam1 == 145)
	{
		return 25;
	}
	if (iParam2 && func_994(iParam0, iParam1, &iVar3))
	{
		switch (__LIB_24__::func_732(iVar3))
		{
			case 1:
				if (__LIB_24__::func_753())
				{
					__LIB_0__::func_711(&(Global_95742[0 /*18*/].f_17), 1024);
					return 0;
				}
				break;
			}
	}
	if (__LIB_0__::func_43(iParam1))
	{
		if (!__LIB_40__::func_631(Global_113386.f_2363.f_539.f_2296[iParam1], 1))
		{
			Var4 = { Global_113386.f_2363.f_539.f_2300[iParam1 /*3*/] };
			if (SYSTEM::VDIST(Var2, Var4) < (1800f * 0.5f))
			{
				Var2 = { Var4 };
			}
		}
	}
	bVar9 = func_984(Var2, iVar0, iVar1, 0, 1, &uVar5, &fVar7, iParam3);
	bVar10 = func_984(Var2, iVar0, iVar1, 0, 0, &uVar6, &uVar8, iParam3);
	if (bVar9 && bVar10)
	{
		if (fVar7 > 1800f)
		{
			return uVar6;
		}
		else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 25)
		{
			return uVar6;
		}
		else
		{
			return uVar5;
		}
	}
	else if (bVar9)
	{
		return uVar5;
	}
	else if (bVar10)
	{
		return uVar6;
	}
	iVar11 = 10;
	return iVar11;
}

bool func_984(struct<3> Param0, bool bParam1, bool bParam2, bool bParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x94A9A
{
	int iVar0;
	float fVar1;
	*uParam5 = 25;
	*uParam6 = (999999f * 999999f);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iParam7 == 25 || SYSTEM::VDIST(Global_95742[iVar0 /*18*/], Global_95742[iParam7 /*18*/]) > 200f)
		{
			if (func_989(iVar0, bParam2))
			{
				if ((bParam3 == 0 && func_988(iVar0, 128)) || (bParam3 == 1 && func_988(iVar0, 256)))
				{
					if (iParam4 == func_988(iVar0, 512))
					{
						if (func_985(bParam1, bParam2, iVar0, bParam3))
						{
							fVar1 = SYSTEM::VDIST(Param0, Global_95742[iVar0 /*18*/]);
							if (*uParam6 > fVar1)
							{
								*uParam6 = fVar1;
								*uParam5 = iVar0;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam4 == 1)
	{
	}
	return *uParam5 != 25;
}

int func_985(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x94B7E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	if (((iParam0 == 0 || iParam0 == 2) || iParam1 == 0) || iParam1 == 2)
	{
		if (__LIB_13__::func_208(Global_95742[iParam2 /*18*/]))
		{
			if (__LIB_0__::func_368(130) && !__LIB_0__::func_368(131))
			{
				return 0;
			}
		}
	}
	if (iParam2 == 4)
	{
		bVar0 = false;
		if (24 <= 31)
		{
			bVar0 = BitTest(Global_113386.f_9085.f_99.f_219[9], 24);
		}
		else
		{
			bVar0 = BitTest(Global_113386.f_9085.f_99.f_219[10], (24 - 31));
		}
		if (bVar0)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		bVar1 = false;
		if (25 <= 31)
		{
			bVar1 = BitTest(Global_113386.f_9085.f_99.f_219[9], 25);
		}
		else
		{
			bVar1 = BitTest(Global_113386.f_9085.f_99.f_219[10], (25 - 31));
		}
		if (bVar1)
		{
			return 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 94)
	{
		if (__LIB_8__::func_915(iVar2) && !func_987(iVar2))
		{
			iVar4 = Global_91229[iVar2 /*34*/].f_10;
			if (iVar4 != 263)
			{
				if (__LIB_30__::func_700(iVar4))
				{
					Var3 = { __LIB_11__::func_156(iVar4, __LIB_18__::func_173()) };
				}
				else
				{
					Var3 = { __LIB_11__::func_156(iVar4, 0) };
				}
				fVar5 = SYSTEM::VDIST(Var3, Global_95742[iParam2 /*18*/]);
				if (fVar5 < 100f)
				{
					return 0;
				}
			}
		}
		iVar2++;
	}
	Var6 = { Global_95742[iParam2 /*18*/] };
	fVar7 = SYSTEM::VDIST2(Var6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	if (!bParam3)
	{
		fVar8 = 350f;
	}
	else
	{
		fVar8 = 100f;
	}
	if (fVar7 < (fVar8 * fVar8))
	{
		return 0;
	}
	if (Global_95742[iParam2 /*18*/].f_16 != 10)
	{
		if (!__LIB_0__::func_369(Global_95742[iParam2 /*18*/].f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_987(int iParam0)//Position - 0x94D65
{
	switch (iParam0)
	{
		case 88:
		case 92:
		case 33:
			return 1;
			break;
	}
	return 0;
}

bool func_988(int iParam0, int iParam1)//Position - 0x94D8E
{
	return (Global_95742[iParam0 /*18*/].f_17 && iParam1) == iParam1;
}

int func_989(int iParam0, int iParam1)//Position - 0x94DA6
{
	switch (iParam1)
	{
		case 0:
			return Global_95742[iParam0 /*18*/].f_17 & 1 != 0;
			break;
		case 2:
			return Global_95742[iParam0 /*18*/].f_17 & 4 != 0;
			break;
		case 3:
			return Global_95742[iParam0 /*18*/].f_17 & 8 != 0;
			break;
		case 4:
			return Global_95742[iParam0 /*18*/].f_17 & 16 != 0;
			break;
		case 5:
			return Global_95742[iParam0 /*18*/].f_17 & 32 != 0;
			break;
		case 1:
			return Global_95742[iParam0 /*18*/].f_17 & 2 != 0;
			break;
	}
	return 0;
}

int func_994(int iParam0, int iParam1, var uParam2)//Position - 0x94EF2
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_20__::func_260(iParam0);
	iVar1 = __LIB_20__::func_260(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_51(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

int func_995(int iParam0, var uParam1)//Position - 0x94F37
{
	int iVar0;
	if (__LIB_28__::func_366(iParam0, &iVar0))
	{
		*uParam1 = __LIB_24__::func_730(iVar0);
		if (*uParam1 != 145)
		{
			return 1;
		}
	}
	*uParam1 = 145;
	return 0;
}

int func_997(var uParam0)//Position - 0x94FCC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	*uParam0 = 10;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Global_96297[iVar1 /*2*/] == 3)
		{
			if (*uParam0 == 10)
			{
				*uParam0 = iVar1;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_999(var uParam0)//Position - 0x9501E
{
	int iVar0;
	if (!__LIB_0__::func_39(6) && !__LIB_0__::func_39(7))
	{
		iVar0 = __LIB_18__::func_219(uParam0, 1, 6, 0, 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		if (iVar0 != 1)
		{
			return 0;
		}
		if (!MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(true);
		}
	}
	return 1;
}

int func_1002()//Position - 0x951EE
{
	struct<3> Var0;
	if (Local_49.f_628 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_49.f_648) && Local_49.f_644 < 24)
		{
			Var0 = { Local_49.f_645 };
			if (func_949(Local_49.f_644, &Var0))
			{
				HUD::SET_BLIP_COORDS(Local_49.f_648, Var0);
			}
			if (__LIB_0__::func_398(1, 0, 1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Global_19, true, true, 0))
					{
						Local_49.f_628 = 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Global_22, true, true, 0))
				{
					Local_49.f_628 = 1;
				}
			}
		}
	}
	if (Local_49.f_628)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10f, 8, 1056964608, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1004()//Position - 0x953B2
{
	int iVar0;
	if (Local_49.f_627 == 23)
	{
		if (__LIB_0__::func_398(1, 0, 1))
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (Global_96177[iVar0 /*2*/].f_1 == 5)
				{
					if (!func_396(&(Local_49.f_638), iVar0))
					{
						if (__LIB_28__::func_362(iVar0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_11__::func_156(Global_96177[iVar0 /*2*/], 0), Global_19, true, true, 0))
							{
								Local_49.f_627 = iVar0;
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (Local_49.f_627 != 23)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f, 8, 1056964608, 0, 1, 0))
		{
			__LIB_24__::func_743(Local_49.f_627, 1);
			return 1;
		}
	}
	return 0;
}

void func_1007()//Position - 0x9554F
{
	func_5(&(Local_49.f_3), 0, 0);
	func_5(&(Local_49.f_56), 0, 0);
	func_5(&(Local_49.f_109), 0, 0);
}

void func_1009()//Position - 0x95583
{
	Local_49.f_642 = 23;
	Local_49.f_625 = 0;
	func_1017();
	if (Local_49.f_618 == 0)
	{
		func_1015();
		Local_49.f_618 = 1;
	}
	func_412(&(Local_49.f_703));
	Local_49.f_622 = func_402(Local_49.f_3.f_1);
	Local_49.f_623 = func_401(Local_49.f_3.f_1);
	Local_49.f_624 = func_403(Local_49.f_3.f_1);
	Local_49.f_627 = 23;
	Local_49.f_628 = 0;
	func_882(1);
	func_1011();
	if (Local_49.f_56.f_1 == 17 || Local_49.f_109.f_1 == 17)
	{
		if (__LIB_0__::func_573(0, 9) == 1)
		{
			__LIB_9__::func_989(0, 9, 0);
			Local_49.f_619 = 1;
		}
	}
	else if (Local_49.f_56.f_1 == 14 || Local_49.f_109.f_1 == 14)
	{
		if (((Local_49.f_56.f_1 == 0 || Local_49.f_109.f_1 == 0) || Local_49.f_3.f_1 == 0) || ((Local_49.f_56.f_1 == 2 || Local_49.f_109.f_1 == 2) || Local_49.f_3.f_1 == 2))
		{
			if (__LIB_0__::func_573(0, 9) == 1)
			{
				__LIB_9__::func_989(0, 9, 0);
				Local_49.f_619 = 1;
			}
		}
	}
	if (Local_49.f_640 == 0)
	{
		Local_49.f_644 = 25;
		Local_49.f_645 = { 0f, 0f, 0f };
	}
	else
	{
		Local_49.f_644 = func_1010(Local_49.f_3.f_1, Local_49.f_56.f_1, 1);
		Local_49.f_645 = { func_974(Local_49.f_644) };
	}
	__LIB_5__::func_951(&(Local_49.f_703), 17);
	if (!Local_49.f_620)
	{
		if (Local_49.f_640 > 0)
		{
			if (Global_96177[Global_96268 /*2*/].f_1 == 5)
			{
				func_457(&(Local_49.f_703), 6, 145, 69);
			}
			else
			{
				func_457(&(Local_49.f_703), 10, 145, 69);
			}
		}
	}
	else
	{
		func_447(&(Local_49.f_703));
		Local_49.f_620 = 0;
	}
}

int func_1010(int iParam0, int iParam1, int iParam2)//Position - 0x95759
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	float fVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bVar0 = __LIB_20__::func_260(iParam0);
	bVar1 = __LIB_20__::func_260(iParam1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (iParam1 == 145)
	{
		return 25;
	}
	bVar7 = func_984(Var2, bVar0, bVar1, 1, 1, &uVar3, &fVar5, 25);
	bVar8 = func_984(Var2, bVar0, bVar1, 1, 0, &uVar4, &uVar6, 25);
	if (iParam2 && bVar8)
	{
		return uVar4;
	}
	else if (bVar7 && bVar8)
	{
		if (fVar5 > 1800f)
		{
			return uVar4;
		}
		else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			return uVar4;
		}
		else
		{
			return uVar3;
		}
	}
	else if (bVar7)
	{
		return uVar3;
	}
	else if (bVar8)
	{
		return uVar4;
	}
	iVar9 = 10;
	return iVar9;
}

void func_1011()//Position - 0x95822
{
	struct<3> Var0;
	char* sVar1;
	sVar1 = "launcher_tennis";
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	else
	{
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_tennis")) == 0)
	{
		if (__LIB_29__::func_877(Var0, 100))
		{
			BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
		}
	}
}

int func_1015()//Position - 0x959F3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_96177[iVar0 /*2*/];
		if (BitTest(Global_32338[iVar1 /*23*/].f_11, 0))
		{
		}
		Global_96222[iVar0 /*2*/].f_1 = __LIB_24__::func_744(iVar1);
		Global_96222[iVar0 /*2*/] = Global_32338[iVar1 /*23*/].f_11;
		__LIB_10__::func_604(iVar1, 0, 0);
		iVar0++;
	}
	return 1;
}

void func_1017()//Position - 0x95A96
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
}

void func_1018()//Position - 0x95AA4
{
	func_880();
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		func_300();
		func_299(4);
		return;
	}
	else if (__LIB_0__::func_134())
	{
		func_300();
		if (__LIB_0__::func_204())
		{
			func_299(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_300();
		func_299(0);
	}
	else if (__LIB_0__::func_39(2))
	{
		func_300();
		func_457(&(Local_49.f_703), 5, 145, 69);
		__LIB_5__::func_951(&(Local_49.f_703), 18);
		Local_49.f_629 = 145;
		Local_49.f_630 = 145;
		func_877(0, 48, 1);
		func_923(6);
	}
	else if (__LIB_0__::func_39(18))
	{
		func_300();
		func_1007();
		func_299(1);
	}
	else if (((__LIB_6__::func_854(6) && !__LIB_0__::func_39(6)) && !__LIB_0__::func_39(7)) && !__LIB_0__::func_39(17))
	{
		func_300();
		func_877(0, 48, 0);
		func_299(1);
	}
	else if (!func_1025())
	{
		func_5(&(Local_49.f_3), 2, 0);
		func_5(&(Local_49.f_56), 2, 0);
		func_5(&(Local_49.f_109), 2, 0);
		func_300();
		func_299(2);
		return;
	}
	else if (func_1024() && !func_999(&(Local_49.f_256)))
	{
		__LIB_0__::func_186();
		return;
	}
	else if (func_1023())
	{
		func_957(0);
		func_491();
		func_458();
		func_309(0);
		func_954();
		if (func_1024())
		{
			if (Local_49.f_618 == 0)
			{
				func_1015();
				Local_49.f_618 = 1;
			}
		}
		if (func_468())
		{
			func_300();
		}
		else if (!func_308())
		{
			func_300();
			if (func_306())
			{
				func_299(6);
			}
		}
		else if (((Local_49.f_56 == 3 || Local_49.f_56 == 11) || Local_49.f_56 == 6) || ((Local_49.f_109 == 3 || Local_49.f_109 == 11) || Local_49.f_109 == 6))
		{
			func_950();
		}
		else if ((Local_49.f_3 == 1 || Local_49.f_56 == 1) || Local_49.f_109 == 1)
		{
			func_1019();
		}
		else
		{
			func_300();
			func_459(1);
			func_923(2);
		}
	}
}

void func_1019()//Position - 0x95CCE
{
	if (Local_49.f_258 != 2)
	{
		func_300();
		Local_49.f_258 = 2;
	}
	if (Local_49.f_56 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_49.f_56.f_11))
		{
			func_1022(&(Local_49.f_56));
		}
	}
	else
	{
		__LIB_23__::func_553(&(Local_49.f_56));
	}
	if (Local_49.f_109 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_49.f_109.f_11))
		{
			func_1022(&(Local_49.f_109));
		}
	}
	else
	{
		__LIB_23__::func_553(&(Local_49.f_109));
	}
	if (Global_113386.f_18103.f_399 == 0)
	{
		Global_113386.f_18103.f_399 = 1;
		HUD::CLEAR_HELP(true);
		if (Local_49.f_56.f_1 != 17)
		{
			__LIB_4__::func_936("FR_H_PKUP", &(Local_49.f_56.f_3), -1);
		}
		else
		{
			__LIB_4__::func_936("FR_H_PKUPf", &(Local_49.f_56.f_3), -1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_49.f_56.f_11))
		{
			HUD::SET_BLIP_FLASHES(Local_49.f_56.f_11, true);
			HUD::SET_BLIP_FLASH_TIMER(Local_49.f_56.f_11, 10000);
		}
	}
	else if (Global_113386.f_18103.f_400 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_49.f_56.f_10))
		{
			if (Local_49.f_56.f_1 != 17)
			{
				__LIB_4__::func_936("FR_H_WAIT", &(Local_49.f_56.f_3), -1);
			}
			else
			{
				__LIB_4__::func_936("FR_H_WAITf", &(Local_49.f_56.f_3), -1);
			}
			Global_113386.f_18103.f_400 = 1;
		}
		else if (HUD::DOES_BLIP_EXIST(Local_49.f_109.f_10))
		{
			if (Local_49.f_109.f_1 != 17)
			{
				__LIB_4__::func_936("FR_H_WAIT", &(Local_49.f_109.f_3), -1);
			}
			else
			{
				__LIB_4__::func_936("FR_H_WAITf", &(Local_49.f_109.f_3), -1);
			}
			Global_113386.f_18103.f_400 = 1;
		}
	}
	func_926(&(Local_49.f_56), func_1020(&(Local_49.f_56)));
	func_926(&(Local_49.f_109), func_1020(&(Local_49.f_109)));
}

int func_1020(var uParam0)//Position - 0x95E68
{
	if (*uParam0 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (func_398(uParam0->f_7, uParam0->f_24, 20f) && __LIB_24__::func_750(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f))
		{
			return 1;
		}
	}
	return 0;
}

int func_1022(var uParam0)//Position - 0x95ED3
{
	if (*uParam0 == 0)
	{
	}
	else if (uParam0->f_2 != 25)
	{
		uParam0->f_11 = __LIB_0__::func_392(uParam0->f_24, 0);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uParam0->f_11, true);
			HUD::SET_BLIP_SPRITE(uParam0->f_11, 280);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_11, "FR_PKUPBLIP" /* GXT: Friend Meeting Place */);
		}
		return uParam0->f_11;
	}
	return 0;
}

int func_1023()//Position - 0x95F31
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 1;
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FRIENDS", 5))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		iVar0 = 0;
	}
	STREAMING::REQUEST_MODEL(iLocal_48);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_48))
	{
		iVar1 = 0;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

int func_1024()//Position - 0x95F7E
{
	if ((Local_49.f_3.f_50 || Local_49.f_56.f_50) || Local_49.f_109.f_50)
	{
		return 1;
	}
	return 0;
}

int func_1025()//Position - 0x95FAC
{
	int iVar0;
	if (func_468())
	{
		iVar0 = __LIB_18__::func_173();
		if (Local_49.f_247 != iVar0)
		{
			func_47(&(Local_49.f_3));
			func_47(&(Local_49.f_56));
			func_47(&(Local_49.f_109));
			func_1027(&(Local_49.f_3));
			func_459(0);
			func_1026();
			func_978(&(Local_49.f_56), 0);
			func_978(&(Local_49.f_109), 1);
			func_973(&(Local_49.f_3));
			func_973(&(Local_49.f_56));
			func_973(&(Local_49.f_109));
			Local_49.f_247 = iVar0;
			Local_49.f_248 = 1;
		}
	}
	else
	{
		func_1026();
		if (Local_49.f_248)
		{
			func_65(&(Local_49.f_3));
			func_976(&(Local_49.f_56));
			func_976(&(Local_49.f_109));
			Local_49.f_248 = 0;
			if (func_835())
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_1026()//Position - 0x96060
{
	func_975(&(Local_49.f_3));
	func_975(&(Local_49.f_56));
	func_975(&(Local_49.f_109));
}

void func_1027(var uParam0)//Position - 0x96080
{
	int iVar0[3];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	if (*uParam0 == 0)
	{
	}
	iVar0[0] = Local_49.f_3.f_2;
	iVar0[1] = Local_49.f_56.f_2;
	iVar0[2] = Local_49.f_109.f_2;
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true) };
		fVar2 = (999999f * 999999f);
		iVar3 = -1;
		iVar4 = 0;
		while (iVar4 < iVar0)
		{
			if (iVar0[iVar4] < 24)
			{
				fVar5 = SYSTEM::VDIST2(Var1, Global_95742[iVar0[iVar4] /*18*/]);
				if (fVar2 > fVar5)
				{
					fVar2 = fVar5;
					iVar3 = iVar4;
				}
			}
			iVar4++;
		}
		if (iVar3 != -1)
		{
			uParam0->f_2 = iVar0[iVar3];
		}
	}
	if (uParam0->f_2 < 24)
	{
		func_978(uParam0, 0);
	}
}

void func_1028(int iParam0)//Position - 0x96147
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar1 = __LIB_24__::func_732(iParam0);
	bVar2 = false;
	if (iVar1 == 3)
	{
		bVar2 = true;
	}
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		func_299(4);
		return;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_299(0);
		return;
	}
	else if (__LIB_11__::func_898(iParam0) != 3)
	{
		func_299(1);
		return;
	}
	else if (!__LIB_28__::func_366(iParam0, &iVar0))
	{
		func_299(1);
		return;
	}
	else if (bVar2 == 0 || func_999(&(Local_49.f_256)))
	{
		if ((__LIB_6__::func_854(6) && !__LIB_0__::func_39(6)) && !__LIB_0__::func_39(7))
		{
			func_299(1);
			return;
		}
		else
		{
			func_1023();
			iVar3 = __LIB_18__::func_173();
			iVar4 = __LIB_24__::func_730(iVar0);
			iVar5 = func_983(iVar3, iVar4, 1, 25);
			func_972(&(Local_49.f_3), iVar3, 25, -1, 0);
			func_972(&(Local_49.f_56), iVar4, iVar5, 0, bVar2);
			__LIB_5__::func_951(&(Local_49.f_703), 16);
			iLocal_86 = 1;
			if (!func_979(iParam0, 0))
			{
				func_299(1);
				return;
			}
			func_958(iVar3, iVar4);
			if (bVar2 == 0)
			{
				func_923(1);
			}
			else
			{
				func_923(2);
			}
		}
	}
}

void func_1029()//Position - 0x96273
{
	func_1034(0);
	__LIB_34__::func_234();
	func_6(&(Local_49.f_3));
	func_6(&(Local_49.f_56));
	func_6(&(Local_49.f_109));
	func_475(&(Local_49.f_162[0 /*28*/]), 0);
	func_475(&(Local_49.f_162[1 /*28*/]), 1);
	func_475(&(Local_49.f_162[2 /*28*/]), 2);
	func_1031();
	func_1030();
	Local_49.f_0 = 0;
	Local_49.f_1 = 7;
	Local_49.f_2 = 0;
	Local_49.f_256 = -1;
	Local_49.f_616 = 0;
	Local_49.f_617 = 0;
	Local_49.f_618 = 0;
	Local_49.f_619 = 0;
	Local_49.f_620 = 0;
	Local_49.f_621 = 1;
	Local_49.f_622 = func_402(Local_49.f_3.f_1);
	Local_49.f_623 = func_401(Local_49.f_3.f_1);
	Local_49.f_624 = func_403(Local_49.f_3.f_1);
	Local_49.f_643 = 23;
	Local_49.f_629 = 145;
	Local_49.f_630 = 145;
	iLocal_85 = 1;
	Global_97751 = 1;
	Global_96272 = 145;
	iLocal_86 = 0;
	Local_49.f_247 = __LIB_18__::func_173();
	Local_49.f_248 = 0;
	Local_49.f_249 = 6;
	Local_49.f_250 = 145;
	Local_49.f_251 = 145;
	Local_49.f_703 = 20;
	Local_49.f_703.f_1 = 8;
	Local_49.f_703.f_2 = 0;
	Local_49.f_703.f_3 = 20;
	Local_49.f_703.f_32 = 145;
	Local_49.f_703.f_33 = 69;
	Local_49.f_703.f_28[0] = 145;
	Local_49.f_703.f_28[1] = 145;
	Local_49.f_703.f_28[2] = 145;
	__LIB_1__::func_37(&(Local_49.f_703.f_4));
	__LIB_6__::func_892(&(Local_49.f_703.f_7));
	__LIB_1__::func_37(&(Local_49.f_703.f_10));
	Local_49.f_703.f_13 = 0;
	Local_49.f_703.f_14 = 0;
	Local_49.f_737 = 0;
	__LIB_14__::func_317(&(Local_49.f_631));
	Local_49.f_633 = 0;
	__LIB_14__::func_317(&(Local_49.f_634));
	__LIB_14__::func_317(&(Local_49.f_636));
	__LIB_14__::func_317(&(Local_49.f_638));
	Local_49.f_640 = 0;
	Local_49.f_641 = 0;
	Local_49.f_644 = 25;
	Local_49.f_652 = 0;
	Local_49.f_653 = 0;
	Local_49.f_614 = 1;
	Local_49.f_615 = -1;
	Local_49.f_778 = 0;
	Local_49.f_857 = 0;
	Local_49.f_777 = 0;
}

void func_1030()//Position - 0x96467
{
	int iVar0;
	Local_49.f_702 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_49.f_671[iVar0 /*6*/].f_1 = 6;
		iVar0++;
	}
}

void func_1031()//Position - 0x96493
{
	Local_49.f_670 = 0;
}

void func_1034(bool bParam0)//Position - 0x96585
{
	if (bParam0)
	{
		func_1038(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 10);
		func_1037(0f, 0f, 0f, 0f, 0f, 0f, 0f);
	}
	func_1038(1, -824.9975f, 179.9752f, 70.4895f, 5.8945f, -0.6014f, 0.6636f, 7.3145f, -2.6014f, 0.7136f, 0);
	func_1037(-860.8041f, 136.4404f, 59.025f, 0.6456f, -828.7663f, 178.8821f, 71.2117f);
	func_1035(1);
	func_1035(896);
	func_1038(2, 1986.8676f, 3810.9841f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 1);
	func_1037(2138.5615f, 3767.5957f, 32.1819f, 120.8022f, 1995.6809f, 3818.5762f, 32.1837f);
	func_1035(1);
	func_1035(896);
	func_1038(3, -13.8595f, -1454.3317f, 29.4997f, 0.1999f, 8.5446f, 0.1003f, -1.0001f, 7.9046f, 0.1003f, 5);
	func_1037(70.9006f, -1477.2407f, 28.2852f, 140.958f, -24.3995f, -1457.3259f, 30.6446f);
	func_1035(2);
	func_1035(896);
	func_1038(4, 10.8316f, 549.0906f, 174.9739f, -1.4644f, -9.0339f, 0.0539f, -2.4844f, -8.6139f, -0.0211f, 6);
	func_1037(-90.6814f, 511.137f, 142.8975f, 68.9617f, 5.0911f, 547.0732f, 174.9908f);
	func_1035(2);
	func_1035(896);
	func_1038(5, 1986.8674f, 3810.984f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 2);
	func_1037(2138.5615f, 3767.5957f, 32.1819f, 120.8022f, 1995.6809f, 3818.5762f, 32.1837f);
	func_1035(4);
	func_1035(896);
	func_1038(6, -1158.263f, -1515.8615f, 3.2873f, 3.7331f, 0.363f, 0.0341f, 3.1931f, 1.563f, 0.0341f, 3);
	func_1037(-1079.3735f, -1475.24f, 4.1272f, 25.0007f, -1166.1702f, -1519.4685f, 4.229f);
	func_1035(4);
	func_1035(896);
	func_1038(7, 132.7787f, -1305.2081f, 28.1826f, -1.1933f, 4.1322f, 0.0451f, -2.1933f, 3.8922f, -0.0049f, 4);
	func_1037(65.7439f, -1308.3253f, 28.3417f, 210.5102f, 125.2967f, -1307.992f, 29.2187f);
	func_1035(4);
	func_1035(768);
	func_1038(8, 176.9471f, -1340.8126f, 28.2908f, -1.2f, 2.1f, 0.0032f, -3f, 0.12f, 0.0032f, 4);
	func_1037(361.4975f, -1296.7698f, 31.3318f, 140.8159f, 182.2761f, -1333.3795f, 28.8827f);
	func_1035(4);
	func_1035(640);
	func_1038(9, -57.8633f, -1459.2397f, 30.994f, -1.14f, 2.52f, 0.22f, -3.36f, 1.74f, 0.1667f, 10);
	func_1037(68.9364f, -1479.6398f, 29.2941f, 145.6588f, -50.0051f, -1459.1348f, 31.9645f);
	func_1035(8);
	func_1035(896);
	func_1038(10, -14.7793f, -114.3548f, 55.8073f, -0.7199f, 3.7608f, 0.05f, 0.76f, 3.48f, 0.05f, 10);
	func_1037(40.216f, -256.6415f, 47.4194f, 340.2766f, -23.3476f, -113.7569f, 55.8956f);
	func_1035(1);
	func_1035(384);
	func_1038(11, -597.897f, -305.1185f, 33.9548f, -1.02f, 0.84f, -0.047f, 0f, 1.68f, -0.047f, 10);
	func_1037(-584.9772f, -258.7058f, 34.8225f, 210.2552f, -590.3728f, -302.9131f, 34.853f);
	func_1035(32);
	func_1035(384);
	func_1038(12, -155.6107f, -175.4378f, 42.7614f, 4.5615f, 6.7732f, -0.1419f, 3.1815f, 7.1932f, -0.1419f, 10);
	func_1037(-107.3334f, -191.8515f, 45.7935f, 165.1659f, -158.1629f, -174.8294f, 43.2478f);
	func_1035(16);
	func_1035(384);
	func_1038(13, 194.0434f, -42.2946f, 67.5703f, 0.24f, 4.86f, 0f, 1.5f, 4.68f, 0f, 10);
	func_1037(298.4399f, -19.2893f, 75.8441f, 157.1038f, 202.8657f, -46.2839f, 68.6749f);
	func_1035(6);
	func_1035(384);
	func_1038(14, -165.44f, -788.5505f, 30.9774f, -6.3719f, 2.4632f, 0.0021f, -7.3019f, 1.7432f, 0.0021f, 10);
	func_1037(-156.6818f, -713.4197f, 33.5995f, 241.8992f, -159.4454f, -778.2214f, 32.2215f);
	func_1035(33);
	func_1035(384);
	func_1038(15, -820.9531f, -1088.2756f, 10.0086f, -1.804f, 4.1191f, 0.1191f, -3.124f, 3.2191f, 0.1191f, 10);
	func_1037(-841.6274f, -1165.0057f, 6.0014f, 294.8121f, -819.1121f, -1091.4512f, 10.6171f);
	func_1035(6);
	func_1035(128);
	func_1038(16, 234.715f, -959.095f, 28.2856f, -1.6816f, -0.2787f, 0.0127f, -1.0216f, 1.4013f, 0.0127f, 10);
	func_1037(354.8806f, -855.5883f, 28.3444f, 89.9428f, 240.9607f, -948.6324f, 28.1587f);
	func_1035(18);
	func_1035(384);
	func_1038(17, 249.3746f, -1008.3277f, 28.2705f, 3.848f, -3.0003f, 0.0001f, 4.328f, -1.8003f, 0.0001f, 10);
	func_1037(238.4106f, -1127.997f, 28.2691f, 87.3779f, 244.4703f, -1020.0197f, 29.1059f);
	func_1035(4);
	func_1035(256);
	func_1038(18, -210.3783f, -1498.2042f, 30.4273f, 2.28f, -2.727f, 0.1f, 0.6f, -2.727f, 0.1f, 10);
	func_1037(-281.035f, -1533.1519f, 26.3419f, 343.7635f, -219.2698f, -1492.0404f, 31.2461f);
	func_1035(8);
	func_1035(384);
	func_1038(19, -1220.5693f, -773.4271f, 17.1055f, 3.8194f, 4.9089f, 0.0656f, 5.9194f, 4.1889f, -0.0844f, 10);
	func_1037(-1212.7676f, -876.4072f, 12.1331f, 309.3317f, -1209.4172f, -785.0978f, 16.9499f);
	func_1035(49);
	func_1035(384);
	func_1038(20, -1391.7634f, -584.7326f, 29.2332f, -2.1715f, -1.7725f, -0.01f, -2.6515f, -3.3925f, -0.11f, 10);
	func_1037(-1513.6841f, -678.0259f, 27.4965f, 47.765f, -1409.2719f, -590.8218f, 30.3243f);
	func_1035(4);
	func_1035(256);
	func_1038(21, -1345.2792f, -385.1048f, 35.755f, 1.86f, -0.78f, 0f, 1.2f, -1.62f, 0f, 10);
	func_1037(-1325.355f, -453.5642f, 33.4523f, 35.295f, -1346.2457f, -397.871f, 36.6207f);
	func_1035(10);
	func_1035(384);
	func_1038(22, -14.6068f, 6505.2427f, 30.5105f, -0.5104f, -7.4223f, 0.0239f, 0.8696f, -6.2223f, 0.0239f, 10);
	func_1037(90.1534f, 6595.789f, 30.5382f, 47.4841f, -8.4122f, 6513.6074f, 31.3368f);
	func_1035(63);
	func_1035(384);
	func_1038(23, 1393.7161f, 3592.5854f, 33.9297f, 0.8771f, 4.9569f, 0.0859f, -0.9829f, 5.4369f, 0.0859f, 10);
	func_1037(1449.0967f, 3669.69f, 33.1474f, 201.6678f, 1408.6346f, 3599.183f, 34.8791f);
	func_1035(63);
	func_1035(384);
}

void func_1035(int iParam0)//Position - 0x96EEB
{
	Global_95742[iLocal_47 /*18*/].f_17 = (Global_95742[iLocal_47 /*18*/].f_17 || iParam0);
}

void func_1037(struct<3> Param0, float fParam1, struct<3> Param2)//Position - 0x96F29
{
	Global_95742[iLocal_47 /*18*/].f_9 = { Param0 };
	Global_95742[iLocal_47 /*18*/].f_12 = fParam1;
	Global_95742[iLocal_47 /*18*/].f_13 = { Param2 };
}

void func_1038(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x96F5D
{
	iLocal_47 = iParam0;
	Global_95742[iLocal_47 /*18*/] = { Param1 };
	Global_95742[iLocal_47 /*18*/].f_3 = { Param2 };
	Global_95742[iLocal_47 /*18*/].f_6 = { Param3 };
	Global_95742[iLocal_47 /*18*/].f_17 = 0;
	Global_95742[iLocal_47 /*18*/].f_16 = iParam4;
}

void func_1039()//Position - 0x96FAE
{
	int iVar0;
	if (iLocal_86)
	{
		func_5(&(Local_49.f_3), 6, 0);
		func_5(&(Local_49.f_56), 6, 0);
		func_5(&(Local_49.f_109), 6, 0);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_474(&(Local_49.f_162[iVar0 /*28*/]), 2);
			iVar0++;
		}
		func_387(0);
		func_385(0);
		func_1017();
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		MISC::SET_GAME_PAUSED(false);
		__LIB_6__::func_833();
		if (Local_49.f_619)
		{
			__LIB_9__::func_989(0, 9, 1);
		}
	}
	__LIB_24__::func_752();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	Global_96292 = 0;
	Global_96294 = 0;
	Global_96295 = 0;
	Global_97751 = 0;
	Global_113386.f_18103.f_395 = 0;
	func_1042();
	if (Local_49.f_618)
	{
		func_1041();
		Local_49.f_618 = 0;
	}
	if (Local_49.f_256 != -1)
	{
		__LIB_0__::func_56(&(Local_49.f_256));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1041()//Position - 0x970C0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_96177[iVar0 /*2*/];
		if (BitTest(Global_96222[iVar0 /*2*/], 0))
		{
		}
		if (__LIB_24__::func_744(iVar1) != Global_96222[iVar0 /*2*/].f_1)
		{
			__LIB_29__::func_873(iVar1, Global_96222[iVar0 /*2*/].f_1);
			MISC::SET_BIT(&(Global_32338[iVar1 /*23*/].f_11), 18);
		}
		if (Global_32338[iVar1 /*23*/].f_11 != Global_96222[iVar0 /*2*/])
		{
			Global_32338[iVar1 /*23*/].f_11 = Global_96222[iVar0 /*2*/];
			MISC::SET_BIT(&(Global_32338[iVar1 /*23*/].f_11), 18);
		}
		if (BitTest(Global_32338[iVar1 /*23*/].f_11, 18))
		{
			if (Global_32335 == 1)
			{
				Global_32336 = 1;
			}
			Global_32335 = 1;
		}
		iVar0++;
	}
}

int func_1042()//Position - 0x97179
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = __LIB_11__::func_898(iVar1);
		if (iVar2 == 3 || iVar2 == 4)
		{
			__LIB_12__::func_295(iVar1, 0);
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1046(int iParam0)//Position - 0x97202
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_18__::func_173();
	if (Local_49.f_629 != 145)
	{
		STATS::PLAYSTATS_FRIEND_ACTIVITY(Local_49.f_629, true);
	}
	if (Local_49.f_630 != 145 && Local_49.f_630 != Local_49.f_629)
	{
		STATS::PLAYSTATS_FRIEND_ACTIVITY(Local_49.f_630, true);
	}
	switch (iParam0)
	{
		case 5:
			break;
		case 0:
			if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
			{
				iVar1 = 4;
			}
			else
			{
				iVar1 = 3;
				func_1049();
			}
			if (iVar0 != 0 && func_1048(&(Local_49.f_162[0 /*28*/]), 1))
			{
				__LIB_42__::func_748(iVar0, 0, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (iVar0 != 1 && func_1048(&(Local_49.f_162[1 /*28*/]), 1))
			{
				__LIB_42__::func_748(iVar0, 1, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (iVar0 != 2 && func_1048(&(Local_49.f_162[2 /*28*/]), 1))
			{
				__LIB_42__::func_748(iVar0, 2, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (iVar0 != 0 && func_1048(&(Local_49.f_162[0 /*28*/]), 0))
			{
				__LIB_42__::func_748(iVar0, 0, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (iVar0 != 1 && func_1048(&(Local_49.f_162[1 /*28*/]), 0))
			{
				__LIB_42__::func_748(iVar0, 1, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (iVar0 != 2 && func_1048(&(Local_49.f_162[2 /*28*/]), 0))
			{
				__LIB_42__::func_748(iVar0, 2, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
			}
			else if (Local_49.f_3 == 0 || !func_835())
			{
				if (Local_49.f_56 != 0)
				{
					__LIB_42__::func_748(iVar0, Local_49.f_56.f_1, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
				}
				else if (Local_49.f_109 != 0)
				{
					__LIB_42__::func_748(iVar0, Local_49.f_109.f_1, iVar1, 0, 0, joaat("TEXT_FRIEND"), -1);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			func_474(&(Local_49.f_162[0 /*28*/]), 0);
			func_474(&(Local_49.f_162[1 /*28*/]), 0);
			func_474(&(Local_49.f_162[2 /*28*/]), 0);
			func_5(&(Local_49.f_3), 0, 0);
			func_5(&(Local_49.f_56), 0, 0);
			func_5(&(Local_49.f_109), 0, 0);
			break;
		case 4:
			func_474(&(Local_49.f_162[0 /*28*/]), 1);
			func_474(&(Local_49.f_162[1 /*28*/]), 1);
			func_474(&(Local_49.f_162[2 /*28*/]), 1);
			func_5(&(Local_49.f_3), 1, 0);
			func_5(&(Local_49.f_56), 1, 0);
			func_5(&(Local_49.f_109), 1, 0);
			break;
		case 6:
			break;
		default:
			break;
	}
	if (iParam0 != 5)
	{
		func_1047();
	}
	iLocal_85 = 0;
}

void func_1047()//Position - 0x974A1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_49.f_671[iVar0 /*6*/].f_1 != 6)
		{
			iVar1 = joaat("TEXT_FRIEND");
			if (Local_49.f_671[iVar0 /*6*/].f_1 == 2)
			{
				iVar1 = func_374(__LIB_20__::func_260(Local_49.f_671[iVar0 /*6*/]));
			}
			if (iVar1 != -1)
			{
				__LIB_42__::func_748(__LIB_18__::func_173(), Local_49.f_671[iVar0 /*6*/], Local_49.f_671[iVar0 /*6*/].f_1, 0, Local_49.f_671[iVar0 /*6*/].f_2, iVar1, -1);
			}
			Local_49.f_671[iVar0 /*6*/].f_1 = 6;
			Local_49.f_702 = (Local_49.f_702 - 1);
		}
		iVar0++;
	}
}

int func_1048(var uParam0, int iParam1)//Position - 0x9753D
{
	if (func_478(uParam0, Global_96294))
	{
		if (iParam1 == 0 || __LIB_1__::func_197(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_1049()//Position - 0x9756C
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_18__::func_173();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar0 != iVar1 && func_1048(&(Local_49.f_162[iVar1 /*28*/]), 0))
		{
			Global_96272 = iVar1;
			return 1;
		}
		iVar1++;
	}
	if (Local_49.f_56.f_50)
	{
		Global_96272 = Local_49.f_56.f_1;
		return 1;
	}
	if (Local_49.f_109.f_50)
	{
		Global_96272 = Local_49.f_109.f_1;
		return 1;
	}
	Global_96272 = 145;
	return 0;
}

