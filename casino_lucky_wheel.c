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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	float fLocal_65 = 0f;
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
	var uLocal_86 = -1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<2> Local_110 = { 0, 0 } ;
	struct<5> Local_111[32];
	struct<500> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<246> Local_113 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_65 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_894();
	}
	else
	{
		func_891();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_881())
		{
			func_891();
		}
		func_10();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xBC
{
	func_2();
}

void func_2()//Position - 0xC8
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()//Position - 0xDB
{
	int iVar0;
	int iVar1;
	if (Local_110.f_0 == __LIB_0__::func_162())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_7__::func_179(iVar1))
			{
				if (__LIB_0__::func_156(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_110.f_0 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_110.f_0 = __LIB_0__::func_162();
	}
}

int func_4()//Position - 0x138
{
	if (Local_110.f_0 == __LIB_0__::func_162())
	{
		return 1;
	}
	if (!func_5(Local_110.f_0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_110.f_0))
	{
		return 1;
	}
	if (!__LIB_0__::func_156(Local_110.f_0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x17A
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 10);
}

bool func_9()//Position - 0x227
{
	return (MISC::GET_FRAME_COUNT() % 3) == 0;
}

void func_10()//Position - 0x237
{
	func_879();
	func_92();
	func_90();
	func_85();
	func_83();
	func_81();
	func_76();
	func_74(0);
	func_73();
	func_68();
	func_65();
	func_64();
	func_11();
}

void func_11()//Position - 0x274
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	if (__LIB_4__::func_533())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_26(0, 0))
	{
		return;
	}
	if (!BitTest(Local_112.f_1, 5))
	{
		if (__LIB_16__::func_230())
		{
			iVar1 = __LIB_1__::func_360(8352, -1, 0);
			iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
			iVar3 = (iVar1 - iVar2);
			if (iVar3 > 0)
			{
				NETWORK::CONVERT_POSIX_TIME(iVar3, &Var0);
				iVar4 = (Var0.f_3 * 3600000);
				iVar4 = (iVar4 + (Var0.f_4 * 60000));
				iVar4 = (iVar4 + Var0.f_5 * 1000);
				Var5 = { __LIB_5__::func_405(iVar4, 0, 0) };
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CAS_WHEEL_TR" /* GXT: Time remaining before you can spin the Lucky Wheel: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
			}
		}
		else
		{
			__LIB_3__::func_452("CAS_WHEEL_RE" /* GXT: Your spin of the Lucky Wheel is now available. */, 0);
		}
		MISC::SET_BIT(&(Local_112.f_1), 5);
	}
}

int func_26(bool bParam0, bool bParam1)//Position - 0x872
{
	int iVar0;
	var uVar1;
	bool bVar2;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!__LIB_10__::func_600(8.7587f))
		{
			return 1;
		}
	}
	if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (Global_2667225.f_2681)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_54())
		{
			return 1;
		}
	}
	if (__LIB_3__::func_597())
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (__LIB_0__::func_877())
	{
		return 1;
	}
	if (__LIB_1__::func_512())
	{
		return 1;
	}
	if (__LIB_0__::func_104(1))
	{
		return 1;
	}
	bVar2 = func_48(0);
	if (Global_262145.f_26933 /* Tunable: VC_CASINO_DISABLE_WHEEL */)
	{
		if (bVar2)
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !__LIB_0__::func_877())
			{
				__LIB_0__::func_151("CASINO_LUCK_WD" /* GXT: Lucky Wheel is not available at this time.  Please try again later. */, -1);
			}
		}
		iVar0 = 1;
	}
	if (!__LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		if ((bVar2 && !BitTest(Global_1946250.f_6, 4)) && !__LIB_9__::func_559(4, &uVar1))
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !__LIB_0__::func_877())
			{
				MISC::SET_BIT(&(Global_1946250.f_6), 4);
				__LIB_5__::func_832("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_9__::func_562(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (bParam0)
	{
		if (__LIB_16__::func_230())
		{
			if (bVar2 && !func_42(20))
			{
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !__LIB_0__::func_877())
				{
					if (Global_262145.f_27185 /* Tunable: -312420223 */)
					{
						switch (Global_262145.f_27184 /* Tunable: 9960150 */)
						{
							case 2:
								__LIB_0__::func_151("LUCKY_WHEEL_US1" /* GXT: You can only spin the Lucky Wheel twice per day. */, -1);
								break;
							case 3:
								__LIB_0__::func_151("LUCKY_WHEEL_US2" /* GXT: You can only spin the Lucky Wheel three times per day. */, -1);
								break;
							case 4:
								__LIB_0__::func_151("LUCKY_WHEEL_US3" /* GXT: You can only spin the Lucky Wheel four times per day. */, -1);
								break;
							default:
								__LIB_0__::func_151("LUCKY_WHEEL_US" /* GXT: You can only spin the Lucky Wheel once per day. */, -1);
								break;
						}
					}
					else
					{
						__LIB_0__::func_151("LUCKY_WHEEL_US" /* GXT: You can only spin the Lucky Wheel once per day. */, -1);
					}
					func_41(20);
				}
			}
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		if (bVar2)
		{
			if (!func_40())
			{
				if (__LIB_0__::func_1("LW_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Lucky Wheel. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !__LIB_0__::func_877())
				{
					__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
				}
				iVar0 = 1;
			}
			else if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (BitTest(Local_112.f_1, 1))
	{
		iVar0 = 1;
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		iVar0 = 1;
	}
	if (__LIB_16__::func_268())
	{
		iVar0 = 1;
	}
	if (__LIB_9__::func_559(4, &uVar1))
	{
		if (bVar2)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				__LIB_0__::func_151("CAS_LW_REGL" /* GXT: This feature is not available for you. */, -1);
				func_41(28);
			}
		}
		iVar0 = 1;
	}
	if (Global_1966139 != 0)
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 1;
	}
	if (__LIB_4__::func_911())
	{
		return 1;
	}
	if (__LIB_3__::func_597())
	{
		return 1;
	}
	return iVar0;
}

int func_40()//Position - 0xD56
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_0__::func_156(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 1109.4691f, 228.94319f, -50.640408f, 1111.2146f, 228.87773f, -48.390408f, 1.82f, false, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_41(bool bParam0)//Position - 0xDE0
{
	if (!BitTest(Local_112.f_0, bParam0))
	{
		MISC::SET_BIT(&Local_112, bParam0);
	}
}

bool func_42(int iParam0)//Position - 0xDFB
{
	return BitTest(Local_112.f_0, iParam0);
}

int func_48(bool bParam0)//Position - 0xEFE
{
	if (bParam0)
	{
		if ((MISC::GET_FRAME_COUNT() % 3) == 0)
		{
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.9955f, 228.90337f, -50.6408f, 1109.7274f, 228.93518f, -48.3908f, 1.5f, false, true, 0);
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.9955f, 228.90337f, -50.6408f, 1109.7274f, 228.93518f, -48.3908f, 1.5f, false, true, 0);
	}
	return 0;
}

bool func_54()//Position - 0x1030
{
	return SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_55()) < 5f;
}

Vector3 func_55()//Position - 0x104B
{
	return 1111.0519f, 229.8492f, -50.6409f;
}

int func_56()//Position - 0x1062
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_34, 4);
	}
	return 0;
}

void func_64()//Position - 0x11BC
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (STREAMING::IS_MODEL_VALID(Global_262145.f_26763 /* Tunable: CASINO_PRIZE_VEHICLE_MODEL_HASH */))
		{
			if (__LIB_1__::func_360(8519, -1, 0) != Global_262145.f_26763 /* Tunable: CASINO_PRIZE_VEHICLE_MODEL_HASH */)
			{
				MISC::SET_BIT(&Global_1853211, 17);
				__LIB_1__::func_354(8519, Global_262145.f_26763 /* Tunable: CASINO_PRIZE_VEHICLE_MODEL_HASH */, -1, 1, 0);
			}
		}
	}
}

void func_65()//Position - 0x120B
{
	int iVar0;
	if (Local_112.f_45 == 0)
	{
		if (BitTest(Local_112.f_1, 4))
		{
			iVar0 = __LIB_0__::func_253(26806, -1);
			if (iVar0 < 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151("CAS_LW_VOUCH" /* GXT: Vehicle discounts are available for a limited time only. Go to the Inventory section of the Interaction Menu to check your discounts and the time remaining before they expire. */, -1);
					iVar0++;
					__LIB_1__::func_379(26806, iVar0, -1);
					MISC::CLEAR_BIT(&(Local_112.f_1), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 4);
			}
		}
	}
}

void func_68()//Position - 0x12BB
{
	if (BitTest(Local_112.f_1, 2))
	{
		if (!__LIB_0__::func_864(&(Local_112.f_43)))
		{
			__LIB_0__::func_795(&(Local_112.f_43), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_112.f_43), 40000, 0) || (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()))
		{
			MISC::CLEAR_BIT(&(Local_112.f_1), 2);
			__LIB_0__::func_794(&(Local_112.f_43));
		}
	}
}

void func_73()//Position - 0x13DD
{
	if (Global_1648034.f_1156 >= 30000)
	{
		if (Local_110.f_0 != PLAYER::PLAYER_ID())
		{
			func_74(1);
		}
	}
}

void func_74(int iParam0)//Position - 0x1400
{
	struct<3> Var0;
	int iVar1;
	if (Local_110.f_0 != __LIB_0__::func_162() || iParam0 == 1)
	{
		if (Local_110.f_0 != PLAYER::PLAYER_ID() || iParam0 == 1)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1109.1597f, 228.44836f, -50.630825f, 1112.1864f, 228.98409f, -48.130825f, 2.75f, false, true, 0))
			{
				if (!BitTest(Local_112.f_1, 1))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_75(iVar1, &Var0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, -1, 0.25f, 0, 40000f);
					MISC::SET_BIT(&(Local_112.f_1), 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
			{
				if (BitTest(Local_112.f_1, 1))
				{
					MISC::CLEAR_BIT(&(Local_112.f_1), 1);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
		{
			if (BitTest(Local_112.f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 1);
			}
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
	{
		if (BitTest(Local_112.f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_112.f_1), 1);
		}
	}
}

void func_75(int iParam0, var uParam1)//Position - 0x1556
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114.8124f, 226.8861f, -50.8408f };
			break;
		case 1:
			*uParam1 = { 1115.391f, 222.8374f, -50.4301f };
			break;
		case 2:
			*uParam1 = { 1111.7622f, 223.4791f, -50.8408f };
			break;
		case 3:
			*uParam1 = { 1110.2871f, 222.9306f, -50.8408f };
			break;
		case 4:
			*uParam1 = { 1108.9568f, 223.4897f, -50.8408f };
			break;
		case 5:
			*uParam1 = { 1106.0417f, 226.8098f, -50.8408f };
			break;
	}
}

void func_76()//Position - 0x160D
{
	if (func_42(24))
	{
		Local_112.f_23 = func_79();
		STREAMING::REQUEST_ANIM_DICT(Local_112.f_23);
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_112.f_23))
		{
			Local_112.f_10 = Local_110.f_1;
			func_78(14);
			func_77(24);
		}
	}
}

void func_77(bool bParam0)//Position - 0x1654
{
	if (BitTest(Local_112.f_0, bParam0))
	{
		MISC::CLEAR_BIT(&Local_112, bParam0);
	}
}

void func_78(int iParam0)//Position - 0x166E
{
	Local_112.f_45 = iParam0;
}

char* func_79()//Position - 0x167D
{
	char* sVar0;
	if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

void func_81()//Position - 0x175D
{
	if (func_42(0))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SET_FRONTEND_ACTIVE(false);
		__LIB_0__::func_189();
	}
}

void func_83()//Position - 0x1788
{
	if (func_84())
	{
		CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_LUCKY_WHEEL_CAMERA"));
	}
}

int func_84()//Position - 0x17A0
{
	if (Local_112.f_45 >= 5 && Local_112.f_45 <= 12)
	{
		return 1;
	}
	if (Local_112.f_45 == 13)
	{
		return 1;
	}
	if (Local_112.f_45 == 4)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_85()//Position - 0x1805
{
	if (Local_112.f_17 < 6 && Local_112.f_17 != -1)
	{
		if (!__LIB_0__::func_864(&(Local_112.f_35)))
		{
			func_89();
			func_88();
			__LIB_0__::func_795(&(Local_112.f_35), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_112.f_35), 250, 0) && !__LIB_0__::func_864(&(Local_112.f_37)))
		{
			func_87();
			if (Local_112.f_17 != 5)
			{
				func_86();
			}
			__LIB_0__::func_795(&(Local_112.f_37), 0, 0);
			Local_112.f_17++;
		}
		else if (__LIB_0__::func_864(&(Local_112.f_37)))
		{
			if (__LIB_0__::func_937(&(Local_112.f_37), 250, 0))
			{
				__LIB_0__::func_794(&(Local_112.f_37));
				__LIB_0__::func_794(&(Local_112.f_35));
			}
		}
	}
	else if (Local_112.f_17 == 6)
	{
		Local_112.f_17 = -1;
	}
}

void func_86()//Position - 0x18CE
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), false);
}

void func_87()//Position - 0x18F0
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), false);
}

void func_88()//Position - 0x1912
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), false);
}

void func_89()//Position - 0x1934
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), false);
}

void func_90()//Position - 0x1956
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				if (iVar2 == 2057463666)
				{
					if (Global_1663509.f_802)
					{
						return;
					}
					func_91(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_91(int iParam0)//Position - 0x19B5
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_110.f_1 = Var0.f_2;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1 && Var0.f_3)
		{
			func_41(24);
		}
	}
}

void func_92()//Position - 0x19F7
{
	switch (Local_112.f_45)
	{
		case 0:
			func_878();
			if (Local_112.f_17 == -1)
			{
				if (!func_42(23))
				{
					func_87();
					func_41(23);
				}
			}
			if (!func_877())
			{
				if (!func_42(0) && !func_26(1, 1))
				{
					func_876();
					if (func_873())
					{
						func_872(PLAYER::PLAYER_ID(), 1);
						func_871();
						func_858();
						func_41(0);
						func_78(1);
					}
				}
				else
				{
					func_856();
				}
			}
			if (!BitTest(Local_112.f_1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
			{
				if (Local_110.f_1 != Local_112.f_14 && Local_110.f_0 == __LIB_0__::func_162())
				{
					ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, -func_855(Local_110.f_1), 0f, 2, true);
					Local_112.f_14 = Local_110.f_1;
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
				else if (Local_110.f_0 == PLAYER::PLAYER_ID())
				{
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
			}
			break;
		case 1:
			if (Local_110.f_0 == PLAYER::PLAYER_ID())
			{
				func_854(PLAYER::PLAYER_ID(), 1);
				func_853(0);
				if (!BitTest(Local_112.f_1, 3))
				{
					__LIB_0__::func_795(&(Local_112.f_41), 0, 0);
					func_78(2);
				}
				else
				{
					func_78(3);
				}
			}
			else if (__LIB_0__::func_937(&(Local_112.f_29), 1500, 0))
			{
				func_78(17);
			}
			break;
		case 2:
			func_843();
			break;
		case 3:
			func_835();
			if (func_42(8))
			{
				func_78(4);
			}
			break;
		case 4:
			func_835();
			if (func_42(9))
			{
				func_78(5);
			}
			break;
		case 5:
			func_834();
			break;
		case 7:
			func_833();
			break;
		case 6:
			func_828();
			break;
		case 8:
			func_827();
			func_823();
			if (func_42(5))
			{
				Local_112.f_10 = Local_110.f_1;
				if (!func_822(PLAYER::PLAYER_ID()))
				{
					Local_112.f_484 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_821(Local_112.f_10, 1);
					func_41(21);
					func_820(1);
				}
				__LIB_0__::func_795(&(Local_112.f_33), 0, 0);
				func_78(13);
				if (__LIB_0__::func_1("LUCK_WHEEL_SPIN" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~ to Spin. */) || __LIB_0__::func_1("LUCK_W_SPIN_PC" /* GXT: Use ~INPUT_MOVE_DOWN_ONLY~ to Spin. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_864(&(Local_112.f_33)))
			{
				if (__LIB_0__::func_937(&(Local_112.f_33), 190, 0))
				{
					func_809(func_818(func_819(PLAYER::PLAYER_ID())), 0, 0, 1, 0);
					__LIB_0__::func_794(&(Local_112.f_33));
					__LIB_1__::func_28(173);
					Local_112.f_478 = 1f;
					func_78(9);
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						Local_110.f_1 = func_807(Local_110.f_0);
					}
				}
			}
			break;
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
			{
				func_805();
			}
			func_804(Local_112.f_478);
			func_803(Local_112.f_478);
			if (func_800(func_818(func_819(PLAYER::PLAYER_ID())), 0, 0))
			{
				func_809(func_799(func_819(PLAYER::PLAYER_ID())), 0, 1, 1, 0);
			}
			if (func_798(0))
			{
				func_41(14);
			}
			if ((func_42(14) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
			{
				func_780(0);
			}
			break;
		case 10:
			if (Local_112.f_481 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(Local_112.f_481);
				Local_112.f_481 = -1;
			}
			func_77(14);
			if (func_800(func_779(), 0, 1))
			{
				if (__LIB_16__::func_229())
				{
					func_776();
				}
				func_77(17);
				__LIB_0__::func_794(&(Local_112.f_74.f_385));
				func_78(11);
			}
			break;
		case 11:
			if (func_179())
			{
				func_41(21);
				func_168();
				func_158();
				Local_112.f_484 = NETWORK::GET_CLOUD_TIME_AS_INT();
				func_78(16);
			}
			break;
		case 12:
			if (func_42(10))
			{
				if (func_800(14, 0, 1))
				{
					if (__LIB_16__::func_229())
					{
						func_776();
					}
					func_77(10);
					func_78(17);
				}
			}
			else
			{
				func_78(17);
			}
			break;
		case 14:
			func_152();
			break;
		case 15:
			func_151();
			break;
		case 16:
			func_136();
			break;
		case 17:
			func_93();
			break;
	}
}

void func_93()//Position - 0x1E2A
{
	struct<387> Var0;
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	if (__LIB_0__::func_1("LUCK_WHEEL_SPIN" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~ to Spin. */) || __LIB_0__::func_1("LUCK_W_SPIN_PC" /* GXT: Use ~INPUT_MOVE_DOWN_ONLY~ to Spin. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (PLAYER::PLAYER_ID() == Local_110.f_0)
	{
		__LIB_1__::func_553();
		func_114(PLAYER::PLAYER_ID(), 1, 0);
		HUD::THEFEED_SHOW();
		if (Local_112.f_74.f_376 != 0)
		{
			if (Local_112.f_74.f_376 == 1)
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			Local_112.f_74.f_376 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_73) && Local_112.f_73 != Global_1966140)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_112.f_73));
		}
		else
		{
			Local_112.f_73 = -1;
		}
		if (__LIB_3__::func_241())
		{
			__LIB_1__::func_91();
		}
		HUD::DISPLAY_RADAR(true);
	}
	func_104(1);
	__LIB_1__::func_895(1, -1);
	func_854(PLAYER::PLAYER_ID(), 0);
	if (func_42(0))
	{
		func_114(PLAYER::PLAYER_ID(), 1, 0);
	}
	StringCopy(&(Local_112.f_461), "", 64);
	Local_112.f_477 = 0;
	Local_112.f_478 = 0f;
	Local_112.f_47 = -1;
	Var0.f_1 = 363;
	Local_112.f_74 = { Var0 };
	func_78(0);
	func_97();
	func_96();
	func_820(0);
	__LIB_0__::func_794(&(Local_112.f_33));
	__LIB_0__::func_794(&(Local_112.f_29));
	__LIB_0__::func_794(&(Local_112.f_41));
	func_95(-1);
	func_94(0);
}

void func_94(bool bParam0)//Position - 0x1F70
{
	if (BitTest(Local_112.f_485, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_112.f_485), bParam0);
	}
}

void func_95(int iParam0)//Position - 0x1F90
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		Local_111[PLAYER::PLAYER_ID() /*5*/].f_4 = iParam0;
	}
}

void func_96()//Position - 0x1FAF
{
	func_872(PLAYER::PLAYER_ID(), 0);
}

void func_97()//Position - 0x1FC0
{
	Local_112.f_0 = 0;
	func_100(5000);
	Local_112.f_2 = 0;
	Local_112.f_3 = 0;
	Local_112.f_4 = 0;
	Local_112.f_5 = 0;
	Local_112.f_6 = 0;
	Local_112.f_8 = 0;
	Local_112.f_9 = 0;
	func_99(-1);
	Local_112.f_11 = -1;
	Local_112.f_12 = 0;
	Local_112.f_13 = 0;
	Local_112.f_15 = 0;
	Local_112.f_18 = 0f;
	Local_112.f_19 = 0f;
	Local_112.f_16 = 0;
	Local_112.f_20 = 0f;
	Local_112.f_21 = 0f;
	func_95(-1);
	Local_112.f_46 = 1;
	func_98(-1);
	__LIB_0__::func_794(&(Local_112.f_27));
	__LIB_0__::func_794(&(Local_112.f_29));
	__LIB_0__::func_794(&(Local_112.f_31));
	__LIB_0__::func_794(&(Local_112.f_39));
}

void func_98(int iParam0)//Position - 0x206C
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/] != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/] = iParam0;
		}
	}
}

void func_99(int iParam0)//Position - 0x2096
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/].f_2 != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/].f_2 = iParam0;
		}
	}
}

void func_100(int iParam0)//Position - 0x20C4
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/].f_3 != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/].f_3 = iParam0;
		}
	}
}

void func_104(bool bParam0)//Position - 0x2279
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_480))
	{
		AUDIO::STOP_SOUND(Local_112.f_480);
		AUDIO::RELEASE_SOUND_ID(Local_112.f_480);
		Local_112.f_480 = -1;
	}
	if (!bParam0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_482))
		{
			AUDIO::STOP_SOUND(Local_112.f_482);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_482);
			Local_112.f_482 = -1;
		}
		if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_483))
		{
			AUDIO::STOP_SOUND(Local_112.f_483);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_483);
			Local_112.f_483 = -1;
		}
	}
}

void func_114(int iParam0, bool bParam1, int iParam2)//Position - 0x257D
{
	if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		__LIB_1__::func_376(iParam0, bParam1, iParam2, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, !bParam1);
	}
}

void func_136()//Position - 0x2EA3
{
	if (__LIB_0__::func_112())
	{
		if (func_139(&(Local_112.f_499), joaat("VW_LUCKY_WHEEL_USAGE"), (Local_112.f_484 + 86400)))
		{
			if (Local_112.f_499 == 2)
			{
				func_137(0);
				func_78(17);
			}
			Local_112.f_499 = 0;
		}
	}
	else
	{
		func_137(0);
		func_78(17);
	}
}

void func_137(bool bParam0)//Position - 0x2EFF
{
	int iVar0;
	__LIB_1__::func_69(joaat("MPPLY_LUCKY_WHEEL_USAGE"), (Local_112.f_484 + 86400));
	if (!bParam0)
	{
		__LIB_1__::func_354(8352, (Local_112.f_484 + 86400), -1, 1, 0);
	}
	iVar0 = __LIB_1__::func_360(10411, -1, 0);
	__LIB_1__::func_354(10411, iVar0 + 1, -1, 1, 0);
	Global_2725353 = 1;
}

