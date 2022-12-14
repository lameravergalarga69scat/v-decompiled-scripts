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
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105[4] = { 0, 0, 0, 0 };
	var uLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int* iLocal_116 = NULL;
	int iLocal_117 = 0;
	struct<22> Local_118 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_119[32];
	struct<21> Local_120 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_1004(ScriptParam_120))
		{
			func_950();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_950();
		}
		if (__LIB_36__::func_425(1))
		{
			func_950();
		}
		switch (func_933(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_932() == 1)
				{
					func_931(1);
					func_915();
				}
				break;
			case 1:
				if (func_932() == 1)
				{
					func_32();
				}
				else if (func_932() == 3)
				{
					func_931(3);
				}
				break;
			case 3:
				func_950();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_932() != 3 && __LIB_15__::func_374())
			{
				func_30(3);
			}
			switch (func_932())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				case 3:
					func_950();
					break;
				}
		}
	}
}

int func_1()//Position - 0x175
{
	var uVar0;
	bool bVar1;
	func_22();
	switch (Local_118.f_1)
	{
		case 0:
			if (!__LIB_0__::func_864(&(Local_118.f_10)))
			{
				__LIB_0__::func_795(&(Local_118.f_10), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_118.f_10), Global_262145.f_12961 /* Tunable: GB_HUNTBOSS_AREA_EXPIRY_TIME */, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 4);
				func_18(2);
			}
			if (!__LIB_0__::func_86(Local_118.f_7))
			{
				if (func_13((Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1), &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (BitTest(Local_118.f_2, 1))
			{
				func_18(2);
			}
			if (__LIB_1__::func_20(Local_118.f_5) || __LIB_1__::func_511(Local_118.f_5, 1, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 2);
				func_18(2);
			}
			break;
		case 1:
			if (!__LIB_0__::func_864(&(Local_118.f_12)))
			{
				__LIB_0__::func_795(&(Local_118.f_12), 0, 0);
			}
			else
			{
				if (!__LIB_0__::func_864(&(Local_118.f_16)))
				{
					if (!func_13(Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
					{
						__LIB_0__::func_627(&(Local_118.f_16), 0, 0);
						MISC::SET_BIT(&(Local_118.f_2), 6);
					}
				}
				else if (!func_13(Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
				{
					if (__LIB_0__::func_937(&(Local_118.f_16), 20000, 0))
					{
						MISC::SET_BIT(&(Local_118.f_2), 2);
					}
				}
				else
				{
					__LIB_0__::func_794(&(Local_118.f_16));
					__LIB_0__::func_627(&(Local_118.f_18), 0, 0);
					MISC::CLEAR_BIT(&(Local_118.f_2), 6);
				}
				if (__LIB_0__::func_864(&(Local_118.f_18)))
				{
					if (__LIB_0__::func_937(&(Local_118.f_18), 5000, 0))
					{
						__LIB_0__::func_794(&(Local_118.f_18));
					}
				}
				bVar1 = func_7();
				if (__LIB_0__::func_937(&(Local_118.f_12), Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */, 0) || bVar1)
				{
					func_18(2);
					if (!bVar1)
					{
						MISC::SET_BIT(&(Local_118.f_2), 0);
					}
					else
					{
						func_2();
					}
				}
			}
			if (__LIB_1__::func_20(Local_118.f_5) || __LIB_1__::func_511(Local_118.f_5, 1, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 2);
				func_18(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_864(&(Local_118.f_14)))
			{
				__LIB_0__::func_795(&(Local_118.f_14), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_118.f_14), 15000, 0))
			{
				func_18(3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_2()//Position - 0x39F
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	if (!BitTest(Local_118.f_2, 5))
	{
		if (BitTest(Local_118.f_2, 3))
		{
			Var0.f_0 = -1529596656;
			Var0.f_1 = PLAYER::PLAYER_ID();
			Var0.f_2 = 1789320243;
			Var0.f_10 = func_6();
			__LIB_1__::func_634(Var0, func_4());
			MISC::SET_BIT(&(Local_118.f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 0))
		{
			Var1.f_0 = -1529596656;
			Var1.f_1 = PLAYER::PLAYER_ID();
			Var1.f_2 = -1248118654;
			__LIB_1__::func_634(Var1, func_4());
			MISC::SET_BIT(&(Local_118.f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 2) || BitTest(Local_118.f_2, 1))
		{
			Var2.f_0 = -1529596656;
			Var2.f_1 = PLAYER::PLAYER_ID();
			Var2.f_2 = -1863580758;
			__LIB_1__::func_634(Var2, func_4());
			MISC::SET_BIT(&(Local_118.f_2), 5);
		}
	}
}

int func_4()//Position - 0x49D
{
	var uVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_1__::func_693(bVar2, 0, 0))
		{
			if (!BitTest(Local_119[iVar1 /*3*/].f_2, 0))
			{
				MISC::SET_BIT(&uVar0, bVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_6()//Position - 0x543
{
	return Local_118.f_6;
}

int func_7()//Position - 0x54F
{
	if ((((BitTest(Local_118.f_2, 0) || BitTest(Local_118.f_2, 1)) || BitTest(Local_118.f_2, 2)) || BitTest(Local_118.f_2, 3)) || BitTest(Local_118.f_2, 4))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x661
{
	int iVar0;
	float fVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(func_16());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	*uParam1 = __LIB_0__::func_724(iVar0, Local_118.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam1 = __LIB_3__::func_480(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0;
	}
	return 1;
}

int func_16()//Position - 0x719
{
	return Local_118.f_5;
}

void func_18(int iParam0)//Position - 0x74F
{
	Local_118.f_1 = iParam0;
}

void func_22()//Position - 0x80C
{
	int iVar0;
	if (!BitTest(Local_118.f_2, 1))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_16()))
		{
			MISC::SET_BIT(&(Local_118.f_2), 1);
		}
	}
	if (!BitTest(Local_118.f_2, 1) && !BitTest(Local_118.f_2, 2))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (BitTest(Local_119[iVar0 /*3*/].f_2, 11))
			{
				MISC::SET_BIT(&(Local_118.f_2), 2);
				if (Local_118.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

int func_23()//Position - 0x888
{
	struct<3> Var0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	Local_118.f_5 = __LIB_1__::func_730();
	Local_118.f_6 = __LIB_0__::func_162();
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_118.f_20), &(Local_118.f_21));
	Var0[0 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	Var0[1 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	Var0[2 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	Var0[3 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var0[iVar3 /*3*/], 1);
		iVar3++;
	}
	fVar2 = uVar1[0];
	iVar4 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_118.f_3 = iVar4;
	Local_118.f_7 = { func_24(Local_118.f_3) };
	return 1;
}

Vector3 func_24(int iParam0)//Position - 0x983
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			bVar4 = false;
			iVar5 = 7;
			break;
		case 2:
			iVar1 = 6;
			bVar4 = 8;
			iVar5 = 7;
			break;
		case 3:
			iVar1 = 5;
			bVar4 = 16;
			iVar5 = 6;
			break;
		case 4:
			iVar1 = 4;
			bVar4 = 24;
			iVar5 = 5;
			break;
	}
	NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(iVar0);
	iVar2 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, iVar1);
	iVar3 = __LIB_1__::func_360(2954, -1, 0);
	if (iVar5 > 1)
	{
		if (BitTest(iVar3, bVar4))
		{
			bVar6 = bVar4 + 1;
			while (bVar6 <= (bVar4 + 1 + (iVar5 - 1)))
			{
				if (BitTest(iVar3, bVar6))
				{
					if (bVar6 - bVar4 + 1) >= (iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = (bVar6 - bVar4 + 1) + 1;
					}
					bVar6 = (bVar4 + 1 + (iVar5 - 1));
				}
				bVar6++;
			}
		}
	}
	iVar3 = 0;
	MISC::SET_BIT(&iVar3, (bVar4 + 1 + iVar2));
	MISC::SET_BIT(&iVar3, bVar4);
	__LIB_1__::func_354(2954, iVar3, -1, 1, 0);
	Local_118.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472.415f, -1689.474f, 17.9477f;
				case 1:
					return -1654.092f, 213.143f, 59.6413f;
				case 2:
					return -1008.389f, -1020.496f, 1.1503f;
				case 3:
					return -604.266f, -142.684f, 38.0086f;
				case 4:
					return -1700.562f, -322.726f, 49.0851f;
				case 5:
					return -1158.28f, -383.876f, 50.7161f;
				case 6:
					return -1191.066f, -1491.259f, 3.3797f;
				default:
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160.142f, -1761.704f, 28.0984f;
				case 1:
					return 1097.841f, -554.319f, 54.7365f;
				case 2:
					return 191.932f, 124.653f, 96.9401f;
				case 3:
					return 323.693f, -867.527f, 28.1726f;
				case 4:
					return 1386.79f, -1689.002f, 61.0964f;
				case 5:
					return 968.623f, -3067.462f, 4.9008f;
				case 6:
					return 928.85f, -2270.156f, 29.5096f;
				default:
			}
			break;
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667.876f, 3710.527f, 33.0008f;
				case 1:
					return 2459.918f, 4827.391f, 34.4214f;
				case 2:
					return 1506.714f, 6513.564f, 19.8804f;
				case 3:
					return 2501.049f, 2639.483f, 42.5508f;
				case 4:
					return 2658.2385f, 1542.7285f, 23.4847f;
				case 5:
					return 1415.427f, 1819.726f, 102.3258f;
				default:
			}
			break;
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194.476f, 6316.824f, 30.5625f;
				case 1:
					return -660.505f, 5677.562f, 30.7898f;
				case 2:
					return -1557.125f, 4561.964f, 18.5454f;
				case 3:
					return -159.803f, 2713.044f, 54.3232f;
				case 4:
					return -3240.385f, 1106.345f, 1.5823f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_30(int iParam0)//Position - 0xDED
{
	Local_118.f_0 = iParam0;
}

void func_32()//Position - 0xE1C
{
	bLocal_107 = __LIB_1__::func_693(func_16(), 0, 1);
	func_911();
	func_842();
	func_841();
	func_833();
	func_814();
	func_809();
	func_788();
	func_766();
	func_756();
	switch (Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 0:
			if (func_755())
			{
				func_748(0);
			}
			else if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
			{
				func_748(6);
			}
			break;
		case 1:
			if (func_755())
			{
				func_748(5);
				func_715(2);
				if (bLocal_107)
				{
					if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
					{
						__LIB_19__::func_471();
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
					}
				}
				if (!__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_7__::func_701(PLAYER::PLAYER_ID(), 0);
				}
				if (BitTest(Local_118.f_2, 6))
				{
					func_748(4);
				}
			}
			else if (bLocal_107)
			{
				if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					func_748(3);
					func_715(1);
				}
				else
				{
					func_715(0);
					if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
					{
						func_748(8);
					}
					else
					{
						func_748(1);
					}
					if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						func_707();
						func_704();
					}
				}
			}
			if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 7))
			{
				__LIB_19__::func_573(-1, 0, 0, -1, 0, 0);
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 7);
			}
			__LIB_36__::func_423(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
			break;
		case 2:
			if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 19))
				{
					func_384();
					return;
				}
			}
			if (func_755())
			{
				if (__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
				}
				if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 11))
				{
					func_950();
					return;
				}
			}
			func_86();
			func_384();
			if (BitTest(Local_118.f_2, 0))
			{
				if (func_755())
				{
					func_715(10);
				}
				else if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					func_715(11);
				}
				else
				{
					func_715(6);
				}
				func_82(Local_118.f_5);
			}
			else if (BitTest(Local_118.f_2, 1))
			{
				if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), Local_118.f_5, 1))
					{
						func_715(7);
					}
				}
				func_82(0);
			}
			else if (BitTest(Local_118.f_2, 2))
			{
				if (func_755())
				{
					func_715(12);
				}
				else if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					func_715(13);
				}
				else if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					func_715(14);
				}
				func_82(0);
			}
			else if (BitTest(Local_118.f_2, 3))
			{
				if (func_755())
				{
					if (func_81())
					{
						func_715(9);
					}
					else
					{
						func_715(8);
					}
				}
				else if (Local_118.f_6 == PLAYER::PLAYER_ID())
				{
					if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
					{
						func_715(15);
					}
					else
					{
						func_715(3);
					}
				}
				else if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					if (func_81())
					{
						func_715(17);
					}
					else
					{
						func_715(4);
					}
				}
				func_82(Local_118.f_6);
			}
			else if (BitTest(Local_118.f_2, 4))
			{
				if (func_755())
				{
					func_715(16);
				}
				func_82(0);
			}
			if (__LIB_32__::func_212(&uLocal_93, 1, 0))
			{
				func_931(3);
			}
			break;
		case 3:
			break;
	}
}

