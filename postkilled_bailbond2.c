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
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88[5];
	struct<8> Local_89[5];
	int iLocal_90 = 0;
	struct<9> Local_91 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
	iLocal_79 = { ScriptParam_91 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_20();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_19();
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 200;
	iVar4 = MISC::GET_GAME_TIMER();
	while (true)
	{
		if (!func_9())
		{
			func_20();
		}
		if ((MISC::GET_GAME_TIMER() - iVar4) > 100)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (__LIB_0__::func_692(iLocal_79[iVar1]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_79[iVar1], false)) >= IntToFloat((iVar3 * iVar3)) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_79[iVar1]))
					{
						__LIB_0__::func_621(&(Local_89[iVar1 /*8*/]));
						__LIB_0__::func_124(&(iLocal_79[iVar1]), 1, 0, 1);
					}
					else
					{
						__LIB_0__::func_631(iLocal_79[iVar1], &(Local_89[iVar1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_79[iVar1]))
				{
					__LIB_0__::func_124(&(iLocal_79[iVar1]), 1, 0, 1);
				}
				if (__LIB_0__::func_695(iLocal_79.f_5[iVar2]))
				{
					if (SYSTEM::VDIST2(Var0, Local_88[iVar2 /*3*/]) >= IntToFloat((iVar3 * iVar3)))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_79.f_5[iVar2]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_79.f_5[iVar2], false))
						{
							__LIB_0__::func_106(&(iLocal_79.f_5[iVar2]));
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_79.f_5[iVar2]))
				{
					__LIB_0__::func_106(&(iLocal_79.f_5[iVar2]));
				}
				iVar1++;
				if (iVar1 == iLocal_79)
				{
					iVar1 = 0;
				}
				iVar2++;
				if (iVar2 == iLocal_79.f_5)
				{
					iVar2 = 0;
				}
				if (func_1())
				{
					func_20();
				}
			}
			iVar4 = MISC::GET_GAME_TIMER();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x211
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_9()//Position - 0x5B7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bailbond2")) == 0)
	{
		if (!__LIB_0__::func_215(4))
		{
			return 0;
		}
	}
	if (Global_97361 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_31962)
	{
		return 0;
	}
	if (__LIB_0__::func_683() != 2)
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x99A
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_90);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_90);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_90, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (__LIB_0__::func_695(iLocal_79.f_5[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_79.f_5[iVar0], true, true);
			Local_88[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_79.f_5[iVar0], false) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (__LIB_0__::func_692(iLocal_79[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_79[iVar0], true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_79[iVar0], iLocal_90);
			__LIB_0__::func_631(iLocal_79[iVar0], &(Local_89[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		iVar0++;
	}
}

void func_20()//Position - 0xA66
{
	int iVar0;
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_90);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_90, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		__LIB_0__::func_621(&(Local_89[iVar0 /*8*/]));
		__LIB_0__::func_124(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		__LIB_0__::func_106(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

