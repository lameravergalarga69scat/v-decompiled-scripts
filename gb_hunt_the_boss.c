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
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_950();
		}
		if (__LIB_41__.func_885(1))
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
			if (func_932() != 3 && __LIB_10__.func_923())
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
			if (!__LIB_0__.func_649(&(Local_118.f_10)))
			{
				__LIB_0__.func_580(&(Local_118.f_10), 0, 0);
			}
			else if (__LIB_2__.func_47(&(Local_118.f_10), Global_262145.f_12961 /* Tunable: GB_HUNTBOSS_AREA_EXPIRY_TIME */, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 4);
				func_18(2);
			}
			if (!__LIB_0__.func_86(Local_118.f_7))
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
			if (__LIB_0__.func_743(Local_118.f_5) || __LIB_1__.func_155(Local_118.f_5, 1, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 2);
				func_18(2);
			}
			break;
		case 1:
			if (!__LIB_0__.func_649(&(Local_118.f_12)))
			{
				__LIB_0__.func_580(&(Local_118.f_12), 0, 0);
			}
			else
			{
				if (!__LIB_0__.func_649(&(Local_118.f_16)))
				{
					if (!func_13(Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
					{
						__LIB_0__.func_495(&(Local_118.f_16), 0, 0);
						MISC::SET_BIT(&(Local_118.f_2), 6);
					}
				}
				else if (!func_13(Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
				{
					if (__LIB_2__.func_47(&(Local_118.f_16), 20000, 0))
					{
						MISC::SET_BIT(&(Local_118.f_2), 2);
					}
				}
				else
				{
					__LIB_0__.func_579(&(Local_118.f_16));
					__LIB_0__.func_495(&(Local_118.f_18), 0, 0);
					MISC::CLEAR_BIT(&(Local_118.f_2), 6);
				}
				if (__LIB_0__.func_649(&(Local_118.f_18)))
				{
					if (__LIB_2__.func_47(&(Local_118.f_18), 5000, 0))
					{
						__LIB_0__.func_579(&(Local_118.f_18));
					}
				}
				bVar1 = func_7();
				if (__LIB_2__.func_47(&(Local_118.f_12), Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */, 0) || bVar1)
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
			if (__LIB_0__.func_743(Local_118.f_5) || __LIB_1__.func_155(Local_118.f_5, 1, 0))
			{
				MISC::SET_BIT(&(Local_118.f_2), 2);
				func_18(2);
			}
			break;
		case 2:
			if (!__LIB_0__.func_649(&(Local_118.f_14)))
			{
				__LIB_0__.func_580(&(Local_118.f_14), 0, 0);
			}
			else if (__LIB_2__.func_47(&(Local_118.f_14), 15000, 0))
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
			__LIB_1__.func_226(Var0, func_4());
			MISC::SET_BIT(&(Local_118.f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 0))
		{
			Var1.f_0 = -1529596656;
			Var1.f_1 = PLAYER::PLAYER_ID();
			Var1.f_2 = -1248118654;
			__LIB_1__.func_226(Var1, func_4());
			MISC::SET_BIT(&(Local_118.f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 2) || BitTest(Local_118.f_2, 1))
		{
			Var2.f_0 = -1529596656;
			Var2.f_1 = PLAYER::PLAYER_ID();
			Var2.f_2 = -1863580758;
			__LIB_1__.func_226(Var2, func_4());
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
		if (__LIB_1__.func_264(bVar2, 0, 0))
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
	*uParam1 = __LIB_0__.func_529(iVar0, Local_118.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam1 = __LIB_2__.func_320(*uParam1, fVar1);
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
	Local_118.f_5 = __LIB_1__.func_301();
	Local_118.f_6 = __LIB_0__.func_160();
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_118.f_20), &(Local_118.f_21));
	Var0[0 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	Var0[1 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	Var0[2 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	Var0[3 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Var0[iVar3 /*3*/], 1);
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
	iVar3 = __LIB_1__.func_556(2954, -1, 0);
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
	__LIB_1__.func_597(2954, iVar3, -1, 1, 0);
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
	bLocal_107 = __LIB_1__.func_264(func_16(), 0, 1);
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
			else if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
						__LIB_21__.func_123();
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
					}
				}
				if (!__LIB_9__.func_50(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_4__.func_747(PLAYER::PLAYER_ID(), 0);
				}
				if (BitTest(Local_118.f_2, 6))
				{
					func_748(4);
				}
			}
			else if (bLocal_107)
			{
				if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
				func_683(-1, 0, 0, -1, 0, 0);
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 7);
			}
			__LIB_41__.func_884(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
			break;
		case 2:
			if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				if (!__LIB_0__.func_163(PLAYER::PLAYER_ID(), 19))
				{
					func_384();
					return;
				}
			}
			if (func_755())
			{
				if (__LIB_9__.func_50(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__.func_769(PLAYER::PLAYER_ID(), 0);
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
				else if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
					if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), Local_118.f_5, 1))
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
				else if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
					if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
			if (__LIB_41__.func_244(&uLocal_93, 1, 0))
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
	if (Local_118.f_6 == __LIB_0__.func_160() || Local_118.f_5 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (!__LIB_6__.func_941(Local_118.f_6, Local_118.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)//Position - 0x25CD
{
	if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 6))
	{
		if (iParam0 != __LIB_0__.func_160())
		{
			__LIB_28__.func_431(0, iParam0);
		}
		else
		{
			__LIB_28__.func_431(0, __LIB_0__.func_160());
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
				if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					func_87(164, 0, &Var0, 0);
				}
				else
				{
					func_87(164, 1, &Var0, 0);
				}
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 0))
		{
			if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				func_87(164, 1, &Var0, 0);
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
		else if (BitTest(Local_118.f_2, 2) || BitTest(Local_118.f_2, 1))
		{
			func_87(164, 0, &Var0, 0);
			MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 5);
		}
	}
}

void func_87(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x27F7
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
				__LIB_41__.func_883(&iVar0, 1);
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
		__LIB_42__.func_180(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
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
		else if (((__LIB_34__.func_580(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
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
	func_88(bParam1, iParam0);
}

void func_88(bool bParam0, int iParam1)//Position - 0x2CBA
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
			if (__LIB_19__.func_766(iVar0) && !func_98(iVar0))
			{
				__LIB_26__.func_979(iVar0);
			}
		}
		if (bVar1)
		{
			if (__LIB_19__.func_766(1) && !func_98(1))
			{
				__LIB_26__.func_979(1);
			}
		}
	}
}

int func_98(int iParam0)//Position - 0xBA30
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
		if ((__LIB_0__.func_137(__LIB_8__.func_923(iVar0), -1) || (iVar2 != -1 && func_145(iVar2, -1))) || (iVar1 != -99 && func_99(joaat("MP_F_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
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
		if ((__LIB_0__.func_137(__LIB_8__.func_923(iVar0), -1) || (iVar2 != -1 && func_145(iVar2, -1))) || (iVar1 != -99 && func_99(joaat("MP_M_Freemode_01"), __LIB_9__.func_285(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

var func_99(int iParam0, int iParam1, int iParam2)//Position - 0xBB47
{
	Global_78130[1 /*14*/] = { func_100(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

struct<14> func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBB6F
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		func_128(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		func_101(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_101(int iParam0, int iParam1, int iParam2)//Position - 0xBBB0
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_406(iParam1, iParam2);
			break;
		case 11:
			func_126(iParam1, iParam2);
			break;
		case 8:
			func_125(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_405(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_404(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_403(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_402(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_401(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_400(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_399(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_398(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_397(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_396(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__.func_29(iParam1, iParam2);
			break;
		case 13:
			__LIB_25__.func_19(iParam1);
			break;
	}
}

void func_125(int iParam0, int iParam1)//Position - 0x17464
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		case 2:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 4:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 5:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 6:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 7:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 8:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 9:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 11:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 12:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 13:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 14:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 15:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		case 16:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 19:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 21:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 22:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 27:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 29:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 30:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 31:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "U_FMF_4_13" /* GXT: Red Two-Tone Tank */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[77]));
			break;
		case 48:
			StringCopy(&Var2, "U_FMF_4_14" /* GXT: Two-Tone Tank */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[78]));
			break;
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&Var2, "U_FMF_5_0" /* GXT: Off-White Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[80]));
			break;
		case 51:
			StringCopy(&Var2, "U_FMF_5_1" /* GXT: Ash Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[81]));
			break;
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 57:
			StringCopy(&Var2, "U_FMF_5_7" /* GXT: Snakeskin Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[87]));
			break;
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 59:
			StringCopy(&Var2, "U_FMF_5_9" /* GXT: White Stripe Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[89]));
			break;
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 71:
			StringCopy(&Var2, "U_FMF_11_0" /* GXT: Sky Blue Racerback */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[176]));
			break;
		case 72:
			StringCopy(&Var2, "U_FMF_11_1" /* GXT: Purple Racerback */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[177]));
			break;
		case 73:
			StringCopy(&Var2, "U_FMF_11_2" /* GXT: Gray Racerback */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[178]));
			break;
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&Var2, "U_FMF_11_10" /* GXT: Los Santos 01 Racerback */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[186]));
			break;
		case 82:
			StringCopy(&Var2, "U_FMF_11_11" /* GXT: LS Racerback */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[187]));
			break;
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 86:
			StringCopy(&Var2, "U_FMF_11_15" /* GXT: LC Penetrators Racerback */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[191]));
			break;
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "U_FMF_12_7" /* GXT: Neon Camisole */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[199]));
			break;
		case 95:
			StringCopy(&Var2, "U_FMF_12_8" /* GXT: Red Spotted Camisole */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[200]));
			break;
		case 96:
			StringCopy(&Var2, "U_FMF_12_9" /* GXT: Black Spotted Camisole */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[201]));
			break;
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 103:
			StringCopy(&Var2, "U_FMF_13_0" /* GXT: Black Bustier */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[208]));
			break;
		case 104:
			StringCopy(&Var2, "U_FMF_13_1" /* GXT: Pink Rose Bustier */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[209]));
			break;
		case 105:
			StringCopy(&Var2, "U_FMF_13_2" /* GXT: Olive Bustier */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[210]));
			break;
		case 106:
			StringCopy(&Var2, "U_FMF_13_3" /* GXT: Gray Bustier */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[211]));
			break;
		case 107:
			StringCopy(&Var2, "U_FMF_13_4" /* GXT: Floral Bustier */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[212]));
			break;
		case 108:
			StringCopy(&Var2, "U_FMF_13_5" /* GXT: Red Plaid Bustier */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[213]));
			break;
		case 109:
			StringCopy(&Var2, "U_FMF_13_6" /* GXT: Studded Bustier */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[214]));
			break;
		case 110:
			StringCopy(&Var2, "U_FMF_13_7" /* GXT: Pink Bustier */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[215]));
			break;
		case 111:
			StringCopy(&Var2, "U_FMF_13_8" /* GXT: White Bustier */, 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[216]));
			break;
		case 112:
			StringCopy(&Var2, "U_FMF_13_9" /* GXT: Vivid Blue Bustier */, 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[217]));
			break;
		case 113:
			StringCopy(&Var2, "U_FMF_13_10" /* GXT: Denim Bustier */, 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[218]));
			break;
		case 114:
			StringCopy(&Var2, "U_FMF_13_11" /* GXT: Pink Tribal Bustier */, 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[219]));
			break;
		case 115:
			StringCopy(&Var2, "U_FMF_13_12" /* GXT: Camo Bustier */, 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[220]));
			break;
		case 116:
			StringCopy(&Var2, "U_FMF_13_13" /* GXT: Blue Bustier */, 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[221]));
			break;
		case 117:
			StringCopy(&Var2, "U_FMF_13_14" /* GXT: Black & White Bustier */, 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[222]));
			break;
		case 118:
			StringCopy(&Var2, "U_FMF_13_15" /* GXT: Leopard Bustier */, 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[223]));
			break;
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 120:
			StringCopy(&Var2, "U_FMF_15_0" /* GXT: Black Bikini */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[240]));
			break;
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 123:
			StringCopy(&Var2, "U_FMF_15_3" /* GXT: Gray Bikini */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[243]));
			break;
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 130:
			StringCopy(&Var2, "U_FMF_15_10" /* GXT: Aqua Bikini */, 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[250]));
			break;
		case 131:
			StringCopy(&Var2, "U_FMF_15_11" /* GXT: Orange Bikini */, 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[251]));
			break;
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			__LIB_18__.func_374(iVar7, iParam0, 136, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_145(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_145(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar9]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_24));
	__LIB_18__.func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_126(int iParam0, int iParam1)//Position - 0x18809
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_145(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]) * Global_295754.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_145(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]) * Global_295754.f_24));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]) * Global_295754.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		__LIB_18__.func_374(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
		}
	}
	else
	{
		__LIB_18__.func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x1AE3F
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_417(iParam1, iParam2);
			break;
		case 11:
			func_142(iParam1, iParam2);
			break;
		case 8:
			func_141(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_416(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_415(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_414(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_434(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_413(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_412(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_411(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_410(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_409(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_408(iParam1, iParam2);
			break;
		case 0:
			__LIB_18__.func_407(iParam1, iParam2);
			break;
		case 13:
			__LIB_18__.func_375(iParam1);
			break;
	}
}

void func_141(int iParam0, int iParam1)//Position - 0x220E4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 2:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 4:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 5:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 8:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 17:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		case 21:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		case 22:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		case 23:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 27:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		case 31:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 33:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 34:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 35:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 36:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 37:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 40:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 43:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 80:
			StringCopy(&Var2, "U_FMM_5_0" /* GXT: White Tank */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[80]));
			break;
		case 81:
			StringCopy(&Var2, "U_FMM_5_1" /* GXT: Gray Tank */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[81]));
			break;
		case 82:
			StringCopy(&Var2, "U_FMM_5_2" /* GXT: Black Tank */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[82]));
			break;
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 87:
			StringCopy(&Var2, "U_FMM_5_7" /* GXT: Red Tank */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[87]));
			break;
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0" /* GXT: Red Accent Tee */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 138:
			StringCopy(&Var2, "U_FMM_8_10" /* GXT: Sky Blue Tee */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 141:
			StringCopy(&Var2, "U_FMM_8_13" /* GXT: Slate Tee */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 142:
			StringCopy(&Var2, "U_FMM_8_14" /* GXT: Gray Two-Tone Tee */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 144:
			StringCopy(&Var2, "U_FMM_9_0" /* GXT: White Striped Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 145:
			StringCopy(&Var2, "U_FMM_9_1" /* GXT: Metal Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		case 146:
			StringCopy(&Var2, "U_FMM_9_2" /* GXT: Night Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		case 147:
			StringCopy(&Var2, "U_FMM_9_3" /* GXT: Cupcake Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 148:
			StringCopy(&Var2, "U_FMM_9_4" /* GXT: Blue Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		case 149:
			StringCopy(&Var2, "U_FMM_9_5" /* GXT: Vibe Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		case 150:
			StringCopy(&Var2, "U_FMM_9_6" /* GXT: Salmon Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 151:
			StringCopy(&Var2, "U_FMM_9_7" /* GXT: Royale Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 154:
			StringCopy(&Var2, "U_FMM_9_10" /* GXT: Pro Lite Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		case 155:
			StringCopy(&Var2, "U_FMM_9_11" /* GXT: Ice Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		case 156:
			StringCopy(&Var2, "U_FMM_9_12" /* GXT: Money Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		case 157:
			StringCopy(&Var2, "U_FMM_9_13" /* GXT: Hunter Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		case 158:
			StringCopy(&Var2, "U_FMM_9_14" /* GXT: Red Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 159:
			StringCopy(&Var2, "U_FMM_9_15" /* GXT: Sunshine Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0" /* GXT: White Untucked */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 193:
			StringCopy(&Var2, "U_FMM_12_1" /* GXT: Steel Untucked */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 194:
			StringCopy(&Var2, "U_FMM_12_2" /* GXT: Black Untucked */, 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		case 195:
			StringCopy(&Var2, "U_FMM_12_3" /* GXT: Sky Untucked */, 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 196:
			StringCopy(&Var2, "U_FMM_12_4" /* GXT: Navy Untucked */, 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 197:
			StringCopy(&Var2, "U_FMM_12_5" /* GXT: Red Untucked */, 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 198:
			StringCopy(&Var2, "U_FMM_12_6" /* GXT: Moss Untucked */, 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 199:
			StringCopy(&Var2, "U_FMM_12_7" /* GXT: Ash Untucked */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		case 200:
			StringCopy(&Var2, "U_FMM_12_8" /* GXT: Mustard Untucked */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 201:
			StringCopy(&Var2, "U_FMM_12_9" /* GXT: Butter Untucked */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 202:
			StringCopy(&Var2, "U_FMM_12_10" /* GXT: Forest Untucked */, 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		case 203:
			StringCopy(&Var2, "U_FMM_12_11" /* GXT: Azure Untucked */, 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 208:
			StringCopy(&Var2, "U_FMM_13_0" /* GXT: White Tucked */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 209:
			StringCopy(&Var2, "U_FMM_13_1" /* GXT: Silver Tucked */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 210:
			StringCopy(&Var2, "U_FMM_13_2" /* GXT: Black Tucked */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		case 211:
			StringCopy(&Var2, "U_FMM_13_3" /* GXT: Blue Tucked */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 213:
			StringCopy(&Var2, "U_FMM_13_5" /* GXT: Burgundy Tucked */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 221:
			StringCopy(&Var2, "U_FMM_13_13" /* GXT: Green Plaid Tucked */, 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[16]));
			break;
		case 225:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[17]));
			break;
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 227:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[19]));
			break;
		case 228:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[20]));
			break;
		case 229:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[21]));
			break;
		case 230:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[22]));
			break;
		case 231:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[23]));
			break;
		case 232:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[24]));
			break;
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 235:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[27]));
			break;
		case 236:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[28]));
			break;
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 238:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[30]));
			break;
		case 239:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_145(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_145(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar11]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_16));
	if (iParam0 >= 241)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		__LIB_18__.func_374(iVar7, iParam0, 241, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		__LIB_18__.func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_142(int iParam0, int iParam1)//Position - 0x245D7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_145(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]) * Global_295754.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_145(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]) * Global_295754.f_16));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]) * Global_295754.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		__LIB_18__.func_374(iVar7, iParam0, 237, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		__LIB_18__.func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

int func_145(int iParam0, int iParam1)//Position - 0x26A95
{
	var uVar0;
	int iVar1;
	if (__LIB_2__.func_169(iParam0) == 13122)
	{
		return 0;
	}
	uVar0 = __LIB_34__.func_579(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

void func_384()//Position - 0x32C26
{
	if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 7))
	{
		if (BitTest(Local_118.f_2, 0))
		{
			if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				func_385(1, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
			else
			{
				func_385(0, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
		}
		else if (BitTest(Local_118.f_2, 1))
		{
			func_385(0, 8, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else if (BitTest(Local_118.f_2, 2))
		{
			func_385(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else if (BitTest(Local_118.f_2, 3))
		{
			if (!func_755())
			{
				if (PLAYER::PLAYER_ID() == func_6())
				{
					if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
					{
						func_385(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					}
					else
					{
						func_385(1, 1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
					}
				}
				else
				{
					func_385(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
				}
			}
			else
			{
				func_385(0, 2, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
			}
		}
		else if (BitTest(Local_118.f_2, 4))
		{
			func_385(0, 7, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		else
		{
			func_385(0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 7);
	}
}

void func_385(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0x32D68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar5[3];
	int iVar6;
	int iVar7;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
		Global_1944213.f_4 = __LIB_1__.func_834();
		Global_1944213.f_5 = __LIB_1__.func_833();
		if (__LIB_0__.func_740(PLAYER::PLAYER_ID()) || __LIB_2__.func_193(PLAYER::PLAYER_ID()))
		{
			Global_1944213.f_6 = 1;
		}
		else
		{
			Global_1944213.f_6 = 0;
		}
		Global_1944213.f_1 = __LIB_26__.func_823(bParam9);
		Global_1944213.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_9 = __LIB_0__.func_847(bParam0);
		Global_1944213.f_10 = iParam1;
		Global_1944213.f_17 = Global_1944213.f_2;
		Global_1944213.f_18 = Global_1944213.f_2;
		Global_1944213.f_19 = __LIB_32__.func_910();
		Global_1944213.f_21 = (Global_1944213.f_8 - Global_1944213.f_7);
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		Global_1944213.f_24 = __LIB_9__.func_643(PLAYER::PLAYER_ID());
		Global_1944213.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		if (Global_1944213.f_24 > 2)
		{
			Global_1944213.f_24 = 2;
		}
		__LIB_20__.func_375(iVar0);
	}
	else if (bParam11)
	{
	}
	else
	{
		iVar0 = __LIB_0__.func_396(PLAYER::PLAYER_ID());
	}
	if ((__LIB_10__.func_929(iVar0) || iVar0 == 293) || iVar0 == 291)
	{
		Global_1943947.f_2 = __LIB_1__.func_834();
		Global_1943947.f_3 = __LIB_1__.func_833();
		Global_1943947.f_50 = iParam4;
		Global_1943947.f_51 = iParam5;
		Global_1943947.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943947.f_20 = (Global_1943947.f_10 - Global_1943947.f_9);
		Global_1943947.f_12 = iParam1;
		Global_1943947.f_19 = __LIB_26__.func_347(iVar0, bParam0, __LIB_21__.func_93(bParam3));
		if (bParam0)
		{
			Global_1943947.f_11 = 1;
		}
		else
		{
			Global_1943947.f_11 = 0;
		}
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1943947.f_8 = 1;
		}
		else
		{
			Global_1943947.f_8 = 0;
		}
		Global_1943947.f_54 = __LIB_32__.func_622(1);
		Global_1943947.f_55 = __LIB_32__.func_622(0);
		if (iParam2 != 0)
		{
			Global_1943947.f_43 = 0;
			Global_1943947.f_45 = __LIB_4__.func_814(__LIB_0__.func_582(), iParam2);
			Global_1943947.f_47 = iParam7;
			Global_1943947.f_46 = iParam6;
			Global_1943947.f_52 = __LIB_21__.func_351(__LIB_0__.func_582(), iParam2);
		}
		__LIB_20__.func_373(iVar0);
	}
	else if (__LIB_9__.func_286(iVar0))
	{
		Global_1944003.f_2 = __LIB_1__.func_834();
		Global_1944003.f_3 = __LIB_1__.func_833();
		Global_1944003.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944003.f_19 = (Global_1944003.f_10 - Global_1944003.f_9);
		Global_1944003.f_12 = iParam1;
		if (bParam0)
		{
			Global_1944003.f_11 = 1;
		}
		else
		{
			Global_1944003.f_11 = 0;
		}
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944003.f_8 = 1;
		}
		else
		{
			Global_1944003.f_8 = 0;
		}
		__LIB_20__.func_372(iVar0);
	}
	else if (((__LIB_3__.func_524(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		Global_1944066.f_2 = __LIB_1__.func_834();
		Global_1944066.f_3 = __LIB_1__.func_833();
		Global_1944066.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944066.f_18 = (Global_1944066.f_9 - Global_1944066.f_8);
		Global_1944066.f_11 = iParam1;
		Global_1944066.f_7 = __LIB_32__.func_910();
		Global_1944066.f_42 = __LIB_20__.func_355(__LIB_0__.func_5(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = __LIB_1__.func_292(iVar1);
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944066.f_17 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		else
		{
			Global_1944066.f_17 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_28 = iVar2;
		Global_1944066.f_29 = __LIB_0__.func_847((__LIB_9__.func_104(iVar1) || __LIB_9__.func_103(iVar1)));
		Global_1944066.f_30 = __LIB_0__.func_847(__LIB_3__.func_503(iVar1));
		Global_1944066.f_32 = __LIB_0__.func_847(__LIB_3__.func_457(iVar1));
		Global_1944066.f_33 = __LIB_0__.func_847(__LIB_1__.func_981(iVar1));
		Global_1944066.f_34 = __LIB_0__.func_847(__LIB_6__.func_75(iVar1));
		Global_1944066.f_35 = __LIB_0__.func_847(__LIB_3__.func_417(0, iVar1) == 1);
		Global_1944066.f_36 = __LIB_0__.func_847(__LIB_2__.func_709(iVar1));
		Global_1944066.f_37 = __LIB_0__.func_847(__LIB_0__.func_333(iVar1));
		Global_1944066.f_38 = __LIB_0__.func_847(__LIB_3__.func_416(iVar1));
		Global_1944066.f_39 = __LIB_0__.func_847(__LIB_19__.func_819(iVar1, iVar2, 0));
		Global_1944066.f_40 = __LIB_0__.func_847(__LIB_19__.func_819(iVar1, iVar2, 2));
		Global_1944066.f_41 = __LIB_0__.func_847(__LIB_19__.func_819(iVar1, iVar2, 1));
		if (__LIB_9__.func_305(iVar1))
		{
			Global_1944066.f_31 = 2;
		}
		else if (__LIB_9__.func_304(iVar1))
		{
			Global_1944066.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1944066.f_10 = 1;
		}
		else
		{
			Global_1944066.f_10 = 0;
		}
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_6 = 1;
		}
		else
		{
			Global_1944066.f_6 = 0;
		}
		Global_1944066.f_21 = -2;
		Global_1944066.f_22 = -2;
		__LIB_20__.func_371(iVar0);
	}
	else if (__LIB_1__.func_204(iVar0))
	{
		Global_1944113.f_2 = __LIB_1__.func_834();
		Global_1944113.f_3 = __LIB_1__.func_833();
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944113.f_6 = 1;
		}
		else
		{
			Global_1944113.f_6 = 0;
		}
		Global_1944113.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944113.f_10 = __LIB_0__.func_847(bParam0);
		Global_1944113.f_11 = iParam1;
		Global_1944113.f_17 = __LIB_13__.func_379(__LIB_1__.func_301());
		Global_1944113.f_18 = (Global_1944113.f_9 - Global_1944113.f_8);
		Global_1944113.f_20 = iParam8;
		Global_1944113.f_21 = -2;
		Global_1944113.f_22 = -2;
		Global_1944113.f_27 = __LIB_7__.func_38();
		Global_1944113.f_29 = __LIB_1__.func_556(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__.func_556(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__.func_556(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__.func_556(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__.func_556(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__.func_556(6111, -1, 0);
		Global_1944113.f_36 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944113.f_37 = __LIB_21__.func_201();
		__LIB_26__.func_345();
		__LIB_20__.func_370(iVar0);
	}
	else if (__LIB_0__.func_787(iVar0))
	{
		Global_1944167.f_2 = __LIB_1__.func_834();
		Global_1944167.f_3 = __LIB_1__.func_833();
		Global_1944167.f_1 = iParam10;
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944167.f_6 = 1;
		}
		else
		{
			Global_1944167.f_6 = 0;
		}
		Global_1944167.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944167.f_10 = __LIB_0__.func_847(bParam0);
		Global_1944167.f_11 = iParam1;
		Global_1944167.f_18 = (Global_1944167.f_9 - Global_1944167.f_8);
		Global_1944167.f_20 = iParam8;
		Global_1944167.f_23 = Global_786547;
		Global_1944167.f_36 = Global_786547.f_1;
		Global_1944167.f_24 = __LIB_1__.func_556(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__.func_556(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__.func_556(6166, -1, 0);
		Global_1944167.f_27 = __LIB_0__.func_847((((__LIB_2__.func_272() || __LIB_20__.func_344()) || __LIB_20__.func_343()) || __LIB_1__.func_233(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__.func_556(6167, -1, 0);
		Global_1944167.f_29 = __LIB_0__.func_847(__LIB_8__.func_448());
		Global_1944167.f_35 = -1;
		Global_1944167.f_38 = -1;
		Global_1944167.f_39 = Global_1944167.f_4;
		Global_1944167.f_40 = Global_1944167.f_5;
		Global_1944167.f_41 = __LIB_1__.func_834();
		Global_1944167.f_42 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944167.f_44 = Global_1944167.f_18;
		__LIB_20__.func_369(iVar0);
	}
	else if (__LIB_28__.func_903(iVar0))
	{
		if (Global_1944303.f_2 == -1)
		{
			Global_1944303.f_2 = __LIB_1__.func_834();
		}
		if (Global_1944303.f_3 == -1)
		{
			Global_1944303.f_3 = __LIB_1__.func_833();
		}
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944303.f_6 = 1;
		}
		else
		{
			Global_1944303.f_6 = 0;
		}
		Global_1944303.f_1 = __LIB_26__.func_823(0);
		Global_1944303.f_7 = __LIB_32__.func_910();
		Global_1944303.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_10 = __LIB_0__.func_847(bParam0);
		Global_1944303.f_11 = iParam1;
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944303.f_17 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944303.f_18 = (Global_1944303.f_9 - Global_1944303.f_8);
		Global_1944303.f_19 = Global_2815059.f_6745;
		Global_1944303.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		Global_1944303.f_29 = __LIB_0__.func_847(__LIB_9__.func_303(PLAYER::PLAYER_ID()));
		Global_1944303.f_30 = __LIB_0__.func_847(__LIB_3__.func_114(PLAYER::PLAYER_ID()));
		Global_1944303.f_31 = __LIB_3__.func_61(PLAYER::PLAYER_ID());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (Global_1944303.f_34 > 2)
		{
			Global_1944303.f_34 = 2;
		}
		Global_1944303.f_41 = __LIB_10__.func_911(iVar0);
		__LIB_20__.func_368(iVar0);
	}
	else if (__LIB_10__.func_909(iVar0))
	{
		Global_1944249.f_2 = __LIB_1__.func_834();
		Global_1944249.f_3 = __LIB_1__.func_833();
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944249.f_6 = 1;
		}
		else
		{
			Global_1944249.f_6 = 0;
		}
		Global_1944249.f_1 = __LIB_26__.func_823(0);
		Global_1944249.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_10 = __LIB_0__.func_847(bParam0);
		Global_1944249.f_11 = iParam1;
		Global_1944249.f_18 = (Global_1944249.f_9 - Global_1944249.f_8);
		Global_1944249.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_26__.func_792(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_26__.func_34(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_3__.func_61(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_0__.func_847(__LIB_3__.func_136(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_0__.func_847(__LIB_3__.func_135(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_0__.func_847(__LIB_3__.func_134(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_0__.func_847(__LIB_3__.func_133(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_9__.func_300(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_4__.func_447(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_9__.func_299(PLAYER::PLAYER_ID());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (Global_1944249.f_42 > 2)
		{
			Global_1944249.f_42 = 2;
		}
		__LIB_20__.func_367(iVar0);
	}
	else if (__LIB_9__.func_415(iVar0))
	{
		Global_1944390.f_2 = __LIB_1__.func_834();
		Global_1944390.f_3 = __LIB_1__.func_833();
		Global_1944390.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944390.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944390.f_6 = 1;
		}
		else
		{
			Global_1944390.f_6 = 0;
		}
		Global_1944390.f_7 = __LIB_32__.func_910();
		Global_1944390.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944390.f_10 = __LIB_0__.func_847(bParam0);
		Global_1944390.f_11 = iParam1;
		if (__LIB_1__.func_301() != -1)
		{
			Global_1944390.f_17 = __LIB_0__.func_846(__LIB_1__.func_301());
		}
		Global_1944390.f_18 = (Global_1944390.f_9 - Global_1944390.f_8);
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = __LIB_7__.func_113(PLAYER::PLAYER_ID());
		Global_1944390.f_27 = __LIB_0__.func_847(__LIB_0__.func_834(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_8__.func_48(21, -1);
		Global_1944390.f_29 = __LIB_0__.func_847(__LIB_1__.func_635(PLAYER::PLAYER_ID()));
		__LIB_16__.func_548(iVar0);
	}
	else if (__LIB_2__.func_965(iVar0))
	{
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944465.f_6 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944465.f_7 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		Global_1944465.f_10 = __LIB_32__.func_910();
		Global_1944465.f_11 = 1;
		Global_1944465.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1973074);
		Global_1944465.f_14 = iParam1;
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		__LIB_20__.func_366(iVar0);
	}
	else if (__LIB_9__.func_29(iVar0))
	{
		Global_1944552.f_2 = __LIB_1__.func_834();
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944552.f_6 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944552.f_7 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		Global_1944552.f_8 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944552.f_10 = __LIB_32__.func_910();
		Global_1944552.f_11 = 1;
		Global_1944552.f_14 = iParam1;
		__LIB_20__.func_365(iVar0);
	}
	else if (__LIB_9__.func_298(iVar0))
	{
		Global_1944664.f_2 = __LIB_1__.func_834();
		Global_1944664.f_9 = 1;
		Global_1944664.f_10 = bParam0;
		Global_1944664.f_11 = iParam1;
		__LIB_20__.func_364(iVar0);
	}
	else if (__LIB_2__.func_473(iVar0) || __LIB_10__.func_894(iVar0))
	{
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944685.f_5 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944685.f_6 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		Global_1944685.f_7 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944685.f_9 = __LIB_32__.func_910();
		Global_1944685.f_10 = 1;
		Global_1944685.f_13 = iParam1;
		Global_1944685.f_33 = bParam0;
		Global_1944685.f_32 = iVar0;
		__LIB_20__.func_363(iVar0);
	}
	else if (__LIB_10__.func_893(iVar0) || __LIB_10__.func_892(iVar0))
	{
		iVar3 = __LIB_0__.func_582();
		if (iVar3 != -1)
		{
			Global_1944754.f_7 = __LIB_1__.func_835(iVar3);
			Global_1944754.f_8 = __LIB_3__.func_639(iVar3);
		}
		Global_1944754.f_9 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944754.f_11 = __LIB_32__.func_910();
		Global_1944754.f_12 = 1;
		Global_1944754.f_15 = bParam0;
		Global_1944754.f_3 = __LIB_1__.func_834();
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_10__.func_893(iVar0))
		{
			Global_1944754.f_4 = __LIB_10__.func_903(__LIB_21__.func_92(PLAYER::PLAYER_ID()));
		}
		else
		{
			Global_1944754.f_4 = __LIB_10__.func_902(__LIB_21__.func_126(PLAYER::PLAYER_ID()));
		}
		Global_1944754.f_1 = iVar0;
		Global_1944754.f_16 = iParam1;
		iVar7 = PLAYER::PLAYER_ID();
		if (iVar3 != -1)
		{
			iVar7 = iVar3;
		}
		iVar6 = 0;
		while (iVar6 < 3)
		{
			iVar4[iVar6] = __LIB_10__.func_901(__LIB_9__.func_626(iVar7, iVar6));
			iVar5[iVar6] = __LIB_10__.func_900(__LIB_9__.func_627(iVar7, iVar6));
			iVar6++;
		}
		__LIB_20__.func_362(iVar0, &iVar4, &iVar5);
	}
	else
	{
		Global_1943929.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1943929.f_7 = 1;
		}
		else
		{
			Global_1943929.f_7 = 0;
		}
		Global_1943929.f_8 = iParam1;
		if (Global_1943929.f_4 == 0)
		{
			if ((__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
			{
				Global_1943929.f_4 = 1;
			}
		}
	}
}

void func_683(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3E12B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (bParam5)
	{
		iVar0 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
		Global_1944213 = iVar0;
		Global_1944213.f_1 = iParam0;
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944213.f_2 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944213.f_3 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944213.f_2), &(Global_1944213.f_3));
		}
		Global_1944213.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		Global_1944213.f_13 = 0;
		Global_1944213.f_14 = 0;
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
	}
	else
	{
		iVar0 = __LIB_0__.func_396(PLAYER::PLAYER_ID());
	}
	if (((iParam2 || __LIB_10__.func_929(iVar0)) || iVar0 == 293) || iVar0 == 291)
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1943947 = iVar0;
		if (__LIB_2__.func_491(iVar0) || iVar0 == 293)
		{
			Global_1943947.f_1 = 4;
		}
		else if (__LIB_2__.func_492(iVar0))
		{
			Global_1943947.f_1 = 5;
		}
		else if (__LIB_1__.func_266(iVar0, 0))
		{
			Global_1943947.f_1 = 2;
			if (__LIB_10__.func_895(iVar0))
			{
				Global_1943947.f_1 = 3;
			}
		}
		else
		{
			Global_1943947.f_1 = 1;
		}
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1943947.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1943947.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1943947.f_6), &(Global_1943947.f_7));
		}
		Global_1943947.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1943947.f_27 = 1;
			Global_1943947.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1943947.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1943947.f_40 = __LIB_1__.func_347(iParam1);
			Global_1943947.f_41 = __LIB_13__.func_380();
			Global_1943947.f_42 = __LIB_4__.func_473(PLAYER::PLAYER_ID(), iParam1);
			Global_1943947.f_44 = __LIB_4__.func_814(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!__LIB_1__.func_145() || iVar0 != 192)
		{
			Global_1943947.f_53 = 0;
		}
	}
	else if (((__LIB_3__.func_524(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		if ((((iVar0 == 225 || iVar0 == 226) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
		{
			Global_1944066 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1944066 = iParam0 + 1;
		}
		else
		{
			Global_1944066 = __LIB_21__.func_87(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_46 = iVar0;
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944066.f_17 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		else
		{
			Global_1944066.f_17 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (__LIB_1__.func_337(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1944066.f_1 = 0;
				}
				else
				{
					Global_1944066.f_1 = 1;
				}
				break;
			case 226:
				Global_1944066.f_1 = 2;
				break;
			case 227:
				Global_1944066.f_1 = 3;
				break;
			case 297:
				Global_1944066.f_1 = 4;
				break;
			case 296:
				Global_1944066.f_1 = 5;
				break;
			case 298:
				Global_1944066.f_1 = 6;
				break;
		}
		Global_1944066.f_21 = 1;
		Global_1944066.f_22 = 1;
		Global_1944066.f_44 = __LIB_32__.func_622(1);
		Global_1944066.f_45 = __LIB_32__.func_622(0);
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944066.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944066.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944066.f_4), &(Global_1944066.f_5));
		}
		Global_1944066.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944066.f_20 = iParam0;
		}
	}
	else if (__LIB_9__.func_286(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1944003 = iVar0;
		Global_1943947.f_1 = 1;
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944003.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944003.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944003.f_6), &(Global_1944003.f_7));
		}
		Global_1944003.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944003.f_21 = iParam0;
		}
	}
	else if (__LIB_1__.func_204(iVar0))
	{
		Global_1944113 = iVar0;
		Global_1944113.f_1 = iParam0;
		Global_1944113.f_21 = 1;
		Global_1944113.f_22 = 1;
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944113.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944113.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944113.f_4), &(Global_1944113.f_5));
		}
		Global_1944113.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944113.f_20 = iParam0;
		}
		Global_1944113.f_27 = __LIB_20__.func_355(__LIB_0__.func_5(), 5);
		Global_1944113.f_28 = __LIB_0__.func_847(__LIB_1__.func_247(PLAYER::PLAYER_ID()));
		Global_1944113.f_29 = __LIB_1__.func_556(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__.func_556(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__.func_556(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__.func_556(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__.func_556(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__.func_556(6111, -1, 0);
		Global_1944113.f_7 = __LIB_32__.func_910();
		Global_1944113.f_51 = __LIB_0__.func_847(bParam4);
	}
	else if (__LIB_0__.func_787(iVar0))
	{
		Global_1944167 = iVar0;
		Global_1944167.f_1 = iParam0;
		Global_1944167.f_21 = 1;
		Global_1944167.f_22 = 1;
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944167.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944167.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944167.f_4), &(Global_1944167.f_5));
		}
		Global_1944167.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944167.f_20 = iParam0;
		}
		Global_1944167.f_24 = __LIB_1__.func_556(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__.func_556(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__.func_556(6166, -1, 0);
		Global_1944167.f_27 = __LIB_0__.func_847((((__LIB_2__.func_272() || __LIB_20__.func_344()) || __LIB_20__.func_343()) || __LIB_1__.func_233(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__.func_556(6167, -1, 0);
		Global_1944167.f_29 = __LIB_0__.func_847(__LIB_8__.func_448());
		Global_1944167.f_31 = 0;
		Global_1944167.f_30 = 0;
		Global_1944167.f_32 = 0;
		Global_1944167.f_33 = 0;
		Global_1944167.f_34 = 0;
		Global_1944167.f_16 = 0;
		Global_1944167.f_7 = __LIB_32__.func_910();
	}
	else if (__LIB_28__.func_903(iVar0))
	{
		Global_1944303 = iVar0;
		Global_1944303.f_1 = iParam0;
		Global_1944303.f_21 = 1;
		Global_1944303.f_22 = 1;
		Global_1944303.f_7 = __LIB_32__.func_910();
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944303.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944303.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944303.f_4), &(Global_1944303.f_5));
		}
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944303.f_17 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944303.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		Global_1944303.f_16 = 0;
		Global_1944303.f_24 = 0;
		Global_1944303.f_23 = 0;
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		Global_1944303.f_39 = __LIB_32__.func_622(1);
		Global_1944303.f_40 = __LIB_32__.func_622(0);
	}
	else if (iVar0 == 237)
	{
		Global_1944249 = iVar0;
		Global_1944249.f_1 = iParam0;
		Global_1944249.f_21 = 1;
		Global_1944249.f_22 = 1;
		Global_1944249.f_7 = __LIB_32__.func_910();
		Global_1944249.f_24 = 0;
		Global_1944249.f_23 = 0;
		Global_1944249.f_16 = 0;
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1944249.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1944249.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		Global_1944249.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_26__.func_792(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_26__.func_34(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_3__.func_61(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_0__.func_847(__LIB_3__.func_136(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_0__.func_847(__LIB_3__.func_135(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_0__.func_847(__LIB_3__.func_134(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_0__.func_847(__LIB_3__.func_133(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_9__.func_300(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_4__.func_447(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_9__.func_299(PLAYER::PLAYER_ID());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (__LIB_1__.func_301() != __LIB_0__.func_160())
		{
			__LIB_10__.func_896(__LIB_1__.func_301(), &(Global_1944249.f_4), &(Global_1944249.f_5));
		}
		Global_1944249.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_28 = __LIB_1__.func_186(PLAYER::PLAYER_ID());
	}
	else if (__LIB_9__.func_415(iVar0))
	{
		Global_1944390 = iVar0;
		Global_1944390.f_1 = __LIB_1__.func_337(PLAYER::PLAYER_ID());
		Global_1944390.f_2 = __LIB_1__.func_834();
		Global_1944390.f_3 = __LIB_1__.func_833();
		Global_1944390.f_4 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944390.f_5 = __LIB_3__.func_639(__LIB_0__.func_582());
		Global_1944390.f_7 = __LIB_32__.func_910();
		Global_1944390.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944390.f_17 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = iParam0;
		Global_1944390.f_27 = __LIB_0__.func_847(__LIB_0__.func_834(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_8__.func_48(21, -1);
	}
	else if (__LIB_2__.func_965(iVar0))
	{
		Global_1944465 = Global_786547.f_1;
		Global_1944465.f_2 = Global_786547;
		Global_1944465.f_6 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944465.f_7 = __LIB_3__.func_639(__LIB_0__.func_582());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944465.f_9 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944465.f_10 = __LIB_32__.func_910();
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		Global_1944465.f_21 = 0;
		Global_1944465.f_22 = 0;
		Global_1944465.f_23 = 0;
		Global_1973074 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (__LIB_9__.func_29(iVar0))
	{
		Global_1944552 = Global_786547.f_1;
		Global_1944552.f_3 = Global_786547;
		Global_1944552.f_6 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944552.f_7 = __LIB_3__.func_639(__LIB_0__.func_582());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944552.f_8 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944552.f_9 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944552.f_10 = __LIB_32__.func_910();
		Global_1944552.f_21 = 0;
		Global_1944552.f_22 = 0;
		Global_1944552.f_23 = 0;
		Global_1944552.f_26 = __LIB_32__.func_622(1);
		Global_1944552.f_34 = __LIB_32__.func_622(0);
		Global_1944552.f_15 = !__LIB_6__.func_941(PLAYER::PLAYER_ID(), __LIB_1__.func_301(), 1);
	}
	else if (__LIB_9__.func_298(iVar0))
	{
		Global_1944664 = iParam0;
		Global_1944664.f_1 = iVar0;
		Global_1944664.f_3 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944664.f_4 = __LIB_3__.func_639(__LIB_0__.func_582());
		Global_1944664.f_5 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		Global_1944664.f_6 = __LIB_32__.func_910();
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944664.f_7 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		Global_1944664.f_8 = 0;
	}
	else if (__LIB_2__.func_473(iVar0) || __LIB_10__.func_894(iVar0))
	{
		Global_1944685 = Global_786547.f_1;
		Global_1944685.f_27 = Global_786547;
		Global_1944685.f_5 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944685.f_6 = __LIB_3__.func_639(__LIB_0__.func_582());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944685.f_7 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944685.f_8 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		else
		{
			Global_1944685.f_8 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
		}
		Global_1944685.f_9 = __LIB_32__.func_910();
		Global_1944685.f_18 = 1;
		Global_1944685.f_19 = 1;
		Global_1944685.f_20 = 0;
		Global_1944685.f_21 = 0;
		Global_1944685.f_22 = 0;
		Global_1944685.f_23 = __LIB_32__.func_622(1);
		Global_1944685.f_24 = __LIB_32__.func_622(0);
		Global_1944685.f_14 = !__LIB_6__.func_941(PLAYER::PLAYER_ID(), __LIB_1__.func_301(), 1);
	}
	else if (__LIB_10__.func_893(iVar0) || __LIB_10__.func_892(iVar0))
	{
		Global_1944754.f_7 = __LIB_1__.func_835(__LIB_0__.func_582());
		Global_1944754.f_8 = __LIB_3__.func_639(__LIB_0__.func_582());
		if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_0__.func_847(__LIB_18__.func_447(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_0__.func_582() != -1)
		{
			Global_1944754.f_10 = __LIB_0__.func_846(__LIB_0__.func_582());
		}
		else
		{
			Global_1944754.f_10 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
		}
		Global_1944754.f_11 = __LIB_32__.func_910();
		Global_1944754.f_20 = 0;
		Global_1944754.f_21 = 0;
		Global_1944754.f_22 = 0;
		Global_1944754.f_23 = __LIB_32__.func_622(1);
		Global_1944754.f_24 = __LIB_32__.func_622(0);
		Global_1944754.f_17 = !__LIB_6__.func_941(PLAYER::PLAYER_ID(), __LIB_1__.func_301(), 1);
		Global_1944754.f_1 = iVar0;
	}
	else
	{
		if (__LIB_0__.func_582() != __LIB_0__.func_160())
		{
			Global_1943929 = __LIB_1__.func_835(__LIB_0__.func_582());
			Global_1943929.f_1 = __LIB_3__.func_639(__LIB_0__.func_582());
		}
		Global_1943929.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943929.f_13 = __LIB_10__.func_950();
		Global_1943929.f_15 = 0;
		if (__LIB_19__.func_760(1))
		{
			if (__LIB_1__.func_301() == __LIB_0__.func_582())
			{
				Global_1943929.f_15 = 1;
			}
		}
		if (__LIB_16__.func_605())
		{
			Global_1944066.f_28 = 1;
		}
		if (((((__LIB_5__.func_607() || __LIB_5__.func_606()) || __LIB_5__.func_605()) || __LIB_5__.func_604()) || __LIB_5__.func_603()) || __LIB_2__.func_710(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_30 = 1;
		}
		if (__LIB_20__.func_342(__LIB_9__.func_383(joaat("trailersmall2"))))
		{
			Global_1944066.f_32 = 1;
		}
		if (__LIB_33__.func_7(__LIB_1__.func_367(joaat("caddy"))))
		{
			Global_1944066.f_31 = 1;
		}
		if (__LIB_9__.func_104(PLAYER::PLAYER_ID()) || __LIB_9__.func_103(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_29 = 1;
		}
		if (__LIB_1__.func_981(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_33 = 1;
			Global_1944066.f_34 = 1;
		}
		if (__LIB_3__.func_457(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_36 = 1;
		}
		if (__LIB_3__.func_417(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1944066.f_35 = 1;
		}
		if (__LIB_11__.func_61(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1944066.f_37 = 1;
		}
		if (__LIB_11__.func_61(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1944066.f_38 = 1;
		}
		if (__LIB_9__.func_524(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = __LIB_4__.func_680(PLAYER::PLAYER_ID(), iVar2);
				if (__LIB_19__.func_819(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1944066.f_39 = 1;
				}
				if (__LIB_19__.func_819(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1944066.f_40 = 1;
				}
				if (__LIB_19__.func_819(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1944066.f_41 = 1;
				}
				iVar2++;
			}
		}
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
	if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
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
	if (((__LIB_36__.func_855(164) || __LIB_25__.func_938()) || !Global_2703735.f_4.f_10) || iLocal_91 == 0)
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
	if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
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
			fVar3 = (1f - (__LIB_0__.func_301(fVar2, 5f, 25f) / 25f));
			fVar4 = __LIB_0__.func_408(26f, 175f, fVar3);
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
		__LIB_6__.func_952();
		return;
	}
	if (func_705())
	{
		__LIB_6__.func_952();
		return;
	}
	switch (bParam0)
	{
		case 0:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					func_738(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS0" /* GXT: Find the VIP of ~a~~s~ and take them out */, __LIB_34__.func_329(func_16()), iLocal_92, 0, -1, -1, -1, 2, -1);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS1" /* GXT: Protect your VIP */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 2:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(86, "GB_HTB_BMT0" /* GXT: EXECUTIVE SEARCH */, "GB_HTB_BMS2" /* GXT: Survive until the time runs out */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 3:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
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
				if (__LIB_28__.func_416())
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
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS5" /* GXT: The VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 6:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS5" /* GXT: The VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 7:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS6" /* GXT: The VIP has left */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 8:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
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
				if (__LIB_28__.func_416())
				{
					func_740();
					func_716(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS8" /* GXT: You were taken out by fellow ~a~~s~ member <C>~a~</C>~s~ */, __LIB_28__.func_434(), iLocal_92, func_6(), 0, 0, 0, -1, -1, -1, 2, -1, 2);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 10:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS9" /* GXT: You survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 11:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(87, "GB_WINNER" /* GXT: WINNER */, "GB_HTB_BMS10" /* GXT: Your VIP survived the search */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 12:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS11" /* GXT: You left the area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 13:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS12" /* GXT: Your VIP left the area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 14:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS13" /* GXT: The VIP left the hideout area before the time was up */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 15:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS14" /* GXT: You killed your VIP */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 16:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
				{
					func_740();
					__LIB_42__.func_181(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_HTB_BMS15" /* GXT: You failed to enter the hide-out zone in time */, 1, -1, 2, 1, 0);
					MISC::SET_BIT(&uLocal_102, bParam0);
				}
			}
			break;
		case 17:
			if (!BitTest(uLocal_102, bParam0))
			{
				if (__LIB_28__.func_416())
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
	__LIB_0__.func_975(iParam0, &Var0, iParam9, sParam2, sParam1);
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
	__LIB_6__.func_896(&(Var0.f_69), 4);
	return __LIB_41__.func_773(&Var0);
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
	__LIB_0__.func_975(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_6__.func_896(&(Var0.f_69), iParam8);
	}
	return __LIB_41__.func_773(&Var0);
}

int func_738(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x47DCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__.func_160();
	iVar1 = __LIB_0__.func_160();
	iVar2 = __LIB_0__.func_160();
	return func_716(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

void func_740()//Position - 0x47F0E
{
	if (((((((__LIB_28__.func_904("GB_HTB_HR1" /* GXT: ~a~~s~ have started Executive Search. Search the area and take out their VIP to earn cash and RP. */, __LIB_34__.func_329(func_16()), __LIB_21__.func_180(func_16())) || __LIB_29__.func_34("GB_HTB_HR0" /* GXT: ~a~~s~ have started Executive Search. Search the area ~a~~s~ and take out their VIP to earn cash and RP. */, __LIB_34__.func_329(func_16()), __LIB_21__.func_180(func_16()), "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_21__.func_180(func_16()))) || func_741("GB_HTB_HG0" /* GXT: Your VIP has started Executive Search. Enter the area ~a~~s~ and protect them to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_21__.func_180(func_16()))) || __LIB_0__.func_1("GB_HTB_HELP2" /* GXT: There is a wanted VIP on the loose somewhere in the countryside. Head over to the indicated location on your map to begin searching. */)) || __LIB_0__.func_1("GB_HTB_HELP3" /* GXT: Your VIP is wanted for unspecified crimes, and is currently hiding out in the indicated area on your map. Do whatever you can to throw any search parties off the VIP's scent. */)) || __LIB_0__.func_1("GB_HTB_HELP4" /* GXT: You are now visible to all players, return to the hideout area immediately to return to hiding. Failure to do so will result in a loss. */)) || __LIB_0__.func_1("GB_HTB_HELP5" /* GXT: The search has begun, try to stay hidden until the time runs out! */)) || __LIB_0__.func_1("GB_HTB_HELP7" /* GXT: Keep moving or you will become visible on the Radar to other players. When visible, your Radar arrow will turn red. */))
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
				if (__LIB_28__.func_905(0))
				{
					__LIB_15__.func_255("GB_HTB_HB0" /* GXT: You have started Executive Search. Enter the area ~a~~s~ and survive to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_21__.func_180(func_16()), -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_2__.func_195("GB_HTB_HR0" /* GXT: ~a~~s~ have started Executive Search. Search the area ~a~~s~ and take out their VIP to earn cash and RP. */, __LIB_34__.func_329(func_16()), __LIB_21__.func_180(func_16()), "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_21__.func_180(func_16()), -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 2:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_1__.func_278("GB_HTB_HELP2" /* GXT: There is a wanted VIP on the loose somewhere in the countryside. Head over to the indicated location on your map to begin searching. */, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 3:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_1__.func_278("GB_HTB_HELP3" /* GXT: Your VIP is wanted for unspecified crimes, and is currently hiding out in the indicated area on your map. Do whatever you can to throw any search parties off the VIP's scent. */, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 4:
			if (__LIB_28__.func_905(0))
			{
				__LIB_1__.func_278("GB_HTB_HELP4" /* GXT: You are now visible to all players, return to the hideout area immediately to return to hiding. Failure to do so will result in a loss. */, -1);
				__LIB_36__.func_794(0);
			}
			break;
		case 5:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_1__.func_278("GB_HTB_HELP5" /* GXT: The search has begun, try to stay hidden until the time runs out! */, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 6:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_15__.func_255("GB_HTB_HG0" /* GXT: Your VIP has started Executive Search. Enter the area ~a~~s~ and protect them to earn cash and RP. */, "GB_HTB_BLP" /* GXT: ~BLIP_HUNT_THE_BOSS~ */, __LIB_21__.func_180(func_16()), -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
				}
			}
			break;
		case 7:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_1__.func_278("GB_HTB_HELP7" /* GXT: Keep moving or you will become visible on the Radar to other players. When visible, your Radar arrow will turn red. */, -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
					__LIB_6__.func_371(-169037398, func_751(0));
				}
			}
			break;
		case 8:
			if (!BitTest(uLocal_103, bParam0))
			{
				if (__LIB_28__.func_905(0))
				{
					__LIB_2__.func_299("GB_HTB_HR1" /* GXT: ~a~~s~ have started Executive Search. Search the area and take out their VIP to earn cash and RP. */, __LIB_34__.func_329(func_16()), __LIB_21__.func_180(func_16()), -1);
					__LIB_36__.func_794(1);
					MISC::SET_BIT(&uLocal_103, bParam0);
					__LIB_6__.func_371(-169037398, func_751(0));
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
		if (__LIB_1__.func_264(iVar2, 0, 0))
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
	if (__LIB_0__.func_649(&(Local_118.f_12)))
	{
		if (__LIB_2__.func_30(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 35000), 0))
		{
			func_764(&iLocal_116, 3, 1);
		}
		if (__LIB_2__.func_30(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 30000), 0))
		{
			func_764(&iLocal_116, 4, 1);
		}
		if (__LIB_2__.func_30(Local_118.f_12, (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - 27000), 0))
		{
			func_764(&iLocal_116, 5, 1);
		}
		if (__LIB_2__.func_30(Local_118.f_12, Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */, 0))
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
					sVar2 = __LIB_1__.func_6(func_760(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
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
	if (__LIB_0__.func_649(&(Local_118.f_16)) && __LIB_2__.func_30(Local_118.f_16, 10000, 0))
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
	return __LIB_21__.func_127(func_16(), 1);
}

int func_762(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)//Position - 0x4898D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	fVar1 = __LIB_0__.func_316(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	*uParam2 = __LIB_0__.func_529(iVar0, Local_118.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam2 = __LIB_2__.func_320(*uParam2, fVar3);
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
					if (__LIB_37__.func_818(82, "GB_INTTXT_HBB" /* GXT: THREAT WARNING: Your life is in danger. Please lie low and let the Bodyguards in your Protection Detail do their work. */, 2, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 3);
					}
				}
			}
			else if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 3))
				{
					if (__LIB_37__.func_818(82, "GB_INTTXT_HBG" /* GXT: THREAT WARNING: Your VIP is in danger. Protect them at all costs, and remember - your pay check is on the line. */, 2, 0, 0, 0, 0, 1, 0, 1))
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
		if (__LIB_7__.func_212())
		{
			__LIB_18__.func_455();
		}
		return;
	}
	if (iLocal_91 != 3)
	{
		if (__LIB_7__.func_212())
		{
			__LIB_18__.func_455();
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
				if (__LIB_0__.func_649(&(Local_118.f_16)))
				{
					if (!__LIB_7__.func_180("GB_HTB_OT4" /* GXT: Return to the search area. */))
					{
						__LIB_25__.func_25("GB_HTB_OT4" /* GXT: Return to the search area. */, 0);
					}
				}
				else if (!__LIB_7__.func_180("GB_HTB_OT1" /* GXT: Stay hidden in the search area. */))
				{
					__LIB_25__.func_25("GB_HTB_OT1" /* GXT: Stay hidden in the search area. */, 0);
				}
			}
			else if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
			{
				if (iLocal_91 == 3)
				{
					if (!__LIB_7__.func_180("GB_HTB_OT2" /* GXT: Your ~a~~s~ is being hunted. Protect them. */))
					{
						__LIB_32__.func_948("GB_HTB_OT2" /* GXT: Your ~a~~s~ is being hunted. Protect them. */, "GB_BOSS_LC" /* GXT: VIP */, iLocal_92, 0);
					}
				}
			}
			else if (func_710(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!__LIB_7__.func_180("GB_HTB_OT3" /* GXT: <C>~a~</C>~s~ is the target ~a~~s~. Take them out. */))
				{
					if (__LIB_1__.func_264(Local_118.f_5, 0, 1))
					{
						func_789("GB_HTB_OT3" /* GXT: <C>~a~</C>~s~ is the target ~a~~s~. Take them out. */, Local_118.f_5, "GB_BOSS_LC" /* GXT: VIP */, iLocal_92, 0);
					}
				}
			}
			break;
		case 2:
			if (__LIB_7__.func_212())
			{
				__LIB_18__.func_455();
			}
			break;
		case 3:
			if (__LIB_7__.func_212())
			{
				__LIB_18__.func_455();
			}
			break;
	}
}

void func_789(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x49F41
{
	if (__LIB_25__.func_16(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam4, iParam3))
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
				if (__LIB_0__.func_649(&(Local_118.f_16)))
				{
					iVar0 = (20000 - __LIB_1__.func_295(&(Local_118.f_16), 0, 0));
					if (iVar0 > 0)
					{
						__LIB_6__.func_929(iVar0, "GB_HTB_TM2" /* GXT: TIME */, 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						__LIB_6__.func_929(0, "GB_HTB_TM2" /* GXT: TIME */, 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					return;
				}
			}
			if (__LIB_0__.func_649(&(Local_118.f_12)))
			{
				iVar0 = (Global_262145.f_12962 /* Tunable: GB_HUNTBOSS_TIME_LIMIT */ - __LIB_1__.func_295(&(Local_118.f_12), 0, 0));
				if (iVar0 > 0)
				{
					__LIB_6__.func_929(iVar0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					__LIB_6__.func_929(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		case 2:
			if (iLocal_91 == 2 || iLocal_91 == 3)
			{
				if (__LIB_0__.func_649(&(Local_118.f_14)))
				{
					__LIB_6__.func_929(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
			if (!__LIB_0__.func_86(Local_118.f_7))
			{
				if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
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
						__LIB_6__.func_919(&iLocal_101, iLocal_92);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_100))
					{
						iLocal_100 = HUD::ADD_BLIP_FOR_RADIUS(Local_118.f_7, SYSTEM::TO_FLOAT((Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1)));
						__LIB_6__.func_919(&iLocal_100, iLocal_92);
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
					if (!__LIB_0__.func_649(&(Local_118.f_16)) && !__LIB_0__.func_649(&(Local_118.f_18)))
					{
						if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
						{
							__LIB_28__.func_906(1, 0);
							MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
						}
					}
					else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
					{
						__LIB_28__.func_906(0, 0);
						MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_825();
				if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 0))
				{
					if (bLocal_107)
					{
						if ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_118.f_5) && Local_119[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_118.f_5) /*3*/].f_1 == 1) && !BitTest(Local_119[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_118.f_5) /*3*/].f_2, 2))
						{
							if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 10))
							{
								__LIB_19__.func_770(Local_118.f_5, 432, 1, 0);
								__LIB_34__.func_309(Local_118.f_5, __LIB_1__.func_48(iLocal_92), 1, 0);
								if (__LIB_1__.func_264(func_16(), 1, 1))
								{
									__LIB_20__.func_361(Local_118.f_5, 1, 0, 0);
								}
								MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 10);
							}
						}
						else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 10))
						{
							__LIB_19__.func_770(Local_118.f_5, 432, 0, 0);
							__LIB_34__.func_309(Local_118.f_5, __LIB_1__.func_48(iLocal_92), 0, 0);
							if (__LIB_1__.func_264(func_16(), 1, 1))
							{
								__LIB_20__.func_361(Local_118.f_5, 0, 0, 0);
							}
							MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!__LIB_0__.func_86(Local_118.f_7))
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
					__LIB_6__.func_919(&iLocal_101, iLocal_92);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_100))
				{
					iLocal_100 = HUD::ADD_BLIP_FOR_RADIUS(Local_118.f_7, SYSTEM::TO_FLOAT((Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */ - 1)));
					__LIB_6__.func_919(&iLocal_100, iLocal_92);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_100, true);
					HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iLocal_100, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_100, "GB_HTB_BLIP0" /* GXT: Executive Search Trigger */);
					HUD::SET_BLIP_ALPHA(iLocal_100, Global_262145.f_12711 /* Tunable: BLIP_AREA_ALPHA */);
				}
				if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1) || __LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
				{
					if (__LIB_13__.func_258(PLAYER::PLAYER_ID(), 1))
					{
						iVar1 = __LIB_0__.func_603(PLAYER::PLAYER_ID());
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
			if (func_16() != __LIB_0__.func_582())
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
	if (__LIB_0__.func_649(&(Local_118.f_16)) && __LIB_0__.func_649(&(Local_118.f_18)))
	{
		if (__LIB_0__.func_649(&uLocal_113))
		{
			__LIB_0__.func_579(&uLocal_113);
		}
		return;
	}
	if (!__LIB_0__.func_649(&uLocal_111) && !__LIB_0__.func_649(&uLocal_113))
	{
		Local_109 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		__LIB_0__.func_580(&uLocal_111, 0, 0);
		iLocal_110 = 0;
	}
	else if (__LIB_0__.func_649(&uLocal_113))
	{
		if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
		{
			__LIB_28__.func_906(0, 0);
			MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
		}
		if (__LIB_2__.func_47(&uLocal_113, SYSTEM::ROUND(Global_262145.f_12965 /* Tunable: GB_HUNTBOSS_BOSS_BLIPPED_TIME */), 0))
		{
			__LIB_0__.func_579(&uLocal_113);
			MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 4);
			__LIB_15__.func_473(0, -1, 500, 500, 0);
			if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
			{
				__LIB_28__.func_906(1, 0);
				MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
			}
		}
	}
	else if (__LIB_1__.func_295(&uLocal_111, 0, 0) > (500 * iLocal_110))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_109) > IntToFloat(Global_262145.f_12963 /* Tunable: GB_HUNTBOSS_BLIPPABLE_RADIUS */))
		{
			__LIB_0__.func_579(&uLocal_111);
			if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 4))
			{
				__LIB_0__.func_580(&uLocal_113, 0, 0);
			}
		}
		else if (IntToFloat(__LIB_1__.func_295(&uLocal_111, 0, 0)) > Global_262145.f_12964 /* Tunable: GB_HUNTBOSS_TIME_IN_RADIUS_BEFORE_BLIP */)
		{
			if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
			{
				__LIB_28__.func_906(0, 0);
				MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
				func_748(7);
				__LIB_15__.func_473(1, -1, 2147483647, 0, 0);
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
	if (iParam0 != __LIB_0__.func_160())
	{
		if (!__LIB_0__.func_86(Local_118.f_7))
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
	*uParam2 = __LIB_0__.func_529(iVar0, Local_118.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0);
	*uParam2 = __LIB_2__.func_320(*uParam2, fVar1);
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
		__LIB_19__.func_770(Local_118.f_5, 432, 0, 0);
		__LIB_34__.func_309(Local_118.f_5, __LIB_1__.func_48(iLocal_92), 0, 0);
		__LIB_20__.func_361(Local_118.f_5, 0, 0, 0);
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
	iVar2 = __LIB_0__.func_160();
	iVar3 = __LIB_0__.func_160();
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
					if (iVar2 != __LIB_0__.func_160())
					{
						if (__LIB_1__.func_264(iVar2, 0, 0))
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
							if (iVar3 != __LIB_0__.func_160())
							{
								if (__LIB_1__.func_264(iVar3, 0, 0))
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
			if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
			{
				if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
				{
					__LIB_21__.func_123();
					MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_5)
		{
			if (PLAYER::PLAYER_ID() == iVar3)
			{
				if (!__LIB_0__.func_163(PLAYER::PLAYER_ID(), 20))
				{
					__LIB_32__.func_914(0);
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
			if (iVar3 != __LIB_0__.func_160())
			{
				Local_118.f_6 = iVar3;
				MISC::SET_BIT(&(Local_118.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != __LIB_0__.func_160() && __LIB_13__.func_258(iVar2, 0))
	{
		iVar5 = __LIB_0__.func_603(iVar2);
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
							if (iVar3 != __LIB_0__.func_160())
							{
								if (__LIB_1__.func_264(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == PLAYER::PLAYER_ID())
			{
				if (!__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
				{
					if (!BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 8))
					{
						__LIB_21__.func_123();
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
					__LIB_21__.func_123();
					MISC::SET_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_842()//Position - 0x4BE58
{
	var uVar0;
	if (!__LIB_0__.func_86(Local_118.f_7))
	{
		if (Local_118.f_1 >= 1 || __LIB_0__.func_582() == Local_118.f_5)
		{
			__LIB_42__.func_496(164, Local_118.f_7, &uLocal_106, 1140457472, 1144750080, 0);
		}
		if (iLocal_91 != __LIB_26__.func_804(PLAYER::PLAYER_ID()))
		{
			iLocal_91 = __LIB_26__.func_804(PLAYER::PLAYER_ID());
		}
	}
	if (func_755())
	{
		if (__LIB_5__.func_804())
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
			bLocal_108 = (__LIB_25__.func_938() || func_852(func_755()));
			if (bLocal_108)
			{
				if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
				{
					MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
					if (func_755())
					{
						__LIB_36__.func_585(0, 0);
						__LIB_10__.func_880(2);
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
						__LIB_36__.func_585(1, 0);
						__LIB_10__.func_880(2);
					}
				}
			}
			else if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
				if (func_755())
				{
					__LIB_36__.func_585(0, 0);
					__LIB_10__.func_879(2);
				}
			}
			if (!func_843())
			{
				if (func_831(PLAYER::PLAYER_ID(), Global_262145.f_12966 /* Tunable: GB_HUNTBOSS_AREA_RADIUS */, &uVar0, 1123024896, 0))
				{
					if (!__LIB_0__.func_163(PLAYER::PLAYER_ID(), 20))
					{
						__LIB_32__.func_914(0);
					}
				}
			}
			break;
	}
}

int func_843()//Position - 0x4BFF6
{
	if (__LIB_6__.func_941(PLAYER::PLAYER_ID(), func_16(), 1))
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
	if (__LIB_27__.func_618(4))
	{
		return 1;
	}
	if (__LIB_0__.func_706())
	{
		return 1;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (__LIB_0__.func_527())
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
		if (iParam2 == -1 || __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) != iParam2)
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
	if (iParam0 == __LIB_0__.func_160())
	{
		return iParam0;
	}
	if (__LIB_9__.func_279(iParam0) != -1)
	{
		iVar0 = __LIB_0__.func_170(__LIB_9__.func_279(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_13__.func_258(iParam0, 0))
			{
				return __LIB_0__.func_603(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return __LIB_0__.func_160();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return __LIB_0__.func_160();
}

void func_911()//Position - 0x4DCCA
{
	switch (func_914())
	{
		case 1:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 1)
			{
				__LIB_26__.func_820(func_843());
				func_912(1);
			}
			break;
		case 2:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 2)
			{
				__LIB_26__.func_820(func_843());
				func_912(2);
			}
			break;
		case 3:
			if (func_759(NETWORK::PARTICIPANT_ID_TO_INT()) != 3)
			{
				__LIB_26__.func_820(func_843());
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
	iLocal_91 = __LIB_26__.func_804(PLAYER::PLAYER_ID());
	__LIB_39__.func_271(164, 1, -1, 0);
	iLocal_92 = __LIB_40__.func_275(Local_118.f_5, -2, 0, 0, 0);
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
		if (__LIB_9__.func_50(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_1__.func_769(PLAYER::PLAYER_ID(), 0);
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		if (BitTest(Local_119[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 7))
		{
			func_385(0, 4, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
	}
	if (__LIB_10__.func_881(2))
	{
		__LIB_10__.func_879(2);
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
	__LIB_34__.func_581(Local_118.f_4, -1, -1, -1082130432);
	__LIB_36__.func_585(0, 0);
	__LIB_41__.func_18(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_1004(struct<21> Param0)//Position - 0x50D2A
{
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	__LIB_36__.func_246(164, 0, 0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_118, 22, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_119, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