int func_81()//Position - 0x2590
{
	if (Local_118.f_6 == __LIB_0__::func_162() || Local_118.f_5 == __LIB_0__::func_162())
	{
		return 0;
	}
	if (!__LIB_1__::func_876(Local_118.f_6, Local_118.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)//Position - 0x25CD
{
	if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 6))
	{
		if (iParam0 != __LIB_0__::func_162())
		{
			__LIB_30__::func_900(0, iParam0);
		}
		else
		{
			__LIB_30__::func_900(0, __LIB_0__::func_162());
		}
		MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 6);
	}
}

void func_86()//Position - 0x26E6
{
	struct<20> Var0;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 5))
	{
		if (BitTest(Local_118.f_2, 3))
		{
			if (PLAYER::PLAYER_ID() == func_6())
			{
				if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					__LIB_42__::func_75(164, 0, &Var0, 0);
				}
				else
				{
					__LIB_42__::func_75(164, 1, &Var0, 0);
				}
			}
			else
			{
				__LIB_42__::func_75(164, 0, &Var0, 0);
			}
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 0))
		{
			if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				__LIB_42__::func_75(164, 1, &Var0, 0);
			}
			else
			{
				__LIB_42__::func_75(164, 0, &Var0, 0);
			}
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 2) || BitTest(Local_118.f_2, 1))
		{
			__LIB_42__::func_75(164, 0, &Var0, 0);
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
	}
}

