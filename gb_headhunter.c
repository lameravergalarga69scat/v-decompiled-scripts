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
	float fLocal_62 = 0f;
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
	struct<872> Local_91 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_92[32];
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108[4] = { 0, 0, 0, 0 };
	struct<8> Local_109[30];
	var uLocal_110[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	struct<21> Local_118 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_100 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1041(ScriptParam_118);
	}
	else
	{
		func_987();
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_987();
		}
		Global_1943929.f_2 = Local_91.f_863;
		Global_1943929.f_3 = Local_91.f_864;
		switch (func_980(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_2__.func_247() == 1)
				{
					if (func_978())
					{
						func_977();
						if (func_976())
						{
							__LIB_33__.func_41(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							__LIB_7__.func_230(0f);
							iLocal_99 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_98);
						}
						else
						{
							__LIB_33__.func_41(166, 0, -1, 0);
						}
						func_959();
						func_958();
						func_957();
						Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (__LIB_2__.func_247() == 4)
				{
					Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			case 1:
				if (__LIB_38__.func_235(1))
				{
					Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (__LIB_2__.func_247() == 1)
				{
					func_945();
					func_925();
					func_900();
					func_318();
					func_309();
					if (func_976() || func_307())
					{
						__LIB_41__.func_880(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (__LIB_2__.func_247() == 4)
				{
					Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_75();
				}
				__LIB_0__.func_371();
				break;
			case 3:
				__LIB_1__.func_54(&(Local_91.f_845));
				if (__LIB_1__.func_53(&(Local_91.f_845)))
				{
					Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			case 2:
				Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			case 4:
				func_987();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_2__.func_247())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_91.f_863), &(Local_91.f_864));
						Local_91.f_0 = 1;
						Local_91.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_91.f_119 = PLAYER::PLAYER_ID();
						__LIB_33__.func_41(166, 1, -1, 0);
					}
					break;
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_91.f_0 = 4;
					}
					else if (__LIB_10__.func_923())
					{
						Local_91.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_2()//Position - 0x2E9
{
	if (__LIB_0__.func_114())
	{
		return 1;
	}
	if (BitTest(Local_91.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x313
{
	switch (Local_91.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (BitTest(Local_91.f_1, 1))
			{
				Local_91.f_117 = 2;
			}
			else if (BitTest(Local_91.f_1, 3))
			{
				Local_91.f_117 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()//Position - 0x366
{
	if (!BitTest(Local_91.f_1, 6))
	{
		if (!__LIB_0__.func_649(&(Local_91.f_849)))
		{
			__LIB_0__.func_580(&(Local_91.f_849), 0, 0);
		}
		else if (__LIB_2__.func_47(&(Local_91.f_849), 500, 0))
		{
			MISC::SET_BIT(&(Local_91.f_1), 6);
		}
	}
}

void func_9()//Position - 0x45B
{
	if (!__LIB_0__.func_649(&(Local_91.f_847)))
	{
		__LIB_0__.func_580(&(Local_91.f_847), 0, 0);
	}
	else if (__LIB_2__.func_47(&(Local_91.f_847), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_91.f_1), 3);
	}
}

int func_10()//Position - 0x498
{
	return Global_262145.f_15528 /* Tunable: EXEC_HEADHUNTER_TIME_LIMIT */;
}

void func_11()//Position - 0x4A7
{
	bool bVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			switch (Local_91.f_2[bVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (Local_91.f_2[bVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
							{
								Local_91.f_2[bVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_91.f_2[bVar0 /*26*/] == 1)
						{
							Local_91.f_2[bVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_91.f_2[bVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
							{
								if (__LIB_2__.func_63(Local_91.f_2[bVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_91.f_2[bVar0 /*26*/].f_2)))
									{
										if (BitTest(Local_91.f_109, bVar0))
										{
											MISC::SET_BIT(&(Local_91.f_108), bVar0);
											Local_91.f_2[bVar0 /*26*/].f_17 = 2;
										}
										else if (BitTest(Local_91.f_110, bVar0))
										{
											MISC::SET_BIT(&(Local_91.f_108), bVar0);
											Local_91.f_2[bVar0 /*26*/].f_17 = 2;
										}
										else if (BitTest(Local_91.f_111, bVar0))
										{
											MISC::SET_BIT(&(Local_91.f_108), bVar0);
											Local_91.f_2[bVar0 /*26*/].f_17 = 2;
										}
										else if (BitTest(Local_91.f_112, bVar0))
										{
											Local_91.f_2[bVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_91.f_2[bVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_91.f_2[bVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1)))
							{
								Local_91.f_2[bVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
							{
								if (!__LIB_2__.func_63(Local_91.f_2[bVar0 /*26*/].f_2))
								{
									Local_91.f_2[bVar0 /*26*/].f_17 = 3;
								}
								else if (BitTest(Local_91.f_112, bVar0))
								{
									Local_91.f_2[bVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), false))
							{
								Local_91.f_2[bVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							if (BitTest(Local_91.f_110, bVar0))
							{
								Local_91.f_2[bVar0 /*26*/].f_17 = 4;
							}
							else if (BitTest(Local_91.f_111, bVar0))
							{
								Local_91.f_2[bVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (Local_91.f_2[bVar0 /*26*/].f_24)
						{
							Local_91.f_2[bVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (Local_91.f_2[bVar0 /*26*/].f_25)
						{
							Local_91.f_2[bVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_91.f_2[bVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_91.f_2[bVar0 /*26*/] == 0)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_91.f_2[bVar0 /*26*/] == 2)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_91.f_2[bVar0 /*26*/].f_17 == 2)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_91.f_2[bVar0 /*26*/].f_17 == 3 || Local_91.f_2[bVar0 /*26*/].f_17 == 4)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_91.f_2[bVar0 /*26*/].f_24)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_91.f_2[bVar0 /*26*/].f_17 == 3 || Local_91.f_2[bVar0 /*26*/].f_17 == 4)
							{
								Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), false))
								{
									Local_91.f_2[bVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					case 6:
						break;
				}
				iVar1++;
			}
			bVar0++;
		}
	}
}

void func_15()//Position - 0xA4A
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
		{
			if (!BitTest(Local_91.f_116, bVar0))
			{
				if (func_20(bVar0))
				{
					if (__LIB_2__.func_63(Local_91.f_2[bVar0 /*26*/].f_2))
					{
						func_16(bVar0);
						MISC::SET_BIT(&(Local_91.f_116), bVar0);
					}
				}
			}
		}
		bVar0++;
	}
}

void func_16(bool bParam0)//Position - 0xAAA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!__LIB_6__.func_768(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_2[bParam0 /*26*/].f_2), iVar1, false);
			}
		}
		iVar0++;
	}
}

int func_20(bool bParam0)//Position - 0xB98
{
	int iVar0;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_3[iVar0]))
		{
			if (!__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()//Position - 0xC0E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	if (Local_91.f_0 != 4)
	{
		bLocal_95 = false;
		while (bLocal_95 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_95)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_95));
				if (!__LIB_6__.func_768(iVar3, 0))
				{
					if (__LIB_0__.func_154(iVar3, 1, 1))
					{
					}
					func_24(bLocal_95);
					func_23(bLocal_95);
					if (!BitTest(Local_91.f_1, 2))
					{
						if (!bVar2)
						{
							if ((BitTest(Local_91.f_1, 1) || BitTest(Local_91.f_1, 3)) || BitTest(Local_91.f_1, 5))
							{
								if (!BitTest(Local_92[bLocal_95 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!BitTest(Local_91.f_1, 5))
			{
				if (Local_91.f_118 > -1)
				{
					if (bLocal_95 == Local_91.f_118)
					{
						MISC::SET_BIT(&(Local_91.f_1), 5);
					}
				}
			}
			bLocal_95++;
		}
		func_22();
		bVar1 = false;
		while (bVar1 < 4)
		{
			if (BitTest(Local_91.f_113, bVar1))
			{
				iVar0++;
			}
			bVar1++;
		}
		if (Local_91.f_115 != iVar0)
		{
			Local_91.f_115 = iVar0;
		}
		if (!BitTest(Local_91.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_91.f_1), 1);
			}
		}
		if (!BitTest(Local_91.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_91.f_1), 2);
			}
		}
	}
}

void func_22()//Position - 0xD56
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
		{
			if (!BitTest(Local_91.f_113, bVar0))
			{
				if (!__LIB_0__.func_649(&(Local_91.f_853[bVar0 /*2*/])))
				{
					if (__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						__LIB_0__.func_580(&(Local_91.f_853[bVar0 /*2*/]), 0, 0);
					}
				}
				else if (__LIB_2__.func_47(&(Local_91.f_853[bVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_91.f_113), bVar0);
				}
			}
		}
		bVar0++;
	}
}

void func_23(bool bParam0)//Position - 0xDDE
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_91.f_109, bVar0))
		{
			if (BitTest(Local_92[bParam0 /*14*/].f_5, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_109), bVar0);
			}
		}
		if (!BitTest(Local_91.f_110, bVar0))
		{
			if (BitTest(Local_92[bParam0 /*14*/].f_2, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_110), bVar0);
			}
		}
		if (!BitTest(Local_91.f_112, bVar0))
		{
			if (BitTest(Local_92[bParam0 /*14*/].f_3, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_112), bVar0);
			}
		}
		if (!BitTest(Local_91.f_111, bVar0))
		{
			if (BitTest(Local_92[bParam0 /*14*/].f_4, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_111), bVar0);
			}
		}
		if (!BitTest(Local_91.f_113, bVar0))
		{
			if (BitTest(Local_92[bParam0 /*14*/].f_6, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_113), bVar0);
			}
			else if (BitTest(Local_92[bParam0 /*14*/].f_7, bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_113), bVar0);
			}
		}
		if (Local_91.f_2[bVar0 /*26*/] == 2)
		{
			if (!Local_91.f_2[bVar0 /*26*/].f_24)
			{
				if (BitTest(Local_92[bParam0 /*14*/].f_12, bVar0))
				{
					Local_91.f_2[bVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_91.f_2[bVar0 /*26*/].f_25)
			{
				if (BitTest(Local_92[bParam0 /*14*/].f_13, bVar0))
				{
					Local_91.f_2[bVar0 /*26*/].f_25 = 1;
				}
			}
		}
		bVar0++;
	}
}

void func_24(bool bParam0)//Position - 0xF24
{
	int iVar0;
	if (!BitTest(Local_91.f_114, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[iVar0 /*26*/].f_1))
					{
						if (__LIB_2__.func_63(Local_91.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0)), true);
							MISC::SET_BIT(&(Local_91.f_114), bParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_91.f_114), bParam0);
			}
			iVar0++;
		}
	}
}

int func_25()//Position - 0xFC2
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()//Position - 0xFEF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)//Position - 0x1046
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = Local_91.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_91.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!__LIB_0__.func_78(Var2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_29(int iParam0)//Position - 0x10F2
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	iVar0 = Local_91.f_2[iParam0 /*26*/].f_22;
	bVar1 = false;
	while (bVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]))
		{
			Var3 = { Local_91.f_123[iVar0 /*36*/].f_18[bVar1 /*3*/] };
			fVar4 = Local_91.f_123[iVar0 /*36*/].f_28[bVar1];
			if (!__LIB_0__.func_78(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_91.f_123[iVar0 /*36*/].f_32[bVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (__LIB_0__.func_584(iVar2))
					{
						if (!BitTest(Local_91.f_2[iParam0 /*26*/].f_23, bVar1))
						{
							MISC::CLEAR_AREA(Var3, 10f, true, false, false, true);
							MISC::SET_BIT(&(Local_91.f_2[iParam0 /*26*/].f_23), bVar1);
						}
						if (__LIB_18__.func_220(&(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), iVar2, Var3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), true);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), true, iLocal_98);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), false, 0);
							VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_7[bVar1]), 0);
						}
					}
				}
			}
		}
		bVar1++;
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0x14ED
{
	int iVar0;
	if (Local_91.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_91.f_2[iParam0 /*26*/].f_22;
	return !__LIB_0__.func_78(Local_91.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()//Position - 0x1529
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)//Position - 0x1580
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	iVar1 = Local_91.f_2[iParam0 /*26*/];
	iVar2 = Local_91.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_91.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!__LIB_0__.func_78(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)//Position - 0x1602
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_91.f_2[iParam0 /*26*/])
		{
			case 0:
				if (__LIB_0__.func_682(Local_91.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (__LIB_0__.func_584(iVar0))
									{
										if (__LIB_0__.func_668(&(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), Local_91.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true, 0f);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837206);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true, iLocal_98);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("WEAPON_MICROSMG"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (__LIB_0__.func_584(iVar0))
							{
								iVar2 = Local_91.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_91.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_91.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!__LIB_0__.func_78(Var5, 0f, 0f, 0f, 0))
								{
									if (__LIB_1__.func_263(&(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, fVar6, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true, 0f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1837206);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true, iLocal_98);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("WEAPON_CARBINERIFLE"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, false, false);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_40();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = __LIB_28__.func_485();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), false);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()//Position - 0x1A62
{
	return SYSTEM::ROUND(Global_262145.f_15536 /* Tunable: EXEC_HEADHUNTER_SECURITY_ACCURACY */);
}

var func_40()//Position - 0x1A7F
{
	return Global_262145.f_15535 /* Tunable: EXEC_HEADHUNTER_SECURITY_HEALTH */;
}

int func_43()//Position - 0x1B75
{
	return joaat("S_M_M_ChemSec_01");
}

bool func_45(int iParam0)//Position - 0x1BA4
{
	return (Local_91.f_2[iParam0 /*26*/] == 0 || Local_91.f_2[iParam0 /*26*/] == 2);
}

int func_46()//Position - 0x1BC6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)//Position - 0x1C0B
{
	switch (Local_91.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x1C74
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	switch (Local_91.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_91.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (__LIB_0__.func_584(iVar0))
					{
						if (__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_91.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_91.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (__LIB_18__.func_220(&(Local_91.f_2[iParam0 /*26*/].f_2), iVar0, Local_91.f_2[iParam0 /*26*/].f_13, Local_91.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true, true, false);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_2), true, iLocal_98);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_2[iParam0 /*26*/].f_2), false);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_91.f_2[iParam0 /*26*/].f_12;
						if (__LIB_0__.func_584(iVar1))
						{
							if (__LIB_0__.func_668(&(Local_91.f_2[iParam0 /*26*/].f_1), Local_91.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), Global_1837206);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, iLocal_98);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_91.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_91.f_2[iParam0 /*26*/].f_12;
					if (__LIB_0__.func_584(iVar1))
					{
						if (__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_91.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_91.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (__LIB_1__.func_263(&(Local_91.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_91.f_2[iParam0 /*26*/].f_13, Local_91.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), Global_1837206);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, iLocal_98);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_91.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_91.f_2[iParam0 /*26*/].f_12;
					if (__LIB_0__.func_584(iVar1))
					{
						if (__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_91.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_91.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_91.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_53(Var2);
							}
						}
						if (!__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (__LIB_1__.func_263(&(Local_91.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_91.f_2[iParam0 /*26*/].f_13, Local_91.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), Global_1837206);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, iLocal_98);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 44, true);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), joaat("WEAPON_PISTOL"), 99999999, false, true);
								fVar7 = func_52(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), Local_91.f_2[iParam0 /*26*/].f_13, fVar7, false, false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_51();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), iVar5);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = __LIB_9__.func_234();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), iVar6);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), func_49());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_91.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()//Position - 0x2312
{
	return SYSTEM::ROUND(Global_262145.f_15534 /* Tunable: EXEC_HEADHUNTER_TARGET_ACCURACY */);
}

var func_51()//Position - 0x232F
{
	return Global_262145.f_15533 /* Tunable: EXEC_HEADHUNTER_TARGET_HEALTH */;
}

float func_52(int iParam0)//Position - 0x233E
{
	if (__LIB_0__.func_78(Local_91.f_2[iParam0 /*26*/].f_13, -1597.6035f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(struct<3> Param0)//Position - 0x2372
{
	bool bVar0;
	bool bVar1;
	bVar0 = -1;
	bVar1 = false;
	while (bVar1 < 5)
	{
		if (bVar0 == -1)
		{
			if (!BitTest(Local_91.f_871, bVar1))
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 < 0)
	{
		return;
	}
	if (__LIB_0__.func_78(Param0, -1596.3986f, 3058.8145f, 31.5661f, 0))
	{
		Local_91.f_865[bVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.5502f, 3137.933f, 33.9384f, true, true, true, true);
		MISC::SET_BIT(&(Local_91.f_871), bVar0);
	}
	if (__LIB_0__.func_78(Param0, 2328.066f, 2576.5583f, 45.6677f, 0))
	{
		Local_91.f_865[bVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.3396f, 2486.0745f, 54.976f, 2413.662f, 2679.9817f, 43.5461f, true, true, true, true);
		MISC::SET_BIT(&(Local_91.f_871), bVar0);
	}
	if (__LIB_0__.func_78(Param0, -46.8187f, 1946.6593f, 189.5608f, 0))
	{
		Local_91.f_865[bVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.5771f, 194.9851f, -20.5564f, 2013.4683f, 171.5573f, true, true, true, true);
		MISC::SET_BIT(&(Local_91.f_871), bVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x24AD
{
	int iVar0;
	switch (Local_91.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_91.f_122);
			if (!__LIB_0__.func_78(Local_91.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (__LIB_41__.func_879(Local_91.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_91.f_123[iVar0 /*36*/] };
					*uParam2 = Local_91.f_123[iVar0 /*36*/].f_3;
					Local_91.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_91.f_122);
			if (!__LIB_0__.func_78(Local_91.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (__LIB_41__.func_879(Local_91.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_91.f_123[iVar0 /*36*/] };
					*uParam2 = Local_91.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_91.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!__LIB_0__.func_78(Local_91.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (__LIB_41__.func_879(Local_91.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_91.f_484[iVar0 /*36*/] };
					*uParam2 = Local_91.f_484[iVar0 /*36*/].f_3;
					Local_91.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_69()//Position - 0x2C2E
{
	Local_91.f_2[0 /*26*/] = 2;
	Local_91.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_91.f_2[0 /*26*/].f_12 = joaat("A_M_Y_Business_03");
	Local_91.f_2[1 /*26*/] = 2;
	Local_91.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_91.f_2[1 /*26*/].f_12 = joaat("A_M_Y_Business_03");
	Local_91.f_2[2 /*26*/] = 0;
	Local_91.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_91.f_2[2 /*26*/].f_12 = joaat("A_M_Y_Business_03");
	Local_91.f_2[3 /*26*/] = 0;
	Local_91.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_91.f_2[3 /*26*/].f_12 = joaat("A_M_Y_Business_03");
}

void func_70()//Position - 0x2CC6
{
	func_71();
	if (Local_91.f_122 == 0)
	{
		if (Local_91.f_121 == 0)
		{
			Local_91.f_122 = 10;
		}
		else
		{
			Local_91.f_122 = 9;
		}
	}
	if (BitTest(Local_91.f_1, 4))
	{
		return;
	}
	switch (Local_91.f_121)
	{
		case 0:
			Local_91.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_91.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_91.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_91.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_91.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_91.f_123[1 /*36*/] = { -1193.4076f, -218.8712f, 36.9448f };
			Local_91.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_91.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.7235f, -238.3963f, 36.9385f };
			Local_91.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.0111f, -231.2006f, 36.948f };
			Local_91.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.5201f, -229.3399f, 36.9564f };
			Local_91.f_123[2 /*36*/] = { -1646.5825f, -1102.8011f, 12.0181f };
			Local_91.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_91.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.1542f, 12.0207f };
			Local_91.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.8253f, -1093.1046f, 12.0269f };
			Local_91.f_123[3 /*36*/] = { 1171.3065f, -398.4046f, 70.5896f };
			Local_91.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_91.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.0662f, -405.9521f, 66.7792f };
			Local_91.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.9991f, -397.1275f, 66.928f };
			Local_91.f_123[4 /*36*/] = { 929.1267f, -1255.1079f, 24.4835f };
			Local_91.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_91.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_91.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.9584f, 24.652f };
			Local_91.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.0972f, 24.5269f };
			Local_91.f_123[5 /*36*/] = { 883.0366f, -2166.1875f, 31.2735f };
			Local_91.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_91.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.2205f, 31.2735f };
			Local_91.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.4636f, 29.5194f };
			Local_91.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.1643f, 35.2714f };
			Local_91.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_91.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_91.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.1094f, 5.0103f };
			Local_91.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.3037f, 5.0274f };
			Local_91.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_91.f_123[6 /*36*/].f_14[2] = 180f;
			Local_91.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_91.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_91.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_91.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_91.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_91.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_91.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_91.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_91.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_91.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_91.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_91.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_91.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.9946f, 21.8499f };
			Local_91.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_91.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.8176f, 22.1854f };
			Local_91.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.6953f, 21.6132f };
			Local_91.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_91.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_91.f_123[9 /*36*/] = { 306.2488f, -1000.8085f, 28.3108f };
			Local_91.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_91.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_91.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_91.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.5713f, 28.2617f };
			Local_91.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_91.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_91.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.5684f, 28.3096f };
			Local_91.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_91.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_91.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_91.f_484[0 /*36*/].f_3 = 179.583f;
			Local_91.f_484[1 /*36*/] = { 774.9319f, -1329.6525f, 25.243f };
			Local_91.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_91.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_91.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_91.f_484[3 /*36*/] = { 329.7707f, -1750.9174f, 28.2917f };
			Local_91.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_91.f_484[4 /*36*/] = { -1000.1754f, -2098.133f, 11.3367f };
			Local_91.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_91.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_91.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_91.f_484[6 /*36*/] = { -1482.4604f, -498.4642f, 31.8069f };
			Local_91.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_91.f_484[7 /*36*/] = { -1357.3246f, 579.7441f, 130.483f };
			Local_91.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_91.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_91.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_91.f_484[9 /*36*/] = { -84.1599f, -1024.1138f, 27.2205f };
			Local_91.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		case 1:
			Local_91.f_123[0 /*36*/] = { 1447.2708f, 3750.1653f, 30.9342f };
			Local_91.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_91.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.1421f, 3753.7502f, 30.9407f };
			Local_91.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.3882f, 31.0543f };
			Local_91.f_123[1 /*36*/] = { -46.8187f, 1946.6593f, 189.5608f };
			Local_91.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_91.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.1298f, 189.1861f };
			Local_91.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.9463f, 189.1861f };
			Local_91.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.0745f, 189.1861f };
			Local_91.f_123[2 /*36*/] = { 2002.5273f, 4978.5156f, 40.5969f };
			Local_91.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_91.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.2814f, 4976.885f, 40.4305f };
			Local_91.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.9471f, 4978.3833f, 40.1376f };
			Local_91.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.8303f, 4990.36f, 40.4477f };
			Local_91.f_123[3 /*36*/] = { 2939.4177f, 4623.833f, 47.7256f };
			Local_91.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_91.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.4956f, 47.7246f };
			Local_91.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.9114f, 4629.479f, 47.7251f };
			Local_91.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.9558f, 4609.8003f, 47.7277f };
			Local_91.f_123[4 /*36*/] = { 519.5331f, 3105.4644f, 39.5241f };
			Local_91.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_91.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.1946f, 39.4652f };
			Local_91.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.5598f, 39.4652f };
			Local_91.f_123[5 /*36*/] = { -1597.6035f, 3083.673f, 31.5661f };
			Local_91.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_91.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.2593f, 3078.7847f, 31.5661f };
			Local_91.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.1093f, 3080.765f, 31.5661f };
			Local_91.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4003f, 3070.0908f, 32.6629f };
			Local_91.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_91.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_91.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_91.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.6414f, 6562.2017f, 12.7644f };
			Local_91.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.1785f, 6544.879f, 13.713f };
			Local_91.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_91.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_91.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.2123f, 6560.1787f, 12.9444f };
			Local_91.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_91.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_91.f_123[7 /*36*/] = { 2328.066f, 2576.5583f, 45.6677f };
			Local_91.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_91.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_91.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.3853f, 2593.859f, 46.1125f };
			Local_91.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.9346f, 2549.4526f, 45.6677f };
			Local_91.f_123[8 /*36*/] = { -1600.2952f, 5204.928f, 3.3151f };
			Local_91.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_91.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.4084f, 5193.21f, 3.3151f };
			Local_91.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.5579f, 5176.3213f, 18.7159f };
			Local_91.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.5533f, 5206.5933f, 3.3151f };
			Local_91.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.9238f, 5170.995f, 18.5541f };
			Local_91.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_91.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_91.f_484[0 /*36*/] = { 1514.5256f, 1730.1399f, 108.9447f };
			Local_91.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_91.f_484[1 /*36*/] = { 2028.3313f, 3444.5444f, 42.9909f };
			Local_91.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_91.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_91.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_91.f_484[3 /*36*/] = { 200.9893f, 2351.4001f, 72.5299f };
			Local_91.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_91.f_484[4 /*36*/] = { -2337.7917f, 4041.646f, 29.414f };
			Local_91.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_91.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_91.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_91.f_484[6 /*36*/] = { 1586.2771f, 6445.4385f, 24.1337f };
			Local_91.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_91.f_484[7 /*36*/] = { 2574.845f, 5086.1475f, 43.6593f };
			Local_91.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_91.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_91.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_91.f_484[9 /*36*/] = { -1906.6606f, 1773.9332f, 170.3475f };
			Local_91.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_91.f_1), 4);
}

