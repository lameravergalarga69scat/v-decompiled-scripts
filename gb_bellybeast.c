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
	int iLocal_94[4] = { 0, 0, 0, 0 };
	int iLocal_95[4] = { 0, 0, 0, 0 };
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<59> Local_111 = { 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_112[32];
	var uLocal_113[4] = { 0, 0, 0, 0 };
	struct<2> Local_114[4];
	struct<21> Local_115 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (!func_993(ScriptParam_115))
		{
			func_859(0);
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_859(1);
		}
		func_845();
		switch (__LIB_30__::func_519(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_30__::func_518() == 1)
				{
					if (__LIB_0__::func_109())
					{
						__LIB_30__::func_517(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				else if (__LIB_30__::func_518() == 3)
				{
					__LIB_30__::func_517(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 1:
				if (__LIB_30__::func_518() == 1)
				{
					if (!func_840())
					{
						func_119();
					}
					else
					{
						if (__LIB_29__::func_93())
						{
							__LIB_3__::func_0();
						}
						func_110();
					}
					if (func_49(1))
					{
						__LIB_30__::func_517(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (__LIB_30__::func_518() == 3)
				{
					__LIB_30__::func_517(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_859(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_15__::func_374())
			{
				__LIB_30__::func_515(3);
			}
			switch (__LIB_30__::func_518())
			{
				case 0:
					if (func_18())
					{
						__LIB_30__::func_515(1);
					}
					break;
				case 1:
					if (func_17() == 4)
					{
						__LIB_30__::func_515(3);
					}
					else
					{
						func_1();
					}
					break;
				case 3:
					func_859(0);
					break;
				}
		}
	}
}

void func_1()//Position - 0x1B9
{
	switch (Local_111.f_55)
	{
		case 0:
			if (__LIB_0__::func_109())
			{
				func_15(1);
			}
			func_9();
			break;
		case 1:
			func_9();
			func_5();
			func_2();
			break;
		case 2:
			func_9();
			func_5();
			func_2();
			break;
		case 3:
			if (BitTest(Local_111.f_1, 23))
			{
				func_15(4);
			}
			func_9();
			break;
		case 4:
			break;
	}
}

void func_2()//Position - 0x232
{
	if (BitTest(Local_111.f_1, 12) && !BitTest(Local_111.f_1, 17))
	{
		if (__LIB_0__::func_937(&(Local_111.f_53), 600000, 0))
		{
			MISC::SET_BIT(&(Local_111.f_1), 24);
		}
	}
}

void func_5()//Position - 0x30E
{
	if (BitTest(Local_111.f_1, 19))
	{
		func_8(2);
		func_15(3);
	}
	if (BitTest(Local_111.f_1, 22))
	{
		func_8(0);
		func_15(3);
	}
	if (BitTest(Local_111.f_1, 21))
	{
		func_8(1);
		func_15(3);
	}
	if (BitTest(Local_111.f_1, 16))
	{
		MISC::SET_BIT(&(Local_111.f_1), 22);
		func_8(3);
		func_15(3);
	}
	if (BitTest(Local_111.f_1, 13))
	{
		func_8(0);
		func_15(3);
	}
	if (!__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1))
	{
		MISC::SET_BIT(&(Local_111.f_1), 18);
		func_8(4);
		func_15(3);
	}
}

void func_8(int iParam0)//Position - 0x41D
{
	Local_111.f_56 = iParam0;
}

void func_9()//Position - 0x42B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (func_17() < 3)
			{
				bVar2 = false;
				while (bVar2 < func_14())
				{
					if (BitTest(Local_112[iVar1 /*4*/].f_1, bVar2) && !BitTest(Local_111.f_1, bVar2))
					{
						MISC::SET_BIT(&(Local_111.f_1), bVar2);
						Local_111.f_34++;
					}
					if (BitTest(Local_112[iVar1 /*4*/].f_1, bVar2 + 4) && !BitTest(Local_111.f_1, bVar2 + 4))
					{
						MISC::SET_BIT(&(Local_111.f_1), bVar2 + 4);
					}
					if (BitTest(Local_112[iVar1 /*4*/].f_1, bVar2 + 8) && !BitTest(Local_111.f_1, bVar2 + 8))
					{
						MISC::SET_BIT(&(Local_111.f_1), bVar2 + 8);
						Local_111.f_35++;
					}
					bVar2++;
				}
				if (BitTest(Local_112[iVar1 /*4*/].f_1, 14))
				{
					if (!BitTest(Local_111.f_1, 17))
					{
						func_11(PLAYER::INT_TO_PLAYERINDEX(iVar1));
						MISC::SET_BIT(&(Local_111.f_1), 17);
					}
					iVar0++;
				}
			}
			else if (func_17() == 3)
			{
				if (BitTest(Local_112[iVar1 /*4*/].f_1, 21))
				{
					iVar0++;
				}
			}
			if (BitTest(Local_112[iVar1 /*4*/].f_1, 12))
			{
				MISC::SET_BIT(&(Local_111.f_1), 12);
			}
		}
		iVar1++;
	}
	if (func_17() < 3)
	{
		if (iVar0 == (func_14() - (Local_111.f_34 + Local_111.f_35)))
		{
			MISC::SET_BIT(&(Local_111.f_1), 14);
		}
		else if (iVar0 == 1 && BitTest(Local_111.f_1, 15))
		{
			MISC::SET_BIT(&(Local_111.f_1), 14);
		}
		else if (BitTest(Local_111.f_1, 14))
		{
			MISC::CLEAR_BIT(&(Local_111.f_1), 14);
		}
		if (Local_111.f_34 + Local_111.f_35) == func_14()
		{
			MISC::SET_BIT(&(Local_111.f_1), 22);
		}
		if ((func_14() - (Local_111.f_34 + Local_111.f_35)) == 1)
		{
			MISC::SET_BIT(&(Local_111.f_1), 15);
		}
		if (Local_111.f_34 == func_14())
		{
			MISC::SET_BIT(&(Local_111.f_1), 13);
		}
		if (Local_111.f_35 == func_14())
		{
			MISC::SET_BIT(&(Local_111.f_1), 21);
		}
		if (BitTest(Local_111.f_1, 12))
		{
			if (__LIB_0__::func_937(&(Local_111.f_49), func_10(), 0))
			{
				MISC::SET_BIT(&(Local_111.f_1), 16);
			}
		}
	}
	else if (func_17() == 3)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			MISC::SET_BIT(&(Local_111.f_1), 20);
		}
		else if (__LIB_0__::func_937(&(Local_111.f_51), 15000, 0))
		{
			MISC::SET_BIT(&(Local_111.f_1), 23);
		}
	}
}

int func_10()//Position - 0x685
{
	return Global_262145.f_12935 /* Tunable: GB_BELLY_TIME_LIMIT */;
}

void func_11(int iParam0)//Position - 0x694
{
	struct<14> Var0;
	Var0.f_10 = iParam0;
	Var0.f_11 = __LIB_1__::func_730();
	Var0.f_2 = 48937991;
	__LIB_1__::func_634(Var0, __LIB_4__::func_970(1));
}

int func_14()//Position - 0x74B
{
	return Local_111.f_5;
}

void func_15(int iParam0)//Position - 0x757
{
	Local_111.f_55 = iParam0;
}

int func_17()//Position - 0x76E
{
	return Local_111.f_55;
}

int func_18()//Position - 0x77A
{
	if (func_19())
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0x78E
{
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_111.f_57), &(Local_111.f_58));
	if (!iLocal_92)
	{
		iLocal_91 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (Global_2815059.f_5195.f_6 == -1)
		{
			__LIB_30__::func_515(3);
			return 0;
		}
		__LIB_30__::func_514(iLocal_91);
		func_45(Global_2815059.f_5195.f_6);
		func_31();
		iLocal_92 = 1;
	}
	if (func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x7F0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (__LIB_0__::func_799(func_30(bVar0)))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_28(bVar0)))
			{
				if (__LIB_0__::func_957(&(Local_111.f_6[bVar0]), func_30(bVar0), func_27(bVar0), func_26(bVar0), 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					__LIB_1__::func_477(NETWORK::NET_TO_VEH(func_28(bVar0)));
					__LIB_31__::func_983(NETWORK::NET_TO_VEH(func_28(bVar0)));
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(func_28(bVar0)), false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(func_28(bVar0)), false);
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(NETWORK::NET_TO_VEH(func_28(bVar0)), false, false);
					VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(NETWORK::NET_TO_VEH(func_28(bVar0)), false);
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(func_28(bVar0)), false, false);
					VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(NETWORK::NET_TO_VEH(func_28(bVar0)));
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(func_28(bVar0)), false, 0);
					ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(func_28(bVar0)), true);
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(func_28(bVar0)), true, 1);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(func_28(bVar0)), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(func_28(bVar0)), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(func_28(bVar0)), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 11);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(func_28(bVar0)), "MPBitset", iVar2);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_30(bVar0));
				}
			}
			else
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	if (iVar1 == func_14())
	{
		return 1;
	}
	return 0;
}

float func_26(bool bParam0)//Position - 0xCCA
{
	return Local_111.f_29[bParam0];
}

Vector3 func_27(bool bParam0)//Position - 0xCDA
{
	return Local_111.f_16[bParam0 /*3*/];
}

var func_28(bool bParam0)//Position - 0xCEC
{
	return Local_111.f_6[bParam0];
}

int func_30(bool bParam0)//Position - 0xD1A
{
	return Local_111.f_11[bParam0];
}