void func_384()//Position - 0x32C26
{
	if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 7))
	{
		if (BitTest(Local_118.f_2, 0))
		{
			if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				__LIB_32__::func_199(1, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
			else
			{
				__LIB_32__::func_199(0, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
		}
		else if (BitTest(Local_118.f_2, 1))
		{
			__LIB_32__::func_199(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else if (BitTest(Local_118.f_2, 2))
		{
			__LIB_32__::func_199(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else if (BitTest(Local_118.f_2, 3))
		{
			if (!func_755())
			{
				if (PLAYER::PLAYER_ID() == func_6())
				{
					if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
					{
						__LIB_32__::func_199(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					}
					else
					{
						__LIB_32__::func_199(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					}
				}
				else
				{
					__LIB_32__::func_199(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
				}
			}
			else
			{
				__LIB_32__::func_199(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
		}
		else if (BitTest(Local_118.f_2, 4))
		{
			__LIB_32__::func_199(0, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else
		{
			__LIB_32__::func_199(0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 7);
	}
}

void func_704()//Position - 0x46D17
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (func_705())
	{
		return;
	}
	if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(func_16())))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_16()), false) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) };
	fVar2 = SYSTEM::VDIST(Var0, Var1);
	if (fVar2 < 25f)
	{
		GRAPHICS::DRAW_MARKER(2, Var0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_105[0], uLocal_105[1], uLocal_105[2], 100, true, true, 2, false, 0, 0, false);
	}
}

int func_705()//Position - 0x46DC8
{
	if (((__LIB_30__::func_778(164) || __LIB_12__::func_495()) || !Global_2703735.f_4.f_10) || iLocal_91 == 0)
	{
		return 1;
	}
	return 0;
}

void func_707()//Position - 0x46E5A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_16()), false) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) };
	fVar2 = SYSTEM::VDIST(Var0, Var1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (__LIB_0__::func_331(fVar2, 5f, 25f) / 25f));
			fVar4 = __LIB_0__::func_504(26f, 175f, fVar3);
		}
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, SYSTEM::ROUND(fVar4));
	}
}

int func_710(int iParam0)//Position - 0x46F33
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	if (!BitTest(Local_119[iParam0 /*3*/].f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_715(bool bParam0)//Position - 0x47011
{
	if (iLocal_91 != 2 && iLocal_91 != 3)
	{
		__LIB_1__::func_751();
		return;
	}
	if (func_705())
	{
		__LIB_1__::func_751();
		return;
	}
	switch (bParam0)
	{
		case 0:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_738(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS0" /* GXT: Find the VIP of ~a~~s~ and take them out */, __LIB_30__::func_905(func_16()), iLocal_92, 0, -1, -1, -1, 2, -1);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS1" /* GXT: Protect your VIP */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 2:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS2" /* GXT: Survive until the time runs out */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 3:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_736(87, Local_118.f_5, -1, "GB_HTB_BMS3" /* GXT: You killed the target VIP <C>~a~</C>~s~ */, "GB_WINNER" /* GXT: WINNER */, 1, -1, 2, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 4:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_736(88, func_6(), -1, "GB_HTB_BMS4" /* GXT: <C>~a~</C>~s~ successfully found and killed the wanted VIP */, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, 1, -1, 2, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 5:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS5" /* GXT: The VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 6:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS5" /* GXT: The VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 7:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS6" /* GXT: The VIP has left */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 8:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_736(88, func_6(), -1, "GB_HTB_BMS7" /* GXT: You were taken out by <C>~a~</C>~s~ */, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, 1, -1, 2, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 9:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_716(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS8" /* GXT: You were taken out by fellow ~a~~s~ member <C>~a~</C>~s~ */, __LIB_30__::func_903(), iLocal_92, func_6(), 0, 0, 0, -1, -1, -1, 2, -1, 2);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 10:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS9" /* GXT: You survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 11:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS10" /* GXT: Your VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 12:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS11" /* GXT: You left the area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 13:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS12" /* GXT: Your VIP left the area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 14:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS13" /* GXT: The VIP left the hideout area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 15:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS14" /* GXT: You killed your VIP */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 16:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS15" /* GXT: You failed to enter the hide-out zone in time */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 17:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_30__::func_767())
				{
					func_740();
					func_736(88, func_6(), -1, "GB_HTB_BMS16" /* GXT: <C>~a~</C>~s~ killed their own VIP */, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, 1, -1, 2, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
	}
}

int func_716(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x47470
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
	__LIB_1__::func_264(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	__LIB_1__::func_330(&(Var0.f_69), 4);
	return __LIB_36__::func_55(&Var0);
}

int func_736(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x47CCB
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
	__LIB_1__::func_264(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_36__::func_55(&Var0);
}

int func_738(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x47DCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_162();
	iVar1 = __LIB_0__::func_162();
	iVar2 = __LIB_0__::func_162();
	return func_716(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

void func_740()//Position - 0x47F0E
{
	if (((((((__LIB_32__::func_203("GB_HTB_HR1" /* GXT: ~a~~s~ have started Executive Search. Search the area and take out their VIP to earn cash and RP. */, __LIB_30__::func_905(func_16()), __LIB_20__::func_73(func_16())) || __LIB_36__::func_487("GB_HTB_HR0" /* GXT: ~a~~s~ have started Executive Search. Search the area ~a~~s~ and take out their VIP to earn cash and RP. */, __LIB_30__::func_905(func_16()), __LIB_20__::func_73(func_16()), "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_20__::func_73(func_16()))) || func_741("GB_HTB_HG0" /* GXT: Your VIP has started Executive Search. Enter the area ~a~~s~ and protect them to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_20__::func_73(func_16()))) || __LIB_0__::func_1("GB_HTB_HELP2" /* GXT: There is a wanted VIP on the loose somewhere in the countryside. Head over to the indicated location on your map to begin searching. */)) || __LIB_0__::func_1("GB_HTB_HELP3" /* GXT: Your VIP is wanted for unspecified crimes, and is currently hiding out in the indicated area on your map. Do whatever you can to throw any search parties off the VIP's scent. */)) || __LIB_0__::func_1("GB_HTB_HELP4" /* GXT: You are now visible to all players, return to the hideout area immediately to return to hiding. Failure to do so will result in a loss. */)) || __LIB_0__::func_1("GB_HTB_HELP5" /* GXT: The search has begun, try to stay hidden until the time runs out! */)) || __LIB_0__::func_1("GB_HTB_HELP7" /* GXT: Keep moving or you will become visible on the Radar to other players. When visible, your Radar arrow will turn red. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_741(char* sParam0, char* sParam1, int iParam2)//Position - 0x47FC0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_748(bool bParam0)//Position - 0x4812A
{
	if (func_705())
	{
		func_740();
		return;
	}
	switch (bParam0)
	{
		case 0:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_21__::func_886("GB_HTB_HB0" /* GXT: You have started Executive Search. Enter the area ~a~~s~ and survive to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_20__::func_73(func_16()), -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_3__::func_132("GB_HTB_HR0" /* GXT: ~a~~s~ have started Executive Search. Search the area ~a~~s~ and take out their VIP to earn cash and RP. */, __LIB_30__::func_905(func_16()), __LIB_20__::func_73(func_16()), "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_20__::func_73(func_16()), -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 2:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_1__::func_707("GB_HTB_HELP2" /* GXT: There is a wanted VIP on the loose somewhere in the countryside. Head over to the indicated location on your map to begin searching. */, -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 3:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_1__::func_707("GB_HTB_HELP3" /* GXT: Your VIP is wanted for unspecified crimes, and is currently hiding out in the indicated area on your map. Do whatever you can to throw any search parties off the VIP's scent. */, -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 4:
			if (__LIB_32__::func_204(0))
			{
				__LIB_1__::func_707("GB_HTB_HELP4" /* GXT: You are now visible to all players, return to the hideout area immediately to return to hiding. Failure to do so will result in a loss. */, -1);
				__LIB_16__::func_609(0);
			}
			break;
		case 5:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_1__::func_707("GB_HTB_HELP5" /* GXT: The search has begun, try to stay hidden until the time runs out! */, -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 6:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_21__::func_886("GB_HTB_HG0" /* GXT: Your VIP has started Executive Search. Enter the area ~a~~s~ and protect them to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_20__::func_73(func_16()), -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 7:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_1__::func_707("GB_HTB_HELP7" /* GXT: Keep moving or you will become visible on the Radar to other players. When visible, your Radar arrow will turn red. */, -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
					__LIB_10__::func_577(-169037398, func_751(0));
				}
			}
			break;
		case 8:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_32__::func_204(0))
				{
					__LIB_3__::func_441("GB_HTB_HR1" /* GXT: ~a~~s~ have started Executive Search. Search the area and take out their VIP to earn cash and RP. */, __LIB_30__::func_905(func_16()), __LIB_20__::func_73(func_16()), -1);
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
					__LIB_10__::func_577(-169037398, func_751(0));
				}
			}
			break;
	}
}

int func_751(bool bParam0)//Position - 0x483B6
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_1__::func_693(iVar2, 0, 0))
		{
			if (bParam0)
			{
				if (BitTest(Local_119[iVar1 /*3*/].f_2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_118.f_5)
			{
				if (BitTest(Local_119[iVar1 /*3*/].f_2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_755()//Position - 0x484E1
{
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 1;
	}
	return 0;
}

void func_756()//Position - 0x484F9
{
	int iVar0;
	var uVar1;
	char* sVar2;
	iVar0 = 1;
	iLocal_117 = iLocal_117;
	if (__LIB_0__::func_864(&(Local_118.f_12)))
	{
		if (__LIB_2__::func_815(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 35000), 0))
		{
			func_764(&iLocal_116, 3, 1);
		}
		if (__LIB_2__::func_815(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 30000), 0))
		{
			func_764(&iLocal_116, 4, 1);
		}
		if (__LIB_2__::func_815(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 27000), 0))
		{
			func_764(&iLocal_116, 5, 1);
		}
		if (__LIB_2__::func_815(Local_118.f_12, Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */, 0))
		{
			func_764(&iLocal_116, 2, 1);
		}
	}
	if (func_762(PLAYER::PLAYER_ID(), Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar1, func_764(&iLocal_116, 13, -1), 1123024896, 0))
	{
		func_764(&iLocal_116, 13, 1);
	}
	else
	{
		func_764(&iLocal_116, 13, 0);
	}
	if (bLocal_108 || (!func_760() && !func_764(&iLocal_116, 13, -1)))
	{
		iVar0 = 0;
	}
	switch (func_759(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 0:
			break;
		case 1:
			if (!func_764(&iLocal_116, 12, 1))
			{
				iLocal_117 = NETWORK::GET_NETWORK_TIME();
			}
			if (iVar0 && !func_764(&iLocal_116, 3, -1))
			{
				if (!func_764(&iLocal_116, 1, -1))
				{
					sVar2 = __LIB_1__::func_295(func_760(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (AUDIO::PREPARE_MUSIC_EVENT(sVar2) && func_764(&iLocal_116, 11, -1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT(sVar2);
						func_764(&iLocal_116, 1, 1);
					}
					if (!func_764(&iLocal_116, 11, -1))
					{
						func_757(1);
					}
				}
			}
			else if (func_764(&iLocal_116, 1, -1) && !func_764(&iLocal_116, 3, -1))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("BG_HUNT_STOP"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BG_HUNT_STOP");
					func_757(0);
					func_764(&iLocal_116, 1, 0);
				}
			}
			if (func_764(&iLocal_116, 3, -1))
			{
				if (func_764(&iLocal_116, 1, -1))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP");
						func_764(&iLocal_116, 1, 0);
					}
				}
			}
			if (func_764(&iLocal_116, 4, -1))
			{
				if ((!func_764(&iLocal_116, 7, -1) && !func_764(&iLocal_116, 5, -1)) && !(func_705() || iLocal_91 != 3))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
						AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S");
						func_764(&iLocal_116, 7, 1);
					}
				}
				if ((!func_764(&iLocal_116, 6, -1) && !func_764(&iLocal_116, 5, -1)) && func_764(&iLocal_116, 7, -1))
				{
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
					func_764(&iLocal_116, 6, 1);
				}
			}
			break;
		case 2:
			if (!func_764(&iLocal_116, 8, -1) && func_764(&iLocal_116, 7, -1))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_FADE_IN_RADIO"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO");
					func_764(&iLocal_116, 8, 1);
				}
			}
			if (func_764(&iLocal_116, 1, -1))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("BG_HUNT_STOP"))
				{
					AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
					AUDIO::TRIGGER_MUSIC_EVENT("BG_HUNT_STOP");
					func_764(&iLocal_116, 1, 0);
				}
			}
			if (func_764(&iLocal_116, 7, -1) && !func_764(&iLocal_116, 2, -1))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					func_764(&iLocal_116, 7, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_764(&iLocal_116, 11, -1))
			{
				func_757(0);
			}
			break;
	}
	if (func_764(&iLocal_116, 6, -1) && (func_764(&iLocal_116, 5, -1) || func_759(NETWORK::PARTICIPANT_ID_TO_INT()) == 2))
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		func_764(&iLocal_116, 6, 0);
	}
	if (__LIB_0__::func_864(&(Local_118.f_16)) && __LIB_2__::func_815(Local_118.f_16, 10000, 0))
	{
		if (!func_764(&iLocal_116, 10, -1))
		{
			iLocal_115 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_115, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_764(&iLocal_116, 10, 1);
		}
	}
	else if (func_764(&iLocal_116, 10, -1))
	{
		AUDIO::STOP_SOUND(iLocal_115);
		iLocal_115 = -1;
		func_764(&iLocal_116, 10, 0);
	}
}

void func_757(bool bParam0)//Position - 0x488F9
{
	if (bParam0)
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		func_764(&iLocal_116, 11, 1);
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		func_764(&iLocal_116, 11, 0);
	}
}

int func_759(int iParam0)//Position - 0x48958
{
	return Local_119[iParam0 /*3*/].f_1;
}

bool func_760()//Position - 0x48968
{
	return __LIB_19__::func_352(func_16(), 1);
}

int func_762(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)//Position - 0x4898D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	fVar1 = __LIB_0__::func_373(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	*uParam2 = __LIB_0__::func_724(iVar0, Local_118.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam2 = __LIB_3__::func_480(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0;
	}
	return 1;
}

bool func_764(int* iParam0, int iParam1, int iParam2)//Position - 0x48A23
{
	var uVar0;
	uVar0 = BitTest(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	return uVar0;
}

void func_766()//Position - 0x48AA7
{
	switch (Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 1:
			if (func_755())
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 3))
				{
					if (__LIB_3__::func_589(82, "GB_INTTXT_HBB" /* GXT: THREAT WARNING: Your life is in danger. Please lie low and let the Bodyguards in your Protection Detail do their work. */, 2, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 3);
					}
				}
			}
			else if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 3))
				{
					if (__LIB_3__::func_589(82, "GB_INTTXT_HBG" /* GXT: THREAT WARNING: Your VIP is in danger. Protect them at all costs, and remember - your pay check is on the line. */, 2, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

void func_788()//Position - 0x49E1C
{
	if (func_705())
	{
		if (__LIB_3__::func_244())
		{
			__LIB_3__::func_0();
		}
		return;
	}
	if (iLocal_91 != 3)
	{
		if (__LIB_3__::func_244())
		{
			__LIB_3__::func_0();
		}
		return;
	}
	switch (func_759(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 0:
			break;
		case 1:
			if (func_755())
			{
				if (__LIB_0__::func_864(&(Local_118.f_16)))
				{
					if (!__LIB_2__::func_755("GB_HTB_OT4" /* GXT: Return to the search area. */))
					{
						__LIB_3__::func_198("GB_HTB_OT4" /* GXT: Return to the search area. */, 0);
					}
				}
				else if (!__LIB_2__::func_755("GB_HTB_OT1" /* GXT: Stay hidden in the search area. */))
				{
					__LIB_3__::func_198("GB_HTB_OT1" /* GXT: Stay hidden in the search area. */, 0);
				}
			}
			else if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
			{
				if (iLocal_91 == 3)
				{
					if (!__LIB_2__::func_755("GB_HTB_OT2" /* GXT: Your ~a~~s~ is being hunted. Protect them. */))
					{
						__LIB_19__::func_873("GB_HTB_OT2" /* GXT: Your ~a~~s~ is being hunted. Protect them. */, "GB_BOSS_LC" /* GXT: VIP */, iLocal_92, 0);
					}
				}
			}
			else if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!__LIB_2__::func_755("GB_HTB_OT3" /* GXT: <C>~a~</C>~s~ is the target ~a~~s~. Take them out. */))
				{
					if (__LIB_1__::func_693(Local_118.f_5, 0, 1))
					{
						func_789("GB_HTB_OT3" /* GXT: <C>~a~</C>~s~ is the target ~a~~s~. Take them out. */, Local_118.f_5, "GB_BOSS_LC" /* GXT: VIP */, iLocal_92, 0);
					}
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_244())
			{
				__LIB_3__::func_0();
			}
			break;
		case 3:
			if (__LIB_3__::func_244())
			{
				__LIB_3__::func_0();
			}
			break;
	}
}

void func_789(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x49F41
{
	if (__LIB_3__::func_197(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam4, iParam3))
	{
		Global_1574757 = 14;
		Global_1574757.f_56 = iParam3;
		Global_1574757.f_54 = iParam1;
	}
}

void func_809()//Position - 0x4A711
{
	int iVar0;
	if (func_705())
	{
		return;
	}
	if (iLocal_91 != 3)
	{
		return;
	}
	switch (func_759(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 0:
			break;
		case 1:
			if (func_755())
			{
				if (__LIB_0__::func_864(&(Local_118.f_16)))
				{
					iVar0 = (20000 - __LIB_1__::func_724(&(Local_118.f_16), 0, 0));
					if (iVar0 > 0)
					{
						__LIB_1__::func_350(iVar0, "GB_HTB_TM2" /* GXT: TIME */, 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						__LIB_1__::func_350(0, "GB_HTB_TM2" /* GXT: TIME */, 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					return;
				}
			}
			if (__LIB_0__::func_864(&(Local_118.f_12)))
			{
				iVar0 = (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - __LIB_1__::func_724(&(Local_118.f_12), 0, 0));
				if (iVar0 > 0)
				{
					__LIB_1__::func_350(iVar0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					__LIB_1__::func_350(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		case 2:
			if (iLocal_91 == 2 || iLocal_91 == 3)
			{
				if (__LIB_0__::func_864(&(Local_118.f_14)))
				{
					__LIB_1__::func_350(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
	}
}

void func_814()//Position - 0x4AA1A
{
	var uVar0;
	int iVar1;
	if (func_705())
	{
		func_832();
		return;
	}
	switch (Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 0:
			if (!__LIB_0__::func_86(Local_118.f_7))
			{
				if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
				{
					if (func_831(PLAYER::PLAYER_ID(), Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_101))
						{
							HUD::REMOVE_BLIP(&iLocal_101);
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_101))
					{
						iLocal_101 = HUD::ADD_BLIP_FOR_COORD(Local_118.f_7);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_101, true);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_101, "GB_HTB_BLIP1" /* GXT: Executive Search */);
						HUD::SET_BLIP_FLASHES(iLocal_101, true);
						HUD::SET_BLIP_FLASH_TIMER(iLocal_101, 7000);
						HUD::SET_BLIP_SPRITE(iLocal_101, 458);
						HUD::SET_BLIP_PRIORITY(iLocal_101, 12);
						HUD::SET_BLIP_SCALE(iLocal_101, Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */);
						__LIB_1__::func_540(&iLocal_101, iLocal_92);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_100))
					{
						iLocal_100 = HUD::ADD_BLIP_FOR_RADIUS(Local_118.f_7, SYSTEM::TO_FLOAT((Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1)));
						__LIB_1__::func_540(&iLocal_100, iLocal_92);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_100, true);
						HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iLocal_100, true);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_100, "GB_HTB_BLIP0" /* GXT: Executive Search Trigger */);
					}
					if (func_829(Local_118.f_5) != iLocal_104)
					{
						iLocal_104 = func_829(Local_118.f_5);
						HUD::SET_BLIP_ALPHA(iLocal_100, iLocal_104);
					}
				}
			}
			break;
		case 1:
			if (func_755())
			{
				func_827();
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 4))
				{
					if (!__LIB_0__::func_864(&(Local_118.f_16)) && !__LIB_0__::func_864(&(Local_118.f_18)))
					{
						if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
						{
							__LIB_32__::func_205(1, 0);
							MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
						}
					}
					else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
					{
						__LIB_32__::func_205(0, 0);
						MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_825();
				if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					if (bLocal_107)
					{
						if ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_118.f_5) && Local_119[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_118.f_5) /*3*/].f_1 == 1) && !BitTest(Local_119[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_118.f_5) /*3*/].f_2, 2))
						{
							if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 10))
							{
								__LIB_12__::func_535(Local_118.f_5, 432, 1, 0);
								__LIB_30__::func_773(Local_118.f_5, __LIB_1__::func_389(iLocal_92), 1, 0);
								if (__LIB_1__::func_693(func_16(), 1, 1))
								{
									__LIB_15__::func_359(Local_118.f_5, 1, 0, 0);
								}
								MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 10);
							}
						}
						else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 10))
						{
							__LIB_12__::func_535(Local_118.f_5, 432, 0, 0);
							__LIB_30__::func_773(Local_118.f_5, __LIB_1__::func_389(iLocal_92), 0, 0);
							if (__LIB_1__::func_693(func_16(), 1, 1))
							{
								__LIB_15__::func_359(Local_118.f_5, 0, 0, 0);
							}
							MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!__LIB_0__::func_86(Local_118.f_7))
			{
				if (func_831(PLAYER::PLAYER_ID(), Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_101))
					{
						HUD::REMOVE_BLIP(&iLocal_101);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_101))
				{
					iLocal_101 = HUD::ADD_BLIP_FOR_COORD(Local_118.f_7);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_101, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_101, "GB_HTB_BLIP1" /* GXT: Executive Search */);
					HUD::SET_BLIP_FLASHES(iLocal_101, true);
					HUD::SET_BLIP_FLASH_TIMER(iLocal_101, 7000);
					HUD::SET_BLIP_SPRITE(iLocal_101, 458);
					HUD::SET_BLIP_PRIORITY(iLocal_101, 12);
					HUD::SET_BLIP_SCALE(iLocal_101, Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */);
					__LIB_1__::func_540(&iLocal_101, iLocal_92);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_100))
				{
					iLocal_100 = HUD::ADD_BLIP_FOR_RADIUS(Local_118.f_7, SYSTEM::TO_FLOAT((Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1)));
					__LIB_1__::func_540(&iLocal_100, iLocal_92);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_100, true);
					HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iLocal_100, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_100, "GB_HTB_BLIP0" /* GXT: Executive Search Trigger */);
					HUD::SET_BLIP_ALPHA(iLocal_100, Global_262145.f_12711 /* Tunable: BLIP_AREA_ALPHA */);
				}
				if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1) || __LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
				{
					if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
					{
						iVar1 = __LIB_0__::func_818(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar1 = Local_118.f_5;
					}
					if (func_829(iVar1) != iLocal_104)
					{
						iLocal_104 = func_829(iVar1);
						HUD::SET_BLIP_ALPHA(iLocal_100, iLocal_104);
					}
				}
			}
			break;
		case 2:
		case 3:
			func_832();
			break;
	}
}

void func_825()//Position - 0x4B336
{
	if (BitTest(Local_119[func_16() /*3*/].f_2, 4))
	{
		if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 9))
		{
			if (func_16() != __LIB_0__::func_797())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", false);
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 9);
			}
		}
	}
	else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 9);
	}
}