var func_71()//Position - 0x3AEA
{
	if (Local_91.f_121 != -1)
	{
		return Local_91.f_121;
	}
	if (Local_91.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) == joaat("City"))
		{
			Local_91.f_121 = 0;
		}
		else
		{
			Local_91.f_121 = 1;
		}
	}
	return Local_91.f_121;
}

void func_75()//Position - 0x3B7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_91.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!__LIB_6__.func_768(iVar2, 0))
			{
				if (iVar0 != __LIB_0__.func_160())
				{
					if (iVar2 == iVar0 || __LIB_6__.func_941(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837161[iVar1], Global_1837206);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837206, Global_1837161[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_78()//Position - 0x3CA3
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	if (func_976())
	{
		return;
	}
	if (!func_307())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_152(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!__LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_25__.func_938())
			{
				__LIB_41__.func_329(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
				MISC::SET_BIT(&uLocal_93, 18);
			}
		}
	}
	if (Local_91.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!__LIB_0__.func_78(Var0, 0f, 0f, 0f, 0))
	{
		__LIB_42__.func_314(166, Var0, &uLocal_112, 1140457472, 1144750080, 0);
	}
}

float func_152(int iParam0, bool bParam1)//Position - 0x56E4
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_91.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!__LIB_0__.func_680(Local_91.f_2[iVar2 /*26*/].f_1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(Var3, Var4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_307()//Position - 0x93EB
{
	int iVar0;
	iVar0 = -1;
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = __LIB_28__.func_902();
	}
	if (iVar0 != -1)
	{
		return BitTest(Local_92[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

void func_309()//Position - 0x9465
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_310(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_310(int iParam0)//Position - 0x94A2
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	bool bVar7;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar7 = false;
		while (bVar7 < 4)
		{
			if (!BitTest(Local_91.f_113, bVar7))
			{
				if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, bVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (!BitTest(Local_91.f_109, bVar7))
							{
								if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, bVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar7 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_2[bVar7 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_91.f_2[bVar7 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_977() == Local_91.f_118)
															{
																MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), bVar7);
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
						else if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
						{
							iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
							if (iVar2 == NETWORK::NET_TO_PED(Local_91.f_2[bVar7 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(iVar1))
										{
											iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
											{
												if (Var0.f_5)
												{
													if (iVar4 == PLAYER::PLAYER_ID())
													{
														Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), bVar7);
														Var6.f_2 = -1825847691;
														Var6.f_10 = PLAYER::PLAYER_ID();
														__LIB_1__.func_226(Var6, __LIB_2__.func_31(0));
														__LIB_18__.func_450("HUNT_TCKP" /* GXT: You assassinated a target. */, 0);
													}
												}
											}
											else if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7))
											{
												if (Var0.f_5)
												{
													iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
													MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
												}
											}
										}
										else if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7))
										{
											if (Var0.f_5)
											{
												MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
											}
										}
									}
									else if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7))
									{
										if (Var0.f_5)
										{
											MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
										}
									}
								}
								else if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, bVar7))
								{
									if (Var0.f_5)
									{
										MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), bVar7);
									}
								}
							}
						}
					}
				}
			}
			bVar7++;
		}
	}
	if (func_307())
	{
		if (!__LIB_0__.func_163(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (__LIB_13__.func_258(iVar3, 1))
											{
												if (Local_91.f_118 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_91.f_118));
													if (__LIB_6__.func_941(iVar3, iVar5, 1))
													{
														if (!__LIB_25__.func_938())
														{
															__LIB_41__.func_329(0);
															__LIB_21__.func_123();
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
			}
		}
	}
}

void func_318()//Position - 0x9A49
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (BitTest(uLocal_93, 14))
		{
			MISC::CLEAR_BIT(&uLocal_93, 14);
		}
		return;
	}
	iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	if (!BitTest(uLocal_93, 14))
	{
		if (Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&uLocal_93, 14);
	}
	if (!BitTest(uLocal_93, 15))
	{
		MISC::SET_BIT(&uLocal_93, 15);
		__LIB_18__.func_455();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_92[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_855();
					func_837();
					func_822();
					break;
				case 2:
					func_319();
					break;
				case 3:
					func_987();
					break;
				}
			}
	}
}

