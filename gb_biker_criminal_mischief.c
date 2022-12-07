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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<20> Local_130[8];
	struct<3> Local_131[32];
	struct<5> Local_132 = { 0, 0, 1065353216, 1065353216, 1 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = -1;
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 10;
	var uLocal_162 = 500;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179[1] = { 0 };
	var uLocal_180 = 0;
	int* iLocal_181 = NULL;
	var uLocal_182 = -1;
	int iLocal_183 = 0;
	int iLocal_184[5] = { 0, 0, 0, 0, 0 };
	struct<42> Local_185 = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 60000, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_186[8];
	int iLocal_187 = 0;
	struct<21> Local_188 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_6522(ScriptParam_188))
			{
				func_6462(0, 1);
				func_6414();
			}
		}
		else
		{
			func_6414();
		}
	}
	else
	{
		func_6462(0, 1);
		func_6414();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_40__::func_236(1))
		{
			func_6462(0, 1);
			func_6414();
		}
		if (__LIB_6__::func_949())
		{
			func_6462(0, 1);
			func_6414();
		}
		__LIB_41__::func_185(205, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), &uLocal_180, 1140457472, 1144750080, 0);
		__LIB_34__::func_325();
		func_6382();
		func_6371();
		func_898(&uLocal_151, 1, 0, 1, 1, 6000);
		switch (func_897(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_896() == 1)
				{
					if (func_894())
					{
						func_893(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_896() == 1)
				{
					func_199();
				}
				else if (func_896() == 3)
				{
					func_893(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_6414();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_10__::func_923())
			{
				func_197(3);
			}
			switch (func_896())
			{
				case 0:
					if (func_195())
					{
						func_197(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 3:
					func_6414();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1F3
{
	if (func_194() > 0)
	{
		func_21();
		func_18();
		func_14();
	}
	switch (func_194())
	{
		case 0:
			func_10(PLAYER::PLAYER_ID(), 0);
			func_9(1);
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_185.f_40), &(Local_185.f_41));
			break;
		case 1:
			if (func_8() == 0)
			{
				if (!__LIB_0__::func_649(&(Local_185.f_2)))
				{
					__LIB_0__::func_580(&(Local_185.f_2), 0, 0);
				}
				else if (__LIB_2__::func_47(&(Local_185.f_2), func_5(), 0))
				{
					func_3(1);
				}
			}
			else
			{
				func_9(2);
			}
			break;
		case 2:
			if (func_2(0))
			{
				func_9(3);
			}
			break;
		case 3:
			func_197(3);
			break;
	}
}

bool func_2(int iParam0)//Position - 0x2AC
{
	return BitTest(Local_185.f_1, iParam0);
}

void func_3(int iParam0)//Position - 0x2BC
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_185.f_5 = iParam0;
}

int func_5()//Position - 0x334
{
	return Global_262145.f_18927 /* Tunable: BIKER_MISCHIEF_TIME_LIMIT */ * 1000;
}

int func_8()//Position - 0x397
{
	return Local_185.f_5;
}

void func_9(int iParam0)//Position - 0x3A4
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_185.f_4 = iParam0;
}

void func_10(int iParam0, int iParam1)//Position - 0x3BE
{
	__LIB_28__::func_462(&(Local_185.f_23), iParam0, iParam1, 3);
	Local_185.f_21++;
}

void func_14()//Position - 0x632
{
	if (__LIB_34__::func_342(&(Local_185.f_23), &uLocal_178, 3))
	{
		Local_185.f_21++;
	}
}

void func_18()//Position - 0x765
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_8() != 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (iVar2 != __LIB_0__::func_160())
			{
				iVar3 = 0;
				while (iVar3 < __LIB_8__::func_102())
				{
					if (Local_185.f_23[iVar3 /*2*/] == iVar2)
					{
						if (Local_185.f_23[iVar3 /*2*/].f_1 != Local_186[iVar0 /*3*/].f_2)
						{
							func_10(iVar2, Local_186[iVar0 /*3*/].f_2);
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_21()//Position - 0x842
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_193(iVar0) > 1 && func_193(iVar0) < 4)
		{
			if (func_193(iVar0) != 4)
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2))
				{
					func_192(iVar0, 5);
				}
				else if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_185.f_6[iVar0 /*4*/]), false) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_185.f_6[iVar0 /*4*/].f_2), false))
				{
					func_192(iVar0, 4);
				}
				else if (!func_2(2))
				{
					func_192(iVar0, 5);
				}
			}
		}
		switch (func_193(iVar0))
		{
			case 0:
				if (__LIB_2__::func_47(&(Local_185.f_19), Local_185.f_18, 0))
				{
					func_192(iVar0, 1);
					Local_185.f_18 = MISC::GET_RANDOM_INT_IN_RANGE(40000, 80000);
				}
				break;
			case 1:
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]))
				{
					func_25(iVar0);
				}
				break;
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_185.f_6[iVar0 /*4*/]), false))
				{
					if (PED::IS_PED_IN_COMBAT(NETWORK::NET_TO_PED(Local_185.f_6[iVar0 /*4*/]), 0))
					{
						func_192(iVar0, 3);
					}
				}
				break;
			case 3:
				break;
			case 4:
				func_192(iVar0, 5);
				break;
			case 5:
				if (func_2(2))
				{
					func_24(2);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]))
				{
					__LIB_1__::func_46(&(Local_185.f_6[iVar0 /*4*/]));
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2))
				{
					__LIB_1__::func_46(&(Local_185.f_6[iVar0 /*4*/].f_2));
				}
				__LIB_0__::func_579(&(Local_185.f_19));
				func_192(iVar0, 0);
				break;
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xA51
{
	MISC::CLEAR_BIT(&(Local_185.f_1), iParam0);
}

void func_25(int iParam0)//Position - 0xA64
{
	if (func_34(iParam0))
	{
		func_28(iParam0);
		func_27();
		Local_185.f_6[iParam0 /*4*/].f_3 = -1;
		func_192(iParam0, 2);
		func_26(2);
	}
}

void func_26(int iParam0)//Position - 0xA97
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_185.f_1), iParam0);
}

void func_27()//Position - 0xAB5
{
	Local_185.f_12 = { 0f, 0f, 0f };
	Local_185.f_15 = 0f;
	Local_185.f_16 = -1;
}

void func_28(int iParam0)//Position - 0xAD3
{
	int iVar0;
	iVar0 = NETWORK::NET_TO_PED(Local_185.f_6[iParam0 /*4*/]);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(iVar0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 281, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
	__LIB_34__::func_237(&iVar0, -1);
}

int func_34(int iParam0)//Position - 0xCE4
{
	if (Local_185.f_16 == -1 || Local_185.f_16 == iParam0)
	{
		Local_185.f_16 = iParam0;
		if (__LIB_0__::func_86(Local_185.f_12))
		{
			func_43(iParam0, __LIB_0__::func_114());
		}
		else if (__LIB_0__::func_584(func_42(Local_185.f_6[iParam0 /*4*/].f_3)))
		{
			if (__LIB_0__::func_584(func_39(Local_185.f_6[iParam0 /*4*/].f_3)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (__LIB_18__::func_220(&(Local_185.f_6[iParam0 /*4*/].f_2), func_39(Local_185.f_6[iParam0 /*4*/].f_3), Local_185.f_12, Local_185.f_15, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (__LIB_0__::func_668(&(Local_185.f_6[iParam0 /*4*/]), Local_185.f_6[iParam0 /*4*/].f_2, 6, func_42(Local_185.f_6[iParam0 /*4*/].f_3), -1, 1, 1, 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_39(Local_185.f_6[iParam0 /*4*/].f_3));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_42(Local_185.f_6[iParam0 /*4*/].f_3));
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x10F5
{
	if (__LIB_2__::func_318(iParam0))
	{
		return joaat("sheriff");
	}
	return joaat("police");
}

int func_42(int iParam0)//Position - 0x114B
{
	if (__LIB_2__::func_318(iParam0))
	{
		return joaat("S_M_Y_Cop_01");
	}
	return joaat("S_M_Y_Cop_01");
}

void func_43(int iParam0, bool bParam1)//Position - 0x1169
{
	struct<31> Var0;
	struct<3> Var1;
	Local_185.f_6[iParam0 /*4*/].f_3 = func_188();
	if (bParam1)
	{
		Local_185.f_12 = { func_187(Local_185.f_6[iParam0 /*4*/].f_3) };
		Local_185.f_15 = func_186(Local_185.f_6[iParam0 /*4*/].f_3);
	}
	else
	{
		Var0.f_4 = 1125515264;
		Var0.f_5 = 1;
		Var0.f_6 = 1;
		Var0.f_8 = 1082130432;
		Var0.f_9 = 1176255488;
		Var0.f_10 = 1;
		Var0.f_13 = 1;
		Var0.f_15 = 2;
		Var0.f_22 = 2;
		Var0.f_25 = 1;
		Var0.f_26 = 1;
		Var0.f_29 = 1123024896;
		Var0.f_30 = 1;
		Var0.f_4 = 400f;
		Var0.f_0 = 25f;
		Var0.f_1 = 1;
		Var0.f_5 = 1;
		Var0.f_6 = 1;
		Var0.f_10 = 0;
		Var0.f_12 = 1;
		Var1 = { func_187(Local_185.f_6[iParam0 /*4*/].f_3) };
		func_44(Var1, Var1, func_39(Local_185.f_6[iParam0 /*4*/].f_3), 0, &(Local_185.f_12), &(Local_185.f_15), &Var0);
	}
}

int func_44(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1278
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_2__::func_61())
	{
		return 0;
	}
	if (__LIB_1__::func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_639();
			__LIB_0__::func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_172(Param0))
		{
			if (__LIB_2__::func_60(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_636();
		__LIB_0__::func_639();
		if (!uParam6->f_27 || (((((((__LIB_32__::func_376(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_38__::func_327(Param0, iParam2);
		}
		if (__LIB_39__::func_7(Param0))
		{
			__LIB_38__::func_327(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_27__::func_261(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__::func_374(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_74(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_18__::func_378(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_18__::func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_65(Global_2667225.f_683, 0);
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_606(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_25__::func_370(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_36__::func_352(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_65(Global_2667225.f_683, 0);
									__LIB_0__::func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_65(Global_2667225.f_683, 0);
								__LIB_0__::func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					__LIB_0__::func_606(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_74(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_6__::func_912(1);
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0, int iParam1)//Position - 0x2679
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_607(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_65(Var0, iParam1 + 1);
	}
}

void func_74(var uParam0, var uParam1, var uParam2)//Position - 0x2988
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_123(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_75(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_75(var uParam0, var uParam1, var uParam2)//Position - 0x29F7
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_119(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_18__::func_371(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_6__::func_902(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_24__::func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__::func_38(Var1))
									{
										Var1 = { __LIB_24__::func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__::func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__::func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__::func_371(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_39__::func_26(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_119(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_25__::func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_27__::func_261(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_27__::func_261(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_36__::func_352(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_36__::func_845(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_83(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_7__::func_119(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_81(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_31__::func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_119(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_37__::func_866(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_81(int iParam0, var uParam1)//Position - 0x3756
{
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_81(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_81(iParam0 + 1, uParam1);
	}
}

void func_83(struct<3> Param0, float fParam1, int iParam2)//Position - 0x37FC
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_83(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_119(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x51C5
{
	int iVar0;
	bool bVar1;
	if (func_172(Param0))
	{
		if (func_122(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_18__::func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_607(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x540F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_122(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(var uParam0, var uParam1, var uParam2)//Position - 0x54EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_119(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_18__::func_371(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_6__::func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_623();
		}
		else
		{
			__LIB_0__::func_622();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_39__::func_26(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_119(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_25__::func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_27__::func_261(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_27__::func_261(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_36__::func_352(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_36__::func_845(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_83(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_81(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_172(struct<3> Param0)//Position - 0xEE95
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__::func_137(Param0, 1008981770))
			{
				if (!func_122(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_122(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_7__::func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_122(&Var1, 0, 0, 0, 1))
					{
						if (!func_122(&Param0, 0, 0, 0, 1))
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

float func_186(int iParam0)//Position - 0xF242
{
	switch (iParam0)
	{
		case 0:
			return 163f;
		case 1:
			return 25.6f;
		case 2:
			return 92.199f;
		case 3:
			return 280.197f;
		case 4:
			return 253.6f;
		case 5:
			return 283.798f;
		case 6:
			return 85.7991f;
		case 7:
			return 58.199f;
		case 8:
			return 258.5997f;
		case 9:
			return 115.998f;
		default:
	}
	return 0f;
}

Vector3 func_187(int iParam0)//Position - 0xF2DE
{
	switch (iParam0)
	{
		case 0:
			return 1627.906f, -2256.271f, 105.987f;
		case 1:
			return 1313.03f, -700.284f, 65.852f;
		case 2:
			return 582.168f, -2940.498f, 5.044f;
		case 3:
			return 948.045f, 2713.595f, 39.299f;
		case 4:
			return 1218.971f, 2962.969f, 39.614f;
		case 5:
			return 2281.241f, 3834.192f, 33.455f;
		case 6:
			return 37.7151f, 1872.8356f, 193.6967f;
		case 7:
			return 40.947f, 6623.983f, 30.701f;
		case 8:
			return 887.8314f, 6472.7383f, 21.1004f;
		case 9:
			return -981.0191f, 5412.4097f, 38.9556f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_188()//Position - 0xF3E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[10];
	bool bVar5;
	int iVar6;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_130[iVar0 /*20*/]);
				if (__LIB_1__::func_264(iVar6, 0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar6)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar6), false))
					{
						if (__LIB_0__::func_529(PLAYER::GET_PLAYER_PED(iVar6), func_187(iVar1), 0) > 2000f)
						{
							bVar5 = false;
						}
					}
				}
			}
			iVar0++;
		}
		if (bVar5)
		{
			iVar4[iVar2] = iVar1;
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		return iVar4[iVar3];
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
}

void func_192(int iParam0, int iParam1)//Position - 0xF513
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_185.f_6[iParam0 /*4*/].f_1 = iParam1;
}

int func_193(int iParam0)//Position - 0xF533
{
	return Local_185.f_6[iParam0 /*4*/].f_1;
}

int func_194()//Position - 0xF546
{
	return Local_185.f_4;
}

bool func_195()//Position - 0xF553
{
	if (!func_2(1))
	{
		Local_185.f_11 = PLAYER::PLAYER_ID();
		__LIB_24__::func_860(&(Local_185.f_23), 0);
		func_26(1);
	}
	return func_2(1);
}

void func_197(int iParam0)//Position - 0xF5BD
{
	Local_185.f_0 = iParam0;
}

void func_199()//Position - 0xF5ED
{
	bool bVar0;
	int iVar1;
	if (func_194() > 0)
	{
		bVar0 = func_8() != false;
		iVar1 = (func_5() - __LIB_1__::func_295(&(Local_185.f_2), 0, 0));
		__LIB_34__::func_238(iVar1, bVar0, &iLocal_181, -1);
		func_883();
		func_882();
		func_881();
		func_759(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
	}
	switch (func_194())
	{
		case 0:
			break;
		case 1:
			if (!__LIB_24__::func_866(2))
			{
				__LIB_39__::func_30(205, 1, -1, 0);
				__LIB_24__::func_865(2);
			}
			else if (!__LIB_24__::func_866(3))
			{
				if (__LIB_2__::func_47(&(Local_185.f_2), 10000, 0))
				{
					__LIB_11__::func_64();
					__LIB_24__::func_865(3);
					__LIB_0__::func_579(&(Local_185.f_2));
					__LIB_0__::func_495(&(Local_185.f_2), 0, 0);
				}
			}
			if ((!__LIB_26__::func_303() && !__LIB_0__::func_114()) && !__LIB_34__::func_288(205))
			{
				if (func_8() == 0)
				{
					if (Global_2703735.f_4.f_10)
					{
						if (!__LIB_24__::func_866(4))
						{
							__LIB_41__::func_166(-1, 0, 0, -1, 0, 0);
							__LIB_24__::func_865(4);
						}
						func_569();
						if (iLocal_176 > -1)
						{
							if (iLocal_176 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
							}
						}
					}
				}
			}
			else
			{
				__LIB_18__::func_455();
			}
			break;
		case 2:
			func_560();
			func_200();
			break;
		case 3:
			break;
	}
}

void func_200()//Position - 0xF739
{
	bool bVar0;
	if (!__LIB_24__::func_866(1))
	{
		if (func_8() != 0)
		{
			if (Global_2703735.f_4.f_10)
			{
				if ((!__LIB_26__::func_303() && !__LIB_0__::func_114()) && !__LIB_34__::func_288(205))
				{
					switch (func_8())
					{
						case 2:
							HUD::CLEAR_HELP(true);
							func_537(3);
							break;
						case 3:
							HUD::CLEAR_HELP(true);
							func_537(4);
							break;
						case 1:
							HUD::CLEAR_HELP(true);
							if (Local_185.f_23[0 /*2*/].f_1 >= Local_185.f_23[1 /*2*/].f_1 && Local_185.f_23[0 /*2*/].f_1 != 0)
							{
								func_537(1);
								Local_132.f_4 = 0;
								if (PLAYER::PLAYER_ID() == Local_185.f_23[0 /*2*/])
								{
									bVar0 = true;
								}
							}
							else
							{
								func_537(2);
								Local_132.f_4 = __LIB_19__::func_834() + 1;
							}
							break;
						}
					}
			}
			if (Local_132.f_4 == 0)
			{
				__LIB_28__::func_391(1, Local_185.f_23[0 /*2*/]);
			}
			else
			{
				__LIB_28__::func_391(1, __LIB_0__::func_160());
			}
			if (bVar0)
			{
			}
			func_244(205, bVar0, &Local_132, 0);
			func_6462(bVar0, 0);
			__LIB_24__::func_865(1);
		}
	}
	if (func_202(&uLocal_163, 1, 0))
	{
		func_201(0);
	}
}

void func_201(int iParam0)//Position - 0xF861
{
	MISC::SET_BIT(&(Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), iParam0);
}

int func_202(var uParam0, bool bParam1, int iParam2)//Position - 0xF87A
{
	bool bVar0;
	__LIB_1__::func_484(29);
	if ((*uParam0 > 0 && !__LIB_1__::func_159()) && __LIB_36__::func_867(PLAYER::PLAYER_ID()) != 0)
	{
		if (!__LIB_27__::func_205())
		{
			__LIB_1__::func_432();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_649(&(uParam0->f_3)))
			{
				__LIB_0__::func_580(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_2__::func_47(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1943920.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__::func_580(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__::func_580(&(uParam0->f_1), 0, 0);
				__LIB_1__::func_0(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_649(&(uParam0->f_5)))
			{
				if (__LIB_2__::func_47(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_218(iParam2);
				__LIB_1__::func_0(uParam0, 2);
			}
			break;
		case 2:
			func_218(0);
			if (__LIB_2__::func_47(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__::func_1(func_204(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__::func_0(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_47(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
				__LIB_1__::func_0(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
			return 1;
	}
	return 0;
}

char* func_204(int iParam0)//Position - 0xFA07
{
	if (((__LIB_24__::func_860(PLAYER::PLAYER_ID()) || __LIB_24__::func_917(PLAYER::PLAYER_ID())) || __LIB_20__::func_417()) || iParam0)
	{
		if (__LIB_24__::func_917(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Club Challenge leaderboard. */;
		}
		return "BG_LBD_HELPW" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Club Work leaderboard. */;
	}
	if (__LIB_6__::func_951(__LIB_1__::func_321()))
	{
		return "GB_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the VIP Challenge leaderboard. */;
	}
	return "GB_LBD_HELPW" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the VIP Work leaderboard. */;
}

void func_218(int iParam0)//Position - 0xFD28
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_1__::func_424(PLAYER::PLAYER_ID(), 22)) && __LIB_36__::func_867(PLAYER::PLAYER_ID()) != 0) && !__LIB_1__::func_38(__LIB_9__::func_308())) && !__LIB_24__::func_860(PLAYER::PLAYER_ID())) && !__LIB_9__::func_286(__LIB_3__::func_803(PLAYER::PLAYER_ID()))) && !__LIB_2__::func_859(__LIB_3__::func_803(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			__LIB_1__::func_278(func_204(iParam0), -1);
			__LIB_33__::func_151(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

void func_244(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x10720
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
	__LIB_20__::func_405(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_22__::func_51(iParam0, uParam2->f_13, bParam3));
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
		iVar0 = (iVar0 + __LIB_10__::func_941(iParam0, bParam3));
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
	if (__LIB_27__::func_247(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_11__::func_27();
				}
			}
			else if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_11__::func_26();
			}
			else
			{
				__LIB_11__::func_27();
			}
		}
		else
		{
			__LIB_10__::func_939();
		}
	}
	__LIB_36__::func_350(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_33__::func_170(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_38__::func_325(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_33__::func_169(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_36__::func_349(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_301();
	if (iVar8 != __LIB_0__::func_160() && iParam0 != 148)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_7__::func_246(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_40__::func_279(&iVar0, 1);
			}
		}
	}
	__LIB_24__::func_918(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_444();
		__LIB_39__::func_734(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_41__::func_159(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_22__::func_49(iParam0, iVar0);
		if (__LIB_10__::func_932(iParam0))
		{
			if (__LIB_10__::func_931(iParam0) > -1)
			{
				__LIB_1__::func_445(__LIB_10__::func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_1__::func_570(PLAYER::PLAYER_ID()) || __LIB_2__::func_858(PLAYER::PLAYER_ID()))
	{
		__LIB_27__::func_245(iParam0);
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__::func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__::func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__::func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__::func_859(iParam0))
	{
		if (__LIB_10__::func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_24__::func_822(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__::func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__::func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__::func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__::func_473(iParam0) || __LIB_10__::func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	__LIB_41__::func_698(bParam1, iParam0);
}

void func_537(int iParam0)//Position - 0x40B9A
{
	if (!__LIB_24__::func_861(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				__LIB_40__::func_252(86, "GB_CM_ST_START" /* GXT: Criminal Mischief */, "GB_CM_SS_START" /* GXT: Use biker melee on the most vehicles */, 1, -1, 2, 1, 0);
				break;
			case 3:
				__LIB_40__::func_252(86, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GB_CM_SS_BLEFT" /* GXT: Your President disbanded the MC during the Criminal Mischief Challenge */, 1, -1, 2, 1, 0);
				break;
			case 4:
				__LIB_40__::func_252(86, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GB_CM_SS_GLEFT" /* GXT: There are no Members left in your MC to take part in the Criminal Mischief Challenge */, 1, -1, 2, 1, 0);
				break;
			case 1:
				if (PLAYER::PLAYER_ID() == Local_185.f_23[0 /*2*/])
				{
					if (Local_185.f_23[0 /*2*/].f_1 == 1)
					{
						__LIB_41__::func_179(88, Local_185.f_23[0 /*2*/], -1, "GB_CM_SS_UWINs" /* GXT: You won the Criminal Mischief Challenge with 1 point */, "BK_WINRVL" /* GXT: WINNER */, 1, -1, 2, 0);
					}
					else
					{
						__LIB_41__::func_179(88, Local_185.f_23[0 /*2*/], Local_185.f_23[0 /*2*/].f_1, "GB_CM_SS_UWINm" /* GXT: You won the Criminal Mischief Challenge with ~1~ points */, "BK_WINRVL" /* GXT: WINNER */, 1, -1, 2, 0);
					}
				}
				else if (Local_185.f_23[0 /*2*/].f_1 == 1)
				{
					__LIB_41__::func_179(88, Local_185.f_23[0 /*2*/], -1, "GB_CM_SS_CWINs" /* GXT: ~a~~s~ won the Criminal Mischief Challenge with 1 point */, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, 1, -1, 2, 0);
				}
				else
				{
					__LIB_41__::func_179(88, Local_185.f_23[0 /*2*/], Local_185.f_23[0 /*2*/].f_1, "GB_CM_SS_CWINm" /* GXT: ~a~~s~ won the Criminal Mischief Challenge with ~1~ points */, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, 1, -1, 2, 0);
				}
				break;
			case 2:
				__LIB_40__::func_252(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GB_CM_SS_NOWIN" /* GXT: Nobody won the Criminal Mischief Challenge */, 1, -1, 2, 1, 0);
				break;
			case 5:
				__LIB_40__::func_252(88, "GB_CHAL_OVER" /* GXT: CHALLENGE OVER */, "GB_CM_SS_GEND" /* GXT: The Criminal Mischief Challenge is now over */, 1, -1, 2, 1, 0);
				break;
			default:
				break;
		}
		__LIB_24__::func_861(iParam0);
	}
}

void func_560()//Position - 0x41572
{
	__LIB_18__::func_455();
	func_561();
}

void func_561()//Position - 0x41582
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_179[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_179[iVar0]));
		}
		iVar0++;
	}
}

void func_569()//Position - 0x41958
{
	if (func_607())
	{
		func_537(0);
		func_603();
		__LIB_0__::func_371();
		func_595();
		func_586();
		func_570();
	}
}

void func_570()//Position - 0x41980
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_649(&(Local_185.f_2)))
	{
		iVar0 = 1;
		iLocal_177 = (func_5() - __LIB_1__::func_295(&(Local_185.f_2), 0, 0));
		if (iLocal_177 < func_5())
		{
			if (iLocal_177 > 30000)
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 6;
			}
			if (iLocal_177 < 0)
			{
				iLocal_177 = 0;
			}
			__LIB_34__::func_324(Local_185.f_23[0 /*2*/], Local_185.f_23[1 /*2*/], Local_185.f_23[2 /*2*/], __LIB_0__::func_160(), Local_185.f_23[0 /*2*/].f_1, Local_185.f_23[1 /*2*/].f_1, Local_185.f_23[2 /*2*/].f_1, -1, Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, iLocal_177, &iVar0, iVar1, "GB_CM_TIMER" /* GXT: CLUB CHALLENGE END */, 1, 0, 0, 0, 0);
		}
	}
}

void func_586()//Position - 0x42377
{
	if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && __LIB_24__::func_175(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_7__::func_260("GB_CM_OBJ_BM" /* GXT: Use biker melee on the most vehicles. */))
		{
			__LIB_25__::func_25("GB_CM_OBJ_BM" /* GXT: Use biker melee on the most vehicles. */, 0);
		}
	}
	else if (!__LIB_7__::func_260("GB_CM_OBJ_BIKE" /* GXT: Get on a motorcycle. */))
	{
		__LIB_25__::func_25("GB_CM_OBJ_BIKE" /* GXT: Get on a motorcycle. */, 0);
	}
}

void func_595()//Position - 0x425E6
{
	if (__LIB_24__::func_864(1))
	{
		func_596(2);
	}
	else if (__LIB_24__::func_864(0))
	{
		func_596(1);
	}
	else
	{
		func_596(0);
	}
	if (func_2(2))
	{
		func_596(3);
	}
}

void func_596(int iParam0)//Position - 0x42620
{
	if (__LIB_28__::func_421())
	{
		if (!__LIB_24__::func_864(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					__LIB_0__::func_151("GB_CM_HELP0" /* GXT: The Criminal Mischief Challenge has started. Use biker melee on the most occupied vehicles while on a motorcycle to earn cash and RP. */, -1);
					break;
				case 1:
					__LIB_0__::func_151("GB_CM_HELP1" /* GXT: Points are awarded based on the class of vehicle hit by biker melee. High class or rare vehicles will earn more points. */, -1);
					break;
				case 3:
					__LIB_0__::func_151("GB_CM_HELP2" /* GXT: Use biker melee on the marked vehicle ~HUD_COLOUR_RED~~BLIP_BELLY_OF_THE_BEAST~~s~ while on a motorcycle to earn bonus points. */, -1);
					break;
				case 2:
					__LIB_0__::func_151("BRS_BM_EXP1" /* GXT: Hold ~INPUT_VEH_MELEE_HOLD~ and tap ~INPUT_VEH_MELEE_LEFT~/~INPUT_VEH_MELEE_RIGHT~ to melee in either direction while on a bike. */, -1);
					break;
				case 4:
					__LIB_0__::func_151("GB_CM_HELP3" /* GXT: Points are not awarded for hitting empty or player occupied vehicles. */, -1);
					break;
			}
			__LIB_24__::func_863(iParam0);
		}
	}
}

void func_603()//Position - 0x4273F
{
	int iVar0;
	int iVar1;
	if (func_2(2))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_179[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_185.f_6[iVar0 /*4*/].f_2), false))
				{
					iLocal_179[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_185.f_6[iVar0 /*4*/].f_2));
					HUD::SET_BLIP_SPRITE(iLocal_179[iVar0], 461);
					__LIB_6__::func_958(&(iLocal_179[iVar0]), 6);
					HUD::SET_BLIP_ROUTE(iLocal_179[iVar0], false);
					HUD::SET_BLIP_PRIORITY(iLocal_179[iVar0], 12);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_179[iVar0], "GB_CM_BLIP" /* GXT: Bonus Vehicle */);
					HUD::SET_BLIP_SCALE(iLocal_179[iVar0], 1.3f);
					iVar1++;
				}
			}
			else
			{
				iVar1++;
				if ((!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_185.f_6[iVar0 /*4*/].f_2), false)) || !func_2(2))
				{
					HUD::REMOVE_BLIP(&(iLocal_179[iVar0]));
				}
			}
			iVar0++;
		}
		if (!__LIB_24__::func_866(7))
		{
			if (iVar1 == 1)
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					HUD::SET_BLIP_FLASHES(iLocal_179[iVar0], true);
					HUD::SET_BLIP_FLASH_INTERVAL(iLocal_179[iVar0], 250);
					HUD::SET_BLIP_FLASH_TIMER(iLocal_179[iVar0], 5000);
					iVar0++;
				}
			}
			__LIB_24__::func_865(7);
		}
	}
	else
	{
		func_561();
	}
}

int func_607()//Position - 0x42B70
{
	if (func_615() || func_608())
	{
		return 1;
	}
	return 0;
}

bool func_608()//Position - 0x42B8E
{
	return func_609(PLAYER::PLAYER_ID());
}

bool func_609(int iParam0)//Position - 0x42B9E
{
	return __LIB_25__::func_952(iParam0, func_614(), 0);
}

int func_614()//Position - 0x42CA5
{
	return Local_185.f_11;
}

bool func_615()//Position - 0x42CB2
{
	return func_616(PLAYER::PLAYER_ID());
}

bool func_616(int iParam0)//Position - 0x42CC2
{
	return func_614() == iParam0;
}

void func_759(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x4E521
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
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
	int iVar22;
	struct<2> Var23;
	if (__LIB_36__::func_869(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_32__::func_909() || iParam2 == 28)
	{
		if (__LIB_36__::func_795(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__::func_422(), sParam7))
		{
			__LIB_1__::func_512(1);
			if ((!__LIB_1__::func_511() && !__LIB_1__::func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_509())
				{
					func_826();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_507(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__::func_978(bVar4, 0))
									{
										if (__LIB_34__::func_543(bVar4) || __LIB_9__::func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_2__::func_192(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_38__::func_955(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__::func_631(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_803(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_28__::func_371())
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_768(bVar4) && __LIB_38__::func_954(bVar4, iParam2, bVar3)) && __LIB_1__::func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__::func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
								iVar6 = func_798(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_28__::func_371())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__::func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_500(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_28__::func_370(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_4__::func_682(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_499(iParam5))
								{
									__LIB_38__::func_980(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_38__::func_980(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_160();
							}
							if (__LIB_19__::func_768(bVar4))
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__::func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
									iVar6 = func_798(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_28__::func_370(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_4__::func_682(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_40__::func_231(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_579(&(uParam3->f_21));
						__LIB_1__::func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_491(uParam3, iParam1);
							__LIB_1__::func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__::func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__::func_992(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_492();
			__LIB_1__::func_508(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_798(bool bParam0)//Position - 0x4F91D
{
	int iVar0;
	iVar0 = func_801(bParam0);
	if (iVar0 == -1)
	{
		func_799(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_799(int iParam0, bool bParam1)//Position - 0x4F953
{
	if (!__LIB_1__::func_264(iParam0, 0, 1))
	{
		return;
	}
	if (func_801(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (__LIB_2__::func_44(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_801(int iParam0)//Position - 0x4F9F1
{
	int iVar0;
	if (!__LIB_1__::func_264(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			__LIB_24__::func_865(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_826()//Position - 0x5010C
{
	if (BitTest(Global_2815059.f_4657, 1))
	{
		if (__LIB_1__::func_159())
		{
			__LIB_24__::func_866();
		}
	}
}

void func_881()//Position - 0x51AB5
{
	int iVar0;
	if (iLocal_187 == Local_185.f_21)
	{
		return;
	}
	if (Global_1637407.f_1.f_108 != 0)
	{
		Global_1637407.f_1.f_108 = 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_8__::func_102())
	{
		Global_1637407.f_534[iVar0 /*42*/].f_1 = Local_185.f_23[iVar0 /*2*/];
		Global_1637407.f_534[iVar0 /*42*/].f_9 = Local_185.f_23[iVar0 /*2*/].f_1;
		Global_1637407.f_534[iVar0 /*42*/].f_31 = -1;
		iVar0++;
	}
	iLocal_187 = Local_185.f_21;
}

void func_882()//Position - 0x51B39
{
	if (func_194() != 1)
	{
		return;
	}
	if (!__LIB_24__::func_866(5))
	{
		if ((!__LIB_26__::func_303() && !__LIB_0__::func_114()) && !__LIB_34__::func_288(205))
		{
			__LIB_24__::func_865(5);
		}
	}
	else if (!__LIB_24__::func_866(6))
	{
		if ((__LIB_26__::func_303() || __LIB_0__::func_114()) || __LIB_34__::func_288(205))
		{
			Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 0;
			__LIB_24__::func_865(6);
		}
	}
}

void func_883()//Position - 0x51BB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_193(iVar0))
		{
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_185.f_6[iVar0 /*4*/]);
					iVar2 = NETWORK::NET_TO_VEH(Local_185.f_6[iVar0 /*4*/].f_2);
					if ((!ENTITY::IS_ENTITY_DEAD(iVar1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) && PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
					{
						if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar2) != 1)
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_185.f_6[iVar0 /*4*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_185.f_6[iVar0 /*4*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
							{
								if (__LIB_0__::func_682(Local_185.f_6[iVar0 /*4*/]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_185.f_6[iVar0 /*4*/].f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_682(Local_185.f_6[iVar0 /*4*/].f_2))
										{
											TASK::TASK_VEHICLE_MISSION(iVar1, iVar2, 0, 1, 10f, 22713, -1f, -1f, false);
										}
									}
								}
							}
						}
					}
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
		iVar0++;
	}
}

void func_893(int iParam0, int iParam1)//Position - 0x52362
{
	Local_186[iParam0 /*3*/] = iParam1;
}

bool func_894()//Position - 0x52373
{
	if (!func_895(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_2(1))
		{
			func_201(1);
		}
	}
	return func_895(NETWORK::PARTICIPANT_ID(), 1);
}

bool func_895(int iParam0, int iParam1)//Position - 0x5239E
{
	return BitTest(Local_186[iParam0 /*3*/].f_1, iParam1);
}

int func_896()//Position - 0x523B2
{
	return Local_185.f_0;
}

int func_897(int iParam0)//Position - 0x523BD
{
	return Local_186[iParam0 /*3*/];
}

int func_898(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x523CC
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!__LIB_10__::func_960())
	{
		return 0;
	}
	if (iParam1 && !__LIB_2__::func_232())
	{
		return 0;
	}
	if (!__LIB_6__::func_279())
	{
		if (__LIB_9__::func_144())
		{
			if (__LIB_24__::func_766(1))
			{
				__LIB_10__::func_951();
			}
			__LIB_24__::func_95();
			return 0;
		}
		return 0;
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	switch (*uParam0)
	{
		case 0:
			__LIB_33__::func_538();
			__LIB_36__::func_850(&Global_1941652);
			__LIB_40__::func_269(&Global_1941652);
			if (__LIB_8__::func_679(&(Global_1941652.f_1)))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 256, 0);
				MISC::SET_BIT(&(Global_2815059.f_5194), 2);
			}
			if (!__LIB_2__::func_334())
			{
				__LIB_4__::func_70();
				MISC::SET_BIT(&(Global_2815059.f_5194), 4);
			}
			if (!__LIB_2__::func_245())
			{
				__LIB_0__::func_802();
				MISC::SET_BIT(&(Global_2815059.f_5194), 3);
			}
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			uParam0->f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			iVar0 = __LIB_1__::func_556(11389, -1, 0);
			if (!BitTest(iVar0, 6))
			{
				MISC::SET_BIT(&iVar0, 6);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 7))
			{
				MISC::SET_BIT(&iVar0, 7);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			else if (!BitTest(iVar0, 8))
			{
				MISC::SET_BIT(&iVar0, 8);
				MISC::SET_BIT(&(uParam0->f_2), 1);
				__LIB_1__::func_597(11389, iVar0, -1, 1, 0);
			}
			if (__LIB_0__::func_1("GB_SPEC_CON" /* GXT: Press ~INPUT_CONTEXT~ to spectate your Bodyguards. */))
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_1__::func_484(24);
			Global_1943929.f_4 = 2;
			*uParam0 = 1;
			break;
		case 1:
			if (BitTest(uParam0->f_2, 1) && __LIB_28__::func_34(0))
			{
				__LIB_1__::func_278("GB_SPEC_MENH" /* GXT: You can choose to spectate your Bodyguards in the VIP Abilities Interaction Menu */, -1);
				__LIB_33__::func_151(1);
				MISC::CLEAR_BIT(&(uParam0->f_2), 1);
			}
			if (!__LIB_6__::func_153(&(Global_1941652.f_1)) && __LIB_34__::func_301(5))
			{
				STREAMING::CLEAR_FOCUS();
				__LIB_19__::func_387(&Global_1941652, 4, 0, 8);
			}
			else
			{
				if (!BitTest(Global_2815059.f_5194, 2) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 256, 0);
					MISC::SET_BIT(&(Global_2815059.f_5194), 2);
				}
				if (__LIB_4__::func_746(&(Global_1941652.f_1)) && __LIB_6__::func_155())
				{
					if (!__LIB_34__::func_301(5))
					{
						if (__LIB_6__::func_153(&(Global_1941652.f_1)))
						{
							__LIB_36__::func_849(uParam0, 0);
						}
					}
				}
			}
			if (__LIB_28__::func_465(uParam0))
			{
				__LIB_36__::func_849(uParam0, iParam2);
			}
			if (__LIB_25__::func_288(0, 1, 0))
			{
				__LIB_34__::func_295(bParam3);
			}
			break;
		case 2:
			if (!BitTest(uParam0->f_2, 3))
			{
				if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					MISC::SET_BIT(&(uParam0->f_2), 3);
					__LIB_40__::func_267(&Global_1941652, 0);
					__LIB_0__::func_579(&(uParam0->f_4));
					__LIB_0__::func_580(&(uParam0->f_4), 0, 0);
					STREAMING::SET_FOCUS_ENTITY(PLAYER::PLAYER_PED_ID());
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else if (__LIB_0__::func_86(uParam0->f_6) || func_5900(uParam0->f_10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				if (__LIB_0__::func_649(&(uParam0->f_4)))
				{
					if (!__LIB_2__::func_47(&(uParam0->f_4), iParam5, 0))
					{
						return 0;
					}
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				__LIB_0__::func_579(&(uParam0->f_4));
				uParam0->f_2 = 0;
				*uParam0 = 0;
				bVar2 = !__LIB_24__::func_94();
				bVar1 = __LIB_10__::func_960();
				func_5893();
				__LIB_24__::func_93();
				if (((__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 153 && __LIB_3__::func_803(PLAYER::PLAYER_ID()) != 191) && !__LIB_24__::func_766(0)) && __LIB_18__::func_631(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__::func_278("GB_SPEC_NO" /* GXT: Not enough Bodyguards to continue spectating. */, -1);
					__LIB_33__::func_151(1);
				}
				if (bVar1)
				{
					__LIB_11__::func_64();
				}
				__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (bVar2 && iParam4)
				{
					if (uParam0->f_3 != 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), uParam0->f_3, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						uParam0->f_3 = 0;
					}
				}
				uParam0->f_6 = { 0f, 0f, 0f };
				return 1;
			}
			break;
	}
	if (!BitTest(uParam0->f_2, 0))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			NETWORK::FADE_OUT_LOCAL_PLAYER(true);
			MISC::SET_BIT(&(uParam0->f_2), 0);
			uParam0->f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				uParam0->f_9 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()) && !BitTest(uParam0->f_2, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				return 0;
			}
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::SET_BIT(&(uParam0->f_2), 2);
	}
	if (*uParam0 != 2)
	{
		func_899(&Global_1941652);
	}
	return 0;
}

void func_899(var uParam0)//Position - 0x528A5
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_6__::func_338() == 3 || __LIB_6__::func_337() == 3) || (__LIB_0__::func_734() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_4__::func_766(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_0__::func_727());
			}
		}
	}
	if (__LIB_6__::func_338() == 1)
	{
		if (__LIB_3__::func_646() && __LIB_0__::func_706())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_6__::func_336() == 1 || __LIB_6__::func_336() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_6__::func_335(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_1__::func_593())
		{
			if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
			{
				func_5883(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_9__::func_50(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_1__::func_769(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_4__::func_71();
			}
			__LIB_6__::func_334(&(uParam0->f_47));
		}
	}
	if (__LIB_6__::func_153(&(uParam0->f_1)))
	{
		__LIB_41__::func_184(uParam0);
		if (((__LIB_6__::func_333() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_8__::func_852(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_6__::func_558(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_26__::func_74(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	if ((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 1) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
	{
		if (BitTest(uParam0->f_1, 5))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 5);
			MISC::CLEAR_BIT(&Global_2621446, 4);
		}
	}
	else
	{
		if (uParam0->f_1.f_35 == 3)
		{
			CAM::SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE();
		}
		if (__LIB_6__::func_144(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 4) || __LIB_6__::func_144(&(uParam0->f_1)) == 5) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1), 6);
		}
	}
	else
	{
		if (BitTest(uParam0->f_1, 6))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 6);
		}
		func_1683(uParam0);
		__LIB_1__::func_60();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_6__::func_320(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_6__::func_144(&(uParam0->f_1)))
	{
		case 0:
			__LIB_6__::func_554(uParam0);
			break;
		case 1:
			__LIB_39__::func_20(uParam0);
			break;
		case 2:
			func_1671(uParam0);
			break;
		case 3:
			func_1636(uParam0);
			break;
		case 4:
			func_1601(uParam0);
			break;
		case 5:
			func_1338(uParam0);
			break;
		case 6:
			func_1269(uParam0);
			break;
	}
	if (__LIB_6__::func_280())
	{
		__LIB_40__::func_269(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_6__::func_276();
		if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_4__::func_746(&(uParam0->f_1))))
		{
			if (!__LIB_6__::func_275(__LIB_0__::func_727()) || !__LIB_19__::func_338(&(uParam0->f_47), &iVar0, &uVar1, __LIB_0__::func_727()))
			{
				__LIB_41__::func_181(uParam0, 0, 1);
				if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_39__::func_11(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_6__::func_272())
						{
							__LIB_6__::func_271();
							if (!__LIB_0__::func_649(&(uParam0->f_2245)))
							{
								__LIB_0__::func_580(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_2__::func_47(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_32__::func_482();
							}
						}
						else if (__LIB_25__::func_839() && !__LIB_1__::func_215())
						{
							if (__LIB_6__::func_247())
							{
								if (!__LIB_0__::func_649(&(uParam0->f_2253)))
								{
									__LIB_0__::func_580(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_2__::func_47(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_8__::func_843(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_8__::func_843(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_8__::func_842();
	func_981(uParam0);
	__LIB_41__::func_180(uParam0);
}

void func_981(var uParam0)//Position - 0x54E43
{
	if ((((!__LIB_0__::func_191(8, -1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_6__::func_245()) && !__LIB_0__::func_706())
	{
		if (BitTest(uParam0->f_47, 0) || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			if (uParam0->f_1.f_36 != 6)
			{
				func_1141(uParam0);
				__LIB_6__::func_549(&(uParam0->f_47));
				__LIB_32__::func_481(uParam0);
			}
		}
		if (BitTest(uParam0->f_47, 0) || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__::func_218() && __LIB_6__::func_217())
			{
				__LIB_6__::func_216(1);
			}
			if (!__LIB_6__::func_154())
			{
				__LIB_1__::func_304();
			}
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			__LIB_19__::func_511(uParam0);
			__LIB_0__::func_186();
			HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0.466664f);
			if ((__LIB_4__::func_73(&(uParam0->f_1)) != 3 && __LIB_4__::func_73(&(uParam0->f_1)) != 5) && __LIB_4__::func_73(&(uParam0->f_1)) != 4)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
				__LIB_8__::func_611(0);
			}
			HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
			if ((!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || __LIB_6__::func_338() == 1) || __LIB_6__::func_338() == 2)
			{
				if (__LIB_6__::func_215(&(uParam0->f_47)) != 5)
				{
					if (__LIB_6__::func_215(&(uParam0->f_47)) != 3)
					{
						uParam0->f_47.f_1456 = __LIB_6__::func_215(&(uParam0->f_47));
					}
					uParam0->f_47.f_1457 = __LIB_6__::func_215(&(uParam0->f_47));
				}
				if (__LIB_6__::func_215(&(uParam0->f_47)) == 0)
				{
					if (__LIB_1__::func_521(0, &(uParam0->f_47.f_1473), 1))
					{
						if (__LIB_35__::func_770(uParam0))
						{
							if (__LIB_6__::func_214(&(uParam0->f_47)) >= uParam0->f_47.f_1460 || __LIB_6__::func_214(&(uParam0->f_47)) > uParam0->f_47.f_1461)
							{
								__LIB_6__::func_213(&(uParam0->f_47), 0);
							}
							__LIB_6__::func_212(&(uParam0->f_47), 1);
						}
					}
				}
				else if ((Global_2824886 || Global_4718592 != 0) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (BitTest(uParam0->f_47, 0) || (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && (__LIB_6__::func_338() == 2 || __LIB_6__::func_338() == 1)))
					{
						if (!__LIB_19__::func_521())
						{
							func_1082(uParam0, __LIB_6__::func_215(&(uParam0->f_47)));
						}
						switch (__LIB_6__::func_215(&(uParam0->f_47)))
						{
							case 1:
							case 4:
								if (__LIB_27__::func_311())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 6);
								}
								__LIB_39__::func_39(uParam0);
								break;
							case 2:
								__LIB_39__::func_32(uParam0);
								break;
							case 3:
								__LIB_40__::func_273(uParam0);
								break;
							case 5:
								__LIB_40__::func_232(uParam0);
								break;
							case 6:
								if (__LIB_27__::func_311())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 1);
								}
								if (!__LIB_27__::func_89())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 1);
								}
								break;
						}
						__LIB_6__::func_192(__LIB_6__::func_215(&(uParam0->f_47)) == 6);
						if ((uParam0->f_1.f_4 || uParam0->f_1.f_3 > 2) && !BitTest(Global_2621446, 28))
						{
							__LIB_38__::func_956(uParam0, __LIB_6__::func_215(&(uParam0->f_47)));
						}
						if (BitTest(uParam0->f_47, 15))
						{
							if (BitTest(Global_1965451, 1) || !__LIB_0__::func_493())
							{
								if (__LIB_2__::func_47(&(uParam0->f_47.f_2186), 500, 0))
								{
									if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || !__LIB_0__::func_493())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
										GRAPHICS::ANIMPOSTFX_STOP_ALL();
										__LIB_6__::func_966(1);
									}
									MISC::CLEAR_BIT(&(uParam0->f_47), 15);
								}
							}
						}
					}
				}
				__LIB_8__::func_829(uParam0);
			}
		}
	}
	else
	{
		if (__LIB_6__::func_245())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (uParam0->f_47.f_1469 > 0 && uParam0->f_47.f_1469 < 99)
		{
			func_1141(uParam0);
		}
	}
}

void func_1082(var uParam0, int iParam1)//Position - 0x589BC
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	char[] cVar5[8];
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	if (uParam0->f_47.f_1473 == 0)
	{
		return;
	}
	if (uParam0->f_47.f_1473 == -1)
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1473))
	{
		return;
	}
	if (__LIB_4__::func_73(&(uParam0->f_1)) != 3 && (uParam0->f_47.f_1462 > 0 || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)))
	{
		if (BitTest(uParam0->f_47, 6) || BitTest(uParam0->f_47, 5))
		{
			bVar0 = true;
			if (BitTest(uParam0->f_47, 6))
			{
				bVar0 = false;
			}
			if (bVar0 == 0)
			{
				if (Global_2726967 == 1)
				{
					bVar0 = true;
				}
			}
			if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
			{
				switch (iParam1)
				{
					case 1:
						if (!bVar0)
						{
							if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || __LIB_6__::func_338() == 1)
							{
								__LIB_7__::func_0(&(uParam0->f_47.f_1473), "SPEC_HEADER" /* GXT: SPECTATING */, "", 0, __LIB_6__::func_963(__LIB_25__::func_838()), -1, 1);
							}
							else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
							{
								if (__LIB_6__::func_338() == 2)
								{
									__LIB_7__::func_0(&(uParam0->f_47.f_1473), "FREECAM_HEAD" /* GXT: FREE CAM */, "", 0, __LIB_6__::func_963(__LIB_25__::func_838()), -1, 1);
								}
							}
						}
						if ((!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || __LIB_6__::func_338() == 1) || __LIB_6__::func_338() == 2)
						{
							if (!bVar0)
							{
								bVar10 = false;
								bVar11 = false;
								if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
								{
									if (__LIB_19__::func_338(&(uParam0->f_47), &iVar8, &uVar9, __LIB_0__::func_727()))
									{
										bVar10 = true;
										iVar7 = __LIB_0__::func_727();
										switch (iVar8)
										{
											case 0:
											case 2:
											case 4:
												bVar11 = true;
												break;
											}
										}
								}
								iVar16 = (uParam0->f_47.f_1459 * uParam0->f_47.f_1461);
								if (BitTest(uParam0->f_47, 17))
								{
									__LIB_0__::func_579(&(uParam0->f_47.f_2182));
									MISC::CLEAR_BIT(&(uParam0->f_47), 17);
								}
								iVar3 = 0;
								while (iVar3 < uParam0->f_47.f_1462)
								{
									iVar15 = (iVar3 + iVar16);
									Var1 = { __LIB_6__::func_547(&(uParam0->f_47), iVar15) };
									iVar2 = 3;
									if (__LIB_6__::func_275(Var1.f_0))
									{
										if (PED::IS_PED_INJURED(Var1.f_0))
										{
										}
										iVar14 = -1;
										iVar13 = -1;
										bVar12 = false;
										if (bVar10)
										{
											iVar17 = -1;
											iVar18 = -1;
											if (bVar11)
											{
												if (iVar7 == Var1.f_0)
												{
													bVar12 = true;
												}
											}
											else if (__LIB_6__::func_185(&(uParam0->f_47), &iVar17, &iVar18, iVar15))
											{
												if (iVar8 == iVar17)
												{
													bVar12 = true;
													if (iVar2 == 3)
													{
														if (iVar17 == 3)
														{
															iVar2 = __LIB_19__::func_520(0, -1, 0);
														}
														else if (iVar17 == 1)
														{
															iVar2 = __LIB_19__::func_520(1, -1, 0);
														}
													}
												}
											}
										}
										if (iVar2 == 3)
										{
											if ((PED::IS_PED_A_PLAYER(Var1.f_0) && NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0) != -1) && __LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), 0, 1))
											{
												if (__LIB_8__::func_687())
												{
													iVar13 = PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0));
													if (iVar13 != -1 && iVar13 != 8)
													{
														iVar2 = __LIB_25__::func_313(iVar13, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), 0);
													}
													else
													{
														iVar2 = __LIB_35__::func_947(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), -2, 0, 0, 0);
													}
												}
												else
												{
													iVar13 = PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0));
													if (Global_1836584)
													{
														iVar2 = __LIB_19__::func_337(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), iVar13, 1, 16);
													}
													else
													{
														iVar2 = __LIB_35__::func_947(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), -2, 0, 0, 0);
													}
												}
											}
											else if (iVar17 != -1 || __LIB_6__::func_185(&(uParam0->f_47), &iVar17, &iVar18, iVar15))
											{
												switch (iVar17)
												{
													case 3:
													case 4:
														iVar2 = __LIB_19__::func_520(0, -1, 0);
														break;
													case 1:
													case 2:
														iVar2 = __LIB_19__::func_520(1, -1, 0);
														break;
													}
												}
										}
										if (PED::IS_PED_A_PLAYER(Var1.f_0))
										{
											if (iVar19 == 0 && bVar0 == 0)
											{
												GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1473, "START_NEW_ORDER");
												GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
												iVar19 = 1;
											}
											if (((((((!Global_1574962 && !__LIB_0__::func_905(PLAYER::PLAYER_ID())) && !__LIB_1__::func_299(PLAYER::PLAYER_ID())) && __LIB_1__::func_99(PLAYER::PLAYER_ID()) != 3) && __LIB_2__::func_233()) && __LIB_4__::func_73(&(uParam0->f_1)) != 5) && __LIB_4__::func_73(&(uParam0->f_1)) != 4) && !__LIB_1__::func_390(PLAYER::PLAYER_ID(), 122))
											{
												iVar13 = PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0));
												if (iVar13 > -1)
												{
													if (Global_2621446.f_42[iVar13] > -1)
													{
														iVar14 = Global_2621446.f_42[iVar13];
													}
												}
												if (iVar14 == -1)
												{
													if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0) > -1)
													{
														iVar14 = Global_2621446.f_9[NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0)];
													}
												}
											}
											if (iVar14 != -1)
											{
												if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 1)
												{
													if (!Global_1836576)
													{
														iVar14++;
													}
												}
												else if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 0)
												{
													if (!__LIB_0__::func_904(PLAYER::PLAYER_ID()) && iVar13 == -1)
													{
														iVar14++;
													}
												}
											}
											if (iVar14 == 0)
											{
												iVar14 = -1;
											}
											if (__LIB_7__::func_427(PLAYER::PLAYER_ID()))
											{
												StringCopy(&Var4, "", 16);
											}
											else
											{
												__LIB_8__::func_272(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), &Var4);
											}
											iVar6 = func_798(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0));
											cVar5 = "";
											if (iVar6 != 0)
											{
												cVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
											}
											if (!BitTest(uParam0->f_47, 17))
											{
												if (MISC::IS_STRING_NULL_OR_EMPTY(cVar5))
												{
													MISC::SET_BIT(&(uParam0->f_47), 17);
												}
											}
											bVar20 = true;
											iVar21 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0);
											if (iVar21 != -1)
											{
												if (!__LIB_19__::func_514(iVar21))
												{
													bVar20 = false;
												}
											}
											if (!BitTest(uParam0->f_47, 11) && bVar12)
											{
												__LIB_6__::func_213(&(uParam0->f_47), iVar3);
												MISC::SET_BIT(&(uParam0->f_47), 11);
											}
											bVar22 = ENTITY::IS_ENTITY_DEAD(Var1.f_0, false);
											if (__LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0), 0, 1))
											{
												if (iVar2 == 194)
												{
													iVar2 = 12;
												}
												__LIB_6__::func_211(uParam0->f_47.f_1473, bVar0, iVar3, Var1.f_1, iVar2, PLAYER::GET_PLAYER_NAME(Var1.f_2), &Var4, cVar5, bVar12, iVar14, bVar20, bVar22);
											}
										}
									}
									iVar3++;
								}
								if (iVar19 == 1 && bVar0 == 0)
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1473, "END_NEW_ORDER");
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									iVar19 = 0;
								}
								__LIB_1__::func_379(&(uParam0->f_47.f_1473), 1, 0);
								if (__LIB_1__::func_381(PLAYER::PLAYER_ID()))
								{
									iVar3 = 0;
									while (iVar3 < uParam0->f_47.f_1462)
									{
										iVar15 = (iVar3 + iVar16);
										Var1 = { __LIB_6__::func_547(&(uParam0->f_47), iVar15) };
										if (__LIB_6__::func_275(Var1.f_0))
										{
											if (PED::IS_PED_INJURED(Var1.f_0))
											{
											}
											if (PED::IS_PED_A_PLAYER(Var1.f_0))
											{
												iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0);
												if (iVar23 != -1)
												{
													bVar24 = PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var1.f_0));
													if (bVar24 != -1)
													{
														if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1837216[bVar24 /*16*/])) && !MISC::ARE_STRINGS_EQUAL("NULL", &(Global_1837216[bVar24 /*16*/])))
														{
															if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMMC", 2))
															{
																if (Global_4718592.f_92543[bVar24] == 38 && !BitTest(Global_1837281, bVar24))
																{
																	iVar25 = 0;
																}
																else
																{
																	iVar25 = 1;
																}
																GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1473, "SET_ITEM_TEXT_RIGHT");
																GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar15);
																if (iVar25 == 0 && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1837216[bVar24 /*16*/])))
																{
																	__LIB_0__::func_478(&(Global_1837216[bVar24 /*16*/]));
																}
																else
																{
																	__LIB_0__::func_514(&(Global_1837216[bVar24 /*16*/]));
																}
																GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
															}
															else
															{
																HUD::REQUEST_ADDITIONAL_TEXT("FMMC", 2);
																__LIB_6__::func_271();
															}
														}
														else
														{
															__LIB_6__::func_271();
														}
													}
													else
													{
														__LIB_6__::func_271();
													}
												}
											}
										}
										iVar3++;
									}
								}
								if (BitTest(uParam0->f_47, 7))
								{
									if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 0)
									{
										if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											__LIB_6__::func_209(&(uParam0->f_47.f_1473), "SPEC_FIRST_HELP" /* GXT: When on a Team Job you can spectate other players after you have died. */);
										}
									}
									else if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 3)
									{
										if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											__LIB_6__::func_209(&(uParam0->f_47.f_1473), "HRD_DEADMSG2");
										}
									}
								}
							}
							if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1473) && uParam0->f_47.f_1473 != -1)
							{
								__LIB_6__::func_208(&(uParam0->f_47.f_1473), __LIB_6__::func_214(&(uParam0->f_47)));
							}
						}
						break;
				}
				MISC::CLEAR_BIT(&(uParam0->f_47), 6);
				MISC::CLEAR_BIT(&(uParam0->f_47), 5);
				MISC::SET_BIT(&(uParam0->f_47), 1);
			}
		}
		else if (BitTest(uParam0->f_47, 17))
		{
			if (__LIB_2__::func_47(&(uParam0->f_47.f_2182), 2000, 0))
			{
				__LIB_0__::func_579(&(uParam0->f_47.f_2182));
				MISC::CLEAR_BIT(&(uParam0->f_47), 17);
				MISC::SET_BIT(&(uParam0->f_47), 5);
			}
		}
	}
}

void func_1141(var uParam0)//Position - 0x5A50C
{
	bool bVar0;
	bVar0 = false;
	if (BitTest(Global_2621446.f_69.f_5, 17))
	{
		uParam0->f_47.f_1469 = 0;
		MISC::CLEAR_BIT(&(Global_2621446.f_69.f_5), 17);
	}
	switch (uParam0->f_47.f_1469)
	{
		case 0:
			if (__LIB_8__::func_841(uParam0))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
				__LIB_6__::func_244(&(uParam0->f_47));
			}
			uParam0->f_47.f_1470 = MISC::GET_GAME_TIMER();
			uParam0->f_47.f_1469++;
			break;
		case 1:
			switch (uParam0->f_47.f_1467)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					bVar0 = true;
					break;
				case 10:
					HUD::DISPLAY_RADAR(true);
					__LIB_6__::func_147();
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1471));
					bVar0 = true;
					break;
				case 11:
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(true);
						}
						__LIB_6__::func_243(&(uParam0->f_47.f_1));
						__LIB_1__::func_801();
						bVar0 = true;
					}
					else
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(true);
						}
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1471));
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 2:
			switch (uParam0->f_47.f_1468)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					bVar0 = true;
					break;
				case 10:
					uParam0->f_47.f_1471 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						__LIB_1__::func_802();
						__LIB_19__::func_523(uParam0);
						bVar0 = true;
					}
					break;
				case 11:
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						bVar0 = true;
					}
					else
					{
						uParam0->f_47.f_1471 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SOCIAL_CLUB_TV");
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
						{
							func_1179(uParam0, 1);
							__LIB_25__::func_607(uParam0, 0);
							__LIB_19__::func_673(uParam0);
							if (!BitTest(Global_2621446, 18))
							{
								HUD::DISPLAY_RADAR(false);
							}
							bVar0 = true;
						}
					}
					break;
			}
			if (bVar0)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_47.f_1470) > 200)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 4:
			switch (uParam0->f_47.f_1468)
			{
				case 0:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator1");
					break;
				case 1:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator2");
					break;
				case 2:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator3");
					break;
				case 3:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator4");
					break;
				case 4:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator5");
					break;
				case 5:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator6");
					break;
				case 6:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator7");
					break;
				case 7:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator8");
					break;
				case 8:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator9");
					break;
				case 9:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator10");
					break;
				case 10:
				case 11:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator1");
					break;
			}
			__LIB_6__::func_233(&(uParam0->f_47));
			uParam0->f_47.f_1469++;
			break;
		case 5:
			uParam0->f_47.f_1467 = uParam0->f_47.f_1468;
			uParam0->f_47.f_1469 = 99;
			uParam0->f_47.f_2185 = -1;
			break;
		case 99:
			if (uParam0->f_47.f_1467 == 10)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
				Global_2727091 = 1;
				if (!BitTest(Global_2621446, 12))
				{
					MISC::SET_BIT(&Global_2621446, 12);
				}
				if (__LIB_6__::func_232())
				{
					__LIB_19__::func_523(uParam0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_47.f_1453) >= 5000)
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						uParam0->f_47.f_1454 = (uParam0->f_47.f_1454 + 1f);
						if (uParam0->f_47.f_1454 >= 4f)
						{
							uParam0->f_47.f_1454 = 0f;
						}
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_47.f_1454);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uParam0->f_47.f_1453 = NETWORK::GET_NETWORK_TIME();
					}
				}
			}
			else if (BitTest(Global_2621446, 12))
			{
				MISC::CLEAR_BIT(&Global_2621446, 12);
			}
			if (uParam0->f_47.f_1467 == 11)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_25__::func_712(&(uParam0->f_47.f_1));
				}
				else if (BitTest(Global_2621446.f_69.f_5, 6))
				{
					__LIB_25__::func_607(uParam0, 0);
					MISC::CLEAR_BIT(&(Global_2621446.f_69.f_5), 6);
				}
				else if (__LIB_2__::func_47(&(uParam0->f_47.f_2176), uParam0->f_47.f_2178, 0))
				{
					MISC::SET_BIT(&(Global_2621446.f_69.f_5), 6);
					__LIB_0__::func_579(&(uParam0->f_47.f_2176));
				}
			}
			break;
	}
}

void func_1179(var uParam0, bool bParam1)//Position - 0x5C239
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SHOW_LIVE_PANEL");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_LIVE_PANEL");
		__LIB_0__::func_478("SPEC_LIVE" /* GXT: LIVE */);
		if (Global_2621446.f_69 == 1)
		{
			if (PED::IS_PED_A_PLAYER(__LIB_0__::func_727()))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_0__::func_727());
				if (__LIB_1__::func_264(iVar0, 0, 0))
				{
					iVar1 = func_798(iVar0);
					sVar2 = "";
					if (iVar1 != 0)
					{
						sVar2 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
					}
					__LIB_8__::func_272(iVar0, &sVar3);
					__LIB_0__::func_478("SPEC_CRWT" /* GXT: Currently Watching */);
					__LIB_0__::func_514(PLAYER::GET_PLAYER_NAME(iVar0));
					__LIB_0__::func_514(&sVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sVar2);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sVar2);
				}
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_1269(var uParam0)//Position - 0x5E85B
{
	func_1310(uParam0);
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_381(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
	{
		if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
		}
	}
	if (!__LIB_1__::func_593() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_0__::func_734() || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_8__::func_786())
			{
				if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_35__::func_769(uParam0);
	__LIB_19__::func_475(&(uParam0->f_47));
	__LIB_26__::func_343(uParam0);
	__LIB_6__::func_285(&(uParam0->f_1));
	__LIB_6__::func_152();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_6__::func_274(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_6__::func_284())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_8__::func_779(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_8__::func_784(&(uParam0->f_1));
	__LIB_8__::func_783();
	__LIB_6__::func_283();
	if (__LIB_6__::func_284())
	{
		__LIB_1__::func_687(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
	MISC::CLEAR_BIT(&Global_2621446, 5);
	MISC::CLEAR_BIT(&Global_2621446, 10);
	MISC::CLEAR_BIT(&Global_2621446, 4);
	MISC::CLEAR_BIT(&Global_2621446, 6);
	MISC::CLEAR_BIT(&Global_2621446, 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 2)
	{
		__LIB_4__::func_742(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_4__::func_71();
	}
	__LIB_6__::func_334(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_6__::func_330(&(uParam0->f_1));
	}
	if (!__LIB_6__::func_281(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_6__::func_174())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_27__::func_312();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_4__::func_741(&(uParam0->f_1), 0);
}

void func_1310(var uParam0)//Position - 0x5F571
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1311(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_1311(int iParam0, bool bParam1)//Position - 0x5F5A2
{
	if (bParam1)
	{
		if (!__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_4__::func_745(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_32__::func_206(iParam0))
			{
				__LIB_25__::func_678(iParam0, 1);
			}
		}
	}
	else if (__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_4__::func_743(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_1311(11, bParam1);
		func_1311(12, bParam1);
		func_1311(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_1311(37, bParam1);
		func_1311(38, bParam1);
		func_1311(39, bParam1);
		func_1311(40, bParam1);
		func_1311(41, bParam1);
	}
}

void func_1338(var uParam0)//Position - 0x68916
{
	if (func_1339(uParam0))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_1339(var uParam0)//Position - 0x68930
{
	if (!BitTest(uParam0->f_1, 11))
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
		else if (!__LIB_8__::func_786())
		{
			CAM::DO_SCREEN_FADE_IN(250);
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
	}
	if (func_1340(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_1340(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x6899E
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_1__::func_598() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_496() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_1375();
		__LIB_18__::func_742(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_496() == 58)
			{
				__LIB_1__::func_594(1);
			}
			if (__LIB_1__::func_593())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_491() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_708(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_18__::func_742(1, 0);
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	__LIB_8__::func_626();
	__LIB_6__::func_298();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_1__::func_592())
		{
			__LIB_1__::func_591();
		}
	}
	if (!__LIB_2__::func_283())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_217())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_3__::func_858(-1046478848)) || __LIB_4__::func_977())
			{
				if (__LIB_33__::func_159(0))
				{
					bParam12 = true;
					if (__LIB_1__::func_590() > 800 || (__LIB_36__::func_797() && !__LIB_7__::func_7()))
					{
						if (__LIB_4__::func_715() && !__LIB_0__::func_706())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__::func_705();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_7__::func_6(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_16__::func_621(1, 0, 1);
		}
		if (((__LIB_4__::func_715() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_6__::func_297())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { fParam5, fParam6, fParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_1__::func_589();
			__LIB_1__::func_210();
			if (__LIB_0__::func_791())
			{
				if (__LIB_1__::func_588())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__::func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__::func_217())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_217())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__::func_708(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_16__::func_621(1, 0, 1);
			}
		}
		if (__LIB_0__::func_491() == 1)
		{
			if (__LIB_0__::func_791())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_214();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_16__::func_621(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_493())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_708(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_7__::func_311();
						__LIB_16__::func_621(0, 0, 1);
						if (((__LIB_1__::func_241() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_7__::func_311();
					}
					__LIB_16__::func_621(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_7__::func_311())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_7__::func_311();
						}
						__LIB_16__::func_621(0, 0, 1);
					}
					__LIB_0__::func_708(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1375()//Position - 0x69A04
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		if (__LIB_6__::func_945(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__::func_228(387, iVar2);
			Var1[1] = __LIB_0__::func_228(388, iVar2);
			Var1[2] = __LIB_0__::func_228(389, iVar2);
			Var1[3] = __LIB_0__::func_228(390, iVar2);
			Var1[4] = __LIB_0__::func_228(391, iVar2);
			Var1[5] = __LIB_0__::func_228(392, iVar2);
			Var1[6] = __LIB_0__::func_228(393, iVar2);
			Var1[7] = __LIB_0__::func_228(394, iVar2);
			Var1[8] = __LIB_0__::func_228(395, iVar2);
			Var1[9] = __LIB_0__::func_228(396, iVar2);
			Var1[10] = __LIB_0__::func_228(397, iVar2);
			Var1[11] = __LIB_0__::func_228(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_228(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_228(400, iVar2) + __LIB_0__::func_228(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_228(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_228(402, iVar2) + __LIB_0__::func_228(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_228(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_228(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_228(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_228(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_228(407, iVar2) + __LIB_0__::func_228(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_228(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_228(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_228(410, iVar2) + __LIB_0__::func_228(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_228(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_228(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_228(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_228(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_228(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_228(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_228(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_228(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_228(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_228(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_228(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_228(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_228(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_228(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_228(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_228(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_228(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_228(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_228(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_228(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_228(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_228(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_228(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_228(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_228(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_228(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_228(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_228(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_228(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_228(440, iVar2);
			if (__LIB_1__::func_563(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_556(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_556(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_556(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_556(755, iVar2, 0);
			func_1376(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_1376(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x69EDA
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
			if (func_1592(iParam0, iVar1, &iVar2, 0))
			{
				func_1577(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_1518(iParam0, iVar1, &iVar2))
			{
				func_1577(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_1516(iParam0);
			__LIB_1__::func_597(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_597(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_1380(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1380(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_597(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_597(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_905(161, 1, -1, 1);
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

int func_1380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x6A637
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
			func_1507(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 10, 0, -1) };
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
						func_1507(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1507(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1380(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1507(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, func_1497(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_1380(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1492(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1507(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_721(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1507(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1380(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_39__::func_293(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1480(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1380(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_827(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1380(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1380(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar32, -1) };
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
								func_1380(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_827(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
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
								func_1380(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1380(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1380(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_931(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1492(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1480(iVar5, func_1497(iParam0, 8, -1), iParam2, func_1497(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
				func_1429(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1480(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1492(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1480(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
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
						func_1380(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1380(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1480(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1480(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1480(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1402(iParam0, 9, iVar63))
						{
							func_1380(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_7__::func_696(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1497(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1497(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1380(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1380(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1380(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1380(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1380(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1380(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1380(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1380(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1380(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1380(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_39__::func_293(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1381(iParam0, &uVar4))
		{
			func_1380(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1380(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1380(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_1497(iParam0, 3, -1), iVar10);
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
				func_1380(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1381(int iParam0, var uParam1)//Position - 0x6C4E3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1497(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_1402(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1402(int iParam0, int iParam1, int iParam2)//Position - 0x707D5
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1402(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1402(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1402(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_1402(iParam0, 14, uVar11[iVar10]))
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
						return func_1402(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_1402(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1429(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7851B
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_1430(iParam0, bParam3, 0, -1);
}

void func_1430(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x78569
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
		bVar3 = func_1463(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_1456(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_901(Var9.f_2, Var9.f_3, iVar10))
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

int func_1456(int iParam0, int iParam1)//Position - 0x8758A
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1497(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_1497(iParam0, 11, -1);
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

int func_1463(int iParam0, bool bParam1)//Position - 0x87998
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
							iVar2 = __LIB_25__::func_18(joaat("MP_M_Freemode_01"), 11, func_1497(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_604(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_1497(iParam0, 11, -1);
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
						iVar5 = func_1497(iParam0, 8, -1);
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
							iVar7 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1497(iParam0, 11, -1), 0);
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
						iVar8 = func_1497(iParam0, 11, -1);
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
							iVar10 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1497(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_1497(iParam0, 11, -1), 0);
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
						iVar12 = func_1497(iParam0, 8, -1);
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

int func_1480(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9077A
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
					iVar0 = func_1480(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1480(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_1492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x94FE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1516(iParam0))
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
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_28(iVar0, iParam2, 13) && !__LIB_25__::func_28(iVar0, iParam2, 14)) && !__LIB_25__::func_28(iVar0, iParam2, 15)) && !__LIB_25__::func_28(iVar0, iParam2, 16)) && !__LIB_25__::func_28(iVar0, iParam2, 71)) && !__LIB_25__::func_28(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1497(int iParam0, int iParam1, int iParam2)//Position - 0x95283
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
				if (func_1402(iParam0, iParam1, iVar0))
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
				if (func_1402(iParam0, iParam1, iVar1))
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

void func_1507(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x97FF6
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1507(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1507(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1507(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1507(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1507(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1507(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1507(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1507(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1507(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1507(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1516(int iParam0)//Position - 0x9A2E8
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_4__::func_11(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1497(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_4__::func_11(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1497(iParam0, 11, -1);
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

int func_1518(int iParam0, int iParam1, int iParam2)//Position - 0x9A642
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_1519(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_1519(int iParam0, int iParam1, int iParam2)//Position - 0x9A6CE
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
	Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1519(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1519(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_38__::func_261(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1519(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_38__::func_261(iVar0, iVar2, iVar1, -1) };
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
			if (!func_1519(iParam0, 14, uVar8[iVar7]))
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

int func_1577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xAD6C8
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
		Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_8__::func_105(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_8__::func_105(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_41__::func_644(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_1577(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_8__::func_105(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_41__::func_644(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_1577(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, iVar0, func_1581(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_1592(iParam0, iVar10, &iVar4, 1))
							{
								func_1577(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_1577(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_38__::func_261(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_1577(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1577(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1577(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1577(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_38__::func_261(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1577(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_38__::func_261(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_8__::func_105(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_41__::func_644(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_1577(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_8__::func_105(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_41__::func_644(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1577(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_41__::func_644(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_1577(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_40__::func_20(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_1592(iParam0, iVar10, &iVar4, 0))
		{
			func_1577(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_1518(iParam0, iVar10, &iVar4))
		{
			func_1577(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1581(int iParam0, int iParam1, int iParam2)//Position - 0xAE068
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
				if (func_1519(iParam0, iParam1, iVar0))
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
				if (func_1519(iParam0, iParam1, iVar1))
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

int func_1592(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAFD25
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_1519(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_1601(var uParam0)//Position - 0xAFE78
{
	if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_8__::func_824(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_6__::func_274(&(uParam0->f_1), 1);
	}
	if (func_1602(uParam0, 0, 1))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_1602(var uParam0, bool bParam1, bool bParam2)//Position - 0xAFEB2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	if (__LIB_6__::func_171(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_282() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_282())) && (!bParam1 || __LIB_36__::func_796(uParam0, __LIB_1__::func_282(), 1))) && !__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
	{
		iVar1 = __LIB_1__::func_282();
	}
	else if (__LIB_27__::func_309(uParam0, 0))
	{
		__LIB_40__::func_269(uParam0);
		if (__LIB_39__::func_11(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_8__::func_824(uParam0, __LIB_8__::func_835(&(uParam0->f_47), iVar6, iVar7));
			__LIB_35__::func_715(uParam0, iVar6, iVar7);
			__LIB_5__::func_951(&(uParam0->f_1), 0);
		}
		else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_25__::func_839())
			{
				__LIB_8__::func_843(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_6__::func_552())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					MISC::SET_BIT(&(Global_2621446.f_1), 0);
					NETWORK::NETWORK_BAIL(15, 0, 0);
					Global_2621446.f_81 = 3;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (uParam0->f_1.f_34)
		{
			switch (__LIB_0__::func_997(&(uParam0->f_1)))
			{
				case 0:
					uParam0->f_1.f_6 = 0;
					if (uParam0->f_1.f_35 == 3)
					{
						uParam0->f_1.f_5 = 10000;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()) && __LIB_0__::func_727() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_727(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_6__::func_304(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_4__::func_766(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && __LIB_4__::func_755(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
						else
						{
							uParam0->f_1.f_5 = 8000;
						}
					}
					else
					{
						uParam0->f_1.f_5 = 8000;
						if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_5__::func_951(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_6__::func_168(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_19__::func_674(uParam0);
							if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_19__::func_674(uParam0);
									__LIB_5__::func_951(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_19__::func_674(uParam0);
								__LIB_5__::func_951(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_32__::func_240();
					__LIB_26__::func_343(uParam0);
					__LIB_1__::func_3();
					if (!Global_1931426)
					{
						__LIB_27__::func_312();
					}
					if (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) || !__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
					{
						if (!__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544())))
						{
							__LIB_40__::func_253(1, 1);
						}
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1) || !PED::IS_PED_INJURED(iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
							{
								if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
								}
							}
							if (!__LIB_6__::func_272())
							{
								__LIB_8__::func_779(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_6__::func_302(&(uParam0->f_1.f_7), 0);
						}
						if (Global_2715699.f_2846.f_26)
						{
							if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
							{
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									MISC::CLEAR_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18))
									{
										HUD::DISPLAY_RADAR(false);
									}
								}
								else
								{
									MISC::SET_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18) && __LIB_4__::func_73(&(uParam0->f_1)) != 3)
									{
										HUD::DISPLAY_RADAR(true);
									}
								}
							}
						}
						if ((uParam0->f_1.f_5 > 0 || uParam0->f_1.f_6) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (uParam0->f_1.f_44 < 5 && !STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
							{
								uParam0->f_1.f_44++;
								return 0;
							}
							uParam0->f_1.f_44 = 0;
							func_1683(uParam0);
							if (__LIB_6__::func_304(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::func_160())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_4__::func_73(&(uParam0->f_1)) != 5 && __LIB_4__::func_73(&(uParam0->f_1)) != 3) && __LIB_4__::func_73(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
								{
									if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
										{
											ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
											PED::SET_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0f);
											return 0;
										}
									}
									if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_6__::func_304(&(uParam0->f_1)))
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_1.f_30, 0f, 0f, 0f);
								}
							}
							else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								STREAMING::SET_FOCUS_ENTITY(iVar1);
							}
							if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1.f_30, 50f, 0);
								}
							}
							MISC::SET_BIT(&(uParam0->f_1), 10);
						}
						else
						{
							uParam0->f_1.f_30 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						}
					}
					__LIB_25__::func_840(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_6__::func_301(uParam0);
					__LIB_0__::func_579(&(uParam0->f_2257));
					__LIB_5__::func_951(&(uParam0->f_1), 3);
					break;
				case 3:
					bVar0 = false;
					if (BitTest(uParam0->f_1, 10))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							bVar0 = true;
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)))
								{
									bVar0 = false;
								}
							}
						}
						else if (!__LIB_6__::func_304(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_9__::func_91(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::func_579(&(uParam0->f_2257));
								__LIB_0__::func_580(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_649(&(uParam0->f_2257)))
							{
								if (!__LIB_2__::func_47(&(uParam0->f_2257), 6000, 0))
								{
									return 0;
								}
								else
								{
									bVar0 = true;
								}
							}
						}
					}
					if (!bVar0)
					{
						if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_24) > uParam0->f_1.f_5)
						{
							bVar0 = true;
						}
					}
					if (__LIB_6__::func_551(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(iVar2, 0, 1))
						{
							if (__LIB_0__::func_743(iVar2))
							{
								if (__LIB_7__::func_276(iVar2))
								{
									if (__LIB_0__::func_706())
									{
										if (!__LIB_0__::func_827(109))
										{
											if (__LIB_0__::func_742() == 6)
											{
												if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_IN(500);
												}
											}
											bVar0 = false;
										}
									}
								}
							}
						}
					}
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									PED::SET_PED_LOD_MULTIPLIER(iVar1, 2.5f);
								}
							}
						}
						if (!BitTest(uParam0->f_1, 12))
						{
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::func_579(&(uParam0->f_2257));
						__LIB_5__::func_951(&(uParam0->f_1), 4);
					}
					__LIB_25__::func_840(uParam0);
					break;
				case 4:
					__LIB_25__::func_840(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_706() || __LIB_27__::func_91())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_8__::func_786() && !__LIB_6__::func_300(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_706() || __LIB_27__::func_91())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::func_579(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_5__::func_951(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_5__::func_951(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_6__::func_273();
					__LIB_6__::func_285(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_5__::func_951(&(uParam0->f_1), 0);
					__LIB_6__::func_274(&(uParam0->f_1), 0);
					break;
				}
			}
	}
	if (!uParam0->f_1.f_34)
	{
		uParam0->f_1.f_4 = 1;
		MISC::CLEAR_BIT(&(uParam0->f_47), 2);
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_6__::func_299();
		__LIB_6__::func_550(uParam0, __LIB_1__::func_282());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
		}
		else
		{
			uParam0->f_1.f_42 = -1;
		}
		return 1;
	}
	return 0;
}

void func_1636(var uParam0)//Position - 0xB1659
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_497())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
				{
					if (BitTest(Global_2621446, 28))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
						HUD::HIDE_HELP_TEXT_THIS_FRAME();
						HUD::THEFEED_HIDE_THIS_FRAME();
						return;
					}
				}
				if (__LIB_0__::func_80())
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				if (__LIB_19__::func_530() && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_6__::func_301(uParam0);
				if (__LIB_6__::func_318(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_0__::func_727())
					{
						__LIB_6__::func_550(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_8__::func_824(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
						__LIB_6__::func_246();
					}
				}
				if (__LIB_6__::func_275(__LIB_1__::func_282()))
				{
					if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
						{
							__LIB_27__::func_314(uParam0);
							if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
							{
								func_1655(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
								{
									if (__LIB_0__::func_743(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
									{
										__LIB_6__::func_246();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_649(&(uParam0->f_2255)))
							{
								if (__LIB_34__::func_289(__LIB_1__::func_282(), __LIB_4__::func_73(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::func_579(&(uParam0->f_2255));
								}
							}
							func_1641(uParam0, __LIB_1__::func_282());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_40__::func_269(uParam0);
						}
					}
					if ((__LIB_6__::func_144(&(uParam0->f_1)) != 6 && __LIB_6__::func_144(&(uParam0->f_1)) != 4) && __LIB_6__::func_144(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_282() != __LIB_0__::func_727())
						{
							if (!__LIB_8__::func_694())
							{
								__LIB_5__::func_951(&(uParam0->f_1), 0);
								__LIB_4__::func_741(&(uParam0->f_1), 2);
								__LIB_6__::func_274(&(uParam0->f_1), 1);
								__LIB_8__::func_784(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					__LIB_41__::func_181(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_41__::func_182(uParam0);
	}
	__LIB_41__::func_776(uParam0);
}

void func_1641(var uParam0, int iParam1)//Position - 0xB1A5D
{
	if (__LIB_8__::func_849(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_32__::func_241(iParam1);
		}
		else if (!__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_1311(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_1310(uParam0);
	}
}

void func_1655(var uParam0)//Position - 0xB2018
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
	if (iVar1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_6__::func_305(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_7__::func_211(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_9__::func_49(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_6__::func_154() && __LIB_1__::func_212())
		{
			bVar0 = false;
		}
	}
	if (__LIB_1__::func_592())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 2)
		{
			__LIB_6__::func_283();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 1)
			{
				if ((!__LIB_0__::func_649(&(uParam0->f_2251)) || __LIB_2__::func_47(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_491() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::func_579(&(uParam0->f_2251));
					__LIB_8__::func_788(uParam0, __LIB_6__::func_314());
					__LIB_8__::func_779(0, 0, 1);
					func_1340(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_495(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_6__::func_336() == 0)
			{
				__LIB_6__::func_335(1);
			}
		}
		switch (__LIB_6__::func_336())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
							__LIB_1__::func_748();
							__LIB_40__::func_253(1, 1);
							__LIB_6__::func_313(1);
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_8__::func_779(1, __LIB_0__::func_727(), 1);
					__LIB_1__::func_748();
					__LIB_40__::func_253(1, 1);
					__LIB_6__::func_313(1);
					__LIB_6__::func_335(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_6__::func_335(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_8__::func_786())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					__LIB_6__::func_335(0);
				}
				break;
			}
	}
}

void func_1671(var uParam0)//Position - 0xB28AE
{
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_4__::func_764(16))
		{
			if (func_1602(uParam0, 1, 0))
			{
				__LIB_4__::func_741(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_8__::func_783();
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_41__::func_182(uParam0);
	}
	__LIB_41__::func_776(uParam0);
}

void func_1683(var uParam0)//Position - 0xB2C61
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	var uVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<3> Var18;
	int iVar19;
	struct<3> Var20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	int iVar24;
	struct<3> Var25;
	int iVar26;
	struct<3> Var27;
	int iVar28;
	int iVar29;
	struct<415> Var30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	fVar1 = 0.25f;
	if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_6__::func_304(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_6__::func_329())
			{
				Var2 = { __LIB_6__::func_328() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_0__::func_997(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_6__::func_544();
	}
	else
	{
		iVar0 = __LIB_0__::func_727();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar4 = iVar3;
				if (iVar4 != -1)
				{
					iVar5 = -1;
					iVar6 = -1;
					iVar6 = __LIB_4__::func_962(iVar3, 0);
					bVar7 = false;
					if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 8))
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_776;
					}
					else
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_267.f_32;
					}
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (!bVar7)
						{
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_630(iVar5, -1)) && !__LIB_18__::func_376(iVar5, 0, 0)) && !__LIB_3__::func_813(iVar3))
							{
								iVar14 = __LIB_0__::func_299(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_264(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (__LIB_6__::func_327(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
								}
							}
						}
						if ((!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge")) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
						{
							iVar5 = 86;
						}
						if (bVar7)
						{
							iVar15 = __LIB_4__::func_721(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_3__::func_977(iVar3);
							}
							if ((iVar15 == 81 || iVar15 == 82) || iVar15 == 117)
							{
								if (iVar15 == 117)
								{
									iVar16 = joaat("terbyte");
								}
								else
								{
									iVar16 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_4__::func_721(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_3__::func_977(iVar3);
							}
							if ((iVar21 == 81 || iVar21 == 82) || iVar21 == 117)
							{
								if (iVar21 == 117)
								{
									iVar22 = joaat("terbyte");
								}
								else
								{
									iVar22 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_6__::func_326(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_19__::func_531(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_19__::func_531(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_6__::func_326(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_19__::func_531(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_19__::func_531(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_26__::func_343(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_155(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_4__::func_710(iVar5) || (__LIB_4__::func_710(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_6__::func_325(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_26__::func_343(uParam0);
										}
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_4__::func_710(iVar5))
											{
												__LIB_6__::func_326(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_19__::func_532(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_6__::func_326(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_19__::func_532(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_3__::func_859(iVar3) || __LIB_3__::func_998(iVar3))
							{
								iVar28 = __LIB_4__::func_721(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_3__::func_977(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_170(iVar28) != 4)) && __LIB_0__::func_170(iVar28) != 12) && __LIB_0__::func_170(iVar28) != 8) && __LIB_0__::func_170(iVar28) != 5) && __LIB_0__::func_170(iVar28) != 10) && __LIB_0__::func_170(iVar28) != 6) && __LIB_0__::func_170(iVar28) != 14) && __LIB_0__::func_170(iVar28) != 15) && __LIB_0__::func_170(iVar28) != 16) && __LIB_0__::func_170(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_170(iVar28) == 11)
										{
											iVar29 = 1;
										}
										Var30.f_22.f_10 = -1;
										Var30.f_22.f_37 = -1;
										Var30.f_22.f_40 = 1048576000;
										Var30.f_22.f_66 = 1048576000;
										Var30.f_22.f_68 = -1;
										Var30.f_22.f_69 = 2;
										Var30.f_22.f_72 = 2;
										Var30.f_22.f_89 = 4;
										Var30.f_22.f_94 = -1;
										Var30.f_22.f_96 = 4;
										Var30.f_22.f_109.f_1 = 10;
										Var30.f_22.f_122.f_1 = 10;
										Var30.f_22.f_135 = 4;
										Var30.f_22.f_140 = 30;
										Var30.f_22.f_171 = 4;
										Var30.f_22.f_176 = 6;
										Var30.f_22.f_183 = 4;
										Var30.f_22.f_189 = 9;
										Var30.f_22.f_218 = -1;
										Var30.f_22.f_221 = 6;
										Var30.f_285 = 9;
										Var30.f_285.f_28 = 9;
										Var30.f_285.f_56 = 9;
										Var30.f_285.f_66 = 9;
										Var30.f_285.f_94 = 9;
										Var30.f_403 = -1;
										Var30.f_405 = 2;
										Var30.f_413 = -1;
										Var30.f_414 = -1;
										func_1691(iVar28, &Var30, iVar29, 0);
										__LIB_6__::func_325(uParam0);
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_6__::func_326(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_19__::func_532(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_19__::func_532(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_19__::func_532(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 13))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_19__::func_532(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 14))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_19__::func_532(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_9__::func_93(iVar3))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_324(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_19__::func_532(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_2815059.f_4660, 5))
							{
								bVar7 = true;
								if (BitTest(uParam0->f_1, 16))
								{
									MISC::CLEAR_BIT(&(uParam0->f_1), 16);
								}
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_323(0);
									uParam0->f_1.f_41 = 10;
									__LIB_19__::func_532(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_0__::func_743(iVar3) && __LIB_1__::func_566(iVar3) < 41) && !__LIB_1__::func_155(iVar3, 1, 0))
								{
									if ((__LIB_6__::func_144(&(uParam0->f_1)) == 3 && __LIB_9__::func_888(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_6__::func_304(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_706())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_16__::func_621(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_6__::func_304(&(uParam0->f_1)))
									{
										bVar7 = true;
									}
									else if (Global_2689235[iVar4 /*453*/].f_205.f_2 > 0f)
									{
										Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
										Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
										fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
										bVar7 = true;
										if (__LIB_0__::func_86(Var8))
										{
											Var8 = { Global_2689235[iVar4 /*453*/].f_205 };
											Var8.f_0 = (Var8.f_0 + 0f);
											Var8.f_1 = (Var8.f_1 + -2.3332f);
											Var8.f_2 = (Var8.f_2 + 3.2914f);
											Var9 = { -40.6168f, 0f, 0f };
											fVar13 = 40.3433f;
										}
										uParam0->f_1.f_41 = 12;
										__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_702(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (__LIB_6__::func_322(__LIB_1__::func_265(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_19__::func_532(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_706())
					{
						if (__LIB_9__::func_92(uParam0, iVar3) && !__LIB_6__::func_321())
						{
							__LIB_26__::func_343(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_1691(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xB3E37
{
	var uVar0;
	func_1692(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_1692(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB3E4D
{
	struct<33> Var0;
	func_1693(iParam0, &Var0, 2);
	func_1693(iParam0, &Var0, 6);
	func_1693(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

void func_1693(int iParam0, var uParam1, int iParam2)//Position - 0xB3E9C
{
	func_5841(uParam1, iParam2);
	func_5835(uParam1, iParam2);
	func_5827(uParam1, iParam2);
	func_1694(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_1694(int iParam0, var uParam1, int iParam2)//Position - 0xB3ECA
{
	switch (iParam0)
	{
		case 0:
			func_5757(uParam1, iParam2);
			break;
		case 1:
			func_5627(uParam1, iParam2);
			break;
		case 2:
			func_5557(uParam1, iParam2);
			break;
		case 3:
			func_5484(uParam1, iParam2);
			break;
		case 4:
			func_5316(uParam1, iParam2);
			break;
		case 5:
			func_5162(uParam1, iParam2);
			break;
		case 6:
			func_5099(uParam1, iParam2);
			break;
		case 7:
			func_4935(uParam1, iParam2);
			break;
		case 8:
			func_4770(uParam1, iParam2);
			break;
		case 9:
			func_4534(uParam1, iParam2);
			break;
		case 10:
			func_4456(uParam1, iParam2);
			break;
		case 11:
			func_4235(uParam1, iParam2);
			break;
		case 12:
			func_4098(uParam1, iParam2);
			break;
		case 13:
			func_3931(uParam1, iParam2);
			break;
		case 14:
			func_3762(uParam1, iParam2);
			break;
		case 15:
			func_3584(uParam1, iParam2);
			break;
		case 16:
			func_3474(uParam1, iParam2);
			break;
		case 17:
			func_3258(uParam1, iParam2);
			break;
		case 18:
			func_3164(uParam1, iParam2);
			break;
		case 19:
			func_3044(uParam1, iParam2);
			break;
		case 20:
			func_2735(uParam1, iParam2);
			break;
		case 21:
			func_2614(uParam1, iParam2);
			break;
		case 22:
			func_2444(uParam1, iParam2);
			break;
		case 23:
			func_2223(uParam1, iParam2);
			break;
		case 24:
			func_1695(uParam1, iParam2);
			break;
	}
}

void func_1695(var uParam0, int iParam1)//Position - 0xB4083
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 908705/*func_2222*/;
			break;
		case 111:
			uParam0->f_35 = 908691/*func_2221*/;
			break;
		case 1:
			uParam0->f_30 = 908593/*func_2220*/;
			break;
		case 2:
			uParam0->f_31 = 907246/*func_2214*/;
			break;
		case 3:
			uParam0->f_34 = 907017/*func_2213*/;
			break;
		case 4:
			uParam0->f_12 = 907004/*func_2212*/;
			break;
		case 5:
			uParam0->f_11 = 906994/*func_2211*/;
			break;
		case 37:
			uParam0->f_18 = 906797/*func_2210*/;
			break;
		case 38:
			uParam0->f_9 = 906749/*func_2209*/;
			break;
		case 42:
			uParam0->f_10 = 906720/*func_2208*/;
			break;
		case 6:
			uParam0->f_32 = 906411/*func_2207*/;
			break;
		case 11:
			uParam0->f_11 = 906402/*func_2206*/;
			break;
		case 12:
			uParam0->f_33 = 903758/*func_2199*/;
			break;
		case 14:
			uParam0->f_11 = 903749/*func_2198*/;
			break;
		case 109:
			uParam0->f_56 = 897121/*func_2195*/;
			break;
		case 8:
			uParam0->f_37 = 896246/*func_2194*/;
			break;
		case 7:
			uParam0->f_36 = 896129/*func_2193*/;
			break;
		case 79:
			*uParam0 = 896073/*func_2190*/;
			break;
		case 9:
			uParam0->f_29 = 895920/*func_2189*/;
			break;
		case 10:
			uParam0->f_27 = 895773/*func_2187*/;
			break;
		case 13:
			uParam0->f_2 = 895711/*func_2186*/;
			break;
		case 15:
			uParam0->f_2 = 894128/*func_2171*/;
			break;
		case 16:
			uParam0->f_5 = 892958/*func_2163*/;
			break;
		case 108:
			uParam0->f_55 = 837925/*func_2063*/;
			break;
		case 17:
			uParam0->f_17 = 836328/*func_2049*/;
			break;
		case 19:
			uParam0->f_17 = 836178/*func_2044*/;
			break;
		case 18:
			uParam0->f_8 = 836153/*func_2043*/;
			break;
		case 20:
			uParam0->f_3 = 835933/*func_2041*/;
			break;
		case 21:
			uParam0->f_3 = 834489/*func_2027*/;
			break;
		case 74:
			uParam0->f_53 = 834299/*func_2025*/;
			break;
		case 75:
			uParam0->f_4 = 833101/*func_2020*/;
			break;
		case 22:
			uParam0->f_24 = 832994/*func_2019*/;
			break;
		case 23:
			uParam0->f_26 = 832947/*func_2018*/;
			break;
		case 24:
			uParam0->f_26 = 832910/*func_2017*/;
			break;
		case 26:
			uParam0->f_38 = 832902/*func_2016*/;
			break;
		case 25:
			uParam0->f_23 = 829937/*func_1997*/;
			break;
		case 27:
			uParam0->f_25 = 829929/*func_1996*/;
			break;
		case 28:
			uParam0->f_24 = 829921/*func_1995*/;
			break;
		case 30:
			uParam0->f_8 = 829771/*func_1993*/;
			break;
		case 31:
			uParam0->f_39 = 829563/*func_1991*/;
			break;
		case 33:
			uParam0->f_40 = 828648/*func_1983*/;
			break;
		case 32:
			*uParam0 = 828593/*func_1982*/;
			break;
		case 76:
			uParam0->f_13 = 828582/*func_1981*/;
			break;
		case 34:
			uParam0->f_41 = 824830/*func_1978*/;
			break;
		case 36:
			uParam0->f_58 = 824785/*func_1977*/;
			break;
		case 35:
			uParam0->f_42 = 803780/*func_1974*/;
			break;
		case 45:
			uParam0->f_14 = 803771/*func_1973*/;
			break;
		case 46:
			uParam0->f_14 = 803762/*func_1972*/;
			break;
		case 110:
			uParam0->f_57 = 803754/*func_1971*/;
			break;
		case 77:
			uParam0->f_13 = 803731/*func_1970*/;
			break;
		case 82:
			uParam0->f_19 = 803685/*func_1968*/;
			break;
		case 47:
			uParam0->f_43 = 803542/*func_1967*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 802397/*func_1958*/;
			break;
		case 49:
			uParam0->f_8 = 802379/*func_1957*/;
			break;
		case 50:
			*uParam0 = 802065/*func_1954*/;
			break;
		case 51:
			*uParam0 = 801963/*func_1953*/;
			break;
		case 52:
			uParam0->f_15 = 801952/*func_1952*/;
			break;
		case 53:
			uParam0->f_13 = 801826/*func_1951*/;
			break;
		case 54:
			uParam0->f_45 = 801436/*func_1950*/;
			break;
		case 56:
			uParam0->f_46 = 801417/*func_1949*/;
			break;
		case 57:
			uParam0->f_11 = 801131/*func_1947*/;
			break;
		case 58:
			uParam0->f_13 = 801005/*func_1946*/;
			break;
		case 59:
			*uParam0 = 799626/*func_1935*/;
			break;
		case 60:
			*uParam0 = 799617/*func_1934*/;
			break;
		case 61:
			uParam0->f_15 = 799606/*func_1933*/;
			break;
		case 62:
			uParam0->f_13 = 799480/*func_1932*/;
			break;
		case 55:
			uParam0->f_45 = 799472/*func_1931*/;
			break;
		case 63:
			uParam0->f_11 = 799458/*func_1930*/;
			break;
		case 64:
			uParam0->f_47 = 799450/*func_1929*/;
			break;
		case 65:
			uParam0->f_21 = 798026/*func_1917*/;
			break;
		case 66:
			uParam0->f_21 = 797330/*func_1914*/;
			break;
		case 67:
			uParam0->f_21 = 797190/*func_1912*/;
			break;
		case 68:
			*uParam0 = 795985/*func_1907*/;
			break;
		case 69:
			*uParam0 = 795976/*func_1906*/;
			break;
		case 70:
			uParam0->f_48 = 795964/*func_1905*/;
			break;
		case 71:
			uParam0->f_49 = 795955/*func_1904*/;
			break;
		case 107:
			uParam0->f_50 = 795943/*func_1903*/;
			break;
		case 80:
			uParam0->f_7 = 795492/*func_1901*/;
			break;
		case 84:
			uParam0->f_1 = 795483/*func_1900*/;
			break;
		case 85:
			uParam0->f_1 = 754724/*func_1806*/;
			break;
		case 87:
			uParam0->f_1 = 751840/*func_1790*/;
			break;
		case 88:
			uParam0->f_1 = 751831/*func_1789*/;
			break;
		case 89:
			uParam0->f_54 = 751823/*func_1788*/;
			break;
		case 90:
			uParam0->f_1 = 750945/*func_1771*/;
			break;
		case 91:
			uParam0->f_1 = 750911/*func_1770*/;
			break;
		case 92:
			uParam0->f_1 = 749116/*func_1759*/;
			break;
		case 94:
			uParam0->f_1 = 747146/*func_1747*/;
			break;
		case 95:
			uParam0->f_22 = 745759/*func_1735*/;
			break;
		case 96:
			uParam0->f_1 = 745750/*func_1734*/;
			break;
		case 97:
			uParam0->f_1 = 745741/*func_1733*/;
			break;
		case 98:
			uParam0->f_1 = 745732/*func_1732*/;
			break;
		case 100:
			uParam0->f_22 = 745724/*func_1731*/;
			break;
		case 101:
			uParam0->f_22 = 745716/*func_1730*/;
			break;
		case 112:
			uParam0->f_13 = 745602/*func_1729*/;
			break;
		case 113:
			uParam0->f_3 = 745448/*func_1725*/;
			break;
		case 114:
			uParam0->f_16 = 744780/*func_1724*/;
			break;
		case 115:
			uParam0->f_3 = 744771/*func_1723*/;
			break;
		case 116:
			*uParam0 = 744762/*func_1722*/;
			break;
		case 117:
			uParam0->f_16 = 740346/*func_1721*/;
			break;
		case 118:
			uParam0->f_11 = 740337/*func_1720*/;
			break;
		case 119:
			uParam0->f_27 = 740210/*func_1715*/;
			break;
		case 120:
			uParam0->f_19 = 740155/*func_1712*/;
			break;
		case 78:
			uParam0->f_59 = 739223/*func_1698*/;
			break;
		case 124:
			uParam0->f_1 = 739214/*func_1697*/;
			break;
		case 125:
			uParam0->f_19 = 739206/*func_1696*/;
			break;
	}
}

int func_1806(int iParam0, var uParam1)//Position - 0xB8424
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_1821(int iParam0, var uParam1, int iParam2)//Position - 0xB8F4A
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_41__::func_161(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_25__::func_536(*iParam0, &Var0);
			__LIB_41__::func_160(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				__LIB_40__::func_509(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_41__::func_756(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_517(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_1950(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC3A9C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_700(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(bVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(bVar1) };
						if (__LIB_0__::func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_1951(int iParam0)//Position - 0xC3C22
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1997(int iParam0, int iParam1)//Position - 0xCA9F1
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_996(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_27__::func_317(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_367());
			}
			__LIB_33__::func_83(iParam0, __LIB_6__::func_367());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_367());
			}
			__LIB_33__::func_83(iParam0, __LIB_6__::func_367());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_7__::func_800(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2007(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xCB039
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		bVar5 = iVar4;
		if (iVar2 == bVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(bVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[bVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_267(bVar5) };
						bVar8 = false;
						if (__LIB_4__::func_115(bVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(bVar5, 1) && !__LIB_7__::func_701(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_7__::func_211(bVar5)) && !__LIB_8__::func_108(bVar5, 1)) && !((__LIB_4__::func_682(bVar5, 1) && !__LIB_3__::func_999(iVar2, bVar5)) && __LIB_6__::func_367() != 0)) && !func_2008(bVar5)) && !__LIB_3__::func_998(bVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar5)) && !__LIB_7__::func_701(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_7__::func_211(bVar5)) && !__LIB_8__::func_108(bVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_2008(bVar5)) && !__LIB_3__::func_998(bVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_2008(bool bParam0)//Position - 0xCB274
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_2223(var uParam0, int iParam1)//Position - 0xDDDAA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 965191/*func_2443*/;
			break;
		case 111:
			uParam0->f_35 = 965182/*func_2442*/;
			break;
		case 1:
			uParam0->f_30 = 965102/*func_2440*/;
			break;
		case 2:
			uParam0->f_31 = 964465/*func_2436*/;
			break;
		case 3:
			uParam0->f_34 = 964199/*func_2435*/;
			break;
		case 4:
			uParam0->f_12 = 964186/*func_2434*/;
			break;
		case 6:
			uParam0->f_32 = 964087/*func_2433*/;
			break;
		case 37:
			uParam0->f_18 = 963951/*func_2432*/;
			break;
		case 38:
			uParam0->f_9 = 963903/*func_2431*/;
			break;
		case 39:
			uParam0->f_11 = 963868/*func_2430*/;
			break;
		case 41:
			uParam0->f_20 = 963749/*func_2427*/;
			break;
		case 42:
			uParam0->f_10 = 963720/*func_2426*/;
			break;
		case 11:
			uParam0->f_11 = 963710/*func_2425*/;
			break;
		case 12:
			uParam0->f_33 = 961559/*func_2421*/;
			break;
		case 14:
			uParam0->f_11 = 961550/*func_2420*/;
			break;
		case 109:
			uParam0->f_56 = 958975/*func_2417*/;
			break;
		case 8:
			uParam0->f_37 = 958967/*func_2416*/;
			break;
		case 7:
			uParam0->f_36 = 958958/*func_2415*/;
			break;
		case 79:
			*uParam0 = 958949/*func_2414*/;
			break;
		case 13:
			uParam0->f_2 = 958887/*func_2413*/;
			break;
		case 15:
			uParam0->f_2 = 958806/*func_2412*/;
			break;
		case 16:
			uParam0->f_5 = 958453/*func_2411*/;
			break;
		case 108:
			uParam0->f_55 = 954019/*func_2396*/;
			break;
		case 17:
			uParam0->f_17 = 952853/*func_2394*/;
			break;
		case 19:
			uParam0->f_17 = 952828/*func_2393*/;
			break;
		case 20:
			uParam0->f_3 = 952819/*func_2392*/;
			break;
		case 21:
			uParam0->f_3 = 952688/*func_2390*/;
			break;
		case 74:
			uParam0->f_53 = 952584/*func_2389*/;
			break;
		case 75:
			uParam0->f_4 = 952568/*func_2388*/;
			break;
		case 22:
			uParam0->f_24 = 952412/*func_2387*/;
			break;
		case 23:
			uParam0->f_26 = 952404/*func_2386*/;
			break;
		case 26:
			uParam0->f_38 = 944475/*func_2347*/;
			break;
		case 25:
			uParam0->f_23 = 943426/*func_2343*/;
			break;
		case 27:
			uParam0->f_25 = 943210/*func_2340*/;
			break;
		case 28:
			uParam0->f_24 = 943169/*func_2339*/;
			break;
		case 29:
			uParam0->f_28 = 943146/*func_2338*/;
			break;
		case 30:
			uParam0->f_8 = 942387/*func_2334*/;
			break;
		case 31:
			uParam0->f_39 = 942361/*func_2333*/;
			break;
		case 43:
			uParam0->f_8 = 942247/*func_2332*/;
			break;
		case 33:
			uParam0->f_40 = 942129/*func_2331*/;
			break;
		case 76:
			uParam0->f_13 = 942080/*func_2330*/;
			break;
		case 34:
			uParam0->f_41 = 933241/*func_2329*/;
			break;
		case 36:
			uParam0->f_58 = 933193/*func_2328*/;
			break;
		case 35:
			uParam0->f_42 = 922105/*func_2321*/;
			break;
		case 45:
			uParam0->f_14 = 922096/*func_2320*/;
			break;
		case 46:
			uParam0->f_14 = 922087/*func_2319*/;
			break;
		case 110:
			uParam0->f_57 = 922079/*func_2318*/;
			break;
		case 77:
			uParam0->f_13 = 922068/*func_2317*/;
			break;
		case 47:
			uParam0->f_43 = 921942/*func_2316*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 921057/*func_2303*/;
			break;
		case 49:
			uParam0->f_8 = 921048/*func_2302*/;
			break;
		case 50:
			*uParam0 = 920879/*func_2301*/;
			break;
		case 51:
			*uParam0 = 920870/*func_2300*/;
			break;
		case 52:
			uParam0->f_15 = 920859/*func_2299*/;
			break;
		case 53:
			uParam0->f_13 = 920836/*func_2298*/;
			break;
		case 54:
			uParam0->f_45 = 920787/*func_2297*/;
			break;
		case 56:
			uParam0->f_46 = 920769/*func_2296*/;
			break;
		case 57:
			uParam0->f_11 = 920727/*func_2294*/;
			break;
		case 58:
			uParam0->f_13 = 920685/*func_2293*/;
			break;
		case 59:
			*uParam0 = 920556/*func_2291*/;
			break;
		case 60:
			*uParam0 = 920547/*func_2290*/;
			break;
		case 61:
			uParam0->f_15 = 920536/*func_2289*/;
			break;
		case 62:
			uParam0->f_13 = 920513/*func_2288*/;
			break;
		case 63:
			uParam0->f_11 = 920504/*func_2287*/;
			break;
		case 55:
			uParam0->f_45 = 920462/*func_2286*/;
			break;
		case 64:
			uParam0->f_47 = 920454/*func_2285*/;
			break;
		case 65:
			uParam0->f_21 = 920446/*func_2284*/;
			break;
		case 66:
			uParam0->f_21 = 920175/*func_2283*/;
			break;
		case 67:
			uParam0->f_21 = 920105/*func_2282*/;
			break;
		case 68:
			*uParam0 = 919433/*func_2280*/;
			break;
		case 69:
			*uParam0 = 919424/*func_2279*/;
			break;
		case 70:
			uParam0->f_48 = 919412/*func_2278*/;
			break;
		case 71:
			uParam0->f_49 = 919192/*func_2277*/;
			break;
		case 107:
			uParam0->f_50 = 919180/*func_2276*/;
			break;
		case 80:
			uParam0->f_7 = 918644/*func_2272*/;
			break;
		case 84:
			uParam0->f_1 = 918529/*func_2267*/;
			break;
		case 85:
			uParam0->f_1 = 917625/*func_2265*/;
			break;
		case 87:
			uParam0->f_1 = 914990/*func_2256*/;
			break;
		case 88:
			uParam0->f_1 = 914981/*func_2255*/;
			break;
		case 89:
			uParam0->f_54 = 914973/*func_2254*/;
			break;
		case 96:
			uParam0->f_1 = 914964/*func_2253*/;
			break;
		case 97:
			uParam0->f_1 = 914955/*func_2252*/;
			break;
		case 98:
			uParam0->f_1 = 914946/*func_2251*/;
			break;
		case 100:
			uParam0->f_22 = 914938/*func_2250*/;
			break;
		case 101:
			uParam0->f_22 = 914930/*func_2249*/;
			break;
		case 112:
			uParam0->f_13 = 914895/*func_2247*/;
			break;
		case 113:
			uParam0->f_3 = 914886/*func_2246*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 912939/*func_2243*/;
			break;
		case 116:
			*uParam0 = 912930/*func_2242*/;
			break;
		case 117:
			uParam0->f_16 = 911710/*func_2241*/;
			break;
		case 121:
			*uParam0 = 911628/*func_2240*/;
			break;
		case 122:
			*uParam0 = 911611/*func_2239*/;
			break;
		case 123:
			uParam0->f_19 = 911579/*func_2237*/;
			break;
		case 78:
			uParam0->f_59 = 910389/*func_2226*/;
			break;
		case 124:
			uParam0->f_1 = 910380/*func_2225*/;
			break;
		case 125:
			uParam0->f_19 = 910372/*func_2224*/;
			break;
	}
}

void func_2226(var uParam0, int iParam1, var uParam2)//Position - 0xDE435
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_6__::func_407(iParam1) == PLAYER::PLAYER_ID())
		{
			func_2234();
			func_2227();
			if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("oppressor2"))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(iParam1, false);
				VEHICLE::SET_SPECIAL_FLIGHT_MODE_ALLOWED(iParam1, true);
			}
		}
	}
}

void func_2227()//Position - 0xDE4CE
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 29);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_201 = -1;
	}
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 30);
	MISC::SET_BIT(&(Global_2703735.f_61.f_60), 7);
	__LIB_2__::func_520();
	func_2228();
}

void func_2228()//Position - 0xDE52C
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 == 5)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_379 = -1;
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 = -1;
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_378 = -1;
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 31);
		__LIB_34__::func_318(0);
		__LIB_2__::func_519(0);
		__LIB_1__::func_191(35);
	}
}

void func_2234()//Position - 0xDE795
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 27);
	}
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 28);
	MISC::SET_BIT(&(Global_2703735.f_61.f_56), 7);
	__LIB_2__::func_521();
	func_2235();
}

void func_2235()//Position - 0xDE7E5
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 == 4)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_379 = -1;
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 = -1;
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_378 = -1;
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 31);
		__LIB_34__::func_318(0);
		__LIB_2__::func_519(0);
		__LIB_1__::func_191(35);
	}
}

int func_2265(int iParam0, var uParam1)//Position - 0xE0079
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2343(int iParam0, int iParam1)//Position - 0xE6542
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_2007(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_8__::func_2(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_2(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_854(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_854(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2347(var uParam0, var uParam1)//Position - 0xE695B
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_567(uParam0, uParam1);
			break;
		case 1:
			func_2348(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2348(var uParam0, var uParam1)//Position - 0xE69B1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_3__::func_820();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_341(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_4__::func_339(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_341(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_4__::func_339(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_34__::func_241(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

int func_2396(var uParam0, var uParam1, var uParam2)//Position - 0xE8EA3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar2))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (!__LIB_1__::func_393(iVar3))
				{
					return 0;
				}
				if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (!__LIB_0__::func_657(iVar2, 1))
					{
						return 0;
					}
					if (uParam0->f_1 == 9 || uParam0->f_1 == 10)
					{
						if (!__LIB_5__::func_570(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == bVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != bVar5)
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_222(uParam1);
				return 0;
			}
			if (__LIB_1__::func_264(bVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_24__::func_921(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (__LIB_40__::func_238(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
								{
									if (__LIB_4__::func_342() || ((__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
									{
										if ((__LIB_24__::func_921(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_145(uParam1, 0);
											__LIB_18__::func_660(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_660(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_145(uParam1, 0);
											__LIB_18__::func_660(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_41__::func_169(*uParam0);
					bVar6 = __LIB_4__::func_118(bVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_2__::func_568(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_145(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_145(uParam1, 1);
	return 0;
}

void func_2427(var uParam0, int iParam1)//Position - 0xEB4A5
{
	__LIB_4__::func_339(iParam1);
	if (__LIB_2__::func_575(PLAYER::PLAYER_ID()))
	{
		func_2234();
		__LIB_1__::func_409(1);
	}
}

void func_2444(var uParam0, int iParam1)//Position - 0xEBA50
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1005645/*func_2613*/;
			break;
		case 111:
			uParam0->f_35 = 1005631/*func_2612*/;
			break;
		case 1:
			uParam0->f_30 = 1005539/*func_2610*/;
			break;
		case 2:
			uParam0->f_31 = 1005319/*func_2607*/;
			break;
		case 3:
			uParam0->f_34 = 1005162/*func_2606*/;
			break;
		case 4:
			uParam0->f_12 = 1005149/*func_2605*/;
			break;
		case 5:
			uParam0->f_11 = 1005139/*func_2604*/;
			break;
		case 37:
			uParam0->f_18 = 1005020/*func_2603*/;
			break;
		case 38:
			uParam0->f_9 = 1004972/*func_2602*/;
			break;
		case 42:
			uParam0->f_10 = 1004943/*func_2601*/;
			break;
		case 6:
			uParam0->f_32 = 1004855/*func_2600*/;
			break;
		case 11:
			uParam0->f_11 = 1004846/*func_2599*/;
			break;
		case 12:
			uParam0->f_33 = 1003101/*func_2594*/;
			break;
		case 14:
			uParam0->f_11 = 1003092/*func_2593*/;
			break;
		case 109:
			uParam0->f_56 = 999023/*func_2590*/;
			break;
		case 8:
			uParam0->f_37 = 998546/*func_2589*/;
			break;
		case 7:
			uParam0->f_36 = 998452/*func_2588*/;
			break;
		case 79:
			*uParam0 = 998443/*func_2587*/;
			break;
		case 13:
			uParam0->f_2 = 998381/*func_2586*/;
			break;
		case 15:
			uParam0->f_2 = 998300/*func_2585*/;
			break;
		case 16:
			uParam0->f_5 = 997402/*func_2583*/;
			break;
		case 108:
			uParam0->f_55 = 994122/*func_2571*/;
			break;
		case 17:
			uParam0->f_17 = 992853/*func_2568*/;
			break;
		case 19:
			uParam0->f_17 = 992828/*func_2567*/;
			break;
		case 20:
			uParam0->f_3 = 992614/*func_2565*/;
			break;
		case 21:
			uParam0->f_3 = 992550/*func_2564*/;
			break;
		case 74:
			uParam0->f_53 = 992446/*func_2563*/;
			break;
		case 75:
			uParam0->f_4 = 992430/*func_2562*/;
			break;
		case 22:
			uParam0->f_24 = 992323/*func_2561*/;
			break;
		case 23:
			uParam0->f_26 = 992315/*func_2560*/;
			break;
		case 26:
			uParam0->f_38 = 988334/*func_2542*/;
			break;
		case 25:
			uParam0->f_23 = 987884/*func_2539*/;
			break;
		case 27:
			uParam0->f_25 = 987876/*func_2538*/;
			break;
		case 28:
			uParam0->f_24 = 987868/*func_2537*/;
			break;
		case 30:
			uParam0->f_8 = 987231/*func_2532*/;
			break;
		case 31:
			uParam0->f_39 = 987101/*func_2531*/;
			break;
		case 33:
			uParam0->f_40 = 986227/*func_2522*/;
			break;
		case 32:
			*uParam0 = 986024/*func_2518*/;
			break;
		case 76:
			uParam0->f_13 = 985871/*func_2517*/;
			break;
		case 34:
			uParam0->f_41 = 984259/*func_2513*/;
			break;
		case 36:
			uParam0->f_58 = 984214/*func_2512*/;
			break;
		case 35:
			uParam0->f_42 = 975176/*func_2509*/;
			break;
		case 45:
			uParam0->f_14 = 975167/*func_2508*/;
			break;
		case 46:
			uParam0->f_14 = 975158/*func_2507*/;
			break;
		case 110:
			uParam0->f_57 = 975150/*func_2506*/;
			break;
		case 77:
			uParam0->f_13 = 975127/*func_2505*/;
			break;
		case 47:
			uParam0->f_43 = 975075/*func_2504*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 974937/*func_2502*/;
			break;
		case 49:
			uParam0->f_8 = 974919/*func_2501*/;
			break;
		case 50:
			*uParam0 = 974112/*func_2498*/;
			break;
		case 51:
			*uParam0 = 974010/*func_2497*/;
			break;
		case 52:
			uParam0->f_15 = 973999/*func_2496*/;
			break;
		case 53:
			uParam0->f_13 = 973846/*func_2495*/;
			break;
		case 54:
			uParam0->f_45 = 973611/*func_2494*/;
			break;
		case 56:
			uParam0->f_46 = 973602/*func_2493*/;
			break;
		case 57:
			uParam0->f_11 = 973189/*func_2489*/;
			break;
		case 58:
			uParam0->f_13 = 973036/*func_2488*/;
			break;
		case 59:
			*uParam0 = 973027/*func_2487*/;
			break;
		case 60:
			*uParam0 = 973018/*func_2486*/;
			break;
		case 61:
			uParam0->f_15 = 973007/*func_2485*/;
			break;
		case 62:
			uParam0->f_13 = 972996/*func_2484*/;
			break;
		case 63:
			uParam0->f_11 = 972987/*func_2483*/;
			break;
		case 64:
			uParam0->f_47 = 972979/*func_2482*/;
			break;
		case 65:
			uParam0->f_21 = 971923/*func_2479*/;
			break;
		case 66:
			uParam0->f_21 = 971703/*func_2478*/;
			break;
		case 67:
			uParam0->f_21 = 971628/*func_2477*/;
			break;
		case 68:
			*uParam0 = 970939/*func_2476*/;
			break;
		case 69:
			*uParam0 = 970930/*func_2475*/;
			break;
		case 70:
			uParam0->f_48 = 970918/*func_2474*/;
			break;
		case 71:
			uParam0->f_49 = 970826/*func_2473*/;
			break;
		case 107:
			uParam0->f_50 = 970814/*func_2472*/;
			break;
		case 80:
			uParam0->f_7 = 970447/*func_2471*/;
			break;
		case 84:
			uParam0->f_1 = 970438/*func_2470*/;
			break;
		case 85:
			uParam0->f_1 = 969645/*func_2468*/;
			break;
		case 87:
			uParam0->f_1 = 968265/*func_2461*/;
			break;
		case 88:
			uParam0->f_1 = 968256/*func_2460*/;
			break;
		case 89:
			uParam0->f_54 = 968248/*func_2459*/;
			break;
		case 96:
			uParam0->f_1 = 968239/*func_2458*/;
			break;
		case 97:
			uParam0->f_1 = 968230/*func_2457*/;
			break;
		case 98:
			uParam0->f_1 = 968221/*func_2456*/;
			break;
		case 100:
			uParam0->f_22 = 968213/*func_2455*/;
			break;
		case 101:
			uParam0->f_22 = 968205/*func_2454*/;
			break;
		case 112:
			uParam0->f_13 = 968193/*func_2453*/;
			break;
		case 113:
			uParam0->f_3 = 968184/*func_2452*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 968175/*func_2451*/;
			break;
		case 116:
			*uParam0 = 968166/*func_2450*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 78:
			uParam0->f_59 = 966774/*func_2447*/;
			break;
		case 124:
			uParam0->f_1 = 966765/*func_2446*/;
			break;
		case 125:
			uParam0->f_19 = 966757/*func_2445*/;
			break;
	}
}

int func_2468(int iParam0, var uParam1)//Position - 0xECBAD
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_2494(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEDB2B
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_4__::func_126(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_4__::func_126(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_126(bVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_716(bVar1))
				{
					Var3 = { __LIB_1__::func_267(bVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_2495(int iParam0)//Position - 0xEDC16
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_2539(int iParam0, int iParam1)//Position - 0xF12EC
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_823(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_18__::func_856(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_957(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_957(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2542(var uParam0, var uParam1)//Position - 0xF14AE
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_2545(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_126(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_4__::func_343(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_2545(var uParam0, var uParam1)//Position - 0xF158D
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_632(uParam0, uParam1);
			break;
		case 1:
			func_2557(uParam0, uParam1);
			break;
		case 2:
			__LIB_38__::func_957(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2557(var uParam0, var uParam1)//Position - 0xF2167
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_18__::func_959(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_18__::func_856(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2590(int iParam0, var uParam1, int iParam2)//Position - 0xF3E6F
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_24__::func_849(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_24__::func_849(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_24__::func_849(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_24__::func_849(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_24__::func_849(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_4__::func_126(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_2007(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_18__::func_959(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_2614(var uParam0, int iParam1)//Position - 0xF5856
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1021936/*func_2734*/;
			break;
		case 111:
			uParam0->f_35 = 1021927/*func_2733*/;
			break;
		case 1:
			uParam0->f_30 = 1021859/*func_2731*/;
			break;
		case 2:
			uParam0->f_31 = 1021421/*func_2728*/;
			break;
		case 3:
			uParam0->f_34 = 1021273/*func_2727*/;
			break;
		case 4:
			uParam0->f_12 = 1021260/*func_2726*/;
			break;
		case 37:
			uParam0->f_18 = 1021035/*func_2725*/;
			break;
		case 38:
			uParam0->f_9 = 1020945/*func_2724*/;
			break;
		case 39:
			uParam0->f_11 = 1020925/*func_2723*/;
			break;
		case 40:
			uParam0->f_6 = 1020820/*func_2722*/;
			break;
		case 41:
			uParam0->f_20 = 1020795/*func_2721*/;
			break;
		case 42:
			uParam0->f_10 = 1020782/*func_2720*/;
			break;
		case 6:
			uParam0->f_32 = 1020718/*func_2719*/;
			break;
		case 11:
			uParam0->f_11 = 1020709/*func_2718*/;
			break;
		case 12:
			uParam0->f_33 = 1020172/*func_2714*/;
			break;
		case 14:
			uParam0->f_11 = 1020163/*func_2713*/;
			break;
		case 109:
			uParam0->f_56 = 1019250/*func_2711*/;
			break;
		case 8:
			uParam0->f_37 = 1019242/*func_2710*/;
			break;
		case 7:
			uParam0->f_36 = 1019233/*func_2709*/;
			break;
		case 79:
			*uParam0 = 1019224/*func_2708*/;
			break;
		case 13:
			uParam0->f_2 = 1019162/*func_2707*/;
			break;
		case 15:
			uParam0->f_2 = 1019081/*func_2706*/;
			break;
		case 16:
			uParam0->f_5 = 1018754/*func_2705*/;
			break;
		case 108:
			uParam0->f_55 = 1018745/*func_2704*/;
			break;
		case 17:
			uParam0->f_17 = 1018735/*func_2703*/;
			break;
		case 19:
			uParam0->f_17 = 1018725/*func_2702*/;
			break;
		case 18:
			uParam0->f_8 = 1018683/*func_2700*/;
			break;
		case 20:
			uParam0->f_3 = 1018674/*func_2699*/;
			break;
		case 21:
			uParam0->f_3 = 1018626/*func_2698*/;
			break;
		case 74:
			uParam0->f_53 = 1018571/*func_2697*/;
			break;
		case 75:
			uParam0->f_4 = 1018562/*func_2696*/;
			break;
		case 22:
			uParam0->f_24 = 1018455/*func_2695*/;
			break;
		case 23:
			uParam0->f_26 = 1018447/*func_2694*/;
			break;
		case 25:
			uParam0->f_23 = 1018020/*func_2691*/;
			break;
		case 27:
			uParam0->f_25 = 1018012/*func_2690*/;
			break;
		case 28:
			uParam0->f_24 = 1018004/*func_2689*/;
			break;
		case 30:
			uParam0->f_8 = 1017969/*func_2688*/;
			break;
		case 31:
			uParam0->f_39 = 1017943/*func_2687*/;
			break;
		case 33:
			uParam0->f_40 = 1017776/*func_2686*/;
			break;
		case 76:
			uParam0->f_13 = 1017753/*func_2685*/;
			break;
		case 34:
			uParam0->f_41 = 1014137/*func_2682*/;
			break;
		case 36:
			uParam0->f_58 = 1014092/*func_2681*/;
			break;
		case 35:
			uParam0->f_42 = 1010898/*func_2677*/;
			break;
		case 45:
			uParam0->f_14 = 1010889/*func_2676*/;
			break;
		case 46:
			uParam0->f_14 = 1010880/*func_2675*/;
			break;
		case 110:
			uParam0->f_57 = 1010872/*func_2674*/;
			break;
		case 77:
			uParam0->f_13 = 1010861/*func_2673*/;
			break;
		case 47:
			uParam0->f_43 = 1010690/*func_2672*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1009417/*func_2664*/;
			break;
		case 49:
			uParam0->f_8 = 1009408/*func_2663*/;
			break;
		case 50:
			*uParam0 = 1008983/*func_2656*/;
			break;
		case 51:
			*uParam0 = 1008974/*func_2655*/;
			break;
		case 52:
			uParam0->f_15 = 1008963/*func_2654*/;
			break;
		case 53:
			uParam0->f_13 = 1008940/*func_2653*/;
			break;
		case 54:
			uParam0->f_45 = 1008932/*func_2652*/;
			break;
		case 56:
			uParam0->f_46 = 1008923/*func_2651*/;
			break;
		case 57:
			uParam0->f_11 = 1008910/*func_2650*/;
			break;
		case 58:
			uParam0->f_13 = 1008868/*func_2649*/;
			break;
		case 59:
			*uParam0 = 1008859/*func_2648*/;
			break;
		case 60:
			*uParam0 = 1008850/*func_2647*/;
			break;
		case 61:
			uParam0->f_15 = 1008839/*func_2646*/;
			break;
		case 62:
			uParam0->f_13 = 1008828/*func_2645*/;
			break;
		case 63:
			uParam0->f_11 = 1008819/*func_2644*/;
			break;
		case 64:
			uParam0->f_47 = 1008811/*func_2643*/;
			break;
		case 65:
			uParam0->f_21 = 1008803/*func_2642*/;
			break;
		case 66:
			uParam0->f_21 = 1008190/*func_2639*/;
			break;
		case 67:
			uParam0->f_21 = 1008120/*func_2638*/;
			break;
		case 68:
			*uParam0 = 1007431/*func_2637*/;
			break;
		case 69:
			*uParam0 = 1007422/*func_2636*/;
			break;
		case 70:
			uParam0->f_48 = 1007410/*func_2635*/;
			break;
		case 71:
			uParam0->f_49 = 1007401/*func_2634*/;
			break;
		case 107:
			uParam0->f_50 = 1007389/*func_2633*/;
			break;
		case 80:
			uParam0->f_7 = 1007380/*func_2632*/;
			break;
		case 84:
			uParam0->f_1 = 1007371/*func_2631*/;
			break;
		case 85:
			uParam0->f_1 = 1007362/*func_2630*/;
			break;
		case 87:
			uParam0->f_1 = 1007353/*func_2629*/;
			break;
		case 88:
			uParam0->f_1 = 1007344/*func_2628*/;
			break;
		case 89:
			uParam0->f_54 = 1007336/*func_2627*/;
			break;
		case 96:
			uParam0->f_1 = 1007327/*func_2626*/;
			break;
		case 97:
			uParam0->f_1 = 1007318/*func_2625*/;
			break;
		case 98:
			uParam0->f_1 = 1007309/*func_2624*/;
			break;
		case 100:
			uParam0->f_22 = 1007301/*func_2623*/;
			break;
		case 101:
			uParam0->f_22 = 1007293/*func_2622*/;
			break;
		case 112:
			uParam0->f_13 = 1007281/*func_2621*/;
			break;
		case 113:
			uParam0->f_3 = 1007272/*func_2620*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 1007263/*func_2619*/;
			break;
		case 116:
			*uParam0 = 1007254/*func_2618*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 78:
			uParam0->f_59 = 1007246/*func_2617*/;
			break;
		case 124:
			uParam0->f_1 = 1007237/*func_2616*/;
			break;
		case 125:
			uParam0->f_19 = 1007229/*func_2615*/;
			break;
	}
}

void func_2664(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xF6709
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_655(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_2007(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_162(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
		}
	}
}

void func_2691(int iParam0, int iParam1)//Position - 0xF88A4
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_8__::func_5(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_5(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_857();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_857();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2735(var uParam0, int iParam1)//Position - 0xF97F9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1119516/*func_3043*/;
			break;
		case 1:
			uParam0->f_30 = 1119460/*func_3042*/;
			break;
		case 2:
			uParam0->f_31 = 1118798/*func_3040*/;
			break;
		case 3:
			uParam0->f_34 = 1118671/*func_3039*/;
			break;
		case 4:
			uParam0->f_12 = 1118637/*func_3038*/;
			break;
		case 5:
			uParam0->f_11 = 1118626/*func_3037*/;
			break;
		case 6:
			uParam0->f_32 = 1118562/*func_3036*/;
			break;
		case 111:
			uParam0->f_35 = 1118539/*func_3035*/;
			break;
		case 79:
			*uParam0 = 1118530/*func_3034*/;
			break;
		case 37:
			uParam0->f_18 = 1118414/*func_3033*/;
			break;
		case 38:
			uParam0->f_9 = 1118317/*func_3031*/;
			break;
		case 11:
			uParam0->f_11 = 1118308/*func_3030*/;
			break;
		case 12:
			uParam0->f_33 = 1117918/*func_3028*/;
			break;
		case 109:
			uParam0->f_56 = 1117608/*func_3027*/;
			break;
		case 15:
			uParam0->f_2 = 1115710/*func_3016*/;
			break;
		case 13:
			uParam0->f_2 = 1115701/*func_3015*/;
			break;
		case 75:
			uParam0->f_4 = 1115692/*func_3014*/;
			break;
		case 16:
			uParam0->f_5 = 1115309/*func_3011*/;
			break;
		case 108:
			uParam0->f_55 = 1111390/*func_2993*/;
			break;
		case 17:
			uParam0->f_17 = 1110651/*func_2990*/;
			break;
		case 19:
			uParam0->f_17 = 1110626/*func_2989*/;
			break;
		case 20:
			uParam0->f_3 = 1110457/*func_2988*/;
			break;
		case 21:
			uParam0->f_3 = 1110394/*func_2987*/;
			break;
		case 74:
			uParam0->f_53 = 1110242/*func_2986*/;
			break;
		case 22:
			uParam0->f_24 = 1110157/*func_2985*/;
			break;
		case 25:
			uParam0->f_23 = 1109220/*func_2981*/;
			break;
		case 30:
			uParam0->f_8 = 1107892/*func_2975*/;
			break;
		case 31:
			uParam0->f_39 = 1107310/*func_2972*/;
			break;
		case 33:
			uParam0->f_40 = 1106113/*func_2968*/;
			break;
		case 14:
			uParam0->f_11 = 1106104/*func_2967*/;
			break;
		case 34:
			uParam0->f_41 = 1103337/*func_2964*/;
			break;
		case 36:
			uParam0->f_58 = 1103284/*func_2963*/;
			break;
		case 35:
			uParam0->f_42 = 1097832/*func_2959*/;
			break;
		case 45:
			uParam0->f_14 = 1097823/*func_2958*/;
			break;
		case 46:
			uParam0->f_14 = 1097814/*func_2957*/;
			break;
		case 110:
			uParam0->f_57 = 1097806/*func_2956*/;
			break;
		case 77:
			uParam0->f_13 = 1097783/*func_2955*/;
			break;
		case 47:
			uParam0->f_43 = 1097731/*func_2954*/;
			break;
		case 49:
			uParam0->f_8 = 1097705/*func_2953*/;
			break;
		case 50:
			*uParam0 = 1097667/*func_2952*/;
			break;
		case 51:
			*uParam0 = 1097625/*func_2950*/;
			break;
		case 52:
			uParam0->f_15 = 1097614/*func_2949*/;
			break;
		case 53:
			uParam0->f_13 = 1097535/*func_2948*/;
			break;
		case 54:
			uParam0->f_45 = 1097527/*func_2947*/;
			break;
		case 56:
			uParam0->f_46 = 1097518/*func_2946*/;
			break;
		case 57:
			uParam0->f_11 = 1097508/*func_2945*/;
			break;
		case 58:
			uParam0->f_13 = 1097261/*func_2944*/;
			break;
		case 64:
			uParam0->f_47 = 1096115/*func_2939*/;
			break;
		case 65:
			uParam0->f_21 = 1094922/*func_2934*/;
			break;
		case 66:
			uParam0->f_21 = 1093863/*func_2925*/;
			break;
		case 67:
			uParam0->f_21 = 1093687/*func_2923*/;
			break;
		case 68:
			*uParam0 = 1092163/*func_2915*/;
			break;
		case 69:
			*uParam0 = 1092154/*func_2914*/;
			break;
		case 70:
			uParam0->f_48 = 1092142/*func_2913*/;
			break;
		case 71:
			uParam0->f_49 = 1092133/*func_2912*/;
			break;
		case 107:
			uParam0->f_50 = 1092121/*func_2911*/;
			break;
		case 80:
			uParam0->f_7 = 1091288/*func_2905*/;
			break;
		case 73:
			uParam0->f_51 = 1091279/*func_2904*/;
			break;
		case 84:
			uParam0->f_1 = 1090607/*func_2902*/;
			break;
		case 85:
			uParam0->f_1 = 1089734/*func_2894*/;
			break;
		case 87:
			uParam0->f_1 = 1088521/*func_2885*/;
			break;
		case 88:
			uParam0->f_1 = 1088501/*func_2884*/;
			break;
		case 89:
			uParam0->f_54 = 1088407/*func_2883*/;
			break;
		case 90:
			uParam0->f_1 = 1088276/*func_2880*/;
			break;
		case 91:
			uParam0->f_1 = 1087630/*func_2879*/;
			break;
		case 92:
			uParam0->f_1 = 1086862/*func_2876*/;
			break;
		case 94:
			uParam0->f_1 = 1086309/*func_2875*/;
			break;
		case 95:
			uParam0->f_22 = 1085717/*func_2870*/;
			break;
		case 18:
			uParam0->f_8 = 1085359/*func_2866*/;
			break;
		case 96:
			uParam0->f_1 = 1085266/*func_2865*/;
			break;
		case 97:
			uParam0->f_1 = 1084398/*func_2860*/;
			break;
		case 98:
			uParam0->f_1 = 1028547/*func_2789*/;
			break;
		case 100:
			uParam0->f_22 = 1025263/*func_2767*/;
			break;
		case 101:
			uParam0->f_22 = 1024108/*func_2754*/;
			break;
		case 78:
			uParam0->f_59 = 1023900/*func_2751*/;
			break;
		case 104:
			uParam0->f_1 = 1023460/*func_2743*/;
			break;
		case 102:
			uParam0->f_1 = 1023451/*func_2742*/;
			break;
		case 103:
			uParam0->f_22 = 1023339/*func_2737*/;
			break;
		case 81:
			*uParam0 = 1023296/*func_2736*/;
			break;
	}
}

int func_2789(var uParam0, var uParam1)//Position - 0xFB1C3
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_2805(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_1821(&iVar9, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_7__::func_826())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_2805(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xFBC86
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!__LIB_37__::func_117(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_2806(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_2806(var uParam0, bool bParam1)//Position - 0xFBCE4
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_4__::func_11(bParam1))
	{
		iVar0 = __LIB_25__::func_147(bParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_2810(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_25__::func_207(), __LIB_2__::func_685(__LIB_6__::func_133(bParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(bParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(bParam1, 0), __LIB_7__::func_827(bParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_2810(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xFBE01
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_36__::func_384(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_200(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_18__::func_858(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!__LIB_28__::func_985(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_35__::func_588(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_2819(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_2819(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										__LIB_39__::func_293(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
											func_1380(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_1380(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1380(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1380(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_2813(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1430(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_827(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_2813(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xFD3ED
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_1463(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_1456(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_2819(int iParam0, int iParam1, int iParam2)//Position - 0xFD993
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_2820(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1497(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_2820(int iParam0)//Position - 0xFDB9F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_2821(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_2821(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFDC34
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_1380(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1380(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_2876(var uParam0, var uParam1)//Position - 0x10958E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar2, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_2805(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_2894(int iParam0, var uParam1)//Position - 0x10A0C6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_35__::func_740())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_134();
	Var2 = { __LIB_18__::func_669(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_2805(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_828(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_1821(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_668(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_2981(int iParam0, int iParam1)//Position - 0x10ECE4
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_25__::func_597(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_999(bVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_595(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_595(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_664(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2982(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_664(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2982(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_2982(int iParam0, bool bParam1)//Position - 0x10EF73
{
	__LIB_25__::func_595(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_3044(var uParam0, int iParam1)//Position - 0x111525
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1140553/*func_3163*/;
			break;
		case 111:
			uParam0->f_35 = 1140544/*func_3162*/;
			break;
		case 1:
			uParam0->f_30 = 1140476/*func_3160*/;
			break;
		case 2:
			uParam0->f_31 = 1140152/*func_3157*/;
			break;
		case 3:
			uParam0->f_34 = 1139991/*func_3156*/;
			break;
		case 4:
			uParam0->f_12 = 1139978/*func_3155*/;
			break;
		case 6:
			uParam0->f_32 = 1139914/*func_3154*/;
			break;
		case 11:
			uParam0->f_11 = 1139905/*func_3153*/;
			break;
		case 12:
			uParam0->f_33 = 1139569/*func_3149*/;
			break;
		case 14:
			uParam0->f_11 = 1139560/*func_3148*/;
			break;
		case 109:
			uParam0->f_56 = 1138829/*func_3146*/;
			break;
		case 8:
			uParam0->f_37 = 1138821/*func_3145*/;
			break;
		case 7:
			uParam0->f_36 = 1138812/*func_3144*/;
			break;
		case 79:
			*uParam0 = 1138803/*func_3143*/;
			break;
		case 72:
			uParam0->f_12 = 1138790/*func_3142*/;
			break;
		case 13:
			uParam0->f_2 = 1138781/*func_3141*/;
			break;
		case 15:
			uParam0->f_2 = 1138702/*func_3140*/;
			break;
		case 16:
			uParam0->f_5 = 1138358/*func_3139*/;
			break;
		case 108:
			uParam0->f_55 = 1138349/*func_3138*/;
			break;
		case 17:
			uParam0->f_17 = 1137822/*func_3136*/;
			break;
		case 19:
			uParam0->f_17 = 1137768/*func_3135*/;
			break;
		case 18:
			uParam0->f_8 = 1137680/*func_3133*/;
			break;
		case 20:
			uParam0->f_3 = 1137660/*func_3132*/;
			break;
		case 21:
			uParam0->f_3 = 1137633/*func_3131*/;
			break;
		case 74:
			uParam0->f_53 = 1137611/*func_3130*/;
			break;
		case 75:
			uParam0->f_4 = 1137602/*func_3129*/;
			break;
		case 22:
			uParam0->f_24 = 1137495/*func_3128*/;
			break;
		case 23:
			uParam0->f_26 = 1137487/*func_3127*/;
			break;
		case 26:
			uParam0->f_38 = 1137479/*func_3126*/;
			break;
		case 25:
			uParam0->f_23 = 1136718/*func_3122*/;
			break;
		case 27:
			uParam0->f_25 = 1136710/*func_3121*/;
			break;
		case 28:
			uParam0->f_24 = 1136702/*func_3120*/;
			break;
		case 30:
			uParam0->f_8 = 1136591/*func_3119*/;
			break;
		case 31:
			uParam0->f_39 = 1136545/*func_3118*/;
			break;
		case 33:
			uParam0->f_40 = 1136476/*func_3117*/;
			break;
		case 76:
			uParam0->f_13 = 1136453/*func_3116*/;
			break;
		case 34:
			uParam0->f_41 = 1132380/*func_3113*/;
			break;
		case 36:
			uParam0->f_58 = 1132323/*func_3112*/;
			break;
		case 35:
			uParam0->f_42 = 1126103/*func_3103*/;
			break;
		case 45:
			uParam0->f_14 = 1126094/*func_3102*/;
			break;
		case 46:
			uParam0->f_14 = 1126085/*func_3101*/;
			break;
		case 110:
			uParam0->f_57 = 1126077/*func_3100*/;
			break;
		case 77:
			uParam0->f_13 = 1126066/*func_3099*/;
			break;
		case 47:
			uParam0->f_43 = 1125953/*func_3098*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1124949/*func_3092*/;
			break;
		case 49:
			uParam0->f_8 = 1124940/*func_3091*/;
			break;
		case 50:
			*uParam0 = 1124603/*func_3086*/;
			break;
		case 51:
			*uParam0 = 1124594/*func_3085*/;
			break;
		case 52:
			uParam0->f_15 = 1124584/*func_3084*/;
			break;
		case 53:
			uParam0->f_13 = 1124561/*func_3083*/;
			break;
		case 54:
			uParam0->f_45 = 1124065/*func_3081*/;
			break;
		case 56:
			uParam0->f_46 = 1124056/*func_3080*/;
			break;
		case 57:
			uParam0->f_11 = 1124047/*func_3079*/;
			break;
		case 58:
			uParam0->f_13 = 1124005/*func_3078*/;
			break;
		case 59:
			*uParam0 = 1123996/*func_3077*/;
			break;
		case 60:
			*uParam0 = 1123987/*func_3076*/;
			break;
		case 61:
			uParam0->f_15 = 1123976/*func_3075*/;
			break;
		case 62:
			uParam0->f_13 = 1123965/*func_3074*/;
			break;
		case 63:
			uParam0->f_11 = 1123956/*func_3073*/;
			break;
		case 64:
			uParam0->f_47 = 1123948/*func_3072*/;
			break;
		case 65:
			uParam0->f_21 = 1123940/*func_3071*/;
			break;
		case 66:
			uParam0->f_21 = 1123630/*func_3070*/;
			break;
		case 67:
			uParam0->f_21 = 1123560/*func_3069*/;
			break;
		case 68:
			*uParam0 = 1122871/*func_3068*/;
			break;
		case 69:
			*uParam0 = 1122862/*func_3067*/;
			break;
		case 70:
			uParam0->f_48 = 1122850/*func_3066*/;
			break;
		case 71:
			uParam0->f_49 = 1122841/*func_3065*/;
			break;
		case 107:
			uParam0->f_50 = 1122829/*func_3064*/;
			break;
		case 80:
			uParam0->f_7 = 1122820/*func_3063*/;
			break;
		case 84:
			uParam0->f_1 = 1122811/*func_3062*/;
			break;
		case 85:
			uParam0->f_1 = 1122802/*func_3061*/;
			break;
		case 87:
			uParam0->f_1 = 1122793/*func_3060*/;
			break;
		case 88:
			uParam0->f_1 = 1122784/*func_3059*/;
			break;
		case 89:
			uParam0->f_54 = 1122776/*func_3058*/;
			break;
		case 96:
			uParam0->f_1 = 1122751/*func_3057*/;
			break;
		case 97:
			uParam0->f_1 = 1122641/*func_3056*/;
			break;
		case 98:
			uParam0->f_1 = 1121924/*func_3055*/;
			break;
		case 100:
			uParam0->f_22 = 1121224/*func_3053*/;
			break;
		case 101:
			uParam0->f_22 = 1121096/*func_3052*/;
			break;
		case 112:
			uParam0->f_13 = 1121084/*func_3051*/;
			break;
		case 113:
			uParam0->f_3 = 1121075/*func_3050*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 1121066/*func_3049*/;
			break;
		case 116:
			*uParam0 = 1121057/*func_3048*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 78:
			uParam0->f_59 = 1121049/*func_3047*/;
			break;
		case 124:
			uParam0->f_1 = 1121040/*func_3046*/;
			break;
		case 125:
			uParam0->f_19 = 1121032/*func_3045*/;
			break;
	}
}

int func_3055(var uParam0, var uParam1)//Position - 0x111E84
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2805(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_3122(int iParam0, int iParam1)//Position - 0x11584E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_8__::func_9(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_860(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_860(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_3123())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_3123()//Position - 0x115ADC
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_3164(var uParam0, int iParam1)//Position - 0x116752
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1148855/*func_3257*/;
			break;
		case 111:
			uParam0->f_35 = 1148846/*func_3256*/;
			break;
		case 1:
			uParam0->f_30 = 1148774/*func_3254*/;
			break;
		case 2:
			uParam0->f_31 = 1148539/*func_3251*/;
			break;
		case 3:
			uParam0->f_34 = 1148488/*func_3250*/;
			break;
		case 4:
			uParam0->f_12 = 1148475/*func_3249*/;
			break;
		case 6:
			uParam0->f_32 = 1148411/*func_3248*/;
			break;
		case 11:
			uParam0->f_11 = 1148402/*func_3247*/;
			break;
		case 12:
			uParam0->f_33 = 1147962/*func_3243*/;
			break;
		case 14:
			uParam0->f_11 = 1147953/*func_3242*/;
			break;
		case 109:
			uParam0->f_56 = 1147284/*func_3240*/;
			break;
		case 8:
			uParam0->f_37 = 1147276/*func_3239*/;
			break;
		case 7:
			uParam0->f_36 = 1147267/*func_3238*/;
			break;
		case 79:
			*uParam0 = 1147258/*func_3237*/;
			break;
		case 13:
			uParam0->f_2 = 1147196/*func_3236*/;
			break;
		case 15:
			uParam0->f_2 = 1147116/*func_3235*/;
			break;
		case 16:
			uParam0->f_5 = 1146746/*func_3233*/;
			break;
		case 108:
			uParam0->f_55 = 1146737/*func_3232*/;
			break;
		case 17:
			uParam0->f_17 = 1146727/*func_3231*/;
			break;
		case 19:
			uParam0->f_17 = 1146717/*func_3230*/;
			break;
		case 20:
			uParam0->f_3 = 1146708/*func_3229*/;
			break;
		case 21:
			uParam0->f_3 = 1146699/*func_3228*/;
			break;
		case 74:
			uParam0->f_53 = 1146677/*func_3227*/;
			break;
		case 75:
			uParam0->f_4 = 1146668/*func_3226*/;
			break;
		case 22:
			uParam0->f_24 = 1146656/*func_3225*/;
			break;
		case 23:
			uParam0->f_26 = 1146648/*func_3224*/;
			break;
		case 26:
			uParam0->f_38 = 1146640/*func_3223*/;
			break;
		case 25:
			uParam0->f_23 = 1146632/*func_3222*/;
			break;
		case 27:
			uParam0->f_25 = 1146624/*func_3221*/;
			break;
		case 28:
			uParam0->f_24 = 1146616/*func_3220*/;
			break;
		case 30:
			uParam0->f_8 = 1146581/*func_3219*/;
			break;
		case 31:
			uParam0->f_39 = 1146555/*func_3218*/;
			break;
		case 33:
			uParam0->f_40 = 1146485/*func_3217*/;
			break;
		case 76:
			uParam0->f_13 = 1146462/*func_3216*/;
			break;
		case 34:
			uParam0->f_41 = 1146366/*func_3215*/;
			break;
		case 36:
			uParam0->f_58 = 1146321/*func_3214*/;
			break;
		case 35:
			uParam0->f_42 = 1143808/*func_3212*/;
			break;
		case 45:
			uParam0->f_14 = 1143799/*func_3211*/;
			break;
		case 46:
			uParam0->f_14 = 1143790/*func_3210*/;
			break;
		case 110:
			uParam0->f_57 = 1143782/*func_3209*/;
			break;
		case 77:
			uParam0->f_13 = 1143771/*func_3208*/;
			break;
		case 47:
			uParam0->f_43 = 1143729/*func_3207*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1143621/*func_3206*/;
			break;
		case 49:
			uParam0->f_8 = 1143612/*func_3205*/;
			break;
		case 50:
			*uParam0 = 1143409/*func_3204*/;
			break;
		case 51:
			*uParam0 = 1143400/*func_3203*/;
			break;
		case 52:
			uParam0->f_15 = 1143389/*func_3202*/;
			break;
		case 53:
			uParam0->f_13 = 1143366/*func_3201*/;
			break;
		case 54:
			uParam0->f_45 = 1143358/*func_3200*/;
			break;
		case 56:
			uParam0->f_46 = 1143349/*func_3199*/;
			break;
		case 57:
			uParam0->f_11 = 1143336/*func_3198*/;
			break;
		case 58:
			uParam0->f_13 = 1143294/*func_3197*/;
			break;
		case 59:
			*uParam0 = 1143285/*func_3196*/;
			break;
		case 60:
			*uParam0 = 1143276/*func_3195*/;
			break;
		case 61:
			uParam0->f_15 = 1143265/*func_3194*/;
			break;
		case 62:
			uParam0->f_13 = 1143254/*func_3193*/;
			break;
		case 63:
			uParam0->f_11 = 1143245/*func_3192*/;
			break;
		case 64:
			uParam0->f_47 = 1143237/*func_3191*/;
			break;
		case 65:
			uParam0->f_21 = 1143229/*func_3190*/;
			break;
		case 66:
			uParam0->f_21 = 1142996/*func_3189*/;
			break;
		case 67:
			uParam0->f_21 = 1142926/*func_3188*/;
			break;
		case 68:
			*uParam0 = 1142237/*func_3187*/;
			break;
		case 69:
			*uParam0 = 1142228/*func_3186*/;
			break;
		case 70:
			uParam0->f_48 = 1142216/*func_3185*/;
			break;
		case 71:
			uParam0->f_49 = 1142207/*func_3184*/;
			break;
		case 107:
			uParam0->f_50 = 1142195/*func_3183*/;
			break;
		case 80:
			uParam0->f_7 = 1142186/*func_3182*/;
			break;
		case 84:
			uParam0->f_1 = 1142177/*func_3181*/;
			break;
		case 85:
			uParam0->f_1 = 1142168/*func_3180*/;
			break;
		case 87:
			uParam0->f_1 = 1142159/*func_3179*/;
			break;
		case 88:
			uParam0->f_1 = 1142150/*func_3178*/;
			break;
		case 89:
			uParam0->f_54 = 1142142/*func_3177*/;
			break;
		case 96:
			uParam0->f_1 = 1142133/*func_3176*/;
			break;
		case 97:
			uParam0->f_1 = 1142124/*func_3175*/;
			break;
		case 98:
			uParam0->f_1 = 1142115/*func_3174*/;
			break;
		case 100:
			uParam0->f_22 = 1142107/*func_3173*/;
			break;
		case 101:
			uParam0->f_22 = 1142099/*func_3172*/;
			break;
		case 112:
			uParam0->f_13 = 1142087/*func_3171*/;
			break;
		case 113:
			uParam0->f_3 = 1142078/*func_3170*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 1142069/*func_3169*/;
			break;
		case 116:
			*uParam0 = 1142060/*func_3168*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 78:
			uParam0->f_59 = 1142052/*func_3167*/;
			break;
		case 124:
			uParam0->f_1 = 1142043/*func_3166*/;
			break;
		case 125:
			uParam0->f_19 = 1142035/*func_3165*/;
			break;
	}
}

void func_3258(var uParam0, int iParam1)//Position - 0x1187C0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1225791/*func_3473*/;
			break;
		case 111:
			uParam0->f_35 = 1225777/*func_3472*/;
			break;
		case 1:
			uParam0->f_30 = 1225621/*func_3470*/;
			break;
		case 2:
			uParam0->f_31 = 1225151/*func_3466*/;
			break;
		case 3:
			uParam0->f_34 = 1224952/*func_3465*/;
			break;
		case 4:
			uParam0->f_12 = 1224830/*func_3464*/;
			break;
		case 5:
			uParam0->f_11 = 1224820/*func_3463*/;
			break;
		case 37:
			uParam0->f_18 = 1224684/*func_3462*/;
			break;
		case 38:
			uParam0->f_9 = 1224641/*func_3461*/;
			break;
		case 42:
			uParam0->f_10 = 1224557/*func_3459*/;
			break;
		case 6:
			uParam0->f_32 = 1224463/*func_3458*/;
			break;
		case 11:
			uParam0->f_11 = 1224454/*func_3457*/;
			break;
		case 12:
			uParam0->f_33 = 1223276/*func_3453*/;
			break;
		case 14:
			uParam0->f_11 = 1223267/*func_3452*/;
			break;
		case 109:
			uParam0->f_56 = 1216777/*func_3450*/;
			break;
		case 8:
			uParam0->f_37 = 1216477/*func_3449*/;
			break;
		case 7:
			uParam0->f_36 = 1216420/*func_3448*/;
			break;
		case 79:
			*uParam0 = 1216176/*func_3446*/;
			break;
		case 13:
			uParam0->f_2 = 1216114/*func_3445*/;
			break;
		case 15:
			uParam0->f_2 = 1216034/*func_3444*/;
			break;
		case 16:
			uParam0->f_5 = 1215314/*func_3442*/;
			break;
		case 108:
			uParam0->f_55 = 1212121/*func_3430*/;
			break;
		case 17:
			uParam0->f_17 = 1209861/*func_3428*/;
			break;
		case 19:
			uParam0->f_17 = 1209836/*func_3427*/;
			break;
		case 20:
			uParam0->f_3 = 1209660/*func_3426*/;
			break;
		case 21:
			uParam0->f_3 = 1209596/*func_3425*/;
			break;
		case 74:
			uParam0->f_53 = 1209492/*func_3424*/;
			break;
		case 75:
			uParam0->f_4 = 1209476/*func_3423*/;
			break;
		case 22:
			uParam0->f_24 = 1209369/*func_3422*/;
			break;
		case 23:
			uParam0->f_26 = 1209322/*func_3421*/;
			break;
		case 24:
			uParam0->f_26 = 1209285/*func_3420*/;
			break;
		case 26:
			uParam0->f_38 = 1207240/*func_3408*/;
			break;
		case 25:
			uParam0->f_23 = 1206918/*func_3406*/;
			break;
		case 30:
			uParam0->f_8 = 1206061/*func_3404*/;
			break;
		case 31:
			uParam0->f_39 = 1205931/*func_3403*/;
			break;
		case 33:
			uParam0->f_40 = 1205359/*func_3402*/;
			break;
		case 32:
			*uParam0 = 1205145/*func_3398*/;
			break;
		case 34:
			uParam0->f_41 = 1202659/*func_3396*/;
			break;
		case 36:
			uParam0->f_58 = 1202602/*func_3395*/;
			break;
		case 35:
			uParam0->f_42 = 1175629/*func_3392*/;
			break;
		case 45:
			uParam0->f_14 = 1175620/*func_3391*/;
			break;
		case 46:
			uParam0->f_14 = 1175611/*func_3390*/;
			break;
		case 110:
			uParam0->f_57 = 1175603/*func_3389*/;
			break;
		case 77:
			uParam0->f_13 = 1175580/*func_3388*/;
			break;
		case 47:
			uParam0->f_43 = 1175508/*func_3386*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1175380/*func_3385*/;
			break;
		case 49:
			uParam0->f_8 = 1175354/*func_3384*/;
			break;
		case 50:
			*uParam0 = 1174667/*func_3380*/;
			break;
		case 51:
			*uParam0 = 1174505/*func_3379*/;
			break;
		case 52:
			uParam0->f_15 = 1174494/*func_3378*/;
			break;
		case 53:
			uParam0->f_13 = 1174332/*func_3377*/;
			break;
		case 54:
			uParam0->f_45 = 1173846/*func_3371*/;
			break;
		case 56:
			uParam0->f_46 = 1173828/*func_3370*/;
			break;
		case 57:
			uParam0->f_11 = 1173576/*func_3369*/;
			break;
		case 58:
			uParam0->f_13 = 1173414/*func_3368*/;
			break;
		case 59:
			*uParam0 = 1172918/*func_3361*/;
			break;
		case 60:
			*uParam0 = 1172903/*func_3360*/;
			break;
		case 61:
			uParam0->f_15 = 1172892/*func_3359*/;
			break;
		case 62:
			uParam0->f_13 = 1172730/*func_3358*/;
			break;
		case 55:
			uParam0->f_45 = 1172551/*func_3357*/;
			break;
		case 63:
			uParam0->f_11 = 1172524/*func_3356*/;
			break;
		case 64:
			uParam0->f_47 = 1171091/*func_3349*/;
			break;
		case 65:
			uParam0->f_21 = 1169704/*func_3346*/;
			break;
		case 66:
			uParam0->f_21 = 1169345/*func_3345*/;
			break;
		case 67:
			uParam0->f_21 = 1169231/*func_3344*/;
			break;
		case 68:
			*uParam0 = 1168271/*func_3341*/;
			break;
		case 69:
			*uParam0 = 1168262/*func_3340*/;
			break;
		case 70:
			uParam0->f_48 = 1168250/*func_3339*/;
			break;
		case 71:
			uParam0->f_49 = 1167706/*func_3338*/;
			break;
		case 107:
			uParam0->f_50 = 1167694/*func_3337*/;
			break;
		case 80:
			uParam0->f_7 = 1167506/*func_3336*/;
			break;
		case 84:
			uParam0->f_1 = 1167497/*func_3335*/;
			break;
		case 85:
			uParam0->f_1 = 1165911/*func_3332*/;
			break;
		case 87:
			uParam0->f_1 = 1164393/*func_3325*/;
			break;
		case 88:
			uParam0->f_1 = 1164384/*func_3324*/;
			break;
		case 89:
			uParam0->f_54 = 1164376/*func_3323*/;
			break;
		case 96:
			uParam0->f_1 = 1164346/*func_3322*/;
			break;
		case 97:
			uParam0->f_1 = 1163901/*func_3321*/;
			break;
		case 98:
			uParam0->f_1 = 1159411/*func_3287*/;
			break;
		case 100:
			uParam0->f_22 = 1151528/*func_3272*/;
			break;
		case 101:
			uParam0->f_22 = 1150587/*func_3266*/;
			break;
		case 112:
			uParam0->f_13 = 1150576/*func_3265*/;
			break;
		case 113:
			uParam0->f_3 = 1150567/*func_3264*/;
			break;
		case 114:
			uParam0->f_16 = 1150558/*func_3263*/;
			break;
		case 117:
			uParam0->f_16 = 1150549/*func_3262*/;
			break;
		case 78:
			uParam0->f_59 = 1150377/*func_3260*/;
			break;
		case 76:
			uParam0->f_13 = 1150354/*func_3259*/;
			break;
	}
}

int func_3332(int iParam0, var uParam1)//Position - 0x11CA57
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3371(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x11E956
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_143(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_4__::func_143(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_143(bVar1, __LIB_2__::func_852(iParam0)) && __LIB_8__::func_665(bVar1))
				{
					Var3 = { __LIB_1__::func_267(bVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = func_3372(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								__LIB_6__::func_958(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
int func_3372(struct<3> Param0, bool bParam1)//Position - 0x11EACF
{
	int iVar0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_3406(int iParam0, int iParam1)//Position - 0x126A86
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_734(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_8__::func_11(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_11(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_861(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_861(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3408(var uParam0, var uParam1)//Position - 0x126BC8
{
	if (__LIB_2__::func_399() == 3)
	{
		func_3412(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_143(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_4__::func_356(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_3410(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_3410(var uParam0, var uParam1)//Position - 0x126C51
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_8__::func_11(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3412(var uParam0, var uParam1)//Position - 0x126D6F
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_36__::func_800(uParam0, uParam1);
			break;
		case 1:
			func_3417(uParam0, uParam1);
			break;
		case 2:
			__LIB_36__::func_823(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3417(var uParam0, var uParam1)//Position - 0x1270F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_18__::func_963(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_8__::func_11(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3474(var uParam0, int iParam1)//Position - 0x12B448
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1242009/*func_3583*/;
			break;
		case 111:
			uParam0->f_35 = 1242000/*func_3582*/;
			break;
		case 1:
			uParam0->f_30 = 1241932/*func_3580*/;
			break;
		case 2:
			uParam0->f_31 = 1241488/*func_3577*/;
			break;
		case 3:
			uParam0->f_34 = 1241383/*func_3576*/;
			break;
		case 4:
			uParam0->f_12 = 1241370/*func_3575*/;
			break;
		case 6:
			uParam0->f_32 = 1241306/*func_3574*/;
			break;
		case 11:
			uParam0->f_11 = 1241297/*func_3573*/;
			break;
		case 12:
			uParam0->f_33 = 1240836/*func_3568*/;
			break;
		case 14:
			uParam0->f_11 = 1240827/*func_3567*/;
			break;
		case 109:
			uParam0->f_56 = 1240438/*func_3565*/;
			break;
		case 8:
			uParam0->f_37 = 1240430/*func_3564*/;
			break;
		case 7:
			uParam0->f_36 = 1240421/*func_3563*/;
			break;
		case 79:
			*uParam0 = 1240397/*func_3562*/;
			break;
		case 13:
			uParam0->f_2 = 1240335/*func_3561*/;
			break;
		case 15:
			uParam0->f_2 = 1240256/*func_3560*/;
			break;
		case 16:
			uParam0->f_5 = 1239959/*func_3559*/;
			break;
		case 108:
			uParam0->f_55 = 1239950/*func_3558*/;
			break;
		case 17:
			uParam0->f_17 = 1239940/*func_3557*/;
			break;
		case 19:
			uParam0->f_17 = 1239915/*func_3556*/;
			break;
		case 20:
			uParam0->f_3 = 1239906/*func_3555*/;
			break;
		case 21:
			uParam0->f_3 = 1239897/*func_3554*/;
			break;
		case 74:
			uParam0->f_53 = 1239875/*func_3553*/;
			break;
		case 75:
			uParam0->f_4 = 1239866/*func_3552*/;
			break;
		case 22:
			uParam0->f_24 = 1239858/*func_3551*/;
			break;
		case 23:
			uParam0->f_26 = 1239850/*func_3550*/;
			break;
		case 26:
			uParam0->f_38 = 1239842/*func_3549*/;
			break;
		case 25:
			uParam0->f_23 = 1239510/*func_3546*/;
			break;
		case 27:
			uParam0->f_25 = 1239502/*func_3545*/;
			break;
		case 28:
			uParam0->f_24 = 1239494/*func_3544*/;
			break;
		case 30:
			uParam0->f_8 = 1239173/*func_3541*/;
			break;
		case 31:
			uParam0->f_39 = 1239147/*func_3540*/;
			break;
		case 33:
			uParam0->f_40 = 1239078/*func_3539*/;
			break;
		case 34:
			uParam0->f_41 = 1235346/*func_3538*/;
			break;
		case 36:
			uParam0->f_58 = 1235301/*func_3537*/;
			break;
		case 35:
			uParam0->f_42 = 1232134/*func_3534*/;
			break;
		case 45:
			uParam0->f_14 = 1232125/*func_3533*/;
			break;
		case 46:
			uParam0->f_14 = 1232116/*func_3532*/;
			break;
		case 110:
			uParam0->f_57 = 1232108/*func_3531*/;
			break;
		case 77:
			uParam0->f_13 = 1232097/*func_3530*/;
			break;
		case 47:
			uParam0->f_43 = 1231984/*func_3529*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1230861/*func_3526*/;
			break;
		case 49:
			uParam0->f_8 = 1230852/*func_3525*/;
			break;
		case 50:
			*uParam0 = 1230843/*func_3524*/;
			break;
		case 51:
			*uParam0 = 1230834/*func_3523*/;
			break;
		case 52:
			uParam0->f_15 = 1230823/*func_3522*/;
			break;
		case 53:
			uParam0->f_13 = 1230812/*func_3521*/;
			break;
		case 54:
			uParam0->f_45 = 1230804/*func_3520*/;
			break;
		case 56:
			uParam0->f_46 = 1230795/*func_3519*/;
			break;
		case 57:
			uParam0->f_11 = 1230786/*func_3518*/;
			break;
		case 58:
			uParam0->f_13 = 1230744/*func_3517*/;
			break;
		case 59:
			*uParam0 = 1230735/*func_3516*/;
			break;
		case 60:
			*uParam0 = 1230726/*func_3515*/;
			break;
		case 61:
			uParam0->f_15 = 1230715/*func_3514*/;
			break;
		case 62:
			uParam0->f_13 = 1230704/*func_3513*/;
			break;
		case 63:
			uParam0->f_11 = 1230695/*func_3512*/;
			break;
		case 64:
			uParam0->f_47 = 1230687/*func_3511*/;
			break;
		case 65:
			uParam0->f_21 = 1230679/*func_3510*/;
			break;
		case 66:
			uParam0->f_21 = 1230376/*func_3509*/;
			break;
		case 67:
			uParam0->f_21 = 1230306/*func_3508*/;
			break;
		case 68:
			*uParam0 = 1229657/*func_3507*/;
			break;
		case 69:
			*uParam0 = 1229648/*func_3506*/;
			break;
		case 70:
			uParam0->f_48 = 1229640/*func_3505*/;
			break;
		case 71:
			uParam0->f_49 = 1229631/*func_3504*/;
			break;
		case 107:
			uParam0->f_50 = 1229619/*func_3503*/;
			break;
		case 80:
			uParam0->f_7 = 1229185/*func_3502*/;
			break;
		case 18:
			uParam0->f_8 = 1229160/*func_3501*/;
			break;
		case 84:
			uParam0->f_1 = 1229143/*func_3500*/;
			break;
		case 85:
			uParam0->f_1 = 1228599/*func_3496*/;
			break;
		case 87:
			uParam0->f_1 = 1227556/*func_3487*/;
			break;
		case 88:
			uParam0->f_1 = 1227547/*func_3486*/;
			break;
		case 89:
			uParam0->f_54 = 1227539/*func_3485*/;
			break;
		case 96:
			uParam0->f_1 = 1227530/*func_3484*/;
			break;
		case 97:
			uParam0->f_1 = 1227521/*func_3483*/;
			break;
		case 98:
			uParam0->f_1 = 1227512/*func_3482*/;
			break;
		case 100:
			uParam0->f_22 = 1227504/*func_3481*/;
			break;
		case 101:
			uParam0->f_22 = 1227496/*func_3480*/;
			break;
		case 112:
			uParam0->f_13 = 1227484/*func_3479*/;
			break;
		case 113:
			uParam0->f_3 = 1227475/*func_3478*/;
			break;
		case 78:
			uParam0->f_59 = 1227172/*func_3475*/;
			break;
	}
}

int func_3496(var uParam0, var uParam1)//Position - 0x12BF37
{
	return func_3497(uParam1);
}

int func_3497(var uParam0)//Position - 0x12BF45
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_1821(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3546(int iParam0, int iParam1)//Position - 0x12E9D6
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_8__::func_9(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_9(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_860(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_860(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3584(var uParam0, int iParam1)//Position - 0x12F3A2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1277124/*func_3761*/;
			break;
		case 111:
			uParam0->f_35 = 1277101/*func_3760*/;
			break;
		case 1:
			uParam0->f_30 = 1276971/*func_3758*/;
			break;
		case 2:
			uParam0->f_31 = 1276308/*func_3754*/;
			break;
		case 3:
			uParam0->f_34 = 1276045/*func_3753*/;
			break;
		case 4:
			uParam0->f_12 = 1276032/*func_3752*/;
			break;
		case 5:
			uParam0->f_11 = 1276022/*func_3751*/;
			break;
		case 37:
			uParam0->f_18 = 1275825/*func_3750*/;
			break;
		case 38:
			uParam0->f_9 = 1275777/*func_3749*/;
			break;
		case 42:
			uParam0->f_10 = 1275741/*func_3748*/;
			break;
		case 6:
			uParam0->f_32 = 1275626/*func_3747*/;
			break;
		case 11:
			uParam0->f_11 = 1275617/*func_3746*/;
			break;
		case 12:
			uParam0->f_33 = 1274687/*func_3740*/;
			break;
		case 14:
			uParam0->f_11 = 1274678/*func_3739*/;
			break;
		case 109:
			uParam0->f_56 = 1273530/*func_3737*/;
			break;
		case 8:
			uParam0->f_37 = 1273486/*func_3736*/;
			break;
		case 7:
			uParam0->f_36 = 1273463/*func_3735*/;
			break;
		case 79:
			*uParam0 = 1273439/*func_3734*/;
			break;
		case 13:
			uParam0->f_2 = 1273377/*func_3733*/;
			break;
		case 15:
			uParam0->f_2 = 1273298/*func_3732*/;
			break;
		case 16:
			uParam0->f_5 = 1272624/*func_3727*/;
			break;
		case 108:
			uParam0->f_55 = 1269342/*func_3714*/;
			break;
		case 17:
			uParam0->f_17 = 1268408/*func_3713*/;
			break;
		case 19:
			uParam0->f_17 = 1268364/*func_3712*/;
			break;
		case 20:
			uParam0->f_3 = 1268191/*func_3711*/;
			break;
		case 21:
			uParam0->f_3 = 1268106/*func_3710*/;
			break;
		case 74:
			uParam0->f_53 = 1267966/*func_3709*/;
			break;
		case 75:
			uParam0->f_4 = 1267950/*func_3708*/;
			break;
		case 22:
			uParam0->f_24 = 1267843/*func_3707*/;
			break;
		case 23:
			uParam0->f_26 = 1267796/*func_3706*/;
			break;
		case 24:
			uParam0->f_26 = 1267759/*func_3705*/;
			break;
		case 26:
			uParam0->f_38 = 1266348/*func_3692*/;
			break;
		case 25:
			uParam0->f_23 = 1265982/*func_3689*/;
			break;
		case 27:
			uParam0->f_25 = 1265168/*func_3685*/;
			break;
		case 28:
			uParam0->f_24 = 1265127/*func_3684*/;
			break;
		case 29:
			uParam0->f_28 = 1264892/*func_3680*/;
			break;
		case 30:
			uParam0->f_8 = 1264567/*func_3676*/;
			break;
		case 31:
			uParam0->f_39 = 1264373/*func_3675*/;
			break;
		case 43:
			uParam0->f_8 = 1264267/*func_3674*/;
			break;
		case 33:
			uParam0->f_40 = 1263951/*func_3673*/;
			break;
		case 34:
			uParam0->f_41 = 1258918/*func_3670*/;
			break;
		case 36:
			uParam0->f_58 = 1258861/*func_3669*/;
			break;
		case 35:
			uParam0->f_42 = 1252657/*func_3665*/;
			break;
		case 45:
			uParam0->f_14 = 1252648/*func_3664*/;
			break;
		case 46:
			uParam0->f_14 = 1252639/*func_3663*/;
			break;
		case 110:
			uParam0->f_57 = 1252631/*func_3662*/;
			break;
		case 77:
			uParam0->f_13 = 1252608/*func_3661*/;
			break;
		case 82:
			uParam0->f_19 = 1252595/*func_3660*/;
			break;
		case 47:
			uParam0->f_43 = 1252292/*func_3657*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1250129/*func_3652*/;
			break;
		case 49:
			uParam0->f_8 = 1250081/*func_3651*/;
			break;
		case 50:
			*uParam0 = 1249889/*func_3649*/;
			break;
		case 51:
			*uParam0 = 1249880/*func_3648*/;
			break;
		case 52:
			uParam0->f_15 = 1249869/*func_3647*/;
			break;
		case 53:
			uParam0->f_13 = 1249827/*func_3646*/;
			break;
		case 54:
			uParam0->f_45 = 1249819/*func_3645*/;
			break;
		case 56:
			uParam0->f_46 = 1249810/*func_3644*/;
			break;
		case 57:
			uParam0->f_11 = 1249801/*func_3643*/;
			break;
		case 58:
			uParam0->f_13 = 1249759/*func_3642*/;
			break;
		case 59:
			*uParam0 = 1249750/*func_3641*/;
			break;
		case 60:
			*uParam0 = 1249741/*func_3640*/;
			break;
		case 61:
			uParam0->f_15 = 1249730/*func_3639*/;
			break;
		case 62:
			uParam0->f_13 = 1249700/*func_3638*/;
			break;
		case 63:
			uParam0->f_11 = 1249691/*func_3637*/;
			break;
		case 64:
			uParam0->f_47 = 1249683/*func_3636*/;
			break;
		case 65:
			uParam0->f_21 = 1248597/*func_3633*/;
			break;
		case 66:
			uParam0->f_21 = 1248256/*func_3632*/;
			break;
		case 67:
			uParam0->f_21 = 1248142/*func_3631*/;
			break;
		case 68:
			*uParam0 = 1247314/*func_3630*/;
			break;
		case 69:
			*uParam0 = 1247305/*func_3629*/;
			break;
		case 70:
			uParam0->f_48 = 1247293/*func_3628*/;
			break;
		case 71:
			uParam0->f_49 = 1247201/*func_3627*/;
			break;
		case 107:
			uParam0->f_50 = 1247189/*func_3626*/;
			break;
		case 80:
			uParam0->f_7 = 1247001/*func_3625*/;
			break;
		case 84:
			uParam0->f_1 = 1246992/*func_3624*/;
			break;
		case 85:
			uParam0->f_1 = 1246978/*func_3623*/;
			break;
		case 87:
			uParam0->f_1 = 1246962/*func_3622*/;
			break;
		case 88:
			uParam0->f_1 = 1246953/*func_3621*/;
			break;
		case 89:
			uParam0->f_54 = 1246945/*func_3620*/;
			break;
		case 96:
			uParam0->f_1 = 1246936/*func_3619*/;
			break;
		case 97:
			uParam0->f_1 = 1246493/*func_3615*/;
			break;
		case 98:
			uParam0->f_1 = 1245027/*func_3605*/;
			break;
		case 100:
			uParam0->f_22 = 1244148/*func_3600*/;
			break;
		case 101:
			uParam0->f_22 = 1243971/*func_3597*/;
			break;
		case 112:
			uParam0->f_13 = 1243959/*func_3596*/;
			break;
		case 113:
			uParam0->f_3 = 1243945/*func_3595*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 118:
			uParam0->f_11 = 1243936/*func_3594*/;
			break;
		case 119:
			uParam0->f_27 = 1243835/*func_3590*/;
			break;
		case 120:
			uParam0->f_19 = 1243810/*func_3588*/;
			break;
		case 78:
			uParam0->f_59 = 1243638/*func_3586*/;
			break;
		case 125:
			uParam0->f_19 = 1243611/*func_3585*/;
			break;
	}
}

int func_3623(var uParam0, var uParam1)//Position - 0x130702
{
	return func_3497(uParam1);
}

void func_3689(int iParam0, int iParam1)//Position - 0x13513E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_739(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_8__::func_15(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_15(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_866(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_866(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3692(var uParam0, var uParam1)//Position - 0x1352AC
{
	if (__LIB_4__::func_139(PLAYER::PLAYER_ID()) || __LIB_4__::func_148(PLAYER::PLAYER_ID()))
	{
		func_3693(uParam0, uParam1);
	}
}

void func_3693(var uParam0, var uParam1)//Position - 0x1352D8
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_3704(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_3699(uParam0, uParam1);
			break;
		case 1:
			func_3695(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3695(var uParam0, var uParam1)//Position - 0x135397
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_2__::func_936();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_341(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_34__::func_245(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3699(var uParam0, var uParam1)//Position - 0x135598
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_4__::func_139(PLAYER::PLAYER_ID()) && __LIB_4__::func_148(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_3704(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_3704(int iParam0, bool bParam1, bool bParam2)//Position - 0x1357FD
{
	int iVar0;
	int iVar1;
	func_2007(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_3762(var uParam0, int iParam1)//Position - 0x137CCD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1307498/*func_3930*/;
			break;
		case 111:
			uParam0->f_35 = 1307489/*func_3929*/;
			break;
		case 1:
			uParam0->f_30 = 1307421/*func_3927*/;
			break;
		case 2:
			uParam0->f_31 = 1307072/*func_3924*/;
			break;
		case 3:
			uParam0->f_34 = 1306839/*func_3923*/;
			break;
		case 4:
			uParam0->f_12 = 1306826/*func_3922*/;
			break;
		case 6:
			uParam0->f_32 = 1306762/*func_3921*/;
			break;
		case 11:
			uParam0->f_11 = 1306753/*func_3920*/;
			break;
		case 12:
			uParam0->f_33 = 1306028/*func_3916*/;
			break;
		case 14:
			uParam0->f_11 = 1306019/*func_3915*/;
			break;
		case 109:
			uParam0->f_56 = 1304914/*func_3914*/;
			break;
		case 8:
			uParam0->f_37 = 1304906/*func_3913*/;
			break;
		case 7:
			uParam0->f_36 = 1304897/*func_3912*/;
			break;
		case 79:
			*uParam0 = 1304873/*func_3911*/;
			break;
		case 13:
			uParam0->f_2 = 1304801/*func_3910*/;
			break;
		case 15:
			uParam0->f_2 = 1304712/*func_3909*/;
			break;
		case 16:
			uParam0->f_5 = 1304352/*func_3908*/;
			break;
		case 108:
			uParam0->f_55 = 1304213/*func_3906*/;
			break;
		case 17:
			uParam0->f_17 = 1303540/*func_3905*/;
			break;
		case 19:
			uParam0->f_17 = 1303515/*func_3904*/;
			break;
		case 20:
			uParam0->f_3 = 1303506/*func_3903*/;
			break;
		case 21:
			uParam0->f_3 = 1303458/*func_3902*/;
			break;
		case 74:
			uParam0->f_53 = 1303403/*func_3901*/;
			break;
		case 75:
			uParam0->f_4 = 1303290/*func_3900*/;
			break;
		case 22:
			uParam0->f_24 = 1303282/*func_3899*/;
			break;
		case 23:
			uParam0->f_26 = 1303274/*func_3898*/;
			break;
		case 26:
			uParam0->f_38 = 1300718/*func_3882*/;
			break;
		case 25:
			uParam0->f_23 = 1300710/*func_3881*/;
			break;
		case 27:
			uParam0->f_25 = 1300702/*func_3880*/;
			break;
		case 28:
			uParam0->f_24 = 1300694/*func_3879*/;
			break;
		case 30:
			uParam0->f_8 = 1300413/*func_3878*/;
			break;
		case 31:
			uParam0->f_39 = 1300387/*func_3877*/;
			break;
		case 33:
			uParam0->f_40 = 1300318/*func_3876*/;
			break;
		case 76:
			uParam0->f_13 = 1300295/*func_3875*/;
			break;
		case 34:
			uParam0->f_41 = 1297741/*func_3872*/;
			break;
		case 36:
			uParam0->f_58 = 1297696/*func_3871*/;
			break;
		case 35:
			uParam0->f_42 = 1297600/*func_3870*/;
			break;
		case 45:
			uParam0->f_14 = 1297591/*func_3869*/;
			break;
		case 46:
			uParam0->f_14 = 1297582/*func_3868*/;
			break;
		case 110:
			uParam0->f_57 = 1297574/*func_3867*/;
			break;
		case 77:
			uParam0->f_13 = 1297563/*func_3866*/;
			break;
		case 47:
			uParam0->f_43 = 1297450/*func_3865*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1296603/*func_3864*/;
			break;
		case 49:
			uParam0->f_8 = 1296594/*func_3863*/;
			break;
		case 50:
			*uParam0 = 1296381/*func_3862*/;
			break;
		case 51:
			*uParam0 = 1296372/*func_3861*/;
			break;
		case 52:
			uParam0->f_15 = 1296361/*func_3860*/;
			break;
		case 53:
			uParam0->f_13 = 1296319/*func_3859*/;
			break;
		case 54:
			uParam0->f_45 = 1296280/*func_3858*/;
			break;
		case 56:
			uParam0->f_46 = 1296271/*func_3857*/;
			break;
		case 57:
			uParam0->f_11 = 1296229/*func_3855*/;
			break;
		case 58:
			uParam0->f_13 = 1296187/*func_3854*/;
			break;
		case 59:
			*uParam0 = 1296178/*func_3853*/;
			break;
		case 60:
			*uParam0 = 1296169/*func_3852*/;
			break;
		case 61:
			uParam0->f_15 = 1296158/*func_3851*/;
			break;
		case 62:
			uParam0->f_13 = 1296147/*func_3850*/;
			break;
		case 63:
			uParam0->f_11 = 1296138/*func_3849*/;
			break;
		case 64:
			uParam0->f_47 = 1296052/*func_3847*/;
			break;
		case 65:
			uParam0->f_21 = 1296044/*func_3846*/;
			break;
		case 66:
			uParam0->f_21 = 1295703/*func_3845*/;
			break;
		case 67:
			uParam0->f_21 = 1295633/*func_3844*/;
			break;
		case 68:
			*uParam0 = 1294936/*func_3843*/;
			break;
		case 69:
			*uParam0 = 1294927/*func_3842*/;
			break;
		case 70:
			uParam0->f_48 = 1294854/*func_3841*/;
			break;
		case 71:
			uParam0->f_49 = 1294845/*func_3840*/;
			break;
		case 107:
			uParam0->f_50 = 1294833/*func_3839*/;
			break;
		case 80:
			uParam0->f_7 = 1294824/*func_3838*/;
			break;
		case 84:
			uParam0->f_1 = 1294294/*func_3835*/;
			break;
		case 85:
			uParam0->f_1 = 1292738/*func_3832*/;
			break;
		case 87:
			uParam0->f_1 = 1289506/*func_3819*/;
			break;
		case 88:
			uParam0->f_1 = 1289491/*func_3818*/;
			break;
		case 89:
			uParam0->f_54 = 1289129/*func_3816*/;
			break;
		case 96:
			uParam0->f_1 = 1288838/*func_3813*/;
			break;
		case 97:
			uParam0->f_1 = 1288331/*func_3811*/;
			break;
		case 98:
			uParam0->f_1 = 1286697/*func_3809*/;
			break;
		case 100:
			uParam0->f_22 = 1286420/*func_3808*/;
			break;
		case 101:
			uParam0->f_22 = 1285945/*func_3806*/;
			break;
		case 112:
			uParam0->f_13 = 1285933/*func_3805*/;
			break;
		case 113:
			uParam0->f_3 = 1285924/*func_3804*/;
			break;
		case 114:
			uParam0->f_16 = 912948/*func_2244*/;
			break;
		case 115:
			uParam0->f_3 = 1285813/*func_3802*/;
			break;
		case 116:
			*uParam0 = 1285765/*func_3801*/;
			break;
		case 117:
			uParam0->f_16 = 966946/*func_2449*/;
			break;
		case 118:
			uParam0->f_11 = 1243936/*func_3594*/;
			break;
		case 119:
			uParam0->f_27 = 1243835/*func_3590*/;
			break;
		case 120:
			uParam0->f_19 = 1243810/*func_3588*/;
			break;
		case 78:
			uParam0->f_59 = 1285757/*func_3800*/;
			break;
		case 124:
			uParam0->f_1 = 1278713/*func_3764*/;
			break;
		case 125:
			uParam0->f_19 = 1278657/*func_3763*/;
			break;
	}
}

int func_3764(int iParam0, int* iParam1)//Position - 0x1382F9
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_39__::func_76(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_4__::func_364(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_628(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_3832(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_3788(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_38__::func_997(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_36__::func_879(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_19__::func_324(iParam1);
				__LIB_36__::func_879(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_38__::func_997(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_39__::func_76(iParam1);
				}
			}
			else if (__LIB_19__::func_324(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_39__::func_76(iParam1);
			}
			break;
	}
	return 1;
}

int func_3788(int* iParam0)//Position - 0x139537
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_2805(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_3809(int iParam0, var uParam1)//Position - 0x13A229
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return __LIB_39__::func_294(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_18__::func_843(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_2805(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_3832(int iParam0, int* iParam1)//Position - 0x13B9C2
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!__LIB_37__::func_117(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_1821(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (__LIB_37__::func_117(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_2805(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_3882(var uParam0, var uParam1)//Position - 0x13D8EE
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_4__::func_141(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_34__::func_249(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_34__::func_249(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_3886(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_3883(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3883(var uParam0, var uParam1)//Position - 0x13DA2C
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_341(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_34__::func_249(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_34__::func_249(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_34__::func_249(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_3886(var uParam0, var uParam1)//Position - 0x13DCB8
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_7__::func_856(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_18__::func_814(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_7__::func_653(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_3888(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_3887(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_3887(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x13DDD5
{
	if (iParam1 == 0)
	{
		if (func_3704(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_3704(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_3704(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_3704(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
		}
	}
	*uParam2 = 1;
}

void func_3888(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x13DEDD
{
	if (iParam1 == 0)
	{
		if (func_3704(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_3704(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

void func_3931(var uParam0, int iParam1)//Position - 0x13F373
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1343036/*func_4097*/;
			break;
		case 111:
			uParam0->f_35 = 1343022/*func_4096*/;
			break;
		case 1:
			uParam0->f_30 = 1342923/*func_4095*/;
			break;
		case 2:
			uParam0->f_31 = 1341863/*func_4091*/;
			break;
		case 3:
			uParam0->f_34 = 1341709/*func_4090*/;
			break;
		case 4:
			uParam0->f_12 = 1341657/*func_4088*/;
			break;
		case 5:
			uParam0->f_11 = 1341602/*func_4087*/;
			break;
		case 37:
			uParam0->f_18 = 1341486/*func_4086*/;
			break;
		case 38:
			uParam0->f_9 = 1341354/*func_4082*/;
			break;
		case 6:
			uParam0->f_32 = 1341239/*func_4081*/;
			break;
		case 11:
			uParam0->f_11 = 1341229/*func_4080*/;
			break;
		case 12:
			uParam0->f_33 = 1340060/*func_4075*/;
			break;
		case 14:
			uParam0->f_11 = 1340051/*func_4074*/;
			break;
		case 109:
			uParam0->f_56 = 1338735/*func_4073*/;
			break;
		case 8:
			uParam0->f_37 = 1338691/*func_4072*/;
			break;
		case 7:
			uParam0->f_36 = 1338668/*func_4071*/;
			break;
		case 79:
			*uParam0 = 1338644/*func_4070*/;
			break;
		case 13:
			uParam0->f_2 = 1338581/*func_4069*/;
			break;
		case 15:
			uParam0->f_2 = 1338501/*func_4068*/;
			break;
		case 16:
			uParam0->f_5 = 1337858/*func_4064*/;
			break;
		case 108:
			uParam0->f_55 = 1334718/*func_4051*/;
			break;
		case 17:
			uParam0->f_17 = 1334015/*func_4050*/;
			break;
		case 19:
			uParam0->f_17 = 1333990/*func_4049*/;
			break;
		case 20:
			uParam0->f_3 = 1333811/*func_4048*/;
			break;
		case 21:
			uParam0->f_3 = 1333747/*func_4047*/;
			break;
		case 74:
			uParam0->f_53 = 1333533/*func_4046*/;
			break;
		case 75:
			uParam0->f_4 = 1333517/*func_4045*/;
			break;
		case 22:
			uParam0->f_24 = 1333410/*func_4044*/;
			break;
		case 23:
			uParam0->f_26 = 1333363/*func_4043*/;
			break;
		case 24:
			uParam0->f_26 = 1333326/*func_4042*/;
			break;
		case 26:
			uParam0->f_38 = 1332496/*func_4035*/;
			break;
		case 25:
			uParam0->f_23 = 1332130/*func_4032*/;
			break;
		case 27:
			uParam0->f_25 = 1331748/*func_4030*/;
			break;
		case 28:
			uParam0->f_24 = 1331697/*func_4029*/;
			break;
		case 29:
			uParam0->f_28 = 1331689/*func_4028*/;
			break;
		case 30:
			uParam0->f_8 = 1331452/*func_4024*/;
			break;
		case 31:
			uParam0->f_39 = 1331334/*func_4023*/;
			break;
		case 33:
			uParam0->f_40 = 1330914/*func_4022*/;
			break;
		case 34:
			uParam0->f_41 = 1319620/*func_4008*/;
			break;
		case 36:
			uParam0->f_58 = 1319575/*func_4007*/;
			break;
		case 35:
			uParam0->f_42 = 1316488/*func_4004*/;
			break;
		case 45:
			uParam0->f_14 = 1316479/*func_4003*/;
			break;
		case 46:
			uParam0->f_14 = 1316470/*func_4002*/;
			break;
		case 110:
			uParam0->f_57 = 1316462/*func_4001*/;
			break;
		case 77:
			uParam0->f_13 = 1316413/*func_4000*/;
			break;
		case 47:
			uParam0->f_43 = 1316331/*func_3999*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1315567/*func_3992*/;
			break;
		case 49:
			uParam0->f_8 = 1315520/*func_3991*/;
			break;
		case 50:
			*uParam0 = 1315461/*func_3990*/;
			break;
		case 51:
			*uParam0 = 1315229/*func_3987*/;
			break;
		case 52:
			uParam0->f_15 = 1315218/*func_3986*/;
			break;
		case 53:
			uParam0->f_13 = 1315176/*func_3985*/;
			break;
		case 54:
			uParam0->f_45 = 1315168/*func_3984*/;
			break;
		case 56:
			uParam0->f_46 = 1315159/*func_3983*/;
			break;
		case 57:
			uParam0->f_11 = 1315150/*func_3982*/;
			break;
		case 58:
			uParam0->f_13 = 1315108/*func_3981*/;
			break;
		case 59:
			*uParam0 = 1315099/*func_3980*/;
			break;
		case 60:
			*uParam0 = 1315090/*func_3979*/;
			break;
		case 61:
			uParam0->f_15 = 1315079/*func_3978*/;
			break;
		case 62:
			uParam0->f_13 = 1315037/*func_3977*/;
			break;
		case 63:
			uParam0->f_11 = 1315028/*func_3976*/;
			break;
		case 64:
			uParam0->f_47 = 1315020/*func_3975*/;
			break;
		case 65:
			uParam0->f_21 = 1313958/*func_3972*/;
			break;
		case 66:
			uParam0->f_21 = 1313655/*func_3971*/;
			break;
		case 67:
			uParam0->f_21 = 1313541/*func_3970*/;
			break;
		case 68:
			*uParam0 = 1312698/*func_3969*/;
			break;
		case 69:
			*uParam0 = 1312689/*func_3968*/;
			break;
		case 70:
			uParam0->f_48 = 1312616/*func_3967*/;
			break;
		case 71:
			uParam0->f_49 = 1312607/*func_3966*/;
			break;
		case 107:
			uParam0->f_50 = 1312595/*func_3965*/;
			break;
		case 80:
			uParam0->f_7 = 1312393/*func_3964*/;
			break;
		case 84:
			uParam0->f_1 = 1312384/*func_3963*/;
			break;
		case 85:
			uParam0->f_1 = 1310650/*func_3950*/;
			break;
		case 87:
			uParam0->f_1 = 1309195/*func_3942*/;
			break;
		case 88:
			uParam0->f_1 = 1309186/*func_3941*/;
			break;
		case 89:
			uParam0->f_54 = 1309178/*func_3940*/;
			break;
		case 96:
			uParam0->f_1 = 1309169/*func_3939*/;
			break;
		case 97:
			uParam0->f_1 = 1309160/*func_3938*/;
			break;
		case 98:
			uParam0->f_1 = 1309151/*func_3937*/;
			break;
		case 100:
			uParam0->f_22 = 1309143/*func_3936*/;
			break;
		case 101:
			uParam0->f_22 = 1309135/*func_3935*/;
			break;
		case 78:
			uParam0->f_59 = 1308963/*func_3933*/;
			break;
		case 125:
			uParam0->f_19 = 1308930/*func_3932*/;
			break;
	}
}

int func_3950(int iParam0, var uParam1)//Position - 0x13FFBA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_18__::func_483())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_4032(int iParam0, int iParam1)//Position - 0x1453A2
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_747(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_8__::func_19(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_8__::func_19(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_867(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_867(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4035(var uParam0, var uParam1)//Position - 0x145510
{
	if (__LIB_4__::func_135(PLAYER::PLAYER_ID()))
	{
		func_4036(uParam0, uParam1);
	}
}

void func_4036(var uParam0, var uParam1)//Position - 0x14552E
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_275(uParam0, uParam1);
			break;
		case 1:
			func_4037(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4037(var uParam0, var uParam1)//Position - 0x145568
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

int func_4051(var uParam0, var uParam1, var uParam2)//Position - 0x145DBE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_3__::func_17(*uParam0);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 18))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == bVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != bVar5)
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_241(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 18)) && __LIB_4__::func_150(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_18__::func_537(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (__LIB_40__::func_242(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13))
								{
									if (__LIB_4__::func_342() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13))
									{
										if ((__LIB_18__::func_537(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_153(uParam1, 0);
											func_4055(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											func_4055(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_153(uParam1, 0);
											func_4055(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_41__::func_174(*uParam0);
					bVar6 = __LIB_4__::func_118(bVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_3__::func_38(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_153(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_153(uParam1, 1);
	return 0;
}

void func_4055(int iParam0)//Position - 0x1464A4
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_1__::func_264(bVar0, 0, 1) && bVar0 != PLAYER::PLAYER_ID())
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), iParam0, false) && !__LIB_24__::func_924(bVar0))
			{
				__LIB_1__::func_114(__LIB_1__::func_276(bVar0), 0, 0f, 0, 0, 0, -1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, bVar0, true);
			}
		}
		iVar1++;
	}
}

void func_4098(var uParam0, int iParam1)//Position - 0x147E45
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1434144/*func_4234*/;
			break;
		case 1:
			uParam0->f_30 = 1434088/*func_4233*/;
			break;
		case 2:
			uParam0->f_31 = 1433744/*func_4232*/;
			break;
		case 3:
			uParam0->f_34 = 1433705/*func_4231*/;
			break;
		case 4:
			uParam0->f_12 = 1433671/*func_4230*/;
			break;
		case 5:
			uParam0->f_11 = 1433660/*func_4229*/;
			break;
		case 6:
			uParam0->f_32 = 1433596/*func_4228*/;
			break;
		case 111:
			uParam0->f_35 = 1433573/*func_4227*/;
			break;
		case 79:
			*uParam0 = 1433549/*func_4226*/;
			break;
		case 37:
			uParam0->f_18 = 1433433/*func_4225*/;
			break;
		case 38:
			uParam0->f_9 = 1433354/*func_4224*/;
			break;
		case 11:
			uParam0->f_11 = 1433345/*func_4223*/;
			break;
		case 12:
			uParam0->f_33 = 1432749/*func_4220*/;
			break;
		case 109:
			uParam0->f_56 = 1432741/*func_4219*/;
			break;
		case 15:
			uParam0->f_2 = 1427579/*func_4195*/;
			break;
		case 13:
			uParam0->f_2 = 1427570/*func_4194*/;
			break;
		case 75:
			uParam0->f_4 = 1427555/*func_4193*/;
			break;
		case 16:
			uParam0->f_5 = 1427080/*func_4189*/;
			break;
		case 108:
			uParam0->f_55 = 1423108/*func_4173*/;
			break;
		case 17:
			uParam0->f_17 = 1422331/*func_4172*/;
			break;
		case 19:
			uParam0->f_17 = 1422306/*func_4171*/;
			break;
		case 20:
			uParam0->f_3 = 1422095/*func_4170*/;
			break;
		case 21:
			uParam0->f_3 = 1421932/*func_4169*/;
			break;
		case 74:
			uParam0->f_53 = 1421323/*func_4166*/;
			break;
		case 22:
			uParam0->f_24 = 1421238/*func_4165*/;
			break;
		case 25:
			uParam0->f_23 = 1420322/*func_4162*/;
			break;
		case 30:
			uParam0->f_8 = 1419348/*func_4156*/;
			break;
		case 31:
			uParam0->f_39 = 1418675/*func_4152*/;
			break;
		case 33:
			uParam0->f_40 = 1417832/*func_4150*/;
			break;
		case 14:
			uParam0->f_11 = 1417823/*func_4149*/;
			break;
		case 34:
			uParam0->f_41 = 1417048/*func_4146*/;
			break;
		case 36:
			uParam0->f_58 = 1416995/*func_4145*/;
			break;
		case 35:
			uParam0->f_42 = 1348536/*func_4133*/;
			break;
		case 45:
			uParam0->f_14 = 1348527/*func_4132*/;
			break;
		case 46:
			uParam0->f_14 = 1348518/*func_4131*/;
			break;
		case 110:
			uParam0->f_57 = 1348510/*func_4130*/;
			break;
		case 77:
			uParam0->f_13 = 1348487/*func_4129*/;
			break;
		case 47:
			uParam0->f_43 = 1348347/*func_4128*/;
			break;
		case 49:
			uParam0->f_8 = 1348312/*func_4127*/;
			break;
		case 50:
			*uParam0 = 1348274/*func_4126*/;
			break;
		case 51:
			*uParam0 = 1348250/*func_4125*/;
			break;
		case 52:
			uParam0->f_15 = 1348239/*func_4124*/;
			break;
		case 53:
			uParam0->f_13 = 1348160/*func_4123*/;
			break;
		case 54:
			uParam0->f_45 = 1348152/*func_4122*/;
			break;
		case 56:
			uParam0->f_46 = 1348143/*func_4121*/;
			break;
		case 57:
			uParam0->f_11 = 1348133/*func_4120*/;
			break;
		case 58:
			uParam0->f_13 = 1347844/*func_4119*/;
			break;
		case 64:
			uParam0->f_47 = 1346513/*func_4114*/;
			break;
		case 65:
			uParam0->f_21 = 1345550/*func_4111*/;
			break;
		case 66:
			uParam0->f_21 = 1345355/*func_4110*/;
			break;
		case 67:
			uParam0->f_21 = 1345252/*func_4109*/;
			break;
		case 68:
			*uParam0 = 1344563/*func_4108*/;
			break;
		case 69:
			*uParam0 = 1344554/*func_4107*/;
			break;
		case 70:
			uParam0->f_48 = 1344542/*func_4106*/;
			break;
		case 71:
			uParam0->f_49 = 1344533/*func_4105*/;
			break;
		case 107:
			uParam0->f_50 = 1344521/*func_4104*/;
			break;
		case 80:
			uParam0->f_7 = 1344184/*func_4102*/;
			break;
		case 73:
			uParam0->f_51 = 1344175/*func_4101*/;
			break;
		case 78:
			uParam0->f_59 = 1344058/*func_4099*/;
			break;
	}
}

void func_4162(int iParam0, int iParam1)//Position - 0x15AC22
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_33__::func_86(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_22__::func_170(PLAYER::PLAYER_ID())) && __LIB_3__::func_999(bVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_34__::func_319(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_102(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_34__::func_319(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_853(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_22(PLAYER::PLAYER_ID()))
						{
							func_4163(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_853(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_22(PLAYER::PLAYER_ID()))
						{
							func_4163(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4163(int iParam0)//Position - 0x15AEDA
{
	__LIB_34__::func_319(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4235(var uParam0, int iParam1)//Position - 0x15E229
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1496915/*func_4455*/;
			break;
		case 1:
			uParam0->f_30 = 1496675/*func_4453*/;
			break;
		case 2:
			uParam0->f_31 = 1494376/*func_4447*/;
			break;
		case 3:
			uParam0->f_34 = 1494167/*func_4446*/;
			break;
		case 4:
			uParam0->f_12 = 1493962/*func_4444*/;
			break;
		case 5:
			uParam0->f_11 = 1493884/*func_4443*/;
			break;
		case 37:
			uParam0->f_18 = 1493746/*func_4442*/;
			break;
		case 38:
			uParam0->f_9 = 1493690/*func_4441*/;
			break;
		case 42:
			uParam0->f_10 = 1493529/*func_4438*/;
			break;
		case 6:
			uParam0->f_32 = 1493293/*func_4437*/;
			break;
		case 111:
			uParam0->f_35 = 1493279/*func_4436*/;
			break;
		case 11:
			uParam0->f_11 = 1493270/*func_4435*/;
			break;
		case 12:
			uParam0->f_33 = 1489899/*func_4426*/;
			break;
		case 14:
			uParam0->f_11 = 1489890/*func_4425*/;
			break;
		case 109:
			uParam0->f_56 = 1476155/*func_4424*/;
			break;
		case 79:
			*uParam0 = 1475899/*func_4420*/;
			break;
		case 13:
			uParam0->f_2 = 1475850/*func_4419*/;
			break;
		case 15:
			uParam0->f_2 = 1475639/*func_4416*/;
			break;
		case 44:
			*uParam0 = 1475630/*func_4415*/;
			break;
		case 75:
			uParam0->f_4 = 1475601/*func_4414*/;
			break;
		case 16:
			uParam0->f_5 = 1474874/*func_4411*/;
			break;
		case 108:
			uParam0->f_55 = 1471019/*func_4398*/;
			break;
		case 17:
			uParam0->f_17 = 1469705/*func_4394*/;
			break;
		case 19:
			uParam0->f_17 = 1469661/*func_4393*/;
			break;
		case 20:
			uParam0->f_3 = 1469496/*func_4392*/;
			break;
		case 21:
			uParam0->f_3 = 1469432/*func_4391*/;
			break;
		case 74:
			uParam0->f_53 = 1469205/*func_4390*/;
			break;
		case 22:
			uParam0->f_24 = 1469078/*func_4389*/;
			break;
		case 26:
			uParam0->f_38 = 1465695/*func_4363*/;
			break;
		case 25:
			uParam0->f_23 = 1465374/*func_4361*/;
			break;
		case 27:
			uParam0->f_25 = 1464282/*func_4353*/;
			break;
		case 28:
			uParam0->f_24 = 1464169/*func_4352*/;
			break;
		case 29:
			uParam0->f_28 = 1464088/*func_4351*/;
			break;
		case 30:
			uParam0->f_8 = 1463198/*func_4349*/;
			break;
		case 31:
			uParam0->f_39 = 1462654/*func_4347*/;
			break;
		case 33:
			uParam0->f_40 = 1461972/*func_4345*/;
			break;
		case 32:
			*uParam0 = 1461879/*func_4343*/;
			break;
		case 34:
			uParam0->f_41 = 1452609/*func_4328*/;
			break;
		case 36:
			uParam0->f_58 = 1452551/*func_4327*/;
			break;
		case 35:
			uParam0->f_42 = 1349405/*func_4136*/;
			break;
		case 45:
			uParam0->f_14 = 1452542/*func_4326*/;
			break;
		case 46:
			uParam0->f_14 = 1452533/*func_4325*/;
			break;
		case 110:
			uParam0->f_57 = 1452525/*func_4324*/;
			break;
		case 77:
			uParam0->f_13 = 1452476/*func_4323*/;
			break;
		case 47:
			uParam0->f_43 = 1452184/*func_4322*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1449520/*func_4307*/;
			break;
		case 49:
			uParam0->f_8 = 1449416/*func_4306*/;
			break;
		case 50:
			*uParam0 = 1449133/*func_4305*/;
			break;
		case 51:
			*uParam0 = 1448971/*func_4304*/;
			break;
		case 52:
			uParam0->f_15 = 1448960/*func_4303*/;
			break;
		case 53:
			uParam0->f_13 = 1448702/*func_4302*/;
			break;
		case 54:
			uParam0->f_45 = 1448440/*func_4301*/;
			break;
		case 56:
			uParam0->f_46 = 1448431/*func_4300*/;
			break;
		case 57:
			uParam0->f_11 = 1447274/*func_4293*/;
			break;
		case 58:
			uParam0->f_13 = 1447016/*func_4292*/;
			break;
		case 59:
			*uParam0 = 1446737/*func_4289*/;
			break;
		case 60:
			*uParam0 = 1446728/*func_4288*/;
			break;
		case 61:
			uParam0->f_15 = 1446717/*func_4287*/;
			break;
		case 62:
			uParam0->f_13 = 1446459/*func_4286*/;
			break;
		case 55:
			uParam0->f_45 = 1446451/*func_4285*/;
			break;
		case 63:
			uParam0->f_11 = 1446393/*func_4284*/;
			break;
		case 64:
			uParam0->f_47 = 1446243/*func_4283*/;
			break;
		case 65:
			uParam0->f_21 = 1444538/*func_4276*/;
			break;
		case 66:
			uParam0->f_21 = 1444227/*func_4275*/;
			break;
		case 67:
			uParam0->f_21 = 1444075/*func_4274*/;
			break;
		case 68:
			*uParam0 = 1443075/*func_4271*/;
			break;
		case 69:
			*uParam0 = 1443066/*func_4270*/;
			break;
		case 70:
			uParam0->f_48 = 1442617/*func_4269*/;
			break;
		case 71:
			uParam0->f_49 = 1442338/*func_4268*/;
			break;
		case 107:
			uParam0->f_50 = 1442326/*func_4267*/;
			break;
		case 80:
			uParam0->f_7 = 1442093/*func_4266*/;
			break;
		case 84:
			uParam0->f_1 = 1442084/*func_4265*/;
			break;
		case 85:
			uParam0->f_1 = 1439943/*func_4256*/;
			break;
		case 87:
			uParam0->f_1 = 1437048/*func_4247*/;
			break;
		case 88:
			uParam0->f_1 = 1437039/*func_4246*/;
			break;
		case 89:
			uParam0->f_54 = 1437031/*func_4245*/;
			break;
		case 96:
			uParam0->f_1 = 1437005/*func_4244*/;
			break;
		case 97:
			uParam0->f_1 = 1436895/*func_4243*/;
			break;
		case 98:
			uParam0->f_1 = 1436178/*func_4242*/;
			break;
		case 100:
			uParam0->f_22 = 1436016/*func_4241*/;
			break;
		case 101:
			uParam0->f_22 = 1435888/*func_4240*/;
			break;
		case 78:
			uParam0->f_59 = 1435598/*func_4237*/;
			break;
		case 125:
			uParam0->f_19 = 1435574/*func_4236*/;
			break;
	}
}

int func_4242(var uParam0, var uParam1)//Position - 0x15EA12
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_2805(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_4256(int iParam0, var uParam1)//Position - 0x15F8C7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_1821(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_4361(int iParam0, int iParam1)//Position - 0x165C1E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_7__::func_759(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_2007(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_324(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_324(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_357(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_357(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_4363(var uParam0, var uParam1)//Position - 0x165D5F
{
	if (__LIB_2__::func_399() == 2)
	{
		func_4377(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_358(uParam0, uParam1);
		}
		else
		{
			func_4365(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_358(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_4365(var uParam0, var uParam1)//Position - 0x165DEA
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_276(uParam0, uParam1);
			break;
		case 1:
			func_4366(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4366(var uParam0, var uParam1)//Position - 0x165E24
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_867(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_4377(var uParam0, var uParam1)//Position - 0x166341
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_635(uParam0, uParam1);
			break;
		case 1:
			func_4386(uParam0, uParam1);
			break;
		case 2:
			__LIB_36__::func_802(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_4386(var uParam0, var uParam1)//Position - 0x1667F0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_2007(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_23(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_324(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_4456(var uParam0, int iParam1)//Position - 0x16D75C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1504442/*func_4533*/;
			break;
		case 1:
			uParam0->f_30 = 1504386/*func_4532*/;
			break;
		case 2:
			uParam0->f_31 = 1504117/*func_4531*/;
			break;
		case 3:
			uParam0->f_34 = 1504056/*func_4530*/;
			break;
		case 4:
			uParam0->f_12 = 1504025/*func_4529*/;
			break;
		case 6:
			uParam0->f_32 = 1503961/*func_4528*/;
			break;
		case 111:
			uParam0->f_35 = 1503952/*func_4527*/;
			break;
		case 11:
			uParam0->f_11 = 1503943/*func_4526*/;
			break;
		case 14:
			uParam0->f_11 = 1503934/*func_4525*/;
			break;
		case 12:
			uParam0->f_33 = 1503723/*func_4523*/;
			break;
		case 109:
			uParam0->f_56 = 1503715/*func_4522*/;
			break;
		case 79:
			*uParam0 = 1503691/*func_4521*/;
			break;
		case 13:
			uParam0->f_2 = 1503682/*func_4520*/;
			break;
		case 15:
			uParam0->f_2 = 1502738/*func_4513*/;
			break;
		case 75:
			uParam0->f_4 = 1502729/*func_4512*/;
			break;
		case 16:
			uParam0->f_5 = 1502704/*func_4511*/;
			break;
		case 108:
			uParam0->f_55 = 1502695/*func_4510*/;
			break;
		case 17:
			uParam0->f_17 = 1502670/*func_4509*/;
			break;
		case 19:
			uParam0->f_17 = 1502660/*func_4508*/;
			break;
		case 20:
			uParam0->f_3 = 1502651/*func_4507*/;
			break;
		case 21:
			uParam0->f_3 = 1502642/*func_4506*/;
			break;
		case 74:
			uParam0->f_53 = 1502174/*func_4503*/;
			break;
		case 22:
			uParam0->f_24 = 1502051/*func_4502*/;
			break;
		case 25:
			uParam0->f_23 = 1501281/*func_4498*/;
			break;
		case 30:
			uParam0->f_8 = 1501135/*func_4496*/;
			break;
		case 31:
			uParam0->f_39 = 1501125/*func_4495*/;
			break;
		case 33:
			uParam0->f_40 = 1500918/*func_4493*/;
			break;
		case 34:
			uParam0->f_41 = 1500601/*func_4491*/;
			break;
		case 36:
			uParam0->f_58 = 1500548/*func_4490*/;
			break;
		case 35:
			uParam0->f_42 = 1499775/*func_4487*/;
			break;
		case 45:
			uParam0->f_14 = 1499766/*func_4486*/;
			break;
		case 46:
			uParam0->f_14 = 1499757/*func_4485*/;
			break;
		case 110:
			uParam0->f_57 = 1499749/*func_4484*/;
			break;
		case 77:
			uParam0->f_13 = 1499738/*func_4483*/;
			break;
		case 47:
			uParam0->f_43 = 1499499/*func_4481*/;
			break;
		case 49:
			uParam0->f_8 = 1499490/*func_4480*/;
			break;
		case 50:
			*uParam0 = 1499481/*func_4479*/;
			break;
		case 51:
			*uParam0 = 1499472/*func_4478*/;
			break;
		case 52:
			uParam0->f_15 = 1499461/*func_4477*/;
			break;
		case 53:
			uParam0->f_13 = 1499450/*func_4476*/;
			break;
		case 54:
			uParam0->f_45 = 1499442/*func_4475*/;
			break;
		case 56:
			uParam0->f_46 = 1499433/*func_4474*/;
			break;
		case 57:
			uParam0->f_11 = 1499424/*func_4473*/;
			break;
		case 58:
			uParam0->f_13 = 1499131/*func_4471*/;
			break;
		case 64:
			uParam0->f_47 = 1498587/*func_4468*/;
			break;
		case 65:
			uParam0->f_21 = 1498579/*func_4467*/;
			break;
		case 66:
			uParam0->f_21 = 1498511/*func_4466*/;
			break;
		case 67:
			uParam0->f_21 = 1498371/*func_4464*/;
			break;
		case 68:
			*uParam0 = 1497927/*func_4463*/;
			break;
		case 69:
			*uParam0 = 1497918/*func_4462*/;
			break;
		case 70:
			uParam0->f_48 = 1497906/*func_4461*/;
			break;
		case 71:
			uParam0->f_49 = 1497897/*func_4460*/;
			break;
		case 107:
			uParam0->f_50 = 1497885/*func_4459*/;
			break;
		case 80:
			uParam0->f_7 = 1497876/*func_4458*/;
			break;
		case 78:
			uParam0->f_59 = 1497868/*func_4457*/;
			break;
	}
}

void func_4493(int iParam0, int iParam1)//Position - 0x16E6F6
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	bVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
		Global_1853190 = bVar0;
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
	}
	else if (PLAYER::PLAYER_ID() == __LIB_28__::func_422() || PLAYER::PLAYER_ID() == __LIB_2__::func_191(PLAYER::PLAYER_ID()))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	__LIB_7__::func_802();
}

void func_4498(int iParam0, int iParam1)//Position - 0x16E861
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						func_4493(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_4493(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4499(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4499(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4499(int iParam0)//Position - 0x16EA8B
{
	func_4493(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4503(var uParam0, var uParam1)//Position - 0x16EBDE
{
	if (PLAYER::PLAYER_ID() == __LIB_28__::func_423())
	{
		if (Global_1946250.f_3280 == -1)
		{
			if (BitTest(Global_1946250.f_506, 31))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_4534(var uParam0, int iParam1)//Position - 0x16F4C3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1603249/*func_4769*/;
			break;
		case 1:
			uParam0->f_30 = 1603145/*func_4768*/;
			break;
		case 2:
			uParam0->f_31 = 1602410/*func_4766*/;
			break;
		case 3:
			uParam0->f_34 = 1602328/*func_4765*/;
			break;
		case 4:
			uParam0->f_12 = 1602185/*func_4764*/;
			break;
		case 5:
			uParam0->f_11 = 1602175/*func_4763*/;
			break;
		case 37:
			uParam0->f_18 = 1602042/*func_4762*/;
			break;
		case 42:
			uParam0->f_10 = 1601975/*func_4761*/;
			break;
		case 6:
			uParam0->f_32 = 1601863/*func_4760*/;
			break;
		case 111:
			uParam0->f_35 = 1601624/*func_4756*/;
			break;
		case 11:
			uParam0->f_11 = 1601615/*func_4755*/;
			break;
		case 12:
			uParam0->f_33 = 1601115/*func_4752*/;
			break;
		case 14:
			uParam0->f_11 = 1601106/*func_4751*/;
			break;
		case 109:
			uParam0->f_56 = 1601098/*func_4750*/;
			break;
		case 79:
			*uParam0 = 1601074/*func_4749*/;
			break;
		case 38:
			uParam0->f_9 = 1600994/*func_4748*/;
			break;
		case 13:
			uParam0->f_2 = 1600898/*func_4747*/;
			break;
		case 15:
			uParam0->f_2 = 1600693/*func_4746*/;
			break;
		case 75:
			uParam0->f_4 = 1600677/*func_4745*/;
			break;
		case 16:
			uParam0->f_5 = 1599868/*func_4742*/;
			break;
		case 108:
			uParam0->f_55 = 1595216/*func_4726*/;
			break;
		case 17:
			uParam0->f_17 = 1594398/*func_4725*/;
			break;
		case 19:
			uParam0->f_17 = 1594373/*func_4724*/;
			break;
		case 20:
			uParam0->f_3 = 1594289/*func_4723*/;
			break;
		case 21:
			uParam0->f_3 = 1594225/*func_4722*/;
			break;
		case 74:
			uParam0->f_53 = 1594073/*func_4721*/;
			break;
		case 22:
			uParam0->f_24 = 1593902/*func_4720*/;
			break;
		case 25:
			uParam0->f_23 = 1592852/*func_4715*/;
			break;
		case 30:
			uParam0->f_8 = 1592234/*func_4713*/;
			break;
		case 31:
			uParam0->f_39 = 1591925/*func_4712*/;
			break;
		case 33:
			uParam0->f_40 = 1590986/*func_4710*/;
			break;
		case 34:
			uParam0->f_41 = 1589626/*func_4709*/;
			break;
		case 36:
			uParam0->f_58 = 1589568/*func_4708*/;
			break;
		case 35:
			uParam0->f_42 = 1541632/*func_4705*/;
			break;
		case 45:
			uParam0->f_14 = 1541623/*func_4704*/;
			break;
		case 46:
			uParam0->f_14 = 1541614/*func_4703*/;
			break;
		case 110:
			uParam0->f_57 = 1541606/*func_4702*/;
			break;
		case 77:
			uParam0->f_13 = 1541583/*func_4701*/;
			break;
		case 47:
			uParam0->f_43 = 1541455/*func_4700*/;
			break;
		case 49:
			uParam0->f_8 = 1541414/*func_4699*/;
			break;
		case 50:
			*uParam0 = 1541281/*func_4697*/;
			break;
		case 51:
			*uParam0 = 1541212/*func_4696*/;
			break;
		case 52:
			uParam0->f_15 = 1541201/*func_4695*/;
			break;
		case 53:
			uParam0->f_13 = 1540967/*func_4694*/;
			break;
		case 54:
			uParam0->f_45 = 1540617/*func_4691*/;
			break;
		case 56:
			uParam0->f_46 = 1540608/*func_4690*/;
			break;
		case 57:
			uParam0->f_11 = 1540537/*func_4689*/;
			break;
		case 58:
			uParam0->f_13 = 1540303/*func_4688*/;
			break;
		case 64:
			uParam0->f_47 = 1540103/*func_4686*/;
			break;
		case 65:
			uParam0->f_21 = 1539203/*func_4684*/;
			break;
		case 66:
			uParam0->f_21 = 1538489/*func_4676*/;
			break;
		case 67:
			uParam0->f_21 = 1536227/*func_4657*/;
			break;
		case 68:
			*uParam0 = 1535594/*func_4653*/;
			break;
		case 69:
			*uParam0 = 1535585/*func_4652*/;
			break;
		case 70:
			uParam0->f_48 = 1535573/*func_4651*/;
			break;
		case 71:
			uParam0->f_49 = 1535564/*func_4650*/;
			break;
		case 107:
			uParam0->f_50 = 1535552/*func_4649*/;
			break;
		case 80:
			uParam0->f_7 = 1534859/*func_4643*/;
			break;
		case 84:
			uParam0->f_1 = 1534319/*func_4641*/;
			break;
		case 85:
			uParam0->f_1 = 1530217/*func_4633*/;
			break;
		case 87:
			uParam0->f_1 = 1526230/*func_4621*/;
			break;
		case 88:
			uParam0->f_1 = 1525716/*func_4617*/;
			break;
		case 89:
			uParam0->f_54 = 1525545/*func_4616*/;
			break;
		case 90:
			uParam0->f_1 = 1525373/*func_4613*/;
			break;
		case 91:
			uParam0->f_1 = 1525207/*func_4612*/;
			break;
		case 92:
			uParam0->f_1 = 1523755/*func_4608*/;
			break;
		case 94:
			uParam0->f_1 = 1519617/*func_4597*/;
			break;
		case 95:
			uParam0->f_22 = 1519321/*func_4594*/;
			break;
		case 96:
			uParam0->f_1 = 1519291/*func_4593*/;
			break;
		case 97:
			uParam0->f_1 = 1518625/*func_4590*/;
			break;
		case 98:
			uParam0->f_1 = 1515976/*func_4571*/;
			break;
		case 100:
			uParam0->f_22 = 1507913/*func_4547*/;
			break;
		case 101:
			uParam0->f_22 = 1505979/*func_4538*/;
			break;
		case 78:
			uParam0->f_59 = 1505759/*func_4536*/;
			break;
		case 125:
			uParam0->f_19 = 1505735/*func_4535*/;
			break;
	}
}

int func_4571(int iParam0, int* iParam1)//Position - 0x1721C8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_7__::func_211(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_2805(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_7__::func_211(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_2805(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_3__::func_223();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_36__::func_822(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_2805(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_4608(int iParam0, int* iParam1)//Position - 0x17402B
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_41__::func_163(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_1821(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (__LIB_39__::func_296(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_2805(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
	return 1;
}

int func_4633(int iParam0, int* iParam1)//Position - 0x175969
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1821(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (__LIB_40__::func_509(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_3__::func_246(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2805(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

int func_4641(int iParam0, var uParam1)//Position - 0x17696F
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!__LIB_41__::func_163(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_1821(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_4676(var uParam0, var uParam1)//Position - 0x1779B9
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (!BitTest(uParam0->f_396, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		MISC::SET_BIT(&(uParam0->f_396), 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if ((!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && __LIB_3__::func_271()) && (!BitTest(Global_1946250.f_4523, 4) || uParam0->f_399 == 1))
	{
		if (!__LIB_0__::func_649(&(uParam0->f_397)))
		{
			if (__LIB_28__::func_424())
			{
				__LIB_0__::func_580(&(uParam0->f_397), 0, 0);
				uParam0->f_399 = 1;
			}
		}
		if (__LIB_0__::func_649(&(uParam0->f_397)))
		{
			if (__LIB_28__::func_424())
			{
				__LIB_0__::func_495(&(uParam0->f_397), 0, 0);
				if (!Global_2787784)
				{
					MISC::SET_BIT(&(Global_1946250.f_4523), 4);
					uParam0->f_399 = 1;
				}
			}
			else if (__LIB_2__::func_47(&(uParam0->f_397), 10000, 0))
			{
				__LIB_0__::func_579(&(uParam0->f_397));
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 0;
			}
			else if (!BitTest(Global_1946250.f_4523, 4))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 1;
			}
		}
	}
	else if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
		uParam0->f_399 = 0;
		__LIB_0__::func_579(&(uParam0->f_397));
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

void func_4691(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x178209
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_700(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = func_3372(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					__LIB_6__::func_958(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_4715(int iParam0, int iParam1)//Position - 0x184E14
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_6__::func_138(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_7__::func_211(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2008(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_7__::func_211(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_2008(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_251(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_251(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4716(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4716(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4716(int iParam0)//Position - 0x1850A4
{
	__LIB_25__::func_251(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4770(var uParam0, int iParam1)//Position - 0x1876BA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1631223/*func_4934*/;
			break;
		case 1:
			uParam0->f_30 = 1631167/*func_4933*/;
			break;
		case 2:
			uParam0->f_31 = 1630898/*func_4932*/;
			break;
		case 3:
			uParam0->f_34 = 1630839/*func_4931*/;
			break;
		case 4:
			uParam0->f_12 = 1630808/*func_4930*/;
			break;
		case 37:
			uParam0->f_18 = 1630692/*func_4929*/;
			break;
		case 38:
			uParam0->f_9 = 1630608/*func_4928*/;
			break;
		case 6:
			uParam0->f_32 = 1630544/*func_4927*/;
			break;
		case 111:
			uParam0->f_35 = 1630521/*func_4926*/;
			break;
		case 11:
			uParam0->f_11 = 1630512/*func_4925*/;
			break;
		case 12:
			uParam0->f_33 = 1630059/*func_4922*/;
			break;
		case 14:
			uParam0->f_11 = 1630050/*func_4921*/;
			break;
		case 109:
			uParam0->f_56 = 1630042/*func_4920*/;
			break;
		case 79:
			*uParam0 = 1630018/*func_4919*/;
			break;
		case 13:
			uParam0->f_2 = 1630009/*func_4918*/;
			break;
		case 15:
			uParam0->f_2 = 1625032/*func_4895*/;
			break;
		case 75:
			uParam0->f_4 = 1625023/*func_4894*/;
			break;
		case 16:
			uParam0->f_5 = 1624839/*func_4893*/;
			break;
		case 108:
			uParam0->f_55 = 1621774/*func_4880*/;
			break;
		case 17:
			uParam0->f_17 = 1621268/*func_4878*/;
			break;
		case 19:
			uParam0->f_17 = 1621243/*func_4877*/;
			break;
		case 20:
			uParam0->f_3 = 1621165/*func_4876*/;
			break;
		case 21:
			uParam0->f_3 = 1621102/*func_4875*/;
			break;
		case 74:
			uParam0->f_53 = 1620887/*func_4873*/;
			break;
		case 22:
			uParam0->f_24 = 1620764/*func_4872*/;
			break;
		case 25:
			uParam0->f_23 = 1619817/*func_4867*/;
			break;
		case 30:
			uParam0->f_8 = 1619253/*func_4865*/;
			break;
		case 31:
			uParam0->f_39 = 1619076/*func_4862*/;
			break;
		case 33:
			uParam0->f_40 = 1617964/*func_4857*/;
			break;
		case 34:
			uParam0->f_41 = 1617270/*func_4855*/;
			break;
		case 36:
			uParam0->f_58 = 1617217/*func_4854*/;
			break;
		case 35:
			uParam0->f_42 = 1616640/*func_4852*/;
			break;
		case 45:
			uParam0->f_14 = 1616631/*func_4851*/;
			break;
		case 46:
			uParam0->f_14 = 1616622/*func_4850*/;
			break;
		case 110:
			uParam0->f_57 = 1616445/*func_4849*/;
			break;
		case 77:
			uParam0->f_13 = 1616434/*func_4848*/;
			break;
		case 47:
			uParam0->f_43 = 1615936/*func_4845*/;
			break;
		case 49:
			uParam0->f_8 = 1615895/*func_4844*/;
			break;
		case 50:
			*uParam0 = 1615886/*func_4843*/;
			break;
		case 51:
			*uParam0 = 1615877/*func_4842*/;
			break;
		case 52:
			uParam0->f_15 = 1615866/*func_4841*/;
			break;
		case 53:
			uParam0->f_13 = 1615855/*func_4840*/;
			break;
		case 54:
			uParam0->f_45 = 1615847/*func_4839*/;
			break;
		case 56:
			uParam0->f_46 = 1615838/*func_4838*/;
			break;
		case 57:
			uParam0->f_11 = 1615829/*func_4837*/;
			break;
		case 58:
			uParam0->f_13 = 1615600/*func_4836*/;
			break;
		case 64:
			uParam0->f_47 = 1609673/*func_4805*/;
			break;
		case 65:
			uParam0->f_21 = 1608059/*func_4796*/;
			break;
		case 66:
			uParam0->f_21 = 1607748/*func_4794*/;
			break;
		case 67:
			uParam0->f_21 = 1607023/*func_4790*/;
			break;
		case 68:
			*uParam0 = 1606478/*func_4789*/;
			break;
		case 69:
			*uParam0 = 1606469/*func_4788*/;
			break;
		case 70:
			uParam0->f_48 = 1606457/*func_4787*/;
			break;
		case 71:
			uParam0->f_49 = 1606448/*func_4786*/;
			break;
		case 107:
			uParam0->f_50 = 1606436/*func_4785*/;
			break;
		case 80:
			uParam0->f_7 = 1604719/*func_4775*/;
			break;
		case 78:
			uParam0->f_59 = 1604269/*func_4772*/;
			break;
		case 125:
			uParam0->f_19 = 1604253/*func_4771*/;
			break;
	}
}

void func_4772(var uParam0, int iParam1, var uParam2)//Position - 0x187AAD
{
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_657(iParam1, 1))
		{
			if (__LIB_0__::func_653(iParam1))
			{
				func_4774();
			}
			__LIB_3__::func_298(iParam1, 0);
		}
	}
}

void func_4774()//Position - 0x187C08
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_378 = -1;
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 31);
	__LIB_34__::func_318(0);
	__LIB_2__::func_519(0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_379 != -1)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_379 = -1;
		__LIB_1__::func_191(35);
	}
}

int func_4775(var uParam0, int iParam1, var uParam2)//Position - 0x187C6F
{
	int iVar0;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_2__::func_174() || __LIB_0__::func_661())
		{
			return 0;
		}
		if (__LIB_2__::func_427(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1957730)
	{
		if (Global_1574632.f_18 != 0 || __LIB_3__::func_928())
		{
			Global_1957730 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
				}
			}
			return 0;
		}
	}
	if (__LIB_24__::func_851())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (__LIB_7__::func_85())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0))
				{
					return 0;
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					return 0;
				}
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0)
				{
					return 0;
				}
				if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
				{
					return 0;
				}
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					return 0;
				}
				if (__LIB_7__::func_554())
				{
					return 0;
				}
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) || __LIB_3__::func_301(PLAYER::PLAYER_ID()))
				{
					if (Global_1957730 == 1)
					{
						if ((((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || __LIB_3__::func_301(PLAYER::PLAYER_ID()))
						{
							__LIB_8__::func_611(1);
							__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), false);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							__LIB_3__::func_300(iVar0, 0);
							__LIB_18__::func_319();
							if (!__LIB_4__::func_106(PLAYER::PLAYER_ID()))
							{
								return 1;
							}
							else
							{
								__LIB_3__::func_299(1);
							}
						}
					}
				}
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
			{
				__LIB_18__::func_319();
				return 1;
			}
		}
	}
	return 0;
}

void func_4790(var uParam0, var uParam1)//Position - 0x18856F
{
	if (PLAYER::PLAYER_ID() == Global_1853190)
	{
		__LIB_34__::func_318(0);
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__::func_404(&(uParam0->f_22.f_94));
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("oppressor2")))
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("deluxo")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
	{
		Global_2815059.f_293 = 0;
	}
	if (__LIB_3__::func_306(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 1) == -1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
					__LIB_3__::func_305(0);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2815059.f_298, false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_2815059.f_298, false);
				__LIB_3__::func_305(0);
			}
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	Global_2787785 = 0;
	MISC::CLEAR_BIT(&(Global_1946250.f_2), 11);
	__LIB_3__::func_304(0);
	__LIB_2__::func_421(0);
	Global_1946250.f_3636 = -1;
	__LIB_3__::func_181(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_4805(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x188FC9
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_4833();
	if ((func_4895(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_32__::func_366(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_490(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4895(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_32__::func_366(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_4823(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_4__::func_106(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_27(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					func_4811(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_4895(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

void func_4811(var uParam0, int iParam1)//Position - 0x1894B7
{
	struct<3> Var0;
	float* fVar1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(uParam0->f_22, 2))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, -7f, 0f) };
				Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, -7.8f, 0f) };
				__LIB_3__::func_318(iParam1, Var0, &fVar1);
				__LIB_3__::func_318(iParam1, Var3, &fVar2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_28__::func_425()), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(__LIB_28__::func_425()), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0.f_0, Var0.f_1, fVar1, Var3.f_0, Var3.f_1, fVar2, 1f, 81, iVar4, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0.f_0, Var0.f_1, fVar1, Var3.f_0, Var3.f_1, fVar2, 2f, 83, iParam1, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar5, &uVar6, &uVar7, &uVar8);
				if (iVar9 == 2)
				{
					if (iVar5 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar9 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

int func_4823(int iParam0)//Position - 0x189BDA
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4895(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_4833()//Position - 0x18A35A
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	bool bVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_4__::func_106(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		bVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (bVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(bVar11))
		{
			return __LIB_4__::func_159(bVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_4836(var uParam0)//Position - 0x18A6F0
{
	int iVar0;
	iVar0 = func_4833();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_4__::func_106(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_4867(int iParam0, int iParam1)//Position - 0x18B769
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_4__::func_981(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_36__::func_861(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_36__::func_861(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_4869(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4868(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_4869(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4868(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4868(int iParam0)//Position - 0x18B9FC
{
	__LIB_36__::func_861(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4869(int iParam0)//Position - 0x18BA2A
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_4833();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_4__::func_106(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_4880(var uParam0, var uParam1, var uParam2)//Position - 0x18BF0E
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_4833();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_32__::func_366(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_366(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_4895(*uParam0) && __LIB_25__::func_490(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_32__::func_366(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_34__::func_318(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_34__::func_318(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_32__::func_366(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_32__::func_366(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_4881(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_4__::func_27(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_4__::func_114(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_366(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4881(int iParam0)//Position - 0x18C636
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_4823(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
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

int func_4895(int iParam0)//Position - 0x18CBC8
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_4833();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_4915(iParam0, iVar0))
	{
		return 1;
	}
	if (func_4914(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4911(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4910(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4905(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4904(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4901(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_4900(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_4899(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_4__::func_157(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_4__::func_160(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_4897())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_4__::func_161(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_4__::func_106(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_4897()//Position - 0x18D2F9
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_4833();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_4898(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4898(int iParam0, var uParam1)//Position - 0x18D351
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_4833();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_4899(int iParam0)//Position - 0x18D3DA
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_4833();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_4898(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_4900(int iParam0, int iParam1)//Position - 0x18D455
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (!__LIB_4__::func_135(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4901(int iParam0, int iParam1)//Position - 0x18D4B0
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_7__::func_864(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_7__::func_864(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4904(int iParam0, int iParam1)//Position - 0x18D742
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (!__LIB_4__::func_107(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4905(int iParam0, int iParam1)//Position - 0x18D79E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4910(int iParam0, int iParam1)//Position - 0x18D92D
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4911(int iParam0, int iParam1)//Position - 0x18DA04
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4914(int iParam0, int iParam1)//Position - 0x18DB66
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_4915(int iParam0, int iParam1)//Position - 0x18DCEC
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_4898(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_4922(int iParam0, int iParam1, var uParam2)//Position - 0x18DF6B
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_4833();
	switch (iParam1)
	{
		case 0:
			func_4898(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_4923(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_4923(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x18E069
{
	int iVar0;
	var uVar1;
	iVar0 = func_4833();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_4935(var uParam0, int iParam1)//Position - 0x18E400
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1683256/*func_5098*/;
			break;
		case 1:
			uParam0->f_30 = 1683176/*func_5097*/;
			break;
		case 2:
			uParam0->f_31 = 1682677/*func_5096*/;
			break;
		case 3:
			uParam0->f_34 = 1682627/*func_5095*/;
			break;
		case 4:
			uParam0->f_12 = 1682540/*func_5094*/;
			break;
		case 5:
			uParam0->f_11 = 1682530/*func_5093*/;
			break;
		case 37:
			uParam0->f_18 = 1682414/*func_5092*/;
			break;
		case 38:
			uParam0->f_9 = 1682292/*func_5091*/;
			break;
		case 6:
			uParam0->f_32 = 1682204/*func_5090*/;
			break;
		case 111:
			uParam0->f_35 = 1682190/*func_5089*/;
			break;
		case 11:
			uParam0->f_11 = 1682181/*func_5088*/;
			break;
		case 12:
			uParam0->f_33 = 1681802/*func_5085*/;
			break;
		case 14:
			uParam0->f_11 = 1681793/*func_5084*/;
			break;
		case 109:
			uParam0->f_56 = 1681785/*func_5083*/;
			break;
		case 79:
			*uParam0 = 1681761/*func_5082*/;
			break;
		case 13:
			uParam0->f_2 = 1681629/*func_5081*/;
			break;
		case 15:
			uParam0->f_2 = 1681347/*func_5079*/;
			break;
		case 75:
			uParam0->f_4 = 1681333/*func_5078*/;
			break;
		case 16:
			uParam0->f_5 = 1680815/*func_5076*/;
			break;
		case 108:
			uParam0->f_55 = 1677191/*func_5064*/;
			break;
		case 17:
			uParam0->f_17 = 1676654/*func_5062*/;
			break;
		case 19:
			uParam0->f_17 = 1676629/*func_5061*/;
			break;
		case 20:
			uParam0->f_3 = 1676545/*func_5060*/;
			break;
		case 21:
			uParam0->f_3 = 1676481/*func_5059*/;
			break;
		case 74:
			uParam0->f_53 = 1676301/*func_5058*/;
			break;
		case 22:
			uParam0->f_24 = 1676154/*func_5057*/;
			break;
		case 25:
			uParam0->f_23 = 1675530/*func_5055*/;
			break;
		case 30:
			uParam0->f_8 = 1675015/*func_5053*/;
			break;
		case 31:
			uParam0->f_39 = 1674732/*func_5052*/;
			break;
		case 33:
			uParam0->f_40 = 1674061/*func_5050*/;
			break;
		case 34:
			uParam0->f_41 = 1672797/*func_5049*/;
			break;
		case 36:
			uParam0->f_58 = 1672752/*func_5048*/;
			break;
		case 35:
			uParam0->f_42 = 1647033/*func_5042*/;
			break;
		case 45:
			uParam0->f_14 = 1647024/*func_5041*/;
			break;
		case 46:
			uParam0->f_14 = 1647015/*func_5040*/;
			break;
		case 110:
			uParam0->f_57 = 1647007/*func_5039*/;
			break;
		case 77:
			uParam0->f_13 = 1646984/*func_5038*/;
			break;
		case 47:
			uParam0->f_43 = 1646880/*func_5037*/;
			break;
		case 49:
			uParam0->f_8 = 1646839/*func_5036*/;
			break;
		case 50:
			*uParam0 = 1646706/*func_5034*/;
			break;
		case 51:
			*uParam0 = 1646637/*func_5033*/;
			break;
		case 52:
			uParam0->f_15 = 1646626/*func_5032*/;
			break;
		case 53:
			uParam0->f_13 = 1646488/*func_5031*/;
			break;
		case 54:
			uParam0->f_45 = 1646300/*func_5030*/;
			break;
		case 56:
			uParam0->f_46 = 1646291/*func_5029*/;
			break;
		case 57:
			uParam0->f_11 = 1646114/*func_5027*/;
			break;
		case 58:
			uParam0->f_13 = 1645976/*func_5026*/;
			break;
		case 64:
			uParam0->f_47 = 1645968/*func_5025*/;
			break;
		case 65:
			uParam0->f_21 = 1645132/*func_5023*/;
			break;
		case 66:
			uParam0->f_21 = 1645025/*func_5022*/;
			break;
		case 67:
			uParam0->f_21 = 1644961/*func_5021*/;
			break;
		case 68:
			*uParam0 = 1644473/*func_5020*/;
			break;
		case 69:
			*uParam0 = 1644464/*func_5019*/;
			break;
		case 70:
			uParam0->f_48 = 1644452/*func_5018*/;
			break;
		case 71:
			uParam0->f_49 = 1644443/*func_5017*/;
			break;
		case 107:
			uParam0->f_50 = 1644431/*func_5016*/;
			break;
		case 80:
			uParam0->f_7 = 1643728/*func_5012*/;
			break;
		case 84:
			uParam0->f_1 = 1643628/*func_5010*/;
			break;
		case 85:
			uParam0->f_1 = 1641644/*func_5007*/;
			break;
		case 87:
			uParam0->f_1 = 1639221/*func_4995*/;
			break;
		case 88:
			uParam0->f_1 = 1639212/*func_4994*/;
			break;
		case 96:
			uParam0->f_1 = 1639149/*func_4993*/;
			break;
		case 97:
			uParam0->f_1 = 1638829/*func_4990*/;
			break;
		case 98:
			uParam0->f_1 = 1634819/*func_4956*/;
			break;
		case 100:
			uParam0->f_22 = 1632600/*func_4939*/;
			break;
		case 78:
			uParam0->f_59 = 1632396/*func_4937*/;
			break;
		case 125:
			uParam0->f_19 = 1632380/*func_4936*/;
			break;
	}
}

void func_4939(int iParam0, int* iParam1)//Position - 0x18E958
{
	if (__LIB_2__::func_413(&(Global_1946250.f_4073), 0))
	{
		if (!BitTest(iParam1->f_188, 0))
		{
			__LIB_7__::func_449(iParam1, 1);
			__LIB_3__::func_362(&(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]));
			__LIB_7__::func_364(&(iParam1->f_109), 1);
			__LIB_24__::func_925(&(iParam1->f_109.f_1[0]), iParam0, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_109, false, false);
			__LIB_3__::func_356(0);
			MISC::SET_BIT(&(iParam1->f_188), 0);
		}
		if (Global_1946250.f_4073.f_375 >= 50 && !BitTest(iParam1->f_188, 2))
		{
			__LIB_3__::func_355(&(iParam1->f_109.f_1[0]));
			MISC::SET_BIT(&(iParam1->f_188), 2);
		}
	}
}

int func_4956(int iParam0, int* iParam1)//Position - 0x18F203
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_1821(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_31__::func_964(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_4995(int iParam0, int* iParam1)//Position - 0x190335
{
	struct<3> Var0;
	Var0 = { __LIB_3__::func_936(iParam0) };
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var0, 5000f);
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_3__::func_389(&(iParam1->f_109.f_1));
	if (Global_1946250.f_3638.f_377 >= 5500 && iParam1->f_183[1] < 1f)
	{
		iParam1->f_183[1] = 1f;
	}
	if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
	{
		if (!BitTest(iParam1->f_188, 0))
		{
			__LIB_7__::func_449(iParam1, 1);
			__LIB_3__::func_362(&(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]));
			if (BitTest(iParam1->f_188, 1))
			{
				__LIB_7__::func_364(&(iParam1->f_109), 1);
				__LIB_24__::func_925(&(iParam1->f_109.f_1[0]), iParam0, 0, 1);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_140[0], false))
				{
					PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				}
				__LIB_24__::func_925(&(iParam1->f_140[0]), iParam0, 0, 1);
			}
			__LIB_3__::func_938(iParam0, 1);
			__LIB_7__::func_570(iParam0, 1);
			STREAMING::SET_FOCUS_POS_AND_VEL(Var0, 0f, 0f, 0f);
			MISC::SET_BIT(&(iParam1->f_188), 0);
		}
		if (Global_1946250.f_3638.f_375 >= 300 && !BitTest(iParam1->f_188, 9))
		{
			MISC::SET_BIT(&(iParam1->f_188), 9);
		}
		if (Global_1946250.f_3638.f_375 >= 3500 && !BitTest(iParam1->f_188, 2))
		{
			if (BitTest(iParam1->f_188, 1))
			{
				__LIB_7__::func_667(iParam0, &(iParam1->f_109.f_1[0]), 0);
			}
			else
			{
				__LIB_7__::func_667(iParam0, &(iParam1->f_140[0]), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_109, false))
			{
				VEHICLE::SET_VEHICLE_MAX_SPEED(iParam1->f_109, 0.3f);
			}
			MISC::SET_BIT(&(iParam1->f_188), 2);
		}
	}
	else if (__LIB_2__::func_413(&(Global_1946250.f_3638), 1))
	{
		if (!BitTest(iParam1->f_188, 4))
		{
			__LIB_7__::func_570(iParam0, 0);
			__LIB_3__::func_385(&(iParam1->f_176[1]), &(iParam1->f_176[2]));
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_176[3], false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[3], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_109, false))
			{
				VEHICLE::SET_VEHICLE_MAX_SPEED(iParam1->f_109, 2f);
			}
			MISC::SET_BIT(&(iParam1->f_188), 4);
		}
	}
	if (BitTest(iParam1->f_188, 9))
	{
		__LIB_3__::func_384(iParam1->f_183[1], &(iParam1->f_188), 7, 8);
		__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_183[1]));
	}
	if ((((Global_1946250.f_3638.f_386 && Global_1946250.f_3638.f_372 > 0) && Global_1946250.f_3638.f_382 == (Global_1946250.f_3638.f_372 - 1)) && (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/] - Global_1946250.f_3638.f_375) <= 400) || !Global_1946250.f_3638.f_386)
	{
		if ((MISC::GET_FRAME_COUNT() % 60) == 0)
		{
		}
		VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(1);
		return 1;
	}
	return 0;
}

int func_5007(int iParam0, int* iParam1)//Position - 0x190CAC
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_1821(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			__LIB_40__::func_509(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_2805(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_31__::func_964(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_5055(int iParam0, int iParam1)//Position - 0x19910A
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_4__::func_984(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2008(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_2008(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_257(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_257(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5056(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5056(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5056(int iParam0)//Position - 0x19934C
{
	__LIB_25__::func_257(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5099(var uParam0, int iParam1)//Position - 0x19AF41
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1691878/*func_5161*/;
			break;
		case 1:
			uParam0->f_30 = 1691822/*func_5160*/;
			break;
		case 2:
			uParam0->f_31 = 1691603/*func_5159*/;
			break;
		case 3:
			uParam0->f_34 = 1691552/*func_5158*/;
			break;
		case 4:
			uParam0->f_12 = 1691518/*func_5157*/;
			break;
		case 6:
			uParam0->f_32 = 1691454/*func_5156*/;
			break;
		case 111:
			uParam0->f_35 = 1691445/*func_5155*/;
			break;
		case 79:
			*uParam0 = 1691421/*func_5154*/;
			break;
		case 11:
			uParam0->f_11 = 1691412/*func_5153*/;
			break;
		case 12:
			uParam0->f_33 = 1691320/*func_5152*/;
			break;
		case 14:
			uParam0->f_11 = 1691311/*func_5151*/;
			break;
		case 109:
			uParam0->f_56 = 1691303/*func_5150*/;
			break;
		case 15:
			uParam0->f_2 = 1691051/*func_5149*/;
			break;
		case 13:
			uParam0->f_2 = 1691042/*func_5148*/;
			break;
		case 75:
			uParam0->f_4 = 1691033/*func_5147*/;
			break;
		case 16:
			uParam0->f_5 = 1691024/*func_5146*/;
			break;
		case 108:
			uParam0->f_55 = 1691015/*func_5145*/;
			break;
		case 17:
			uParam0->f_17 = 1690971/*func_5144*/;
			break;
		case 19:
			uParam0->f_17 = 1690961/*func_5143*/;
			break;
		case 20:
			uParam0->f_3 = 1690914/*func_5142*/;
			break;
		case 21:
			uParam0->f_3 = 1690862/*func_5141*/;
			break;
		case 74:
			uParam0->f_53 = 1690806/*func_5140*/;
			break;
		case 22:
			uParam0->f_24 = 1690721/*func_5139*/;
			break;
		case 25:
			uParam0->f_23 = 1689754/*func_5134*/;
			break;
		case 30:
			uParam0->f_8 = 1689544/*func_5133*/;
			break;
		case 31:
			uParam0->f_39 = 1689514/*func_5132*/;
			break;
		case 33:
			uParam0->f_40 = 1689324/*func_5131*/;
			break;
		case 34:
			uParam0->f_41 = 1686117/*func_5129*/;
			break;
		case 36:
			uParam0->f_58 = 1686064/*func_5128*/;
			break;
		case 35:
			uParam0->f_42 = 1684873/*func_5126*/;
			break;
		case 45:
			uParam0->f_14 = 1684864/*func_5125*/;
			break;
		case 46:
			uParam0->f_14 = 1684855/*func_5124*/;
			break;
		case 110:
			uParam0->f_57 = 1684847/*func_5123*/;
			break;
		case 77:
			uParam0->f_13 = 1684836/*func_5122*/;
			break;
		case 47:
			uParam0->f_43 = 1684733/*func_5121*/;
			break;
		case 49:
			uParam0->f_8 = 1684708/*func_5120*/;
			break;
		case 50:
			*uParam0 = 1684670/*func_5119*/;
			break;
		case 51:
			*uParam0 = 1684661/*func_5118*/;
			break;
		case 52:
			uParam0->f_15 = 1684650/*func_5117*/;
			break;
		case 53:
			uParam0->f_13 = 1684569/*func_5116*/;
			break;
		case 54:
			uParam0->f_45 = 1684561/*func_5115*/;
			break;
		case 56:
			uParam0->f_46 = 1684552/*func_5114*/;
			break;
		case 57:
			uParam0->f_11 = 1684542/*func_5113*/;
			break;
		case 58:
			uParam0->f_13 = 1684335/*func_5112*/;
			break;
		case 64:
			uParam0->f_47 = 1684327/*func_5111*/;
			break;
		case 65:
			uParam0->f_21 = 1684319/*func_5110*/;
			break;
		case 66:
			uParam0->f_21 = 1684311/*func_5109*/;
			break;
		case 67:
			uParam0->f_21 = 1684303/*func_5108*/;
			break;
		case 68:
			*uParam0 = 1684294/*func_5107*/;
			break;
		case 69:
			*uParam0 = 1684285/*func_5106*/;
			break;
		case 70:
			uParam0->f_48 = 1684273/*func_5105*/;
			break;
		case 71:
			uParam0->f_49 = 1684264/*func_5104*/;
			break;
		case 107:
			uParam0->f_50 = 1684252/*func_5103*/;
			break;
		case 80:
			uParam0->f_7 = 1684243/*func_5102*/;
			break;
		case 73:
			uParam0->f_51 = 1684234/*func_5101*/;
			break;
		case 78:
			uParam0->f_59 = 1684226/*func_5100*/;
			break;
	}
}

void func_5131(int iParam0, int iParam1)//Position - 0x19C6EC
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	bVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
		Global_1853185 = bVar0;
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
	}
	else if (PLAYER::PLAYER_ID() == __LIB_28__::func_423() || PLAYER::PLAYER_ID() == __LIB_2__::func_191(PLAYER::PLAYER_ID()))
	{
		Global_1853185 = PLAYER::PLAYER_ID();
		MISC::SET_BIT(&(Global_1946250.f_506), 0);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
	}
	__LIB_7__::func_802();
}

void func_5134(int iParam0, int iParam1)//Position - 0x19C89A
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (func_5142(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						func_5131(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_5131(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5135(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5135(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5135(int iParam0)//Position - 0x19CB17
{
	func_5131(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_5142(int iParam0, var uParam1)//Position - 0x19CD22
{
	if (PLAYER::PLAYER_ID() == __LIB_28__::func_423())
	{
		if (Global_1946250.f_3280 == -1)
		{
			if (BitTest(Global_1946250.f_506, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_5162(var uParam0, int iParam1)//Position - 0x19D0EF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1769795/*func_5315*/;
			break;
		case 1:
			uParam0->f_30 = 1769739/*func_5314*/;
			break;
		case 2:
			uParam0->f_31 = 1768192/*func_5313*/;
			break;
		case 3:
			uParam0->f_34 = 1768143/*func_5312*/;
			break;
		case 4:
			uParam0->f_12 = 1768109/*func_5311*/;
			break;
		case 6:
			uParam0->f_32 = 1768045/*func_5310*/;
			break;
		case 111:
			uParam0->f_35 = 1768022/*func_5309*/;
			break;
		case 79:
			*uParam0 = 1767998/*func_5308*/;
			break;
		case 37:
			uParam0->f_18 = 1767882/*func_5307*/;
			break;
		case 38:
			uParam0->f_9 = 1767815/*func_5306*/;
			break;
		case 11:
			uParam0->f_11 = 1767806/*func_5305*/;
			break;
		case 12:
			uParam0->f_33 = 1767461/*func_5303*/;
			break;
		case 14:
			uParam0->f_11 = 1767452/*func_5302*/;
			break;
		case 109:
			uParam0->f_56 = 1767444/*func_5301*/;
			break;
		case 15:
			uParam0->f_2 = 1762118/*func_5279*/;
			break;
		case 13:
			uParam0->f_2 = 1762109/*func_5278*/;
			break;
		case 75:
			uParam0->f_4 = 1762100/*func_5277*/;
			break;
		case 16:
			uParam0->f_5 = 1762075/*func_5276*/;
			break;
		case 108:
			uParam0->f_55 = 1755545/*func_5261*/;
			break;
		case 17:
			uParam0->f_17 = 1754963/*func_5260*/;
			break;
		case 19:
			uParam0->f_17 = 1754938/*func_5259*/;
			break;
		case 20:
			uParam0->f_3 = 1754877/*func_5258*/;
			break;
		case 21:
			uParam0->f_3 = 1754757/*func_5257*/;
			break;
		case 74:
			uParam0->f_53 = 1754701/*func_5256*/;
			break;
		case 22:
			uParam0->f_24 = 1754616/*func_5255*/;
			break;
		case 25:
			uParam0->f_23 = 1753644/*func_5250*/;
			break;
		case 30:
			uParam0->f_8 = 1752902/*func_5249*/;
			break;
		case 31:
			uParam0->f_39 = 1752633/*func_5248*/;
			break;
		case 33:
			uParam0->f_40 = 1751722/*func_5246*/;
			break;
		case 34:
			uParam0->f_41 = 1748378/*func_5245*/;
			break;
		case 36:
			uParam0->f_58 = 1748325/*func_5244*/;
			break;
		case 35:
			uParam0->f_42 = 1747642/*func_5242*/;
			break;
		case 45:
			uParam0->f_14 = 1747633/*func_5241*/;
			break;
		case 46:
			uParam0->f_14 = 1747624/*func_5240*/;
			break;
		case 110:
			uParam0->f_57 = 1747181/*func_5239*/;
			break;
		case 77:
			uParam0->f_13 = 1747170/*func_5238*/;
			break;
		case 47:
			uParam0->f_43 = 1747067/*func_5237*/;
			break;
		case 49:
			uParam0->f_8 = 1747042/*func_5236*/;
			break;
		case 50:
			*uParam0 = 1747004/*func_5235*/;
			break;
		case 51:
			*uParam0 = 1746980/*func_5234*/;
			break;
		case 52:
			uParam0->f_15 = 1746969/*func_5233*/;
			break;
		case 53:
			uParam0->f_13 = 1746890/*func_5232*/;
			break;
		case 54:
			uParam0->f_45 = 1746882/*func_5231*/;
			break;
		case 56:
			uParam0->f_46 = 1746873/*func_5230*/;
			break;
		case 57:
			uParam0->f_11 = 1746863/*func_5229*/;
			break;
		case 58:
			uParam0->f_13 = 1746634/*func_5228*/;
			break;
		case 64:
			uParam0->f_47 = 1700007/*func_5197*/;
			break;
		case 65:
			uParam0->f_21 = 1698869/*func_5194*/;
			break;
		case 66:
			uParam0->f_21 = 1698646/*func_5192*/;
			break;
		case 67:
			uParam0->f_21 = 1697751/*func_5188*/;
			break;
		case 68:
			*uParam0 = 1697206/*func_5187*/;
			break;
		case 69:
			*uParam0 = 1697197/*func_5186*/;
			break;
		case 70:
			uParam0->f_48 = 1697185/*func_5185*/;
			break;
		case 71:
			uParam0->f_49 = 1697176/*func_5184*/;
			break;
		case 107:
			uParam0->f_50 = 1697164/*func_5183*/;
			break;
		case 80:
			uParam0->f_7 = 1695105/*func_5175*/;
			break;
		case 73:
			uParam0->f_51 = 1693351/*func_5168*/;
			break;
		case 78:
			uParam0->f_59 = 1692882/*func_5163*/;
			break;
	}
}

void func_5163(var uParam0, int iParam1, var uParam2)//Position - 0x19D4D2
{
	int iVar0;
	if (!__LIB_3__::func_427())
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (__LIB_18__::func_179(iParam1, 0))
			{
				__LIB_3__::func_298(iParam1, 0);
				__LIB_3__::func_426();
				__LIB_3__::func_425(0);
			}
			else if (__LIB_0__::func_657(iParam1, 1))
			{
				if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
				{
					iVar0 = -1;
					__LIB_1__::func_327(156, &iVar0, 1);
					__LIB_3__::func_298(iParam1, 0);
					if (iVar0 >= 0)
					{
						__LIB_34__::func_318(0);
						func_4774();
						MISC::SET_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 0);
						__LIB_2__::func_341(iVar0);
						__LIB_7__::func_356(1);
					}
				}
				else if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
				{
					__LIB_3__::func_298(iParam1, 0);
					func_4774();
					__LIB_7__::func_356(1);
				}
			}
		}
	}
}

int func_5175(var uParam0, int iParam1, var uParam2)//Position - 0x19DD81
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_2__::func_174() || __LIB_0__::func_661())
		{
			return 0;
		}
		if (__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1957730)
	{
		if (Global_1574632.f_18 != 0 || __LIB_3__::func_928())
		{
			Global_1957730 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
				}
			}
			return 0;
		}
	}
	if (__LIB_24__::func_851())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (__LIB_7__::func_85())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (Global_1853185 != __LIB_0__::func_160())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0))
				{
					return 0;
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					return 0;
				}
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0)
				{
					return 0;
				}
				if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
				{
					return 0;
				}
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					return 0;
				}
				if (__LIB_7__::func_554())
				{
					return 0;
				}
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) && Global_1957730 == 1)
				{
					if (((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
					{
						__LIB_8__::func_611(1);
						__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
						__LIB_2__::func_519(0);
						__LIB_3__::func_438(0);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), false);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						__LIB_3__::func_300(iVar0, 0);
						if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
						{
							if (__LIB_18__::func_179(iVar0, 0))
							{
								__LIB_3__::func_425(1);
							}
							else
							{
								if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_153() != -1)
									{
										if (Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_3__::func_437(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar1 = -1;
									__LIB_1__::func_327(156, &iVar1, 1);
									if (iVar1 >= 0)
									{
										__LIB_2__::func_341(iVar1);
									}
								}
								__LIB_3__::func_944(750);
								__LIB_34__::func_318(1);
							}
						}
						if (!__LIB_1__::func_251(Global_1853185))
						{
							if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_18__::func_179(iVar0, 0))
							{
								if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_153() != -1)
									{
										if (Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_3__::func_437(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar2 = -1;
									__LIB_1__::func_327(156, &iVar2, 1);
									if (iVar2 >= 0)
									{
										__LIB_2__::func_341(iVar2);
									}
								}
								__LIB_3__::func_944(750);
								__LIB_34__::func_318(1);
							}
							__LIB_18__::func_319();
							return 1;
						}
						else if (__LIB_3__::func_436(PLAYER::PLAYER_ID()) && __LIB_1__::func_251(Global_1853185))
						{
							__LIB_18__::func_319();
							return 1;
						}
						else if (!__LIB_0__::func_333(PLAYER::PLAYER_ID()))
						{
							bLocal_123 = true;
						}
						else
						{
							__LIB_3__::func_435(0);
							__LIB_3__::func_434(1);
						}
					}
				}
				if (bLocal_123)
				{
					__LIB_8__::func_611(1);
					if (__LIB_18__::func_179(iVar0, 0))
					{
						__LIB_3__::func_335(PLAYER::PLAYER_ID(), __LIB_3__::func_349(PLAYER::PLAYER_ID()), 1);
						__LIB_3__::func_425(1);
					}
					else
					{
						if (__LIB_0__::func_153() != -1)
						{
							if (Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
							{
								__LIB_3__::func_437(1, 0, 1, 0, 0, 0, 0);
							}
						}
						iVar3 = -1;
						__LIB_1__::func_327(156, &iVar3, 1);
						__LIB_3__::func_300(iVar0, 0);
						if (iVar3 >= 0)
						{
							MISC::SET_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 0);
							__LIB_2__::func_341(iVar3);
							if (__LIB_1__::func_251(PLAYER::PLAYER_ID()))
							{
								__LIB_2__::func_385(0);
								__LIB_7__::func_356(1);
							}
							else
							{
								__LIB_3__::func_944(750);
							}
							__LIB_4__::func_692(PLAYER::PLAYER_ID(), __LIB_3__::func_349(PLAYER::PLAYER_ID()), 1);
							__LIB_34__::func_318(1);
						}
					}
					__LIB_3__::func_434(1);
					__LIB_3__::func_435(0);
				}
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
			{
				__LIB_18__::func_319();
				return 1;
			}
		}
	}
	return 0;
}

void func_5197(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x19F0A7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_8__::func_97();
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_3__::func_455())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_454(0);
			}
		}
		if (__LIB_3__::func_942(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_5224(uParam0);
		}
		if (__LIB_3__::func_317(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_3__::func_316(0);
						Global_1946250.f_3630 = 0;
						__LIB_3__::func_453(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_3__::func_444(iParam1);
						__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_3__::func_321(1);
						__LIB_3__::func_452(0);
						__LIB_3__::func_309(0);
					}
					else
					{
						__LIB_32__::func_328(iParam1);
					}
				}
			}
		}
		if (__LIB_3__::func_432() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_251(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_3__::func_449(PLAYER::PLAYER_ID()) || __LIB_3__::func_76(PLAYER::PLAYER_ID())) || __LIB_2__::func_746()) || __LIB_3__::func_455()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_317(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_264(bVar2, 1, 1))
					{
						if (__LIB_2__::func_427(bVar2))
						{
							if (__LIB_4__::func_2(bVar2) == 81)
							{
								if (func_5279(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_3__::func_316(0);
									__LIB_3__::func_448(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_3__::func_444(iParam1);
									__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_3__::func_321(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_3__::func_449(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((func_5279(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_28__::func_425()) && !__LIB_1__::func_251(PLAYER::PLAYER_ID())) || !__LIB_4__::func_715())
	{
		if (!__LIB_0__::func_618())
		{
			__LIB_32__::func_367(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && func_5207(iParam1)) && !__LIB_1__::func_251(__LIB_28__::func_425())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_945(0);
				__LIB_3__::func_321(1);
			}
			__LIB_7__::func_375(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_3__::func_309(0);
			__LIB_3__::func_453(0);
			__LIB_3__::func_447(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_3__::func_444(iParam1);
			__LIB_3__::func_448(0);
			__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_452(0);
		}
		else
		{
			__LIB_32__::func_328(iParam1);
		}
	}
	if (__LIB_18__::func_638(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_5199(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_5279(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_28__::func_425())
		{
			__LIB_32__::func_367(uParam0, 1);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_7__::func_297(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_3__::func_445())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_2__::func_731(PLAYER::PLAYER_ID()) || __LIB_3__::func_317(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_5199(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x19F5F0
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_4__::func_394(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_3__::func_327())
	{
		return 0;
	}
	if (__LIB_0__::func_190())
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (!__LIB_2__::func_739())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_4__::func_37())
		{
			return 0;
		}
		bVar2 = __LIB_3__::func_416(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_333(PLAYER::PLAYER_ID());
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_40__::func_233(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_3__::func_446(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_3__::func_87(PLAYER::PLAYER_ID()) || __LIB_3__::func_86(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_28__::func_425() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_104(iParam1, 1) && !__LIB_18__::func_179(iParam1, 0)) && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_18__::func_179(iParam1, 0)) && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_18__::func_179(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_657(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_3__::func_416(PLAYER::PLAYER_ID())) && __LIB_6__::func_132(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_327(156, &iVar4, 1);
		__LIB_1__::func_252(__LIB_1__::func_165(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_104(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_2__::func_342(iParam1, 0) || __LIB_2__::func_342(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_5207(int iParam0)//Position - 0x19FC5F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_5279(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_4__::func_715())
			{
				return 1;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 1;
			}
			if (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if ((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_5224(var uParam0)//Position - 0x1AA4B2
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	float* fVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = __LIB_8__::func_97();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(uParam0->f_22, 2))
			{
				Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -7.9f, 0f) };
				Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -8.5f, 0f) };
				__LIB_3__::func_318(iVar0, Var1, &fVar2);
				__LIB_3__::func_318(iVar0, Var4, &fVar3);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_28__::func_425()), false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(__LIB_28__::func_425()), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, false))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1.f_0, Var1.f_1, fVar2, Var4.f_0, Var4.f_1, fVar3, 1f, 81, iVar5, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1.f_0, Var1.f_1, fVar2, Var4.f_0, Var4.f_1, fVar3, 2f, 83, iVar0, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar6, &uVar7, &uVar8, &uVar9);
				if (iVar10 == 2)
				{
					if (iVar6 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar10 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

void func_5239(var uParam0)//Position - 0x1AA8ED
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (BitTest(uParam0->f_22, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_256, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_256, false);
				if (uParam0->f_22.f_255 != 0 && uParam0->f_22.f_255 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_256))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_256, uParam0->f_22.f_255);
				}
				__LIB_32__::func_367(uParam0, 1);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			}
		}
		else
		{
			__LIB_32__::func_367(uParam0, 1);
		}
		__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if ((((func_5207(__LIB_4__::func_2(bVar2)) || !__LIB_4__::func_31()) || !__LIB_4__::func_715()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
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

void func_5246(int iParam0, int iParam1)//Position - 0x1ABAAA
{
	bool bVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	bVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (((__LIB_3__::func_432() && Global_1853186 != __LIB_0__::func_160()) && Global_1853186 != PLAYER::PLAYER_ID()) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 1);
				Global_1853185 = Global_1853186;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_4__::func_114(Global_1853186);
				}
				Global_1853185 = Global_1853186;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_702(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_702(bVar0, 0);
		if (bVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bVar0;
		}
	}
	else if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_702(bVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
		Global_1853185 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if ((__LIB_3__::func_457(PLAYER::PLAYER_ID()) && (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) && PLAYER::PLAYER_ID() == __LIB_28__::func_425())
	{
		Global_1853185 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_3__::func_335(PLAYER::PLAYER_ID(), 81, 2);
			}
			else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_692(PLAYER::PLAYER_ID(), 81, 2);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		MISC::SET_BIT(&(Global_1946250.f_506), 0);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853185;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_251(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			Global_1946250.f_3635 = __LIB_3__::func_349(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
		}
	}
	__LIB_7__::func_802();
}

void func_5250(int iParam0, int iParam1)//Position - 0x1AC22C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (func_5258(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_701(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_5246(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_5246(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_237(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5251(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_237(1);
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_5251(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5251(int iParam0)//Position - 0x1AC4BF
{
	func_5246(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_5258(int iParam0, var uParam1)//Position - 0x1AC6FD
{
	if (PLAYER::PLAYER_ID() == __LIB_28__::func_425())
	{
		if (Global_1946250.f_3280 == -1)
		{
			if (__LIB_3__::func_457(PLAYER::PLAYER_ID()) || BitTest(Global_1946250.f_506, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_5260(var uParam0, var uParam1, var uParam2)//Position - 0x1AC753
{
	int iVar0;
	bool bVar1;
	if (__LIB_7__::func_373())
	{
		return "SI_ENTR_BLCK4A" /* GXT: You cannot enter the Mobile Operations Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_288())
	{
		return "";
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == __LIB_28__::func_425())
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__::func_656(iVar0, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("caddy3")))
		{
			if (!__LIB_3__::func_416(PLAYER::PLAYER_ID()) && !__LIB_0__::func_333(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_657(iVar0, 1))
				{
					return "GR_TRUCK_STOR_P" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else if (__LIB_25__::func_382(iVar0))
				{
					return "GR_TRUCK_MOD_P" /* GXT: You do not currently own the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
				else
				{
					return "GR_TRUCK_BUY_A" /* GXT: You do not currently own the Mobile Operations Center Personal Vehicle Storage bay or the Mobile Operations Center Weapon & Vehicle Workshop bay. Purchase one at www.warstock-cache-and-carry.com. */;
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = __LIB_0__::func_582();
			if (__LIB_18__::func_604(PLAYER::PLAYER_ID(), 0))
			{
				return "MP_TRUCK_KICKd" /* GXT: You no longer have access to the Mobile Operations Center as you became a Prospect. */;
			}
			else if (bVar1 != __LIB_0__::func_160() && __LIB_2__::func_456(bVar1))
			{
				return "MP_TRUCK_KICKa" /* GXT: You no longer have access to the Mobile Operations Center as you became an Associate. */;
			}
			else
			{
				return "MP_TRUCK_KICKb" /* GXT: You no longer have access to the Mobile Operations Center as you became a Bodyguard. */;
			}
		}
	}
	if (PLAYER::PLAYER_ID() == __LIB_28__::func_425() || __LIB_0__::func_582() == __LIB_28__::func_425())
	{
		if (__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
		{
			return "JUG_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_2__::func_104())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_2__::func_477())
	{
		return "TRUC_MC_BLOCK_P" /* GXT: You cannot enter your Mobile Operations Center with a prostitute. */;
	}
	if (__LIB_2__::func_475())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return "TRUC_MC_BLOCK_E" /* GXT: You cannot enter your Mobile Operations Center while active in a mission. */;
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_MOC" /* GXT: You can't access this Mobile Operations Center whilst carrying Supplies. */;
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "TRUC_MC_BLOCK_V" /* GXT: You cannot enter your Mobile Operations Center while in a mission vehicle. */;
			}
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (BitTest(Global_1946250.f_1, 3))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) || PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) == -1)
			{
				if (PLAYER::PLAYER_ID() != __LIB_28__::func_425())
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
				}
			}
		}
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		return "GR_TRUCK_SUTAR" /* GXT: You are unable to access the Mobile Operations Center in this area. Move the Mobile Operations Center to a suitable area. */;
	}
	return "";
}

int func_5261(var uParam0, var uParam1, var uParam2)//Position - 0x1AC999
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_2__::func_746() || __LIB_3__::func_455())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_28__::func_425() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_97();
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_32__::func_367(uParam1, 1);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_367(uParam1, 1);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_3__::func_87(PLAYER::PLAYER_ID()))
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_18__::func_638(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && func_5199(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_5279(*uParam0)) || ((__LIB_3__::func_445() && !func_5279(*uParam0)) && __LIB_1__::func_251(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_3__::func_345(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
									{
										bVar2 = false;
										if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar1))
										{
											if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
											{
												bVar2 = true;
												HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */, false);
											}
										}
										if (!bVar2)
										{
											HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */, false);
										}
									}
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_3__::func_416(PLAYER::PLAYER_ID()) && __LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && !__LIB_25__::func_382(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && (__LIB_3__::func_463(PLAYER::PLAYER_ID()) || __LIB_3__::func_462(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_312(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_6__::func_404(&(uParam1->f_22.f_94));
							}
							if ((__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_32__::func_367(uParam1, 0);
								if (!__LIB_3__::func_416(PLAYER::PLAYER_ID()) || __LIB_40__::func_230(uParam1, uParam0))
								{
									if (__LIB_19__::func_153(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_7__::func_581(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_7__::func_581(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
										{
											__LIB_3__::func_309(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_4__::func_736(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_7__::func_375(1, 81);
										__LIB_3__::func_310(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_8__::func_611(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_4__::func_41() && __LIB_7__::func_560())
							{
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_453(1);
									__LIB_3__::func_447(1);
								}
								__LIB_7__::func_394(1);
								__LIB_8__::func_240(81, uParam1, 0, 0);
								__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_3__::func_335(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_692(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_3__::func_345(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_32__::func_367(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_32__::func_367(uParam1, 1);
				}
			}
			else
			{
				func_5262(*uParam0);
				if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 10000, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_942(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						__LIB_4__::func_114(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_3__::func_343(1);
						__LIB_7__::func_375(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::func_579(&(uParam1->f_22.f_101));
					}
					if (__LIB_4__::func_735(Global_1946250.f_3630) || __LIB_3__::func_942(Global_1946250.f_3630))
					{
						if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
						{
							__LIB_3__::func_309(1);
							__LIB_3__::func_453(1);
							__LIB_3__::func_447(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_4__::func_2(Global_1946250.f_3630) != 81 && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_32__::func_367(uParam1, 1);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_5262(int iParam0)//Position - 0x1AD3B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_317(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if (func_5207(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
										}
										if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_448(0);
											__LIB_3__::func_316(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_25__::func_112(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_448(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false), true, false);
												NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_452(1);
											__LIB_3__::func_448(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
											__LIB_3__::func_452(0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_316(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if ((((func_5207(iParam0) || !__LIB_4__::func_31()) || !__LIB_4__::func_715()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
										}
										__LIB_3__::func_448(0);
										__LIB_3__::func_316(0);
										__LIB_3__::func_452(0);
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
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

int func_5279(int iParam0)//Position - 0x1AE346
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (!__LIB_37__::func_932(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_8__::func_97();
	iVar2 = __LIB_7__::func_297(iVar1, 1, 0);
	if (__LIB_37__::func_825(bVar0, 7))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar1) && !__LIB_4__::func_394(PLAYER::PLAYER_ID(), 81))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			__LIB_7__::func_433(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if ((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_251(iVar2) && !__LIB_4__::func_972(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_87(iVar2) || __LIB_3__::func_86(iVar2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_28__::func_425())
		{
			return 1;
		}
	}
	if (__LIB_3__::func_85(iVar2))
	{
		return 1;
	}
	__LIB_8__::func_239(iParam0, &Var3);
	if (__LIB_3__::func_949(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_948(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_7__::func_583(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (func_5292(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_396(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_80(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_79(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_78(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_466(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_465(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_232()))
		{
			__LIB_8__::func_239(iParam0, &Var4);
			if (__LIB_0__::func_529(__LIB_1__::func_232(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_6__::func_139())
	{
		return 1;
	}
	if (__LIB_3__::func_76(iVar2))
	{
		return 1;
	}
	if (iVar2 != __LIB_0__::func_160() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 12))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_160())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 20))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_310 && !__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_746())
	{
		return 1;
	}
	__LIB_8__::func_239(iParam0, &Var5);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_1__::func_251(iVar2)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var6.f_2 - Var5.f_2)) > 4f)
		{
			if (__LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_3__::func_75(Var5))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_945())
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_1__::func_396(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_9, 5))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_19__::func_154(iVar1) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		if ((!__LIB_1__::func_251(iVar2) && !__LIB_4__::func_972(PLAYER::PLAYER_ID())) && __LIB_4__::func_510(iVar2))
		{
			if (!BitTest(Global_1946250.f_1, 3))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 5)
		{
		}
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
	}
	return 0;
}

int func_5292(int iParam0, int iParam1, struct<3> Param2)//Position - 0x1AF297
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (!__LIB_4__::func_107(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_28__::func_425())), Param2) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_5316(var uParam0, int iParam1)//Position - 0x1B014C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1805445/*func_5483*/;
			break;
		case 1:
			uParam0->f_30 = 1805329/*func_5482*/;
			break;
		case 2:
			uParam0->f_31 = 1804099/*func_5479*/;
			break;
		case 3:
			uParam0->f_34 = 1804029/*func_5478*/;
			break;
		case 4:
			uParam0->f_12 = 1803855/*func_5477*/;
			break;
		case 6:
			uParam0->f_32 = 1803731/*func_5476*/;
			break;
		case 106:
			uParam0->f_52 = 1803564/*func_5475*/;
			break;
		case 111:
			uParam0->f_35 = 1803550/*func_5474*/;
			break;
		case 79:
			*uParam0 = 1803526/*func_5473*/;
			break;
		case 37:
			uParam0->f_18 = 1803410/*func_5472*/;
			break;
		case 38:
			uParam0->f_9 = 1803210/*func_5470*/;
			break;
		case 11:
			uParam0->f_11 = 1803201/*func_5469*/;
			break;
		case 12:
			uParam0->f_33 = 1801495/*func_5467*/;
			break;
		case 14:
			uParam0->f_11 = 1801486/*func_5466*/;
			break;
		case 109:
			uParam0->f_56 = 1801478/*func_5465*/;
			break;
		case 15:
			uParam0->f_2 = 1800972/*func_5461*/;
			break;
		case 13:
			uParam0->f_2 = 1800933/*func_5460*/;
			break;
		case 44:
			*uParam0 = 1800924/*func_5459*/;
			break;
		case 75:
			uParam0->f_4 = 1800915/*func_5458*/;
			break;
		case 16:
			uParam0->f_5 = 1800492/*func_5454*/;
			break;
		case 108:
			uParam0->f_55 = 1798453/*func_5450*/;
			break;
		case 17:
			uParam0->f_17 = 1796319/*func_5442*/;
			break;
		case 19:
			uParam0->f_17 = 1796294/*func_5441*/;
			break;
		case 20:
			uParam0->f_3 = 1796210/*func_5440*/;
			break;
		case 21:
			uParam0->f_3 = 1796110/*func_5439*/;
			break;
		case 74:
			uParam0->f_53 = 1795943/*func_5438*/;
			break;
		case 22:
			uParam0->f_24 = 1795836/*func_5437*/;
			break;
		case 25:
			uParam0->f_23 = 1795184/*func_5435*/;
			break;
		case 30:
			uParam0->f_8 = 1794684/*func_5432*/;
			break;
		case 31:
			uParam0->f_39 = 1794393/*func_5431*/;
			break;
		case 33:
			uParam0->f_40 = 1793471/*func_5428*/;
			break;
		case 32:
			*uParam0 = 1793367/*func_5427*/;
			break;
		case 34:
			uParam0->f_41 = 1791222/*func_5426*/;
			break;
		case 35:
			uParam0->f_42 = 1705384/*func_5219*/;
			break;
		case 36:
			uParam0->f_58 = 1791162/*func_5425*/;
			break;
		case 45:
			uParam0->f_14 = 1791153/*func_5424*/;
			break;
		case 46:
			uParam0->f_14 = 1791144/*func_5423*/;
			break;
		case 110:
			uParam0->f_57 = 1790878/*func_5422*/;
			break;
		case 77:
			uParam0->f_13 = 1790867/*func_5421*/;
			break;
		case 47:
			uParam0->f_43 = 1790727/*func_5420*/;
			break;
		case 49:
			uParam0->f_8 = 1790686/*func_5419*/;
			break;
		case 50:
			*uParam0 = 1790595/*func_5418*/;
			break;
		case 51:
			*uParam0 = 1790511/*func_5417*/;
			break;
		case 52:
			uParam0->f_15 = 1790500/*func_5416*/;
			break;
		case 53:
			uParam0->f_13 = 1790218/*func_5415*/;
			break;
		case 54:
			uParam0->f_45 = 1790210/*func_5414*/;
			break;
		case 56:
			uParam0->f_46 = 1790201/*func_5413*/;
			break;
		case 57:
			uParam0->f_11 = 1790140/*func_5412*/;
			break;
		case 58:
			uParam0->f_13 = 1789858/*func_5411*/;
			break;
		case 64:
			uParam0->f_47 = 1787943/*func_5402*/;
			break;
		case 65:
			uParam0->f_21 = 1787900/*func_5401*/;
			break;
		case 66:
			uParam0->f_21 = 1787197/*func_5398*/;
			break;
		case 67:
			uParam0->f_21 = 1786113/*func_5390*/;
			break;
		case 68:
			*uParam0 = 1785520/*func_5388*/;
			break;
		case 69:
			*uParam0 = 1785511/*func_5387*/;
			break;
		case 70:
			uParam0->f_48 = 1785499/*func_5386*/;
			break;
		case 71:
			uParam0->f_49 = 1785490/*func_5385*/;
			break;
		case 107:
			uParam0->f_50 = 1785478/*func_5384*/;
			break;
		case 80:
			uParam0->f_7 = 1782802/*func_5372*/;
			break;
		case 84:
			uParam0->f_1 = 1780956/*func_5361*/;
			break;
		case 85:
			uParam0->f_1 = 1778622/*func_5355*/;
			break;
		case 87:
			uParam0->f_1 = 1774398/*func_5334*/;
			break;
		case 88:
			uParam0->f_1 = 1774389/*func_5333*/;
			break;
		case 90:
			uParam0->f_1 = 1774346/*func_5332*/;
			break;
		case 91:
			uParam0->f_1 = 1774045/*func_5330*/;
			break;
		case 92:
			uParam0->f_1 = 1773282/*func_5328*/;
			break;
		case 94:
			uParam0->f_1 = 1771782/*func_5327*/;
			break;
		case 102:
			uParam0->f_1 = 1771216/*func_5321*/;
			break;
		case 103:
			uParam0->f_22 = 1771208/*func_5320*/;
			break;
		case 104:
			uParam0->f_1 = 1771133/*func_5319*/;
			break;
		case 78:
			uParam0->f_59 = 1771059/*func_5318*/;
			break;
		case 125:
			uParam0->f_19 = 1771035/*func_5317*/;
			break;
	}
}

void func_5318(var uParam0, int iParam1, var uParam2)//Position - 0x1B0633
{
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_657(iParam1, 1))
		{
			if (__LIB_0__::func_653(iParam1))
			{
				func_4774();
			}
			__LIB_3__::func_298(iParam1, 0);
		}
		else if (__LIB_18__::func_179(iParam1, 0))
		{
			__LIB_3__::func_426();
			__LIB_3__::func_298(iParam1, 0);
		}
	}
}

int func_5328(var uParam0, var uParam1)//Position - 0x1B0EE2
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_1821(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_2__::func_818(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_5361(int iParam0, var uParam1)//Position - 0x1B2CDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_2805(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_1821(&iVar2, &(uParam1->f_109), 14);
								__LIB_40__::func_509(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_1821(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_1821(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_1821(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							__LIB_40__::func_509(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_2805(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_5435(int iParam0, int iParam1)//Position - 0x1B6470
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_999(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_701(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_2008(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_33__::func_207(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_33__::func_207(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_5436(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_5436(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_5436(int iParam0)//Position - 0x1B66CE
{
	__LIB_33__::func_207(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_5484(var uParam0, int iParam1)//Position - 0x1B8C8E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1845751/*func_5556*/;
			break;
		case 1:
			uParam0->f_30 = 1845099/*func_5553*/;
			break;
		case 2:
			uParam0->f_31 = 1845036/*func_5551*/;
			break;
		case 3:
			uParam0->f_34 = 1844980/*func_5550*/;
			break;
		case 4:
			uParam0->f_12 = 1844266/*func_5549*/;
			break;
		case 6:
			uParam0->f_32 = 1844258/*func_5548*/;
			break;
		case 111:
			uParam0->f_35 = 1844249/*func_5547*/;
			break;
		case 79:
			*uParam0 = 1844225/*func_5546*/;
			break;
		case 11:
			uParam0->f_11 = 1844216/*func_5545*/;
			break;
		case 12:
			uParam0->f_33 = 1842388/*func_5542*/;
			break;
		case 14:
			uParam0->f_11 = 1842379/*func_5541*/;
			break;
		case 109:
			uParam0->f_56 = 1842371/*func_5540*/;
			break;
		case 13:
			uParam0->f_2 = 1842362/*func_5539*/;
			break;
		case 15:
			uParam0->f_2 = 1842353/*func_5538*/;
			break;
		case 75:
			uParam0->f_4 = 1842344/*func_5537*/;
			break;
		case 16:
			uParam0->f_5 = 1842335/*func_5536*/;
			break;
		case 108:
			uParam0->f_55 = 1842326/*func_5535*/;
			break;
		case 17:
			uParam0->f_17 = 1842301/*func_5534*/;
			break;
		case 19:
			uParam0->f_17 = 1842291/*func_5533*/;
			break;
		case 20:
			uParam0->f_3 = 1842282/*func_5532*/;
			break;
		case 21:
			uParam0->f_3 = 1842273/*func_5531*/;
			break;
		case 74:
			uParam0->f_53 = 1842264/*func_5530*/;
			break;
		case 22:
			uParam0->f_24 = 1842256/*func_5529*/;
			break;
		case 25:
			uParam0->f_23 = 1842248/*func_5528*/;
			break;
		case 30:
			uParam0->f_8 = 1841118/*func_5527*/;
			break;
		case 31:
			uParam0->f_39 = 1841108/*func_5526*/;
			break;
		case 33:
			uParam0->f_40 = 1841080/*func_5525*/;
			break;
		case 34:
			uParam0->f_41 = 1841071/*func_5524*/;
			break;
		case 36:
			uParam0->f_58 = 1841026/*func_5523*/;
			break;
		case 35:
			uParam0->f_42 = 1807317/*func_5520*/;
			break;
		case 45:
			uParam0->f_14 = 1807308/*func_5519*/;
			break;
		case 46:
			uParam0->f_14 = 1807299/*func_5518*/;
			break;
		case 110:
			uParam0->f_57 = 1807291/*func_5517*/;
			break;
		case 77:
			uParam0->f_13 = 1807280/*func_5516*/;
			break;
		case 47:
			uParam0->f_43 = 1807272/*func_5515*/;
			break;
		case 49:
			uParam0->f_8 = 1807263/*func_5514*/;
			break;
		case 50:
			*uParam0 = 1806964/*func_5508*/;
			break;
		case 51:
			*uParam0 = 1806935/*func_5507*/;
			break;
		case 52:
			uParam0->f_15 = 1806904/*func_5506*/;
			break;
		case 53:
			uParam0->f_13 = 1806870/*func_5505*/;
			break;
		case 54:
			uParam0->f_45 = 1806826/*func_5504*/;
			break;
		case 56:
			uParam0->f_46 = 1806797/*func_5503*/;
			break;
		case 57:
			uParam0->f_11 = 1806788/*func_5502*/;
			break;
		case 58:
			uParam0->f_13 = 1806731/*func_5500*/;
			break;
		case 64:
			uParam0->f_47 = 1806723/*func_5499*/;
			break;
		case 65:
			uParam0->f_21 = 1806715/*func_5498*/;
			break;
		case 66:
			uParam0->f_21 = 1806707/*func_5497*/;
			break;
		case 67:
			uParam0->f_21 = 1806699/*func_5496*/;
			break;
		case 68:
			*uParam0 = 1806673/*func_5495*/;
			break;
		case 69:
			*uParam0 = 1806647/*func_5494*/;
			break;
		case 70:
			uParam0->f_48 = 1806635/*func_5493*/;
			break;
		case 71:
			uParam0->f_49 = 1806626/*func_5492*/;
			break;
		case 107:
			uParam0->f_50 = 1806614/*func_5491*/;
			break;
		case 80:
			uParam0->f_7 = 1806605/*func_5490*/;
			break;
		case 78:
			uParam0->f_59 = 1806597/*func_5489*/;
			break;
		case 126:
			*uParam0 = 1806414/*func_5485*/;
			break;
	}
}

void func_5557(var uParam0, int iParam1)//Position - 0x1C2ECE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1889094/*func_5626*/;
			break;
		case 1:
			uParam0->f_30 = 1888784/*func_5625*/;
			break;
		case 2:
			uParam0->f_31 = 1883812/*func_5619*/;
			break;
		case 3:
			uParam0->f_34 = 1883783/*func_5618*/;
			break;
		case 4:
			uParam0->f_12 = 1883588/*func_5617*/;
			break;
		case 6:
			uParam0->f_32 = 1883238/*func_5616*/;
			break;
		case 111:
			uParam0->f_35 = 1883096/*func_5614*/;
			break;
		case 79:
			*uParam0 = 1883072/*func_5613*/;
			break;
		case 37:
			uParam0->f_18 = 1882864/*func_5612*/;
			break;
		case 38:
			uParam0->f_9 = 1882759/*func_5611*/;
			break;
		case 11:
			uParam0->f_11 = 1882750/*func_5610*/;
			break;
		case 12:
			uParam0->f_33 = 1882645/*func_5608*/;
			break;
		case 14:
			uParam0->f_11 = 1882636/*func_5607*/;
			break;
		case 109:
			uParam0->f_56 = 1882628/*func_5606*/;
			break;
		case 13:
			uParam0->f_2 = 1882619/*func_5605*/;
			break;
		case 44:
			*uParam0 = 1882610/*func_5604*/;
			break;
		case 15:
			uParam0->f_2 = 1882321/*func_5603*/;
			break;
		case 75:
			uParam0->f_4 = 1882312/*func_5602*/;
			break;
		case 16:
			uParam0->f_5 = 1882228/*func_5601*/;
			break;
		case 108:
			uParam0->f_55 = 1882219/*func_5600*/;
			break;
		case 17:
			uParam0->f_17 = 1881598/*func_5598*/;
			break;
		case 19:
			uParam0->f_17 = 1881399/*func_5597*/;
			break;
		case 20:
			uParam0->f_3 = 1881335/*func_5596*/;
			break;
		case 21:
			uParam0->f_3 = 1881275/*func_5595*/;
			break;
		case 74:
			uParam0->f_53 = 1881266/*func_5594*/;
			break;
		case 22:
			uParam0->f_24 = 1881023/*func_5593*/;
			break;
		case 25:
			uParam0->f_23 = 1880719/*func_5592*/;
			break;
		case 30:
			uParam0->f_8 = 1880581/*func_5591*/;
			break;
		case 31:
			uParam0->f_39 = 1880143/*func_5589*/;
			break;
		case 33:
			uParam0->f_40 = 1879722/*func_5588*/;
			break;
		case 34:
			uParam0->f_41 = 1877144/*func_5587*/;
			break;
		case 36:
			uParam0->f_58 = 1877099/*func_5586*/;
			break;
		case 35:
			uParam0->f_42 = 1851141/*func_5585*/;
			break;
		case 45:
			uParam0->f_14 = 1850913/*func_5584*/;
			break;
		case 46:
			uParam0->f_14 = 1850737/*func_5583*/;
			break;
		case 110:
			uParam0->f_57 = 1850729/*func_5582*/;
			break;
		case 77:
			uParam0->f_13 = 1850718/*func_5581*/;
			break;
		case 47:
			uParam0->f_43 = 1850476/*func_5580*/;
			break;
		case 49:
			uParam0->f_8 = 1850444/*func_5579*/;
			break;
		case 50:
			*uParam0 = 1850378/*func_5578*/;
			break;
		case 51:
			*uParam0 = 1850354/*func_5577*/;
			break;
		case 52:
			uParam0->f_15 = 1850171/*func_5576*/;
			break;
		case 53:
			uParam0->f_13 = 1849576/*func_5574*/;
			break;
		case 54:
			uParam0->f_45 = 1849339/*func_5573*/;
			break;
		case 56:
			uParam0->f_46 = 1849330/*func_5572*/;
			break;
		case 57:
			uParam0->f_11 = 1849265/*func_5571*/;
			break;
		case 58:
			uParam0->f_13 = 1848843/*func_5570*/;
			break;
		case 64:
			uParam0->f_47 = 1848835/*func_5569*/;
			break;
		case 65:
			uParam0->f_21 = 1848827/*func_5568*/;
			break;
		case 66:
			uParam0->f_21 = 1848767/*func_5567*/;
			break;
		case 67:
			uParam0->f_21 = 1848749/*func_5566*/;
			break;
		case 68:
			*uParam0 = 1848740/*func_5565*/;
			break;
		case 69:
			*uParam0 = 1848731/*func_5564*/;
			break;
		case 70:
			uParam0->f_48 = 1848227/*func_5563*/;
			break;
		case 71:
			uParam0->f_49 = 1848079/*func_5562*/;
			break;
		case 107:
			uParam0->f_50 = 1848034/*func_5561*/;
			break;
		case 80:
			uParam0->f_7 = 1848025/*func_5560*/;
			break;
		case 78:
			uParam0->f_59 = 1848017/*func_5559*/;
			break;
		case 125:
			uParam0->f_19 = 1848001/*func_5558*/;
			break;
	}
}

void func_5592(int iParam0, int iParam1)//Position - 0x1CB28F
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_4__::func_116(PLAYER::PLAYER_ID()) && __LIB_7__::func_898(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_19__::func_834())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2008(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_5627(var uParam0, int iParam1)//Position - 0x1CD34F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1924050/*func_5756*/;
			break;
		case 1:
			uParam0->f_30 = 1923940/*func_5755*/;
			break;
		case 2:
			uParam0->f_31 = 1921448/*func_5750*/;
			break;
		case 3:
			uParam0->f_34 = 1921419/*func_5749*/;
			break;
		case 4:
			uParam0->f_12 = 1921259/*func_5748*/;
			break;
		case 6:
			uParam0->f_32 = 1921141/*func_5747*/;
			break;
		case 111:
			uParam0->f_35 = 1920924/*func_5744*/;
			break;
		case 79:
			*uParam0 = 1920900/*func_5743*/;
			break;
		case 37:
			uParam0->f_18 = 1920784/*func_5742*/;
			break;
		case 38:
			uParam0->f_9 = 1920633/*func_5739*/;
			break;
		case 11:
			uParam0->f_11 = 1920624/*func_5738*/;
			break;
		case 12:
			uParam0->f_33 = 1919621/*func_5735*/;
			break;
		case 14:
			uParam0->f_11 = 1919612/*func_5734*/;
			break;
		case 109:
			uParam0->f_56 = 1919604/*func_5733*/;
			break;
		case 13:
			uParam0->f_2 = 1919595/*func_5732*/;
			break;
		case 15:
			uParam0->f_2 = 1919441/*func_5731*/;
			break;
		case 75:
			uParam0->f_4 = 1919432/*func_5730*/;
			break;
		case 16:
			uParam0->f_5 = 1919344/*func_5729*/;
			break;
		case 108:
			uParam0->f_55 = 1918554/*func_5723*/;
			break;
		case 17:
			uParam0->f_17 = 1917925/*func_5719*/;
			break;
		case 19:
			uParam0->f_17 = 1917900/*func_5718*/;
			break;
		case 20:
			uParam0->f_3 = 1917861/*func_5717*/;
			break;
		case 21:
			uParam0->f_3 = 1917801/*func_5716*/;
			break;
		case 74:
			uParam0->f_53 = 1917792/*func_5715*/;
			break;
		case 22:
			uParam0->f_24 = 1917738/*func_5714*/;
			break;
		case 25:
			uParam0->f_23 = 1917434/*func_5713*/;
			break;
		case 30:
			uParam0->f_8 = 1917311/*func_5712*/;
			break;
		case 31:
			uParam0->f_39 = 1917092/*func_5711*/;
			break;
		case 33:
			uParam0->f_40 = 1916805/*func_5710*/;
			break;
		case 34:
			uParam0->f_41 = 1916399/*func_5709*/;
			break;
		case 36:
			uParam0->f_58 = 1916354/*func_5708*/;
			break;
		case 35:
			uParam0->f_42 = 1898825/*func_5707*/;
			break;
		case 45:
			uParam0->f_14 = 1898816/*func_5706*/;
			break;
		case 46:
			uParam0->f_14 = 1898732/*func_5705*/;
			break;
		case 110:
			uParam0->f_57 = 1898724/*func_5704*/;
			break;
		case 77:
			uParam0->f_13 = 1898701/*func_5703*/;
			break;
		case 47:
			uParam0->f_43 = 1898649/*func_5702*/;
			break;
		case 49:
			uParam0->f_8 = 1898617/*func_5701*/;
			break;
		case 50:
			*uParam0 = 1898439/*func_5700*/;
			break;
		case 51:
			*uParam0 = 1898342/*func_5699*/;
			break;
		case 52:
			uParam0->f_15 = 1898331/*func_5698*/;
			break;
		case 53:
			uParam0->f_13 = 1898016/*func_5696*/;
			break;
		case 54:
			uParam0->f_45 = 1897153/*func_5689*/;
			break;
		case 56:
			uParam0->f_46 = 1897144/*func_5688*/;
			break;
		case 57:
			uParam0->f_11 = 1892388/*func_5653*/;
			break;
		case 58:
			uParam0->f_13 = 1892374/*func_5652*/;
			break;
		case 64:
			uParam0->f_47 = 1890936/*func_5639*/;
			break;
		case 65:
			uParam0->f_21 = 1890928/*func_5638*/;
			break;
		case 66:
			uParam0->f_21 = 1890877/*func_5637*/;
			break;
		case 67:
			uParam0->f_21 = 1890849/*func_5636*/;
			break;
		case 68:
			*uParam0 = 1890840/*func_5635*/;
			break;
		case 69:
			*uParam0 = 1890831/*func_5634*/;
			break;
		case 70:
			uParam0->f_48 = 1890547/*func_5633*/;
			break;
		case 71:
			uParam0->f_49 = 1890451/*func_5632*/;
			break;
		case 107:
			uParam0->f_50 = 1890439/*func_5631*/;
			break;
		case 80:
			uParam0->f_7 = 1890253/*func_5630*/;
			break;
		case 78:
			uParam0->f_59 = 1890081/*func_5628*/;
			break;
	}
}

void func_5713(int iParam0, int iParam1)//Position - 0x1D41FA
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()) && __LIB_4__::func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_600(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_19__::func_834())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_2008(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_32__::func_360(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_5757(var uParam0, int iParam1)//Position - 0x1D5BDB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1951637/*func_5826*/;
			break;
		case 1:
			uParam0->f_30 = 1951491/*func_5825*/;
			break;
		case 2:
			uParam0->f_31 = 1946264/*func_5819*/;
			break;
		case 3:
			uParam0->f_34 = 1946235/*func_5818*/;
			break;
		case 4:
			uParam0->f_12 = 1945826/*func_5816*/;
			break;
		case 6:
			uParam0->f_32 = 1945656/*func_5815*/;
			break;
		case 111:
			uParam0->f_35 = 1945261/*func_5812*/;
			break;
		case 79:
			*uParam0 = 1945237/*func_5811*/;
			break;
		case 11:
			uParam0->f_11 = 1945228/*func_5810*/;
			break;
		case 12:
			uParam0->f_33 = 1945133/*func_5808*/;
			break;
		case 14:
			uParam0->f_11 = 1945124/*func_5807*/;
			break;
		case 109:
			uParam0->f_56 = 1945116/*func_5806*/;
			break;
		case 13:
			uParam0->f_2 = 1945107/*func_5805*/;
			break;
		case 15:
			uParam0->f_2 = 1944860/*func_5803*/;
			break;
		case 75:
			uParam0->f_4 = 1944851/*func_5802*/;
			break;
		case 16:
			uParam0->f_5 = 1944763/*func_5801*/;
			break;
		case 108:
			uParam0->f_55 = 1944754/*func_5800*/;
			break;
		case 17:
			uParam0->f_17 = 1944500/*func_5799*/;
			break;
		case 19:
			uParam0->f_17 = 1944475/*func_5798*/;
			break;
		case 20:
			uParam0->f_3 = 1944466/*func_5797*/;
			break;
		case 21:
			uParam0->f_3 = 1944457/*func_5796*/;
			break;
		case 74:
			uParam0->f_53 = 1944448/*func_5795*/;
			break;
		case 22:
			uParam0->f_24 = 1944440/*func_5794*/;
			break;
		case 25:
			uParam0->f_23 = 1944432/*func_5793*/;
			break;
		case 30:
			uParam0->f_8 = 1944309/*func_5792*/;
			break;
		case 31:
			uParam0->f_39 = 1944064/*func_5791*/;
			break;
		case 33:
			uParam0->f_40 = 1943808/*func_5790*/;
			break;
		case 34:
			uParam0->f_41 = 1941824/*func_5789*/;
			break;
		case 36:
			uParam0->f_58 = 1941779/*func_5788*/;
			break;
		case 35:
			uParam0->f_42 = 1927330/*func_5787*/;
			break;
		case 45:
			uParam0->f_14 = 1927321/*func_5786*/;
			break;
		case 46:
			uParam0->f_14 = 1927312/*func_5785*/;
			break;
		case 110:
			uParam0->f_57 = 1927304/*func_5784*/;
			break;
		case 77:
			uParam0->f_13 = 1927293/*func_5783*/;
			break;
		case 47:
			uParam0->f_43 = 1927241/*func_5782*/;
			break;
		case 49:
			uParam0->f_8 = 1927209/*func_5781*/;
			break;
		case 50:
			*uParam0 = 1927080/*func_5780*/;
			break;
		case 51:
			*uParam0 = 1927056/*func_5779*/;
			break;
		case 52:
			uParam0->f_15 = 1927045/*func_5778*/;
			break;
		case 53:
			uParam0->f_13 = 1926394/*func_5776*/;
			break;
		case 54:
			uParam0->f_45 = 1925789/*func_5773*/;
			break;
		case 56:
			uParam0->f_46 = 1925780/*func_5772*/;
			break;
		case 57:
			uParam0->f_11 = 1925713/*func_5771*/;
			break;
		case 58:
			uParam0->f_13 = 1925699/*func_5770*/;
			break;
		case 64:
			uParam0->f_47 = 1925320/*func_5769*/;
			break;
		case 65:
			uParam0->f_21 = 1925245/*func_5767*/;
			break;
		case 66:
			uParam0->f_21 = 1925194/*func_5766*/;
			break;
		case 67:
			uParam0->f_21 = 1925176/*func_5765*/;
			break;
		case 68:
			*uParam0 = 1925167/*func_5764*/;
			break;
		case 69:
			*uParam0 = 1925158/*func_5763*/;
			break;
		case 70:
			uParam0->f_48 = 1925041/*func_5762*/;
			break;
		case 71:
			uParam0->f_49 = 1925032/*func_5761*/;
			break;
		case 107:
			uParam0->f_50 = 1925020/*func_5760*/;
			break;
		case 80:
			uParam0->f_7 = 1925011/*func_5759*/;
			break;
		case 78:
			uParam0->f_59 = 1925003/*func_5758*/;
			break;
	}
}

void func_5827(var uParam0, int iParam1)//Position - 0x1DC79E
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1952104/*func_5834*/;
			break;
		case 97:
			uParam0->f_1 = 1952095/*func_5833*/;
			break;
		case 98:
			uParam0->f_1 = 1952086/*func_5832*/;
			break;
		case 99:
			uParam0->f_1 = 1951926/*func_5831*/;
			break;
		case 100:
			uParam0->f_22 = 1951918/*func_5830*/;
			break;
		case 101:
			uParam0->f_22 = 1951763/*func_5828*/;
			break;
	}
}

void func_5835(var uParam0, int iParam1)//Position - 0x1DC971
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1952321/*func_5840*/;
			break;
		case 91:
			uParam0->f_1 = 1952312/*func_5839*/;
			break;
		case 92:
			uParam0->f_1 = 1952303/*func_5838*/;
			break;
		case 93:
			uParam0->f_1 = 1951926/*func_5831*/;
			break;
		case 94:
			uParam0->f_1 = 1952294/*func_5837*/;
			break;
		case 95:
			uParam0->f_22 = 1952230/*func_5836*/;
			break;
	}
}

void func_5841(var uParam0, int iParam1)//Position - 0x1DCA4A
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1952548/*func_5845*/;
			break;
		case 85:
			uParam0->f_1 = 1952539/*func_5844*/;
			break;
		case 86:
			uParam0->f_1 = 1951926/*func_5831*/;
			break;
		case 87:
			uParam0->f_1 = 1952530/*func_5843*/;
			break;
		case 89:
			uParam0->f_54 = 1952430/*func_5842*/;
			break;
	}
}

void func_5883(var uParam0, bool bParam1)//Position - 0x1DE08E
{
	if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_8__::func_788(uParam0, 1);
		}
		func_1269(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_5893()//Position - 0x1DE18A
{
	__LIB_1__::func_769(PLAYER::PLAYER_ID(), 1);
	__LIB_7__::func_909();
	__LIB_21__::func_361();
	func_5883(&Global_1941652, 0);
	HUD::SET_RADAR_ZOOM(0);
	HUD::DISPLAY_RADAR(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	GRAPHICS::SET_NOISEOVERIDE(false);
	GRAPHICS::SET_NOISINESSOVERIDE(0f);
	HUD::DISPLAY_CASH(true);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	__LIB_40__::func_267(&Global_1941652, 0);
	__LIB_35__::func_769(&Global_1941652);
	func_5883(&Global_1941652, 0);
	__LIB_11__::func_71();
	__LIB_11__::func_70();
	if (BitTest(Global_2815059.f_5194, 3))
	{
		__LIB_0__::func_801();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && BitTest(Global_2815059.f_5194, 2))
	{
		__LIB_25__::func_112(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (BitTest(Global_2815059.f_5194, 4))
	{
		__LIB_2__::func_333();
	}
	__LIB_1__::func_485(24);
	Global_2815059.f_5194 = 0;
}

int func_5900(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x1DE2C9
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_186();
	if (__LIB_0__::func_695(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_496() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_638(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_8__::func_138())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_6071(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_27__::func_263(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_232();
						__LIB_36__::func_354(&iVar2);
					}
					if (__LIB_8__::func_138())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_4__::func_318();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_6048(iVar2);
							__LIB_25__::func_270(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_25__::func_270(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_6044())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_5953(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__::func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_5944(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_40__::func_248(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_578(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_18__::func_544(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_32__::func_10();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_32__::func_10();
			}
			else if (__LIB_32__::func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_5__::func_692())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_32__::func_10();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_18__::func_493(iParam9, 0, 0);
				}
			}
			__LIB_25__::func_132(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_4__::func_318();
			}
			if (!(__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_5918(0, 0);
			}
			__LIB_3__::func_678(0, 0);
			if (bParam10)
			{
				__LIB_1__::func_914();
			}
			__LIB_0__::func_744();
			__LIB_35__::func_647();
			if (bParam13)
			{
				__LIB_0__::func_639();
			}
			__LIB_0__::func_643();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_36__::func_354(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_643();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_5918(int iParam0, bool bParam1)//Position - 0x1DF2C9
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_5918(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_5944(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1E02F6
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_1__::func_927(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_7__::func_131(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_5945(0);
			}
		}
	}
}

void func_5945(bool bParam0)//Position - 0x1E0400
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_556(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_35__::func_588(__LIB_1__::func_558(), 14, iVar1, -1) };
			__LIB_1__::func_924(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_1380(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1380(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_5953(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x1E0646
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_7__::func_211(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_232();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_6039() && !bVar3)
	{
		if (func_6038())
		{
			if (func_6032(&iVar2))
			{
				if (__LIB_5__::func_695(iVar2))
				{
					if (!bVar4)
					{
						func_5944(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_1__::func_946() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_1__::func_945(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_1__::func_944(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_1__::func_946(), false))
						{
							iVar5 = __LIB_1__::func_946();
						}
						func_5944(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_8__::func_769(iVar0))
		{
			if ((__LIB_8__::func_138() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_138())
			{
				if (!__LIB_22__::func_60(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_6048(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__::func_851())
	{
		__LIB_36__::func_354(&iVar0);
	}
	if (func_6044())
	{
		__LIB_36__::func_354(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_65())
		{
			if (__LIB_1__::func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_64(), __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_64(), fParam1);
				func_6022(__LIB_2__::func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_662())
			{
				if (__LIB_7__::func_138(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_165(), 1))
				{
					func_6022(__LIB_2__::func_64());
					return 1;
				}
			}
			else if (func_5956(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_165(), 0, 1, 0))
			{
				func_6022(__LIB_2__::func_64());
				return 1;
			}
		}
		else if (__LIB_18__::func_220(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_1__::func_930(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_1__::func_929(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_6022(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_5956(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1E0CEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_190(8))
	{
		__LIB_3__::func_437(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_245(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_190(16))
		{
			__LIB_1__::func_245(16);
		}
	}
	__LIB_1__::func_245(31);
	if (!__LIB_7__::func_94())
	{
		if (!__LIB_1__::func_190(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_7__::func_194(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_648())
					{
						if (!__LIB_4__::func_316())
						{
							__LIB_37__::func_835(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_371(iVar1) || !__LIB_7__::func_193(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_35__::func_937(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_584(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_0__::func_747())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_5__::func_694(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_44(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_44(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_25__::func_21(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_44(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_44(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_18__::func_220(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_41__::func_754(&iVar0, iParam3);
									if ((__LIB_1__::func_221() || __LIB_1__::func_936()) || __LIB_1__::func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_31__::func_898(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_245(34);
									}
									else
									{
										__LIB_1__::func_191(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_38__::func_102(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_35__::func_565(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_35__::func_565(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_18__::func_986(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_245(0);
									__LIB_1__::func_245(44);
									__LIB_1__::func_191(10);
									__LIB_1__::func_191(1);
									__LIB_1__::func_191(2);
									__LIB_1__::func_191(9);
									__LIB_1__::func_191(12);
									__LIB_1__::func_191(31);
									__LIB_1__::func_191(32);
									__LIB_1__::func_191(33);
									__LIB_1__::func_191(35);
									__LIB_1__::func_191(37);
									__LIB_1__::func_191(38);
									__LIB_1__::func_931();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_6022(int iParam0)//Position - 0x1E5B65
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_6048(iParam0);
	__LIB_1__::func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_41__::func_165(iParam0, 1);
	}
	else
	{
		__LIB_32__::func_386(iParam0, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_6032(var uParam0)//Position - 0x1E5EEE
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_1__::func_949())
		{
			iVar2 = __LIB_1__::func_947(__LIB_1__::func_948());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_1__::func_947(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_695(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
						{
							*uParam0 = iVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_389())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_264(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_264(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_6033(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_6033(bool bParam0)//Position - 0x1E611D
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6038()//Position - 0x1E6196
{
	bool bVar0;
	if (__LIB_1__::func_389())
	{
		if (func_6032(&bVar0))
		{
			if (func_6033(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_1__::func_949())
	{
		return 1;
	}
	return 0;
}

int func_6039()//Position - 0x1E61DB
{
	var uVar0;
	if (__LIB_1__::func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_6032(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_6044()//Position - 0x1E631E
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__::func_138())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_6039())
		{
			if (func_6038())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_65())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_165() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_7__::func_211(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_32__::func_386(Global_2667225.f_2669, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_1__::func_953();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_1__::func_952();
			}
		}
		else if (!__LIB_2__::func_65())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_255())
				{
					__LIB_1__::func_953();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
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
	else
	{
		return 1;
	}
	return 0;
}

void func_6048(int iParam0)//Position - 0x1E65F8
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_7__::func_129(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_1__::func_964(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_7__::func_309(PLAYER::PLAYER_ID()))
			{
				__LIB_19__::func_32(iParam0);
			}
		}
		__LIB_18__::func_379(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_5944(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_1__::func_959(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_0__::func_851());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_1__::func_958(iParam0, 1);
					__LIB_1__::func_957(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_1__::func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_1__::func_955(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_1__::func_954() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_6071(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1E7491
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_638(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_636();
		if (bParam10)
		{
			__LIB_0__::func_639();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_6079(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_18__::func_380(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_5__::func_697()) && __LIB_8__::func_206(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_65(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_1__::func_967(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_18__::func_420(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_68(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_6072(&(Global_2667225.f_623));
						__LIB_1__::func_967(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_65(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_1__::func_967(-1);
							}
						}
					}
					else
					{
						__LIB_1__::func_967(-1);
					}
				}
				else
				{
					__LIB_1__::func_967(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_6079(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_636();
		if (bParam10)
		{
			if (!__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_639();
			}
		}
		return 1;
	}
	return 0;
}

void func_6072(var uParam0)//Position - 0x1E7A19
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_65(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_6079(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x1E7E07
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_22__::func_60(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_18__::func_382(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_7__::func_149();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_20__::func_341();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_6259();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_18__::func_441(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_57(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_1())
			{
				__LIB_1__::func_225();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_0(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_0(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_0(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_0(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_0(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_0(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_0(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_0(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_0(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_0(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_0(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_0(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_0(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_0(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_0(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_0(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_0(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_0(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_0(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_0(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_0(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_0(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_0(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_0(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_0(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_0(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_0(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_0(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_0(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_0(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_0(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_0(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_0(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_0(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_0(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_0(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_0(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_0(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_0(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_0(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_0(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_0(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_0(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_0(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_0(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_0(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_0(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_0(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_0(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_0(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_39__::func_34(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_39__::func_33(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_39__::func_24(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_6250(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_3__::func_679();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_39__::func_24(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_7__::func_148();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_89(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_7__::func_135(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_1__::func_996(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__::func_264(Global_1888188, 0, 1))
					{
						if (__LIB_32__::func_374(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1888188) };
							if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_613(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { __LIB_34__::func_316(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_6240(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_1__::func_994(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__::func_138() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_6240(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1836068.f_14) };
							if (__LIB_8__::func_138())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_613(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_8__::func_138())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_5__::func_703() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_88(__LIB_1__::func_265(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_88(Global_2667225.f_512);
				}
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_6__::func_922(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_7__::func_202(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_36__::func_845(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_36__::func_859(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_36__::func_859(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_34__::func_315(Var21, fVar35) };
						Var23 = { __LIB_34__::func_314(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_602(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_6__::func_922(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_7__::func_202(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_36__::func_845(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_156(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_1__::func_990());
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_122(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_6202(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_1__::func_989(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_1__::func_993(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_6202(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_25__::func_340();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_25__::func_340();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_25__::func_53(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_32__::func_87())
				{
					iVar20 = __LIB_1__::func_332(__LIB_0__::func_582());
					if (iVar20 <= 0)
					{
					}
					__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_6202(__LIB_0__::func_582()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_4__::func_319();
				if (iVar20 <= 0)
				{
				}
				__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_222(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_146(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_4__::func_319();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_261())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_18__::func_421(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_25__::func_340();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_261())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_8__::func_48(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var44, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_8__::func_48(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_18__::func_381(iVar15, 912, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_261())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_4__::func_89(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_260(__LIB_3__::func_592(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_248(__LIB_3__::func_349(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_246(__LIB_3__::func_404(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_243(__LIB_3__::func_282(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_231(__LIB_4__::func_105(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_160())
								{
									iVar46 = __LIB_1__::func_227(__LIB_4__::func_151(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_227(__LIB_4__::func_151(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_222(__LIB_4__::func_147(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_218(__LIB_4__::func_145(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_195(__LIB_4__::func_127(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_166(__LIB_4__::func_89(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_36__::func_848(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_5__::func_701() };
					Global_2667225.f_555 = { __LIB_2__::func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_5__::func_700(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
					{
						Global_2667225.f_555 = { func_6202(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6202(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6202(__LIB_0__::func_582()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_5__::func_700(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
					{
						Global_2667225.f_555 = { func_6202(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_6202(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_6202(__LIB_0__::func_582()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_6202(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_6202(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_7__::func_199(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_73(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_8__::func_206(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_33__::func_174(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_36__::func_847() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_122(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_36__::func_353(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_20__::func_341())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_1__::func_977(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_6159();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_698() && __LIB_8__::func_138()) && func_122(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_20__::func_340();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_74(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_6152(&(Var18[iVar0 /*3*/]), __LIB_7__::func_137(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_6149(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_6149(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_6149(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_62(Global_2667225.f_489) && !__LIB_7__::func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_20__::func_341())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_6159();
						return 0;
					}
					else
					{
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_22__::func_60(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__::func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_6159();
						return 0;
					}
					else
					{
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_1__::func_973(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_20__::func_340();
		Global_2667225.f_520.f_10 = 0;
		if (func_6080(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_6080(var uParam0, var uParam1, var uParam2)//Position - 0x1ED102
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_638(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_7__::func_98();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_93();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_27__::func_261(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_87(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_86(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_74(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_613(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_7__::func_97(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_85() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_7__::func_98();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_6090(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_66(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_65(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_6090(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_613(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_6__::func_903(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_6082(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_62(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6082(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_6082(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1EE14A
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_6084(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_4__::func_21(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_74(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_6084(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_122(uParam0, 1, 1, 1, 1))
			{
				func_6082(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_6084(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1EE62A
{
	if (__LIB_1__::func_64(Param0, uParam1))
	{
		if (func_6085(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_6085(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_6085(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x1EE686
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_119(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_25__::func_373(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_70(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_6090(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1EE955
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_6134(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_6082(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_6082(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_6134(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_6134(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_6134(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_6131(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_6098(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_6098(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6082(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_70(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_6082(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_6082(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_6082(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_6082(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_6098(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x1EF219
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_19__::func_35(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_27__::func_70(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_22__::func_60(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (__LIB_39__::func_8(Param0, fParam1, uParam2->f_15, __LIB_1__::func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_32__::func_184(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_25__::func_858(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_25__::func_858(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_607(Param0, 0.5f))
			{
				if (func_172(Var12))
				{
					if (!func_122(&Param0, 0, 0, 0, 1) && !__LIB_24__::func_959(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_24__::func_959(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_7__::func_427(PLAYER::PLAYER_ID()) && __LIB_6__::func_936(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_71(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_6__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_7__::func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_62(Global_2667225.f_489))
			{
				if (__LIB_7__::func_137(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_79(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_18__::func_494(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_70(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__::func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__::func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__::func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_25__::func_373(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = __LIB_36__::func_846(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_36__::func_846(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__::func_220(Param0);
			}
			fVar7 = __LIB_34__::func_313(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_1__::func_969(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = __LIB_36__::func_846(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_36__::func_846(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_7__::func_220(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_6101(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_6101(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_27__::func_69(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_34__::func_313(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_6101(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_6101(struct<10> Param0, int iParam1)//Position - 0x1EFE0C
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_6101(Var0, iParam1 + 1);
	}
}

void func_6131(struct<3> Param0, var uParam1, var uParam2)//Position - 0x1F12E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_6133(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_6133(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_6133(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_6132(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_6132(var uParam0, var uParam1, int iParam2)//Position - 0x1F1603
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6132(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_6133(var uParam0, var uParam1, int iParam2)//Position - 0x1F1641
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_6133(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_6134(var uParam0, var uParam1)//Position - 0x1F167B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_7__::func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_6098(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_6149(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1F1A5C
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_75(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_1__::func_974(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_72(Param0, Param1, fParam2) };
				break;
		}
		if (func_6152(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_6152(var uParam0, bool bParam1)//Position - 0x1F1B9D
{
	func_6153(uParam0, bParam1);
	if (__LIB_27__::func_261(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_6153(var uParam0, bool bParam1)//Position - 0x1F1BD4
{
	float fVar0;
	if (!bParam1)
	{
		func_6155(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_6155(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_1__::func_975(uParam0);
}

void func_6155(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1F1CAA
{
	if (bParam1)
	{
		if (func_172(Global_2667225.f_512))
		{
			if (func_122(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_18__::func_494(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_24__::func_959(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_5__::func_699(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__::func_976(uParam0, 1120403456);
}

void func_6159()//Position - 0x1F1EDF
{
	if (!Global_2667225.f_701)
	{
		if (func_172(Global_2667225.f_555))
		{
			if (func_122(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_6240(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_18__::func_494(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_24__::func_959(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_20__::func_341())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_6202(int iParam0)//Position - 0x1F5EF6
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_6203(iParam0);
}

Vector3 func_6203(int iParam0)//Position - 0x1F5F6A
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_6217(__LIB_1__::func_265(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_3__::func_859(iParam0))
	{
		Var1 = { __LIB_36__::func_832(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__::func_15(iParam0))
	{
		iVar2 = __LIB_1__::func_259(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__::func_265(iParam0);
}

void func_6217(struct<3> Param0, var uParam1)//Position - 0x1F692C
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_6218(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_6218(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_6218(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_6218(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_6218(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_6218(struct<3> Param0, int iParam1, float fParam2)//Position - 0x1F6A70
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_6218(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_6218(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_6218(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_6240(var uParam0, bool bParam1)//Position - 0x1F9DF0
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_1__::func_995(&(Global_2672169[iVar0 /*17*/]));
						__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_122(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<18> func_6250(bool bParam0)//Position - 0x1FA80B
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_76(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_607(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_25__::func_858(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_5__::func_698(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_34__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_135(), __LIB_25__::func_134(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_34__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_7__::func_96(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_135(), __LIB_25__::func_134(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_1__::func_998(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_6251(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_6251(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_6251(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x1FAC6E
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_6251(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_6259()//Position - 0x1FB1F2
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_3__::func_679();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_93())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_2__::func_4(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_92() && (__LIB_3__::func_680(PLAYER::PLAYER_ID()) || __LIB_2__::func_3(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_697())
				{
					if (func_6267(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_698())
				{
					return 20;
				}
				else if ((((((__LIB_4__::func_973(1) && func_6267(PLAYER::PLAYER_ID())) && (__LIB_3__::func_803(PLAYER::PLAYER_ID()) != 157 || (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_582() != __LIB_1__::func_301()))) && !__LIB_2__::func_91()) && !__LIB_6__::func_408(PLAYER::PLAYER_ID())) && !__LIB_25__::func_140(1)) && !(__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0) == 0 && func_6265(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_32__::func_87())
					{
						return 34;
					}
					else if (__LIB_25__::func_531(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_57(iVar0) && __LIB_8__::func_137(iVar0)) && (__LIB_25__::func_482(iVar0) || __LIB_2__::func_192(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_25__::func_531(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_57(iVar0) && __LIB_8__::func_137(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_6265(int iParam0)//Position - 0x1FB673
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_191(iParam0);
		Var1 = { func_6202(iVar0) };
		return func_122(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_6267(int iParam0)//Position - 0x1FB71F
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_6202(iParam0) };
	if (__LIB_4__::func_682(iParam0, 0))
	{
		iVar1 = __LIB_2__::func_191(iParam0);
		Var2 = { func_6202(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_5__::func_700(iParam0, 1);
		if (!iVar3 == __LIB_0__::func_160())
		{
			Var4 = { func_6202(iVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6371()//Position - 0x1FD5EA
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
				func_6373(iVar0);
				break;
			case 153:
				func_6372(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6372(int iParam0)//Position - 0x1FD636
{
	struct<21> Var0;
	int iVar1;
	Var0.f_20 = 20;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 56);
	if (Var0.f_16 != __LIB_0__::func_160())
	{
		if (!BitTest(Local_185.f_22, Var0.f_16))
		{
			iVar1 = 0;
			while (iVar1 < Var0.f_19)
			{
				if (Var0.f_20[iVar1] == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					func_10(Var0.f_16, 0);
					MISC::SET_BIT(&(Local_185.f_22), Var0.f_16);
				}
				iVar1++;
			}
		}
	}
}

void func_6373(int iParam0)//Position - 0x1FD6A7
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (!__LIB_24__::func_866(5) || __LIB_24__::func_866(6))
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
			{
				if (__LIB_28__::func_426(Var0))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
					{
						iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
						if (!func_6380(iVar1))
						{
							if (!__LIB_7__::func_225(iVar1, 1, 0, 0, 0, 0, 1, 0, 1))
							{
								iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
								bVar3 = false;
								if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
								{
									iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iVar2))
								{
									if (!PED::IS_PED_A_PLAYER(iVar2))
									{
										bVar3 = true;
									}
								}
								if (bVar3)
								{
									if (func_6379(iVar1))
									{
										iVar4 = func_6378();
										func_201(2);
									}
									else
									{
										iVar4 = func_6377(VEHICLE::GET_VEHICLE_CLASS(iVar1));
									}
									__LIB_20__::func_415();
									Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = (Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 + iVar4);
									iLocal_184[iLocal_183] = iVar1;
									iLocal_183++;
									if (iLocal_183 >= 5)
									{
										iLocal_183 = 0;
									}
								}
								else
								{
									__LIB_24__::func_867(4);
									func_596(4);
								}
							}
							else
							{
								__LIB_24__::func_867(4);
								func_596(4);
							}
						}
					}
				}
			}
		}
	}
}

int func_6377(int iParam0)//Position - 0x1FD834
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 5:
			return Global_262145.f_18932 /* Tunable: -203180953 */;
		case 0:
		case 1:
		case 3:
			return Global_262145.f_18933 /* Tunable: -1660463793 */;
		case 8:
		case 9:
		case 4:
		case 2:
			return Global_262145.f_18934 /* Tunable: -909082110 */;
		case 10:
		case 11:
		case 12:
		case 20:
			return Global_262145.f_18935 /* Tunable: 2135491586 */;
		case 15:
		case 16:
			return Global_262145.f_18936 /* Tunable: BIKER_MISCHIEF_HELI_PLANE */;
		case 17:
		case 18:
		case 19:
		case 14:
		case 13:
			return Global_262145.f_18937 /* Tunable: 494714104 */;
		case 21:
			return 5;
		default:
	}
	return 1;
}

var func_6378()//Position - 0x1FD908
{
	return Global_262145.f_18938 /* Tunable: BIKER_MISCHIEF_COP_CAR */;
}

int func_6379(int iParam0)//Position - 0x1FD917
{
	int iVar0;
	if (!func_2(2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_6[iVar0 /*4*/].f_2))
		{
			if (iParam0 == NETWORK::NET_TO_VEH(Local_185.f_6[iVar0 /*4*/].f_2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_6380(int iParam0)//Position - 0x1FD969
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam0 == iLocal_184[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_6382()//Position - 0x1FDA17
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	bool bVar5;
	bool bVar6;
	bVar5 = true;
	bVar6 = true;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_131[bVar1 /*3*/] = __LIB_0__::func_160();
		Local_131[bVar1 /*3*/].f_1 = -1;
		Local_131[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_173, bVar1);
		MISC::CLEAR_BIT(&uLocal_175, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_130[iVar0 /*20*/] = __LIB_0__::func_160();
		Local_130[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_174, iVar0);
		Local_130[iVar0 /*20*/].f_2 = { Var4 };
		Local_130[iVar0 /*20*/].f_18 = 0;
		Local_130[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_130[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&uLocal_174, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_130[iVar0 /*20*/]);
			bVar1 = iVar2;
			if (__LIB_1__::func_264(iVar2, 0, 1))
			{
				Local_131[bVar1 /*3*/] = iVar2;
				Local_130[iVar0 /*20*/].f_1 = bVar1;
				Local_131[bVar1 /*3*/].f_1 = iVar0;
				Local_131[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_130[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&uLocal_173, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_131[bVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_175, bVar1);
				}
				if (__LIB_4__::func_116(Local_131[bVar1 /*3*/]))
				{
					Local_130[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_18__::func_604(Local_131[bVar1 /*3*/], 0))
				{
					Local_130[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_176 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_131[bVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_130[iVar0 /*20*/].f_18)
				{
					bVar5 = false;
					if (!BitTest(uLocal_175, bVar1) && !BitTest(uLocal_175, PLAYER::PLAYER_ID()))
					{
					}
				}
				if (!func_895(Local_130[iVar0 /*20*/], 0))
				{
					bVar6 = false;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_2(2))
					{
						if (func_895(Local_130[iVar0 /*20*/], 2))
						{
							func_24(2);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar6)
		{
			if (!func_2(0))
			{
				func_26(0);
			}
		}
		else if (func_2(0))
		{
			func_24(0);
		}
		if (func_8() == 0)
		{
			if (bVar5)
			{
				func_3(2);
			}
		}
	}
}

void func_6414()//Position - 0x1FE650
{
	if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	__LIB_28__::func_375(Global_1943929, -1, -1, -1, -1);
	__LIB_20__::func_413(&iLocal_181);
	__LIB_41__::func_759(1, 0);
	__LIB_18__::func_455();
	func_5893();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_6462(bool bParam0, bool bParam1)//Position - 0x20098C
{
	bool bVar0;
	var uVar1;
	if (!__LIB_24__::func_866(0))
	{
		uVar1 = __LIB_24__::func_767(func_8(), bParam0, bVar0, bParam1);
		Global_1943947.f_24 = Local_186[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2;
		Global_1943929.f_2 = Local_185.f_40;
		Global_1943929.f_3 = Local_185.f_41;
		__LIB_39__::func_9(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		__LIB_24__::func_865(0);
	}
}

int func_6522(struct<21> Param0)//Position - 0x202DAA
{
	__LIB_0__::func_673(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_36__::func_804(205, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_35__::func_935(205, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_39__::func_25(205, -1, 1, -1, -1, -1));
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_185, 42, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_186, 25, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_38__::func_959(0, 0, 0);
	return 1;
}