void func_827()//Position - 0x4B429
{
	if (!func_755())
	{
		return;
	}
	if (__LIB_0__::func_864(&(Local_118.f_16)) && __LIB_0__::func_864(&(Local_118.f_18)))
	{
		if (__LIB_0__::func_864(&uLocal_113))
		{
			__LIB_0__::func_794(&uLocal_113);
		}
		return;
	}
	if (!__LIB_0__::func_864(&uLocal_111) && !__LIB_0__::func_864(&uLocal_113))
	{
		Local_109 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		__LIB_0__::func_795(&uLocal_111, 0, 0);
		iLocal_110 = 0;
	}
	else if (__LIB_0__::func_864(&uLocal_113))
	{
		if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
		{
			__LIB_32__::func_205(0, 0);
			MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
		}
		if (__LIB_0__::func_937(&uLocal_113, SYSTEM::ROUND(Global_262145.f_12965 /* Tunable: GB_HUNTBOSS_BOSS_BLIPPED_TIME */), 0))
		{
			__LIB_0__::func_794(&uLocal_113);
			MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 4);
			__LIB_22__::func_106(0, -1, 500, 500, 0);
			if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
			{
				__LIB_32__::func_205(1, 0);
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
			}
		}
	}
	else if (__LIB_1__::func_724(&uLocal_111, 0, 0) > (500 * iLocal_110))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_109) > IntToFloat(Global_262145.f_12963 /* Tunable: GB_HUNTBOSS_BLIPPABLE_RADIUS */))
		{
			__LIB_0__::func_794(&uLocal_111);
			if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 4))
			{
				__LIB_0__::func_795(&uLocal_113, 0, 0);
			}
		}
		else if (IntToFloat(__LIB_1__::func_724(&uLocal_111, 0, 0)) > Global_262145.f_12964 /* Tunable: GB_HUNTBOSS_TIME_IN_RADIUS_BEFORE_BLIP */)
		{
			if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
			{
				__LIB_32__::func_205(0, 0);
				MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
				func_748(7);
				__LIB_22__::func_106(1, -1, 2147483647, 0, 0);
			}
			if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 4))
			{
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 4);
			}
		}
		iLocal_110++;
	}
}

