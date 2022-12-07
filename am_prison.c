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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_64 = 0f;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<5> Local_96 = { 0, 0, 0, 0, 0 } ;
	struct<21> Local_97 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_44(ScriptParam_97);
	}
	else
	{
		__LIB_7__::func_124();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_6__::func_949() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			__LIB_7__::func_124();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_28())
			{
				__LIB_7__::func_124();
			}
			if (!__LIB_2__::func_233() || __LIB_1__::func_390(PLAYER::PLAYER_ID(), 0))
			{
				if ((((((((!Global_1836146 && !__LIB_9__::func_414(3)) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_6__::func_948(PLAYER::PLAYER_ID())) && !__LIB_2__::func_302(__LIB_1__::func_182(PLAYER::PLAYER_ID()))) && !__LIB_2__::func_303(PLAYER::PLAYER_ID(), 146)) && !__LIB_8__::func_768(PLAYER::PLAYER_ID()))
				{
					if (__LIB_0__::func_659(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 4, 100, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
							{
								if (!__LIB_0__::func_516(&(Local_96.f_1)))
								{
									__LIB_18__::func_364(&(Local_96.f_1));
								}
								else if (__LIB_5__::func_736(&(Local_96.f_1)) > 20f)
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
							else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
							}
							else
							{
								PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
							}
						}
						else if (__LIB_0__::func_516(&(Local_96.f_1)))
						{
							__LIB_1__::func_37(&(Local_96.f_1));
						}
					}
				}
			}
		}
		else
		{
			__LIB_7__::func_124();
		}
	}
}

int func_28()//Position - 0x1375
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_32())
		{
			iVar0 = 1;
		}
	}
	if (func_29())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_29()//Position - 0x139D
{
	switch (Local_96.f_0)
	{
		case 0:
			if (Global_1836146 || __LIB_9__::func_414(3))
			{
				Local_96.f_4 = PED::ADD_SCENARIO_BLOCKING_AREA(1413.7028f, 2341.5168f, -232.3945f, 2016.2095f, 2998.893f, 161.0299f, false, true, true, true);
			}
			__LIB_6__::func_896(&(uLocal_95[NETWORK::PARTICIPANT_ID_TO_INT()]), 1);
			Local_96.f_0 = 1;
			break;
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1693.1636f, 2559.6162f, 44.5649f) >= 1030225f)
			{
				Local_96.f_0 = 2;
			}
			break;
		case 2:
			if (Global_1836146 || __LIB_9__::func_414(3))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_96.f_4, false);
			}
			return 1;
			break;
	}
	return 0;
}

int func_32()//Position - 0x147C
{
	switch (iLocal_93)
	{
		case 0:
			iLocal_93 = 1;
			break;
		case 1:
			if (func_33())
			{
				iLocal_93 = 2;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_33()//Position - 0x14B8
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1693.1636f, 2559.6162f, 44.5649f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_44(struct<21> Param0)//Position - 0x163A
{
	__LIB_0__::func_673(__LIB_6__::func_875(Param0.f_0), Param0);
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_93, 2, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_95, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__::func_672())
	{
		__LIB_7__::func_124();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_7__::func_124();
	}
}