void func_31()//Position - 0xD2A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	func_44(2);
	switch (func_43())
	{
		case 0:
			Var0 = { -1039.6226f, -855.3737f, 3.8758f };
			Var1 = { -1112.3624f, -855.0657f, 12.531f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(__LIB_1__::func_730()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("pigalle"));
			func_37(0, 237.632f);
			func_38(1, joaat("rhapsody"));
			func_37(1, 218.751f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		case 1:
			Var0 = { 861.2779f, -1357.7346f, 25.0962f };
			Var1 = { 833.7587f, -1414.2885f, 25.1543f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(__LIB_1__::func_730()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("comet2"));
			func_37(0, 269.772f);
			func_38(1, joaat("banshee"));
			func_37(1, 332.369f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		case 2:
			Var0 = { 471.1763f, -1024.2334f, 27.1807f };
			Var1 = { 407.7268f, -993.1101f, 28.2665f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(__LIB_1__::func_730()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("dominator"));
			func_37(0, 95.7556f);
			func_38(1, joaat("gauntlet"));
			func_37(1, 231.8613f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		case 3:
			Var0 = { 530.3759f, -29.6076f, 69.6295f };
			Var1 = { 628.4064f, 23.6166f, 86.6466f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(__LIB_1__::func_730()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("feltzer3"));
			func_37(0, 31.0119f);
			func_38(1, joaat("coquette3"));
			func_37(1, 71.2592f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		case 4:
			Var0 = { 1854.0391f, 3675.5242f, 32.7389f };
			Var1 = { 1867.2257f, 3694.6963f, 32.6526f };
			Var2 = { 1866.0198f, 3682.976f, 32.7085f };
			Var3 = { 1861.5964f, 3681.0051f, 32.7102f };
			func_42(0);
			func_44(func_39(__LIB_1__::func_730()) + 1);
			func_38(0, joaat("blazer"));
			func_37(0, 30.2891f);
			func_38(1, joaat("blazer"));
			func_37(1, 209.6525f);
			func_38(2, joaat("blazer"));
			func_37(1, 19.0028f);
			func_38(3, joaat("blazer"));
			func_37(1, 209.3371f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
		case 5:
			Var0 = { -451.4124f, 5998.274f, 30.3405f };
			Var1 = { -461.0853f, 6047.062f, 30.3405f };
			Var2 = { -438.0848f, 5980.2686f, 30.4901f };
			Var3 = { -434.6339f, 5983.8965f, 30.4901f };
			func_42(0);
			func_44(func_39(__LIB_1__::func_730()) + 1);
			func_38(0, joaat("lectro"));
			func_37(0, 267.2382f);
			func_38(1, joaat("lectro"));
			func_37(1, 315.4168f);
			func_38(2, joaat("lectro"));
			func_37(1, 251.2614f);
			func_38(3, joaat("lectro"));
			func_37(1, 44.8117f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
	}
	if (func_14() == 2)
	{
		func_32(0, Var0);
		func_32(1, Var1);
	}
	else
	{
		func_32(0, Var0);
		func_32(1, Var1);
		func_32(2, Var2);
		func_32(3, Var3);
	}
}

void func_32(int iParam0, struct<3> Param1)//Position - 0x117D
{
	Local_111.f_16[iParam0 /*3*/] = { Param1 };
}

void func_33(int iParam0, struct<3> Param1)//Position - 0x1193
{
	Local_111.f_36[iParam0 /*3*/] = { Param1 };
}

Vector3 func_34(int iParam0)//Position - 0x11A9
{
	if (iParam0 == 0)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1685.7369f, 6435.9717f, 31.3601f;
				}
				return 255.4336f, -3057.4062f, 4.7974f;
				break;
			case 1:
				if (func_35())
				{
					return -1576.5239f, 5159.825f, 18.7791f;
				}
				return -965.0558f, -2072.7173f, 8.4059f;
				break;
			case 2:
				if (func_35())
				{
					return 756.7225f, 4179.839f, 39.6685f;
				}
				return -1209.3175f, -1305.5566f, 3.7185f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1682.3861f, 6434.0015f, 31.1545f;
				}
				return 248.4273f, -3064.1624f, 4.7802f;
				break;
			case 1:
				if (func_35())
				{
					return -1581.5725f, 5159.5654f, 18.5702f;
				}
				return -971.9658f, -2065.5261f, 8.4059f;
				break;
			case 2:
				if (func_35())
				{
					return 762.5063f, 4179.5767f, 39.6335f;
				}
				return -1207.2748f, -1310.0059f, 3.7944f;
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (func_36())
		{
			case 0:
				return 252.0648f, -3060.9673f, 4.7768f;
				break;
			case 1:
				return -975.444f, -2061.8416f, 8.4059f;
				break;
			case 2:
				return -1222.1241f, -1309.2848f, 3.5209f;
				break;
		}
	}
	else if (iParam0 == 3)
	{
		switch (func_36())
		{
			case 0:
				return 244.6635f, -3068.048f, 4.7864f;
				break;
			case 1:
				return -968.5905f, -2069.1487f, 8.4059f;
				break;
			case 2:
				return -1229.6523f, -1321.2296f, 3.0921f;
				break;
			}
	}
	return 1685.7369f, 6435.9717f, 31.3601f;
}

bool func_35()//Position - 0x13DF
{
	return Local_111.f_4;
}

int func_36()//Position - 0x13EB
{
	return Local_111.f_3;
}

void func_37(int iParam0, float fParam1)//Position - 0x13F7
{
	Local_111.f_29[iParam0] = fParam1;
}

void func_38(int iParam0, int iParam1)//Position - 0x1409
{
	Local_111.f_11[iParam0] = iParam1;
}

int func_39(bool bParam0)//Position - 0x141B
{
	if (__LIB_0__::func_818(bParam0) == __LIB_0__::func_162())
	{
		return 0;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_19;
}

void func_42(int iParam0)//Position - 0x146D
{
	Local_111.f_4 = iParam0;
}

int func_43()//Position - 0x147B
{
	return Local_111.f_2;
}

void func_44(int iParam0)//Position - 0x1487
{
	Local_111.f_5 = iParam0;
}

void func_45(var uParam0)//Position - 0x1495
{
	Local_111.f_2 = uParam0;
}

int func_49(bool bParam0)//Position - 0x14E0
{
	if (!__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3) && __LIB_32__::func_210(1))
	{
		return 1;
	}
	if (Global_2815059.f_5195.f_43)
	{
		Global_2815059.f_5195.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (__LIB_1__::func_730() == __LIB_0__::func_162() || !__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_836(PLAYER::PLAYER_ID(), 1) && !__LIB_16__::func_228(PLAYER::PLAYER_ID()))
	{
		if (__LIB_32__::func_136())
		{
			return 1;
		}
	}
	return 0;
}

void func_110()//Position - 0x304D
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_96))
	{
		HUD::REMOVE_BLIP(&iLocal_96);
	}
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_95[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_95[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_94[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_94[iVar0]));
		}
		iVar0++;
	}
}

void func_119()//Position - 0x345A
{
	switch (func_839())
	{
		case 0:
			if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
			{
				__LIB_32__::func_208(157, 1, -1, 0);
			}
			else
			{
				__LIB_32__::func_208(157, 0, -1, 0);
			}
			func_819();
			if (func_17() > 0)
			{
				if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
				{
					__LIB_19__::func_551(1);
					__LIB_30__::func_516(1);
				}
				else
				{
					__LIB_30__::func_516(2);
				}
			}
			break;
		case 2:
			if (BitTest(Local_111.f_1, 17) || BitTest(Local_111.f_1, 24))
			{
				if (!BitTest(uLocal_93, 3))
				{
					func_708();
				}
				func_702();
				func_691();
				func_689();
				func_685();
				func_684();
				func_681();
				func_680();
				__LIB_32__::func_213(157, Local_98, &uLocal_99, 1140457472, 1144750080, 0);
				if (func_17() > 1)
				{
					__LIB_30__::func_516(3);
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_93, 3))
			{
				func_708();
			}
			func_702();
			func_691();
			func_681();
			func_636();
			func_689();
			func_685();
			func_684();
			func_635();
			func_632();
			func_618();
			func_680();
			__LIB_32__::func_213(157, Local_98, &uLocal_99, 1140457472, 1144750080, 0);
			__LIB_36__::func_423(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
			__LIB_36__::func_692(157);
			if (func_17() > 1)
			{
				__LIB_30__::func_516(3);
			}
			break;
		case 3:
			func_435();
			func_165();
			func_702();
			func_618();
			if (((BitTest(uLocal_93, 11) && BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 20)) && !__LIB_1__::func_515()) && __LIB_32__::func_212(&uLocal_103, 1, 0))
			{
				MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 21);
			}
			if (func_17() > 3)
			{
				__LIB_30__::func_516(4);
			}
			break;
		case 4:
			break;
	}
}

void func_165()//Position - 0x4471
{
	struct<20> Var0;
	int iVar1;
	var uVar2;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 20))
	{
		if (__LIB_0__::func_114())
		{
			MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 20);
			return;
		}
		if (__LIB_12__::func_495())
		{
			MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 20);
			return;
		}
		func_428(&Var0, &(Var0.f_1), 0, 0);
		if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
		{
			if (Local_111.f_34 > 0)
			{
				__LIB_30__::func_900(0, PLAYER::PLAYER_ID());
				__LIB_42__::func_75(157, 1, &Var0, 0);
			}
			else
			{
				__LIB_30__::func_900(0, __LIB_0__::func_162());
				__LIB_42__::func_75(157, 0, &Var0, 0);
			}
		}
		else
		{
			__LIB_42__::func_75(157, func_183(0, 0) > 0, &Var0, 0);
			if (__LIB_0__::func_797() != __LIB_0__::func_162() && __LIB_0__::func_492(__LIB_0__::func_797()) != 157)
			{
				func_428(&iVar1, &uVar2, 0, 1);
				__LIB_36__::func_54(&iVar1, 1);
			}
		}
		MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 20);
	}
}