bool func_139(var uParam0, int iParam1, int iParam2)//Position - 0x2F70
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (__LIB_3__::func_534() != -1)
		{
			return 0;
		}
		if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_DATA_STORAGE"), iParam1, joaat("NET_SHOP_ACTION_UPDATE_STORAGE_DATA"), iParam2, 0, iParam2, 1, 0, 3))
		{
			if (__LIB_12__::func_387())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (__LIB_2__::func_835(__LIB_3__::func_534()))
		{
			if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			__LIB_1__::func_34(__LIB_3__::func_534());
		}
	}
	return *uParam0 != 1;
}

void func_151()//Position - 0x3C55
{
	if (func_798(1))
	{
		func_41(14);
	}
	if ((func_42(14) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
	{
		func_780(1);
	}
}

void func_152()//Position - 0x3C95
{
	if (func_822(Local_110.f_0))
	{
		func_98(func_807(Local_110.f_0));
		func_100(func_157(Local_110.f_0));
		Local_112.f_15 = func_156();
		Local_112.f_8 = func_155();
		func_153();
		func_78(15);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_110.f_1 = func_807(Local_110.f_0);
		}
	}
}

void func_153()//Position - 0x3CE7
{
	char* sVar0;
	sVar0 = func_154(func_819(Local_110.f_0));
	ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, 0f, 0f, 2, true);
	ENTITY::PLAY_ENTITY_ANIM(Local_112.f_72, sVar0, Local_112.f_23, 1000f, false, true, false, 0f, 2);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_112.f_72);
}

char* func_154(int iParam0)//Position - 0x3D2D
{
	char* sVar0;
	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
						break;
					case 1:
						return "spinningwheel_low_effort_02_wheel";
						break;
					case 2:
						return "spinningwheel_low_effort_03_wheel";
						break;
					case 3:
						return "spinningwheel_low_effort_04_wheel";
						break;
					case 4:
						return "spinningwheel_low_effort_05_wheel";
						break;
					case 5:
						return "spinningwheel_low_effort_06_wheel";
						break;
					case 6:
						return "spinningwheel_low_effort_07_wheel";
						break;
					case 7:
						return "spinningwheel_low_effort_08_wheel";
						break;
					case 8:
						return "spinningwheel_low_effort_09_wheel";
						break;
					case 9:
						return "spinningwheel_low_effort_10_wheel";
						break;
					case 10:
						return "spinningwheel_low_effort_11_wheel";
						break;
					case 11:
						return "spinningwheel_low_effort_12_wheel";
						break;
					case 12:
						return "spinningwheel_low_effort_13_wheel";
						break;
					case 13:
						return "spinningwheel_low_effort_14_wheel";
						break;
					case 14:
						return "spinningwheel_low_effort_15_wheel";
						break;
					case 15:
						return "spinningwheel_low_effort_16_wheel";
						break;
					case 16:
						return "spinningwheel_low_effort_17_wheel";
						break;
					case 17:
						return "spinningwheel_low_effort_18_wheel";
						break;
					case 18:
						return "spinningwheel_low_effort_19_wheel";
						break;
					case 19:
						return "spinningwheel_low_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
						break;
					case 1:
						return "spinningwheel_low_effort_02";
						break;
					case 2:
						return "spinningwheel_low_effort_03";
						break;
					case 3:
						return "spinningwheel_low_effort_04";
						break;
					case 4:
						return "spinningwheel_low_effort_05";
						break;
					case 5:
						return "spinningwheel_low_effort_06";
						break;
					case 6:
						return "spinningwheel_low_effort_07";
						break;
					case 7:
						return "spinningwheel_low_effort_08";
						break;
					case 8:
						return "spinningwheel_low_effort_09";
						break;
					case 9:
						return "spinningwheel_low_effort_10";
						break;
					case 10:
						return "spinningwheel_low_effort_11";
						break;
					case 11:
						return "spinningwheel_low_effort_12";
						break;
					case 12:
						return "spinningwheel_low_effort_13";
						break;
					case 13:
						return "spinningwheel_low_effort_14";
						break;
					case 14:
						return "spinningwheel_low_effort_15";
						break;
					case 15:
						return "spinningwheel_low_effort_16";
						break;
					case 16:
						return "spinningwheel_low_effort_17";
						break;
					case 17:
						return "spinningwheel_low_effort_18";
						break;
					case 18:
						return "spinningwheel_low_effort_19";
						break;
					case 19:
						return "spinningwheel_low_effort_20";
						break;
					}
			}
			break;
		case 1:
			if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
						break;
					case 1:
						return "spinningwheel_med_effort_01_wheel";
						break;
					case 2:
						return "spinningwheel_med_effort_02_wheel";
						break;
					case 3:
						return "spinningwheel_med_effort_03_wheel";
						break;
					case 4:
						return "spinningwheel_med_effort_04_wheel";
						break;
					case 5:
						return "spinningwheel_med_effort_05_wheel";
						break;
					case 6:
						return "spinningwheel_med_effort_06_wheel";
						break;
					case 7:
						return "spinningwheel_med_effort_07_wheel";
						break;
					case 8:
						return "spinningwheel_med_effort_08_wheel";
						break;
					case 9:
						return "spinningwheel_med_effort_09_wheel";
						break;
					case 10:
						return "spinningwheel_med_effort_10_wheel";
						break;
					case 11:
						return "spinningwheel_med_effort_11_wheel";
						break;
					case 12:
						return "spinningwheel_med_effort_12_wheel";
						break;
					case 13:
						return "spinningwheel_med_effort_13_wheel";
						break;
					case 14:
						return "spinningwheel_med_effort_14_wheel";
						break;
					case 15:
						return "spinningwheel_med_effort_15_wheel";
						break;
					case 16:
						return "spinningwheel_med_effort_16_wheel";
						break;
					case 17:
						return "spinningwheel_med_effort_17_wheel";
						break;
					case 18:
						return "spinningwheel_med_effort_18_wheel";
						break;
					case 19:
						return "spinningwheel_med_effort_19_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
						break;
					case 1:
						return "spinningwheel_med_effort_02";
						break;
					case 2:
						return "spinningwheel_med_effort_03";
						break;
					case 3:
						return "spinningwheel_med_effort_04";
						break;
					case 4:
						return "spinningwheel_med_effort_05";
						break;
					case 5:
						return "spinningwheel_med_effort_06";
						break;
					case 6:
						return "spinningwheel_med_effort_07";
						break;
					case 7:
						return "spinningwheel_med_effort_08";
						break;
					case 8:
						return "spinningwheel_med_effort_09";
						break;
					case 9:
						return "spinningwheel_med_effort_10";
						break;
					case 10:
						return "spinningwheel_med_effort_11";
						break;
					case 11:
						return "spinningwheel_med_effort_12";
						break;
					case 12:
						return "spinningwheel_med_effort_13";
						break;
					case 13:
						return "spinningwheel_med_effort_14";
						break;
					case 14:
						return "spinningwheel_med_effort_15";
						break;
					case 15:
						return "spinningwheel_med_effort_16";
						break;
					case 16:
						return "spinningwheel_med_effort_17";
						break;
					case 17:
						return "spinningwheel_med_effort_18";
						break;
					case 18:
						return "spinningwheel_med_effort_19";
						break;
					case 19:
						return "spinningwheel_med_effort_20";
						break;
					}
			}
			break;
		case 2:
			if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
						break;
					case 1:
						return "spinningwheel_high_effort_02_wheel";
						break;
					case 2:
						return "spinningwheel_high_effort_03_wheel";
						break;
					case 3:
						return "spinningwheel_high_effort_04_wheel";
						break;
					case 4:
						return "spinningwheel_high_effort_05_wheel";
						break;
					case 5:
						return "spinningwheel_high_effort_06_wheel";
						break;
					case 6:
						return "spinningwheel_high_effort_07_wheel";
						break;
					case 7:
						return "spinningwheel_high_effort_08_wheel";
						break;
					case 8:
						return "spinningwheel_high_effort_09_wheel";
						break;
					case 9:
						return "spinningwheel_high_effort_10_wheel";
						break;
					case 10:
						return "spinningwheel_high_effort_11_wheel";
						break;
					case 11:
						return "spinningwheel_high_effort_12_wheel";
						break;
					case 12:
						return "spinningwheel_high_effort_13_wheel";
						break;
					case 13:
						return "spinningwheel_high_effort_14_wheel";
						break;
					case 14:
						return "spinningwheel_high_effort_15_wheel";
						break;
					case 15:
						return "spinningwheel_high_effort_16_wheel";
						break;
					case 16:
						return "spinningwheel_high_effort_17_wheel";
						break;
					case 17:
						return "spinningwheel_high_effort_18_wheel";
						break;
					case 18:
						return "spinningwheel_high_effort_19_wheel";
						break;
					case 19:
						return "spinningwheel_high_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
						break;
					case 1:
						return "spinningwheel_high_effort_02";
						break;
					case 2:
						return "spinningwheel_high_effort_03";
						break;
					case 3:
						return "spinningwheel_high_effort_04";
						break;
					case 4:
						return "spinningwheel_high_effort_05";
						break;
					case 5:
						return "spinningwheel_high_effort_06";
						break;
					case 6:
						return "spinningwheel_high_effort_07";
						break;
					case 7:
						return "spinningwheel_high_effort_08";
						break;
					case 8:
						return "spinningwheel_high_effort_09";
						break;
					case 9:
						return "spinningwheel_high_effort_10";
						break;
					case 10:
						return "spinningwheel_high_effort_11";
						break;
					case 11:
						return "spinningwheel_high_effort_12";
						break;
					case 12:
						return "spinningwheel_high_effort_13";
						break;
					case 13:
						return "spinningwheel_high_effort_14";
						break;
					case 14:
						return "spinningwheel_high_effort_15";
						break;
					case 15:
						return "spinningwheel_high_effort_16";
						break;
					case 16:
						return "spinningwheel_high_effort_17";
						break;
					case 17:
						return "spinningwheel_high_effort_18";
						break;
					case 18:
						return "spinningwheel_high_effort_19";
						break;
					case 19:
						return "spinningwheel_high_effort_20";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_155()//Position - 0x4547
{
	int iVar0;
	iVar0 = 0;
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_156()//Position - 0x4579
{
	int iVar0;
	iVar0 = 535;
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_157(int iParam0)//Position - 0x45B0
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/].f_3;
}

void func_158()//Position - 0x45CD
{
	int iVar0;
	char* sVar1;
	if (!Global_262145.f_26818 /* Tunable: ENABLE_LUCKY_SEVEN_HEAVY */)
	{
		return;
	}
	if (func_167())
	{
		return;
	}
	Local_112.f_48 = MISC::GET_HASH_KEY("LUCKYWHEEL");
	Local_112.f_48.f_1 = MISC::GET_HASH_KEY("STANDARD");
	Local_112.f_48.f_4 = MISC::GET_HASH_KEY("WIN");
	Local_112.f_48.f_11 = __LIB_1__::func_124(PLAYER::PLAYER_ID());
	Local_112.f_48.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__::func_162())
	{
		Local_112.f_48.f_19 = NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	iVar0 = func_164();
	sVar1 = func_163(iVar0);
	Local_112.f_48.f_21 = MISC::GET_HASH_KEY(sVar1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_161()))
	{
		Local_112.f_48.f_22 = 0;
	}
	else
	{
		Local_112.f_48.f_22 = MISC::GET_HASH_KEY(func_161());
	}
	switch (func_807(PLAYER::PLAYER_ID()))
	{
		case 3:
			Local_112.f_48.f_6 = 10000;
			break;
		case 7:
			Local_112.f_48.f_6 = 15000;
			break;
		case 10:
			Local_112.f_48.f_6 = 20000;
			break;
		case 15:
			Local_112.f_48.f_6 = 25000;
			break;
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
					Local_112.f_48.f_6 = Local_112.f_477;
					break;
			}
			break;
	}
	Local_112.f_48.f_7 = __LIB_9__::func_483();
	Local_112.f_48.f_23 = func_159();
	Local_112.f_48.f_15 = 1;
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()))
	{
		Local_112.f_48.f_20 = MISC::GET_HASH_KEY("VIP membership");
	}
	else
	{
		Local_112.f_48.f_20 = MISC::GET_HASH_KEY("paid membership");
	}
	Local_112.f_48.f_10 = 1;
	STATS::PLAYSTATS_CASINO_LUCKY_SEVEN(&(Local_112.f_48));
}

int func_159()//Position - 0x476D
{
	int iVar0;
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 2500;
		case 2:
			return 20000;
		case 3:
			return 10000;
		case 5:
			return 5000;
		case 7:
			return 15000;
		case 9:
			return 7500;
		case 6:
			return 30000;
		case 10:
			return 20000;
		case 13:
			return 10000;
		case 14:
			return 40000;
		case 17:
			return 15000;
		case 19:
			return 50000;
		case 15:
			return 25000;
			break;
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_112.f_477;
					break;
			}
			break;
	}
	return 0;
}

char* func_161()//Position - 0x486A
{
	int iVar0;
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return __LIB_16__::func_226(&(Local_112.f_461));
			break;
		case 11:
			switch (Local_112.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return __LIB_16__::func_226(&(Local_112.f_461));
					break;
			}
			break;
	}
	return "";
}

char* func_163(int iParam0)//Position - 0x48F9
{
	if (iParam0 == 5)
	{
		switch (Local_112.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			case 1:
				return "MYSTREYVEHICLE";
			case 2:
				return "MYSTREYCHIPS";
			case 3:
				return "MYSTREYCASH";
			case 4:
				return "MYSTREYRP";
			case 5:
				return "MYSTREYINVENTORY";
			case 6:
				return "MYSTREYBUSINESS";
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			case 1:
				return "RP";
			case 2:
				return "CASH";
			case 3:
				return "HOUSECHIPS";
			case 4:
				return "DISCOUNTVOUCHER";
			case 6:
				return "PODIUMVEHICLE";
			}
		default:
	}
	return "";
}

int func_164()//Position - 0x49C7
{
	int iVar0;
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 0:
			return 0;
		case 5:
			return 1;
		case 7:
			return 3;
		case 11:
			return 5;
		case 8:
			return 0;
		case 9:
			return 1;
		case 6:
			return 2;
		case 10:
			return 3;
		case 12:
			return 0;
		case 13:
			return 1;
		case 18:
			return 6;
		case 14:
			return 2;
		case 16:
			return 0;
		case 17:
			return 1;
		case 19:
			return 2;
		case 15:
			return 3;
		case 4:
			return 4;
		default:
	}
	return -1;
}

int func_167()//Position - 0x4AD8
{
	if (MISC::ARE_STRINGS_EQUAL(&(Local_112.f_461), "INVALID"))
	{
		if (func_807(PLAYER::PLAYER_ID()) == 11 && Local_112.f_47 == 1)
		{
			return 1;
		}
		if (func_807(PLAYER::PLAYER_ID()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_168()//Position - 0x4B21
{
	if (func_178() || (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461))))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461)))
		{
			__LIB_5__::func_832("CAS_LW_RP" /* GXT: Congratulations!~n~You won ~1~ RP. */, 20000, -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
		else
		{
			__LIB_5__::func_832(func_177(), func_176(), -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)))
	{
		if (!MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_112.f_461)))
		{
			__LIB_0__::func_151(func_177(), -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
	}
	else
	{
		__LIB_0__::func_151(func_177(), -1);
		MISC::SET_BIT(&(Local_112.f_1), 2);
	}
	if (Local_112.f_14 == 4)
	{
		if (!BitTest(Local_112.f_1, 4))
		{
			MISC::SET_BIT(&(Local_112.f_1), 4);
		}
	}
	if (func_175())
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && !MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_112.f_461))) && !MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461)))
		{
			HUD::THEFEED_SHOW();
			if (func_174())
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("TWOSTRINGS" /* GXT: ~a~ ~a~ */);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_112.f_461));
			}
			if (func_174())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_6__::func_369(Local_112.f_74.f_384, 1));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Local_112.f_461));
			}
			if (Local_112.f_14 == 11 && func_178())
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Local_112.f_477);
			}
			HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(func_170(), func_169(), &(Local_112.f_461), 1);
		}
	}
}

int func_169()//Position - 0x4CC3
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
			break;
		case 4:
			return 18;
			break;
		case 11:
			return 19;
			break;
		case 18:
			return 5;
			break;
	}
	return -1;
}

char* func_170()//Position - 0x4D1E
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO" /* GXT: Clothing Unlock */;
			break;
		case 4:
			return "CAS_LW_RDISC" /* GXT: Discount Unlock */;
			break;
		case 11:
			return "CAS_LW_RMYST" /* GXT: Mystery Unlock */;
			break;
		case 18:
			return "CAS_LW_RVEHI" /* GXT: Vehicle Unlock */;
			break;
	}
	return "";
}

int func_174()//Position - 0x707B
{
	switch (Local_112.f_14)
	{
		case 11:
			switch (Local_112.f_47)
			{
				case 1:
					return 1;
				default:
			}
			break;
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_175()//Position - 0x70B8
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_176()//Position - 0x70FC
{
	switch (Local_112.f_14)
	{
		case 1:
			return 2500;
			break;
		case 5:
			return 5000;
			break;
		case 9:
			return 7500;
			break;
		case 13:
			return 10000;
			break;
		case 17:
			return 15000;
			break;
		case 2:
			return 20000;
			break;
		case 6:
			return 30000;
			break;
		case 14:
			return 40000;
			break;
		case 19:
			return 50000;
			break;
		case 3:
			return 10000;
			break;
		case 7:
			return 15000;
			break;
		case 10:
			return 20000;
			break;
		case 15:
			return 25000;
			break;
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_112.f_477;
					break;
			}
			break;
	}
	return 0;
}

char* func_177()//Position - 0x7205
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO" /* GXT: Congratulations!~n~You won a clothing item. */;
			break;
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP" /* GXT: Congratulations!~n~You won ~1~ RP. */;
			break;
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH" /* GXT: Congratulations!~n~You won $~1~. */;
			break;
		case 4:
			return "CAS_LW_DISC" /* GXT: Congratulations!~n~You won a 10% vehicle discount. */;
			break;
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP" /* GXT: Congratulations!~n~You won ~1~ Chips. */;
			break;
		case 11:
			return "CAS_LW_MYST" /* GXT: Congratulations!~n~You won a mystery prize. */;
			break;
		case 18:
			return "CAS_LW_VEHI" /* GXT: Congratulations!~n~You won the podium vehicle. */;
			break;
	}
	return "";
}

