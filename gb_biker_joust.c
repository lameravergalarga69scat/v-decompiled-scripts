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
	int iLocal_91 = 0;
	int* iLocal_92 = NULL;
	var uLocal_93 = -1;
	int* iLocal_94 = NULL;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<20> Local_100[32];
	struct<3> Local_101[32];
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128[4] = { 0, 0, 0, 0 };
	var uLocal_129[2] = { 0, 0 };
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	struct<8> Local_133 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	struct<8> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153[4] = { 0, 0, 0, 0 };
	struct<35> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_155[32];
	struct<21> Local_156 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_91 = Global_262145.f_18815 /* Tunable: BIKER_JOUST_WINNING_SCORE */;
	iLocal_122 = AUDIO::GET_SOUND_ID();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_1033(ScriptParam_156))
			{
				func_953(0, 1);
				func_881();
			}
		}
		else
		{
			func_881();
		}
	}
	else
	{
		func_953(0, 1);
		func_881();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_36__::func_425(1))
		{
			func_953(0, 1);
			func_881();
		}
		if (__LIB_0__::func_959())
		{
			func_953(0, 1);
			func_881();
		}
		func_859();
		func_857();
		func_856();
		func_853();
		func_852();
		func_846();
		switch (func_845(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_844() == 1)
				{
					if (func_836())
					{
						func_835(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_844() == 1)
				{
					func_50();
				}
				else if (func_844() == 3)
				{
					func_835(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_881();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_33();
			if (__LIB_15__::func_374())
			{
				func_953(0, 1);
				func_31(3);
			}
			switch (func_844())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 3:
					func_881();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1D3
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_154.f_33), &(Local_154.f_34));
			break;
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!__LIB_0__::func_864(&(Local_154.f_5)))
				{
					__LIB_0__::func_795(&(Local_154.f_5), 0, 0);
				}
				else if (__LIB_0__::func_937(&(Local_154.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		case 6:
			func_31(3);
			break;
	}
}

int func_3()//Position - 0x32C
{
	return (1000 * Global_262145.f_18804 /* Tunable: BIKER_JOUST_TIME_LIMIT */);
}

void func_6()//Position - 0x390
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!BitTest(Local_154.f_32, bVar1))
		{
			Var2 = { func_12(bVar1) };
			if (!__LIB_0__::func_78(Var2, 0f, 0f, 0f, 0))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_154.f_19[bVar1]))
				{
					if (func_8(&(uLocal_153[bVar1]), &(Local_154.f_19[bVar1]), Var2, 1))
					{
						MISC::SET_BIT(&(Local_154.f_32), bVar1);
						if (!__LIB_0__::func_864(&uLocal_123))
						{
							__LIB_0__::func_795(&uLocal_123, 0, 0);
						}
					}
				}
			}
		}
		bVar1++;
	}
	if (__LIB_0__::func_937(&uLocal_123, 300000, 0))
	{
		bVar1 = false;
		while (bVar1 < iVar0)
		{
			if (BitTest(Local_154.f_32, bVar1))
			{
				MISC::CLEAR_BIT(&(Local_154.f_32), bVar1);
			}
			bVar1++;
		}
		__LIB_0__::func_794(&uLocal_123);
	}
}

int func_8(var uParam0, var uParam1, struct<3> Param2, bool bParam3)//Position - 0x478
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_86(Param2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (__LIB_0__::func_799(iVar0))
		{
			iVar1 = 0;
			MISC::SET_BIT(&iVar1, 0);
			MISC::SET_BIT(&iVar1, 1);
			MISC::SET_BIT(&iVar1, 9);
			MISC::SET_BIT(&iVar1, 4);
			*uParam0 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("PICKUP_PORTABLE_CRATE_FIXED_INCAR"), Param2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, bParam3, true);
			*uParam1 = NETWORK::OBJ_TO_NET(*uParam0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_12(bool bParam0)//Position - 0x576
{
	switch (Local_154.f_31)
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					return 1378.0654f, 3179.5715f, 39.5194f;
				case 1:
					return 1386.5602f, 3147.9863f, 39.52f;
				case 2:
					return 1396.3966f, 3111.702f, 39.5088f;
				case 3:
					return 1402.8076f, 3087.6758f, 39.5129f;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return -1375.1804f, -3033.3367f, 12.9448f;
				case 1:
					return -1364.8168f, -3015.949f, 12.9676f;
				case 2:
					return -1305.5812f, -3048.4333f, 12.9444f;
				case 3:
					return -1317.517f, -3067.3794f, 12.9444f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					return 2039.6385f, 4749.277f, 40.013f;
				case 1:
					return 2028.6176f, 4775.398f, 40.3574f;
				case 2:
					return 2134.5403f, 4826.9126f, 40.4972f;
				case 3:
					return 1936.8583f, 4695.8584f, 40.2577f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()//Position - 0x6DB
{
	switch (Local_154.f_31)
	{
		case 0:
			return 4;
		case 1:
			return 4;
		case 2:
			return 4;
		default:
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x70C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_154.f_14 = iParam0;
}

void func_15(int iParam0)//Position - 0x726
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_154.f_1), iParam0);
}

bool func_16()//Position - 0x744
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)//Position - 0x75D
{
	return BitTest(Local_154.f_1, iParam0);
}