int func_183(int iParam0, bool bParam1)//Position - 0x49C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_12__::func_548(1) && !bParam1)
	{
		if (iParam0 || __LIB_1__::func_501())
		{
			iVar0 = 0;
			while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (__LIB_1__::func_876(iVar3, __LIB_0__::func_797(), 1))
						{
							iVar1 = (iVar1 + Local_112[iVar0 /*4*/].f_2);
						}
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

void func_428(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x339B5
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
	{
		if (func_35())
		{
			*uParam0 = (func_433() * Local_111.f_34);
			*uParam1 = (func_432() * Local_111.f_34);
		}
		else
		{
			*uParam0 = (func_431() * Local_111.f_34);
			*uParam1 = (func_430() * Local_111.f_34);
		}
	}
	else if (__LIB_12__::func_548(1))
	{
		if (__LIB_1__::func_501())
		{
			iVar4 = (func_183(iParam2, bParam3) - Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2);
		}
		else
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(__LIB_0__::func_797());
			if (iVar5 != -1)
			{
				iVar4 = (func_183(iParam2, bParam3) - Local_112[iVar5 /*4*/].f_2);
			}
		}
		if (func_35())
		{
			*uParam0 = (func_433() * func_183(iParam2, bParam3));
			*uParam1 = (func_432() * func_183(1, 0));
			iVar3 = (func_433() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		else
		{
			*uParam0 = (func_431() * func_183(iParam2, bParam3));
			*uParam1 = (func_430() * func_183(1, 0));
			iVar3 = (func_433() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		fVar0 = (SYSTEM::TO_FLOAT(*uParam0) * Global_262145.f_12869 /* Tunable: GB_RIVAL_ORG_CASH_REWARD_PERCENTAGE */);
		fVar1 = (SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_12868 /* Tunable: GB_RIVAL_ORG_RP_REWARD_PERCENTAGE */);
		fVar2 = (SYSTEM::TO_FLOAT(iVar3) * Global_262145.f_12869 /* Tunable: GB_RIVAL_ORG_CASH_REWARD_PERCENTAGE */);
		*uParam0 = SYSTEM::ROUND(fVar0);
		*uParam1 = SYSTEM::ROUND(fVar1);
		iVar3 = SYSTEM::ROUND(fVar2);
		if (func_429() > 0)
		{
			__LIB_2__::func_98(&iVar3, 0);
		}
		*uParam0 = (*uParam0 + iVar3);
	}
	else
	{
		if (func_35())
		{
			*uParam0 = (func_433() * func_183(0, 0));
			*uParam1 = (func_432() * func_183(0, 0));
		}
		else
		{
			*uParam0 = (func_431() * func_183(0, 0));
			*uParam1 = (func_430() * func_183(0, 0));
		}
		fVar0 = ((SYSTEM::TO_FLOAT(*uParam0) * Global_262145.f_12871 /* Tunable: GB_SOLO_CASH_REWARD_PERCENTAGE */) * Global_262145.f_12950 /* Tunable: GB_BELLY_EVENT_MULTIPLIER_CASH */);
		fVar1 = ((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_12870 /* Tunable: GB_SOLO_RP_REWARD_PERCENTAGE */) * Global_262145.f_12951 /* Tunable: GB_BELLY_EVENT_MULTIPLIER_RP */);
		*uParam0 = SYSTEM::ROUND(fVar0);
		*uParam1 = SYSTEM::ROUND(fVar1);
	}
}

int func_429()//Position - 0x33BA7
{
	if (__LIB_0__::func_797() == __LIB_0__::func_162())
	{
		return 0;
	}
	return func_39(__LIB_0__::func_797());
}

int func_430()//Position - 0x33BC6
{
	return Global_262145.f_12945 /* Tunable: GB_BELLY_DEFAULT_RP_REWARD_PER_BIKE */;
}

int func_431()//Position - 0x33BD5
{
	return Global_262145.f_12943 /* Tunable: GB_BELLY_DEFAULT_CASH_REWARD_PER_BIKE */;
}

int func_432()//Position - 0x33BE4
{
	return Global_262145.f_12946 /* Tunable: GB_BELLY_DEFAULT_RP_REWARD_PER_CAR */;
}

int func_433()//Position - 0x33BF3
{
	return Global_262145.f_12944 /* Tunable: GB_BELLY_DEFAULT_CASH_REWARD_PER_CAR */;
}

void func_435()//Position - 0x33C0B
{
	char* sVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	if (func_466())
	{
		MISC::SET_BIT(&uLocal_93, 11);
	}
	if (__LIB_29__::func_93())
	{
		__LIB_3__::func_0();
	}
	if (BitTest(uLocal_93, 11))
	{
		return;
	}
	if (__LIB_12__::func_548(1))
	{
		sVar0 = __LIB_30__::func_903();
		iVar1 = __LIB_30__::func_909(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
	}
	if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
	{
		if (Local_111.f_34 != -1)
		{
			if (BitTest(Local_111.f_1, 22))
			{
				func_428(&iVar2, &uVar3, 0, 0);
				if (Local_111.f_34 == 1)
				{
					func_463(87, "GB_WINNER" /* GXT: WINNER */, "GB_BB_SS_DEL1" /* GXT: ~a~~s~ delivered 1 vehicle for $~1~ */, sVar0, iVar1, 0, iVar2, -1, -1, 2, -1);
				}
				else if (Local_111.f_34 > 1)
				{
					func_463(87, "GB_WINNER" /* GXT: WINNER */, "GB_BB_SS_DEL" /* GXT: ~a~~s~ delivered ~1~ vehicles for $~1~ */, sVar0, iVar1, 0, Local_111.f_34, iVar2, -1, 2, -1);
				}
				else if (Local_111.f_34 == 0)
				{
					if (Local_111.f_35 != func_14())
					{
						if (func_14() > 1)
						{
							func_463(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DELL" /* GXT: ~a~~s~ failed to deliver any vehicles in time */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_463(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DELL1" /* GXT: ~a~~s~ failed to deliver the vehicle in time */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
					else if (Local_111.f_35 == func_14())
					{
						if (func_14() > 1)
						{
							__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DEST" /* GXT: The vehicles were destroyed */, 1, -1, 2, 1, 0);
						}
						else
						{
							__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DEST1" /* GXT: The vehicle was destroyed */, 1, -1, 2, 1, 0);
						}
					}
				}
			}
			MISC::SET_BIT(&uLocal_93, 11);
		}
	}
	else
	{
		if (BitTest(Local_111.f_1, 22) || BitTest(Local_111.f_1, 16))
		{
			iVar4 = func_183(1, 0);
			func_428(&iVar5, &uVar6, 1, 0);
			if (iVar4 == 1)
			{
				if (__LIB_12__::func_548(1))
				{
					func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DES1" /* GXT: ~a~~s~ destroyed 1 vehicle for $~1~ */, sVar0, iVar1, 0, iVar5, -1, -1, 2, -1);
				}
				else
				{
					func_443(91, iVar5, -1, "GB_BB_SS_SDES1" /* GXT: You destroyed 1 vehicle for $~1~ */, 1, -1, 2, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, 0);
				}
			}
			else if (iVar4 > 1)
			{
				if (__LIB_12__::func_548(1))
				{
					func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DES" /* GXT: ~a~~s~ destroyed ~1~ vehicles for $~1~ */, sVar0, iVar1, 0, iVar4, iVar5, -1, 2, -1);
				}
				else
				{
					func_443(91, iVar4, iVar5, "GB_BB_SS_SDES" /* GXT: You destroyed ~1~ vehicles for $~1~ */, 1, -1, 2, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, 0);
				}
			}
			else if (iVar4 == 0)
			{
				if (Local_111.f_35 == 0)
				{
					if (Local_111.f_34 != func_14())
					{
						if (__LIB_12__::func_548(1))
						{
							if (func_14() > 1)
							{
								func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DESL" /* GXT: ~a~~s~ failed to destroy any vehicles */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DESL1" /* GXT: ~a~~s~ failed to destroy the vehicle */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
						}
						else if (func_14() > 1)
						{
							__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_SDESL" /* GXT: You failed to destroy any vehicles */, 1, -1, 2, 1, 0);
						}
						else
						{
							__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_SDESL1" /* GXT: You failed to destroy the vehicle */, 1, -1, 2, 1, 0);
						}
					}
					else if (Local_111.f_34 == func_14())
					{
						sVar0 = __LIB_30__::func_905(__LIB_1__::func_730());
						iVar1 = __LIB_30__::func_909(__LIB_1__::func_730(), -2, 0, 0, 0);
						if (func_14() > 1)
						{
							func_463(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DELIV" /* GXT: ~a~~s~ delivered the vehicles */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_463(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DELIV1" /* GXT: ~a~~s~ delivered the vehicle */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
				}
				else if (Local_111.f_35 == func_14())
				{
					if (func_14() > 1)
					{
						__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DEST" /* GXT: The vehicles were destroyed */, 1, -1, 2, 1, 0);
					}
					else
					{
						__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DEST1" /* GXT: The vehicle was destroyed */, 1, -1, 2, 1, 0);
					}
				}
				else if (__LIB_12__::func_548(1))
				{
					if (func_14() > 1)
					{
						func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DESL" /* GXT: ~a~~s~ failed to destroy any vehicles */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
					else
					{
						func_463(91, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_DESL1" /* GXT: ~a~~s~ failed to destroy the vehicle */, sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
				}
				else if (func_14() > 1)
				{
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_SDESL" /* GXT: You failed to destroy any vehicles */, 1, -1, 2, 1, 0);
				}
				else
				{
					__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_SDESL1" /* GXT: You failed to destroy the vehicle */, 1, -1, 2, 1, 0);
				}
			}
		}
		else if (BitTest(Local_111.f_1, 18))
		{
			__LIB_36__::func_424(88, "GB_WORK_OVER" /* GXT: VIP WORK OVER */, "GB_BB_SS_FLEFT" /* GXT: The Organization VIP abandoned the work */, 1, -1, 2, 1, 0);
		}
		func_110();
		MISC::SET_BIT(&uLocal_93, 11);
	}
}

int func_443(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x3420D
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
	__LIB_1__::func_264(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return __LIB_36__::func_55(&Var0);
}

int func_463(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x34A4E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_162();
	iVar1 = __LIB_0__::func_162();
	iVar2 = __LIB_0__::func_162();
	return func_464(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_464(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x34A89
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
	__LIB_1__::func_264(uParam0, &Var0, iParam9, sParam2, sParam1);
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

int func_466()//Position - 0x34BEE
{
	if ((!Global_2703735.f_4.f_10 || func_840()) || __LIB_19__::func_485(PLAYER::PLAYER_ID()) == 0)
	{
		return 1;
	}
	return 0;
}

void func_618()//Position - 0x39626
{
	struct<14> Var0;
	bool bVar1;
	bool bVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::CLEAR_BIT(&uLocal_93, 4);
		MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 14);
		MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 15);
	}
	bVar1 = false;
	while (bVar1 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar1)))
		{
			if (!BitTest(Local_111.f_1, bVar1) && !BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, bVar1))
			{
				if (func_17() < 3)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(func_28(bVar1)), false))
					{
						__LIB_19__::func_471();
						MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 15);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(func_28(bVar1)), -1, false) == PLAYER::PLAYER_PED_ID())
						{
							MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 14);
						}
						if (!BitTest(uLocal_93, 4))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(func_28(bVar1)), func_27(bVar1), IntToFloat(func_629()), IntToFloat(func_629()), IntToFloat(func_629()), false, true, 0))
							{
								MISC::CLEAR_BIT(&uLocal_93, 8);
								MISC::SET_BIT(&uLocal_93, 4);
							}
						}
						bVar2 = false;
						while (bVar2 < func_14())
						{
							if (!BitTest(Local_111.f_1, bVar2 + 4))
							{
								if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 16))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(func_28(bVar1)), -1, false) == PLAYER::PLAYER_PED_ID())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(func_28(bVar1)), func_628(bVar2), 2f, 1f, 2f, true, true, 0))
										{
											__LIB_0__::func_213(NETWORK::NET_TO_VEH(func_28(bVar1)), 4f, 1, 0.5f, 0, 0, 0);
											MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar1);
											MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar2 + 4);
											MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 18);
											MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 14);
											MISC::CLEAR_BIT(&uLocal_93, 4);
											MISC::CLEAR_BIT(&uLocal_93, 8);
											Var0.f_10 = PLAYER::PLAYER_ID();
											Var0.f_11 = __LIB_1__::func_730();
											Var0.f_2 = 1685857344;
											__LIB_1__::func_634(Var0, __LIB_4__::func_970(1));
											bVar2 = func_14();
										}
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(func_28(bVar1)), func_628(bVar2), IntToFloat(func_625()), IntToFloat(func_625()), IntToFloat(func_625()), false, true, 0))
								{
									AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
									if (func_35())
									{
										PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_624(), false);
									}
									else
									{
										PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_623(), false);
									}
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
									MISC::CLEAR_BIT(&uLocal_93, 4);
									MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 16);
									AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
								}
							}
							bVar2++;
						}
					}
				}
			}
			else
			{
				func_619(NETWORK::NET_TO_VEH(func_28(bVar1)), &(uLocal_113[bVar1]), 0, 1);
			}
		}
		bVar1++;
	}
}