int func_178()//Position - 0x72D8
{
	switch (Local_112.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
			break;
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_179()//Position - 0x736C
{
	switch (func_775(Local_112.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_768(&(Local_112.f_461), &Local_112, func_775(Local_112.f_14), 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_760(&(Local_112.f_477), &(Local_112.f_461), func_775(Local_112.f_14), 0);
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			return func_747(&(Local_112.f_477), &(Local_112.f_461), func_775(Local_112.f_14), 0);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			return func_717(&(Local_112.f_477), &(Local_112.f_461), &(Local_112.f_499), func_775(Local_112.f_14), 0);
			break;
		case 17:
			if (!BitTest(Local_112.f_0, 19))
			{
				Local_112.f_47 = func_715();
				MISC::SET_BIT(&Local_112, 19);
			}
			else
			{
				return func_545(&(Local_112.f_477), &(Local_112.f_461), &(Local_112.f_73), &(Local_112.f_74), Local_112.f_47, &Local_112, Local_113, &(Local_112.f_499));
			}
			break;
		case 18:
			return func_189(&(Local_112.f_461), &(Local_112.f_73), &(Local_112.f_74), func_775(Local_112.f_14), 0);
			break;
		case 19:
			return func_180(&(Local_112.f_461), func_775(Local_112.f_14));
			break;
	}
	return 0;
}

int func_180(char* sParam0, int iParam1)//Position - 0x750E
{
	int iVar0;
	if (iParam1 != -1)
	{
		iVar0 = func_187();
		__LIB_9__::func_125(func_186(iVar0));
		StringCopy(sParam0, func_181(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_181(int iParam0)//Position - 0x7544
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME" /* GXT: Elitas Travel */;
		case 1:
			return "BOATS_NAMEb" /* GXT: Dock Tease */;
		case 2:
			return "LGM_NAME" /* GXT: Legendary Motorsport */;
		case 3:
			return "SSS_NAME" /* GXT: Southern San Andreas Super Autos */;
		case 4:
			return "CANDC_NAMEb" /* GXT: Warstock Cache & Carry */;
		case 5:
			return "PAM_NAME" /* GXT: Pedal and Metal */;
		default:
	}
	return "LRMVOUCHER_INVALID";
}

int func_186(int iParam0)//Position - 0x7890
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 13;
		case 2:
			return 14;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 17;
		default:
	}
	return 14;
}

int func_187()//Position - 0x78E3
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_188(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_188(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_188(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_188(int iParam0)//Position - 0x7962
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 1:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 2:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 3:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 4:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 5:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		default:
	}
	return 0;
}

int func_189(char* sParam0, int* iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x79D2
{
	int iVar0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!__LIB_16__::func_234() && ENTITY::DOES_ENTITY_EXIST(Global_1966140))
		{
			*iParam1 = Global_1966140;
			if (func_270(*iParam1, uParam2, &(uParam2->f_376), &(uParam2->f_377), &(uParam2->f_378), &(uParam2->f_379), 1, 0, 1, 1, 0) || __LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
			{
				if (uParam2->f_379 != 3 && !__LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
				{
					StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
					Global_1966142 = NETWORK::GET_CLOUD_TIME_AS_INT();
					uParam2->f_384 = ENTITY::GET_ENTITY_MODEL(*iParam1);
					if (__LIB_0__::func_112())
					{
						Global_1966141 = 1;
					}
					else
					{
						__LIB_1__::func_69(joaat("MPPLY_LW_PODIUM_VEH_MODEL"), ENTITY::GET_ENTITY_MODEL(*iParam1));
						__LIB_39__::func_349();
					}
					__LIB_3__::func_589(158, "LUCKY_POD_TXT" /* GXT: Hey, a little bird told me we have a big winner... CONGRATULATIONS! That's a nice set of wheels. I'm already raising a glass of bubbly on your behalf. Your mechanic has the keys, so give them a call and take it for a spin. */, 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					if (__LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
					{
					}
					StringCopy(sParam0, "INVALID", 64);
				}
				if (Global_262145.f_28867 /* Tunable: -1595770647 */)
				{
					if (uParam2->f_384 == joaat("clique"))
					{
						iVar0 = __LIB_0__::func_991(joaat("MPPLY_XMASLIVERIES16"));
						MISC::SET_BIT(&iVar0, 6);
						__LIB_1__::func_69(joaat("MPPLY_XMASLIVERIES16"), iVar0);
					}
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 0);
				func_242();
				__LIB_0__::func_794(&(uParam2->f_385));
				return 1;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1966140))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			__LIB_5__::func_128(0, PLAYER::PLAYER_PED_ID(), "200000", joaat("XPTYPE_AWARDS"), joaat("XPCATEGORY_RP_LUCKY_WHEEL"), 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_270(*iParam1, uParam2, &(uParam2->f_376), &(uParam2->f_377), &(uParam2->f_378), &(uParam2->f_379), 1, 0, 1, 0, 0) || __LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
		{
			if (uParam2->f_379 != 3 && !__LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
			{
				StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
			}
			else
			{
				if (__LIB_0__::func_937(&(uParam2->f_385), 60000, 0))
				{
				}
				StringCopy(sParam0, "INVALID", 64);
			}
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 0);
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 1);
			}
			__LIB_0__::func_794(&(uParam2->f_385));
			return 1;
		}
	}
	return 0;
}

void func_242()//Position - 0x9D14
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 453867094;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = 1;
	iVar1 = __LIB_0__::func_943(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_270(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0xB0E8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				__LIB_9__::func_321(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = __LIB_12__::func_56(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = __LIB_13__::func_406(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!BitTest(uParam1->f_370, 7))
					{
						if (func_409(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "LW_LOSE_VEH" /* GXT: Are you sure you want to lose the vehicle prize? */, iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !__LIB_0__::func_193())
						{
							if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_370), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!__LIB_1__::func_840(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (__LIB_4__::func_867())
				{
					iVar5 = 0;
					while (iVar5 < 363)
					{
						if (__LIB_8__::func_889(iVar5))
						{
							bVar2 = true;
							iVar5 = 364;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V1" /* GXT: This vehicle prize will replace your current impounded Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iParam0))
			{
				if (__LIB_0__::func_112())
				{
					if (func_350(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								__LIB_2__::func_968(*uParam4, *iParam3, -1);
							}
							if (!__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_302(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							__LIB_9__::func_4(iParam0, *iParam3);
							__LIB_1__::func_333(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						__LIB_2__::func_968(*uParam4, *iParam3, -1);
					}
					if (!__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_302(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					__LIB_9__::func_4(iParam0, *iParam3);
					__LIB_1__::func_333(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x15F72
{
	int iVar0;
	var uVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_2__::func_635();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			__LIB_2__::func_725();
			func_336(iParam1, 1);
			Global_1952156 = 1;
		}
		__LIB_31__::func_849(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			__LIB_1__::func_821(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			__LIB_0__::func_107(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (__LIB_4__::func_868(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_3__::func_578(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

void func_336(int iParam0, bool bParam1)//Position - 0x17893
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_336(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		__LIB_0__::func_794(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

bool func_350(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x17EBE
{
	int iVar0;
	int iVar1;
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!__LIB_6__::func_365() && Global_1964691)
			{
				return 0;
			}
			iVar0 = __LIB_4__::func_887(iParam1);
			iVar1 = __LIB_6__::func_921(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iVar1, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_VEHICLE_MOD"), joaat("VEM_TRACKER_t0_v1"), joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_351(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && __LIB_12__::func_387())
			{
			}
			else
			{
				*uParam2 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_3__::func_534() < 0)
			{
				*uParam2 = 3;
			}
			else if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam2 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam2 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_351(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1800F
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	iVar10 = __LIB_6__::func_920(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			__LIB_6__::func_995(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar0)))
			{
				return 0;
			}
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = __LIB_6__::func_363(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = __LIB_4__::func_882(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = __LIB_6__::func_362(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = __LIB_7__::func_366(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = __LIB_4__::func_879(iParam1);
		if (bVar11)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", __LIB_1__::func_137(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", __LIB_1__::func_137(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = __LIB_4__::func_878(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_372(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", __LIB_4__::func_877(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_369(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				case 3:
					iVar18 = 1;
					break;
				case 2:
					iVar18 = 2;
					break;
				case 1:
					iVar18 = 3;
					break;
				case 4:
					iVar18 = 4;
					break;
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				case 0:
					iVar19 = 1;
					break;
				case 4:
					iVar19 = 2;
					break;
				case 2:
					iVar19 = 3;
					break;
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		__LIB_6__::func_995(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = __LIB_4__::func_875(iVar9);
		if (!func_376(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (__LIB_0__::func_293(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar0)))
		{
			return 0;
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (__LIB_6__::func_361(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			case 2:
				iVar29 = 4;
				break;
			case 3:
				iVar29 = 5;
				break;
			case 4:
				iVar29 = 6;
				break;
			case 5:
				iVar29 = 11;
				break;
			case 6:
				iVar29 = 7;
				break;
			case 7:
				iVar29 = 10;
				break;
			case 8:
				iVar29 = 8;
				break;
			case 9:
				iVar29 = 12;
				break;
			case 10:
				iVar29 = 13;
				break;
			case 11:
				iVar29 = -1;
				break;
			case 12:
				iVar29 = 9;
				break;
			case 0:
				if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_362(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = __LIB_4__::func_873(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2), (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)), VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_360(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = __LIB_1__::func_562(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_360(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, __LIB_4__::func_872(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam1) > 1)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(iParam1), 39, iVar14, __LIB_4__::func_872(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_358(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_4__::func_871(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_4__::func_870(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_355(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_3__::func_591(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_4__::func_869(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_355(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_353(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_352(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_352(int iParam0, char* sParam1)//Position - 0x18F14
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_353(int iParam0, char* sParam1, int iParam2)//Position - 0x18F71
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == joaat("carnotfound"))
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar2), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_355(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x19389
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_358(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x19C45
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_360(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x19CD9
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_362(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x19E3D
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_369(int iParam0, char* sParam1, int iParam2)//Position - 0x1B97C
{
	char cVar0[64];
	int iVar1;
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = __LIB_4__::func_876(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar1))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iVar1, joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_371(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1BAF6
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0" /* GXT: Stock Wheel */, 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0" /* GXT: Stock Wheels */, 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_372(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1BBBE
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_376(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1C340
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !BitTest(Global_4539663[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_387(int iParam0, char* sParam1, int iParam2)//Position - 0x1E652
{
	char cVar0[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iParam2))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iParam2, joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_389(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1E74D
{
	char cVar0[64];
	char cVar1[64];
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 7)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 7)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&cVar1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_409(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1F77C
{
	bool bVar0;
	bool bVar1;
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_0__::func_983()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		__LIB_7__::func_368(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__::func_733();
	__LIB_0__::func_189();
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		}
		__LIB_3__::func_567(0, 0, 0, 1);
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (__LIB_3__::func_67(0, iParam5, 0))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_462(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (__LIB_3__::func_51())
					{
						if (uParam0->f_366 == 0)
						{
							if (Global_4539961 != uParam0->f_367)
							{
								uParam0->f_367 = Global_4539961;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4539961 != uParam0->f_368)
						{
							uParam0->f_368 = Global_4539961;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!BitTest(uParam0->f_373, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_3__::func_540()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = __LIB_13__::func_406(1, 0, iParam3, __LIB_2__::func_771(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									__LIB_1__::func_775(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = __LIB_12__::func_56(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									__LIB_7__::func_368(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_367 < 0)
							{
							}
							if (uParam0->f_367 < 0)
							{
								uParam0->f_375 = 0;
							}
							else
							{
								uParam0->f_375 = uParam0->f_1[uParam0->f_367];
							}
							uParam0->f_366 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							bVar1 = true;
						}
						else if (!BitTest(uParam0->f_373, 2) && !BitTest(uParam0->f_365, uParam0->f_368))
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_YES" /* GXT: Yes */, -1);
							__LIB_1__::func_791(177, "BB_NO" /* GXT: No */, -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							__LIB_1__::func_775(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = __LIB_12__::func_56(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								__LIB_7__::func_368(uParam0, iParam5, 0);
							}
							else
							{
								__LIB_7__::func_368(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_373), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 0);
				}
				if (!BitTest(uParam0->f_373, 1))
				{
					if ((((__LIB_3__::func_539() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (__LIB_3__::func_528() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
							__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							__LIB_7__::func_368(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_370), 7);
							return 1;
						}
						else if (!BitTest(uParam0->f_373, 2))
						{
							uParam0->f_366 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
							__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !__LIB_3__::func_539())
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 1);
				}
				if (!BitTest(uParam0->f_373, 2))
				{
					if (!BitTest(uParam0->f_373, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367 = (uParam0->f_367 - 1);
							}
							else
							{
								uParam0->f_368 = (uParam0->f_368 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 4);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::func_794(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 4);
					}
					if (!BitTest(uParam0->f_373, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367++;
							}
							else
							{
								uParam0->f_368++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 5);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::func_794(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 5);
					}
				}
				if (uParam0->f_366 == 0)
				{
					if (uParam0->f_367 >= uParam0->f_369)
					{
						uParam0->f_367 = 0;
					}
					if (uParam0->f_367 < 0)
					{
						uParam0->f_367 = (uParam0->f_369 - 1);
					}
				}
				else
				{
					if (uParam0->f_368 >= uParam0->f_369)
					{
						uParam0->f_368 = 0;
					}
					if (uParam0->f_368 < 0)
					{
						uParam0->f_368 = (uParam0->f_369 - 1);
					}
				}
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

void func_462(var uParam0, int iParam1, bool bParam2)//Position - 0x24E41
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	iVar0 = 0;
	__LIB_1__::func_602(0, 0);
	if (bParam2)
	{
		__LIB_8__::func_891(__LIB_7__::func_139(), 0);
	}
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_4__::func_846(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = __LIB_1__::func_819(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			__LIB_1__::func_767("DEL_VEH_SEL0" /* GXT: SELECT PROPERTY */);
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = __LIB_2__::func_771(iVar1, -1);
				if ((iVar3 > 0 && __LIB_3__::func_529(iVar3)) && __LIB_9__::func_293(iVar1))
				{
					if (!__LIB_3__::func_561(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, __LIB_3__::func_552(__LIB_1__::func_380(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, __LIB_3__::func_551(__LIB_1__::func_817(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, __LIB_3__::func_550(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, __LIB_3__::func_550(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, __LIB_3__::func_550(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, __LIB_3__::func_549(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, __LIB_3__::func_549(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, __LIB_3__::func_549(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME" /* GXT: Casino Penthouse Garage */, 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME" /* GXT: Arcade Garage */, 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR" /* GXT: Auto Shop Storage */, 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME" /* GXT: Agency Garage */, 16);
						}
						if (!__LIB_7__::func_137())
						{
							if (!__LIB_7__::func_136() && !__LIB_7__::func_135(iVar3))
							{
								__LIB_3__::func_572(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								__LIB_3__::func_572(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "PIM_DNAME" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
							__LIB_31__::func_852(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((__LIB_1__::func_360(5396, -1, 0) != 0 && __LIB_0__::func_253(15270, -1) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(0);
				iVar0++;
			}
			if (__LIB_1__::func_869(-1) && __LIB_8__::func_996(iParam1, 223))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(2);
				iVar0++;
			}
			if (__LIB_1__::func_868(-1) && __LIB_8__::func_996(iParam1, 278))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			__LIB_3__::func_781(uParam0->f_367, 1, 1);
			break;
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_1__::func_767("DEL_VEH_SEL3ac" /* GXT: Select Aircraft Position */);
			}
			else
			{
				__LIB_1__::func_767("DEL_VEH_SEL3" /* GXT: Select Vehicle Position */);
			}
			uParam0->f_365 = 0;
			iVar4 = __LIB_4__::func_982(uParam0->f_375);
			iVar5 = (10 + __LIB_4__::func_982(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = __LIB_1__::func_596(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_546(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (__LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!__LIB_1__::func_770(iVar8))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = __LIB_2__::func_771(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_2(uParam0->f_375, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && __LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!__LIB_6__::func_442(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_369 = iVar0;
			if (uParam0->f_368 >= uParam0->f_369)
			{
				uParam0->f_368 = 0;
			}
			__LIB_3__::func_781(uParam0->f_368, 1, 1);
			break;
	}
	__LIB_3__::func_564(-1);
	__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
	__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
}

int func_545(var uParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, int* iParam5, struct<246> Param6, var uParam7)//Position - 0x2B14D
{
	switch (iParam4)
	{
		case 0:
			return func_768(sParam1, iParam5, -1, 1);
			break;
		case 1:
			return func_637(sParam1, iParam2, uParam3);
			break;
		case 2:
			return func_717(uParam0, sParam1, uParam7, -1, 1);
			break;
		case 3:
			return func_747(uParam0, sParam1, -1, 1);
			break;
		case 4:
			return func_760(uParam0, sParam1, -1, 1);
			break;
		case 5:
			return func_588(sParam1, uParam3, Param6);
			break;
		case 6:
			if (func_586())
			{
				return func_546(sParam1, func_557(0));
			}
			else
			{
				MISC::CLEAR_BIT(iParam5, 19);
			}
			break;
	}
	return 0;
}

int func_546(char* sParam0, int iParam1)//Position - 0x2B20F
{
	int iVar0;
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_552(iVar0);
				break;
			case 1:
				iVar0 = __LIB_16__::func_235(PLAYER::PLAYER_ID(), 1);
				func_552(iVar0);
				break;
			case 2:
				iVar0 = __LIB_16__::func_235(PLAYER::PLAYER_ID(), 3);
				func_552(iVar0);
				break;
			case 3:
				iVar0 = __LIB_16__::func_235(PLAYER::PLAYER_ID(), 4);
				func_552(iVar0);
				break;
			case 4:
				iVar0 = __LIB_16__::func_235(PLAYER::PLAYER_ID(), 2);
				func_552(iVar0);
				break;
			case 5:
				iVar0 = __LIB_16__::func_235(PLAYER::PLAYER_ID(), 0);
				func_552(iVar0);
				break;
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_548(func_549(iParam1));
				break;
		}
		StringCopy(sParam0, func_547(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_547(int iParam0)//Position - 0x2B301
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140" /* GXT: Resupply the Bunker. */;
			break;
		case 1:
			return "AMDO_OBJ_136" /* GXT: Resupply the Weed Farm. */;
			break;
		case 2:
			return "AMDO_OBJ_138" /* GXT: Resupply the Meth Lab. */;
			break;
		case 3:
			return "AMDO_OBJ_135" /* GXT: Resupply the Cocaine Lockup. */;
			break;
		case 4:
			return "AMDO_OBJ_137" /* GXT: Resupply the Counterfeit Cash Factory. */;
			break;
		case 5:
			return "AMDO_OBJ_139" /* GXT: Resupply the Document Forgery Office. */;
			break;
		case 6:
			return "BYCB_FREEL" /* GXT: Film Reel */;
			break;
		case 7:
			return "BYCB_SASHDE" /* GXT: Rare Hide */;
			break;
		case 8:
			return "BYCB_MGUN" /* GXT: Golden Minigun */;
			break;
		case 9:
			return "BYCB_EGG" /* GXT: Ornamental Egg */;
			break;
		case 10:
			return "BYCB_DMND" /* GXT: Large Diamond */;
			break;
		case 11:
			return "BYCB_WATCH" /* GXT: Rare Pocket Watch */;
			break;
	}
	return "INVALID";
}

void func_548(int iParam0)//Position - 0x2B3D4
{
	if (0 == iParam0)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1966186 = iParam0;
}

int func_549(int iParam0)//Position - 0x2B3FE
{
	switch (iParam0)
	{
		case 6:
			return 5;
		case 7:
			return 4;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 3;
		case 11:
			return 6;
		default:
	}
	return 0;
}

void func_552(int iParam0)//Position - 0x2B5EE
{
	int iVar0;
	if (!__LIB_7__::func_932(iParam0))
	{
		return;
	}
	iVar0 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iParam0);
	MISC::SET_BIT(&Global_2787736, iParam0);
	Global_1640642[iParam0] = 0;
	Global_2787737[iParam0] = __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar0);
}

int func_557(int iParam0)//Position - 0x2B720
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 12)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_558(iVar0[iVar2], iParam0));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (iVar3 <= func_558(iVar0[iVar2], iParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_558(iVar0[iVar2], iParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_558(int iParam0, var uParam1)//Position - 0x2B7A8
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (__LIB_11__::func_600(PLAYER::PLAYER_ID()))
			{
				iVar0 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), 5);
				if (((__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar0) && __LIB_12__::func_955(PLAYER::PLAYER_ID(), 5)) && __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar0) < 80) || uParam1)
				{
					return Global_262145.f_26852 /* Tunable: -1776588845 */;
				}
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (__LIB_8__::func_841(PLAYER::PLAYER_ID(), func_579(iParam0)))
			{
				if (func_575(func_579(iParam0)) || uParam1)
				{
					return Global_262145.f_26852 /* Tunable: -1776588845 */;
				}
			}
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_561() || uParam1)
			{
				if (!func_559(iParam0) || uParam1)
				{
					return Global_262145.f_26852 /* Tunable: -1776588845 */;
				}
			}
			break;
	}
	return 0;
}

bool func_559(int iParam0)//Position - 0x2B8B9
{
	int iVar0;
	iVar0 = func_549(iParam0);
	return __LIB_19__::func_948(iVar0);
}

int func_561()//Position - 0x2B8FB
{
	if ((__LIB_8__::func_151(PLAYER::PLAYER_ID()) && __LIB_20__::func_19() < 6) && func_562())
	{
		return 1;
	}
	return 0;
}

int func_562()//Position - 0x2B927
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] != 0)
		{
			if (!__LIB_29__::func_893(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_575(int iParam0)//Position - 0x2BC98
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iVar0);
		if (iVar1 != 0)
		{
			if (__LIB_1__::func_794(iVar1) == iParam0)
			{
				if (((__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar1) && __LIB_12__::func_544(PLAYER::PLAYER_ID(), iVar0)) && __LIB_12__::func_955(PLAYER::PLAYER_ID(), iVar0)) && __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar1))
					{
					}
					if (!__LIB_12__::func_544(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (!__LIB_12__::func_955(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (__LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_579(int iParam0)//Position - 0x2BED2
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		default:
	}
	return -1;
}

int func_586()//Position - 0x2C073
{
	bool bVar0;
	int iVar1[5];
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_11__::func_600(PLAYER::PLAYER_ID()))
	{
		iVar3 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), 5);
		if ((__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar3) && __LIB_12__::func_955(PLAYER::PLAYER_ID(), 5)) && __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar3) < 80)
		{
			bVar0 = true;
		}
		if (!__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar3))
		{
		}
		if (!__LIB_12__::func_955(PLAYER::PLAYER_ID(), 5))
		{
		}
		if (__LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar3) >= 80)
		{
		}
	}
	if (__LIB_16__::func_227(PLAYER::PLAYER_ID()))
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			iVar5 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iVar4);
			if ((((iVar5 != 0 && __LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar5)) && __LIB_12__::func_544(PLAYER::PLAYER_ID(), iVar4)) && __LIB_12__::func_955(PLAYER::PLAYER_ID(), iVar4)) && __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar5) < 80)
			{
				iVar1[iVar4] = 1;
			}
			if (iVar5 == 0)
			{
			}
			else
			{
				if (!__LIB_13__::func_3(PLAYER::PLAYER_ID(), iVar5))
				{
				}
				if (!__LIB_12__::func_544(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (!__LIB_12__::func_955(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (__LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar5) >= 80)
				{
				}
			}
			iVar4++;
		}
	}
	if (func_561())
	{
		iVar6 = 6;
		while (iVar6 <= 11)
		{
			if (!func_559(iVar6))
			{
				bVar2 = true;
			}
			iVar6++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar7 = 0;
	while (iVar7 < 5)
	{
		if (iVar1[iVar7])
		{
			return 1;
		}
		iVar7++;
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_588(char* sParam0, var uParam1, struct<246> Param2)//Position - 0x2C23F
{
	if (!BitTest(uParam1->f_380, 0))
	{
		uParam1->f_381 = func_635();
		MISC::SET_BIT(&(uParam1->f_380), 0);
	}
	else if (uParam1->f_381 == -1)
	{
	}
	else
	{
		switch (uParam1->f_381)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_628(sParam0, uParam1->f_381, uParam1, Param2);
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_620(sParam0, uParam1, uParam1->f_381, 0);
			case 14:
				return func_620(sParam0, uParam1, uParam1->f_381, 1);
			case 15:
				if (__LIB_1__::func_136(PLAYER::PLAYER_ID()) >= 5)
				{
					func_590(__LIB_0__::getGlobal_1574918(), __LIB_1__::func_74(__LIB_1__::func_464(PLAYER::PLAYER_ID(), 1), 0));
					__LIB_16__::func_228();
					StringCopy(sParam0, "CAS_LW_ARMU" /* GXT: Full Armor */, 64);
					return 1;
					break;
				}
				MISC::CLEAR_BIT(&(uParam1->f_380), 0);
			}
		default:
	}
	return 0;
}

void func_590(int iParam0, int iParam1)//Position - 0x2C3AF
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (iParam1 >= __LIB_11__::func_613(238))
	{
		__LIB_24__::func_324(238, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(239))
	{
		__LIB_24__::func_324(239, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(240))
	{
		__LIB_24__::func_324(240, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(241))
	{
		__LIB_24__::func_324(241, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(242))
	{
		__LIB_24__::func_324(242, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(243))
	{
		__LIB_24__::func_324(243, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(244))
	{
		__LIB_24__::func_324(244, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(245))
	{
		__LIB_24__::func_324(245, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(246))
	{
		__LIB_24__::func_324(246, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(247))
	{
		__LIB_24__::func_324(247, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(156))
	{
		__LIB_24__::func_324(156, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(157))
	{
		__LIB_24__::func_324(157, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(158))
	{
		__LIB_24__::func_324(158, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(159))
	{
		__LIB_24__::func_324(159, 1, 0);
	}
	if (iParam1 >= __LIB_11__::func_613(160))
	{
		__LIB_24__::func_324(160, 1, 0);
	}
	iVar0 = 0;
	if (__LIB_19__::func_72(238))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(239))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(240))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(241))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(242))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(243))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(244))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(245))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(246))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(247))
	{
		iVar0++;
	}
	if (__LIB_19__::func_72(156))
	{
		__LIB_1__::func_354(1881, iVar0, iParam0, 1, 0);
		iVar1 = 1722125749;
		iVar2 = joaat("armor");
		iVar3 = joaat("event");
		iVar4 = joaat("get");
		__LIB_5__::func_941(1, iVar1, iVar2, iVar0, 0, iVar4, 0, iVar3, 0);
	}
	if (__LIB_19__::func_72(157))
	{
		__LIB_1__::func_354(1882, iVar0, iParam0, 1, 0);
		iVar5 = -583313972;
		iVar6 = joaat("armor");
		iVar7 = joaat("event");
		iVar8 = joaat("get");
		__LIB_5__::func_941(1, iVar5, iVar6, iVar0, 0, iVar8, 0, iVar7, 0);
	}
	if (__LIB_19__::func_72(158))
	{
		__LIB_1__::func_354(1883, iVar0, iParam0, 1, 0);
		iVar9 = 1174170707;
		iVar10 = joaat("armor");
		iVar11 = joaat("event");
		iVar12 = joaat("get");
		__LIB_5__::func_941(1, iVar9, iVar10, iVar0, 0, iVar12, 0, iVar11, 0);
	}
	if (__LIB_19__::func_72(159))
	{
		__LIB_1__::func_354(1884, iVar0, iParam0, 1, 0);
		iVar13 = 1006076045;
		iVar14 = joaat("armor");
		iVar15 = joaat("event");
		iVar16 = joaat("get");
		__LIB_5__::func_941(1, iVar13, iVar14, iVar0, 0, iVar16, 0, iVar15, 0);
	}
	if (__LIB_19__::func_72(160))
	{
		__LIB_1__::func_354(1885, iVar0, iParam0, 1, 0);
		iVar17 = -391796677;
		iVar18 = joaat("armor");
		iVar19 = joaat("event");
		iVar20 = joaat("get");
		__LIB_5__::func_941(1, iVar17, iVar18, iVar0, 0, iVar20, 0, iVar19, 0);
	}
}

int func_620(char* sParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2FC83
{
	if (__LIB_0__::func_112())
	{
		if (func_625(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_376 == 2)
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
			if (!bParam3)
			{
				func_624(iParam2);
				StringCopy(sParam0, func_622(func_623(iParam2)), 64);
			}
			else
			{
				func_621();
				StringCopy(sParam0, "CAS_LW_ALS" /* GXT: All Snacks Replenished */, 64);
			}
			__LIB_1__::func_34(__LIB_3__::func_534());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_624(iParam2);
			StringCopy(sParam0, func_622(func_623(iParam2)), 64);
		}
		else
		{
			func_621();
			StringCopy(sParam0, "CAS_LW_ALS" /* GXT: All Snacks Replenished */, 64);
		}
		return 1;
	}
	return 0;
}

void func_621()//Position - 0x2FD1E
{
	int iVar0;
	if (__LIB_1__::func_360(1276, -1, 0) < 30)
	{
		iVar0 = (20 - __LIB_1__::func_360(1276, -1, 0));
	}
	__LIB_1__::func_746(1276, iVar0, -1);
	__LIB_0__::func_186(16, 1, -1);
	__LIB_5__::func_941(1, -251807494, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
	if (__LIB_1__::func_360(1277, -1, 0) < 15)
	{
		iVar0 = (15 - __LIB_1__::func_360(1277, -1, 0));
	}
	__LIB_1__::func_746(1277, iVar0, -1);
	__LIB_0__::func_186(15, 1, -1);
	__LIB_5__::func_941(1, 1199442189, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
	if (__LIB_1__::func_360(1278, -1, 0) < 5)
	{
		iVar0 = (5 - __LIB_1__::func_360(1278, -1, 0));
	}
	__LIB_0__::func_186(14, 1, -1);
	__LIB_1__::func_746(1278, iVar0, -1);
	__LIB_5__::func_941(1, 1486811039, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
	if (__LIB_1__::func_360(1098, -1, 0) < 20)
	{
		iVar0 = (20 - __LIB_1__::func_360(1098, -1, 0));
	}
	__LIB_1__::func_746(1098, iVar0, -1);
	__LIB_5__::func_941(1, -181862273, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
	if (__LIB_1__::func_360(62, -1, 0) < 10)
	{
		iVar0 = (10 - __LIB_1__::func_360(62, -1, 0));
	}
	__LIB_1__::func_746(62, iVar0, -1);
	__LIB_5__::func_941(1, -39155154, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
	if (__LIB_1__::func_360(63, -1, 0) < 10)
	{
		iVar0 = (10 - __LIB_1__::func_360(63, -1, 0));
	}
	__LIB_1__::func_746(63, iVar0, -1);
	__LIB_5__::func_941(1, -1600998734, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
}

char* func_622(int iParam0)//Position - 0x2FEE4
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1" /* GXT: P's & Q's */;
		case 1:
			return "CAS_LW_S2" /* GXT: EgoChaser */;
		case 2:
			return "CAS_LW_S3" /* GXT: Meteorite */;
		case 4:
			return "CAS_LW_S4" /* GXT: Pack of Redwood */;
		case 0:
			return "CAS_LW_S5" /* GXT: eCola */;
		case 5:
			return "CAS_LW_S6" /* GXT: Pisswasser */;
		default:
	}
	return "INVALID";
}

int func_623(int iParam0)//Position - 0x2FF49
{
	switch (iParam0)
	{
		case 8:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		default:
	}
	return -1;
}

void func_624(int iParam0)//Position - 0x2FF95
{
	int iVar0;
	switch (func_623(iParam0))
	{
		case 3:
			if (__LIB_1__::func_360(1276, -1, 0) < 30)
			{
				iVar0 = (20 - __LIB_1__::func_360(1276, -1, 0));
			}
			__LIB_1__::func_746(1276, iVar0, -1);
			__LIB_0__::func_186(16, 1, -1);
			__LIB_5__::func_941(1, -251807494, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
		case 1:
			if (__LIB_1__::func_360(1277, -1, 0) < 15)
			{
				iVar0 = (15 - __LIB_1__::func_360(1277, -1, 0));
			}
			__LIB_1__::func_746(1277, iVar0, -1);
			__LIB_0__::func_186(15, 1, -1);
			__LIB_5__::func_941(1, 1199442189, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
		case 2:
			if (__LIB_1__::func_360(1278, -1, 0) < 5)
			{
				iVar0 = (5 - __LIB_1__::func_360(1278, -1, 0));
			}
			__LIB_0__::func_186(14, 1, -1);
			__LIB_1__::func_746(1278, iVar0, -1);
			__LIB_5__::func_941(1, 1486811039, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
		case 4:
			if (__LIB_1__::func_360(1098, -1, 0) < 20)
			{
				iVar0 = (20 - __LIB_1__::func_360(1098, -1, 0));
			}
			__LIB_1__::func_746(1098, iVar0, -1);
			__LIB_5__::func_941(1, -181862273, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
		case 0:
			if (__LIB_1__::func_360(62, -1, 0) < 10)
			{
				iVar0 = (10 - __LIB_1__::func_360(62, -1, 0));
			}
			__LIB_1__::func_746(62, iVar0, -1);
			__LIB_5__::func_941(1, -39155154, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
		case 5:
			if (__LIB_1__::func_360(63, -1, 0) < 10)
			{
				iVar0 = (10 - __LIB_1__::func_360(63, -1, 0));
			}
			__LIB_1__::func_746(63, iVar0, -1);
			__LIB_5__::func_941(1, -1600998734, joaat("snack"), iVar0, -84733279, joaat("get"), 0, -472400371, 0);
			break;
	}
}

int func_625(var uParam0, int iParam1, bool bParam2)//Position - 0x3019F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	char* sVar5;
	bVar0 = false;
	switch (uParam0->f_382)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
			{
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = __LIB_7__::func_255(func_623(iParam1));
			__LIB_9__::func_344(&sVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = __LIB_7__::func_255(3);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = __LIB_7__::func_255(1);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = __LIB_7__::func_255(2);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = __LIB_7__::func_255(4);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = __LIB_7__::func_255(0);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = __LIB_7__::func_255(5);
				__LIB_9__::func_344(&sVar5, cVar4, 3);
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (__LIB_12__::func_387())
					{
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar1, -iVar2);
						uParam0->f_382 = 1;
					}
					else
					{
						uParam0->f_382 = 3;
					}
				}
			}
			else if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_MART"), MISC::GET_HASH_KEY(&sVar5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 8, 0, 3))
			{
				if (__LIB_12__::func_387())
				{
					HUD::USE_FAKE_MP_CASH(true);
					HUD::CHANGE_FAKE_MP_CASH(-iVar1, -iVar2);
					uParam0->f_382 = 1;
				}
				else
				{
					uParam0->f_382 = 3;
				}
			}
			else
			{
				uParam0->f_382 = 3;
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					uParam0->f_382 = 2;
				}
				else
				{
					uParam0->f_382 = 3;
				}
			}
			break;
		case 2:
			uParam0->f_382 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_376 = 2;
			return 0;
			break;
		case 3:
			__LIB_1__::func_34(__LIB_3__::func_534());
			uParam0->f_382 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_376 = 0;
			return 0;
			break;
	}
	return 1;
	uParam0->f_382 = 0;
	uParam0->f_376 = -1;
	return 0;
}

int func_628(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244)//Position - 0x30526
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam1)
	{
		case 4:
			if (BitTest(Param3.f_4, 1))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 7:
			if (BitTest(Param3.f_4, 2))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 5:
			if (BitTest(Param3.f_4, 3))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 3:
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MG"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 6:
			if (BitTest(Param3.f_4, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 2:
			if (BitTest(Param3.f_4, 5))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 0:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), false))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		case 1:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), false) || __LIB_19__::func_89(joaat("WEAPON_GRENADE"), -1, 0))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADELAUNCHER"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
	}
	return 0;
}

char* func_634(int iParam0)//Position - 0x30F8F
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1" /* GXT: Full Minigun Ammo */;
		case 1:
			return "CAS_LW_AM2" /* GXT: Grenade Replenished */;
		case 2:
			return "CAS_LW_AM3" /* GXT: Full Sniper Ammo */;
		case 3:
			return "CAS_LW_AM4" /* GXT: Full MG Ammo */;
		case 4:
			return "CAS_LW_AM5" /* GXT: Full Pistol Ammo */;
		case 5:
			return "CAS_LW_AM6" /* GXT: Full Rifle Ammo */;
		case 6:
			return "CAS_LW_AM7" /* GXT: Full Shotgun Ammo */;
		case 7:
			return "CAS_LW_AM8" /* GXT: Full SMG Ammo */;
		default:
	}
	return "INVALID";
}

int func_635()//Position - 0x3100A
{
	int iVar0[16];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_636(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		if (iVar3 <= func_636(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_636(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_636(int iParam0)//Position - 0x3108C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 1:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 2:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 3:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 4:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 5:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 6:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 7:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 8:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 9:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 10:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 11:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 12:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 13:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 14:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 15:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		default:
	}
	return 0;
}

int func_637(char* sParam0, int* iParam1, var uParam2)//Position - 0x3119C
{
	int iVar0;
	if (!BitTest(uParam2->f_380, 0))
	{
		uParam2->f_384 = func_711(func_712());
		MISC::SET_BIT(&(uParam2->f_380), 0);
	}
	else if (!__LIB_1__::func_814(uParam2->f_384) || (__LIB_1__::func_587(uParam2->f_384) && !__LIB_9__::func_322(uParam2->f_384, -1)))
	{
		if (__LIB_1__::func_587(uParam2->f_384) && !__LIB_9__::func_322(uParam2->f_384, -1))
		{
		}
		iVar0 = __LIB_1__::func_186(uParam2->f_384);
		func_641(iVar0, &(uParam2->f_376), &(uParam2->f_383));
		if (uParam2->f_383 == 0)
		{
			StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam2->f_384), 64);
			return 1;
		}
	}
	else if (func_638(iParam1, uParam2->f_384))
	{
		return func_189(sParam0, iParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_638(int* iParam0, int iParam1)//Position - 0x3126B
{
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_799(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, 947.0432f, 116.779f, 79.4955f, 318.573f, false, false, false);
				if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
				}
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_FULLBEAM(*iParam0, false);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam0, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*iParam0, true);
				VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(*iParam0, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(*iParam0, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			else if (__LIB_0__::func_121(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(*iParam0, iParam1))
				{
					return 1;
				}
				else if (__LIB_2__::func_613(*iParam0, &uLocal_64))
				{
					VEHICLE::DELETE_VEHICLE(iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_641(int iParam0, var uParam1, var uParam2)//Position - 0x3140B
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	*uParam2 = -1;
	iVar0 = __LIB_15__::func_135(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (__LIB_20__::func_123(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!__LIB_0__::func_112())
	{
		__LIB_16__::func_238(iVar0);
		__LIB_4__::func_855();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_642(&sVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_SERVICE_UNLOCKED"), MISC::GET_HASH_KEY(&sVar1), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
				return 1;
			}
			sVar2 = "PO_COUPON_CAR_XMAS2017";
			if (!__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_SERVICE_UNLOCKED"), MISC::GET_HASH_KEY(sVar2), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, MISC::GET_HASH_KEY(&sVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
				return 1;
			}
			if (__LIB_12__::func_387())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
				return 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
					__LIB_16__::func_238(iVar0);
					__LIB_4__::func_855();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_642(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x31575
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = __LIB_15__::func_135(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 518)
	{
		StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, __LIB_3__::func_562(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == joaat("carnotfound"))
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = __LIB_1__::func_344(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if ((((__LIB_1__::func_182(iParam1) || __LIB_1__::func_181(iParam1)) || __LIB_1__::func_171(__LIB_1__::func_344(iParam1, -1)) != -1) || __LIB_7__::func_131(__LIB_1__::func_344(iParam1, -1)) != -1) || __LIB_1__::func_170(__LIB_1__::func_344(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				if ((__LIB_1__::func_182(iParam1) && __LIB_0__::func_116()) || (__LIB_1__::func_181(iParam1) && !__LIB_7__::func_367(iParam1)))
				{
					__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_711(int iParam0)//Position - 0x3A83A
{
	switch (iParam0)
	{
		case 0:
			return joaat("dodo");
		case 1:
			return joaat("turismor");
		case 2:
			return joaat("toros");
		case 3:
			return joaat("monroe");
		case 4:
			return joaat("velum");
		case 5:
			return joaat("furoregt");
		case 6:
			return joaat("infernus");
		case 7:
			return joaat("infernus2");
		case 8:
			return joaat("ruston");
		case 9:
			return joaat("marquis");
		case 10:
			return joaat("defiler");
		case 11:
			return joaat("pigalle");
		case 12:
			return joaat("massacro2");
		case 13:
			return joaat("tornado6");
		case 14:
			return joaat("tampa");
		case 15:
			return joaat("issi3");
		case 16:
			return joaat("jb700");
		case 17:
			return joaat("jester2");
		case 18:
			return joaat("kamacho");
		case 19:
			return joaat("fagaloa");
		case 20:
			return joaat("impaler");
		case 21:
			return joaat("dominator2");
		case 22:
			return joaat("mammatus");
		case 23:
			return joaat("jetmax");
		case 24:
			return joaat("stalion2");
		case 25:
			return joaat("massacro");
		case 26:
			return joaat("esskey");
		case 27:
			return joaat("cognoscenti");
		case 28:
			return joaat("xls");
		case 29:
			return joaat("superd");
		case 30:
			return joaat("stunt");
		case 31:
			return joaat("cuban800");
		case 32:
			return joaat("vacca");
		case 33:
			return joaat("jester");
		case 34:
			return joaat("gauntlet2");
		case 35:
			return joaat("exemplar");
		case 36:
			return joaat("slamvan2");
		case 37:
			return joaat("glendale");
		case 38:
			return joaat("squalo");
		case 39:
			return joaat("carbonizzare");
		case 40:
			return joaat("virgo");
		case 41:
			return joaat("cogcabrio");
		case 42:
			return joaat("dinghy3");
		case 43:
			return joaat("blade");
		case 44:
			return joaat("bullet");
		case 45:
			return joaat("brioso");
		case 46:
			return joaat("voltic");
		case 47:
			return joaat("voltic2");
		case 48:
			return joaat("alpha");
		case 49:
			return joaat("feltzer2");
		case 50:
			return joaat("cheburek");
		case 51:
			return joaat("rapidgt2");
		case 52:
			return joaat("rhapsody");
		case 53:
			return joaat("coquette");
		case 54:
			return joaat("coquette2");
		case 55:
			return joaat("rapidgt");
		case 56:
			return joaat("ninef2");
		case 57:
			return joaat("kuruma");
		case 58:
			return joaat("ninef");
		case 59:
			return joaat("schafter3");
		case 60:
			return joaat("surano");
		case 61:
			return joaat("banshee");
		case 62:
			return joaat("khamelion");
		case 63:
			return joaat("nightblade");
		case 64:
			return joaat("chino");
		case 65:
			return joaat("diablous");
		case 66:
			return joaat("virgo3");
		case 67:
			return joaat("fcr");
		case 68:
			return joaat("comet2");
		case 69:
			return joaat("zombiea");
		case 70:
			return joaat("felon2");
		case 71:
			return joaat("bf400");
		case 72:
			return joaat("felon");
		case 73:
			return joaat("baller2");
		case 74:
			return joaat("hotknife");
		case 75:
			return joaat("mesa3");
		case 76:
			return joaat("panto");
		case 77:
			return joaat("hakuchou");
		case 78:
			return joaat("blazer4");
		case 79:
			return joaat("f620");
		case 80:
			return joaat("oracle2");
		case 81:
			return joaat("bifta");
		case 82:
			return joaat("stalion");
		case 83:
			return joaat("blazer3");
		case 84:
			return joaat("manchez");
		case 85:
			return joaat("schafter2");
		case 86:
			return joaat("zion2");
		case 87:
			return joaat("dukes");
		case 88:
			return joaat("jackal");
		case 89:
			return joaat("serrano");
		case 90:
			return joaat("patriot");
		case 91:
			return joaat("fq2");
		case 92:
			return joaat("slamvan");
		case 93:
			return joaat("enduro");
		case 94:
			return joaat("faggio");
		case 95:
			return joaat("blista2");
		case 96:
			return joaat("carbonrs");
		case 97:
			return joaat("kalahari");
		case 98:
			return joaat("ratloader2");
		case 99:
			return joaat("faction");
		case 100:
			return joaat("buffalo");
		case 101:
			return joaat("dominator");
		case 102:
			return joaat("moonbeam");
		case 103:
			return joaat("gauntlet");
		case 104:
			return joaat("tornado");
		case 105:
			return joaat("buccaneer");
		case 106:
			return joaat("prairie");
		case 107:
			return joaat("penumbra");
		case 108:
			return joaat("fugitive");
		case 109:
			return joaat("issi2");
		case 110:
			return joaat("seashark");
		case 111:
			return joaat("intruder");
		case 112:
			return joaat("bagger");
		case 113:
			return joaat("bfinjection");
		case 114:
			return joaat("hexer");
		case 115:
			return joaat("washington");
		case 116:
			return joaat("bati");
		case 117:
			return joaat("bati2");
		case 118:
			return joaat("sabregt");
		case 119:
			return joaat("sultan");
		case 120:
			return joaat("nemesis");
		case 121:
			return joaat("double");
		case 122:
			return joaat("tribike");
		case 123:
			return joaat("tribike2");
		case 124:
			return joaat("tribike3");
		case 125:
			return joaat("ruffian");
		case 126:
			return joaat("ruiner");
		case 127:
			return joaat("picador");
		case 128:
			return joaat("akuma");
		case 129:
			return joaat("pcj");
		case 130:
			return joaat("primo");
		case 131:
			return joaat("futo");
		case 132:
			return joaat("blazer");
		case 133:
			return joaat("sanchez2");
		case 134:
			return joaat("sanchez");
		case 135:
			return joaat("voodoo2");
		case 136:
			return joaat("faggio2");
		case 137:
			return joaat("scorcher");
		case 138:
			return joaat("cruiser");
		case 139:
			return joaat("bmx");
		case 140:
			return joaat("minivan");
		default:
	}
	return 0;
}

int func_712()//Position - 0x3AFFE
{
	int iVar0[141];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 141)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_713(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 141)
	{
		if (iVar3 <= func_713(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_713(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_713(int iParam0)//Position - 0x3B080
{
	switch (iParam0)
	{
		case 0:
			if (func_714(joaat("dodo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 1:
		case 2:
		case 3:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
		case 4:
			if (func_714(joaat("velum"), 0))
			{
				return 0;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
		case 9:
			if (func_714(joaat("marquis"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
		case 22:
			if (func_714(joaat("mammatus"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 23:
			if (func_714(joaat("jetmax"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
		case 30:
			if (func_714(joaat("stunt"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 31:
			if (func_714(joaat("cuban800"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
		case 37:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
			break;
		case 38:
			if (func_714(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			break;
		case 39:
		case 40:
		case 41:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
			break;
		case 42:
			if (func_714(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			break;
		case 43:
		case 44:
		case 45:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
			break;
		case 46:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
			break;
		case 47:
			if (__LIB_9__::func_322(joaat("voltic2"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 48:
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
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
			break;
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
			break;
		case 110:
			if (func_714(joaat("seashark"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
			break;
		case 122:
			if (__LIB_9__::func_322(joaat("tribike"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 123:
			if (__LIB_9__::func_322(joaat("tribike2"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 124:
			if (__LIB_9__::func_322(joaat("tribike3"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
			break;
		case 137:
			if (__LIB_9__::func_322(joaat("scorcher"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 138:
			if (__LIB_9__::func_322(joaat("cruiser"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 139:
			if (__LIB_9__::func_322(joaat("bmx"), -1))
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			else
			{
				return 0;
			}
			break;
		case 140:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
			break;
	}
	return 0;
}

int func_714(int iParam0, int iParam1)//Position - 0x3B6B8
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_186(iParam0);
	iVar1 = __LIB_15__::func_135(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return __LIB_20__::func_123(iVar1);
	}
	return 0;
}

int func_715()//Position - 0x3B6E2
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_716(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (iVar3 <= func_716(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_716(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_716(int iParam0)//Position - 0x3B761
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26844 /* Tunable: -1183018516 */;
		case 1:
			return Global_262145.f_26845 /* Tunable: -1414018391 */;
		case 2:
			return Global_262145.f_26846 /* Tunable: -1861946920 */;
		case 3:
			return Global_262145.f_26847 /* Tunable: 1584556026 */;
		case 4:
			return Global_262145.f_26848 /* Tunable: -154701234 */;
		case 5:
			return Global_262145.f_26849 /* Tunable: -983519212 */;
		case 6:
			return Global_262145.f_26850 /* Tunable: -1972517 */;
		default:
	}
	return 0;
}

int func_717(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x3B7E1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_746(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_744();
		iVar0 = func_743(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_742(), 64);
		}
		if (__LIB_32__::func_365(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

char* func_742()//Position - 0x3C0EC
{
	return "CAS_LW_MCI1" /* GXT: ~1~ Chips */;
}

int func_743(int iParam0)//Position - 0x3C0F8
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27196 /* Tunable: -1684252796 */;
		case 1:
			return Global_262145.f_27197 /* Tunable: 217791040 */;
		case 2:
			return Global_262145.f_27194 /* Tunable: 2119131742 */;
		case 3:
			return Global_262145.f_27195 /* Tunable: 1332053131 */;
		case 4:
			return Global_262145.f_27192 /* Tunable: 526996617 */;
		case 5:
			return Global_262145.f_27193 /* Tunable: -235275861 */;
		default:
	}
	return 0;
}

int func_744()//Position - 0x3C168
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_745(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_745(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_745(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_745(int iParam0)//Position - 0x3C1E7
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
		case 1:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
		case 2:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 3:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 4:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
		case 5:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
		default:
	}
	return 0;
}

int func_746(int iParam0)//Position - 0x3C257
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		case 14:
			return 15000;
		case 15:
			return 20000;
		case 16:
			return 25000;
		default:
	}
	return 0;
}

int func_747(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3C297
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_759(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_757();
		iVar0 = func_756(iVar1);
	}
	if (iVar0 > 0)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_16__::func_241(joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"), iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_751(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			__LIB_2__::func_561(iVar0, 0);
			MONEY::NETWORK_EARN_CASINO_AWARD(iVar0, 707098906);
			if (bParam3)
			{
				StringCopy(sParam1, func_751(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

char* func_751()//Position - 0x3C3F2
{
	return "CAS_LW_MC1" /* GXT: $~1~ */;
}

int func_756(int iParam0)//Position - 0x3CE08
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27203 /* Tunable: 818696951 */;
		case 1:
			return Global_262145.f_27204 /* Tunable: 2111106283 */;
		case 2:
			return Global_262145.f_27205 /* Tunable: -1954117554 */;
		case 3:
			return Global_262145.f_27200 /* Tunable: 393704489 */;
		case 4:
			return Global_262145.f_27201 /* Tunable: -351200419 */;
		case 5:
			return Global_262145.f_27202 /* Tunable: -1529606428 */;
		case 6:
			return Global_262145.f_27198 /* Tunable: -2074621439 */;
		case 7:
			return Global_262145.f_27199 /* Tunable: 1881186707 */;
		default:
	}
	return 0;
}

int func_757()//Position - 0x3CE98
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_758(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar3 <= func_758(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_758(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_758(int iParam0)//Position - 0x3CF1A
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
		case 1:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
		case 2:
			return Global_262145.f_26853 /* Tunable: -1361004258 */;
		case 3:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 4:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 5:
			return Global_262145.f_26852 /* Tunable: -1776588845 */;
		case 6:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
		case 7:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
		default:
	}
	return 0;
}

int func_759(int iParam0)//Position - 0x3CFAA
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		case 10:
			return 30000;
		case 11:
			return 40000;
		case 12:
			return 50000;
		default:
	}
	return 0;
}

int func_760(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3CFEC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_767(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_765();
		iVar0 = func_764(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_763(), 64);
		}
		*uParam0 = iVar0;
		__LIB_1__::func_925();
		__LIB_5__::func_128(0, PLAYER::PLAYER_PED_ID(), func_761(iParam2), joaat("XPTYPE_AWARDS"), joaat("XPCATEGORY_RP_LUCKY_WHEEL"), iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_761(int iParam0)//Position - 0x3D078
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		case 5:
			return "LUCKY WHEEL RP5000";
		case 6:
			return "LUCKY WHEEL RP7500";
		case 7:
			return "LUCKY WHEEL RP10K";
		case 8:
			return "LUCKY WHEEL RP15K";
		default:
	}
	return "UNKNOWN";
}

char* func_763()//Position - 0x3D0D9
{
	return "CAS_LW_MRP1" /* GXT: ~1~ RP */;
}

int func_764(int iParam0)//Position - 0x3D0E5
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27190 /* Tunable: -1749455644 */;
		case 1:
			return Global_262145.f_27191 /* Tunable: -2111159866 */;
		case 2:
			return Global_262145.f_27188 /* Tunable: -838254143 */;
		case 3:
			return Global_262145.f_27189 /* Tunable: -2072662373 */;
		case 4:
			return Global_262145.f_27186 /* Tunable: -2029860543 */;
		case 5:
			return Global_262145.f_27187 /* Tunable: 1344199546 */;
		default:
	}
	return 0;
}

int func_765()//Position - 0x3D155
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_745(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_745(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_745(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_767(int iParam0)//Position - 0x3D244
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		case 5:
			return 5000;
		case 6:
			return 7500;
		case 7:
			return 10000;
		case 8:
			return 15000;
		default:
	}
	return 0;
}

int func_768(char* sParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x3D290
{
	int iVar0;
	int iVar1;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_773(bParam3);
		if (iVar0 != -1)
		{
			if (func_772())
			{
				__LIB_0__::func_186(func_770(MISC::GET_HASH_KEY(func_771(iVar0))), 1, -1);
				StringCopy(sParam0, func_771(iVar0), 64);
				return 1;
			}
			else if (!func_769(iVar0))
			{
				__LIB_0__::func_186(func_770(MISC::GET_HASH_KEY(func_771(iVar0))), 1, -1);
				StringCopy(sParam0, func_771(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_773(bParam3);
		if (iVar1 != -1)
		{
			if (func_772())
			{
				MISC::CLEAR_BIT(iParam1, 19);
				StringCopy(sParam0, func_771(iVar1), 64);
				return 0;
			}
			else if (!func_769(iVar1))
			{
				__LIB_0__::func_186(func_770(MISC::GET_HASH_KEY(func_771(iVar1))), 1, -1);
				StringCopy(sParam0, func_771(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_769(int iParam0)//Position - 0x3D385
{
	return __LIB_0__::func_137(func_770(MISC::GET_HASH_KEY(func_771(iParam0))), -1);
}

int func_770(int iParam0)//Position - 0x3D3A0
{
	switch (iParam0)
	{
		case joaat("CLO_H2F_O_S_16"):
			return 26970;
		case joaat("CLO_ARF_O_12"):
			return 26971;
		case joaat("CLO_IEF_O_2"):
			return 26972;
		case joaat("CLO_H2F_S_6_0"):
			return 26973;
		case joaat("CLO_BIF_O_11"):
			return 26974;
		case joaat("CLO_STF_O_5"):
			return 26975;
		case joaat("CLO_SMF_O_1"):
			return 26976;
		case joaat("CLO_STF_O_E_1"):
			return 26977;
		case joaat("CLO_STF_O_8"):
			return 26978;
		case joaat("CLO_HSTF_O_20"):
			return 26979;
		case joaat("CLO_HSTM_O_20"):
			return 26979;
		case joaat("CLO_H2F_S_4_0"):
			return 26980;
		case joaat("CLO_H2F_O_G_21"):
			return 26981;
		case joaat("CLO_GRF_O_1"):
			return 26982;
		case joaat("CLO_LXF_U_3_8"):
			return 26983;
		case joaat("CLO_H2F_S_9_0"):
			return 26984;
		case joaat("CLO_H2F_S_9_5"):
			return 26985;
		case joaat("CLO_HSTF_S_1_1"):
			return 26986;
		case joaat("CLO_IEF_O_11"):
			return 26987;
		case joaat("CLO_BIF_U_23_1"):
			return 26988;
		case joaat("CLO_BHF_U_11_17"):
			return 26989;
		case joaat("CLO_EXF_OB_14"):
			return 26990;
		case joaat("CLO_H2F_U_3_25"):
			return 26991;
		case joaat("CLO_BHF_U_6_1"):
			return 26992;
		case joaat("CLO_L2F_U_7_15"):
			return 26993;
		case joaat("CLO_BHF_U_14_1"):
			return 26994;
		case joaat("CLO_L2F_U_7_12"):
			return 26995;
		case joaat("CLO_L2F_U_7_11"):
			return 26996;
		case joaat("CLO_STF_U_7_4"):
			return 26997;
		case joaat("CLO_IEF_U_3_7"):
			return 26998;
		case joaat("CLO_L2F_U_7_1"):
			return 26999;
		case joaat("CLO_EXF_OA_0"):
			return 27000;
		case joaat("CLO_HSTM_O_G_3"):
			return 27001;
		case joaat("CLO_HSTF_O_G_3"):
			return 27001;
		case joaat("CLO_BHF_U_5_18"):
			return 27002;
		case joaat("CLO_BHF_U_5_20"):
			return 27003;
		case joaat("CLO_BHF_U_2_14"):
			return 27004;
		case joaat("CLO_STF_U_5_9"):
			return 27005;
		case joaat("CLO_BHF_U_5_3"):
			return 27006;
		case joaat("CLO_BHF_U_13_0"):
			return 27007;
		case joaat("CLO_STF_U_5_1"):
			return 27008;
		case joaat("CLO_BHF_U_4_2"):
			return 27009;
		case joaat("CLO_HSTF_O_J_2"):
			return 27010;
		case joaat("CLO_HSTM_O_J_2"):
			return 27010;
		case joaat("CLO_STF_U_5_6"):
			return 27011;
		case joaat("CLO_GRF_U_21_12"):
			return 27012;
		case joaat("CLO_BHF_U_4_5"):
			return 27013;
		case joaat("CLO_GRF_U_21_20"):
			return 27014;
		case joaat("CLO_BHF_U_7_1"):
			return 27015;
		case joaat("CLO_SMF_U_2_15"):
			return 27016;
		case joaat("CLO_IEF_U_14_4"):
			return 27017;
		case joaat("CLO_IEF_U_14_21"):
			return 27018;
		case joaat("CLO_IEF_U_14_9"):
			return 27019;
		case joaat("CLO_BHF_U_7_14"):
			return 27020;
		case joaat("CLO_BIF_U_31_1"):
			return 27021;
		case joaat("CLO_SMF_U_2_7"):
			return 27022;
		case joaat("CLO_BHF_U_7_7"):
			return 27023;
		case joaat("CLO_SMF_U_2_23"):
			return 27024;
		case joaat("CLO_STF_U_5_12"):
			return 27025;
		case joaat("CLO_SMF_U_2_19"):
			return 27026;
		case joaat("CLO_STF_U_6_18"):
			return 27027;
		case joaat("CLO_IEF_U_14_0"):
			return 27028;
		case joaat("CLO_EXF_EU_5_0"):
			return 27029;
		case joaat("CLO_IEF_U_14_7"):
			return 27030;
		case joaat("CLO_BHF_U_4_18"):
			return 27031;
		case joaat("CLO_BHF_U_0_17"):
			return 27032;
		case joaat("CLO_LXF_U_5_0"):
			return 27033;
		case joaat("CLO_IEF_U_4_8"):
			return 27034;
		case joaat("CLO_HSTF_O_L_0"):
			return 27035;
		case joaat("CLO_HSTM_O_L_0"):
			return 27035;
		case joaat("CLO_HSTF_S_0_0"):
			return 27036;
		case joaat("CLO_GRF_U_20_15"):
			return 27037;
		case joaat("CLO_BHF_U_0_2"):
			return 27038;
		case joaat("CLO_IEF_U_1_9"):
			return 27039;
		case joaat("CLO_LTSFU_0_0"):
			return 27040;
		case joaat("CLO_S2F_U_3_12"):
			return 27041;
		case joaat("CLO_IEF_U_4_5"):
			return 27042;
		case joaat("CLO_GRF_U_20_24"):
			return 27043;
		case joaat("CLO_SMF_U_3_8"):
			return 27044;
		case joaat("CLO_IEF_U_4_22"):
			return 27045;
		case joaat("CLO_GRF_U_19_16"):
			return 27046;
		case joaat("CLO_HSTF_U_0_3"):
			return 27047;
		case joaat("CLO_HSTF_U_16_5"):
			return 27048;
		case joaat("CLO_SMF_U_3_5"):
			return 27049;
		case joaat("CLO_SMF_U_3_6"):
			return 27050;
		case joaat("CLO_LXF_U_6_3"):
			return 27051;
		case joaat("CLO_S2F_D_7"):
			return 27052;
		case joaat("CLO_GRF_U_19_23"):
			return 27053;
		case joaat("CLO_GRF_U_0_13"):
			return 27054;
		case joaat("CLO_S2F_D_18"):
			return 27055;
		case joaat("CLO_EXF_EU_4_2"):
			return 27056;
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		case joaat("CLO_LXF_U_6_18"):
			return 27058;
		case joaat("CLO_IEF_U_7_5"):
			return 27059;
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		case joaat("CLO_BHF_U_16_1"):
			return 27061;
		case joaat("CLO_S1F_U_3_1"):
			return 27062;
		case joaat("CLO_IEF_U_7_14"):
			return 27063;
		case joaat("CLO_GRF_U_15_10"):
			return 27064;
		case joaat("CLO_GRF_U_2_6"):
			return 27065;
		case joaat("CLO_IEF_U_7_12"):
			return 27066;
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		case joaat("CLO_S1F_DEC_23"):
			return 27068;
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		case joaat("CLO_EXF_EU_9_5"):
			return 27073;
		case joaat("CLO_S2F_D_23"):
			return 27074;
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		case joaat("CLO_BIF_DECL_63"):
			return 27076;
		case joaat("CLO_AWF_DECL_23"):
			return 27077;
		case joaat("CLO_BIF_DECL_49"):
			return 27078;
		case joaat("CLO_HALF_D_10"):
			return 27079;
		case joaat("CLO_GRF_DECL_27"):
			return 27080;
		case joaat("CLO_LXF_DEC_35"):
			return 27081;
		case joaat("CLO_HST_F_A_0"):
			return 27082;
		case joaat("CLO_HST_F_A_9"):
			return 27083;
		case joaat("CLO_BHF_DECL_19"):
			return 27084;
		case joaat("CLO_INDF_HT_6_2"):
			return 27085;
		case joaat("CLO_EXF_DECL_3"):
			return 27086;
		case joaat("CLO_X4F_B_7_0"):
			return 27087;
		case joaat("CLO_X2F_B_2_0"):
			return 27088;
		case joaat("CLO_VWF_U_13_0"):
			return 27120;
		case joaat("CLO_VWF_U_13_1"):
			return 27121;
		case joaat("CLO_VWF_U_13_2"):
			return 27122;
		case joaat("CLO_VWF_U_13_3"):
			return 27123;
		case joaat("CLO_VWF_U_13_4"):
			return 27124;
		case joaat("CLO_VWF_U_13_5"):
			return 27125;
		case joaat("CLO_VWF_U_13_6"):
			return 27126;
		case joaat("CLO_VWF_U_18_5"):
			return 27127;
		case joaat("CLO_VWF_PH_0_0"):
			return 27128;
		case joaat("CLO_VWF_PH_0_1"):
			return 27129;
		case joaat("CLO_VWF_PH_0_2"):
			return 27130;
		case joaat("CLO_VWF_PH_0_3"):
			return 27131;
		case joaat("CLO_VWF_PH_0_4"):
			return 27132;
		case joaat("CLO_VWF_PH_0_5"):
			return 27133;
		case joaat("CLO_VWF_PH_0_6"):
			return 27134;
		case joaat("CLO_VWF_PH_0_7"):
			return 27135;
		case joaat("CLO_VWF_PH_0_8"):
			return 27136;
		case joaat("CLO_VWF_PH_0_9"):
			return 27137;
		case joaat("CLO_VWF_PH_0_10"):
			return 27138;
		case joaat("CLO_VWF_DECL_0"):
			return 27139;
		case joaat("CLO_VWF_DECL_1"):
			return 27140;
		case joaat("CLO_VWF_DECL_3"):
			return 27141;
		case joaat("CLO_VWF_DECL_5"):
			return 27142;
		case joaat("CLO_VWF_DECL_7"):
			return 27143;
		case joaat("CLO_VWF_DECL_8"):
			return 27144;
		case joaat("CLO_VWF_DECL_9"):
			return 27145;
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_H2M_O_S_16"):
			return 26970;
		case joaat("CLO_ARM_O_12"):
			return 26971;
		case joaat("CLO_IEM_O_1"):
			return 26972;
		case joaat("CLO_H2M_S_6_0"):
			return 26973;
		case joaat("CLO_BIM_O_11"):
			return 26974;
		case joaat("CLO_STM_O_5"):
			return 26975;
		case joaat("CLO_SMM_O_1"):
			return 26976;
		case joaat("CLO_STM_O_E_1"):
			return 26977;
		case joaat("CLO_STM_O_8"):
			return 26978;
		case joaat("CLO_H2M_S_4_0"):
			return 26980;
		case joaat("CLO_H2M_O_G_21"):
			return 26981;
		case joaat("CLO_GRM_O_1"):
			return 26982;
		case joaat("CLO_H2M_S_9_0"):
			return 26983;
		case joaat("CLO_LXM_U_0_7"):
			return 26984;
		case joaat("CLO_H2M_S_9_5"):
			return 26985;
		case joaat("CLO_HSTM_S_1_1"):
			return 26986;
		case joaat("CLO_IEM_O_11"):
			return 26987;
		case joaat("CLO_BIM_U_18_1"):
			return 26988;
		case joaat("CLO_BHM_U_11_17"):
			return 26989;
		case joaat("CLO_H2M_U_3_25"):
			return 26990;
		case joaat("CLO_BHM_U_6_1"):
			return 26991;
		case joaat("CLO_L2M_U_6_15"):
			return 26992;
		case joaat("CLO_BHM_U_14_1"):
			return 26993;
		case joaat("CLO_L2M_U_6_12"):
			return 26994;
		case joaat("CLO_L2M_U_6_11"):
			return 26995;
		case joaat("CLO_EXM_OB_14"):
			return 26997;
		case joaat("CLO_STM_U_7_4"):
			return 26998;
		case joaat("CLO_IEM_U_3_7"):
			return 26999;
		case joaat("CLO_L2M_U_6_1"):
			return 27000;
		case joaat("CLO_EXM_OA_0"):
			return 27014;
		case joaat("CLO_BHM_U_5_18"):
			return 27002;
		case joaat("CLO_BHM_U_5_20"):
			return 27003;
		case joaat("CLO_BHM_U_2_14"):
			return 27004;
		case joaat("CLO_STM_U_5_9"):
			return 27005;
		case joaat("CLO_BHM_U_5_3"):
			return 27006;
		case joaat("CLO_BHM_U_13_0"):
			return 27007;
		case joaat("CLO_STM_U_5_1"):
			return 27008;
		case joaat("CLO_BHM_U_4_2"):
			return 27009;
		case joaat("CLO_STM_U_5_6"):
			return 26996;
		case joaat("CLO_GRM_U_15_12"):
			return 27011;
		case joaat("CLO_BHM_U_4_5"):
			return 27012;
		case joaat("CLO_GRM_U_15_20"):
			return 27013;
		case joaat("CLO_BHM_U_7_1"):
			return 27015;
		case joaat("CLO_SMM_U_2_15"):
			return 27017;
		case joaat("CLO_IEM_U_17_4"):
			return 27018;
		case joaat("CLO_IEM_U_17_21"):
			return 27019;
		case joaat("CLO_IEM_U_17_9"):
			return 27020;
		case joaat("CLO_BHM_U_7_14"):
			return 27021;
		case joaat("CLO_BIM_U_26_1"):
			return 27022;
		case joaat("CLO_SMM_U_2_7"):
			return 27023;
		case joaat("CLO_BHM_U_7_7"):
			return 27024;
		case joaat("CLO_SMM_U_2_23"):
			return 27025;
		case joaat("CLO_STM_U_5_12"):
			return 27026;
		case joaat("CLO_SMM_U_2_19"):
			return 27027;
		case joaat("CLO_STM_U_6_18"):
			return 27028;
		case joaat("CLO_IEM_U_17_0"):
			return 27029;
		case joaat("CLO_EXM_EU_6_0"):
			return 27030;
		case joaat("CLO_IEM_U_17_7"):
			return 27031;
		case joaat("CLO_HSTM_S_0_0"):
			return 27032;
		case joaat("CLO_BHM_U_4_18"):
			return 27033;
		case joaat("CLO_BHM_U_0_17"):
			return 27034;
		case joaat("CLO_LXM_U_1_0"):
			return 27016;
		case joaat("CLO_IEM_U_4_8"):
			return 27036;
		case joaat("CLO_HSTM_U_15_5"):
			return 27037;
		case joaat("CLO_GRM_U_14_15"):
			return 27038;
		case joaat("CLO_BHM_U_0_2"):
			return 27039;
		case joaat("CLO_LTSMU_0_0"):
			return 27040;
		case joaat("CLO_IEM_U_18_9"):
			return 27041;
		case joaat("CLO_S2M_U_5_10"):
			return 27042;
		case joaat("CLO_IEM_U_4_5"):
			return 27043;
		case joaat("CLO_GRM_U_14_24"):
			return 27044;
		case joaat("CLO_SMM_U_3_8"):
			return 27045;
		case joaat("CLO_IEM_U_4_22"):
			return 27046;
		case joaat("CLO_GRM_U_13_16"):
			return 27047;
		case joaat("CLO_HSTM_U_0_3"):
			return 27048;
		case joaat("CLO_SMM_U_3_5"):
			return 27049;
		case joaat("CLO_SMM_U_3_6"):
			return 27050;
		case joaat("CLO_LXM_U_5_3"):
			return 27051;
		case joaat("CLO_S2M_D_16"):
			return 27052;
		case joaat("CLO_GRM_U_13_23"):
			return 27053;
		case joaat("CLO_GRM_U_0_13"):
			return 27054;
		case joaat("CLO_S2M_D_27"):
			return 27055;
		case joaat("CLO_EXM_EU_5_2"):
			return 27056;
		case joaat("CLO_HP_D_10"):
			return 27057;
		case joaat("CLO_LXM_U_5_17"):
			return 27058;
		case joaat("CLO_IEM_U_7_5"):
			return 27059;
		case joaat("CLO_IEM_U_7_23"):
			return 27060;
		case joaat("CLO_BIM_DECL_67"):
			return 27061;
		case joaat("CLO_BHM_U_16_1"):
			return 27062;
		case joaat("CLO_S1M_U_3_1"):
			return 27063;
		case joaat("CLO_SMM_U_7_10"):
			return 27064;
		case joaat("CLO_GRM_U_2_6"):
			return 27065;
		case joaat("CLO_IEM_U_7_19"):
			return 27066;
		case joaat("CLO_SMM_DECL_16"):
			return 27067;
		case joaat("CLO_S1M_DEC_25"):
			return 27068;
		case joaat("CLO_SMM_DECL_15"):
			return 27069;
		case joaat("CLO_BIM_DECL_2"):
			return 27070;
		case joaat("CLO_SMM_DECL_7"):
			return 27071;
		case joaat("CLO_HP_D_9"):
			return 27072;
		case joaat("CLO_EXM_EU_10_5"):
			return 27073;
		case joaat("CLO_S2M_D_4"):
			return 27074;
		case joaat("CLO_SMM_DECL_5"):
			return 27075;
		case joaat("CLO_BIM_DECL_63"):
			return 27076;
		case joaat("CLO_AWM_DECL_23"):
			return 27077;
		case joaat("CLO_BIM_DECL_49"):
			return 27078;
		case joaat("CLO_HALM_D_10"):
			return 27079;
		case joaat("CLO_GRM_DECL_27"):
			return 27080;
		case joaat("CLO_LXM_DEC_35"):
			return 27081;
		case joaat("CLO_HST_A_0"):
			return 27082;
		case joaat("CLO_EXM_DECL_3"):
			return 27083;
		case joaat("CLO_HST_A_9"):
			return 27084;
		case joaat("CLO_BHM_DECL_19"):
			return 27085;
		case joaat("CLO_INDM_HT_6_2"):
			return 27086;
		case joaat("CLO_X4M_B_7_0"):
			return 27087;
		case joaat("CLO_X2M_B_2_0"):
			return 27088;
		case joaat("CLO_VWM_U_15_0"):
			return 27120;
		case joaat("CLO_VWM_U_15_1"):
			return 27121;
		case joaat("CLO_VWM_U_15_2"):
			return 27122;
		case joaat("CLO_VWM_U_15_3"):
			return 27123;
		case joaat("CLO_VWM_U_15_4"):
			return 27124;
		case joaat("CLO_VWM_U_15_5"):
			return 27125;
		case joaat("CLO_VWM_U_15_6"):
			return 27126;
		case joaat("CLO_VWM_U_20_5"):
			return 27127;
		case joaat("CLO_VWM_PH_0_0"):
			return 27128;
		case joaat("CLO_VWM_PH_0_1"):
			return 27129;
		case joaat("CLO_VWM_PH_0_2"):
			return 27130;
		case joaat("CLO_VWM_PH_0_3"):
			return 27131;
		case joaat("CLO_VWM_PH_0_4"):
			return 27132;
		case joaat("CLO_VWM_PH_0_5"):
			return 27133;
		case joaat("CLO_VWM_PH_0_6"):
			return 27134;
		case joaat("CLO_VWM_PH_0_7"):
			return 27135;
		case joaat("CLO_VWM_PH_0_8"):
			return 27136;
		case joaat("CLO_VWM_PH_0_9"):
			return 27137;
		case joaat("CLO_VWM_PH_0_10"):
			return 27138;
		case joaat("CLO_VWM_DECL_0"):
			return 27139;
		case joaat("CLO_VWM_DECL_1"):
			return 27140;
		case joaat("CLO_VWM_DECL_3"):
			return 27141;
		case joaat("CLO_VWM_DECL_5"):
			return 27142;
		case joaat("CLO_VWM_DECL_7"):
			return 27143;
		case joaat("CLO_VWM_DECL_8"):
			return 27144;
		case joaat("CLO_VWM_DECL_9"):
			return 27145;
		default:
	}
	return 0;
}

char* func_771(int iParam0)//Position - 0x3E14F
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16" /* GXT: Tiger Scuba */;
		case 1:
			return "CLO_ARF_O_12" /* GXT: Sprunk Racing Suit */;
		case 2:
			return "CLO_IEF_O_2" /* GXT: Neon Bodysuit */;
		case 3:
			return "CLO_H2F_S_6_0" /* GXT: Extreme Strike Vest */;
		case 4:
			return "CLO_BIF_O_11" /* GXT: The Chimera */;
		case 5:
			return "CLO_STF_O_5" /* GXT: White Racing Suit */;
		case 6:
			return "CLO_SMF_O_1" /* GXT: The Reconnaissance */;
		case 7:
			return "CLO_STF_O_E_1" /* GXT: Blue Jock Cranley Suit */;
		case 8:
			return "CLO_STF_O_8" /* GXT: Italian Biker Suit */;
		case 9:
			return "CLO_HSTF_O_20" /* GXT: The Hazard */;
		case 10:
			return "CLO_H2F_S_4_0" /* GXT: Mid Strike Vest */;
		case 11:
			return "CLO_H2F_O_G_21" /* GXT: Splinter Gorka Suit */;
		case 12:
			return "CLO_GRF_O_1" /* GXT: The Gunfighter */;
		case 13:
			return "CLO_LXF_U_3_8" /* GXT: Hunter Leather Fur Jacket */;
		case 14:
			return "CLO_H2F_S_9_0" /* GXT: Black Plate Carrier */;
		case 15:
			return "CLO_H2F_S_9_5" /* GXT: Chamois Plate Carrier */;
		case 16:
			return "CLO_HSTF_S_1_1" /* GXT: Black Heavy Utility Vest */;
		case 17:
			return "CLO_IEF_O_11" /* GXT: The Puff */;
		case 18:
			return "CLO_BIF_U_23_1" /* GXT: Ox Blood Patched Cut */;
		case 19:
			return "CLO_BHF_U_11_17" /* GXT: Color Geo PRB Leather Open */;
		case 20:
			return "CLO_EXF_OB_14" /* GXT: The Buzz */;
		case 21:
			return "CLO_H2F_U_3_25" /* GXT: Blue Tactical Blouson */;
		case 22:
			return "CLO_BHF_U_6_1" /* GXT: Orange Big Cat Open */;
		case 23:
			return "CLO_L2F_U_7_15" /* GXT: Color Geo Sweater */;
		case 24:
			return "CLO_BHF_U_14_1" /* GXT: Vivid Gradient Puffer */;
		case 25:
			return "CLO_L2F_U_7_12" /* GXT: Color Diamond Sweater */;
		case 26:
			return "CLO_L2F_U_7_11" /* GXT: Classic SN Print Sweater */;
		case 27:
			return "CLO_STF_U_7_4" /* GXT: Pegassi Racing Jacket */;
		case 28:
			return "CLO_IEF_U_3_7" /* GXT: Woodland Camo Open Parka */;
		case 29:
			return "CLO_L2F_U_7_1" /* GXT: Le Chien Print Sweater */;
		case 30:
			return "CLO_EXF_OA_0" /* GXT: SecuroServ 1 */;
		case 31:
			return "CLO_HSTF_O_G_3" /* GXT: The Pincer */;
		case 32:
			return "CLO_BHF_U_5_18" /* GXT: Vibrant Gradient Shortsleeve */;
		case 33:
			return "CLO_BHF_U_5_20" /* GXT: Urban Gradient Shortsleeve */;
		case 34:
			return "CLO_BHF_U_2_14" /* GXT: White Chevron SC Track */;
		case 35:
			return "CLO_STF_U_5_9" /* GXT: Slalom Motocross */;
		case 36:
			return "CLO_BHF_U_5_3" /* GXT: Blue Savanna Shortsleeve */;
		case 37:
			return "CLO_BHF_U_13_0" /* GXT: Green Didier Sachs Open Field */;
		case 38:
			return "CLO_STF_U_5_1" /* GXT: Candy Motocross */;
		case 39:
			return "CLO_BHF_U_4_2" /* GXT: Tutti Frutti Pattern Sweater */;
		case 40:
			return "CLO_HSTF_O_J_2" /* GXT: The Vespucci */;
		case 41:
			return "CLO_STF_U_5_6" /* GXT: Power Motocross */;
		case 42:
			return "CLO_GRF_U_21_12" /* GXT: Contrast Camo Service Shirt */;
		case 43:
			return "CLO_BHF_U_4_5" /* GXT: Tropical Pattern Sweater */;
		case 44:
			return "CLO_GRF_U_21_20" /* GXT: Black Service Shirt */;
		case 45:
			return "CLO_BHF_U_7_1" /* GXT: Black Sports Blagueurs Hoodie */;
		case 46:
			return "CLO_SMF_U_2_15" /* GXT: OJ Shortsleeve */;
		case 47:
			return "CLO_IEF_U_14_4" /* GXT: Primary Squash Hoodie */;
		case 48:
			return "CLO_IEF_U_14_21" /* GXT: Purple Camo Bigness Hoodie */;
		case 49:
			return "CLO_IEF_U_14_9" /* GXT: Bold Abstract Bigness Hoodie */;
		case 50:
			return "CLO_BHF_U_7_14" /* GXT: Pink SN Hoodie */;
		case 51:
			return "CLO_BIF_U_31_1" /* GXT: Red Boating Blazer */;
		case 52:
			return "CLO_SMF_U_2_7" /* GXT: Multicolor Leaves Shortsleeve */;
		case 53:
			return "CLO_BHF_U_7_7" /* GXT: Neon Leaves Güffy Hoodie */;
		case 54:
			return "CLO_SMF_U_2_23" /* GXT: Black Dotted Shortsleeve */;
		case 55:
			return "CLO_STF_U_5_12" /* GXT: Drive Motocross */;
		case 56:
			return "CLO_SMF_U_2_19" /* GXT: Red Patterned Shortsleeve */;
		case 57:
			return "CLO_STF_U_6_18" /* GXT: Steel Horse Satin Jacket */;
		case 58:
			return "CLO_IEF_U_14_0" /* GXT: Orange Squash Hoodie */;
		case 59:
			return "CLO_EXF_EU_5_0" /* GXT: Regal Loose Shirt */;
		case 60:
			return "CLO_IEF_U_14_7" /* GXT: White Güffy Hoodie */;
		case 61:
			return "CLO_BHF_U_4_18" /* GXT: Red Floral Sweater */;
		case 62:
			return "CLO_BHF_U_0_17" /* GXT: Black & Red Bigness Jersey */;
		case 63:
			return "CLO_LXF_U_5_0" /* GXT: Gold Shiny Top */;
		case 64:
			return "CLO_IEF_U_4_8" /* GXT: Splat Squash Sweater */;
		case 65:
			return "CLO_HSTM_O_L_0" /* GXT: The Slick */;
		case 66:
			return "CLO_HSTF_S_0_0" /* GXT: Stealth Utility Vest */;
		case 67:
			return "CLO_GRF_U_20_15" /* GXT: Brushstroke Combat Shirt */;
		case 68:
			return "CLO_BHF_U_0_2" /* GXT: White & Red Bigness Jersey */;
		case 69:
			return "CLO_IEF_U_1_9" /* GXT: Lime Longline Hoodie */;
		case 70:
			return "CLO_LTSFU_0_0" /* GXT: Black Combat Top */;
		case 71:
			return "CLO_S2F_U_3_12" /* GXT: Red Bold Open Check */;
		case 72:
			return "CLO_IEF_U_4_5" /* GXT: Bold Camo Sand Castle Sweater */;
		case 73:
			return "CLO_GRF_U_20_24" /* GXT: Red Combat Shirt */;
		case 74:
			return "CLO_SMF_U_3_8" /* GXT: Red Mist XI Dark */;
		case 75:
			return "CLO_IEF_U_4_22" /* GXT: Cyan Manor Sweater */;
		case 76:
			return "CLO_GRF_U_19_16" /* GXT: Flecktarn Sleeveless Shirt */;
		case 77:
			return "CLO_HSTF_U_0_3" /* GXT: Forest Camo Battle Vest */;
		case 78:
			return "CLO_HSTF_U_16_5" /* GXT: Tan Hooded Jacket */;
		case 79:
			return "CLO_SMF_U_3_5" /* GXT: LS Jardineros Dark */;
		case 80:
			return "CLO_SMF_U_3_6" /* GXT: Liberty Cocks Dark */;
		case 81:
			return "CLO_LXF_U_6_3" /* GXT: Angelica T-Shirt */;
		case 82:
			return "CLO_S2F_D_7" /* GXT: Hinterland Ship Sweater */;
		case 83:
			return "CLO_GRF_U_19_23" /* GXT: Wine Sleeveless Shirt */;
		case 84:
			return "CLO_GRF_U_0_13" /* GXT: Cobble Sleeveless */;
		case 85:
			return "CLO_S2F_D_18" /* GXT: Black Dense Logo Sweater */;
		case 86:
			return "CLO_EXF_EU_4_2" /* GXT: White Flying Bravo Hoodie */;
		case 87:
			return "CLO_HP_F_D_10" /* GXT: Cat Top */;
		case 88:
			return "CLO_LXF_U_6_18" /* GXT: Color Geo T-Shirt */;
		case 89:
			return "CLO_IEF_U_7_5" /* GXT: Bold Abstract Bigness Torn Tee */;
		case 90:
			return "CLO_BIF_DECL_67" /* GXT: Black Baggy Hoodie */;
		case 91:
			return "CLO_BHF_U_16_1" /* GXT: White Manor Zigzag T-Shirt */;
		case 92:
			return "CLO_S1F_U_3_1" /* GXT: Double P Baseball Shirt */;
		case 93:
			return "CLO_IEF_U_7_14" /* GXT: Neon Leaves Güffy Torn Tee */;
		case 94:
			return "CLO_GRF_U_15_10" /* GXT: Aqua Camo Rolled Tee */;
		case 95:
			return "CLO_GRF_U_2_6" /* GXT: Dark Woodland T-Shirt */;
		case 96:
			return "CLO_IEF_U_7_12" /* GXT: White Bigness Torn Tee */;
		case 97:
			return "CLO_SMF_DECL_16" /* GXT: Black No Retreat Tank */;
		case 98:
			return "CLO_S1F_DEC_23" /* GXT: White Benny's T-Shirt */;
		case 99:
			return "CLO_SMF_DECL_15" /* GXT: Red Smuggler Tank */;
		case 100:
			return "CLO_BIF_DECL_2" /* GXT: Angels of Death Vivid Tee */;
		case 101:
			return "CLO_SMF_DECL_7" /* GXT: Blue Hit & Run Tank */;
		case 102:
			return "CLO_HP_F_D_9" /* GXT: Waves Top */;
		case 103:
			return "CLO_EXF_EU_9_5" /* GXT: Beige Turtleneck */;
		case 104:
			return "CLO_S2F_D_23" /* GXT: Hinterland Nugget T-Shirt */;
		case 105:
			return "CLO_SMF_DECL_5" /* GXT: Mustard Güffy Tank */;
		case 106:
			return "CLO_BIF_DECL_63" /* GXT: Nagasaki White and Red Hoodie */;
		case 107:
			return "CLO_AWF_DECL_23" /* GXT: Grotti Tee */;
		case 108:
			return "CLO_BIF_DECL_49" /* GXT: Western Logo Black Tee */;
		case 109:
			return "CLO_HALF_D_10" /* GXT: Butchery and other Hobbies */;
		case 110:
			return "CLO_GRF_DECL_27" /* GXT: Black Ammu-Nation Hoodie */;
		case 111:
			return "CLO_LXF_DEC_35" /* GXT: Fake Santo Capra T-Shirt */;
		case 112:
			return "CLO_HST_F_A_0" /* GXT: Death Defying Top */;
		case 113:
			return "CLO_HST_F_A_9" /* GXT: Showroom Top */;
		case 114:
			return "CLO_BHF_DECL_19" /* GXT: LS UR Tee */;
		case 115:
			return "CLO_INDF_HT_6_2" /* GXT: J Lager Beer Hat */;
		case 116:
			return "CLO_EXF_DECL_3" /* GXT: Bahama Mamas */;
		case 117:
			return "CLO_X4F_B_7_0" /* GXT: Unicorn */;
		case 118:
			return "CLO_X2F_B_2_0" /* GXT: Gingerbread */;
		case 119:
			return "CLO_VWF_U_13_0" /* GXT: White The Diamond Hoodie */;
		case 120:
			return "CLO_VWF_U_13_1" /* GXT: Black The Diamond Hoodie */;
		case 121:
			return "CLO_VWF_U_13_2" /* GXT: Ash The Diamond Hoodie */;
		case 122:
			return "CLO_VWF_U_13_3" /* GXT: Gray The Diamond Hoodie */;
		case 123:
			return "CLO_VWF_U_13_4" /* GXT: Red The Diamond Hoodie */;
		case 124:
			return "CLO_VWF_U_13_5" /* GXT: Orange The Diamond Hoodie */;
		case 125:
			return "CLO_VWF_U_13_6" /* GXT: Blue The Diamond Hoodie */;
		case 126:
			return "CLO_VWF_U_18_5" /* GXT: Black The Diamond Silk Robe */;
		case 127:
			return "CLO_VWF_PH_0_0" /* GXT: White The Diamond Cap */;
		case 128:
			return "CLO_VWF_PH_0_1" /* GXT: Black The Diamond Cap */;
		case 129:
			return "CLO_VWF_PH_0_2" /* GXT: White LS Diamond Cap */;
		case 130:
			return "CLO_VWF_PH_0_3" /* GXT: Black LS Diamond Cap */;
		case 131:
			return "CLO_VWF_PH_0_4" /* GXT: Red The Diamond Cap */;
		case 132:
			return "CLO_VWF_PH_0_5" /* GXT: Orange The Diamond Cap */;
		case 133:
			return "CLO_VWF_PH_0_6" /* GXT: Blue LS Diamond Cap */;
		case 134:
			return "CLO_VWF_PH_0_7" /* GXT: Green The Diamond Cap */;
		case 135:
			return "CLO_VWF_PH_0_8" /* GXT: Orange LS Diamond Cap */;
		case 136:
			return "CLO_VWF_PH_0_9" /* GXT: Purple The Diamond Cap */;
		case 137:
			return "CLO_VWF_PH_0_10" /* GXT: Pink LS Diamond Cap */;
		case 138:
			return "CLO_VWF_DECL_0" /* GXT: White The Diamond LS Tee */;
		case 139:
			return "CLO_VWF_DECL_1" /* GXT: Black The Diamond LS Tee */;
		case 140:
			return "CLO_VWF_DECL_3" /* GXT: Black The Diamond Resort LS Tee */;
		case 141:
			return "CLO_VWF_DECL_5" /* GXT: White The Diamond Resort Tee */;
		case 142:
			return "CLO_VWF_DECL_7" /* GXT: Black The Diamond Resort Tee */;
		case 143:
			return "CLO_VWF_DECL_8" /* GXT: Black LS Diamond Tee */;
		case 144:
			return "CLO_VWF_DECL_9" /* GXT: Black D Casino Tee */;
		default:
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16" /* GXT: Tiger Scuba */;
		case 146:
			return "CLO_ARM_O_12" /* GXT: Sprunk Racing Suit */;
		case 147:
			return "CLO_IEM_O_1" /* GXT: Neon Bodysuit */;
		case 148:
			return "CLO_H2M_S_6_0" /* GXT: Extreme Strike Vest */;
		case 149:
			return "CLO_BIM_O_11" /* GXT: The Chimera */;
		case 150:
			return "CLO_STM_O_5" /* GXT: White Racing Suit */;
		case 151:
			return "CLO_SMM_O_1" /* GXT: The Reconnaissance */;
		case 152:
			return "CLO_STM_O_E_1" /* GXT: Blue Jock Cranley Suit */;
		case 153:
			return "CLO_STM_O_8" /* GXT: Italian Biker Suit */;
		case 154:
			return "CLO_HSTM_O_20" /* GXT: The Hazard */;
		case 155:
			return "CLO_H2M_S_4_0" /* GXT: Mid Strike Vest */;
		case 156:
			return "CLO_H2M_O_G_21" /* GXT: Splinter Gorka Suit */;
		case 157:
			return "CLO_GRM_O_1" /* GXT: The Gunfighter */;
		case 158:
			return "CLO_H2M_S_9_0" /* GXT: Black Plate Carrier */;
		case 159:
			return "CLO_LXM_U_0_7" /* GXT: Hunter Leather Fur Jacket */;
		case 160:
			return "CLO_H2M_S_9_5" /* GXT: Chamois Plate Carrier */;
		case 161:
			return "CLO_HSTM_S_1_1" /* GXT: Black Heavy Utility Vest */;
		case 162:
			return "CLO_IEM_O_11" /* GXT: The Puff */;
		case 163:
			return "CLO_BIM_U_18_1" /* GXT: Ox Blood Patched Cut */;
		case 164:
			return "CLO_BHM_U_11_17" /* GXT: Color Geo PRB Leather Open */;
		case 165:
			return "CLO_H2M_U_3_25" /* GXT: Blue Tactical Blouson */;
		case 166:
			return "CLO_BHM_U_6_1" /* GXT: Orange Big Cat Open */;
		case 167:
			return "CLO_L2M_U_6_15" /* GXT: Color Geo Sweater */;
		case 168:
			return "CLO_BHM_U_14_1" /* GXT: Vivid Gradient Puffer */;
		case 169:
			return "CLO_L2M_U_6_12" /* GXT: Color Diamond Sweater */;
		case 170:
			return "CLO_L2M_U_6_11" /* GXT: Classic SN Print Sweater */;
		case 171:
			return "CLO_HSTM_O_J_2" /* GXT: The Vespucci */;
		case 172:
			return "CLO_EXM_OB_14" /* GXT: The Buzz */;
		case 173:
			return "CLO_STM_U_7_4" /* GXT: Pegassi Racing Jacket */;
		case 174:
			return "CLO_IEM_U_3_7" /* GXT: Woodland Camo Open Parka */;
		case 175:
			return "CLO_L2M_U_6_1" /* GXT: Le Chien Print Sweater */;
		case 176:
			return "CLO_EXM_OA_0" /* GXT: SecuroServ 1 */;
		case 177:
			return "CLO_BHM_U_5_18" /* GXT: Vibrant Gradient Shortsleeve */;
		case 178:
			return "CLO_BHM_U_5_20" /* GXT: Urban Gradient Shortsleeve */;
		case 179:
			return "CLO_BHM_U_2_14" /* GXT: White Chevron SC Track */;
		case 180:
			return "CLO_STM_U_5_9" /* GXT: Slalom Motocross */;
		case 181:
			return "CLO_BHM_U_5_3" /* GXT: Blue Savanna Shortsleeve */;
		case 182:
			return "CLO_BHM_U_13_0" /* GXT: Green Didier Sachs Open Field */;
		case 183:
			return "CLO_STM_U_5_1" /* GXT: Candy Motocross */;
		case 184:
			return "CLO_BHM_U_4_2" /* GXT: Tutti Frutti Pattern Sweater */;
		case 185:
			return "CLO_STM_U_5_6" /* GXT: Power Motocross */;
		case 186:
			return "CLO_GRM_U_15_12" /* GXT: Contrast Camo Service Shirt */;
		case 187:
			return "CLO_BHM_U_4_5" /* GXT: Tropical Pattern Sweater */;
		case 188:
			return "CLO_GRM_U_15_20" /* GXT: Black Service Shirt */;
		case 189:
			return "CLO_HSTM_O_G_3" /* GXT: The Pincer */;
		case 190:
			return "CLO_BHM_U_7_1" /* GXT: Black Sports Blagueurs Hoodie */;
		case 191:
			return "CLO_HSTM_O_L_0" /* GXT: The Slick */;
		case 192:
			return "CLO_SMM_U_2_15" /* GXT: OJ Shortsleeve */;
		case 193:
			return "CLO_IEM_U_17_4" /* GXT: Primary Squash Hoodie */;
		case 194:
			return "CLO_IEM_U_17_21" /* GXT: Purple Camo Bigness Hoodie */;
		case 195:
			return "CLO_IEM_U_17_9" /* GXT: Bold Abstract Bigness Hoodie */;
		case 196:
			return "CLO_BHM_U_7_14" /* GXT: Pink SN Hoodie */;
		case 197:
			return "CLO_BIM_U_26_1" /* GXT: Red Boating Blazer */;
		case 198:
			return "CLO_SMM_U_2_7" /* GXT: Multicolor Leaves Shortsleeve */;
		case 199:
			return "CLO_BHM_U_7_7" /* GXT: Neon Leaves Güffy Hoodie */;
		case 200:
			return "CLO_SMM_U_2_23" /* GXT: Black Dotted Shortsleeve */;
		case 201:
			return "CLO_STM_U_5_12" /* GXT: Drive Motocross */;
		case 202:
			return "CLO_SMM_U_2_19" /* GXT: Red Patterned Shortsleeve */;
		case 203:
			return "CLO_STM_U_6_18" /* GXT: Steel Horse Satin Jacket */;
		case 204:
			return "CLO_IEM_U_17_0" /* GXT: Orange Squash Hoodie */;
		case 205:
			return "CLO_EXM_EU_6_0" /* GXT: Regal Loose Shirt */;
		case 206:
			return "CLO_IEM_U_17_7" /* GXT: White Güffy Hoodie */;
		case 207:
			return "CLO_HSTM_S_0_0" /* GXT: Stealth Utility Vest */;
		case 208:
			return "CLO_BHM_U_4_18" /* GXT: Red Floral Sweater */;
		case 209:
			return "CLO_BHM_U_0_17" /* GXT: Black & Red Bigness Jersey */;
		case 210:
			return "CLO_LXM_U_1_0" /* GXT: Gold Shiny T-Shirt */;
		case 211:
			return "CLO_IEM_U_4_8" /* GXT: Splat Squash Sweater */;
		case 212:
			return "CLO_HSTM_U_15_5" /* GXT: Tan Hooded Jacket */;
		case 213:
			return "CLO_GRM_U_14_15" /* GXT: Brushstroke Combat Shirt */;
		case 214:
			return "CLO_BHM_U_0_2" /* GXT: White & Red Bigness Jersey */;
		case 215:
			return "CLO_LTSMU_0_0" /* GXT: Black Combat Top */;
		case 216:
			return "CLO_IEM_U_18_9" /* GXT: Lime Longline Hoodie */;
		case 217:
			return "CLO_S2M_U_5_10" /* GXT: Red Bold Check */;
		case 218:
			return "CLO_IEM_U_4_5" /* GXT: Bold Camo Sand Castle Sweater */;
		case 219:
			return "CLO_GRM_U_14_24" /* GXT: Red Combat Shirt */;
		case 220:
			return "CLO_SMM_U_3_8" /* GXT: Red Mist XI Dark */;
		case 221:
			return "CLO_IEM_U_4_22" /* GXT: Cyan Manor Sweater */;
		case 222:
			return "CLO_GRM_U_13_16" /* GXT: Flecktarn Sleeveless Shirt */;
		case 223:
			return "CLO_HSTM_U_0_3" /* GXT: Forest Camo Battle Vest */;
		case 224:
			return "CLO_SMM_U_3_5" /* GXT: LS Jardineros Dark */;
		case 225:
			return "CLO_SMM_U_3_6" /* GXT: Liberty Cocks Dark */;
		case 226:
			return "CLO_LXM_U_5_3" /* GXT: Angelica T-Shirt */;
		case 227:
			return "CLO_S2M_D_16" /* GXT: Hinterland Ship Sweater */;
		case 228:
			return "CLO_GRM_U_13_23" /* GXT: Wine Sleeveless Shirt */;
		case 229:
			return "CLO_GRM_U_0_13" /* GXT: Cobble Sleeveless */;
		case 230:
			return "CLO_S2M_D_27" /* GXT: Black Dense Logo Sweater */;
		case 231:
			return "CLO_EXM_EU_5_2" /* GXT: White Flying Bravo Hoodie */;
		case 232:
			return "CLO_HP_D_10" /* GXT: Cat T-Shirt */;
		case 233:
			return "CLO_LXM_U_5_17" /* GXT: Color Geo T-Shirt */;
		case 234:
			return "CLO_IEM_U_7_5" /* GXT: Bold Abstract Bigness T-Shirt */;
		case 235:
			return "CLO_IEM_U_7_23" /* GXT: Neon Leaves Güffy T-Shirt */;
		case 236:
			return "CLO_BIM_DECL_67" /* GXT: Black Baggy Hoodie */;
		case 237:
			return "CLO_BHM_U_16_1" /* GXT: White Manor Zigzag T-Shirt */;
		case 238:
			return "CLO_S1M_U_3_1" /* GXT: Double P Baseball Shirt */;
		case 239:
			return "CLO_SMM_U_7_10" /* GXT: Aqua Camo Rolled Tee */;
		case 240:
			return "CLO_GRM_U_2_6" /* GXT: Dark Woodland T-Shirt */;
		case 241:
			return "CLO_IEM_U_7_19" /* GXT: White Bigness T-Shirt */;
		case 242:
			return "CLO_SMM_DECL_16" /* GXT: Black No Retreat Tank */;
		case 243:
			return "CLO_S1M_DEC_25" /* GXT: White Benny's T-Shirt */;
		case 244:
			return "CLO_SMM_DECL_15" /* GXT: Red Smuggler Tank */;
		case 245:
			return "CLO_BIM_DECL_2" /* GXT: Angels of Death Vivid Tee */;
		case 246:
			return "CLO_SMM_DECL_7" /* GXT: Blue Hit & Run Tank */;
		case 247:
			return "CLO_HP_D_9" /* GXT: Waves T-Shirt */;
		case 248:
			return "CLO_EXM_EU_10_5" /* GXT: Beige Turtleneck */;
		case 249:
			return "CLO_S2M_D_4" /* GXT: Hinterland Nugget T-Shirt */;
		case 250:
			return "CLO_SMM_DECL_5" /* GXT: Mustard Güffy Tank */;
		case 251:
			return "CLO_BIM_DECL_63" /* GXT: Nagasaki White and Red Hoodie */;
		case 252:
			return "CLO_AWM_DECL_23" /* GXT: Grotti Tee */;
		case 253:
			return "CLO_BIM_DECL_49" /* GXT: Western Logo Black Tee */;
		case 254:
			return "CLO_HALM_D_10" /* GXT: Butchery and other Hobbies */;
		case 255:
			return "CLO_GRM_DECL_27" /* GXT: Black Ammu-Nation Hoodie */;
		case 256:
			return "CLO_LXM_DEC_35" /* GXT: Fake Santo Capra T-Shirt */;
		case 257:
			return "CLO_HST_A_0" /* GXT: Death Defying T-Shirt */;
		case 258:
			return "CLO_EXM_DECL_3" /* GXT: Bahama Mamas */;
		case 259:
			return "CLO_HST_A_9" /* GXT: Showroom T-Shirt */;
		case 260:
			return "CLO_BHM_DECL_19" /* GXT: LS UR Tee */;
		case 261:
			return "CLO_INDM_HT_6_2" /* GXT: J Lager Beer Hat */;
		case 262:
			return "CLO_X4M_B_7_0" /* GXT: Unicorn */;
		case 263:
			return "CLO_X2M_B_2_0" /* GXT: Gingerbread */;
		case 264:
			return "CLO_VWM_U_15_0" /* GXT: White The Diamond Hoodie */;
		case 265:
			return "CLO_VWM_U_15_1" /* GXT: Black The Diamond Hoodie */;
		case 266:
			return "CLO_VWM_U_15_2" /* GXT: Ash The Diamond Hoodie */;
		case 267:
			return "CLO_VWM_U_15_3" /* GXT: Gray The Diamond Hoodie */;
		case 268:
			return "CLO_VWM_U_15_4" /* GXT: Red The Diamond Hoodie */;
		case 269:
			return "CLO_VWM_U_15_5" /* GXT: Orange The Diamond Hoodie */;
		case 270:
			return "CLO_VWM_U_15_6" /* GXT: Blue The Diamond Hoodie */;
		case 271:
			return "CLO_VWM_U_20_5" /* GXT: Black The Diamond Silk Robe */;
		case 272:
			return "CLO_VWM_PH_0_0" /* GXT: White The Diamond Cap */;
		case 273:
			return "CLO_VWM_PH_0_1" /* GXT: Black The Diamond Cap */;
		case 274:
			return "CLO_VWM_PH_0_2" /* GXT: White LS Diamond Cap */;
		case 275:
			return "CLO_VWM_PH_0_3" /* GXT: Black LS Diamond Cap */;
		case 276:
			return "CLO_VWM_PH_0_4" /* GXT: Red The Diamond Cap */;
		case 277:
			return "CLO_VWM_PH_0_5" /* GXT: Orange The Diamond Cap */;
		case 278:
			return "CLO_VWM_PH_0_6" /* GXT: Blue LS Diamond Cap */;
		case 279:
			return "CLO_VWM_PH_0_7" /* GXT: Green The Diamond Cap */;
		case 280:
			return "CLO_VWM_PH_0_8" /* GXT: Orange LS Diamond Cap */;
		case 281:
			return "CLO_VWM_PH_0_9" /* GXT: Purple The Diamond Cap */;
		case 282:
			return "CLO_VWM_PH_0_10" /* GXT: Pink LS Diamond Cap */;
		case 283:
			return "CLO_VWM_DECL_0" /* GXT: White The Diamond LS Tee */;
		case 284:
			return "CLO_VWM_DECL_1" /* GXT: Black The Diamond LS Tee */;
		case 285:
			return "CLO_VWM_DECL_3" /* GXT: Black The Diamond Resort LS Tee */;
		case 286:
			return "CLO_VWM_DECL_5" /* GXT: White The Diamond Resort Tee */;
		case 287:
			return "CLO_VWM_DECL_7" /* GXT: Black The Diamond Resort Tee */;
		case 288:
			return "CLO_VWM_DECL_8" /* GXT: Black LS Diamond Tee */;
		case 289:
			return "CLO_VWM_DECL_9" /* GXT: Black D Casino Tee */;
		default:
	}
	return "LRCLOTHES_INVALID";
}

int func_772()//Position - 0x3F023
{
	int iVar0;
	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!__LIB_0__::func_137(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!__LIB_0__::func_137(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_773(bool bParam0)//Position - 0x3F076
{
	int iVar0[145];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar3 = iVar2 + 145;
		}
		iVar0[iVar2] = iVar3;
		iVar1 = (iVar1 + func_774(iVar0[iVar2], bParam0));
		iVar2++;
	}
	iVar4 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (iVar4 <= func_774(iVar0[iVar2], bParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar4 = (iVar4 - func_774(iVar0[iVar2], bParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_774(int iParam0, bool bParam1)//Position - 0x3F116
{
	switch (iParam0)
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
		case 10:
		case 11:
		case 12:
		case 14:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
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
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 191:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 207:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 208:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852 /* Tunable: -1776588845 */;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853 /* Tunable: -1361004258 */;
			}
			break;
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851 /* Tunable: -1192324278 */;
			}
			break;
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_26851 /* Tunable: -1192324278 */;
			break;
	}
	return 0;
}

int func_775(int iParam0)//Position - 0x3F9BB
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 8:
			return 1;
		case 12:
			return 2;
		case 16:
			return 3;
		case 1:
			return 4;
		case 5:
			return 5;
		case 9:
			return 6;
		case 13:
			return 7;
		case 17:
			return 8;
		case 2:
			return 9;
		case 6:
			return 10;
		case 14:
			return 11;
		case 19:
			return 12;
		case 3:
			return 13;
		case 7:
			return 14;
		case 10:
			return 15;
		case 15:
			return 16;
		case 11:
			return 17;
		case 18:
			return 18;
		case 4:
			return 19;
		default:
	}
	return -1;
}

void func_776()//Position - 0x3FA9F
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(func_777(PLAYER::PLAYER_ID())))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(func_777(PLAYER::PLAYER_ID()));
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(func_777(PLAYER::PLAYER_ID()));
		func_99(-1);
	}
}

int func_777(int iParam0)//Position - 0x3FAD3
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/].f_2;
}

int func_779()//Position - 0x3FB81
{
	int iVar0;
	int iVar1;
	iVar0 = 12;
	iVar1 = func_807(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		case 18:
			iVar0 = 13;
			break;
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_780(bool bParam0)//Position - 0x3FBD3
{
	func_791(bParam0);
	func_782(bParam0);
	func_781();
}

void func_781()//Position - 0x3FBEB
{
	if (Local_112.f_45 != 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, Local_112.f_18, 0f, 2, true);
		}
	}
}

void func_782(bool bParam0)//Position - 0x3FC1B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!func_42(3))
	{
		Local_112.f_25 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), Local_112.f_16);
		Local_112.f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), func_790(&(Local_112.f_16), bParam0));
		func_41(3);
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_25));
	fVar1 = (1f - ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(Local_112.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = SYSTEM::POW((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_112.f_18 = __LIB_0__::func_504(Local_112.f_19, Local_112.f_20, fVar3);
	Local_112.f_21 = __LIB_0__::func_504(Local_112.f_19, Local_112.f_20, fVar3);
	if (Local_112.f_18 > IntToFloat((360 * Local_112.f_9)))
	{
		Local_112.f_9++;
	}
	if (Local_112.f_21 > (IntToFloat(Local_112.f_13 + 1) * SYSTEM::TO_FLOAT(18)))
	{
		Local_112.f_13++;
	}
	Local_112.f_14 = (Local_112.f_13 % 20);
	if (!func_42(17) && PLAYER::PLAYER_ID() == Local_110.f_0)
	{
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_26))
		{
			func_809(func_779(), 0, 0, 1, 0);
			func_41(17);
		}
	}
	if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_25))
	{
		func_788();
		Local_112.f_17 = 0;
		func_86();
		if (PLAYER::PLAYER_ID() == Local_110.f_0)
		{
			func_783();
			func_78(10);
		}
		else
		{
			func_78(17);
		}
	}
}

void func_783()//Position - 0x3FD97
{
	char* sVar0;
	float fVar1;
	func_787(&sVar0, &fVar1);
	func_786(fVar1);
	func_784(__LIB_16__::func_226(&sVar0));
}

void func_784(char* sParam0)//Position - 0x3FDB7
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_483))
	{
		Local_112.f_483 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_483, sParam0, func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
	}
}

Vector3 func_785()//Position - 0x3FDED
{
	return 1111.0519f, 229.8579f, -49.133f;
}

void func_786(float fParam0)//Position - 0x3FE04
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_482))
	{
		Local_112.f_482 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_482, "Win", func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_482, "winSize", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_482, "winSize", fParam0);
	}
}

void func_787(char* sParam0, var uParam1)//Position - 0x3FE5F
{
	int iVar0;
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_788()//Position - 0x3FF50
{
	Local_112.f_18 = Local_112.f_20;
	Local_112.f_19 = Local_112.f_18;
	Local_112.f_10 = func_807(PLAYER::PLAYER_ID());
	func_821(Local_112.f_10, 0);
	Local_112.f_14 = func_807(PLAYER::PLAYER_ID());
	Local_112.f_7 = Local_112.f_14;
	func_77(3);
	Local_112.f_13 = Local_112.f_12;
}

int func_790(var uParam0, bool bParam1)//Position - 0x3FFBE
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar1 = Local_110.f_0;
	}
	switch (func_819(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_791(bool bParam0)//Position - 0x40025
{
	int iVar0;
	if (func_42(2))
	{
		return;
	}
	iVar0 = func_797();
	Local_112.f_12 = (iVar0 + Local_112.f_8 * 20);
	Local_112.f_12 = (Local_112.f_12 + func_796(bParam0));
	Local_112.f_13 = Local_112.f_14;
	Local_112.f_20 = func_792(bParam0);
	Local_112.f_16 = (Local_112.f_15 * Local_112.f_12);
	func_41(2);
}

float func_792(bool bParam0)//Position - 0x40088
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	fVar0 = (IntToFloat(Local_112.f_12) * SYSTEM::TO_FLOAT(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_112.f_12 += 20;
	}
	iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_112.f_72, "Base_pivot");
	Var2 = { ENTITY::GET_ENTITY_BONE_OBJECT_ROTATION(Local_112.f_72, iVar1) };
	fVar3 = func_794(Var2.f_1);
	iVar4 = SYSTEM::FLOOR((fVar3 / 18f));
	fVar5 = SYSTEM::TO_FLOAT(iVar4 * 18);
	fVar6 = (360f - fVar5);
	fVar7 = MISC::ABSF((fVar3 - fVar5));
	fVar0 = ((fVar0 - fVar6) - fVar7);
	iVar8 = func_819(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iVar8 = func_819(Local_110.f_0);
	}
	iVar9 = SYSTEM::ROUND((fVar0 / 18f));
	fVar0 = ((SYSTEM::TO_FLOAT(iVar9 * 18) + func_793(iVar8)) + IntToFloat(Local_112.f_10 * 18));
	fVar10 = (fVar0 * -1f);
	return fVar10;
}

float func_793(int iParam0)//Position - 0x40166
{
	if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0.4746f;
			case 1:
				return ((SYSTEM::TO_FLOAT(18) * 2f) - 3.4757f);
			case 2:
				return (SYSTEM::TO_FLOAT(4) + 1.9002f);
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (SYSTEM::TO_FLOAT(4) + 1.3709f);
			case 1:
				return (SYSTEM::TO_FLOAT(4) + 3.5184f);
			case 2:
				return (SYSTEM::TO_FLOAT(18) + 14.2192f);
			}
		default:
	}
	return 0f;
}

float func_794(float fParam0)//Position - 0x40201
{
	fParam0 = __LIB_3__::func_555(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

int func_796(bool bParam0)//Position - 0x4025F
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		iVar0 = Local_110.f_0;
	}
	switch (func_819(iVar0))
	{
		case 1:
			if (Local_112.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_797()//Position - 0x4029A
{
	int iVar0;
	int iVar1;
	if (Local_112.f_14 > func_807(PLAYER::PLAYER_ID()))
	{
		iVar1 = (20 - Local_112.f_14);
		iVar0 = (iVar1 + func_807(PLAYER::PLAYER_ID()));
	}
	else
	{
		iVar0 = (func_807(PLAYER::PLAYER_ID()) - Local_112.f_14);
	}
	return iVar0;
}

int func_798(bool bParam0)//Position - 0x402DE
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_154(func_819(PLAYER::PLAYER_ID()));
		}
		else
		{
			sVar0 = func_154(func_819(Local_110.f_0));
		}
		sVar1 = func_79();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_112.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_112.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_799(int iParam0)//Position - 0x40361
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 9;
		case 2:
			return 10;
		default:
	}
	return -1;
}

int func_800(int iParam0, bool bParam1, bool bParam2)//Position - 0x40392
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	int iVar5;
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar0 = PLAYER::GET_PLAYER_PED(Local_110.f_0);
		iVar1 = Local_110.f_0;
	}
	if (__LIB_0__::func_121(iVar0))
	{
		sVar2 = func_802(iParam0);
		sVar3 = func_79();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_801(iParam0);
				iVar5 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(func_777(iVar1));
				if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= fVar4) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_776();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_801(int iParam0)//Position - 0x40455
{
	float fVar0;
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 2:
			if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = 0.7f;
			}
			break;
	}
	return fVar0;
}

char* func_802(int iParam0)//Position - 0x40488
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		case 5:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		case 6:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		case 7:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		case 11:
			sVar0 = "Win";
			break;
		case 12:
			sVar0 = "Win_Big";
			break;
		case 13:
			sVar0 = "Win_Huge";
			break;
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_803(float fParam0)//Position - 0x405BF
{
	bool bVar0;
	if (func_42(27))
	{
		if (Local_112.f_481 == -1 && AUDIO::HAS_SOUND_FINISHED(Local_112.f_481))
		{
			Local_112.f_481 = AUDIO::GET_SOUND_ID();
			bVar0 = true;
			if (fParam0 > 0.5f)
			{
				bVar0 = false;
			}
			AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_481, "Spin_Single_Ticks", func_785(), "dlc_vw_casino_lucky_wheel_sounds", bVar0, 0, false);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_481, "spinSpeed", fParam0);
		}
		else
		{
			AUDIO::STOP_SOUND(Local_112.f_481);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_481);
			Local_112.f_481 = -1;
			func_803(fParam0);
		}
	}
}

void func_804(float fParam0)//Position - 0x40653
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_480) && Local_112.f_480 == -1)
	{
		Local_112.f_480 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_480, "Spin_Start", func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_480, "spinSpeed", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_480, "spinSpeed", fParam0);
	}
}

void func_805()//Position - 0x406BB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_112.f_72, "Base_pivot");
	Var1 = { ENTITY::GET_ENTITY_BONE_OBJECT_ROTATION(Local_112.f_72, iVar0) };
	fVar2 = func_794(Var1.f_1);
	Var3 = { ENTITY::GET_ENTITY_ROTATION(Local_112.f_72, 2) };
	fVar4 = func_794(Var3.f_1);
	if (!func_798(0))
	{
		fVar5 = fVar2;
	}
	else if (fVar4 == 0f && fVar2 != 0f)
	{
		fVar5 = fVar2;
	}
	else
	{
		fVar5 = fVar4;
	}
	if (!func_42(26))
	{
		Local_112.f_479 = fVar5;
		func_41(26);
	}
	fVar6 = MISC::ABSF((fVar5 - Local_112.f_479));
	if (fVar6 > 100f)
	{
		fVar6 = MISC::ABSF((fVar5 - (360f + Local_112.f_479)));
	}
	iVar7 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_25));
	fVar8 = (SYSTEM::TO_FLOAT(iVar7) / IntToFloat(Local_112.f_16));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	else if (fVar8 > 1f)
	{
		fVar8 = 1f;
	}
	if (func_806() == 0)
	{
		fVar8 = (fVar8 / 2f);
	}
	Local_112.f_478 = fVar8;
	if (fVar6 >= 18f)
	{
		func_41(27);
		Local_112.f_479 = fVar5;
	}
	else
	{
		func_77(27);
	}
	Local_112.f_478 = fVar8;
}

int func_806()//Position - 0x407EE
{
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		return 2;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		return 1;
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x4081E
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/];
}

void func_809(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4089C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	char cVar5[64];
	char* sVar6;
	if (bParam3)
	{
	}
	Local_112.f_22 = func_802(iParam0);
	Var0 = { func_816(bParam1) };
	Var1 = { 0f, 0f, func_811(bParam1) };
	fVar2 = 2f;
	fVar3 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar2 = 8f;
		fVar3 = -1.5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar2 = 1.5f;
	}
	if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 3)
		{
			fVar2 = 4f;
			fVar3 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	iVar4 = 5;
	if (bParam2)
	{
		iVar4 = 69;
	}
	func_99(NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, bParam4, bParam2, 1f, 0f, 1f));
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), func_777(PLAYER::PLAYER_ID()), Local_112.f_23, Local_112.f_22, fVar2, fVar3, iVar4, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(func_777(PLAYER::PLAYER_ID()));
	StringCopy(&cVar5, Local_112.f_22, 64);
	StringConCat(&cVar5, "_Facial", 64);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), &cVar5, Local_112.f_23);
	if (func_810(Local_112.f_22))
	{
		sVar6 = func_154(func_819(PLAYER::PLAYER_ID()));
		ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, 0f, 0f, 2, true);
		ENTITY::PLAY_ENTITY_ANIM(Local_112.f_72, sVar6, Local_112.f_23, 1000f, false, true, false, 0f, 2);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_112.f_72);
	}
}

int func_810(char* sParam0)//Position - 0x40A34
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, func_802(7)) || MISC::ARE_STRINGS_EQUAL(sParam0, func_802(6))) || MISC::ARE_STRINGS_EQUAL(sParam0, func_802(5)))
	{
		return 1;
	}
	return 0;
}

float func_811(bool bParam0)//Position - 0x40A71
{
	if (bParam0)
	{
		return func_813();
	}
	else
	{
		return __LIB_7__::func_239();
	}
	return 0f;
}

var func_813()//Position - 0x40A99
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(Local_112.f_23, Local_112.f_22, func_814(Local_112.f_22), 0f, 0f, 0f, 0f, 2) };
	return Var0.f_2;
}

Vector3 func_814(char* sParam0)//Position - 0x40AC5
{
	struct<3> Var0;
	int iVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar1 = func_815(sParam0);
	if (iVar1 == 0)
	{
		Var0 = { func_785() };
	}
	return Var0;
}

int func_815(char* sParam0)//Position - 0x40AF4
{
	int iVar0;
	iVar0 = -1;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_low") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_med") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_high") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_816(bool bParam0)//Position - 0x40C66
{
	if (bParam0)
	{
		return func_817();
	}
	else
	{
		return func_55();
	}
	return 0f, 0f, 0f;
}

Vector3 func_817()//Position - 0x40C87
{
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_112.f_23, Local_112.f_22, func_55(), 0f, 0f, 0f, 0f, 2);
}

int func_818(int iParam0)//Position - 0x40CA6
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		default:
	}
	return -1;
}

int func_819(int iParam0)//Position - 0x40CD4
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return -1;
	}
	return Local_111[iParam0 /*5*/].f_4;
}

void func_820(bool bParam0)//Position - 0x40CF1
{
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (bParam0)
		{
			if (!BitTest(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
			}
		}
		else if (BitTest(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
		{
			MISC::CLEAR_BIT(&(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
		}
	}
}

void func_821(var uParam0, int iParam1)//Position - 0x40D49
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 2057463666;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_0__::func_943(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_822(int iParam0)//Position - 0x40D87
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Local_111[iParam0 /*5*/].f_1, 0);
}

void func_823()//Position - 0x40DA6
{
	if (!func_42(5))
	{
		Local_112.f_2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_24));
		if (func_42(15))
		{
			func_77(15);
			func_826();
			func_41(5);
		}
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_24) || func_825())
		{
			Local_112.f_2 = 0;
			if (func_824(3))
			{
				func_809(14, 0, 0, 1, 0);
				func_77(4);
				func_41(10);
				func_78(12);
			}
		}
	}
}

int func_824(int iParam0)//Position - 0x40E29
{
	char* sVar0;
	char* sVar1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = func_802(iParam0);
		sVar1 = func_79();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, 3);
		}
	}
	return 0;
}

int func_825()//Position - 0x40E71
{
	if (__LIB_16__::func_268())
	{
		return 1;
	}
	return 0;
}

void func_826()//Position - 0x40E85
{
	func_100(Local_112.f_2);
	Local_112.f_15 = func_156();
	Local_112.f_8 = func_155();
	func_95(func_806());
}

void func_827()//Position - 0x40EB0
{
	Local_112.f_3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 128f));
	Local_112.f_4 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 128f));
}

void func_828()//Position - 0x40EE4
{
	func_831();
	func_827();
	if (func_42(18))
	{
		if (func_800(2, 0, 0))
		{
			func_809(3, 0, 1, 0, 0);
			__LIB_0__::func_794(&(Local_112.f_27));
			func_77(18);
		}
		else if (func_42(12))
		{
			func_41(16);
			func_78(8);
		}
	}
	else if (!func_800(3, 0, 0))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			__LIB_0__::func_151("LUCK_W_SPIN_PC" /* GXT: Use ~INPUT_MOVE_DOWN_ONLY~ to Spin. */, -1);
		}
		else
		{
			__LIB_0__::func_151("LUCK_WHEEL_SPIN" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~ to Spin. */, -1);
		}
		if (func_42(12))
		{
			__LIB_0__::func_794(&(Local_112.f_27));
			func_41(16);
			func_78(8);
		}
	}
	else if (func_830() != 7)
	{
		if (!func_829() || func_42(22))
		{
			func_809(15, 0, 0, 0, 1);
			func_78(7);
		}
	}
}

bool func_829()//Position - 0x40FAE
{
	return ((Local_112.f_3 <= 20 && Local_112.f_3 >= -20) && Local_112.f_4 <= -120);
}

int func_830()//Position - 0x40FDA
{
	return Local_112.f_45;
}

void func_831()//Position - 0x40FE7
{
	if (func_830() == 6)
	{
		if (__LIB_0__::func_864(&(Local_112.f_39)))
		{
			if (__LIB_0__::func_937(&(Local_112.f_39), 10000, 0))
			{
				func_41(22);
			}
		}
	}
	if (func_42(12) || func_42(13))
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_112.f_27)))
	{
		__LIB_0__::func_795(&(Local_112.f_27), 0, 0);
	}
	else if (!__LIB_0__::func_937(&(Local_112.f_27), 5000, 0))
	{
		if (Local_112.f_45 != 5)
		{
			if (func_832())
			{
				Local_112.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
				func_41(12);
				func_41(15);
				__LIB_0__::func_794(&(Local_112.f_27));
			}
		}
		else if (func_832())
		{
			func_41(15);
			func_78(8);
		}
		else if (func_829() && !func_42(22))
		{
			__LIB_0__::func_795(&(Local_112.f_39), 0, 0);
			func_41(12);
			__LIB_0__::func_794(&(Local_112.f_27));
		}
	}
	else if (func_830() == 6)
	{
		if (!func_829() || func_42(22))
		{
			func_809(15, 0, 0, 0, 1);
			func_78(7);
		}
	}
	else
	{
		func_41(13);
		__LIB_0__::func_794(&(Local_112.f_27));
	}
}

bool func_832()//Position - 0x41118
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		return PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/);
	}
	return ((Local_112.f_3 <= 20 && Local_112.f_3 >= -20) && Local_112.f_4 >= 120);
}

void func_833()//Position - 0x41155
{
	if (func_800(15, 0, 0))
	{
		func_77(12);
		func_77(4);
		__LIB_0__::func_794(&(Local_112.f_27));
		func_809(1, 0, 1, 0, 0);
		func_78(5);
	}
}

void func_834()//Position - 0x4118D
{
	if (!func_42(4))
	{
		Local_112.f_24 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		func_41(4);
	}
	func_831();
	func_827();
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		__LIB_0__::func_151("LUCK_W_SPIN_PC" /* GXT: Use ~INPUT_MOVE_DOWN_ONLY~ to Spin. */, -1);
	}
	else
	{
		__LIB_0__::func_151("LUCK_WHEEL_SPIN" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~ to Spin. */, -1);
	}
	if (func_42(12) && !func_825())
	{
		func_809(2, 0, 0, 0, 0);
		func_41(18);
		__LIB_0__::func_794(&(Local_112.f_27));
		func_78(6);
		func_77(12);
	}
	else if (func_42(13) || func_825())
	{
		func_809(14, 0, 0, 1, 0);
		func_77(4);
		func_41(10);
		func_78(12);
	}
}

void func_835()//Position - 0x4123F
{
	func_839();
	if (!func_42(7))
	{
		if (!func_42(8))
		{
			STREAMING::REQUEST_ANIM_DICT(Local_112.f_23);
			if (STREAMING::HAS_ANIM_DICT_LOADED(Local_112.f_23))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_816(1), 1f, 5000, func_811(1), 0.001f);
					__LIB_0__::func_795(&(Local_112.f_31), 0, 0);
					func_41(8);
				}
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(Local_112.f_23))
		{
			if (func_836())
			{
				func_809(0, 0, 0, 1, 0);
				__LIB_0__::func_794(&(Local_112.f_31));
				func_41(7);
			}
		}
	}
	else if (func_800(0, 0, 0))
	{
		func_809(1, 0, 1, 0, 0);
		func_77(7);
		func_41(9);
	}
}

int func_836()//Position - 0x41313
{
	if ((__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_816(1), 0.01f, 0) && __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), func_811(1), 5f)) || __LIB_0__::func_937(&(Local_112.f_31), 5000, 0))
	{
		return 1;
	}
	return 0;
}

void func_839()//Position - 0x41466
{
	if (!func_42(6))
	{
		if (!__LIB_3__::func_505())
		{
			__LIB_5__::func_835();
		}
		if (!__LIB_3__::func_241())
		{
			__LIB_1__::func_92();
		}
		HUD::THEFEED_HIDE();
		HUD::DISPLAY_RADAR(false);
		func_41(6);
	}
}

void func_843()//Position - 0x414DF
{
	func_847(&(Local_112.f_485));
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (func_846(0))
		{
			func_845();
			func_94(0);
		}
		else
		{
			__LIB_3__::func_781(-1, 1, 1);
		}
		if (!__LIB_16__::func_234())
		{
			__LIB_1__::func_789("CAS_DIS_MAIN" /* GXT: Spin the Lucky Wheel for free once per day and get a prize.~n~~n~Prize Odds:~n~Podium Vehicle: 1 in 20~n~Vehicle Discount: 1 in 20~n~Mystery: 1 in 20~n~Clothing: 4 in 20~n~Chips: 4 in 20~n~Cash: 4 in 20~n~RP: 5 in 20 */, 0, 0);
		}
		else
		{
			__LIB_1__::func_789("CAS_DIS_MAIN2" /* GXT: Spin the Lucky Wheel for free once per day and get a prize.~n~~n~You have already been awarded the current podium vehicle. RP will be awarded instead if you land on this prize again.~n~~n~Prize Odds:~n~Vehicle Discount: 1 in 20~n~Mystery: 1 in 20~n~Clothing: 4 in 20~n~Chips: 4 in 20~n~Cash: 4 in 20~n~RP: 6 in 20 */, 0, 0);
		}
		func_844();
		__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
}

void func_844()//Position - 0x41551
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
	}
	if ((Local_112.f_485.f_10 || __LIB_0__::func_937(&(Local_112.f_41), 20000, 0)) || func_26(1, 1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		MISC::CLEAR_BIT(&(Local_112.f_1), 3);
		func_78(17);
		func_74(1);
	}
	else if (Local_112.f_485.f_9)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
		func_78(3);
		MISC::SET_BIT(&(Local_112.f_1), 3);
	}
}

void func_845()//Position - 0x415EE
{
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("CAS_BLP_DT" /* GXT: LUCKY WHEEL */);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
	__LIB_3__::func_566(1, "CasinoUI_Lucky_Wheel", "CasinoUI_Lucky_Wheel");
	__LIB_1__::func_791(202, "TCP_EXIT" /* GXT: Quit */, -1);
	__LIB_1__::func_791(201, "TCP_CONT" /* GXT: Continue */, -1);
}

bool func_846(int iParam0)//Position - 0x41647
{
	return BitTest(Local_112.f_485, iParam0);
}

void func_847(var uParam0)//Position - 0x41658
{
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 33024, 0);
		}
	}
	func_848(uParam0);
}

void func_848(var uParam0)//Position - 0x41698
{
	__LIB_0__::func_603(&(uParam0->f_4), &(uParam0->f_6), &(uParam0->f_5), &(uParam0->f_7), 0);
	uParam0->f_9 = (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/));
	uParam0->f_10 = (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	uParam0->f_11 = (uParam0->f_6 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
	uParam0->f_12 = (uParam0->f_6 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if ((((__LIB_3__::func_67(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458)
	{
		if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
				if ((Global_4539961 == -1 || Global_4539961 == -4) || Global_4539961 == -6)
				{
					PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				}
				__LIB_3__::func_567(0, 0, 0, 1);
				__LIB_3__::func_52(0, -1, 1);
			}
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_1)
				{
					uParam0->f_9 = 1;
				}
				else
				{
					uParam0->f_1 = Global_4539961;
					__LIB_3__::func_781(uParam0->f_1, 1, 1);
				}
			}
			if (__LIB_3__::func_528())
			{
				uParam0->f_10 = 1;
			}
			if (__LIB_3__::func_557(0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (__LIB_3__::func_556(0, 0, 0))
			{
				uParam0->f_12 = 1;
			}
		}
	}
}

void func_853(bool bParam0)//Position - 0x41AC8
{
	if (!BitTest(Local_112.f_485, bParam0))
	{
		MISC::SET_BIT(&(Local_112.f_485), bParam0);
	}
}

void func_854(int iParam0, bool bParam1)//Position - 0x41AE9
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam1)
	{
		if (!BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6))
		{
			MISC::SET_BIT(&(Global_2689235[iParam0 /*453*/].f_318.f_4), 6);
		}
	}
	else if (BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6))
	{
		MISC::CLEAR_BIT(&(Global_2689235[iParam0 /*453*/].f_318.f_4), 6);
	}
}

float func_855(int iParam0)//Position - 0x41B52
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		case 1:
			return 18f;
			break;
		case 2:
			return 36f;
			break;
		case 3:
			return 54f;
			break;
		case 4:
			return 72f;
			break;
		case 5:
			return 90f;
			break;
		case 6:
			return 108f;
			break;
		case 7:
			return 126f;
			break;
		case 8:
			return 144f;
			break;
		case 9:
			return 162f;
			break;
		case 10:
			return 180f;
			break;
		case 11:
			return 198f;
			break;
		case 12:
			return 216f;
			break;
		case 13:
			return 234f;
			break;
		case 14:
			return 252f;
			break;
		case 15:
			return 270f;
			break;
		case 16:
			return 288f;
			break;
		case 17:
			return 306f;
			break;
		case 18:
			return 324f;
			break;
		case 19:
			return 342f;
			break;
	}
	return 0f;
}

void func_856()//Position - 0x41CB2
{
	if (__LIB_0__::func_1("LW_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Lucky Wheel. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_48(0))
	{
		func_77(11);
		if (BitTest(Global_1946250.f_6, 4))
		{
			if (__LIB_5__::func_831("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_9__::func_562(0)))
			{
				HUD::CLEAR_HELP(true);
			}
			MISC::CLEAR_BIT(&(Global_1946250.f_6), 4);
		}
		if (func_42(20))
		{
			if (((__LIB_0__::func_1("LUCKY_WHEEL_US" /* GXT: You can only spin the Lucky Wheel once per day. */) || __LIB_0__::func_1("LUCKY_WHEEL_US1" /* GXT: You can only spin the Lucky Wheel twice per day. */)) || __LIB_0__::func_1("LUCKY_WHEEL_US2" /* GXT: You can only spin the Lucky Wheel three times per day. */)) || __LIB_0__::func_1("LUCKY_WHEEL_US3" /* GXT: You can only spin the Lucky Wheel four times per day. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_77(20);
		}
		if (__LIB_0__::func_1("CASINO_LUCK_WD" /* GXT: Lucky Wheel is not available at this time.  Please try again later. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_42(25))
		{
			if (__LIB_0__::func_1("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */))
			{
				HUD::CLEAR_HELP(true);
				func_77(25);
			}
		}
		if (func_42(28))
		{
			if (__LIB_0__::func_1("CAS_LW_REGL" /* GXT: This feature is not available for you. */))
			{
				HUD::CLEAR_HELP(true);
				func_77(28);
			}
		}
	}
}

void func_858()//Position - 0x41DAC
{
	func_97();
	func_867();
	func_866();
	__LIB_2__::func_976();
	func_114(PLAYER::PLAYER_ID(), 0, 256);
	Local_112.f_23 = func_79();
	Local_112.f_22 = func_802(0);
	Local_112.f_46 = __LIB_0__::func_109();
}

void func_866()//Position - 0x41E83
{
	__LIB_0__::func_671(1);
}

void func_867()//Position - 0x41E90
{
	if (!func_42(1))
	{
		func_98(func_868(func_869()));
		func_41(1);
	}
}

int func_868(int iParam0)//Position - 0x41EB2
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 8;
		case 2:
			return 12;
		case 3:
			return 16;
		case 4:
			return 1;
		case 5:
			return 5;
		case 6:
			return 9;
		case 7:
			return 13;
		case 8:
			return 17;
		case 9:
			return 2;
		case 10:
			return 6;
		case 11:
			return 14;
		case 12:
			return 19;
		case 13:
			return 3;
		case 14:
			return 7;
		case 15:
			return 10;
		case 16:
			return 15;
		case 17:
			return 11;
		case 18:
			return 18;
		case 19:
			return 4;
		default:
	}
	return 0;
}

int func_869()//Position - 0x41F96
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_870(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if (iVar3 <= func_870(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_870(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_870(int iParam0)//Position - 0x42018
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_26934 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_1 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26824 /* Tunable: 797837618 */;
			}
			break;
		case 1:
			if (Global_262145.f_26934 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_1 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26825 /* Tunable: -957505180 */;
			}
			break;
		case 2:
			if (Global_262145.f_26934 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_1 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26826 /* Tunable: -1444374387 */;
			}
			break;
		case 3:
			if (Global_262145.f_26934 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_1 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26827 /* Tunable: 1637789970 */;
			}
			break;
		case 4:
			if (Global_262145.f_26935 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_2 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26828 /* Tunable: -1232760373 */;
			}
			break;
		case 5:
			if (Global_262145.f_26935 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_2 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26829 /* Tunable: -866795740 */;
			}
			break;
		case 6:
			if (Global_262145.f_26935 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_2 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26830 /* Tunable: -651561626 */;
			}
			break;
		case 7:
			if (Global_262145.f_26935 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_2 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26831 /* Tunable: 1565093006 */;
			}
			break;
		case 8:
			if (Global_262145.f_26935 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_2 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26832 /* Tunable: -94985608 */;
			}
			break;
		case 9:
			if (Global_262145.f_26936 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_3 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26833 /* Tunable: 2102801011 */;
			}
			break;
		case 10:
			if (Global_262145.f_26936 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_3 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26834 /* Tunable: -1454907092 */;
			}
			break;
		case 11:
			if (Global_262145.f_26936 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_3 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26835 /* Tunable: 1657309988 */;
			}
			break;
		case 12:
			if (Global_262145.f_26936 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_3 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26836 /* Tunable: -1599769987 */;
			}
			break;
		case 13:
			if (Global_262145.f_26937 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_4 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26837 /* Tunable: -265665671 */;
			}
			break;
		case 14:
			if (Global_262145.f_26937 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_4 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26838 /* Tunable: -696364493 */;
			}
			break;
		case 15:
			if (Global_262145.f_26937 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_4 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26839 /* Tunable: -1493965134 */;
			}
			break;
		case 16:
			if (Global_262145.f_26937 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_4 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26840 /* Tunable: 2130910960 */;
			}
			break;
		case 17:
			if (Global_262145.f_26938 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_5 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26841 /* Tunable: 769416539 */;
			}
			break;
		case 18:
			if (Global_262145.f_26939 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_6 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26842 /* Tunable: 35455186 */;
			}
			break;
		case 19:
			if (Global_262145.f_26940 /* Tunable: VC_CASINO_DISABLE_WHEEL_SEGMENT_7 */)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26843 /* Tunable: -825965233 */;
			}
			break;
	}
	return 0;
}

void func_871()//Position - 0x422F8
{
	if (__LIB_0__::func_1("LW_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Lucky Wheel. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_872(int iParam0, bool bParam1)//Position - 0x4230F
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 10))
		{
			MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2), 10);
		}
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2), 10);
	}
}

int func_873()//Position - 0x42388
{
	if (func_42(11))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			return func_874();
		}
	}
	return 0;
}

int func_874()//Position - 0x423AC
{
	if (((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)) && !__LIB_5__::func_836(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_876()//Position - 0x42428
{
	if (func_48(0))
	{
		func_41(11);
	}
	if (func_42(11))
	{
		if (!BitTest(Local_112.f_1, 2))
		{
			__LIB_0__::func_151("LW_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Lucky Wheel. */, -1);
		}
		if (!func_48(0))
		{
			func_77(11);
		}
	}
}

bool func_877()//Position - 0x42469
{
	return Local_110.f_0 != __LIB_0__::func_162();
}

void func_878()//Position - 0x42478
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_480))
	{
		AUDIO::STOP_SOUND(Local_112.f_480);
		AUDIO::RELEASE_SOUND_ID(Local_112.f_480);
		Local_112.f_480 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_482))
	{
		AUDIO::STOP_SOUND(Local_112.f_482);
		AUDIO::RELEASE_SOUND_ID(Local_112.f_482);
		Local_112.f_482 = -1;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_483))
	{
		AUDIO::STOP_SOUND(Local_112.f_483);
		AUDIO::RELEASE_SOUND_ID(Local_112.f_483);
		Local_112.f_483 = -1;
	}
}

void func_879()//Position - 0x424F8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
	{
		STREAMING::REQUEST_MODEL(func_880());
		if (!STREAMING::HAS_MODEL_LOADED(func_880()))
		{
			return;
		}
		Local_112.f_72 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_880(), func_785(), false, false, true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_112.f_72, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_112.f_72, false);
	}
}

int func_880()//Position - 0x4254C
{
	return joaat("vw_prop_vw_luckywheel_02a");
}

int func_881()//Position - 0x42559
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_959())
	{
		iVar0 = 1;
	}
	if (!__LIB_1__::func_783(PLAYER::PLAYER_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_CASINO")) < 1)
	{
		iVar0 = 1;
	}
	if (Global_1966103)
	{
		Global_1966103 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

void func_891()//Position - 0x42B8B
{
	if (func_42(21))
	{
		func_137(1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_880());
	func_820(0);
	func_893();
	func_776();
	func_854(PLAYER::PLAYER_ID(), 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_112.f_23))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_112.f_23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
	{
		OBJECT::DELETE_OBJECT(&(Local_112.f_72));
	}
	if (BitTest(Global_1946250.f_6, 4))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 4);
	}
	func_104(0);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CasinoUI_Lucky_Wheel");
	__LIB_0__::func_202();
}

void func_893()//Position - 0x42C1D
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_154(func_819(PLAYER::PLAYER_ID()));
	sVar1 = func_79();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_112.f_72, sVar1, sVar0, 3))
	{
		ENTITY::STOP_ENTITY_ANIM(Local_112.f_72, sVar0, sVar1, -8f);
	}
}

void func_894()//Position - 0x42C5D
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_111, 161, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 2, 0);
	if (!__LIB_0__::func_934())
	{
		func_891();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_895();
}

void func_895()//Position - 0x42C9B
{
	func_896(&Local_113);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CasinoUI_Lucky_Wheel", false);
}

void func_896(var uParam0)//Position - 0x42CB3
{
	int iVar0;
	int iVar1;
	if (!BitTest(uParam0->f_7, 9))
	{
		iVar0 = 0;
		while (iVar0 <= 95)
		{
			iVar1 = __LIB_6__::func_155(iVar0, 0);
			if (__LIB_6__::func_154(iVar1))
			{
				if (!__LIB_6__::func_153(iVar1))
				{
					if (__LIB_6__::func_152(iVar1) && __LIB_42__::func_290(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), iVar1, -1))
					{
						iVar1 = __LIB_6__::func_151(iVar1);
					}
					if (__LIB_42__::func_291(iVar1, -1, 0) || __LIB_6__::func_697(iVar1))
					{
						if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) != 0)
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MELEE") || iVar1 == joaat("WEAPON_KNUCKLE"))
							{
								if (!BitTest(uParam0->f_4, 0))
								{
									MISC::SET_BIT(&(uParam0->f_4), 0);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_PISTOL"))
							{
								if (!BitTest(uParam0->f_4, 1))
								{
									MISC::SET_BIT(&(uParam0->f_4), 1);
									uParam0->f_5++;
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 30))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 30);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_RIFLE"))
							{
								if (!BitTest(uParam0->f_4, 3))
								{
									MISC::SET_BIT(&(uParam0->f_4), 3);
									uParam0->f_5++;
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 31))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 31);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SHOTGUN") || iVar1 == joaat("WEAPON_MUSKET"))
							{
								if (!BitTest(uParam0->f_4, 4))
								{
									MISC::SET_BIT(&(uParam0->f_4), 4);
									uParam0->f_5++;
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 0))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 0);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SNIPER") && iVar1 != joaat("WEAPON_MUSKET"))
							{
								if (!BitTest(uParam0->f_4, 5))
								{
									MISC::SET_BIT(&(uParam0->f_4), 5);
									uParam0->f_5++;
								}
								if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 5))
								{
									MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 5);
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_HEAVY"))
							{
								if (!BitTest(uParam0->f_4, 6))
								{
									MISC::SET_BIT(&(uParam0->f_4), 6);
									uParam0->f_5++;
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_THROWN") || iVar1 == joaat("WEAPON_PETROLCAN"))
							{
								if (!BitTest(uParam0->f_4, 7))
								{
									MISC::SET_BIT(&(uParam0->f_4), 7);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_STICKYBOMB") || iVar1 == joaat("WEAPON_PROXMINE"))
								{
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 2))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 2);
									}
								}
								else if (iVar1 == joaat("WEAPON_GRENADE") || iVar1 == joaat("WEAPON_SMOKEGRENADE"))
								{
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 3))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 3);
									}
								}
							}
							else if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_SMG") || WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
							{
								if (!BitTest(uParam0->f_4, 2))
								{
									MISC::SET_BIT(&(uParam0->f_4), 2);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("WEAPON_MICROSMG"))
								{
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 1))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 1);
									}
								}
								if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == joaat("GROUP_MG"))
								{
									if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 4))
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 4);
									}
								}
							}
						}
						else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
						{
						}
					}
					else if ((MISC::GET_FRAME_COUNT() % 60) == 0)
					{
					}
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_7), 9);
	}
}