void func_18()//Position - 0x76D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (__LIB_30__::func_893() - __LIB_1__::func_724(&(Local_154.f_7), 0, 0)) >= __LIB_19__::func_394()
			{
				__LIB_0__::func_794(&(Local_154.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = __LIB_30__::func_893();
	if (func_17(5))
	{
		iVar1 = __LIB_19__::func_394();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (__LIB_0__::func_864(&(Local_154.f_9)))
			{
				__LIB_0__::func_794(&(Local_154.f_9));
			}
			if (!__LIB_0__::func_864(&(Local_154.f_7)))
			{
				__LIB_0__::func_795(&(Local_154.f_7), 0, 0);
				if (Local_154.f_4 > 0)
				{
					iVar2 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (-1 * Local_154.f_4));
					__LIB_12__::func_503(&(Local_154.f_7), iVar2);
					Local_154.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - __LIB_1__::func_724(&(Local_154.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (__LIB_0__::func_864(&(Local_154.f_7)))
				{
					Local_154.f_4 = __LIB_1__::func_724(&(Local_154.f_7), 0, 0);
				}
			}
			else
			{
				Local_154.f_4 = 0;
			}
			if (__LIB_0__::func_864(&(Local_154.f_7)))
			{
				__LIB_0__::func_794(&(Local_154.f_7));
			}
			if (!__LIB_0__::func_864(&(Local_154.f_9)))
			{
				__LIB_0__::func_795(&(Local_154.f_9), 0, 0);
			}
			else
			{
				if (__LIB_0__::func_937(&(Local_154.f_9), __LIB_19__::func_441(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (__LIB_0__::func_937(&(Local_154.f_9), (__LIB_19__::func_441() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

var func_24()//Position - 0x964
{
	return (func_17(8) || func_17(9));
}

int func_25()//Position - 0x97E
{
	return Local_154.f_14;
}

void func_26(int iParam0)//Position - 0x98B
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_154.f_13 = iParam0;
}

int func_27()//Position - 0x9A5
{
	return Local_154.f_13;
}

bool func_28()//Position - 0x9B2
{
	if (!func_17(1))
	{
		if (__LIB_7__::func_944() > -1)
		{
			if (__LIB_7__::func_944() == 0)
			{
				Local_154.f_31 = 0;
			}
			else if (__LIB_7__::func_944() == 1)
			{
				Local_154.f_31 = 1;
			}
			else
			{
				Local_154.f_31 = 2;
			}
		}
		else
		{
			Local_154.f_31 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		if (Global_262145.f_18809 /* Tunable: BIKER_DISABLE_JOUST_0 */)
		{
			if (Local_154.f_31 == 0)
			{
				if (!Global_262145.f_18810 /* Tunable: BIKER_DISABLE_JOUST_1 */)
				{
					Local_154.f_31 = 1;
				}
				else
				{
					Local_154.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_18810 /* Tunable: BIKER_DISABLE_JOUST_1 */)
		{
			if (Local_154.f_31 == 1)
			{
				if (!Global_262145.f_18811 /* Tunable: BIKER_DISABLE_JOUST_2 */)
				{
					Local_154.f_31 = 2;
				}
				else
				{
					Local_154.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_18811 /* Tunable: BIKER_DISABLE_JOUST_2 */)
		{
			if (Local_154.f_31 == 2)
			{
				if (!Global_262145.f_18810 /* Tunable: BIKER_DISABLE_JOUST_1 */)
				{
					Local_154.f_31 = 0;
				}
				else
				{
					Local_154.f_31 = 1;
				}
			}
		}
		Local_154.f_15 = PLAYER::PLAYER_ID();
		Local_154.f_16[0] = PLAYER::PLAYER_ID();
		Local_154.f_24[0] = iLocal_91;
		Local_154.f_16[1] = __LIB_0__::func_162();
		Local_154.f_24[1] = iLocal_91;
		func_15(1);
	}
	return func_17(1);
}

void func_31(int iParam0)//Position - 0xAE8
{
	Local_154.f_0 = iParam0;
}

void func_33()//Position - 0xB18
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bVar2 = true;
	bVar3 = true;
	if (Local_154.f_0 != 3)
	{
		bVar0 = false;
		while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
			{
				iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(bVar0);
				iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (!__LIB_0__::func_361(iVar11, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_154.f_16[1] == __LIB_0__::func_162())
						{
							if (__LIB_1__::func_802(iVar11))
							{
								if (iVar11 != Local_154.f_15)
								{
									Local_154.f_16[1] = iVar11;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar11 == Local_154.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar11 == Local_154.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar11 == Local_154.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar11 == Local_154.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!BitTest(Local_154.f_2, bVar0))
							{
								iVar5++;
								MISC::SET_BIT(&(Local_154.f_2), bVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (BitTest(Local_154.f_2, bVar0))
						{
							MISC::CLEAR_BIT(&(Local_154.f_2), bVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_155[bVar0 /*6*/].f_3 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar7[iVar9] = (iVar7[iVar9] + Local_155[bVar0 /*6*/].f_3);
						}
						if (Local_155[bVar0 /*6*/].f_4 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar10 = (1 - iVar9);
							iVar7[iVar10] = (iVar7[iVar10] + Local_155[bVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (__LIB_1__::func_802(iVar11))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar8++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar8++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			bVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!__LIB_0__::func_864(&(Local_154.f_11)))
			{
				__LIB_0__::func_795(&(Local_154.f_11), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_154.f_11), 10000, 0))
			{
				if (iVar8 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar14 = iVar7[1];
			iVar13 = (iLocal_91 - iVar14);
			Local_154.f_27[0] = iVar7[0];
			Local_154.f_27[1] = iVar7[1];
			if (Local_154.f_24[0] != iVar13)
			{
				iVar12 = 0;
				if (Local_154.f_24[0] < iVar13)
				{
					iVar12 = (iVar13 - Local_154.f_24[0]);
				}
				Local_154.f_24[0] = (iVar13 - iVar12);
			}
			iVar14 = iVar7[0];
			iVar13 = (iLocal_91 - iVar14);
			if (Local_154.f_24[1] != iVar13)
			{
				iVar12 = 0;
				if (Local_154.f_24[1] < iVar13)
				{
					iVar12 = (iVar13 - Local_154.f_24[1]);
				}
				Local_154.f_24[1] = (iVar13 - iVar12);
			}
			if (Local_154.f_27[0] >= iLocal_91)
			{
				Local_154.f_30 = 0;
			}
			else if (Local_154.f_27[1] >= iLocal_91)
			{
				Local_154.f_30 = 1;
			}
			if (iVar8 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_154.f_30 == -1)
			{
				if (Local_154.f_27[0] == Local_154.f_27[1])
				{
					Local_154.f_30 = 99;
				}
				else if (Local_154.f_27[0] > Local_154.f_27[1])
				{
					Local_154.f_30 = 0;
				}
				else
				{
					Local_154.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_154.f_3 != iVar5)
	{
		Local_154.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_154.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)//Position - 0xFAB
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)//Position - 0xFCD
{
	return func_36() == iParam0;
}

int func_36()//Position - 0xFDC
{
	return Local_154.f_15;
}

int func_37(int iParam0)//Position - 0xFE9
{
	return __LIB_30__::func_908(iParam0, func_36(), 0);
}

void func_43(int iParam0)//Position - 0x1125
{
	MISC::CLEAR_BIT(&(Local_154.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)//Position - 0x1138
{
	return BitTest(Local_155[iParam0 /*6*/].f_1, iParam1);
}

void func_50()//Position - 0x1242
{
	if (iLocal_118 > -1)
	{
		if ((!__LIB_12__::func_495() && !__LIB_0__::func_114()) && !__LIB_30__::func_778(179))
		{
			if (Global_2703735.f_4.f_10)
			{
				switch (Local_155[iLocal_118 /*6*/].f_5)
				{
					case 0:
						if (!func_826(2))
						{
							__LIB_32__::func_208(179, 1, -1, 0);
							iLocal_131 = __LIB_20__::func_73(PLAYER::PLAYER_ID());
							StringCopy(&Local_133, __LIB_30__::func_903(), 64);
							func_802(2);
						}
						if (!func_826(4))
						{
							__LIB_19__::func_573(-1, 0, 0, -1, 0, 0);
							func_802(4);
						}
						if (Local_154.f_13 > 0)
						{
							if (Local_154.f_13 > 1)
							{
								Local_155[iLocal_118 /*6*/].f_5 = 4;
							}
							else
							{
								Local_155[iLocal_118 /*6*/].f_5 = Local_154.f_13;
							}
						}
						break;
					case 1:
						func_652();
						func_651();
						func_628();
						func_614();
						if (Local_154.f_13 != 1)
						{
							if (func_44(NETWORK::PARTICIPANT_ID(), 1))
							{
								func_604(1);
								Local_155[iLocal_118 /*6*/].f_5 = Local_154.f_13;
							}
							else
							{
								__LIB_3__::func_0();
								Local_155[iLocal_118 /*6*/].f_5 = 4;
							}
						}
						break;
					case 2:
						func_652();
						func_596();
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
						if (func_44(NETWORK::PARTICIPANT_ID(), 1) || func_44(NETWORK::PARTICIPANT_ID(), 2))
						{
							if (!func_44(NETWORK::PARTICIPANT_ID(), 6))
							{
								__LIB_30__::func_895(1);
							}
							func_614();
						}
						func_590();
						if (Local_154.f_13 != 2)
						{
							__LIB_30__::func_894(&iLocal_94);
							Local_155[iLocal_118 /*6*/].f_5 = Local_154.f_13;
						}
						break;
					case 3:
						if (__LIB_0__::func_864(&(Local_154.f_5)))
						{
							__LIB_32__::func_28((func_3() - __LIB_1__::func_724(&(Local_154.f_5), 0, 0)), func_25() != 0, &iLocal_92, -1);
						}
						if (!func_826(3))
						{
							if (__LIB_0__::func_937(&(Local_154.f_5), 10000, 0))
							{
								__LIB_15__::func_577();
								func_802(3);
							}
						}
						if (func_25() == 0)
						{
							func_652();
							func_580();
							func_579();
							func_578();
							if (func_577())
							{
								if (Local_155[iLocal_118 /*6*/].f_5 == 3)
								{
									func_576();
								}
							}
							if (iLocal_118 > -1)
							{
								if (iLocal_118 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									func_590();
									func_449(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
								}
							}
						}
						if (Local_154.f_13 != 3)
						{
							Local_155[iLocal_118 /*6*/].f_5 = Local_154.f_13;
						}
						break;
					case 4:
						if (Local_154.f_13 > 4)
						{
							Local_155[iLocal_118 /*6*/].f_5 = Local_154.f_13;
						}
						break;
					case 5:
						__LIB_3__::func_0();
						func_87();
						break;
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()//Position - 0x151A
{
	int iVar0;
	if (!func_826(5))
	{
		__LIB_3__::func_0();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 4))
			{
				func_86(4);
				__LIB_2__::func_52(1);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_126))
		{
			HUD::REMOVE_BLIP(&iLocal_126);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_125))
		{
			HUD::REMOVE_BLIP(&iLocal_125);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_127))
		{
			HUD::REMOVE_BLIP(&iLocal_127);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_128[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_128[iVar0]));
			}
			iVar0++;
		}
		func_74();
		__LIB_2__::func_91();
		__LIB_0__::func_814();
		__LIB_19__::func_565(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		__LIB_30__::func_894(&iLocal_94);
		__LIB_2__::func_152();
		func_802(5);
	}
}

void func_74()//Position - 0x1B2C
{
	bool bVar0;
	bool bVar1;
	if (!func_826(8))
	{
		func_802(8);
		bVar0 = false;
		while (bVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
			{
				if (bVar1 != PLAYER::PLAYER_ID())
				{
					if (BitTest(uLocal_119, bVar0))
					{
						__LIB_12__::func_535(bVar1, 432, 0, 0);
						__LIB_30__::func_773(bVar1, __LIB_1__::func_389(iLocal_132), 0, 0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_86(int iParam0)//Position - 0x2108
{
	MISC::CLEAR_BIT(&(Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

void func_87()//Position - 0x2121
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar4;
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_18 = -1;
	Var3.f_19 = -1;
	if (!func_826(1))
	{
		if (func_25() != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_2703735.f_4.f_10)
				{
					if (((!__LIB_12__::func_495() && !__LIB_0__::func_114()) && !__LIB_30__::func_778(179)) && func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						if (__LIB_30__::func_767())
						{
							iVar1 = func_34(PLAYER::PLAYER_ID());
							iVar2 = Local_154.f_30;
							switch (func_25())
							{
								case 2:
									HUD::CLEAR_HELP(true);
									break;
								case 3:
									HUD::CLEAR_HELP(true);
									break;
								case 1:
									HUD::CLEAR_HELP(true);
									if (Local_154.f_30 > -1)
									{
										if (Local_154.f_30 == 99)
										{
											func_445(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTDR" /* GXT: The Joust Club Work was a draw */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_445(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_JOUSTWD" /* GXT: ~a~ ~s~won Joust */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_445(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTLD" /* GXT: ~a~ ~s~lost Joust */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										__LIB_36__::func_424(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTLT" /* GXT: Time limit expired */, 1, -1, 2, 1, 0);
									}
									break;
								case 5:
									HUD::CLEAR_HELP(true);
									__LIB_36__::func_424(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTNB" /* GXT: Not enough players */, 1, -1, 2, 1, 0);
									break;
								case 4:
									HUD::CLEAR_HELP(true);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_445(87, "GB_WINNER" /* GXT: WINNER */, "BIGM_JOUSTWD" /* GXT: ~a~ ~s~won Joust */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_445(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTLD" /* GXT: ~a~ ~s~lost Joust */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
									}
									break;
								case 6:
									func_445(88, "BK_RUN_OVER" /* GXT: CLUB WORK OVER */, "BIGM_JOUSTLD" /* GXT: ~a~ ~s~lost Joust */, &Local_133, iLocal_131, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar4 = PLAYER::PLAYER_ID();
				__LIB_30__::func_900(1, iVar4);
				if (bVar0)
				{
				}
				__LIB_42__::func_75(179, bVar0, &Var3, 0);
				func_953(bVar0, 0);
				func_51();
				func_802(1);
			}
		}
	}
	if (func_89(&uLocal_102, 1, 0))
	{
		func_88(0);
	}
}

void func_88(int iParam0)//Position - 0x2342
{
	MISC::SET_BIT(&(Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

int func_89(var uParam0, bool bParam1, int iParam2)//Position - 0x235B
{
	bool bVar0;
	__LIB_1__::func_966(29);
	if ((*uParam0 > 0 && !__LIB_1__::func_515()) && func_116(PLAYER::PLAYER_ID()) != 0)
	{
		if (!__LIB_30__::func_766())
		{
			__LIB_1__::func_914();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_864(&(uParam0->f_3)))
			{
				__LIB_0__::func_795(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1943920.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__::func_795(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
				__LIB_1__::func_289(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_864(&(uParam0->f_5)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_5), 3000, 0))
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
				func_101(iParam2);
				__LIB_1__::func_289(uParam0, 2);
			}
			break;
		case 2:
			func_101(0);
			if (__LIB_0__::func_937(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__::func_1(__LIB_30__::func_771(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__::func_289(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_937(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
				__LIB_1__::func_289(uParam0, 4);
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

void func_101(int iParam0)//Position - 0x274E
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_0__::func_165(PLAYER::PLAYER_ID(), 22)) && func_116(PLAYER::PLAYER_ID()) != 0) && !__LIB_1__::func_378(__LIB_12__::func_520())) && !__LIB_23__::func_346(PLAYER::PLAYER_ID())) && !__LIB_12__::func_499(__LIB_0__::func_492(PLAYER::PLAYER_ID()))) && !__LIB_4__::func_78(__LIB_0__::func_492(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			__LIB_1__::func_707(__LIB_30__::func_771(iParam0), -1);
			__LIB_16__::func_609(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

int func_116(int iParam0)//Position - 0x3405
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_1__::func_15(iParam0) && !__LIB_3__::func_438(iParam0)) && !BitTest(Global_1892703[iParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_0__::func_428(iParam0);
	bVar3 = __LIB_0__::func_945();
	bVar4 = __LIB_12__::func_495();
	if ((bVar1 && (__LIB_3__::func_131(iParam0) || __LIB_1__::func_17(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !__LIB_0__::func_315(iParam0)) && !__LIB_12__::func_482(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

int func_445(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x341B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_162();
	iVar1 = __LIB_0__::func_162();
	iVar2 = __LIB_0__::func_162();
	return func_446(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_446(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x341F1
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	__LIB_1__::func_330(&(Var0.f_69), 4);
	return __LIB_36__::func_55(&Var0);
}

void func_449(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x342E8
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
	if (func_575(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_20__::func_106() || iParam2 == 28)
	{
		if (__LIB_20__::func_20(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_20__::func_18(), sParam7))
		{
			__LIB_1__::func_995(1);
			if ((!__LIB_1__::func_994() && !__LIB_1__::func_993()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_992())
				{
					__LIB_2__::func_63();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_991(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_990(iParam1, 0, 0);
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
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_0__::func_361(bVar4, 0))
									{
										if (__LIB_12__::func_558(bVar4) || __LIB_12__::func_485(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_796(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_30__::func_911(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_12__::func_490())
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_162();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_925(bVar4) && __LIB_19__::func_489(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_12__::func_552(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_12__::func_562(bVar4);
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
									if (!__LIB_12__::func_490())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
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
								iVar17 = __LIB_20__::func_78(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_12__::func_486(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (__LIB_1__::func_982(iParam5))
								{
									__LIB_19__::func_506(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_19__::func_506(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_1__::func_693(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_162();
							}
							if (__LIB_19__::func_925(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_12__::func_552(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_12__::func_562(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_20__::func_78(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_12__::func_486(bVar4, 1))
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
									__LIB_19__::func_508(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_12__::func_532(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_794(&(uParam3->f_21));
						__LIB_1__::func_975();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_974(uParam3, iParam1);
							__LIB_1__::func_824(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_974(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_2__::func_141(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_2__::func_140(uParam3);
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
			__LIB_1__::func_975();
			__LIB_1__::func_991(0);
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

int func_575(int iParam0)//Position - 0x378DA
{
	if (iParam0 == 28)
	{
		if ((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_0__::func_428(PLAYER::PLAYER_ID())) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_116(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_576()//Position - 0x37949
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_596();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
	}
}

bool func_577()//Position - 0x379AD
{
	return func_27() >= 2;
}

void func_578()//Position - 0x379BB
{
	__LIB_2__::func_24(3000, 3000);
}

void func_579()//Position - 0x379CD
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((((VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iVar0) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("hydra")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("savage")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("buzzard")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("valkyrie"))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		}
	}
}

void func_580()//Position - 0x37A67
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_128[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_154.f_19[iVar0]))
			{
				iLocal_128[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_154.f_19[iVar0]));
				HUD::SET_BLIP_SPRITE(iLocal_128[iVar0], 351);
				HUD::SET_BLIP_COLOUR(iLocal_128[iVar0], 2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_128[iVar0], "GB_AMMOPICKBLIP" /* GXT: Ammo Case */);
			}
		}
		iVar0++;
	}
}

void func_590()//Position - 0x38187
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
		{
			if (func_593())
			{
				func_88(8);
				if (__LIB_0__::func_864(&uLocal_151))
				{
					__LIB_0__::func_794(&uLocal_151);
				}
			}
		}
		else if (!func_593())
		{
			func_86(8);
		}
		if (iLocal_122 >= 0)
		{
			if (func_593())
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_122))
				{
					AUDIO::STOP_SOUND(iLocal_122);
				}
			}
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			if (Local_155[iLocal_118 /*6*/].f_5 == 3)
			{
				if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
				{
					if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
					{
						if (!__LIB_0__::func_864(&uLocal_151))
						{
							if (func_591())
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_122, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_122, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							__LIB_0__::func_795(&uLocal_151, 0, 0);
						}
						if (__LIB_0__::func_864(&uLocal_151))
						{
							if (!__LIB_0__::func_937(&uLocal_151, 10000, 0))
							{
							}
							else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
								Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
							else
							{
								ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
						}
					}
					if (!func_591())
					{
						func_596();
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					}
				}
				else if (__LIB_0__::func_864(&uLocal_151))
				{
					__LIB_0__::func_794(&uLocal_151);
				}
			}
		}
	}
}

int func_591()//Position - 0x38339
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (func_592(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_592(int iParam0)//Position - 0x3837A
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_593()//Position - 0x383E2
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	func_594(&Var0, &Var1, &fVar2);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_594(var uParam0, var uParam1, var uParam2)//Position - 0x3841D
{
	switch (Local_154.f_31)
	{
		case 0:
			*uParam0 = { 1056.1003f, 3042.89f, 30.787918f };
			*uParam1 = { 1727.0835f, 3227.1355f, 71.17491f };
			*uParam2 = 100f;
			break;
		case 1:
			*uParam0 = { -1689.1469f, -2829.7327f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		case 2:
			*uParam0 = { 1914.7467f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.7192f, 4826.8364f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_596()//Position - 0x385B9
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
}

void func_604(bool bParam0)//Position - 0x389D5
{
	int iVar0;
	iVar0 = func_34(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iLocal_130 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_129[iVar0]);
		__LIB_2__::func_52(0);
		func_607();
		func_605();
	}
}

void func_605()//Position - 0x38A13
{
	int iVar0;
	iVar0 = func_34(PLAYER::PLAYER_ID());
	__LIB_0__::func_814();
	switch (Local_154.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_849(1708.0823f, 3257.124f, 40.0367f, 103.4795f);
					__LIB_0__::func_849(1708.1736f, 3249.501f, 40.0217f, 105.6852f);
					__LIB_0__::func_849(1709.982f, 3241.5913f, 39.9943f, 111.8098f);
					__LIB_0__::func_849(1713.4911f, 3233.3643f, 40.1406f, 102.9456f);
					__LIB_0__::func_849(1701.7495f, 3218.8174f, 40.4952f, 101.568f);
					__LIB_0__::func_849(1699.1465f, 3212.3098f, 41.0702f, 89.9389f);
					__LIB_0__::func_849(1684.9618f, 3214.2695f, 41.6779f, 93.4364f);
					__LIB_0__::func_849(1677.763f, 3224.4553f, 39.5792f, 95.5699f);
					__LIB_0__::func_849(1674.7561f, 3233.18f, 39.6863f, 100.0559f);
					__LIB_0__::func_849(1672.1741f, 3242.3948f, 39.6958f, 97.4521f);
					break;
				case 1:
					__LIB_0__::func_849(1056.8883f, 3088.653f, 40.3451f, 278.7011f);
					__LIB_0__::func_849(1060.0454f, 3081.2295f, 40.2589f, 278.8035f);
					__LIB_0__::func_849(1062.2559f, 3073.965f, 40.2523f, 286.0508f);
					__LIB_0__::func_849(1064.773f, 3066.9587f, 40.2525f, 287.8311f);
					__LIB_0__::func_849(1066.5186f, 3057.5837f, 40.2967f, 275.5681f);
					__LIB_0__::func_849(1069.4152f, 3042.6968f, 40.3412f, 291.182f);
					__LIB_0__::func_849(1070.5164f, 3033.8677f, 40.3801f, 289.8516f);
					__LIB_0__::func_849(1075.1041f, 3023.745f, 40.3225f, 276.9676f);
					__LIB_0__::func_849(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					__LIB_0__::func_849(1075.8905f, 3067.5732f, 39.8683f, 291.6247f);
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_849(-1024.9272f, -3260.799f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1022.4645f, -3257.8147f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1027.6727f, -3254.4678f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1022.0581f, -3255.9736f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1026.6812f, -3253.9329f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1028.0143f, -3248.8525f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1023.8042f, -3248.954f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1026.1886f, -3244.3423f, 12.9444f, 80.47f);
					__LIB_0__::func_849(-1021.859f, -3244.7046f, 12.9444f, 80.47f);
					break;
				case 1:
					__LIB_0__::func_849(-1650.9087f, -2860.5188f, 12.9444f, 250.7f);
					__LIB_0__::func_849(-1648.2041f, -2866.4922f, 12.9444f, 250.7f);
					__LIB_0__::func_849(-1641.5518f, -2865.6865f, 12.9452f, 250.7f);
					__LIB_0__::func_849(-1634.8652f, -2869.221f, 12.948f, 250.7f);
					__LIB_0__::func_849(-1634.6005f, -2874.0415f, 12.9556f, 250.7f);
					__LIB_0__::func_849(-1629.2167f, -2873.462f, 12.9513f, 250.7f);
					__LIB_0__::func_849(-1626.581f, -2878.2424f, 12.9573f, 250.7f);
					__LIB_0__::func_849(-1621.1608f, -2877.9722f, 12.951f, 250.7f);
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_849(2128.5867f, 4814.231f, 40.1959f, 103.4795f);
					__LIB_0__::func_849(2131.3447f, 4808.8896f, 40.1959f, 103.4795f);
					__LIB_0__::func_849(2133.6553f, 4803.0996f, 40.1576f, 103.4795f);
					__LIB_0__::func_849(2127.7036f, 4799.2964f, 40.1545f, 103.4795f);
					__LIB_0__::func_849(2123.3965f, 4801.777f, 40.0564f, 103.4795f);
					__LIB_0__::func_849(2119.1692f, 4806.328f, 40.1959f, 103.4795f);
					__LIB_0__::func_849(2114.7356f, 4804.1846f, 40.1931f, 103.4795f);
					__LIB_0__::func_849(2113.6555f, 4800.2627f, 40.1573f, 103.4795f);
					__LIB_0__::func_849(2115.452f, 4795.4673f, 40.1041f, 103.4795f);
					__LIB_0__::func_849(2110.035f, 4793.8926f, 39.8382f, 103.4795f);
					break;
				case 1:
					__LIB_0__::func_849(1927.8082f, 4712.542f, 40.1779f, 278.7011f);
					__LIB_0__::func_849(1928.8944f, 4718.197f, 40.1608f, 278.7011f);
					__LIB_0__::func_849(1934.3093f, 4718.631f, 40.098f, 278.7011f);
					__LIB_0__::func_849(1941.7794f, 4714.215f, 40.0632f, 278.7011f);
					__LIB_0__::func_849(1945.6437f, 4715.7847f, 40.0656f, 278.7011f);
					__LIB_0__::func_849(1947.5667f, 4720.6294f, 40.0604f, 278.7011f);
					__LIB_0__::func_849(1947.4364f, 4726.5786f, 40.0851f, 278.7011f);
					__LIB_0__::func_849(1951.5642f, 4730.475f, 40.1026f, 278.7011f);
					__LIB_0__::func_849(1955.0275f, 4729.683f, 40.0806f, 278.7011f);
					__LIB_0__::func_849(1958.0419f, 4726.6235f, 40.0604f, 278.7011f);
					__LIB_0__::func_849(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_607()//Position - 0x3906E
{
	int iVar0;
	iVar0 = func_34(PLAYER::PLAYER_ID());
	__LIB_19__::func_565(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0, 1109393408);
	__LIB_15__::func_448(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0, 0);
	switch (Local_154.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					__LIB_30__::func_902(1708.0823f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					__LIB_30__::func_902(1708.1736f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					__LIB_30__::func_902(1709.982f, 3241.5913f, 39.9943f, 111.8098f, 1065353216);
					__LIB_30__::func_902(1713.4911f, 3233.3643f, 40.1406f, 102.9456f, 1065353216);
					__LIB_30__::func_902(1701.7495f, 3218.8174f, 40.4952f, 101.568f, 1065353216);
					__LIB_30__::func_902(1699.1465f, 3212.3098f, 41.0702f, 89.9389f, 1065353216);
					__LIB_30__::func_902(1684.9618f, 3214.2695f, 41.6779f, 93.4364f, 1065353216);
					__LIB_30__::func_902(1677.763f, 3224.4553f, 39.5792f, 95.5699f, 1065353216);
					__LIB_30__::func_902(1674.7561f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					__LIB_30__::func_902(1672.1741f, 3242.3948f, 39.6958f, 97.4521f, 1065353216);
					break;
				case 1:
					__LIB_30__::func_902(1056.8883f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1060.0454f, 3081.2295f, 40.2589f, 278.8035f, 1065353216);
					__LIB_30__::func_902(1062.2559f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					__LIB_30__::func_902(1064.773f, 3066.9587f, 40.2525f, 287.8311f, 1065353216);
					__LIB_30__::func_902(1066.5186f, 3057.5837f, 40.2967f, 275.5681f, 1065353216);
					__LIB_30__::func_902(1069.4152f, 3042.6968f, 40.3412f, 291.182f, 1065353216);
					__LIB_30__::func_902(1070.5164f, 3033.8677f, 40.3801f, 289.8516f, 1065353216);
					__LIB_30__::func_902(1075.1041f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					__LIB_30__::func_902(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					__LIB_30__::func_902(1075.8905f, 3067.5732f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					__LIB_30__::func_902(-1024.9272f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1022.4645f, -3257.8147f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1027.6727f, -3254.4678f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1022.0581f, -3255.9736f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1026.6812f, -3253.9329f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1028.0143f, -3248.8525f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1023.8042f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1026.1886f, -3244.3423f, 12.9444f, 80.47f, 1065353216);
					__LIB_30__::func_902(-1021.859f, -3244.7046f, 12.9444f, 80.47f, 1065353216);
					break;
				case 1:
					__LIB_30__::func_902(-1650.9087f, -2860.5188f, 12.9444f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1648.2041f, -2866.4922f, 12.9444f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1641.5518f, -2865.6865f, 12.9452f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1634.8652f, -2869.221f, 12.948f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1634.6005f, -2874.0415f, 12.9556f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1629.2167f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1626.581f, -2878.2424f, 12.9573f, 250.7f, 1065353216);
					__LIB_30__::func_902(-1621.1608f, -2877.9722f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					__LIB_30__::func_902(2128.5867f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2131.3447f, 4808.8896f, 40.1959f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2133.6553f, 4803.0996f, 40.1576f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2127.7036f, 4799.2964f, 40.1545f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2123.3965f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2119.1692f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2114.7356f, 4804.1846f, 40.1931f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2113.6555f, 4800.2627f, 40.1573f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2115.452f, 4795.4673f, 40.1041f, 103.4795f, 1065353216);
					__LIB_30__::func_902(2110.035f, 4793.8926f, 39.8382f, 103.4795f, 1065353216);
					break;
				case 1:
					__LIB_30__::func_902(1927.8082f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1928.8944f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1934.3093f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1941.7794f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1945.6437f, 4715.7847f, 40.0656f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1947.5667f, 4720.6294f, 40.0604f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1947.4364f, 4726.5786f, 40.0851f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1951.5642f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1955.0275f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1958.0419f, 4726.6235f, 40.0604f, 278.7011f, 1065353216);
					__LIB_30__::func_902(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_614()//Position - 0x39AA1
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
	{
		return;
	}
	if (!func_826(7))
	{
		__LIB_25__::func_374(&iLocal_94);
		func_802(7);
		MISC::CLEAR_AREA_OF_PROJECTILES(func_626(func_34(PLAYER::PLAYER_ID())), 50f, 1);
	}
	if (!func_44(NETWORK::PARTICIPANT_ID(), 7))
	{
		if (__LIB_30__::func_897(&iLocal_94))
		{
			if (func_17(10))
			{
				if (func_615(&iLocal_94, 1, 0, 1))
				{
					func_88(7);
				}
			}
		}
	}
}

int func_615(int* iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x39B13
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_30__::func_897(iParam0))
	{
		if (!__LIB_0__::func_702(&(iParam0->f_3)))
		{
			__LIB_1__::func_31(&(iParam0->f_3));
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(__LIB_3__::func_108(&(iParam0->f_3)));
		iVar1 = MISC::ABSI((iVar0 - 3));
		bVar2 = false;
		if (__LIB_0__::func_703(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!__LIB_0__::func_703(iParam0->f_1, 16))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					__LIB_1__::func_330(&(iParam0->f_1), 16);
					AUDIO::STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!__LIB_0__::func_703(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !__LIB_0__::func_703(iParam0->f_1, 1))
			{
				__LIB_1__::func_330(&(iParam0->f_1), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_30__::func_896(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !__LIB_0__::func_703(iParam0->f_1, 2))
			{
				__LIB_1__::func_330(&(iParam0->f_1), 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_30__::func_896(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !__LIB_0__::func_703(iParam0->f_1, 4))
			{
				__LIB_1__::func_330(&(iParam0->f_1), 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_30__::func_896(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !__LIB_0__::func_703(iParam0->f_1, 8))
			{
				__LIB_1__::func_330(&(iParam0->f_1), 8);
				AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_FIGHT");
				HUD::GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_88(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && __LIB_1__::func_254()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				__LIB_1__::func_377(&(iParam0->f_3));
			}
			AUDIO::STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			AUDIO::START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7));
					if (iVar8 != PLAYER::PLAYER_ID())
					{
						iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, false))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iVar9, false);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_626(int iParam0)//Position - 0x39F35
{
	switch (Local_154.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		case 1:
			if (iParam0 == 0)
			{
				return -1004.1468f, -3235.7327f, 12.9444f;
			}
			return -1675.0555f, -2848.475f, 12.9444f;
			break;
		case 2:
			if (iParam0 == 0)
			{
				return 2141.7192f, 4811.8364f, 40.1823f;
			}
			return 1928.7467f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_628()//Position - 0x39FF6
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_86(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_86(2);
		}
		return;
	}
	if (func_650() || func_647())
	{
		func_596();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
	}
	if (func_650())
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_88(4);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (func_646(2))
			{
				func_645(2);
			}
			if (!__LIB_0__::func_945())
			{
				if (func_646(3))
				{
					func_645(3);
				}
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (func_592(iVar0))
				{
					VEHICLE::SET_BIKE_EASY_TO_LAND(iVar1, true);
					__LIB_21__::func_924(3);
					if (func_646(4))
					{
						func_645(4);
					}
					if (!func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_88(2);
					}
					if (BitTest(Local_154.f_2, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_START");
							func_88(1);
							__LIB_19__::func_471();
							NETWORK::SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(true);
						}
						if (!func_641() || !func_640())
						{
							if (__LIB_1__::func_802(PLAYER::PLAYER_ID()))
							{
								if (!func_641())
								{
									func_629(6);
								}
							}
							else
							{
								func_629(7);
							}
						}
						else
						{
							func_629(8);
						}
					}
				}
				else
				{
					if (func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						func_86(1);
					}
					if (func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_86(2);
					}
					func_629(4);
				}
			}
			else
			{
				if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					func_86(1);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 2))
				{
					func_86(2);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 4))
				{
					func_86(4);
				}
				func_629(3);
			}
		}
		else
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				func_86(1);
			}
			if (func_44(NETWORK::PARTICIPANT_ID(), 2))
			{
				func_86(2);
			}
			func_629(2);
		}
	}
	else
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_86(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_86(2);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_86(4);
			__LIB_2__::func_52(0);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

void func_629(int iParam0)//Position - 0x3A26E
{
	struct<8> Var0;
	int iVar1;
	if (__LIB_30__::func_830())
	{
		if (!func_646(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					__LIB_1__::func_707("JST_PASSMD" /* GXT: You can't participate in this event while Passive Mode is enabled. */, -1);
					break;
				case 2:
					__LIB_1__::func_707("JST_NOBIKE" /* GXT: You need a motorcycle to take part in Joust. */, -1);
					break;
				case 5:
					break;
				case 6:
					__LIB_1__::func_707("JST_HRBOSS" /* GXT: The rival President needs to be within their start area before Joust will begin. */, -1);
					break;
				case 7:
					__LIB_1__::func_707("JST_HWBOSS" /* GXT: Your President and the rival President need to be within their start area before Joust will begin. */, -1);
					break;
				case 8:
					__LIB_1__::func_707("JST_HTBOSS" /* GXT: Joust will begin when the time expires. */, -1);
					break;
				case 9:
					__LIB_1__::func_707("JST_KBIKE" /* GXT: Only kills gained while you are riding a motorcycle will count. */, -1);
					break;
				case 11:
					__LIB_1__::func_707("JST_OAREA" /* GXT: Only kills gained while you are within the marked area will count */, -1);
					break;
				case 12:
					__LIB_1__::func_707("JST_HSTART" /* GXT: Joust has started. */, -1);
					break;
				case 13:
					if (__LIB_5__::func_234())
					{
						__LIB_21__::func_886("JST_HTBLAUNCH" /* GXT: Joust has started. Go to the starting area ~a~~s~ and prepare to take out the rival MC on motorcycles to earn cash and RP. */, "JST_BLIP" /* GXT: ~BLIP_BIKER_JOUST~ */, iLocal_131, -1);
					}
					else
					{
						__LIB_21__::func_886("JST_HGNLNCH" /* GXT: Joust has started. Go to the starting area ~a~~s~ and prepare to take out the rival MC on motorcycles to earn cash and RP. */, "JST_BLIP" /* GXT: ~BLIP_BIKER_JOUST~ */, iLocal_131, -1);
					}
					break;
				case 14:
					__LIB_21__::func_886("JST_HGNLNCH" /* GXT: Joust has started. Go to the starting area ~a~~s~ and prepare to take out the rival MC on motorcycles to earn cash and RP. */, "JST_BLIP" /* GXT: ~BLIP_BIKER_JOUST~ */, iLocal_131, -1);
					break;
				case 10:
					__LIB_21__::func_886("JST_FIGHT" /* GXT: Kill the rival MC ~a~ ~s~to earn points. Kills only count while you ride a motorcycle within the marked area. */, "HUNT_TARBLP" /* GXT: ~BLIP_TEMP_4~ */, iLocal_132, -1);
					break;
				case 15:
					__LIB_21__::func_886("JST_AMMOH" /* GXT: Ammo pickups ~a~ ~s~are marked on the map. */, "JST_AMMOBL" /* GXT: ~BLIP_GANG_ATTACK_PACKAGE~ */, 18, -1);
					break;
				case 16:
					StringCopy(&Var0, __LIB_30__::func_905(func_36()), 64);
					iVar1 = __LIB_20__::func_73(func_36());
					__LIB_3__::func_132("JST_RVLLNCH" /* GXT: ~a~ ~s~have started Joust. Go to the starting area ~a~ ~s~and prepare to take them out on motorcycles to earn cash and RP. */, &Var0, iVar1, "JST_BLIP" /* GXT: ~BLIP_BIKER_JOUST~ */, iLocal_131, -1);
					break;
				case 17:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != joaat("oppressor"))
						{
							__LIB_1__::func_707("JST_DOUB" /* GXT: Killing a rival President or killing a rival Member with biker melee will award additional points. */, -1);
						}
					}
					break;
				default:
					break;
			}
			__LIB_16__::func_609(1);
			func_630(iParam0);
		}
	}
}

void func_630(int iParam0)//Position - 0x3A418
{
	MISC::SET_BIT(&uLocal_110, iParam0);
}

bool func_640()//Position - 0x3A6D4
{
	int iVar0;
	int iVar1;
	iVar1 = func_34(PLAYER::PLAYER_ID());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_641()//Position - 0x3A6FD
{
	int iVar0;
	int iVar1;
	iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_645(int iParam0)//Position - 0x3A79C
{
	MISC::CLEAR_BIT(&uLocal_110, iParam0);
}

bool func_646(int iParam0)//Position - 0x3A7AD
{
	return BitTest(uLocal_110, iParam0);
}

int func_647()//Position - 0x3A7BB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { func_626(func_649(PLAYER::PLAYER_ID())) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
	fVar3 = (func_648(func_649(PLAYER::PLAYER_ID())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (MISC::ABSF((Var1.f_2 - Var0.f_2)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_648(int iParam0)//Position - 0x3A81F
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_649(int iParam0)//Position - 0x3A83A
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_650()//Position - 0x3A85C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { func_626(func_34(PLAYER::PLAYER_ID())) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
	fVar3 = (func_648(func_34(PLAYER::PLAYER_ID())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (MISC::ABSF((Var1.f_2 - Var0.f_2)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

void func_651()//Position - 0x3A8C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	HUD::GET_HUD_COLOUR(iLocal_131, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_648(func_34(PLAYER::PLAYER_ID()));
	Var7 = { func_626(func_34(PLAYER::PLAYER_ID())) };
	Var7.f_2 = (Var7.f_2 - fVar5);
	GRAPHICS::DRAW_MARKER(1, Var7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, false, false, 2, false, 0, 0, false);
}

void func_652()//Position - 0x3A932
{
	if (func_691())
	{
		func_685();
		__LIB_0__::func_467();
		func_671();
		func_654();
		func_653();
	}
	else
	{
		switch (func_116(PLAYER::PLAYER_ID()))
		{
			case 0:
				__LIB_3__::func_0();
				break;
			case 1:
				func_685();
				break;
			case 2:
				func_653();
				break;
			case 3:
				func_685();
				__LIB_0__::func_467();
				func_671();
				func_653();
				func_654();
				break;
			}
	}
}

void func_653()//Position - 0x3A9A9
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				if (!func_646(10))
				{
					func_629(10);
				}
				else
				{
					func_629(15);
				}
				if (!func_646(17))
				{
					func_629(17);
				}
			}
		}
		else if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_629(12);
		}
		else
		{
			func_629(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_691())
		{
			if (PLAYER::PLAYER_ID() == Local_154.f_16[0])
			{
				func_629(13);
			}
			else
			{
				func_629(14);
			}
		}
		else
		{
			func_629(16);
		}
	}
}

void func_654()//Position - 0x3AA4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_864(&uLocal_151))
	{
		if (__LIB_0__::func_864(&(Local_154.f_5)))
		{
			iLocal_121 = (func_3() - __LIB_1__::func_724(&(Local_154.f_5), 0, 0));
			if (iLocal_121 < func_3())
			{
				if (iLocal_121 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				__LIB_1__::func_910();
				iVar2 = func_34(PLAYER::PLAYER_ID());
				iVar3 = (1 - iVar2);
				iVar4 = __LIB_20__::func_73(PLAYER::PLAYER_ID());
				iVar5 = Local_154.f_16[iVar3];
				if (Local_154.f_24[iVar2] > 0)
				{
					func_667(Local_154.f_27[iVar2], "JST_TEAML" /* GXT: YOUR MC SCORE */, -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_91, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				else
				{
					func_667(Local_154.f_27[iVar2], "JST_TEAML" /* GXT: YOUR MC SCORE */, 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_91, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				if (iVar5 != __LIB_0__::func_162())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_142))
						{
							iVar4 = __LIB_20__::func_73(iVar5);
							func_667(Local_154.f_27[iVar3], "JST_ETEAML" /* GXT: ENEMY MC SCORE */, -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_91, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
						}
					}
				}
				if (iLocal_121 > 0)
				{
					__LIB_1__::func_350(iLocal_121, "CLUB_WORK_END" /* GXT: CLUB WORK END */, 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					__LIB_1__::func_350(0, "CLUB_WORK_END" /* GXT: CLUB WORK END */, 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
		else
		{
			func_655();
		}
	}
	else
	{
		iVar0 = (10000 - __LIB_1__::func_724(&uLocal_151, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_1__::func_910();
			__LIB_1__::func_350(iVar0, "PEN_ELM" /* GXT: ELIMINATION */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
		}
	}
}

void func_655()//Position - 0x3AC11
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_577())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = __LIB_30__::func_893();
	if (func_17(5))
	{
		iVar1 = __LIB_19__::func_394();
	}
	if (bVar0)
	{
		iVar2 = __LIB_8__::func_467();
		if (iVar2 > iLocal_115)
		{
			iVar2 = iLocal_115;
		}
		if (iVar3 != Local_154.f_3)
		{
			iVar3 = Local_154.f_3;
		}
		if ((iVar1 - __LIB_1__::func_724(&(Local_154.f_7), 0, 0)) >= 0)
		{
			__LIB_1__::func_961((iVar1 - __LIB_1__::func_724(&(Local_154.f_7), 0, 0)));
			__LIB_30__::func_906(iVar3, iVar2, (iVar1 - __LIB_1__::func_724(&(Local_154.f_7), 0, 0)), 1, __LIB_1__::func_960(-1));
		}
		else
		{
			__LIB_30__::func_906(iVar3, iVar2, 0, 1, __LIB_1__::func_960(-1));
		}
	}
}

void func_667(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x3B2D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = iParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = uParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && __LIB_1__::func_710())
		{
			Global_1649593.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (__LIB_1__::func_709())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

void func_671()//Position - 0x3B5B3
{
	if (iLocal_118 > -1)
	{
		if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118), 1))
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118), 6))
			{
				if (func_593())
				{
					if (func_591())
					{
						if (!__LIB_3__::func_417("JST_OBJ_KILL" /* GXT: Take out the Members of ~a~. */))
						{
							__LIB_22__::func_452("JST_OBJ_KILL" /* GXT: Take out the Members of ~a~. */, &Local_142, iLocal_132, 0);
						}
					}
					else
					{
						if (__LIB_3__::func_417("JST_OBJ_KILL" /* GXT: Take out the Members of ~a~. */))
						{
							__LIB_3__::func_0();
						}
						if (!__LIB_3__::func_417("JST_FBIKE" /* GXT: Get on a motorcycle. */))
						{
							__LIB_3__::func_198("JST_FBIKE" /* GXT: Get on a motorcycle. */, 0);
						}
						if (!func_44(NETWORK::PARTICIPANT_ID(), 10))
						{
							func_88(10);
							__LIB_0__::func_151("JST_FBIKEGUNS" /* GXT: Weapons are disabled until you get back on a motorcycle. */, -1);
						}
					}
				}
				else if (func_591())
				{
					if (!__LIB_3__::func_417("JST_OBKAREA" /* GXT: Get back to the ~HUD_COLOUR_NET_PLAYER2~area. */))
					{
						__LIB_3__::func_198("JST_OBKAREA" /* GXT: Get back to the ~HUD_COLOUR_NET_PLAYER2~area. */, 0);
					}
				}
				else
				{
					if (__LIB_3__::func_417("JST_OBJ_KILL" /* GXT: Take out the Members of ~a~. */))
					{
						__LIB_3__::func_0();
					}
					if (!__LIB_3__::func_417("JST_FBIKE" /* GXT: Get on a motorcycle. */))
					{
						__LIB_3__::func_198("JST_FBIKE" /* GXT: Get on a motorcycle. */, 0);
					}
				}
			}
			else if (func_826(9))
			{
				if (func_591())
				{
					if (!__LIB_3__::func_417("JST_OBJ_CHARGE" /* GXT: Get ready to charge ~a~. */))
					{
						__LIB_22__::func_452("JST_OBJ_CHARGE" /* GXT: Get ready to charge ~a~. */, &Local_142, iLocal_132, 0);
					}
				}
			}
		}
		else if (!func_650())
		{
			if (!__LIB_3__::func_417("JST_OGOAREA" /* GXT: Go to the ~a~. */))
			{
				__LIB_19__::func_873("JST_OGOAREA" /* GXT: Go to the ~a~. */, "JST_START" /* GXT: start area */, iLocal_131, 0);
			}
		}
		else if (!func_591())
		{
			if (!__LIB_3__::func_417("JST_OBIKE" /* GXT: You need a motorcycle to take part in Joust. */))
			{
				__LIB_3__::func_198("JST_OBIKE" /* GXT: You need a motorcycle to take part in Joust. */, 0);
			}
		}
	}
}

void func_685()//Position - 0x3BA03
{
	if (!func_577())
	{
		func_690();
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_126))
		{
			HUD::REMOVE_BLIP(&iLocal_126);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_125))
		{
			HUD::REMOVE_BLIP(&iLocal_125);
		}
		if (iLocal_118 > -1)
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118), 1))
			{
				func_686();
			}
		}
	}
}

void func_686()//Position - 0x3BA56
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	func_689(&Var0);
	if (!HUD::DOES_BLIP_EXIST(iLocal_127))
	{
		func_688(&fVar1, &fVar2, &iVar3);
		iLocal_127 = HUD::ADD_BLIP_FOR_AREA(Var0, fVar1, fVar2);
		HUD::SET_BLIP_ROTATION(iLocal_127, iVar3);
		__LIB_1__::func_540(&iLocal_127, 29);
		HUD::SET_BLIP_ALPHA(iLocal_127, 180);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_127, false);
	}
}

void func_688(var uParam0, var uParam1, var uParam2)//Position - 0x3BAD1
{
	if (Local_154.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_154.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_154.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_689(var uParam0)//Position - 0x3BB39
{
	switch (Local_154.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		case 1:
			*uParam0 = { -1342.0555f, -3041.475f, 10.9444f };
			break;
		case 2:
			*uParam0 = { 2039.7467f, 4768.012f, 40.1674f };
			break;
	}
}

void func_690()//Position - 0x3BB9F
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_126))
	{
		iLocal_126 = HUD::ADD_BLIP_FOR_COORD(func_626(func_34(PLAYER::PLAYER_ID())));
		HUD::SET_BLIP_SPRITE(iLocal_126, 495);
		HUD::SET_BLIP_FLASHES(iLocal_126, true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_126, 7000);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_126, "CELL_JOUST" /* GXT: Joust */);
		HUD::SET_BLIP_PRIORITY(iLocal_126, 9);
		Global_2815059.f_267 = 1;
		__LIB_1__::func_540(&iLocal_126, iLocal_131);
		if (!func_826(6))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			func_802(6);
		}
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_125))
	{
		iLocal_125 = HUD::ADD_BLIP_FOR_RADIUS(func_626(func_34(PLAYER::PLAYER_ID())), (func_648(func_34(PLAYER::PLAYER_ID())) / 2f));
		__LIB_1__::func_540(&iLocal_125, iLocal_131);
		HUD::SET_BLIP_ALPHA(iLocal_125, 100);
		HUD::SET_BLIP_SCALE(iLocal_125, 1.4f);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_125, false);
	}
}

int func_691()//Position - 0x3BC6C
{
	if (func_693() || func_692())
	{
		return 1;
	}
	return 0;
}

int func_692()//Position - 0x3BC8A
{
	return func_37(PLAYER::PLAYER_ID());
}

bool func_693()//Position - 0x3BC9A
{
	return func_35(PLAYER::PLAYER_ID());
}

void func_802(int iParam0)//Position - 0x467DA
{
	MISC::SET_BIT(&uLocal_109, iParam0);
}

bool func_826(int iParam0)//Position - 0x47430
{
	return BitTest(uLocal_109, iParam0);
}

void func_835(int iParam0, int iParam1)//Position - 0x47589
{
	Local_155[iParam0 /*6*/] = iParam1;
}

bool func_836()//Position - 0x4759A
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 3))
	{
		if (func_17(1))
		{
			__LIB_3__::func_453("JCMcBpPl9UWmcdOYFza0Tg");
			__LIB_3__::func_453("jDF4fBBUqG9ZuI9TR7mw");
			func_88(3);
			__LIB_1__::func_950();
		}
	}
	return func_44(NETWORK::PARTICIPANT_ID(), 3);
}

int func_844()//Position - 0x47AC6
{
	return Local_154.f_0;
}

int func_845(int iParam0)//Position - 0x47AD1
{
	return Local_155[iParam0 /*6*/];
}

void func_846()//Position - 0x47AE0
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &uVar2, 2);
				break;
			case 186:
				func_847(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_847(int iParam0)//Position - 0x47B31
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						if (Var0.f_5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(iVar1))
									{
										iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
										if (iVar3 == PLAYER::PLAYER_ID())
										{
											if (func_591())
											{
												if (func_593())
												{
													if (!__LIB_2__::func_842(iVar3, iVar2) && func_850(iVar3))
													{
														if (__LIB_30__::func_827(Var0))
														{
															if (__LIB_1__::func_802(iVar2))
															{
																Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18813 /* Tunable: 1055820120 */ * Global_262145.f_18814 /* Tunable: 1372358906 */));
															}
															else
															{
																Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18812 /* Tunable: -1366533709 */ * Global_262145.f_18814 /* Tunable: 1372358906 */));
															}
														}
														else if (__LIB_1__::func_802(iVar2))
														{
															Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18813 /* Tunable: 1055820120 */);
														}
														else
														{
															Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18812 /* Tunable: -1366533709 */);
														}
													}
													else if (iVar3 == iVar2 || !__LIB_2__::func_842(iVar3, iVar2))
													{
														if (__LIB_30__::func_827(Var0))
														{
															Local_155[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_629(11);
												}
											}
											else
											{
												func_629(9);
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

int func_850(int iParam0)//Position - 0x47DF2
{
	int iVar0;
	int iVar1;
	PLAYER::GET_PLAYER_NAME(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
		iVar1 = __LIB_5__::func_199(iVar0);
		if (__LIB_2__::func_842(iVar1, iParam0) || iVar1 == iParam0)
		{
			PLAYER::GET_PLAYER_NAME(iParam0);
			PLAYER::GET_PLAYER_NAME(iVar1);
			return 1;
		}
	}
	return 0;
}

void func_852()//Position - 0x47EA4
{
	int iVar0;
	if (func_17(1))
	{
		if (!func_826(9))
		{
			iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
			if (Local_154.f_16[1] != Local_154.f_16[0])
			{
				if (Local_154.f_16[iVar0] != __LIB_0__::func_162())
				{
					StringCopy(&Local_142, __LIB_30__::func_905(Local_154.f_16[iVar0]), 64);
					iLocal_132 = __LIB_20__::func_73(Local_154.f_16[iVar0]);
					func_802(9);
				}
			}
		}
	}
}

void func_853()//Position - 0x47F15
{
	bool bVar0;
	int iVar1;
	if (!NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
	{
	}
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (!BitTest(uLocal_117, bVar0))
				{
					NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
					MISC::SET_BIT(&uLocal_117, bVar0);
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!BitTest(uLocal_116, bVar0))
							{
								if (((!__LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !__LIB_31__::func_757(PLAYER::GET_PLAYER_PED(iVar1))) && !__LIB_2__::func_842(PLAYER::PLAYER_ID(), iVar1)) && (func_650() || func_647()))
								{
									NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, true);
									MISC::SET_BIT(&uLocal_116, bVar0);
								}
							}
							else if (__LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
								MISC::CLEAR_BIT(&uLocal_116, bVar0);
							}
							else if (__LIB_31__::func_757(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
								MISC::CLEAR_BIT(&uLocal_116, bVar0);
							}
							else if (__LIB_2__::func_842(PLAYER::PLAYER_ID(), iVar1))
							{
								NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
								MISC::CLEAR_BIT(&uLocal_116, bVar0);
							}
							else if (!func_650() && !func_647())
							{
								NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
								MISC::CLEAR_BIT(&uLocal_116, bVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					if (Local_155[iLocal_118 /*6*/].f_5 >= 2)
					{
						if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							if (!BitTest(uLocal_116, bVar0))
							{
								if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
								{
									if (!__LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !__LIB_31__::func_757(PLAYER::GET_PLAYER_PED(iVar1)))
									{
										NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, true);
										MISC::SET_BIT(&uLocal_116, bVar0);
									}
								}
							}
							else if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
							{
								if (__LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) || __LIB_31__::func_757(PLAYER::GET_PLAYER_PED(iVar1)))
								{
									NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
									MISC::CLEAR_BIT(&uLocal_116, bVar0);
								}
							}
						}
						else if (BitTest(uLocal_116, bVar0))
						{
							if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
							{
								NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
								MISC::CLEAR_BIT(&uLocal_116, bVar0);
							}
						}
					}
				}
				else
				{
					if (!BitTest(uLocal_116, bVar0))
					{
						if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, true);
							MISC::SET_BIT(&uLocal_116, bVar0);
						}
					}
					if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
					{
						if (BitTest(uLocal_116, bVar0))
						{
							NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, false);
							MISC::CLEAR_BIT(&uLocal_116, bVar0);
						}
					}
				}
			}
		}
		bVar0++;
	}
}

void func_856()//Position - 0x4827E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_120);
	iVar2 = func_34(PLAYER::PLAYER_ID());
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
		{
			iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
			if (iLocal_118 > -1)
			{
				if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118), 1))
				{
					if (func_826(9))
					{
						if (iVar0 != NETWORK::PARTICIPANT_ID())
						{
							iVar3 = func_34(bVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!BitTest(uLocal_119, iLocal_120))
										{
											__LIB_12__::func_535(bVar1, 432, 1, 0);
											__LIB_30__::func_773(bVar1, __LIB_1__::func_389(iLocal_132), 1, 0);
											MISC::SET_BIT(&uLocal_119, iLocal_120);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (BitTest(uLocal_119, iLocal_120))
		{
			__LIB_12__::func_535(bVar1, 432, 0, 0);
			__LIB_30__::func_773(bVar1, __LIB_1__::func_389(iLocal_132), 0, 0);
			MISC::CLEAR_BIT(&uLocal_119, iLocal_120);
		}
	}
	iLocal_120++;
	if (iLocal_120 >= 32)
	{
		iLocal_120 = 0;
	}
}

void func_857()//Position - 0x48371
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar5;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_101[bVar1 /*3*/] = __LIB_0__::func_162();
		Local_101[bVar1 /*3*/].f_1 = -1;
		Local_101[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_112, bVar1);
		MISC::CLEAR_BIT(&uLocal_114, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_100[iVar0 /*20*/] = __LIB_0__::func_162();
		Local_100[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_113, iVar0);
		Local_100[iVar0 /*20*/].f_2 = { Var4 };
		Local_100[iVar0 /*20*/].f_18 = 0;
		Local_100[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar5 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_100[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&uLocal_113, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_100[iVar0 /*20*/]);
			bVar1 = iVar2;
			if (__LIB_1__::func_693(iVar2, 0, 1))
			{
				iVar5++;
				Local_101[bVar1 /*3*/] = iVar2;
				Local_100[iVar0 /*20*/].f_1 = bVar1;
				Local_101[bVar1 /*3*/].f_1 = iVar0;
				Local_101[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_100[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&uLocal_112, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_101[bVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_114, bVar1);
				}
				if (__LIB_1__::func_802(Local_101[bVar1 /*3*/]))
				{
					Local_100[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_0__::func_536(Local_101[bVar1 /*3*/], 0))
				{
					Local_100[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_118 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_101[bVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_100[iVar0 /*20*/].f_18)
				{
					if (!BitTest(uLocal_114, bVar1) && !BitTest(uLocal_114, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_100[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_115 != iVar5)
	{
		iLocal_115 = iVar5;
	}
}

void func_859()//Position - 0x48556
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_118 = -1;
	if (BitTest(uLocal_112, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_113, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_0__::func_457(PLAYER::PLAYER_ID()))
			{
				iLocal_118 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_1__::func_5() && !__LIB_3__::func_155())
			{
				iVar0 = __LIB_2__::func_51();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_118 = iVar2;
					}
				}
			}
		}
	}
}

void func_881()//Position - 0x48C56
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_293(&iLocal_92))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
	}
	NETWORK::SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(false);
	__LIB_30__::func_901(&iLocal_92);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_129[0] || PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_129[1])
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_130);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 9))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			func_86(9);
		}
	}
	func_51();
	Global_2815059.f_267 = 0;
	__LIB_30__::func_418(Global_1943929, -1, -1, -1, -1);
	func_885(1, 0);
	__LIB_15__::func_421();
	__LIB_3__::func_0();
	__LIB_0__::func_814();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_592(iVar1))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iVar0, false);
		}
	}
	__LIB_21__::func_924(0);
	__LIB_2__::func_15();
	func_882();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_882()//Position - 0x48D43
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_129[0]);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_129[1]);
}

void func_885(bool bParam0, int iParam1)//Position - 0x48EAD
{
	int iVar0;
	int iVar1;
	if (Global_1637407.f_1.f_108 != 0)
	{
		Global_1637407.f_1.f_108 = 0;
	}
	Global_1637407.f_1.f_109 = -1;
	Global_1637407.f_1.f_110 = -1;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 167 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 168)
	{
		__LIB_15__::func_423();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 4);
	}
	if ((__LIB_5__::func_234() && iParam1 != 0) && Global_262145.f_17496 /* Tunable: 35628303 */)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 190 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 192)
		{
			__LIB_20__::func_23(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 164 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 208) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 250) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = -1;
		if (!BitTest(Global_1836844.f_1, 14) && !__LIB_1__::func_15(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_135(0);
		}
	}
	else if (__LIB_4__::func_921(PLAYER::PLAYER_ID()) != -1)
	{
		__LIB_7__::func_945(-1);
	}
	__LIB_19__::func_328(__LIB_0__::func_162());
	if (__LIB_1__::func_731(16))
	{
		__LIB_11__::func_662(16);
	}
	__LIB_19__::func_475(0);
	__LIB_15__::func_414(-1);
	__LIB_15__::func_421();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_15__::func_455(iVar0);
		iVar0++;
	}
	if (BitTest(Global_1943920.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 0);
	}
	if (BitTest(Global_1943920.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 5);
	}
	iVar1 = __LIB_12__::func_520();
	if ((__LIB_1__::func_877(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		__LIB_19__::func_474(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || __LIB_3__::func_709(iVar1))
	{
		__LIB_19__::func_473(-1, 1);
	}
	else if (((((__LIB_1__::func_378(iVar1) || __LIB_15__::func_419(iVar1)) || __LIB_4__::func_825(iVar1)) || __LIB_4__::func_740(iVar1)) || __LIB_1__::func_612(iVar1)) || __LIB_1__::func_77(iVar1))
	{
	}
	else
	{
		__LIB_19__::func_473(-1, 1);
	}
	__LIB_1__::func_967(19);
	__LIB_1__::func_967(20);
	__LIB_1__::func_967(21);
	__LIB_1__::func_967(22);
	__LIB_1__::func_967(27);
	__LIB_11__::func_662(3);
	__LIB_11__::func_662(4);
	__LIB_11__::func_662(7);
	__LIB_19__::func_444();
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()))
	{
		func_906(0);
	}
	__LIB_1__::func_967(29);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_162();
	if (Global_2815059.f_5195.f_43 != 0)
	{
		Global_2815059.f_5195.f_43 = 0;
	}
	if (bParam0)
	{
		__LIB_20__::func_21();
	}
	if (!__LIB_1__::func_15(PLAYER::PLAYER_ID()))
	{
		__LIB_2__::func_16();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 1);
	}
	if (BitTest(Global_1943920.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 6);
	}
	if (BitTest(Global_1943920.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 7);
	}
	if (BitTest(Global_1943920.f_3, 8))
	{
		__LIB_12__::func_518("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */, 0);
		__LIB_12__::func_565("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 8);
	}
	__LIB_15__::func_621(iVar1, 0);
}

void func_906(bool bParam0)//Position - 0x49934
{
	if (bParam0)
	{
		if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
		{
			if (func_116(PLAYER::PLAYER_ID()) != 0)
			{
				__LIB_1__::func_966(9);
			}
		}
	}
	else if (__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
	{
		__LIB_1__::func_967(9);
	}
}

void func_953(bool bParam0, bool bParam1)//Position - 0x4B653
{
	bool bVar0;
	var uVar1;
	if (!func_826(0))
	{
		uVar1 = func_1032(func_25(), bParam0, bVar0, bParam1);
		Global_1943929.f_2 = Local_154.f_33;
		Global_1943929.f_3 = Local_154.f_34;
		__LIB_20__::func_136(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		func_802(0);
	}
}

int func_1032(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x513AC
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_1033(struct<21> Param0)//Position - 0x5140B
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_154, 35, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_155, 193, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_20__::func_516(0, 0, 0);
	func_1034();
	return 1;
}

void func_1034()//Position - 0x5144F
{
	int iVar0;
	int iVar1;
	int iVar2;
	PED::ADD_RELATIONSHIP_GROUP("relJoust0", &(uLocal_129[0]));
	PED::ADD_RELATIONSHIP_GROUP("relJoust1", &(uLocal_129[1]));
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar1], uLocal_129[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_129[iVar2], Global_1837161[iVar1]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, uLocal_129[iVar2], joaat("COP"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("COP"), uLocal_129[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_129[iVar2], Global_1837209[5]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837209[5], uLocal_129[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_129[iVar2], Global_1837194);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837194, uLocal_129[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_129[0], uLocal_129[1]);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_129[1], uLocal_129[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), uLocal_129[iVar2]);
		__LIB_30__::func_898(&(uLocal_129[iVar2]));
		iVar2++;
	}
}