int func_619(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x398EB
{
	int iVar0;
	int iVar1;
	if (!__LIB_4__::func_901(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (__LIB_1__::func_693(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, false))
					{
						__LIB_1__::func_473(__LIB_0__::func_950(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		}
		return 1;
	}
	return 0;
}

var func_623()//Position - 0x39B7A
{
	return Global_262145.f_12939 /* Tunable: GB_BELLY_WANTED_COUNTRY_DROP */;
}

var func_624()//Position - 0x39B89
{
	return Global_262145.f_12940 /* Tunable: GB_BELLY_WANTED_CITY_DROP */;
}

int func_625()//Position - 0x39B98
{
	return Global_262145.f_12941 /* Tunable: GB_BELLY_DISTANCE_WANTED_DROP */;
}

Vector3 func_628(bool bParam0)//Position - 0x39D6B
{
	return Local_111.f_36[bParam0 /*3*/];
}

int func_629()//Position - 0x39D7D
{
	return Global_262145.f_12942 /* Tunable: GB_BELLY_PROXIMITY_TO_VEHICLE_WANTED_APPLIED */;
}

void func_632()//Position - 0x39DB6
{
	int iVar0;
	if (!BitTest(Local_111.f_1, 17))
	{
		return;
	}
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 16))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() != func_634())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_634());
			}
			if (!BitTest(uLocal_93, 8))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_35())
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_634(), false);
					}
					else
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_633(), false);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					MISC::SET_BIT(&uLocal_93, 8);
				}
			}
			else
			{
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_93, 8);
		}
	}
	else if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 17))
	{
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&uLocal_93, 7);
		}
		else if (BitTest(uLocal_93, 7))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (iLocal_100 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_100, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::CLEAR_BIT(&uLocal_93, 7);
			}
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 == 0)
			{
				MISC::CLEAR_BIT(&uLocal_93, 8);
				MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 17);
			}
			else if (iVar0 != iLocal_100)
			{
				iLocal_100 = iVar0;
			}
		}
	}
	else if (BitTest(uLocal_93, 4) && !BitTest(uLocal_93, 8))
	{
		if (func_35())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_634(), false);
		}
		else
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_633(), false);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		MISC::SET_BIT(&uLocal_93, 8);
	}
}

var func_633()//Position - 0x39F46
{
	return Global_262145.f_12937 /* Tunable: GB_BELLY_WANTED_COUNTRY */;
}

int func_634()//Position - 0x39F55
{
	return Global_262145.f_12938 /* Tunable: GB_BELLY_WANTED_CITY */;
}

void func_635()//Position - 0x39F64
{
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 13))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_27(0), 100f, 100f, 100f, false, true, 0))
			{
				MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 13);
			}
		}
		if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 15) || BitTest(Local_111.f_1, 14))
		{
			MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 13);
		}
	}
}

void func_636()//Position - 0x39FE9
{
	struct<2> Var0;
	if (!BitTest(uLocal_93, 9))
	{
		switch (func_43())
		{
			case 0:
				StringCopy(&Var0, "GB_INTTXT_BOB0" /* GXT: Contract Alert: A client's son is being harassed by the police for routine college-age experimentation. Recover his cars in Vespucci before the authorities can perform a thorough search, and deliver them to a safe location. */, 16);
				break;
			case 1:
				StringCopy(&Var0, "GB_INTTXT_BOB1" /* GXT: Contract Alert: A client of ours is having trouble resolving a dispute with the IRS. Please can you recover her recently seized sports cars from La Mesa and deliver them to our safe location. */, 16);
				break;
			case 2:
				StringCopy(&Var0, "GB_INTTXT_BOB2" /* GXT: Contract Alert: Police in Mission Row are holding two cars that have not yet been linked to a string of major crimes in the Southern San Andreas area. Please recover them and deliver to our safe location before the erroneous connection is made. */, 16);
				break;
			case 3:
				StringCopy(&Var0, "GB_INTTXT_BOB3" /* GXT: Contract Alert: A client experiencing unfair scrutiny from Internal Revenue had two classic cars seized. Organize for their removal from the Police Station in Vinewood, and delivery in one piece. */, 16);
				break;
			case 4:
				StringCopy(&Var0, "GB_INTTXT_BOB4" /* GXT: Contract Alert: The Sandy Shores police are holding quad bikes which may or may not have been used by our clients in operations in and around Blaine County. Recover them from the Station and return to one of our safe locations. */, 16);
				break;
			case 5:
				StringCopy(&Var0, "GB_INTTXT_BOB5" /* GXT: Contract Alert: Motorcycles being held as evidence in a major crime case might implicate our totally innocent client. Recover the evidence and return it to us so we can prevent this misunderstanding. */, 16);
				break;
		}
		if (func_14() == 1)
		{
			StringConCat(&Var0, "1", 16);
		}
		if (__LIB_3__::func_589(82, &Var0, 2, 0, 0, 0, 0, 1, 0, 1))
		{
			MISC::SET_BIT(&uLocal_93, 9);
		}
	}
}

void func_680()//Position - 0x3B1B1
{
	struct<3> Var0;
	bool bVar1;
	if (__LIB_0__::func_937(&uLocal_101, 5000, 0))
	{
		bVar1 = false;
		while (bVar1 < func_14())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar1)) && !BitTest(Local_111.f_1, bVar1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(func_28(bVar1))) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
					{
						Local_97 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					}
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(func_28(bVar1)), false))
					{
						if (__LIB_0__::func_86(Var0))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(func_28(bVar1)), true) };
							Local_98 = { Var0 };
						}
						else if (SYSTEM::VDIST(Local_97, Var0) > SYSTEM::VDIST(Local_97, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(func_28(bVar1)), true)))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(func_28(bVar1)), true) };
						}
					}
				}
			}
			bVar1++;
		}
		Local_98 = { Var0 };
		__LIB_0__::func_794(&uLocal_101);
	}
}

void func_681()//Position - 0x3B2B4
{
	bool bVar0;
	bool bVar1;
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 13) && __LIB_19__::func_352(__LIB_1__::func_730(), 1))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_96))
		{
			iLocal_96 = HUD::ADD_BLIP_FOR_COORD(func_27(0));
			__LIB_1__::func_540(&iLocal_96, 12);
			HUD::SET_BLIP_ROUTE(iLocal_96, true);
			HUD::SET_BLIP_ROUTE_COLOUR(iLocal_96, __LIB_1__::func_389(12));
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_96))
		{
			HUD::REMOVE_BLIP(&iLocal_96);
		}
		bVar1 = false;
		while (bVar1 < func_14())
		{
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar1)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(func_28(bVar1)), false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(func_28(bVar1)), false)) && !BitTest(Local_111.f_1, bVar1)) && !func_466())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_94[bVar1]))
				{
					iLocal_94[bVar1] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(func_28(bVar1)));
					HUD::SET_BLIP_SPRITE(iLocal_94[bVar1], 461);
					if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
					{
						__LIB_1__::func_540(&(iLocal_94[bVar1]), 9);
					}
					else
					{
						__LIB_1__::func_540(&(iLocal_94[bVar1]), 6);
					}
					HUD::SET_BLIP_MARKER_LONG_DISTANCE(iLocal_94[bVar1], 1);
					HUD::SET_BLIP_PRIORITY(iLocal_94[bVar1], 12);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_94[bVar1], "GB_BB_B_VEH" /* GXT: Vehicle */);
					HUD::SET_BLIP_SCALE(iLocal_94[bVar1], Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */);
					if (!BitTest(uLocal_93, 5))
					{
						HUD::SET_BLIP_FLASHES(iLocal_94[bVar1], true);
						HUD::SET_BLIP_FLASH_TIMER(iLocal_94[bVar1], 7000);
						if (bVar1 == (func_14() - 1))
						{
							MISC::SET_BIT(&uLocal_93, 5);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_94[bVar1]))
			{
				HUD::REMOVE_BLIP(&(iLocal_94[bVar1]));
			}
			if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
			{
				if (((BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 15) || BitTest(Local_111.f_1, 14)) && !BitTest(Local_111.f_1, bVar1 + 4)) && !func_466())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_95[bVar1]))
					{
						iLocal_95[bVar1] = HUD::ADD_BLIP_FOR_COORD(func_628(bVar1));
						__LIB_1__::func_540(&(iLocal_95[bVar1]), 12);
					}
					bVar0 = bVar1;
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_95[bVar1]))
				{
					HUD::REMOVE_BLIP(&(iLocal_95[bVar1]));
				}
			}
			bVar1++;
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_95[bVar0]) && !HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_95[bVar0]))
		{
			HUD::SET_BLIP_ROUTE(iLocal_95[bVar0], true);
			HUD::SET_BLIP_ROUTE_COLOUR(iLocal_95[bVar0], __LIB_1__::func_389(12));
		}
	}
}

void func_684()//Position - 0x3B7AB
{
	bool bVar0;
	if (BitTest(Local_111.f_1, 17) || BitTest(Local_111.f_1, 24))
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (!BitTest(Local_111.f_1, bVar0) && !BitTest(Local_111.f_1, bVar0 + 8))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_28(bVar0)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_28(bVar0)))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(func_28(bVar0)), false);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_685()//Position - 0x3B822
{
	int iVar0;
	func_686();
	if (func_466() || __LIB_19__::func_485(PLAYER::PLAYER_ID()) != 3)
	{
		return;
	}
	if (!BitTest(uLocal_93, 2))
	{
		if (BitTest(Local_111.f_1, 17) || BitTest(Local_111.f_1, 24))
		{
			if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_1__::func_707("GB_BB_ALERT" /* GXT: Other players in session have been alerted to your activities. These players can now come after your Organization to earn cash and RP. */, -1);
					MISC::SET_BIT(&uLocal_93, 2);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_93, 2);
			}
		}
	}
	if (!BitTest(uLocal_93, 12))
	{
		if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 16))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_707("GB_BB_LOSE" /* GXT: You are nearing the drop-off location. Lose your Wanted Level before delivering the vehicle. */, -1);
				MISC::SET_BIT(&uLocal_93, 12);
			}
		}
	}
	if (!BitTest(uLocal_93, 10))
	{
		if (func_14() == 1)
		{
			MISC::SET_BIT(&uLocal_93, 10);
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (BitTest(Local_111.f_1, iVar0 + 8))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
					{
						__LIB_1__::func_707("GB_BB_DES" /* GXT: A vehicle has been destroyed. Your maximum potential reward has been reduced. */, -1);
					}
					else if (__LIB_12__::func_548(1))
					{
						if (__LIB_1__::func_501())
						{
							__LIB_1__::func_707("GB_BB_DESF" /* GXT: A vehicle has been destroyed. Destroying a vehicle will earn you cash at the end of the VIP Work. */, -1);
						}
						else
						{
							__LIB_1__::func_707("GB_BB_DESR" /* GXT: A vehicle has been destroyed. Destroying a vehicle will earn your VIP cash at the end of the VIP Work. */, -1);
						}
					}
					else
					{
						__LIB_1__::func_707("GB_BB_DESF" /* GXT: A vehicle has been destroyed. Destroying a vehicle will earn you cash at the end of the VIP Work. */, -1);
					}
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_93, 10);
				}
			}
			iVar0++;
		}
	}
}

void func_686()//Position - 0x3B961
{
	int iVar0;
	if (!BitTest(Global_2815059.f_1801, 22))
	{
		iVar0 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			if (!__LIB_36__::func_583(__LIB_1__::func_970(iVar0)))
			{
				__LIB_1__::func_928(22);
			}
		}
	}
}

void func_689()//Position - 0x3BA42
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	if (func_466() || __LIB_19__::func_485(PLAYER::PLAYER_ID()) != 3)
	{
		return;
	}
	bVar4 = false;
	while (bVar4 < func_14())
	{
		if (!BitTest(Local_111.f_1, bVar4))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar4)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(func_28(bVar4))))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(func_28(bVar4)), false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(func_28(bVar4)), false))
						{
							if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
							{
								HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							__LIB_3__::func_236(NETWORK::NET_TO_VEH(func_28(bVar4)), iVar0, iVar1, iVar2, 0);
						}
					}
				}
			}
		}
		bVar4++;
	}
}