void func_319()//Position - 0x9B27
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_28__.func_902();
		iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (!BitTest(Local_92[iVar1 /*14*/].f_1, 4))
	{
		if (!BitTest(uLocal_93, 9))
		{
			if (BitTest(Local_91.f_1, 1))
			{
				if (iVar1 == Local_91.f_118 || func_977() == Local_91.f_118)
				{
					if (__LIB_33__.func_0(iVar2) >= 2)
					{
						sVar3 = __LIB_34__.func_329(iVar2);
						iVar4 = __LIB_21__.func_180(iVar2);
						__LIB_42__.func_516(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_HUNTD" /* GXT: ~a~ ~s~assassinated all targets */, sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_93, 6))
						{
							__LIB_41__.func_882(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_93, 6);
						}
						Var0.f_0 = func_652();
						Var0.f_1 = func_651();
						func_406(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
						iLocal_113 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&uLocal_93, 17);
						__LIB_0__.func_580(&uLocal_114, 0, 0);
					}
				}
				else if (func_307())
				{
					if (__LIB_13__.func_258(iVar2, 1))
					{
						if (__LIB_33__.func_0(iVar2) >= 2)
						{
							sVar3 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
							iVar4 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
							__LIB_42__.func_516(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_HUNTD" /* GXT: ~a~ ~s~assassinated all targets */, sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!BitTest(uLocal_93, 6))
							{
								__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
								MISC::SET_BIT(&uLocal_93, 6);
							}
							if (__LIB_13__.func_319(iVar2))
							{
								Var0.f_0 = func_405();
								Var0.f_1 = func_404();
							}
							func_406(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (__LIB_33__.func_0(iVar2) >= 2)
						{
							sVar3 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
							iVar4 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
							__LIB_42__.func_516(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_HUNTD" /* GXT: ~a~ ~s~assassinated all targets */, sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!BitTest(uLocal_93, 6))
							{
								__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
								MISC::SET_BIT(&uLocal_93, 6);
							}
							if (__LIB_13__.func_319(iVar2))
							{
								Var0.f_0 = func_405();
								Var0.f_1 = func_404();
							}
							func_406(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&uLocal_93, 9);
			}
			else if (BitTest(Local_91.f_1, 3))
			{
				iVar5 = (4 - Local_91.f_115);
				if (iVar1 == Local_91.f_118 || func_977() == Local_91.f_118)
				{
					if (__LIB_33__.func_0(iVar2) >= 2)
					{
						sVar3 = __LIB_28__.func_434();
						iVar4 = __LIB_21__.func_180(iVar2);
						__LIB_42__.func_516(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_HUNFD" /* GXT: ~a~ ~s~failed to assassinate all targets */, sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_93, 6))
						{
							__LIB_41__.func_882(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_93, 6);
						}
						Var0.f_0 = func_652();
						Var0.f_1 = func_651();
						func_406(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (__LIB_33__.func_0(iVar2) >= 2)
					{
						sVar3 = __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
						iVar4 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
						if (iVar5 == 1)
						{
							__LIB_42__.func_516(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_HUN1S" /* GXT: ~1~ ~s~target survived */, sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							__LIB_42__.func_516(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_HUNRS" /* GXT: ~1~ ~s~targets survived */, sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!BitTest(uLocal_93, 6))
						{
							__LIB_41__.func_882(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
							MISC::SET_BIT(&uLocal_93, 6);
						}
						if (__LIB_13__.func_319(iVar2))
						{
							Var0.f_0 = func_405();
							Var0.f_1 = func_404();
						}
						func_406(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				MISC::SET_BIT(&uLocal_93, 9);
			}
			else if (BitTest(Local_91.f_1, 5))
			{
				if (func_397())
				{
					if (func_976())
					{
						if (__LIB_33__.func_0(iVar2) >= 2)
						{
						}
					}
					else if (__LIB_33__.func_0(iVar2) >= 2)
					{
						__LIB_41__.func_17(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "BIGM_HUNTRBQ" /* GXT: The rival VIP quit the session */, 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					if (!BitTest(uLocal_93, 6))
					{
						__LIB_41__.func_882(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
						MISC::SET_BIT(&uLocal_93, 6);
					}
					func_406(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&uLocal_93, 9);
			}
		}
		if (BitTest(uLocal_93, 9))
		{
			__LIB_18__.func_455();
			if (!BitTest(uLocal_94, 8))
			{
				func_339();
				func_75();
				MISC::SET_BIT(&uLocal_94, 8);
			}
			if (!BitTest(uLocal_93, 10))
			{
			}
			if (__LIB_41__.func_881(&uLocal_101, 0, 0))
			{
				if (iVar1 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (BitTest(uLocal_93, 17))
			{
				if (__LIB_2__.func_47(&uLocal_114, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iLocal_113);
					MISC::CLEAR_BIT(&uLocal_93, 17);
				}
			}
		}
	}
}

void func_339()//Position - 0xAF47
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_108[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_108[iVar0]));
		}
		iVar0++;
	}
	if (BitTest(uLocal_93, 18))
	{
		__LIB_7__.func_51(1);
		MISC::CLEAR_BIT(&uLocal_93, 18);
	}
	func_350();
	func_340();
}

void func_340()//Position - 0xAF99
{
	bool bVar0;
	bool bVar1;
	if (!BitTest(uLocal_93, 7))
	{
		MISC::SET_BIT(&uLocal_93, 7);
		bVar0 = false;
		while (bVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
			{
				if (bVar1 != PLAYER::PLAYER_ID())
				{
					if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, bVar0))
					{
						__LIB_19__.func_770(bVar1, 432, 0, 0);
						__LIB_34__.func_309(bVar1, __LIB_1__.func_48(iLocal_111), 0, 0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_350()//Position - 0xB479
{
	if (BitTest(uLocal_93, 16))
	{
		__LIB_1__.func_431();
		__LIB_7__.func_177();
		MISC::CLEAR_BIT(&uLocal_93, 16);
	}
}

int func_397()//Position - 0xC9BE
{
	int iVar0;
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (!Global_2703735.f_4.f_10)
		{
			if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (__LIB_25__.func_938())
		{
			if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = __LIB_28__.func_902();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!BitTest(Local_92[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_404()//Position - 0xCC14
{
	return ((4 - Local_91.f_115) * Global_262145.f_16033 /* Tunable: EXEC1_HEADHUNTER_RP_REWARD_TARGETS_DEFENDED */);
}

int func_405()//Position - 0xCC2A
{
	return ((4 - Local_91.f_115) * Global_262145.f_16032 /* Tunable: EXEC1_HEADHUNTER_CASH_REWARD_TARGETS_DEFENDED */);
}

void func_406(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xCC40
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_28__.func_389(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_28__.func_367(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_10__.func_941(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_34__.func_259(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__.func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_21__.func_78();
				}
			}
			else if (__LIB_10__.func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_21__.func_77();
			}
			else
			{
				__LIB_21__.func_78();
			}
		}
		else
		{
			__LIB_19__.func_903();
		}
	}
	__LIB_38__.func_962(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_34__.func_255(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_39__.func_35(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_36__.func_810(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_36__.func_814(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__.func_301();
	if (iVar8 != __LIB_0__.func_160() && iParam0 != 148)
	{
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_41__.func_876(&iVar0, 1);
			}
		}
	}
	__LIB_36__.func_809(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__.func_444();
		__LIB_42__.func_662(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_41__.func_187(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_26__.func_304(iParam0, iVar0);
		if (__LIB_10__.func_932(iParam0))
		{
			if (__LIB_10__.func_931(iParam0) > -1)
			{
				__LIB_1__.func_445(__LIB_10__.func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__.func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
	{
		__LIB_34__.func_235(iParam0);
	}
	if ((__LIB_10__.func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__.func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__.func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__.func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__.func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__.func_859(iParam0))
	{
		if (__LIB_10__.func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_29__.func_159(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__.func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__.func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__.func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__.func_473(iParam0) || __LIB_10__.func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	func_407(bParam1, iParam0);
}

void func_407(bool bParam0, int iParam1)//Position - 0xD101
{
	int iVar0;
	bool bVar1;
	if (bParam0)
	{
		iVar0 = -1;
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
			case 237:
				bVar1 = true;
				break;
		}
		if (iVar0 != -1)
		{
			if (__LIB_19__.func_766(iVar0) && !func_417(iVar0))
			{
				func_408(iVar0);
			}
		}
		if (bVar1)
		{
			if (__LIB_19__.func_766(1) && !func_417(1))
			{
				func_408(1);
			}
		}
	}
}

void func_408(int iParam0)//Position - 0xD1B3
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		__LIB_0__.func_521(func_413(__LIB_20__.func_348(iParam0)), 1, -1);
		__LIB_19__.func_765(12, __LIB_9__.func_284(__LIB_20__.func_348(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

int func_413(int iParam0)//Position - 0x11E0B
{
	switch (iParam0)
	{
		case joaat("MP_Sum2_Tee_000_M"):
		case joaat("MP_Sum2_Tee_000_F"):
			return 34505;
			break;
		case joaat("MP_Sum2_Tee_001_M"):
		case joaat("MP_Sum2_Tee_001_F"):
			return 34375;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
			return 34397;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
			return 34398;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
			return 34395;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
			return 34396;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
			return 34399;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
			return 34400;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
		case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
			return 34389;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
			return 34410;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
			return 34409;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
			return 34404;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
			return 34403;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
			return 34406;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
			return 34408;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
			return 34405;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
			return 34391;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
			return 34394;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
			return 34390;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
			return 34392;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
			return 34393;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
			return 34730;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
			return 34731;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
			return 34732;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
			return 34733;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
			return 34736;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
			return 34737;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
			return 34734;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
			return 34735;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
			return 34401/*func_264*/;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
			return 34402;
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
			return 34407;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_BERD_5_0"):
		case joaat("DLC_MP_SUM2_F_BERD_5_0"):
			return 34451;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_1"):
		case joaat("DLC_MP_SUM2_F_BERD_5_1"):
			return 34452;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_2"):
		case joaat("DLC_MP_SUM2_F_BERD_5_2"):
			return 34453;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_3"):
		case joaat("DLC_MP_SUM2_F_BERD_5_3"):
			return 34454;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_0"):
		case joaat("DLC_MP_SUM2_F_BERD_6_0"):
			return 34418;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_1"):
		case joaat("DLC_MP_SUM2_F_BERD_6_1"):
			return 34419;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_2"):
		case joaat("DLC_MP_SUM2_F_BERD_6_2"):
			return 34420;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_7_0"):
		case joaat("DLC_MP_SUM2_F_BERD_7_0"):
			return 34372;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_8_0"):
		case joaat("DLC_MP_SUM2_F_BERD_8_0"):
			return 34421;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_0"):
		case joaat("DLC_MP_SUM2_F_BERD_9_0"):
			return 34415;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_1"):
		case joaat("DLC_MP_SUM2_F_BERD_9_1"):
			return 34416;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_2"):
		case joaat("DLC_MP_SUM2_F_BERD_9_2"):
			return 34417;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_0"):
		case joaat("DLC_MP_SUM2_F_BERD_10_0"):
			return 34425;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_1"):
		case joaat("DLC_MP_SUM2_F_BERD_10_1"):
			return 34426;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_2"):
		case joaat("DLC_MP_SUM2_F_BERD_10_2"):
			return 34427;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_3"):
		case joaat("DLC_MP_SUM2_F_BERD_10_3"):
			return 34428;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_4"):
		case joaat("DLC_MP_SUM2_F_BERD_10_4"):
			return 34429;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_5"):
		case joaat("DLC_MP_SUM2_F_BERD_10_5"):
			return 34430;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_6"):
		case joaat("DLC_MP_SUM2_F_BERD_10_6"):
			return 34431;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_7"):
		case joaat("DLC_MP_SUM2_F_BERD_10_7"):
			return 34432;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_8"):
		case joaat("DLC_MP_SUM2_F_BERD_10_8"):
			return 34433;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_9"):
		case joaat("DLC_MP_SUM2_F_BERD_10_9"):
			return 34434;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_10"):
		case joaat("DLC_MP_SUM2_F_BERD_10_10"):
			return 34435;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_11"):
		case joaat("DLC_MP_SUM2_F_BERD_10_11"):
			return 34436/*func_265*/;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_12"):
		case joaat("DLC_MP_SUM2_F_BERD_10_12"):
			return 34437;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_13"):
		case joaat("DLC_MP_SUM2_F_BERD_10_13"):
			return 34438;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_14"):
		case joaat("DLC_MP_SUM2_F_BERD_10_14"):
			return 34439;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_15"):
		case joaat("DLC_MP_SUM2_F_BERD_10_15"):
			return 34440;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_16"):
		case joaat("DLC_MP_SUM2_F_BERD_10_16"):
			return 34441;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_17"):
		case joaat("DLC_MP_SUM2_F_BERD_10_17"):
			return 34442;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_18"):
		case joaat("DLC_MP_SUM2_F_BERD_10_18"):
			return 34443;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_19"):
		case joaat("DLC_MP_SUM2_F_BERD_10_19"):
			return 34444;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_20"):
		case joaat("DLC_MP_SUM2_F_BERD_10_20"):
			return 34445;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_21"):
		case joaat("DLC_MP_SUM2_F_BERD_10_21"):
			return 34446;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_22"):
		case joaat("DLC_MP_SUM2_F_BERD_10_22"):
			return 34447;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_23"):
		case joaat("DLC_MP_SUM2_F_BERD_10_23"):
			return 34448/*func_266*/;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_24"):
		case joaat("DLC_MP_SUM2_F_BERD_10_24"):
			return 34449;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_25"):
		case joaat("DLC_MP_SUM2_F_BERD_10_25"):
			return 34450;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_F_BERD_0_0"):
			return 34423;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_F_BERD_1_0"):
			return 34703;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_F_BERD_1_1"):
			return 34704;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_2"):
		case joaat("DLC_MP_SUM2_F_BERD_1_2"):
			return 34705;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_3_0"):
		case joaat("DLC_MP_SUM2_F_BERD_3_0"):
			return 34424;
			break;
		case joaat("DLC_MP_SUM2_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_F_BERD_4_0"):
			return 34422;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
		case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
			return 34411;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
			return 34506;
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
			return 34507;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
			return 34380;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
			return 34388;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
			return 34383;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
			return 34381;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
			return 34385;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
			return 34382;
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
			return 34384;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
			return 34455;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
			return 34456;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
			return 34457;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
			return 34458;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
			return 34459;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
			return 34460;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
			return 34461;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
			return 34462;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
			return 34463;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
			return 34464;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
			return 34465;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
			return 34466;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
			return 34467;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
			return 34468;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
			return 34375;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
			return 34508;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
			return 34509;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
			return 34510;
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
			return 34387;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
			return 34469;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
			return 34470;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
			return 34471;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
			return 34472;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
			return 34473;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
			return 34474;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
			return 34475;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
			return 34476;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
			return 34477;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
			return 34478;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
			return 34479;
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
			return 34480;
			break;
		case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
		case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
			return 34386;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_0"):
		case joaat("DLC_MP_SUM2_F_FEET_5_0"):
			return 34481;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_1"):
		case joaat("DLC_MP_SUM2_F_FEET_5_1"):
			return 34482;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_2"):
		case joaat("DLC_MP_SUM2_F_FEET_5_2"):
			return 34483;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_3"):
		case joaat("DLC_MP_SUM2_F_FEET_5_3"):
			return 34484;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_4"):
		case joaat("DLC_MP_SUM2_F_FEET_5_4"):
			return 34485;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_5"):
		case joaat("DLC_MP_SUM2_F_FEET_5_5"):
			return 34486;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_6"):
		case joaat("DLC_MP_SUM2_F_FEET_5_6"):
			return 34487;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_7"):
		case joaat("DLC_MP_SUM2_F_FEET_5_7"):
			return 34488;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_8"):
		case joaat("DLC_MP_SUM2_F_FEET_5_8"):
			return 34489;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_0"):
		case joaat("DLC_MP_SUM2_F_FEET_6_0"):
			return 34490;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_1"):
		case joaat("DLC_MP_SUM2_F_FEET_6_1"):
			return 34491;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_2"):
		case joaat("DLC_MP_SUM2_F_FEET_6_2"):
			return 34492;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_3"):
		case joaat("DLC_MP_SUM2_F_FEET_6_3"):
			return 34493;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_4"):
		case joaat("DLC_MP_SUM2_F_FEET_6_4"):
			return 34494;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_5"):
		case joaat("DLC_MP_SUM2_F_FEET_6_5"):
			return 34495;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_6"):
		case joaat("DLC_MP_SUM2_F_FEET_6_6"):
			return 34496;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_7"):
		case joaat("DLC_MP_SUM2_F_FEET_6_7"):
			return 34497;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_8"):
		case joaat("DLC_MP_SUM2_F_FEET_6_8"):
			return 34498;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_9"):
		case joaat("DLC_MP_SUM2_F_FEET_6_9"):
			return 34499;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_10"):
		case joaat("DLC_MP_SUM2_F_FEET_6_10"):
			return 34500;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_11"):
		case joaat("DLC_MP_SUM2_F_FEET_6_11"):
			return 34501;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_12"):
		case joaat("DLC_MP_SUM2_F_FEET_6_12"):
			return 34502;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_13"):
		case joaat("DLC_MP_SUM2_F_FEET_6_13"):
			return 34503;
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_14"):
		case joaat("DLC_MP_SUM2_F_FEET_6_14"):
			return 34504;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_2"):
			return 32309;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_3"):
			return 32310;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_4"):
			return 32311;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
			return 32307;
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
			return 32308;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_0"):
		case joaat("DLC_MP_FIXER_F_BERD_0_0"):
			return 32295;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_1"):
		case joaat("DLC_MP_FIXER_F_BERD_0_1"):
			return 32296;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_2"):
		case joaat("DLC_MP_FIXER_F_BERD_0_2"):
			return 32297;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_3"):
		case joaat("DLC_MP_FIXER_F_BERD_0_3"):
			return 32298;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_0"):
		case joaat("DLC_MP_FIXER_F_BERD_1_0"):
			return 32299;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_1"):
		case joaat("DLC_MP_FIXER_F_BERD_1_1"):
			return 32300;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_2"):
		case joaat("DLC_MP_FIXER_F_BERD_1_2"):
			return 32301;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_3"):
		case joaat("DLC_MP_FIXER_F_BERD_1_3"):
			return 32302;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_0"):
		case joaat("DLC_MP_FIXER_F_BERD_2_0"):
			return 32303;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_1"):
		case joaat("DLC_MP_FIXER_F_BERD_2_1"):
			return 32304;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_2"):
		case joaat("DLC_MP_FIXER_F_BERD_2_2"):
			return 32305;
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_3"):
		case joaat("DLC_MP_FIXER_F_BERD_2_3"):
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_TUNER_M_DECL_30_1"):
		case joaat("DLC_MP_TUNER_F_DECL_29_1"):
			return 32273;
			break;
		case joaat("MP_Tuner_Tee_008_M"):
		case joaat("MP_Tuner_Tee_008_F"):
			return 31768;
			break;
		case joaat("MP_Tuner_Tee_010_M"):
		case joaat("MP_Tuner_Tee_010_F"):
			return 31769;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
			return 31784;
			break;
		case joaat("MP_Tuner_Tee_011_M"):
		case joaat("MP_Tuner_Tee_011_F"):
			return 31770;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
			return 31777;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
		case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
			return 31788;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
			return 31787;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
			return 31786;
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
			return 31785;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
			return 31766;
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
			return 31767;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
			return 31789;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
			return 31790;
			break;
		case -1372800957:
			return 31791;
			break;
		case -1125170035:
			return 31792;
			break;
		case 1276052663:
			return 31793;
			break;
		case joaat("MP_Tuner_Tee_012_M"):
		case joaat("MP_Tuner_Tee_012_F"):
			return 31771;
			break;
		case joaat("MP_Tuner_Tee_013_M"):
		case joaat("MP_Tuner_Tee_013_F"):
			return 31772;
			break;
		case joaat("MP_Tuner_Tee_014_M"):
		case joaat("MP_Tuner_Tee_014_F"):
			return 31773;
			break;
		case joaat("MP_Tuner_Tee_015_M"):
		case joaat("MP_Tuner_Tee_015_F"):
			return 31774;
			break;
		case joaat("MP_Tuner_Tee_016_M"):
		case joaat("MP_Tuner_Tee_016_F"):
			return 31775;
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_9"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_Tee_000_M"):
		case joaat("mpSum_Tee_000_F"):
			return 30260;
			break;
		case joaat("mpSum_Tee_001_M"):
		case joaat("mpSum_Tee_001_F"):
			return 30261;
			break;
		case joaat("mpSum_Tee_002_M"):
		case joaat("mpSum_Tee_002_F"):
			return 30262;
			break;
		case joaat("mpSum_Tee_003_M"):
		case joaat("mpSum_Tee_003_F"):
			return 30263;
			break;
		case joaat("mpSum_Tee_004_M"):
		case joaat("mpSum_Tee_004_F"):
			return 30264;
			break;
		case joaat("mpSum_Tee_005_M"):
		case joaat("mpSum_Tee_005_F"):
			return 30265;
			break;
		case joaat("mpSum_Tee_006_M"):
		case joaat("mpSum_Tee_006_F"):
			return 30266;
			break;
		case joaat("mpSum_Tee_007_M"):
		case joaat("mpSum_Tee_007_F"):
			return 30267;
			break;
		case joaat("mpSum_Tee_008_M"):
		case joaat("mpSum_Tee_008_F"):
			return 30268;
			break;
		case joaat("mpSum_Tee_009_M"):
		case joaat("mpSum_Tee_009_F"):
			return 30269;
			break;
		case joaat("mpSum_Tee_010_M"):
		case joaat("mpSum_Tee_010_F"):
			return 30270;
			break;
		case joaat("mpSum_Tee_011_M"):
		case joaat("mpSum_Tee_011_F"):
			return 30271;
			break;
		case joaat("mpSum_Tee_012_M"):
		case joaat("mpSum_Tee_012_F"):
			return 30272;
			break;
		case joaat("mpSum_Tee_013_M"):
		case joaat("mpSum_Tee_013_F"):
			return 30273;
			break;
		case joaat("mpSum_Tee_014_M"):
		case joaat("mpSum_Tee_014_F"):
			return 30274;
			break;
		case joaat("mpSum_Tee_015_M"):
		case joaat("mpSum_Tee_015_F"):
			return 30275;
			break;
		case joaat("mpSum_Tee_016_M"):
		case joaat("mpSum_Tee_016_F"):
			return 30276;
			break;
		case joaat("mpSum_Tee_017_M"):
		case joaat("mpSum_Tee_017_F"):
			return 30277;
			break;
		case joaat("mpSum_Tee_018_M"):
		case joaat("mpSum_Tee_018_F"):
			return 30278;
			break;
		case joaat("mpSum_Tee_019_M"):
		case joaat("mpSum_Tee_019_F"):
			return 30279;
			break;
		case joaat("mpSum_Tee_020_M"):
		case joaat("mpSum_Tee_020_F"):
			return 30280;
			break;
		case joaat("mpSum_Tee_021_M"):
		case joaat("mpSum_Tee_021_F"):
			return 30281;
			break;
		case joaat("mpSum_Tee_022_M"):
		case joaat("mpSum_Tee_022_F"):
			return 30282;
			break;
		case joaat("mpSum_Tee_023_M"):
		case joaat("mpSum_Tee_023_F"):
			return 30283;
			break;
		case joaat("mpSum_Tee_024_M"):
		case joaat("mpSum_Tee_024_F"):
			return 30284;
			break;
		case joaat("mpSum_Tee_025_M"):
		case joaat("mpSum_Tee_025_F"):
			return 30285;
			break;
		case joaat("mpSum_Tee_026_M"):
		case joaat("mpSum_Tee_026_F"):
			return 30286;
			break;
		case joaat("mpSum_Tee_027_M"):
		case joaat("mpSum_Tee_027_F"):
			return 30287;
			break;
		case joaat("mpSum_Tee_028_M"):
		case joaat("mpSum_Tee_028_F"):
			return 30288;
			break;
		case joaat("mpSum_Tee_029_M"):
		case joaat("mpSum_Tee_029_F"):
			return 30289;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_4"):
		case joaat("DLC_MP_SUM_F_BERD_3_4"):
			return 30290;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_5"):
		case joaat("DLC_MP_SUM_F_BERD_3_5"):
			return 30291;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_6"):
		case joaat("DLC_MP_SUM_F_BERD_3_6"):
			return 30292;
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_7"):
		case joaat("DLC_MP_SUM_F_BERD_3_7"):
			return 30293;
			break;
		case joaat("DLC_MP_SUM_M_LEGS_1_25"):
		case joaat("DLC_MP_SUM_F_LEGS_2_25"):
			return 30294;
			break;
		case joaat("DLC_MP_SUM_M_JBIB_0_25"):
		case joaat("DLC_MP_SUM_F_JBIB_0_25"):
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		default:
	}
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return 25002;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
			return 110;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
			return 111;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
			return 112;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
			return 4333;
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
			return 4334;
		case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
		case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
			return 4335;
		case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			return 3750;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		default:
	}
	return -1;
}

int func_417(int iParam0)//Position - 0x15B78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = __LIB_20__.func_348(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (__LIB_6__.func_925())
	{
		iVar3 = __LIB_9__.func_285(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = __LIB_6__.func_758(joaat("MP_F_Freemode_01"), iVar0, __LIB_9__.func_285(iVar0), 4);
		}
		iVar2 = __LIB_0__.func_240(iVar0, 4);
		if ((__LIB_0__.func_137(func_413(iVar0), -1) || (iVar2 != -1 && __LIB_24__.func_976(iVar2, -1))) || (iVar1 != -99 && __LIB_38__.func_257(joaat("MP_F_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = __LIB_9__.func_285(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = __LIB_6__.func_758(joaat("MP_M_Freemode_01"), iVar0, __LIB_9__.func_285(iVar0), 3);
		}
		iVar2 = __LIB_0__.func_240(iVar0, 3);
		if ((__LIB_0__.func_137(func_413(iVar0), -1) || (iVar2 != -1 && __LIB_24__.func_976(iVar2, -1))) || (iVar1 != -99 && __LIB_38__.func_257(joaat("MP_M_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_651()//Position - 0x3B970
{
	return (Local_91.f_115 * Global_262145.f_15540 /* Tunable: EXEC_HEADHUNTER_RP_PER_TARGET */);
}

int func_652()//Position - 0x3B984
{
	return (Local_91.f_115 * Global_262145.f_15539 /* Tunable: EXEC_HEADHUNTER_CASH_PER_TARGET */);
}

void func_822()//Position - 0x437B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_976() && !func_307())
	{
		return;
	}
	if (!func_397())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	iVar1 = __LIB_33__.func_0(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (__LIB_0__.func_649(&(Local_91.f_847)))
	{
		iVar2 = (func_10() - __LIB_1__.func_295(&(Local_91.f_847), 0, 0));
		iVar3 = (__LIB_1__.func_361() - Local_91.f_115);
		func_833(iVar2);
		if (iVar2 > 30000)
		{
			func_823(iVar3, "HUNT_HUD" /* GXT: TARGETS REMAINING */, iVar2, 1, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
		else if (iVar2 > 0)
		{
			func_823(iVar3, "HUNT_HUD" /* GXT: TARGETS REMAINING */, iVar2, 6, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
		else
		{
			func_823(iVar3, "HUNT_HUD" /* GXT: TARGETS REMAINING */, 0, 6, "GB_WORK_END" /* GXT: VIP WORK END */);
		}
	}
}

void func_823(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x43883
{
	char* sVar0;
	if (__LIB_34__.func_578(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	__LIB_6__.func_986(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam4))
	{
		sVar0 = sParam4;
	}
	__LIB_28__.func_420(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_833(int iParam0)//Position - 0x43DB2
{
	if (BitTest(uLocal_94, 8))
	{
		func_834();
		return;
	}
	if (!BitTest(uLocal_94, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&uLocal_94, 15);
				MISC::SET_BIT(&uLocal_94, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			}
		}
	}
	if (BitTest(uLocal_94, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!BitTest(uLocal_94, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&uLocal_94, 11);
				}
			}
			else
			{
				BitTest(uLocal_94, 11);
				if (!BitTest(uLocal_94, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&uLocal_94, 14);
					}
				}
			}
			if (BitTest(uLocal_94, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!BitTest(uLocal_94, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						MISC::SET_BIT(&uLocal_94, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&uLocal_94, 9);
						}
					}
				}
			}
		}
	}
}

void func_834()//Position - 0x43ECB
{
	if (BitTest(uLocal_94, 8))
	{
		if (BitTest(uLocal_94, 9))
		{
			if (!BitTest(uLocal_94, 10))
			{
				if (BitTest(uLocal_94, 11))
				{
					if (!BitTest(uLocal_94, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
					}
				}
				if (!BitTest(uLocal_94, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&uLocal_94, 16);
					}
				}
				if (BitTest(uLocal_94, 16))
				{
					if (!BitTest(uLocal_94, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&uLocal_94, 13);
						}
					}
					if (BitTest(uLocal_94, 13))
					{
						MISC::SET_BIT(&uLocal_94, 10);
					}
				}
			}
		}
	}
}

void func_837()//Position - 0x43FC0
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar3 = __LIB_28__.func_902();
		iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	iVar4 = __LIB_33__.func_0(iVar2);
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_397())
		{
			if (__LIB_7__.func_260("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */))
			{
				__LIB_18__.func_455();
			}
			if (__LIB_7__.func_260("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */))
			{
				__LIB_18__.func_455();
			}
			if (__LIB_7__.func_260("HUNT_TOBJ" /* GXT: Help <C>~a~</C> ~s~assassinate the ~a~. */))
			{
				__LIB_18__.func_455();
			}
			if (__LIB_7__.func_260("HUNT_DOBJ" /* GXT: Defend the ~b~targets ~s~against ~a~. */))
			{
				__LIB_18__.func_455();
			}
			if (__LIB_7__.func_260("HUNT_DOBJ1L" /* GXT: Defend the last ~b~target ~s~against ~a~. */))
			{
				__LIB_18__.func_455();
			}
			return;
		}
	}
	else if (!BitTest(Local_92[iVar3 /*14*/].f_1, 6))
	{
		__LIB_18__.func_455();
		return;
	}
	if (iVar4 < 3)
	{
		if (__LIB_7__.func_260("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("HUNT_TOBJ" /* GXT: Help <C>~a~</C> ~s~assassinate the ~a~. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("HUNT_DOBJ" /* GXT: Defend the ~b~targets ~s~against ~a~. */))
		{
			__LIB_18__.func_455();
		}
		if (__LIB_7__.func_260("HUNT_DOBJ1L" /* GXT: Defend the last ~b~target ~s~against ~a~. */))
		{
			__LIB_18__.func_455();
		}
		return;
	}
	bVar5 = func_853() == true;
	if (iVar3 == Local_91.f_118)
	{
		if (!bVar5)
		{
			if (!__LIB_7__.func_260("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */))
			{
				__LIB_25__.func_25("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */, 0);
			}
		}
		else if (!__LIB_7__.func_260("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */))
		{
			__LIB_25__.func_25("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */, 0);
		}
	}
	else if (func_977() == Local_91.f_118)
	{
		if (!bVar5)
		{
			if (!__LIB_7__.func_260("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */))
			{
				__LIB_25__.func_25("HUNT_OBJ" /* GXT: Assassinate the ~r~targets. */, 0);
			}
		}
		else if (!__LIB_7__.func_260("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */))
		{
			__LIB_25__.func_25("HUNT_OBJ1L" /* GXT: Assassinate the final ~r~target. */, 0);
		}
	}
	else if (func_307())
	{
		if (Local_91.f_119 > -1)
		{
			if (!bVar5)
			{
				if (!__LIB_7__.func_260("HUNT_DOBJ" /* GXT: Defend the ~b~targets ~s~against ~a~. */))
				{
					StringCopy(&Var1, __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119)), 64);
					iVar0 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
					__LIB_36__.func_297("HUNT_DOBJ" /* GXT: Defend the ~b~targets ~s~against ~a~. */, &Var1, iVar0, 0);
				}
			}
			else if (!__LIB_7__.func_260("HUNT_DOBJ1L" /* GXT: Defend the last ~b~target ~s~against ~a~. */))
			{
				StringCopy(&Var1, __LIB_34__.func_329(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119)), 64);
				iVar0 = __LIB_21__.func_180(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119));
				__LIB_36__.func_297("HUNT_DOBJ1L" /* GXT: Defend the last ~b~target ~s~against ~a~. */, &Var1, iVar0, 0);
			}
		}
	}
}

int func_853()//Position - 0x447B9
{
	return (4 - Local_91.f_115);
}

void func_855()//Position - 0x44818
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_976() && !func_307())
	{
		return;
	}
	if (!func_397())
	{
		return;
	}
	iVar1 = __LIB_0__.func_160();
	iVar2 = -1;
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = __LIB_28__.func_902();
		iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!BitTest(uLocal_93, 1))
	{
		iVar0 = __LIB_33__.func_0(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_91.f_118 || func_977() == Local_91.f_118)
			{
				if (__LIB_37__.func_818(82, "HUNT_TXT1" /* GXT: One of our clients needs his relationship with some former associates brought to a quick and final conclusion. We're anticipating resistance and police interference down the line. */, 2, 0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_41__.func_17(86, "BIGM_HUNTN" /* GXT: HEADHUNTER */, "BIGM_HUNTBD" /* GXT: Assassinate the targets */, 1, -1, 2, 1, 0);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						__LIB_40__.func_482(1);
						__LIB_38__.func_232(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					__LIB_38__.func_232(-1, 0, 0, -1, 0, 0);
				}
				__LIB_41__.func_17(86, "BIGM_HUNTN" /* GXT: HEADHUNTER */, "BIGM_HUNTPR" /* GXT: Protect the targets */, 1, -1, 2, 1, 0);
			}
		}
		MISC::SET_BIT(&uLocal_93, 1);
	}
}

void func_900()//Position - 0x4E86D
{
	if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_902();
			func_319();
			if (Local_91.f_117 == 2)
			{
				Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_91.f_117 == 3)
			{
				Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		case 2:
			func_319();
			if (func_901())
			{
				func_834();
			}
			if (Local_91.f_117 == 3)
			{
				Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		case 3:
			func_987();
			break;
	}
}

bool func_901()//Position - 0x4E909
{
	return ((BitTest(Local_91.f_1, 1) || BitTest(Local_91.f_1, 3)) || BitTest(Local_91.f_1, 5));
}

void func_902()//Position - 0x4E92F
{
	func_924();
	func_923();
	func_855();
	func_837();
	func_912();
	func_911();
	func_905();
	func_904();
	func_822();
	__LIB_0__.func_371();
}

void func_904()//Position - 0x4E967
{
	if (func_901())
	{
		return;
	}
	if (!func_976())
	{
		return;
	}
	if (!Global_262145.f_15532 /* Tunable: EXEC_HEADHUNTER_WANTED_PERSISTS_DEATH */)
	{
		return;
	}
	if (Local_91.f_115 == 0)
	{
		return;
	}
}

void func_905()//Position - 0x4E99D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (func_976())
	{
		return;
	}
	if (func_901())
	{
		return;
	}
	fVar2 = func_152(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_100 != iVar0)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[iVar0 /*26*/].f_1), false) };
				__LIB_26__.func_812(10, 0, 0, 0, 0);
				__LIB_37__.func_459(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_100 = iVar0;
				MISC::SET_BIT(&uLocal_93, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_350();
	}
}

void func_911()//Position - 0x4EC16
{
	int iVar0;
	if (iLocal_97 != Local_91.f_115)
	{
		if (func_976())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_91.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_15529 /* Tunable: EXEC_HEADHUNTER_1ST_TARGET_WANTED */)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15529 /* Tunable: EXEC_HEADHUNTER_1ST_TARGET_WANTED */, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
							case 2:
								if (iVar0 < Global_262145.f_15530 /* Tunable: EXEC_HEADHUNTER_2ND_TARGET_WANTED */)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15530 /* Tunable: EXEC_HEADHUNTER_2ND_TARGET_WANTED */, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
							case 3:
								if (iVar0 < Global_262145.f_15531 /* Tunable: EXEC_HEADHUNTER_3RD_TARGET_WANTED */)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_15531 /* Tunable: EXEC_HEADHUNTER_3RD_TARGET_WANTED */);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15531 /* Tunable: EXEC_HEADHUNTER_3RD_TARGET_WANTED */, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
						}
						iLocal_97 = Local_91.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_97 = Local_91.f_115;
		}
	}
}

void func_912()//Position - 0x4ED07
{
	int iVar0;
	if (!func_397())
	{
		if (__LIB_2__.func_161("HUNT_HELPA" /* GXT: You have started Headhunter. Assassinate the targets ~a~~s~ within the time limit to earn cash and RP. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar0 = __LIB_33__.func_0(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (__LIB_2__.func_161("HUNT_HELPA" /* GXT: You have started Headhunter. Assassinate the targets ~a~~s~ within the time limit to earn cash and RP. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!BitTest(uLocal_93, 2))
	{
		if (!__LIB_1__.func_480(86))
		{
			if (__LIB_18__.func_448(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_91.f_118)
				{
					__LIB_15__.func_255("HUNT_HELPA" /* GXT: You have started Headhunter. Assassinate the targets ~a~~s~ within the time limit to earn cash and RP. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */, 6, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_93, 2);
				}
				else if (func_977() == Local_91.f_118)
				{
					__LIB_15__.func_255("HUNT_HELPAG" /* GXT: Your CEO has started Headhunter. Assassinate the targets ~a~~s~ within the time limit to earn cash and RP. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */, 6, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_93, 2);
				}
				else if (func_307())
				{
					__LIB_15__.func_255("HUNT_HELPD" /* GXT: Headhunter has started. Protect the targets ~a~ ~s~from the attacking Organization to earn cash and RP. */, "HUNT_TARRVL" /* GXT: ~BLIP_VIP~ */, 9, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_93, 2);
				}
			}
		}
	}
	if (BitTest(uLocal_93, 2))
	{
		if (!BitTest(uLocal_93, 3))
		{
			if (__LIB_18__.func_448(0, 1, 1, 1))
			{
				if (!__LIB_2__.func_161("HUNT_HELPA" /* GXT: You have started Headhunter. Assassinate the targets ~a~~s~ within the time limit to earn cash and RP. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_91.f_118 || func_977() == Local_91.f_118)
					{
						__LIB_1__.func_278("HUNT_HELPB" /* GXT: All members of your Organization will gain a Wanted Level when a target is assassinated. Plan and coordinate your movements if you wish to avoid the Cops */, -1);
						__LIB_36__.func_794(1);
						MISC::SET_BIT(&uLocal_93, 3);
					}
				}
			}
		}
	}
}

void func_923()//Position - 0x4F020
{
	var uVar0;
	float fVar1;
	fVar1 = func_152(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!__LIB_13__.func_319(PLAYER::PLAYER_ID()))
		{
			__LIB_21__.func_123();
		}
	}
}

void func_924()//Position - 0x4F04C
{
	if (__LIB_25__.func_938())
	{
		if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			__LIB_6__.func_990(0);
			MISC::CLEAR_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_976())
		{
			if (!__LIB_0__.func_674())
			{
				if (BitTest(Local_91.f_1, 6))
				{
					__LIB_6__.func_990(1);
					MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_925()//Position - 0x4F0D1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	iVar4 = __LIB_0__.func_160();
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, bVar0))
		{
			if (!BitTest(Local_91.f_110, bVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_977() == Local_91.f_118)
							{
								if (__LIB_20__.func_352(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), bVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, bVar0))
		{
			if (!BitTest(Local_91.f_112, bVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
				{
					if (func_942(bVar0))
					{
						MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), bVar0);
					}
				}
			}
		}
		if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, bVar0))
		{
			if (!BitTest(Local_91.f_111, bVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), true), 10f, true))
						{
							MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), bVar0);
						}
					}
				}
			}
		}
		func_941(bVar0);
		if (func_397())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_108[bVar0]))
			{
				if (!func_901())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							iLocal_108[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1));
							if (func_977() == Local_91.f_118)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_108[bVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_108[bVar0], 432);
								__LIB_6__.func_958(&(iLocal_108[bVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_108[bVar0], 480);
								__LIB_6__.func_958(&(iLocal_108[bVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_108[bVar0], true);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_108[bVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_108[bVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_108[bVar0], "HUNT_BLIP" /* GXT: Target */);
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
			{
				if (__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_108[bVar0]));
				}
				else if (func_901())
				{
					HUD::REMOVE_BLIP(&(iLocal_108[bVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_108[bVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_108[bVar0]));
		}
		func_939(bVar0);
		func_938(bVar0);
		func_936(bVar0);
		switch (Local_91.f_2[bVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
					{
						if (__LIB_2__.func_63(Local_91.f_2[bVar0 /*26*/].f_2))
						{
							if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_91.f_2[bVar0 /*26*/].f_2)))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_91.f_2[bVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							if (__LIB_2__.func_63(Local_91.f_2[bVar0 /*26*/].f_2))
							{
								if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_91.f_2[bVar0 /*26*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0) || BitTest(Local_91.f_108, bVar0))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_91.f_2[bVar0 /*26*/].f_2), 30f, 786469);
											if (BitTest(Local_91.f_108, bVar0))
											{
												MISC::CLEAR_BIT(&(Local_91.f_108), bVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
							{
								if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
									{
										TASK::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), 40000f, 0);
									}
								}
							}
						}
					}
				}
				break;
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 0)
							{
								if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
									{
										iVar2 = func_932(bVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), iVar2, 500f, -1, false, true);
										}
									}
								}
							}
						}
					}
				}
				break;
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED"));
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_SEEK_COVER_FROM_PED"));
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), true);
									fVar5 = 0f;
									iVar4 = func_931(bVar0, &fVar5);
									if (iVar4 != __LIB_0__.func_160())
									{
										TASK::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, false);
									}
								}
							}
						}
					}
				}
				break;
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
				{
					if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_1))
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"));
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_1))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, false);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_91.f_2[bVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				case 1:
					break;
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"));
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, false);
									}
								}
							}
						}
					}
					break;
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED"));
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED"));
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
					{
						if (!__LIB_0__.func_680(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"));
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (__LIB_20__.func_350(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), true);
											TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_2[bVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		bVar0++;
	}
	if (func_976())
	{
		func_926();
	}
}

void func_926()//Position - 0x4FCF1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		__LIB_7__.func_121(uLocal_110[iVar0], &(Local_109[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
		iVar0++;
	}
}

int func_931(bool bParam0, float fParam1)//Position - 0x50019
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__.func_160();
	fVar1 = 100000000f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
			if (!__LIB_6__.func_768(iVar5, 0))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (iVar4 == Local_91.f_118 || Local_92[iVar4 /*14*/].f_10 == Local_91.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Var3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != __LIB_0__.func_160())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_932(bool bParam0)//Position - 0x500DF
{
	int iVar0;
	int iVar1;
	iVar1 = func_933(bParam0);
	if (iVar1 != __LIB_0__.func_160())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_933(int iParam0)//Position - 0x50102
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__.func_160();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (__LIB_13__.func_258(iVar5, 1))
			{
				if (!BitTest(Local_92[iVar3 /*14*/].f_1, 1))
				{
					if (__LIB_0__.func_603(iVar5) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_91.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Var4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_936(bool bParam0)//Position - 0x50215
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	if (!func_397())
	{
		return;
	}
	if (__LIB_33__.func_0(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_976() && !func_307())
	{
		return;
	}
	if (func_901())
	{
		return;
	}
	if (func_976())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		if (!__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1)))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, true, true, 2, false, 0, 0, false);
			}
			else
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), false);
				__LIB_2__.func_240(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_938(bool bParam0)//Position - 0x503BC
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bool bVar4;
	if (Local_91.f_2[bParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_91.f_2[bParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_977() != Local_91.f_118)
	{
		return;
	}
	if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, bParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		return;
	}
	if (__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(Var1, Var2) < 5625f)
	{
		MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), bParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_3[iVar3]))
		{
			if (!__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), bParam0);
	}
}

void func_939(bool bParam0)//Position - 0x504F8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (Local_91.f_2[bParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_91.f_2[bParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_977() != Local_91.f_118)
	{
		return;
	}
	if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, bParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		return;
	}
	if (__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(Var1, Var2) < 62500f)
	{
		MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_3[iVar4]))
		{
			if (__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_3[iVar4]))
			{
				MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
			}
			else
			{
				iVar3 = NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_3[iVar4]);
				if (func_977() == Local_91.f_118)
				{
					if (SYSTEM::VDIST2(Var1, Var2) < 40000f)
					{
						MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
						return;
					}
					if (__LIB_20__.func_352(iVar3))
					{
						MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), bParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_941(bool bParam0)//Position - 0x506B5
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (Local_91.f_2[bParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_1))
			{
				if (!__LIB_0__.func_680(Local_91.f_2[bParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), false))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), true) };
							Var3 = { Var2 };
							Var3.f_2 = (Var3.f_2 + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar1, false, false))
							{
								if (MISC::ABSF((Var2.f_2 - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_2[bParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_942(bool bParam0)//Position - 0x50797
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[bParam0 /*26*/].f_2))
	{
		if (__LIB_2__.func_63(Local_91.f_2[bParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_91.f_2[bParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_91.f_2[bParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_945()//Position - 0x50881
{
	int iVar0;
	bool bVar1;
	if (Local_91.f_0 != 4)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_96);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
			{
				if (!func_901())
				{
					if (!func_976())
					{
						if (func_307())
						{
							if (__LIB_13__.func_258(bVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_91.f_118));
								if (__LIB_6__.func_941(bVar1, iVar0, 1))
								{
									if (!BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_96))
									{
										__LIB_19__.func_770(bVar1, 432, 1, 0);
										__LIB_34__.func_309(bVar1, __LIB_1__.func_48(iLocal_111), 1, 0);
										MISC::SET_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_96);
									}
								}
							}
						}
					}
				}
			}
			else if (BitTest(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_96))
			{
				__LIB_19__.func_770(bVar1, 432, 0, 0);
				__LIB_34__.func_309(bVar1, __LIB_1__.func_48(iLocal_111), 0, 0);
				MISC::CLEAR_BIT(&(Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_96);
			}
		}
	}
	iLocal_96++;
	if (iLocal_96 >= 32)
	{
		iLocal_96 = 0;
	}
}

void func_957()//Position - 0x50CB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_91.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_110[iVar0] = Local_91.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_958()//Position - 0x50D39
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_91.f_118 || func_977() == Local_91.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), false);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), false);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_959()//Position - 0x50DE0
{
	if (Local_91.f_118 > -1)
	{
		iLocal_111 = __LIB_21__.func_180(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_91.f_118)));
	}
}

int func_976()//Position - 0x51400
{
	int iVar0;
	iVar0 = func_977();
	if (iVar0 > -1)
	{
		if (Local_91.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_977()//Position - 0x51422
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = __LIB_0__.func_160();
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = __LIB_28__.func_902();
		iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_92[iVar0 /*14*/].f_10 != -1)
	{
		return Local_92[iVar0 /*14*/].f_10;
	}
	if (__LIB_0__.func_581(iVar1))
	{
		Local_92[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_91.f_118)
		{
			__LIB_40__.func_482(1);
		}
	}
	else if (__LIB_13__.func_258(iVar1, 1))
	{
		iVar2 = __LIB_0__.func_603(iVar1);
		if (iVar2 != __LIB_0__.func_160())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_92[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_92[iVar0 /*14*/].f_10;
}

int func_978()//Position - 0x514E9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_980(int iParam0)//Position - 0x5157C
{
	return Local_92[iParam0 /*14*/];
}

void func_987()//Position - 0x5165D
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (!BitTest(uLocal_93, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_976() || func_307())
				{
					__LIB_41__.func_882(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					MISC::SET_BIT(&uLocal_93, 6);
				}
			}
		}
		uVar0 = Local_91.f_115;
		uVar1 = Local_91.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_1039(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_98)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_99);
			}
		}
	}
	if (BitTest(uLocal_93, 18))
	{
		__LIB_7__.func_51(1);
		MISC::CLEAR_BIT(&uLocal_93, 18);
	}
	func_1038();
	if (Local_91.f_119 != -1)
	{
		if (BitTest(uLocal_93, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_119)))
			{
			}
		}
	}
	if (__LIB_1__.func_302(0))
	{
		__LIB_9__.func_32(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			bVar3 = false;
			while (bVar3 < 5)
			{
				if (BitTest(Local_91.f_871, bVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_91.f_865[bVar3], true);
				}
				bVar3++;
			}
		}
	}
	if (BitTest(uLocal_93, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_113);
		MISC::CLEAR_BIT(&uLocal_93, 17);
	}
	func_350();
	MISC::SET_BIT(&uLocal_94, 8);
	func_834();
	OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(true);
	__LIB_40__.func_482(0);
	__LIB_42__.func_263(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_340();
	__LIB_0__.func_199();
}

void func_1038()//Position - 0x53997
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_98);
}

void func_1039(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x539A6
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1.f_0 = Global_1943929;
	Var1.f_1 = Global_1943929.f_1;
	Var1.f_2 = Global_1943929.f_2;
	Var1.f_3 = Global_1943929.f_3;
	Var1.f_4 = Global_1943929.f_4;
	Var1.f_5 = Global_1943929.f_5;
	Var1.f_6 = Global_1943929.f_6;
	Var1.f_7 = Global_1943929.f_7;
	Var1.f_8 = Global_1943929.f_8;
	Var1.f_9 = Global_1943929.f_9;
	Var1.f_10 = Global_1943929.f_10;
	Var1.f_11 = Global_1943929.f_11;
	Var1.f_12 = Global_1943929.f_12;
	Var1.f_13 = Global_1943929.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1943929.f_15;
			Var2.f_15 = Global_1943929.f_16;
			Var2.f_16 = Global_1943929.f_17;
			STATS::PLAYSTATS_BW_BOSSONBOSSDEATHMATCH(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1943929.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = uParam1;
			STATS::PLAYSTATS_BW_YATCHATTACK(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1943929.f_15;
			Var4.f_15 = uParam0;
			STATS::PLAYSTATS_BW_HUNT_THE_BOSS(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1943929.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = uParam1;
			STATS::PLAYSTATS_BW_SIGHTSEER(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1943929.f_15;
			Var6.f_15 = uParam0;
			STATS::PLAYSTATS_BW_ASSAULT(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1943929.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = iParam2;
			STATS::PLAYSTATS_BW_BELLY_OF_THE_BEAST(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_HEAD_HUNTER(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_FRAGILE_GOODS(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_AIR_FREIGHT(&Var10);
		}
	}
	__LIB_11__.func_74();
}

void func_1041(struct<21> Param0)//Position - 0x53C58
{
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_91, 872, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_92, 449, 0);
	if (!__LIB_0__.func_672())
	{
		func_987();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1087();
		__LIB_36__.func_246(0, 0, 0);
		Local_92[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_987();
	}
}

void func_1087()//Position - 0x54AC8
{
	int iVar0;
	int iVar1;
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_98);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837161[iVar1], iLocal_98);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, Global_1837161[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar1], Global_1837206);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837206, Global_1837161[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_98, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("COP"), iLocal_98);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_98, Global_1837209[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837209[5], iLocal_98);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_98, Global_1837194);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837194, iLocal_98);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, Global_1837206);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837206, iLocal_98);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), Global_1837206);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_98);
	__LIB_24__.func_661(1, &Global_1837206);
	__LIB_9__.func_313(&Global_1837206);
	__LIB_9__.func_313(&iLocal_98);
}