int func_829(int iParam0)//Position - 0x4B695
{
	var uVar0;
	if (iParam0 != __LIB_0__::func_162())
	{
		if (!__LIB_0__::func_86(Local_118.f_7))
		{
			if (func_831(iParam0, Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_262145.f_12711 /* Tunable: BLIP_AREA_ALPHA */;
}

int func_831(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)//Position - 0x4B6FE
{
	int iVar0;
	float fVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	*uParam2 = __LIB_0__::func_724(iVar0, Local_118.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam2 = __LIB_3__::func_480(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0;
	}
	return 1;
}

void func_832()//Position - 0x4B763
{
	if (HUD::DOES_BLIP_EXIST(iLocal_100))
	{
		HUD::REMOVE_BLIP(&iLocal_100);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_101))
	{
		HUD::REMOVE_BLIP(&iLocal_101);
	}
	if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 10))
	{
		__LIB_12__::func_535(Local_118.f_5, 432, 0, 0);
		__LIB_30__::func_773(Local_118.f_5, __LIB_1__::func_389(iLocal_92), 0, 0);
		__LIB_15__::func_359(Local_118.f_5, 0, 0, 0);
		MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 10);
	}
}

void func_833()//Position - 0x4B7D1
{
	int iVar0;
	int iVar1;
	switch (func_759(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
			{
				iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
				if (iVar1 == 186)
				{
					func_834(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_834(int iParam0)//Position - 0x4B81B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	iVar2 = __LIB_0__::func_162();
	iVar3 = __LIB_0__::func_162();
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var4, 13);
	if (ENTITY::DOES_ENTITY_EXIST(Var4.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var4.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					if (iVar2 != __LIB_0__::func_162())
					{
						if (__LIB_1__::func_693(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var4.f_1))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var4.f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_1);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
					{
						if (BitTest(Local_119[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/].f_2, 0))
						{
							if (iVar3 != __LIB_0__::func_162())
							{
								if (__LIB_1__::func_693(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == PLAYER::PLAYER_ID())
		{
			if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
				{
					__LIB_19__::func_471();
					MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_5)
		{
			if (PLAYER::PLAYER_ID() == iVar3)
			{
				if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20))
				{
					__LIB_19__::func_557(0);
				}
			}
		}
		else
		{
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != __LIB_0__::func_162())
			{
				Local_118.f_6 = iVar3;
				MISC::SET_BIT(&(Local_118.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != __LIB_0__::func_162() && __LIB_12__::func_486(iVar2, 0))
	{
		iVar5 = __LIB_0__::func_818(iVar2);
		if (iVar5 == Local_118.f_5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_1))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var4.f_1))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_1);
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							if (iVar3 != __LIB_0__::func_162())
							{
								if (__LIB_1__::func_693(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == PLAYER::PLAYER_ID())
			{
				if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
				{
					if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
					{
						__LIB_19__::func_471();
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_841()//Position - 0x4BDF7
{
	var uVar0;
	switch (Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 1:
			if (func_831(PLAYER::PLAYER_ID(), (Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1), &uVar0, 1123024896, 0))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
				{
					__LIB_19__::func_471();
					MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_842()//Position - 0x4BE58
{
	var uVar0;
	if (!__LIB_0__::func_86(Local_118.f_7))
	{
		if (Local_118.f_1 >= 1 || __LIB_0__::func_797() == Local_118.f_5)
		{
			__LIB_32__::func_213(164, Local_118.f_7, &uLocal_106, 1140457472, 1144750080, 0);
		}
		if (iLocal_91 != __LIB_19__::func_485(PLAYER::PLAYER_ID()))
		{
			iLocal_91 = __LIB_19__::func_485(PLAYER::PLAYER_ID());
		}
	}
	if (func_755())
	{
		if (__LIB_2__::func_77())
		{
			if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 11))
			{
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_759(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 1:
			bLocal_108 = (__LIB_12__::func_495() || func_852(func_755()));
			if (bLocal_108)
			{
				if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
				{
					MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
					if (func_755())
					{
						__LIB_27__::func_857(0, 0);
						__LIB_15__::func_297(2);
					}
				}
			}
			else if (func_831(PLAYER::PLAYER_ID(), 500, &uVar0, 1123024896, 0))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
				{
					MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
					if (func_755())
					{
						__LIB_27__::func_857(1, 0);
						__LIB_15__::func_297(2);
					}
				}
			}
			else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
				if (func_755())
				{
					__LIB_27__::func_857(0, 0);
					__LIB_15__::func_296(2);
				}
			}
			if (!func_843())
			{
				if (func_831(PLAYER::PLAYER_ID(), Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
				{
					if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20))
					{
						__LIB_19__::func_557(0);
					}
				}
			}
			break;
	}
}

int func_843()//Position - 0x4BFF6
{
	if (__LIB_1__::func_876(PLAYER::PLAYER_ID(), func_16(), 1))
	{
		return 1;
	}
	return 0;
}

int func_852(bool bParam0)//Position - 0x4C5A0
{
	if (bParam0)
	{
		return 0;
	}
	if (func_858(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 1;
	}
	if (__LIB_12__::func_732(4))
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (__LIB_0__::func_719())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_858(int iParam0, bool bParam1, int iParam2)//Position - 0x4C97C
{
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || __LIB_0__::func_172(Global_2689235[iParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_859(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_859(int iParam0)//Position - 0x4CA03
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_162())
	{
		return iParam0;
	}
	if (__LIB_12__::func_481(iParam0) != -1)
	{
		iVar0 = __LIB_0__::func_172(__LIB_12__::func_481(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_12__::func_486(iParam0, 0))
			{
				return __LIB_0__::func_818(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return __LIB_0__::func_162();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return __LIB_0__::func_162();
}

void func_911()//Position - 0x4DCCA
{
	switch (func_914())
	{
		case 1:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 1)
			{
				__LIB_19__::func_551(func_843());
				func_912(1);
			}
			break;
		case 2:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 2)
			{
				__LIB_19__::func_551(func_843());
				func_912(2);
			}
			break;
		case 3:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 3)
			{
				__LIB_19__::func_551(func_843());
				func_912(3);
			}
			break;
	}
}

void func_912(int iParam0)//Position - 0x4DD41
{
	Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = iParam0;
}

int func_914()//Position - 0x4DD9B
{
	return Local_118.f_1;
}

void func_915()//Position - 0x4DDA7
{
	iLocal_91 = __LIB_19__::func_485(PLAYER::PLAYER_ID());
	__LIB_32__::func_208(164, 1, -1, 0);
	iLocal_92 = __LIB_30__::func_909(Local_118.f_5, -2, 0, 0, 0);
	HUD::GET_HUD_COLOUR(iLocal_92, &(uLocal_105[0]), &(uLocal_105[1]), &(uLocal_105[2]), &(uLocal_105[3]));
}

void func_931(int iParam0)//Position - 0x4E37D
{
	Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = iParam0;
}

int func_932()//Position - 0x4E38F
{
	return Local_118.f_0;
}

int func_933(int iParam0)//Position - 0x4E399
{
	return Local_119[iParam0 /*3*/];
}

void func_950()//Position - 0x4E7A5
{
	if (func_755())
	{
		if (__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 7))
		{
			__LIB_32__::func_199(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
	}
	if (__LIB_15__::func_298(2))
	{
		__LIB_15__::func_296(2);
	}
	if (func_764(&iLocal_116, 10, -1))
	{
		AUDIO::STOP_SOUND(iLocal_115);
		iLocal_115 = -1;
		func_764(&iLocal_116, 10, 0);
	}
	if (func_764(&iLocal_116, 11, -1))
	{
		func_757(0);
	}
	Global_1943929.f_2 = Local_118.f_20;
	Global_1943929.f_3 = Local_118.f_21;
	__LIB_32__::func_206(Local_118.f_4, -1, -1, -1082130432);
	__LIB_27__::func_857(0, 0);
	__LIB_20__::func_114(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_1004(struct<21> Param0)//Position - 0x50D2A
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_20__::func_516(164, 0, 0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_118, 22, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_119, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