void func_691()//Position - 0x3BBBE
{
	if (func_466() || __LIB_19__::func_485(PLAYER::PLAYER_ID()) != 3)
	{
		if (__LIB_29__::func_93())
		{
			__LIB_3__::func_0();
		}
		return;
	}
	if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
	{
		if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 13))
		{
			__LIB_13__::func_713("GB_BB_GT_GOTO" /* GXT: Go to ~HUD_COLOUR_YELLOW~~a~. */, func_701(), 0, 0);
		}
		else if ((BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 16) && BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 15)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			__LIB_3__::func_198("GB_BB_COPS" /* GXT: Lose the Cops. */, 0);
		}
		else if (BitTest(Local_111.f_1, 15))
		{
			if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 15))
			{
				__LIB_3__::func_198("GB_BB_GT_UDLVR" /* GXT: Deliver the vehicle to the ~HUD_COLOUR_YELLOW~drop-off. */, 0);
			}
			else if (BitTest(Local_111.f_1, 14))
			{
				__LIB_3__::func_198("GB_BB_GT_DLVR1" /* GXT: Help deliver the ~HUD_COLOUR_BLUE~vehicle~s~ to the ~HUD_COLOUR_YELLOW~drop-off. */, 0);
			}
			else
			{
				__LIB_3__::func_198("GB_BB_GT_STEAL1" /* GXT: Steal the ~HUD_COLOUR_BLUE~vehicle. */, 0);
			}
		}
		else if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 15))
		{
			__LIB_3__::func_198("GB_BB_GT_UDLVR" /* GXT: Deliver the vehicle to the ~HUD_COLOUR_YELLOW~drop-off. */, 0);
		}
		else if (BitTest(Local_111.f_1, 14))
		{
			__LIB_3__::func_198("GB_BB_GT_DLVR" /* GXT: Help deliver the ~HUD_COLOUR_BLUE~vehicles~s~ to the ~HUD_COLOUR_YELLOW~drop-off. */, 0);
		}
		else
		{
			__LIB_3__::func_198("GB_BB_GT_STEAL" /* GXT: Steal the ~HUD_COLOUR_BLUE~vehicles. */, 0);
		}
	}
	else if (__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1))
	{
		if (BitTest(Local_111.f_1, 15))
		{
			__LIB_30__::func_529("GB_BB_GT_DSTRY1" /* GXT: ~a~~s~ are delivering the ~HUD_COLOUR_RED~vehicle.~s~ Destroy it. */, __LIB_30__::func_905(__LIB_1__::func_730()), 0, 0);
		}
		else
		{
			__LIB_30__::func_529("GB_BB_GT_DSTRY" /* GXT: ~a~~s~ are delivering the ~HUD_COLOUR_RED~vehicles.~s~ Destroy them. */, __LIB_30__::func_905(__LIB_1__::func_730()), 0, 0);
		}
	}
}

char* func_701()//Position - 0x3BF81
{
	switch (func_43())
	{
		case 0:
			return "GB_BB_GT_PS0" /* GXT: Vespucci Police Station */;
		case 1:
			return "GB_BB_GT_PS1" /* GXT: La Mesa Police Station */;
		case 2:
			return "GB_BB_GT_PS2" /* GXT: Mission Row Police Station */;
		case 3:
			return "GB_BB_GT_PS3" /* GXT: Vinewood Hills Police Station */;
		case 4:
			return "GB_BB_GT_PS4" /* GXT: Sandy Shores Police Station */;
		case 5:
			return "GB_BB_GT_PS5" /* GXT: Paleto Bay Police Station */;
		default:
	}
	return "GB_BB_GT_PS0" /* GXT: Vespucci Police Station */;
}

void func_702()//Position - 0x3BFE4
{
	int iVar0;
	if (func_466() || __LIB_19__::func_485(PLAYER::PLAYER_ID()) != 3)
	{
		return;
	}
	if (BitTest(Local_111.f_1, 12))
	{
		if (__LIB_0__::func_864(&(Local_111.f_49)))
		{
			if (func_17() < 3)
			{
				iLocal_110 = (func_10() - __LIB_1__::func_724(&(Local_111.f_49), 0, 0));
			}
			if (iLocal_110 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iLocal_110 = __LIB_1__::func_723(iLocal_110, 0);
			if (iLocal_110 > 0)
			{
				__LIB_1__::func_350(iLocal_110, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_1__::func_350(0, "GB_WORK_END" /* GXT: VIP WORK END */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_708()//Position - 0x3C277
{
	if (func_466())
	{
		return;
	}
	if (BitTest(uLocal_93, 0))
	{
		if (!__LIB_1__::func_515())
		{
			if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
			{
				if (BitTest(uLocal_93, 1))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_14() == 1)
						{
							__LIB_1__::func_707("GB_BB_WARN1" /* GXT: The Cops have the vehicle under close surveillance. You will gain a Wanted Level when the vehicle is stolen, so plan and coordinate your movements. */, -1);
						}
						else
						{
							__LIB_1__::func_707("GB_BB_WARN" /* GXT: The Cops have the vehicles under close surveillance. All members of your Organization will gain a Wanted Level when any vehicle is stolen, so plan and coordinate your movements. */, -1);
						}
						__LIB_16__::func_609(1);
						MISC::SET_BIT(&uLocal_93, 3);
					}
				}
				else
				{
					if (PLAYER::PLAYER_ID() != __LIB_1__::func_730())
					{
						__LIB_1__::func_707("GB_BB_GSTART" /* GXT: Your VIP has started Asset Recovery. Steal the vehicles and deliver them to the drop-off to earn cash and RP. */, -1);
					}
					else if (func_14() == 1)
					{
						__LIB_1__::func_707("GB_BB_BSTART1" /* GXT: You have started Asset Recovery. Steal the vehicle and deliver it to the drop-off to earn cash and RP. */, -1);
					}
					else
					{
						__LIB_1__::func_707("GB_BB_BSTART" /* GXT: You have started Asset Recovery. Steal the vehicles and deliver them to the drop-off to earn cash and RP. */, -1);
					}
					__LIB_16__::func_609(1);
					MISC::SET_BIT(&uLocal_93, 1);
				}
			}
			else
			{
				if (func_14() == 1)
				{
					__LIB_3__::func_441("GB_BB_FSTART1" /* GXT: ~a~~s~ have started Asset Recovery. Destroy the vehicle ~HUD_COLOUR_RED~~BLIP_BELLY_OF_THE_BEAST~~s~ to earn cash and RP. */, __LIB_30__::func_905(__LIB_1__::func_730()), __LIB_30__::func_909(__LIB_1__::func_730(), -2, 0, 0, 0), -1);
				}
				else
				{
					__LIB_3__::func_441("GB_BB_FSTART" /* GXT: ~a~~s~ have started Asset Recovery. Destroy each vehicle ~HUD_COLOUR_RED~~BLIP_BELLY_OF_THE_BEAST~~s~ to earn cash and RP. */, __LIB_30__::func_905(__LIB_1__::func_730()), __LIB_30__::func_909(__LIB_1__::func_730(), -2, 0, 0, 0), -1);
				}
				__LIB_16__::func_609(1);
				MISC::SET_BIT(&uLocal_93, 3);
			}
		}
	}
	else
	{
		if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
		{
			if (func_14() == 1)
			{
				__LIB_36__::func_424(86, "GB_BB_ST_START" /* GXT: ASSET RECOVERY */, "GB_BB_SS_START1" /* GXT: Steal the vehicle */, 1, -1, 2, 1, 0);
			}
			else
			{
				__LIB_36__::func_424(86, "GB_BB_ST_START" /* GXT: ASSET RECOVERY */, "GB_BB_SS_START" /* GXT: Steal the vehicles */, 1, -1, 2, 1, 0);
			}
		}
		else if (func_14() == 1)
		{
			func_463(86, "GB_BB_ST_START" /* GXT: ASSET RECOVERY */, "GB_BB_SS_DSTRY1" /* GXT: ~a~~s~ are delivering a vehicle. Destroy it. */, __LIB_30__::func_905(__LIB_1__::func_730()), __LIB_30__::func_909(__LIB_1__::func_730(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		else
		{
			func_463(86, "GB_BB_ST_START" /* GXT: ASSET RECOVERY */, "GB_BB_SS_DSTRY" /* GXT: ~a~~s~ are delivering vehicles. Destroy them. */, __LIB_30__::func_905(__LIB_1__::func_730()), __LIB_30__::func_909(__LIB_1__::func_730(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		__LIB_19__::func_573(-1, 0, 0, -1, 0, 0);
		MISC::SET_BIT(&uLocal_93, 0);
		MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 12);
	}
}

void func_819()//Position - 0x470FF
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar0)))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(func_28(bVar0)), false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(func_28(bVar0))))
				{
					if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
					{
						func_820(NETWORK::NET_TO_VEH(func_28(bVar0)));
					}
				}
			}
		}
		bVar0++;
	}
}

void func_820(int iParam0)//Position - 0x47167
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(iVar1, 0, 1))
		{
			if (__LIB_1__::func_876(iVar1, __LIB_1__::func_730(), 1) || __LIB_1__::func_499(iVar1, __LIB_1__::func_730()))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, iVar1, false);
			}
			else
			{
				func_821(iVar1, iParam0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_821(int iParam0, int iParam1)//Position - 0x471D0
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, iParam1, true))
		{
			__LIB_1__::func_473(__LIB_0__::func_950(iParam0), 0, 0f, 0, 0, 0, -1);
		}
	}
}

int func_839()//Position - 0x477E4
{
	return Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3;
}

int func_840()//Position - 0x477F6
{
	if (__LIB_12__::func_495())
	{
		return 1;
	}
	return 0;
}

void func_845()//Position - 0x4783B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_846(iVar0);
				break;
		}
		iVar0++;
	}
	bVar2 = false;
	while (bVar2 < func_14())
	{
		if (!BitTest(Local_111.f_1, bVar2) && !BitTest(Local_111.f_1, bVar2 + 8))
		{
			if (PLAYER::PLAYER_ID() == __LIB_1__::func_730())
			{
				if (BitTest(Local_111.f_1, 12))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar2)))
					{
						if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(func_28(bVar2)), false))
						{
							if ((ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(func_28(bVar2))) && !VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(func_28(bVar2)), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(func_28(bVar2)), -1, false))
							{
								MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar2 + 8);
							}
							else if (__LIB_0__::func_937(&(Local_114[bVar2 /*2*/]), 60000, 0))
							{
								MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar2 + 8);
							}
						}
						else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(func_28(bVar2)), false))
						{
							if (__LIB_0__::func_937(&(Local_114[bVar2 /*2*/]), 60000, 0))
							{
								MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar2 + 8);
							}
						}
					}
					else if (__LIB_0__::func_937(&(Local_114[bVar2 /*2*/]), 60000, 0))
					{
						MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar2 + 8);
					}
				}
			}
		}
		bVar2++;
	}
}

void func_846(int iParam0)//Position - 0x479B3
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
			{
				bVar1 = false;
				while (bVar1 < func_14())
				{
					if (!BitTest(Local_111.f_1, bVar1) && !BitTest(Local_111.f_1, bVar1 + 8))
					{
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(func_28(bVar1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(bVar1)) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(func_28(bVar1)), false))
							{
								if ((ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(func_28(bVar1))) && !VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(func_28(bVar1)), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(func_28(bVar1)), -1, false))
								{
									return;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
								{
									if (__LIB_12__::func_495())
									{
										if (Var0.f_5)
										{
											MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar1 + 8);
											func_852(__LIB_0__::func_162());
										}
									}
									else if (!__LIB_1__::func_876(PLAYER::PLAYER_ID(), __LIB_1__::func_730(), 1))
									{
										__LIB_19__::func_471();
										if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20))
										{
											__LIB_19__::func_557(0);
										}
										if (Var0.f_5)
										{
											Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
											MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar1 + 8);
											func_852(PLAYER::PLAYER_ID());
										}
									}
									else if (Var0.f_5)
									{
										MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar1 + 8);
										func_852(__LIB_0__::func_162());
									}
								}
								else if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
								{
									if (Var0.f_5)
									{
										MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), bVar1 + 8);
										func_852(__LIB_0__::func_162());
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
			else if ((!__LIB_12__::func_495() && ENTITY::IS_ENTITY_A_PED(Var0.f_0)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)))
			{
				if (!__LIB_19__::func_320(PLAYER::PLAYER_ID()) && !__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0));
					if (__LIB_1__::func_693(iVar2, 0, 1))
					{
						if (__LIB_1__::func_876(iVar2, __LIB_1__::func_730(), 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
								{
									__LIB_19__::func_471();
									if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20))
									{
										__LIB_19__::func_557(0);
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

void func_852(int iParam0)//Position - 0x47D98
{
	struct<14> Var0;
	Var0.f_10 = iParam0;
	Var0.f_2 = -1138299166;
	__LIB_1__::func_634(Var0, __LIB_4__::func_970(1));
}

void func_859(bool bParam0)//Position - 0x47E8F
{
	__LIB_3__::func_0();
	if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	func_110();
	func_915(bParam0);
	func_912();
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		func_911();
		__LIB_20__::func_114(1, 0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (func_860())
	{
		__LIB_20__::func_114(1, 0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_860()//Position - 0x47EE0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(iVar0)))
		{
			iVar1 = NETWORK::NET_TO_ENT(func_28(iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (func_619(NETWORK::NET_TO_VEH(func_28(iVar0)), &(uLocal_113[iVar0]), 0, 1))
				{
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_911()//Position - 0x4A157
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_28(iVar0)))
		{
			iVar1 = NETWORK::NET_TO_VEH(func_28(iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false))
				{
					__LIB_1__::func_473(__LIB_0__::func_950(PLAYER::PLAYER_ID()), 0, 0f, 0, 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_912()//Position - 0x4A1B8
{
	int iVar0;
	iVar0 = 0;
	if (!func_35())
	{
		iVar0 = 1;
	}
	Global_1943929.f_2 = Local_111.f_57;
	Global_1943929.f_3 = Local_111.f_58;
	func_913(iVar0, func_43(), func_36(), -1082130432);
}

void func_913(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4A1F5
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
			Var3.f_15 = iParam0;
			Var3.f_16 = uParam1;
			STATS::PLAYSTATS_BW_YATCHATTACK(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1943929.f_15;
			Var4.f_15 = iParam0;
			STATS::PLAYSTATS_BW_HUNT_THE_BOSS(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1943929.f_15;
			Var5.f_15 = iParam0;
			Var5.f_16 = uParam1;
			STATS::PLAYSTATS_BW_SIGHTSEER(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1943929.f_15;
			Var6.f_15 = iParam0;
			STATS::PLAYSTATS_BW_ASSAULT(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1943929.f_15;
			Var7.f_15 = iParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = uParam2;
			STATS::PLAYSTATS_BW_BELLY_OF_THE_BEAST(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = iParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = uParam2;
			Var8.f_17 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_HEAD_HUNTER(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = iParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = uParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_FRAGILE_GOODS(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = iParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = uParam2;
			Var10.f_17 = Global_1943929.f_15;
			STATS::PLAYSTATS_BW_AIR_FREIGHT(&Var10);
		}
	}
	__LIB_15__::func_588();
}

void func_915(bool bParam0)//Position - 0x4A4A1
{
	bool bVar0;
	int iVar1;
	iVar1 = 2;
	if (__LIB_19__::func_352(__LIB_1__::func_730(), 1))
	{
		if (Local_111.f_34 > 0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
	}
	else if (func_183(1, 0) > 0)
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (BitTest(Local_111.f_1, 18))
	{
		iVar1 = 8;
	}
	else if (BitTest(Local_111.f_1, 16))
	{
		iVar1 = 7;
	}
	if (bParam0)
	{
		iVar1 = 4;
	}
	func_916(bVar0, iVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
}

void func_916(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0x4A511
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
		iVar0 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
		Global_1944213.f_4 = __LIB_2__::func_476();
		Global_1944213.f_5 = __LIB_2__::func_475();
		if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_3__::func_131(PLAYER::PLAYER_ID()))
		{
			Global_1944213.f_6 = 1;
		}
		else
		{
			Global_1944213.f_6 = 0;
		}
		Global_1944213.f_1 = __LIB_19__::func_491(bParam9);
		Global_1944213.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_9 = __LIB_1__::func_137(bParam0);
		Global_1944213.f_10 = iParam1;
		Global_1944213.f_17 = Global_1944213.f_2;
		Global_1944213.f_18 = Global_1944213.f_2;
		Global_1944213.f_19 = __LIB_19__::func_499();
		Global_1944213.f_21 = (Global_1944213.f_8 - Global_1944213.f_7);
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		Global_1944213.f_24 = func_39(PLAYER::PLAYER_ID());
		Global_1944213.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		if (Global_1944213.f_24 > 2)
		{
			Global_1944213.f_24 = 2;
		}
		__LIB_15__::func_471(iVar0);
	}
	else if (bParam11)
	{
	}
	else
	{
		iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	}
	if ((__LIB_12__::func_654(iVar0) || iVar0 == 293) || iVar0 == 291)
	{
		Global_1943947.f_2 = __LIB_2__::func_476();
		Global_1943947.f_3 = __LIB_2__::func_475();
		Global_1943947.f_50 = iParam4;
		Global_1943947.f_51 = iParam5;
		Global_1943947.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943947.f_20 = (Global_1943947.f_10 - Global_1943947.f_9);
		Global_1943947.f_12 = iParam1;
		Global_1943947.f_19 = __LIB_15__::func_652(iVar0, bParam0, __LIB_19__::func_349(bParam3));
		if (bParam0)
		{
			Global_1943947.f_11 = 1;
		}
		else
		{
			Global_1943947.f_11 = 0;
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1943947.f_8 = 1;
		}
		else
		{
			Global_1943947.f_8 = 0;
		}
		Global_1943947.f_54 = __LIB_19__::func_369(1);
		Global_1943947.f_55 = __LIB_19__::func_369(0);
		if (iParam2 != 0)
		{
			Global_1943947.f_43 = 0;
			Global_1943947.f_45 = __LIB_7__::func_930(__LIB_0__::func_797(), iParam2);
			Global_1943947.f_47 = iParam7;
			Global_1943947.f_46 = iParam6;
			Global_1943947.f_52 = __LIB_19__::func_364(__LIB_0__::func_797(), iParam2);
		}
		__LIB_15__::func_469(iVar0);
	}
	else if (__LIB_12__::func_499(iVar0))
	{
		Global_1944003.f_2 = __LIB_2__::func_476();
		Global_1944003.f_3 = __LIB_2__::func_475();
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
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944003.f_8 = 1;
		}
		else
		{
			Global_1944003.f_8 = 0;
		}
		__LIB_15__::func_468(iVar0);
	}
	else if (((__LIB_4__::func_740(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		Global_1944066.f_2 = __LIB_2__::func_476();
		Global_1944066.f_3 = __LIB_2__::func_475();
		Global_1944066.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944066.f_18 = (Global_1944066.f_9 - Global_1944066.f_8);
		Global_1944066.f_11 = iParam1;
		Global_1944066.f_7 = __LIB_19__::func_499();
		Global_1944066.f_42 = __LIB_15__::func_347(__LIB_0__::func_5(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = __LIB_1__::func_721(iVar1);
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944066.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		else
		{
			Global_1944066.f_17 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_28 = iVar2;
		Global_1944066.f_29 = __LIB_1__::func_137((__LIB_11__::func_981(iVar1) || __LIB_11__::func_980(iVar1)));
		Global_1944066.f_30 = __LIB_1__::func_137(__LIB_4__::func_719(iVar1));
		Global_1944066.f_32 = __LIB_1__::func_137(__LIB_4__::func_673(iVar1));
		Global_1944066.f_33 = __LIB_1__::func_137(__LIB_2__::func_678(iVar1));
		Global_1944066.f_34 = __LIB_1__::func_137(__LIB_10__::func_102(iVar1));
		Global_1944066.f_35 = __LIB_1__::func_137(__LIB_4__::func_634(0, iVar1) == 1);
		Global_1944066.f_36 = __LIB_1__::func_137(__LIB_3__::func_928(iVar1));
		Global_1944066.f_37 = __LIB_1__::func_137(__LIB_0__::func_389(iVar1));
		Global_1944066.f_38 = __LIB_1__::func_137(__LIB_4__::func_633(iVar1));
		Global_1944066.f_39 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 0));
		Global_1944066.f_40 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 2));
		Global_1944066.f_41 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 1));
		if (__LIB_12__::func_517(iVar1))
		{
			Global_1944066.f_31 = 2;
		}
		else if (__LIB_12__::func_516(iVar1))
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
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_6 = 1;
		}
		else
		{
			Global_1944066.f_6 = 0;
		}
		Global_1944066.f_21 = -2;
		Global_1944066.f_22 = -2;
		__LIB_15__::func_467(iVar0);
	}
	else if (__LIB_1__::func_612(iVar0))
	{
		Global_1944113.f_2 = __LIB_2__::func_476();
		Global_1944113.f_3 = __LIB_2__::func_475();
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944113.f_6 = 1;
		}
		else
		{
			Global_1944113.f_6 = 0;
		}
		Global_1944113.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944113.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944113.f_11 = iParam1;
		Global_1944113.f_17 = __LIB_19__::func_304(__LIB_1__::func_730());
		Global_1944113.f_18 = (Global_1944113.f_9 - Global_1944113.f_8);
		Global_1944113.f_20 = iParam8;
		Global_1944113.f_21 = -2;
		Global_1944113.f_22 = -2;
		Global_1944113.f_27 = __LIB_1__::func_888();
		Global_1944113.f_29 = __LIB_1__::func_360(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__::func_360(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__::func_360(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__::func_360(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__::func_360(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__::func_360(6111, -1, 0);
		Global_1944113.f_36 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944113.f_37 = func_961();
		__LIB_15__::func_369();
		__LIB_15__::func_465(iVar0);
	}
	else if (__LIB_1__::func_77(iVar0))
	{
		Global_1944167.f_2 = __LIB_2__::func_476();
		Global_1944167.f_3 = __LIB_2__::func_475();
		Global_1944167.f_1 = iParam10;
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944167.f_6 = 1;
		}
		else
		{
			Global_1944167.f_6 = 0;
		}
		Global_1944167.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944167.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944167.f_11 = iParam1;
		Global_1944167.f_18 = (Global_1944167.f_9 - Global_1944167.f_8);
		Global_1944167.f_20 = iParam8;
		Global_1944167.f_23 = Global_786547;
		Global_1944167.f_36 = Global_786547.f_1;
		Global_1944167.f_24 = __LIB_1__::func_360(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__::func_360(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__::func_360(6166, -1, 0);
		Global_1944167.f_27 = __LIB_1__::func_137((((__LIB_2__::func_934() || __LIB_13__::func_355()) || __LIB_13__::func_354()) || __LIB_1__::func_641(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__::func_360(6167, -1, 0);
		Global_1944167.f_29 = __LIB_1__::func_137(__LIB_9__::func_118());
		Global_1944167.f_35 = -1;
		Global_1944167.f_38 = -1;
		Global_1944167.f_39 = Global_1944167.f_4;
		Global_1944167.f_40 = Global_1944167.f_5;
		Global_1944167.f_41 = __LIB_2__::func_476();
		Global_1944167.f_42 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944167.f_44 = Global_1944167.f_18;
		__LIB_15__::func_464(iVar0);
	}
	else if (__LIB_19__::func_360(iVar0))
	{
		if (Global_1944303.f_2 == -1)
		{
			Global_1944303.f_2 = __LIB_2__::func_476();
		}
		if (Global_1944303.f_3 == -1)
		{
			Global_1944303.f_3 = __LIB_2__::func_475();
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944303.f_6 = 1;
		}
		else
		{
			Global_1944303.f_6 = 0;
		}
		Global_1944303.f_1 = __LIB_19__::func_491(0);
		Global_1944303.f_7 = __LIB_19__::func_499();
		Global_1944303.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944303.f_11 = iParam1;
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944303.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944303.f_18 = (Global_1944303.f_9 - Global_1944303.f_8);
		Global_1944303.f_19 = Global_2815059.f_6745;
		Global_1944303.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		Global_1944303.f_29 = __LIB_1__::func_137(__LIB_12__::func_515(PLAYER::PLAYER_ID()));
		Global_1944303.f_30 = __LIB_1__::func_137(__LIB_4__::func_333(PLAYER::PLAYER_ID()));
		Global_1944303.f_31 = __LIB_4__::func_280(PLAYER::PLAYER_ID());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (Global_1944303.f_34 > 2)
		{
			Global_1944303.f_34 = 2;
		}
		Global_1944303.f_41 = __LIB_15__::func_328(iVar0);
		__LIB_15__::func_463(iVar0);
	}
	else if (__LIB_15__::func_326(iVar0))
	{
		Global_1944249.f_2 = __LIB_2__::func_476();
		Global_1944249.f_3 = __LIB_2__::func_475();
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944249.f_6 = 1;
		}
		else
		{
			Global_1944249.f_6 = 0;
		}
		Global_1944249.f_1 = __LIB_19__::func_491(0);
		Global_1944249.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944249.f_11 = iParam1;
		Global_1944249.f_18 = (Global_1944249.f_9 - Global_1944249.f_8);
		Global_1944249.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_15__::func_475(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_13__::func_383(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_4__::func_280(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_1__::func_137(__LIB_4__::func_355(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_1__::func_137(__LIB_4__::func_354(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_1__::func_137(__LIB_4__::func_353(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_1__::func_137(__LIB_4__::func_352(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_12__::func_512(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_6__::func_552(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_12__::func_511(PLAYER::PLAYER_ID());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (Global_1944249.f_42 > 2)
		{
			Global_1944249.f_42 = 2;
		}
		__LIB_15__::func_462(iVar0);
	}
	else if (__LIB_12__::func_747(iVar0))
	{
		Global_1944390.f_2 = __LIB_2__::func_476();
		Global_1944390.f_3 = __LIB_2__::func_475();
		Global_1944390.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944390.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944390.f_6 = 1;
		}
		else
		{
			Global_1944390.f_6 = 0;
		}
		Global_1944390.f_7 = __LIB_19__::func_499();
		Global_1944390.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944390.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944390.f_11 = iParam1;
		if (__LIB_1__::func_730() != -1)
		{
			Global_1944390.f_17 = __LIB_1__::func_136(__LIB_1__::func_730());
		}
		Global_1944390.f_18 = (Global_1944390.f_9 - Global_1944390.f_8);
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = __LIB_2__::func_839(PLAYER::PLAYER_ID());
		Global_1944390.f_27 = __LIB_1__::func_137(__LIB_1__::func_124(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_2__::func_771(21, -1);
		Global_1944390.f_29 = __LIB_1__::func_137(__LIB_1__::func_341(PLAYER::PLAYER_ID()));
		__LIB_15__::func_351(iVar0);
	}
	else if (__LIB_4__::func_184(iVar0))
	{
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944465.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944465.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		Global_1944465.f_10 = __LIB_19__::func_499();
		Global_1944465.f_11 = 1;
		Global_1944465.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1973074);
		Global_1944465.f_14 = iParam1;
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		__LIB_15__::func_461(iVar0);
	}
	else if (__LIB_11__::func_619(iVar0))
	{
		Global_1944552.f_2 = __LIB_2__::func_476();
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944552.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944552.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1944552.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944552.f_10 = __LIB_19__::func_499();
		Global_1944552.f_11 = 1;
		Global_1944552.f_14 = iParam1;
		__LIB_15__::func_460(iVar0);
	}
	else if (__LIB_12__::func_510(iVar0))
	{
		Global_1944664.f_2 = __LIB_2__::func_476();
		Global_1944664.f_9 = 1;
		Global_1944664.f_10 = bParam0;
		Global_1944664.f_11 = iParam1;
		__LIB_15__::func_459(iVar0);
	}
	else if (__LIB_3__::func_691(iVar0) || __LIB_15__::func_310(iVar0))
	{
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944685.f_5 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944685.f_6 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1944685.f_7 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944685.f_9 = __LIB_19__::func_499();
		Global_1944685.f_10 = 1;
		Global_1944685.f_13 = iParam1;
		Global_1944685.f_33 = bParam0;
		Global_1944685.f_32 = iVar0;
		__LIB_15__::func_458(iVar0);
	}
	else if (__LIB_15__::func_309(iVar0) || __LIB_15__::func_308(iVar0))
	{
		iVar3 = __LIB_0__::func_797();
		if (iVar3 != -1)
		{
			Global_1944754.f_7 = __LIB_2__::func_477(iVar3);
			Global_1944754.f_8 = __LIB_2__::func_552(iVar3);
		}
		Global_1944754.f_9 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944754.f_11 = __LIB_19__::func_499();
		Global_1944754.f_12 = 1;
		Global_1944754.f_15 = bParam0;
		Global_1944754.f_3 = __LIB_2__::func_476();
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_15__::func_309(iVar0))
		{
			Global_1944754.f_4 = __LIB_15__::func_320(__LIB_19__::func_348(PLAYER::PLAYER_ID()));
		}
		else
		{
			Global_1944754.f_4 = __LIB_15__::func_319(__LIB_19__::func_347(PLAYER::PLAYER_ID()));
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
			iVar4[iVar6] = __LIB_15__::func_318(__LIB_13__::func_128(iVar7, iVar6));
			iVar5[iVar6] = __LIB_15__::func_317(__LIB_13__::func_129(iVar7, iVar6));
			iVar6++;
		}
		__LIB_15__::func_457(iVar0, &iVar4, &iVar5);
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
			if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
			{
				Global_1943929.f_4 = 1;
			}
		}
	}
}

var func_961()//Position - 0x4F5F6
{
	var uVar0;
	uVar0 = func_962();
	if (!__LIB_1__::func_501())
	{
		if (__LIB_0__::func_797() != __LIB_0__::func_162())
		{
			uVar0 = func_39(__LIB_0__::func_797()) + 1;
		}
	}
	return uVar0;
}

int func_962()//Position - 0x4F625
{
	return func_39(PLAYER::PLAYER_ID()) + 1;
}

int func_993(struct<21> Param0)//Position - 0x501F9
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_1041(157, -1, 1, -1, -1, -1));
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_111, 59, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_112, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_20__::func_516(157, 0, 0);
	return 1;
}

int func_1041(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5115F
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		case 157:
			return 4;
		case 167:
			return __LIB_8__::func_138(iParam1);
		case 170:
			return 2;
		case 171:
			return 0;
		case 172:
			return 5;
		case 173:
			return 14;
		case 168:
			return 8;
		case 178:
		case 188:
			return func_1103(iParam1, iParam3, iParam4);
		case 225:
		case 226:
			return func_1096(iParam1, iParam3, iParam4, 0, 0);
		case 227:
			return 0;
		case 229:
		case 230:
			return func_1081(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		case 233:
			return func_1071(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		case 190:
			return 18;
		case 191:
			return 0;
		case 192:
			return func_1066(iParam1, iParam3);
		case 179:
			return 0;
		case 183:
			return 5;
		case 182:
			return 14;
		case 185:
			return 24;
		case 186:
			return 13;
		case 180:
			return 6;
		case 193:
			return 6;
		case 194:
			return 0;
		case 197:
			return 4;
		case 199:
			return 0;
		case 195:
			return 20;
		case 201:
			return 0;
		case 198:
			return 8;
		case 205:
			return 1;
		case 207:
			return 8;
		case 208:
			return 2;
		case 209:
			return 6;
		case 210:
			return 0;
		case 214:
			return 5;
		case 215:
			return 11;
		case 216:
			return 8;
		case 217:
			return 24;
		case 218:
			return 23;
		case 219:
			return 1;
		case 220:
			return 4;
		case 221:
			return 4;
		case 237:
		case 250:
			return __LIB_8__::func_128(iParam1, iParam3, iParam4);
		case 238:
		case 249:
			return __LIB_8__::func_127(iParam1);
		case 239:
			return 4;
		case 240:
			return 11;
		case 241:
			return 3;
		case 242:
			return 5;
		case 244:
			return 4;
		case 248:
			return 1;
		case 243:
			return func_1055(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		case 158:
			return func_1048(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		case 181:
			return func_1042(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		default:
	}
	return 0;
}

int func_1042(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5144E
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + __LIB_8__::func_119(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_8__::func_118(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_8__::func_117(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (__LIB_11__::func_369(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_8__::func_116(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1048(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x51558
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		case 24:
			iVar0++;
			break;
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		case 36:
			iVar0 += 2;
			break;
		case 37:
			iVar0 += 2;
			break;
		case 38:
			iVar0++;
			break;
		case 8:
			iVar0 += 7;
			break;
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				case 39:
					iVar0 += 3;
					break;
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		case 16:
			iVar0 += 12;
			break;
		case 35:
			iVar0 += 4;
			break;
		case 4:
			iVar0 += 16;
			break;
		case 46:
			iVar0++;
			break;
		case 9:
			iVar0 += 7;
			break;
		case 14:
			iVar0 += 7;
			break;
		case 17:
			iVar0 += 7;
			break;
		case 47:
			iVar0 += 2;
			break;
		case 11:
			iVar0 += 3;
			break;
		case 18:
			iVar0 += 4;
			break;
		case 6:
			iVar0 += 11;
			break;
		case 48:
			iVar0 += 2;
			break;
		case 44:
			iVar0 += 2;
			break;
		case 21:
			iVar0 += 8;
			break;
		case 22:
			iVar0 += 3;
			break;
		case 7:
			iVar0 += 7;
			break;
		case 15:
			iVar0++;
			break;
		case 2:
			iVar0++;
			break;
		case 34:
			iVar0 += 5;
			break;
		case 27:
			iVar0 += 9;
			break;
		case 26:
			iVar0 += 3;
			break;
		case 31:
			iVar0++;
			break;
		case 3:
			iVar0 += 21;
			break;
		case 12:
			iVar0 += 20;
			break;
		case 41:
			iVar0 += 11;
			break;
		case 49:
			iVar0 += 3;
			break;
		case 29:
			iVar0++;
			break;
		case 5:
			iVar0 += 3;
			break;
		case 50:
			iVar0 += 4;
			break;
		case 23:
			iVar0 += 4;
			break;
		case 20:
			iVar0 += 3;
			break;
		case 32:
			iVar0 = iVar0;
			break;
		case 51:
			iVar0 += 4;
			break;
		case 52:
			iVar0 += 6;
			break;
		case 39:
			iVar0 += 2;
			break;
		case 40:
			iVar0++;
			break;
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + __LIB_8__::func_122(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_8__::func_121(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_30__::func_753(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (__LIB_11__::func_370(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_8__::func_120(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1055(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x51D24
{
	int iVar0;
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		case 1:
			iVar0 += 10;
			break;
		case 15:
			iVar0 += 21;
			break;
		case 14:
			iVar0 += 2;
			break;
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				case 36:
					iVar0 += 5;
					break;
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		case 5:
			iVar0 += 3;
			break;
		case 6:
			iVar0 += 2;
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				case 32:
					iVar0++;
					break;
				case 33:
					iVar0 += 2;
					break;
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 += 3;
			break;
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						case 1:
							iVar0 += 4;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						case 1:
							iVar0 += 3;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						case 1:
							iVar0 += 3;
							break;
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		case 3:
			iVar0 += 6;
			break;
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				case 13:
					iVar0 += 10;
					break;
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		case 2:
			iVar0 += 3;
			break;
		case 8:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_0__::func_114(iParam0))
		{
			iVar0 = (iVar0 + func_1061(iParam0, iParam2));
		}
		iVar0 = (iVar0 + __LIB_8__::func_126(iParam0, -1));
	}
	if (!bParam6)
	{
		if (__LIB_8__::func_125(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + __LIB_8__::func_124(func_39(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (__LIB_11__::func_371(iParam0, iParam1))
		{
			iVar0 = (iVar0 + __LIB_8__::func_123(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1061(int iParam0, int iParam1)//Position - 0x521BE
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		case 6:
			if (func_39(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1066(int iParam0, int iParam1)//Position - 0x5240F
{
	int iVar0;
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				case 2:
					iVar0 += 6;
					break;
				case 3:
					iVar0 += 4;
					break;
				case 4:
					iVar0 += 2;
					break;
				case 5:
					iVar0 += 3;
					break;
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				case 8:
					iVar0 += 4;
					break;
				case 9:
					iVar0 += 2;
					break;
				case 10:
					iVar0 += 2;
					break;
				case 11:
					iVar0 += 2;
					break;
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				case 14:
					iVar0 += 4;
					break;
				case 15:
					iVar0 += 6;
					break;
				case 16:
					iVar0 += 3;
					break;
				case 17:
					iVar0 += 3;
					break;
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 4;
					break;
				case 21:
					iVar0 += 6;
					break;
				case 22:
					iVar0 += 2;
					break;
				case 23:
					iVar0 += 4;
					break;
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 4;
					break;
				case 21:
					iVar0 += 6;
					break;
				case 22:
					iVar0 += 2;
					break;
				case 23:
					iVar0 += 4;
					break;
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				case 32:
					iVar0 += 2;
					break;
				case 33:
					iVar0 += 3;
					break;
				case 34:
					iVar0 += 5;
					break;
				case 35:
					iVar0 += 5;
					break;
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				case 69:
					iVar0 = iVar0;
					break;
				case 70:
					iVar0 = iVar0;
					break;
				case 71:
					iVar0 = iVar0;
					break;
				case 72:
					iVar0 = iVar0;
					break;
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				case 75:
					iVar0++;
					break;
				case 76:
					iVar0++;
					break;
				case 77:
					iVar0++;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				case 79:
					iVar0 = iVar0;
					break;
				case 80:
					iVar0 = iVar0;
					break;
				case 81:
					iVar0 = iVar0;
					break;
				case 82:
					iVar0 = iVar0;
					break;
				case 83:
					iVar0 = iVar0;
					break;
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		case 7:
			iVar0 += 4;
			break;
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				case 63:
					iVar0 += 6;
					break;
				case 64:
					iVar0 += 6;
					break;
				case 65:
					iVar0 += 6;
					break;
				case 66:
					iVar0 += 6;
					break;
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				case 86:
					iVar0 = iVar0;
					break;
				case 87:
					iVar0 = iVar0;
					break;
				case 88:
					iVar0 = iVar0;
					break;
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				case 91:
					iVar0 += 2;
					break;
				case 92:
					iVar0 += 2;
					break;
				case 93:
					iVar0 += 2;
					break;
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				case 39:
					iVar0 += 4;
					break;
				case 40:
					iVar0 += 4;
					break;
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		case 15:
			iVar0 = iVar0;
			break;
		case 16:
			iVar0 = iVar0;
			break;
		case 17:
			iVar0 = iVar0;
			break;
		case 18:
			iVar0 = iVar0;
			break;
		case 19:
			iVar0 = iVar0;
			break;
		default:
			iVar0 = iVar0;
			break;
	}
	if ((__LIB_8__::func_98(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + __LIB_11__::func_794(iParam0, func_429() + 1));
	}
	return iVar0;
}

int func_1071(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x52B63
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			iVar0 += 5;
			break;
		case 2:
			iVar0 += 2;
			break;
		case 3:
			iVar0++;
			break;
		case 4:
			iVar0 += 3;
			break;
		case 5:
			iVar0 += 2;
			break;
		case 8:
			iVar0 += 3;
			break;
		case 6:
			iVar0++;
			break;
		case 12:
			iVar0 += 2;
			break;
		case 7:
			iVar0 += 6;
			break;
		case 9:
			iVar0 = iVar0;
			break;
		case 11:
			iVar0 = iVar0;
			break;
		case 13:
			iVar0 += 2;
			break;
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_8__::func_101(iParam0))
		{
			if (iParam3 != __LIB_0__::func_162())
			{
				iVar0 = (iVar0 + __LIB_11__::func_468(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != __LIB_0__::func_162())
		{
			iVar0 = (iVar0 + __LIB_30__::func_403(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (__LIB_8__::func_130(0, iParam1) != -1)
		{
			if (iParam3 != __LIB_0__::func_162())
			{
				iVar0 = (iVar0 + __LIB_1__::func_806(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (__LIB_11__::func_372(iParam0))
		{
			iVar0 = (iVar0 + __LIB_8__::func_129(iParam0));
		}
	}
	return iVar0;
}

int func_1081(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x52ECA
{
	int iVar0;
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		case 1:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0 += 10;
			break;
		case 2:
			iVar0 += 12;
			break;
		case 4:
			iVar0 += 10;
			break;
		case 8:
			iVar0++;
			break;
		case 5:
			iVar0 += 2;
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				case 1:
					iVar0++;
					break;
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				case 4:
					iVar0 += 2;
					break;
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				case 7:
					iVar0 += 4;
					break;
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		case 20:
			iVar0 += 5;
			break;
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		case 17:
			iVar0 += 5;
			break;
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (__LIB_11__::func_368(iParam0))
		{
			if (iParam3 != __LIB_0__::func_162())
			{
				iVar0 = (iVar0 + __LIB_12__::func_923(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != __LIB_0__::func_162())
		{
			iVar0 = (iVar0 + __LIB_8__::func_133(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (__LIB_8__::func_132(0, iParam1) != -1)
		{
			if (iParam3 != __LIB_0__::func_162())
			{
				iVar0 = (iVar0 + __LIB_11__::func_374(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (__LIB_11__::func_373(iParam0))
		{
			iVar0 = (iVar0 + __LIB_8__::func_131(iParam0));
		}
	}
	return iVar0;
}

int func_1096(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x53AA5
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				case 1:
					iVar0 += 3;
					break;
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				case 10:
					iVar0 += 3;
					break;
				case 11:
					iVar0 += 2;
					break;
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				case 15:
					iVar0 += 4;
					break;
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		case 5:
			iVar0 += 4;
			break;
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				case 20:
					iVar0 += 5;
					break;
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				case 23:
					iVar0 += 3;
					break;
				case 24:
					iVar0 += 3;
					break;
			}
			if (__LIB_11__::func_469(iParam0, func_429() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				case 30:
					iVar0 += 4;
					break;
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				case 33:
					iVar0 += 2;
					break;
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 = iVar0;
			break;
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				case 36:
					iVar0 += 3;
					break;
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		case 14:
			iVar0 += 8;
			break;
		case 15:
			iVar0 = iVar0;
			break;
		case 16:
			iVar0 = iVar0;
			break;
		case 17:
			iVar0 = iVar0;
			break;
		case 19:
			iVar0 = iVar0;
			break;
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (__LIB_8__::func_112(iParam0))
		{
			iVar0 = (iVar0 + __LIB_11__::func_469(iParam0, func_429() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + __LIB_8__::func_135(iParam0, func_429() + 1));
	}
	if (!bParam3)
	{
		if (__LIB_11__::func_375(iParam0))
		{
			iVar0 = (iVar0 + __LIB_8__::func_134(iParam0));
		}
	}
	return iVar0;
}

int func_1103(int iParam0, int iParam1, int iParam2)//Position - 0x54070
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		case 1:
			iVar0 = iVar0;
			break;
		case 7:
			iVar0 = iVar0;
			break;
		case 8:
			iVar0 = iVar0;
			break;
		case 5:
			iVar0 = iVar0;
			break;
		case 11:
			iVar0 += 3;
			break;
		case 13:
			iVar0 = iVar0;
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				case 2:
					iVar0 += 2;
					break;
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				case 19:
					iVar0 += 2;
					break;
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				case 22:
					iVar0 += 7;
					break;
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				case 28:
					iVar0 = iVar0;
					break;
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				case 31:
					iVar0 += 2;
					break;
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				case 37:
					iVar0 += 7;
					break;
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				case 40:
					iVar0 += 4;
					break;
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				case 43:
					iVar0 += 2;
					break;
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				case 46:
					iVar0 += 6;
					break;
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				case 49:
					iVar0 += 2;
					break;
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + __LIB_8__::func_137(iParam0, func_429() + 1, iParam2));
	iVar0 = (iVar0 + __LIB_11__::func_471(iParam0));
	return iVar0;
}

