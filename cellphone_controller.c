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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_44[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<57> Var0;
	int iVar1;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_70 = 0.95f;
	fLocal_71 = 0.07f;
	fLocal_72 = 0.755f;
	iLocal_81 = 9999;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_113328 = MISC::GET_GAME_TIMER();
	__LIB_0__::func_467();
	__LIB_16__::func_291();
	__LIB_16__::func_290();
	Global_20266.f_1 = 3;
	Global_20254 = 0;
	Global_20466 = 0;
	Global_22640 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 > 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 353 /*INPUT_VEH_PARACHUTE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 353 /*INPUT_VEH_PARACHUTE*/, true);
		}
		if (iLocal_79 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_79 = 1;
				iLocal_81 = __LIB_0__::func_369(11355, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_79 == 1)
			{
				switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
				{
					case -1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
					case 0:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
					case 1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
						break;
					case 2:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
						break;
					case 3:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
						break;
					case 4:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
						break;
					case 5:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
						break;
					case 6:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
						break;
					case 7:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
						break;
					case 8:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
						break;
					case 9:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
						break;
					case 10:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
						break;
					case 11:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
						break;
					case 12:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
						break;
				}
				if (Global_2815059.f_5027)
				{
					SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
				}
				iLocal_79 = 2;
			}
			if (iLocal_79 == 2)
			{
				iLocal_80 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
				switch (iLocal_80)
				{
					case 3:
						break;
					case 0:
						if (SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0)
						{
							SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &Var0);
							if (Var0.f_1 != iLocal_81)
							{
								Global_4539963 = 1;
							}
							else
							{
								Global_4539963 = 0;
							}
						}
						iLocal_79 = 3;
						break;
					case 1:
						break;
					case 4:
						Global_4539963 = 0;
						iLocal_79 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4539963 = 0;
			iLocal_79 = 0;
		}
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_20266.f_1 == 6)
				{
					Global_20266.f_1 = 3;
				}
			}
		}
		if (__LIB_0__::func_769(146))
		{
			if (Global_78319 == 0)
			{
				iVar1 = __LIB_40__::func_956(0, 0, 119);
				if (iVar1 != 0)
				{
					__LIB_16__::func_838(iVar1);
				}
				else
				{
					__LIB_16__::func_288();
				}
				__LIB_0__::func_366(0);
			}
		}
		if (Global_2815059.f_4612 == 1)
		{
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 3;
			}
		}
		if (Global_78319 == 1)
		{
			if (Global_20266.f_1 == 3)
			{
				if (BitTest(Global_4541229, 15))
				{
					MISC::SET_BIT(&Global_4541229, 14);
					SYSTEM::WAIT(0);
					while (!__LIB_16__::func_300(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4541229, 14);
					MISC::CLEAR_BIT(&Global_4541229, 15);
				}
				if (BitTest(Global_4541229, 16))
				{
					MISC::SET_BIT(&Global_4541229, 14);
					SYSTEM::WAIT(0);
					while (!__LIB_16__::func_300(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4541229, 14);
					MISC::CLEAR_BIT(&Global_4541229, 16);
					MISC::CLEAR_BIT(&Global_4541229, 27);
				}
				if (BitTest(Global_4541229, 27))
				{
					MISC::SET_BIT(&Global_4541229, 14);
					SYSTEM::WAIT(0);
					while (!__LIB_16__::func_300(23, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4541229, 14);
					MISC::CLEAR_BIT(&Global_4541229, 16);
					MISC::CLEAR_BIT(&Global_4541229, 27);
				}
				if (BitTest(Global_4541229, 29))
				{
					MISC::SET_BIT(&Global_4541229, 14);
					SYSTEM::WAIT(0);
					while (!__LIB_16__::func_300(1, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4541229, 14);
					MISC::CLEAR_BIT(&Global_4541229, 29);
				}
			}
		}
		if (Global_78319 == 0)
		{
			if (BitTest(Global_4541229, 11))
			{
				if ((Global_20266.f_1 != 10 && Global_20266.f_1 != 9) || __LIB_13__::func_98() == 0)
				{
					MISC::CLEAR_BIT(&Global_4541229, 11);
					MISC::SET_BIT(&Global_8137, 11);
				}
			}
			else if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
			{
				if (__LIB_13__::func_98())
				{
					MISC::SET_BIT(&Global_4541229, 11);
					MISC::SET_BIT(&Global_8137, 11);
				}
			}
			if (BitTest(Global_4541229, 12))
			{
				MISC::CLEAR_BIT(&Global_4541229, 12);
				MISC::SET_BIT(&Global_8137, 11);
			}
		}
		else if (BitTest(Global_4541229, 12))
		{
			if ((Global_22668 == 0 || Global_22669 == 0) && !Global_22670)
			{
				MISC::CLEAR_BIT(&Global_4541229, 12);
				MISC::SET_BIT(&Global_8137, 11);
			}
		}
		else if (Global_22670 || (Global_22668 > 0 && Global_22669 == 1))
		{
			MISC::SET_BIT(&Global_4541229, 12);
			MISC::SET_BIT(&Global_8137, 11);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_PUSH_TO_TALK_ACTIVE())
			{
				if (!BitTest(Global_4541229, 19))
				{
					MISC::SET_BIT(&Global_4541229, 19);
					MISC::SET_BIT(&Global_8137, 11);
				}
			}
			else if (BitTest(Global_4541229, 19))
			{
				MISC::CLEAR_BIT(&Global_4541229, 19);
				MISC::SET_BIT(&Global_8137, 11);
			}
		}
		if (iLocal_77 == 0)
		{
			if (BitTest(Global_8136, 25))
			{
				STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_76, -1);
				iLocal_74 = MISC::GET_GAME_TIMER();
				iLocal_77 = 1;
			}
		}
		else if (!BitTest(Global_8136, 25))
		{
			STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_76, -1);
			iLocal_75 = MISC::GET_GAME_TIMER();
			iLocal_77 = 0;
			STATS::STAT_SET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), (iLocal_76 + (iLocal_75 - iLocal_74)), true);
		}
		func_84();
		func_83();
		func_82();
		func_80();
		func_62();
		func_61();
		func_60();
		if (BitTest(Global_8137, 21))
		{
			if (!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE())
			{
				MISC::CLEAR_BIT(&Global_8137, 21);
			}
		}
		if (BitTest(Global_8136, 7))
		{
			func_55();
			MISC::CLEAR_BIT(&Global_8136, 7);
		}
		if (BitTest(Global_8136, 0))
		{
			__LIB_0__::func_166();
		}
		if (BitTest(Global_4541229, 0))
		{
			func_53();
		}
		if (BitTest(Global_8137, 11))
		{
			Global_8840 = 0;
			if (BitTest(Global_8136, 25))
			{
				Global_8840++;
			}
			if (BitTest(Global_4541229, 11))
			{
				if (Global_78319 == 0)
				{
					Global_8840++;
				}
			}
			if (BitTest(Global_4541229, 28))
			{
				if (Global_78319 == 1)
				{
					Global_8840++;
				}
			}
			if (BitTest(Global_4541229, 12))
			{
				if (Global_78319 && (Global_22669 || Global_22670))
				{
					Global_8840++;
				}
			}
			if (BitTest(Global_4541229, 19))
			{
				Global_8840++;
			}
			if (Global_8840 == 0)
			{
				MISC::CLEAR_BIT(&Global_8137, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!__LIB_0__::func_73())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_20266.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_78319)
								{
									func_37();
								}
								else
								{
									func_37();
								}
							}
						}
					}
				}
			}
			if (Global_20266.f_1 == 4)
			{
				if (BitTest(Global_8137, 21))
				{
					func_37();
				}
			}
			func_23();
		}
		else if (func_16())
		{
		}
		switch (Global_22640)
		{
			case 0:
				func_15();
				if (Global_22642 == 1)
				{
					func_14();
				}
				break;
			case 1:
				func_13();
				break;
			case 2:
				func_12();
				break;
			case 3:
				func_11();
				break;
			case 4:
				func_10();
				break;
			case 5:
				func_9();
				break;
			case 14:
				func_14();
				break;
			case 6:
				if (Global_22642 == 1)
				{
					func_14();
				}
				if (Global_22643 == 1)
				{
					Global_22640 = 9;
					Global_22643 = 0;
				}
				break;
			case 8:
				func_8();
				break;
			case 9:
				func_5();
				break;
			case 10:
				func_4();
				break;
			case 11:
				func_3();
				break;
			case 12:
				func_2();
				break;
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x851
{
	iLocal_54 = GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_22644);
	switch (iLocal_54)
	{
		case 0:
			Global_22640 = 4;
			break;
		case 1:
			break;
		case 2:
			MISC::SET_BIT(&Global_8137, 15);
			func_14();
			break;
	}
}

void func_2()//Position - 0x895
{
	if (GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_22644))
	{
		Global_22640 = 13;
	}
	else
	{
		func_14();
	}
}

void func_3()//Position - 0x8B3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_52 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_50);
	}
	else
	{
		iLocal_51 = MISC::GET_GAME_TIMER();
		iLocal_52 = (iLocal_51 - iLocal_49);
	}
	if (iLocal_52 > 3000)
	{
		HUD::BUSYSPINNER_OFF();
	}
	if (iLocal_52 > 3200)
	{
		Global_22640 = 6;
	}
}

void func_4()//Position - 0x8F6
{
	iLocal_54 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
	switch (iLocal_54)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_50 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_49 = MISC::GET_GAME_TIMER();
			}
			Global_22640 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		case 1:
			break;
		case 2:
			func_14();
			break;
	}
}

void func_5()//Position - 0x94A
{
	Global_22645 = -1;
	if (Global_78319)
	{
		if (__LIB_0__::func_625())
		{
			GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Global_4718592.f_162543, Global_4718592.f_162543.f_1);
		}
		if (__LIB_0__::func_624(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_434), 0))
		{
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
		}
		else
		{
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
		}
	}
	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_22645))
	{
		Global_22640 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278" /* GXT: Saving Photo to Gallery */);
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_14();
	}
}

void func_8()//Position - 0x9E5
{
	iLocal_54 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
	switch (iLocal_54)
	{
		case 0:
			Global_22640 = 9;
			break;
		case 1:
			break;
		case 2:
			func_14();
			break;
	}
}

void func_9()//Position - 0xA1F
{
	iLocal_54 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_55);
	switch (iLocal_54)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, true);
			Global_22640 = 6;
			break;
		case 1:
			break;
		case 2:
			if (iLocal_55 == 3)
			{
				MISC::SET_BIT(&Global_8137, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_22640 = 6;
			}
			if (Global_22640 == 5)
			{
				if (iLocal_55 == 0)
				{
					Global_22640 = 4;
					iLocal_55 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_22640 == 5)
			{
				if (iLocal_55 == 1)
				{
					Global_22640 = 4;
					iLocal_55 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_22640 == 5)
			{
				if (iLocal_55 == 2)
				{
					Global_22640 = 4;
					iLocal_55 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_10()//Position - 0xAD3
{
	if (GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_55))
	{
		Global_22640 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_8137, 15);
		func_14();
	}
}

void func_11()//Position - 0xAF8
{
	iLocal_54 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
	switch (iLocal_54)
	{
		case 0:
			Global_22640 = 4;
			iLocal_55 = 2;
			break;
		case 1:
			break;
		case 2:
			Global_20266.f_1 = 3;
			func_14();
			break;
	}
}

void func_12()//Position - 0xB39
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
	{
		Global_22640 = 3;
	}
}

void func_13()//Position - 0xB4C
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_22640 = 2;
	}
}

void func_14()//Position - 0xB60
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_22641 = 0;
	Global_22642 = 0;
	Global_22643 = 0;
	Global_22640 = 0;
}

void func_15()//Position - 0xB8A
{
	if (Global_22641)
	{
		Global_22640 = 1;
		MISC::CLEAR_BIT(&Global_8137, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_16()//Position - 0xBAA
{
	char* sVar0;
	if ((__LIB_13__::func_85(2, Global_20233, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A" /* GXT: ALERT! */);
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH" /* GXT: You haven't paid your phone bill. Phone use may be impeded. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, sVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
		Global_22664 = 0;
		Global_22665 = 0;
		if (HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() == Global_22662 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() != -1)
		{
			Global_22664 = Global_22663;
			iLocal_58 = MISC::GET_GAME_TIMER();
			iLocal_60 = 0;
			iLocal_61 = 0;
			while (((func_20(2, Global_20233) && iLocal_60 < 250) && Global_20472 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_8840 > 0)
				{
					func_17();
				}
				SYSTEM::WAIT(0);
				iLocal_59 = MISC::GET_GAME_TIMER();
				iLocal_60 = (iLocal_59 - iLocal_58);
				if (Global_8840 > 0)
				{
					func_17();
				}
			}
			if ((func_20(2, Global_20233) && Global_20472 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_61 = 1;
			}
			if (Global_20472 == 0)
			{
				if (iLocal_61 == 1)
				{
					Global_22665 = 1;
					Global_22664 = Global_22663;
					if (Global_22664 == 1)
					{
					}
					if (Global_22664 == 2)
					{
					}
					if (Global_22664 == 3)
					{
					}
					if (Global_22664 == 0)
					{
					}
					if (Global_22664 == 4)
					{
					}
				}
				else
				{
					Global_22664 = 0;
				}
			}
			else
			{
				Global_22664 = 0;
			}
		}
		else
		{
			Global_22664 = 0;
		}
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_22664 = 0;
			Global_22665 = 0;
			return 0;
		}
	}
	return 0;
}

void func_17()//Position - 0xD63
{
	int iVar0;
	iVar0 = 255;
	if (Global_22670)
	{
		fLocal_71 = -0.055f;
		fLocal_72 = 0.745f;
		fLocal_67 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
		fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
		fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
		if (!__LIB_16__::func_801())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			if (Global_2678393.f_1593)
			{
				bLocal_38 = false;
			}
			else if (BitTest(Global_8136, 13))
			{
				if (BitTest(Global_4541229, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_2678393.f_1593 || BitTest(Global_8136, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (__LIB_0__::func_73())
		{
			bLocal_38 = true;
		}
		if (BitTest(Global_4541229, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_38)
				{
					if (!__LIB_3__::func_100())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
								if (MISC::IS_PC_VERSION() && Global_2678393.f_1593)
								{
									fLocal_71 = 0.165f;
									fLocal_72 = 0.755f;
								}
								else
								{
									fLocal_71 = 0.07f;
									fLocal_72 = 0.755f;
								}
								fLocal_67 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
								fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
								fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
								if (!__LIB_16__::func_801())
								{
									if (MISC::IS_PC_VERSION())
									{
										GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
									}
									if (Global_2678393.f_1593)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (MISC::IS_PC_VERSION())
										{
											if (BitTest(Global_4541229, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
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

int func_20(int iParam0, int iParam1)//Position - 0xFE7
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_23()//Position - 0x10FC
{
	switch (Global_20266.f_1)
	{
		case 4:
			if (BitTest(Global_8137, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_20263))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_20263))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_8840 > 0)
								{
									func_17();
								}
							}
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_20263 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					__LIB_38__::func_741(0);
				}
				if (Global_21615 || Global_21616)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_20263))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_8840 > 0)
								{
									func_17();
								}
							}
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_20263 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) && Global_20249 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_8840 > 0)
						{
							func_17();
						}
					}
					if (Global_20249 == 0)
					{
						Global_20266.f_1 = 9;
						__LIB_13__::func_424();
					}
				}
				else
				{
					bLocal_66 = false;
					if (Global_78319 && (Global_22667 || Global_1888478.f_5))
					{
						bLocal_66 = true;
					}
					if (((Global_113386.f_14051[Global_20266 /*20*/].f_18 == 1 || Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1) || bLocal_66 == 1) || Global_22664 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) && Global_20249 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_8840 > 0)
							{
								func_17();
							}
						}
						if (Global_20249 == 0)
						{
							if (Global_20266.f_1 > 3)
							{
								Global_20266.f_1 = 6;
								if (Global_22664 == 0)
								{
									if (bLocal_66)
									{
									}
									else if (Global_78319 == 0)
									{
										if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
										{
											__LIB_16__::func_300(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_22664 == 3)
									{
									}
									if (Global_22664 == 1)
									{
									}
									if (Global_22664 == 2)
									{
									}
									if (Global_22664 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) && Global_20249 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_8840 > 0)
							{
								func_17();
							}
						}
						if (Global_20249 == 0)
						{
							if (Global_20266.f_1 > 3)
							{
								if (Global_21615 || Global_21616)
								{
									Global_20266.f_1 = 9;
								}
								else
								{
									Global_20266.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_37()//Position - 0x2501
{
	if (func_16() || BitTest(Global_8136, 8))
	{
		MISC::CLEAR_BIT(&Global_8136, 8);
		__LIB_0__::func_698();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_44())
				{
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (BitTest(Global_8137, 21))
					{
						MISC::CLEAR_BIT(&Global_8137, 21);
					}
					if (Global_20472 == 1)
					{
						Global_20472 = 0;
					}
					switch (Global_20266.f_1)
					{
						case 3:
							Global_20266.f_1 = 4;
							if (iLocal_78 == 0)
							{
								func_38();
								iLocal_78 = 1;
							}
							break;
						default:
							break;
					}
					Global_20462 = 1;
				}
			}
		}
	}
}

void func_38()//Position - 0x25A3
{
	if (Global_4539963 == 1)
	{
		if (!__LIB_1__::func_85())
		{
			return;
		}
		if (__LIB_1__::func_84(PLAYER::PLAYER_ID()))
		{
			if (MISC::GET_PROFILE_SETTING(803) == 1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_EMAIL_EVENT" /* GXT: You have received an Eyefind message. Check your Eyefind inbox from the GTAO Eyefind website via a laptop or your cellphone's Internet application. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
			}
			else if (MISC::GET_PROFILE_SETTING(803) != 1)
			{
			}
		}
	}
}

int func_44()//Position - 0x2754
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_53()//Position - 0x2A1B
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	MISC::CLEAR_BIT(&Global_4541229, 0);
	if (Global_22666 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_22666))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_22666))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22666), 64);
				Global_22674[Global_22672] = Global_22666;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_22674[Global_4541213] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_22674[Global_4541213] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_4539964[Global_4541213 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_22674[Global_4541213] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4539964[Global_4541213 /*104*/].f_32 == 4 || Global_4539964[Global_4541213 /*104*/].f_32 == 5) || Global_4539964[Global_4541213 /*104*/].f_32 == 6) || Global_4539964[Global_4541213 /*104*/].f_32 == 7) || Global_4539964[Global_4541213 /*104*/].f_32 == 8) || Global_4539964[Global_4541213 /*104*/].f_32 == 9) || Global_4539964[Global_4541213 /*104*/].f_32 == 10) || Global_4539964[Global_4541213 /*104*/].f_32 == 11)
	{
		iVar1 = 0;
		switch (Global_4539964[Global_4541213 /*104*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[Global_4541213 /*104*/]));
		while (iVar1 < Global_4539964[Global_4541213 /*104*/].f_49)
		{
			switch (Global_4539964[Global_4541213 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2815059.f_1725[iVar1 /*4*/]));
					break;
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931438[iVar1 /*4*/]));
					break;
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931479[iVar1 /*4*/]));
					break;
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931500[iVar1 /*4*/]));
					break;
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931517[iVar1 /*4*/]));
					break;
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931530[iVar1 /*4*/]));
					break;
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931543[iVar1 /*4*/]));
					break;
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931556[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_4539964[Global_4541213 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar2, 0);
		MISC::SET_BIT(&Global_4541229, 1);
		Global_22663 = 1;
		Global_22662 = iLocal_48;
		Global_22666 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_4539964[Global_4541213 /*104*/]));
		switch (Global_4539964[Global_4541213 /*104*/].f_32)
		{
			case 0:
				break;
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_33));
				if (Global_4539964[Global_4541213 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_67));
				}
				if ((Global_4539964[Global_4541213 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[Global_4541213 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[Global_4541213 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[Global_4541213 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[Global_4541213 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_83));
					}
				}
				break;
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539964[Global_4541213 /*104*/].f_49);
				break;
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539964[Global_4541213 /*104*/].f_49);
				if (Global_4539964[Global_4541213 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_67));
				}
				if ((Global_4539964[Global_4541213 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[Global_4541213 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[Global_4541213 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[Global_4541213 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[Global_4541213 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[Global_4541213 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[Global_4541213 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4539964[Global_4541213 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_8824, 64);
			StringConCat(&cVar3, "</C>", 64);
			iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar3, 0);
			MISC::SET_BIT(&Global_4541229, 1);
			Global_22663 = 1;
			Global_22662 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_4539964[Global_4541213 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4539964[Global_4541213 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar5, 0);
			}
			else
			{
				iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar4, 0);
			}
			MISC::SET_BIT(&Global_4541229, 1);
			Global_22663 = 1;
			Global_22662 = iLocal_48;
			Global_22666 = 0;
		}
	}
	Global_4539964[Global_4541213 /*104*/].f_16 = iLocal_48;
}

void func_55()//Position - 0x30E2
{
	if (BitTest(Global_8136, 1))
	{
		func_58();
		func_56();
		Global_113386.f_14051[Global_20266 /*20*/].f_18 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_45[Global_20266] = NETWORK::GET_NETWORK_TIME();
			iLocal_43[Global_20266] = 1;
		}
		else if (!BitTest(Global_8136, 10))
		{
			iLocal_44[Global_20266] = MISC::GET_GAME_TIMER();
			iLocal_43[Global_20266] = 1;
		}
		else
		{
			iLocal_44[0] = MISC::GET_GAME_TIMER();
			iLocal_44[2] = MISC::GET_GAME_TIMER();
			iLocal_44[1] = MISC::GET_GAME_TIMER();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		MISC::CLEAR_BIT(&Global_8136, 1);
	}
}

void func_56()//Position - 0x317B
{
	__LIB_0__::func_698();
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = __LIB_0__::func_369(1198, -1, 0);
	}
	if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		if (!__LIB_0__::func_77(0))
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 2000, 100);
		}
	}
}

void func_58()//Position - 0x321F
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	char cVar6[64];
	if (Global_22666 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_22666))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_22666))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22666), 64);
				Global_22674[Global_22672] = Global_22666;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_22674[Global_22672] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_22674[Global_22672] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_113386.f_14141[Global_22672 /*104*/].f_17 /*29*/].f_7)), 64);
		if (Global_113386.f_14141[Global_22672 /*104*/].f_17 == 159)
		{
			StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */), 64);
		}
		Global_22674[Global_22672] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if ((((((((Global_113386.f_14141[Global_22672 /*104*/].f_32 == 4 || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 5) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 6) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 7) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 8) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 9) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 10) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 11) || Global_113386.f_14141[Global_22672 /*104*/].f_32 == 12)
	{
		iVar1 = 0;
		iVar2 = __LIB_16__::func_286(9, Global_113386.f_14141[Global_22672 /*104*/].f_49);
		switch (iVar2)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[Global_22672 /*104*/]));
		while (iVar1 < iVar2)
		{
			switch (Global_113386.f_14141[Global_22672 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2815059.f_1725[iVar1 /*4*/]));
					break;
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931438[iVar1 /*4*/]));
					break;
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931479[iVar1 /*4*/]));
					break;
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931500[iVar1 /*4*/]));
					break;
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931517[iVar1 /*4*/]));
					break;
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931530[iVar1 /*4*/]));
					break;
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931543[iVar1 /*4*/]));
					break;
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931556[iVar1 /*4*/]));
					break;
				case 12:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931569[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar3, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_113386.f_14141[Global_22672 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar3, 0);
		Global_22663 = 3;
		Global_22662 = iLocal_48;
		Global_22666 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_113386.f_14141[Global_22672 /*104*/]));
		switch (Global_113386.f_14141[Global_22672 /*104*/].f_32)
		{
			case 0:
				break;
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_33));
				if (Global_113386.f_14141[Global_22672 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
				}
				if ((Global_113386.f_14141[Global_22672 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[Global_22672 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[Global_22672 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[Global_22672 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_83));
					}
				}
				break;
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[Global_22672 /*104*/].f_49);
				break;
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[Global_22672 /*104*/].f_49);
				if (Global_113386.f_14141[Global_22672 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
				}
				if ((Global_113386.f_14141[Global_22672 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[Global_22672 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[Global_22672 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[Global_22672 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[Global_22672 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_113386.f_14141[Global_22672 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar4, "<C>", 64);
			StringConCat(&cVar4, &Global_8824, 64);
			StringConCat(&cVar4, "</C>", 64);
			iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar4, 0);
			Global_22663 = 3;
			Global_22662 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar5, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_113386.f_14141[Global_22672 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_113386.f_14141[Global_22672 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar6, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar6, &cVar5, 64);
				iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar6, 0);
			}
			else
			{
				iLocal_48 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar5, 0);
			}
			Global_22663 = 3;
			Global_22662 = iLocal_48;
			Global_22666 = 0;
		}
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_16 = iLocal_48;
}

void func_60()//Position - 0x3910
{
	if (BitTest(Global_8136, 19))
	{
		MISC::CLEAR_BIT(&Global_8136, 19);
		__LIB_0__::func_698();
		Global_113386.f_14051[3 /*20*/].f_18 = 0;
		Global_113386.f_14051[3 /*20*/].f_17 = 0;
	}
}

void func_61()//Position - 0x3948
{
	if (iLocal_43[Global_20266] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_47 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_45[Global_20266]);
		}
		else
		{
			iLocal_46[Global_20266] = MISC::GET_GAME_TIMER();
			iLocal_47 = (iLocal_46[Global_20266] - iLocal_44[Global_20266]);
		}
		if (iLocal_47 > 300000)
		{
			Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
			Global_113386.f_14051[Global_20266 /*20*/].f_17 = 0;
			iLocal_43[Global_20266] = 0;
		}
	}
}

void func_62()//Position - 0x39C1
{
	int iVar0;
	__LIB_0__::func_698();
	if (Global_78319 == 0)
	{
		if (!__LIB_0__::func_73())
		{
			if (iLocal_53 == 0)
			{
				if ((Global_113386.f_14141[21 /*104*/].f_24 != 0 || Global_113386.f_14141[22 /*104*/].f_24 != 0) || Global_113386.f_14141[23 /*104*/].f_24 != 0)
				{
					switch (Global_20266)
					{
						case 0:
							if (Global_113386.f_14141[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						case 1:
							if (Global_113386.f_14141[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						case 2:
							if (Global_113386.f_14141[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_53 = 0;
				iVar0 = 0;
				__LIB_0__::func_698();
				if (iLocal_42 == 21 && Global_20266 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_20266 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_20266 != 2)
				{
					iVar0 = 1;
				}
				if (Global_113386.f_14141[iLocal_42 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!__LIB_0__::isGlobal_43052EqualsValue(14))
					{
						if (func_65(Global_113386.f_14141[iLocal_42 /*104*/].f_17, &(Global_113386.f_14141[iLocal_42 /*104*/]), Global_113386.f_14141[iLocal_42 /*104*/].f_24, Global_113386.f_14141[iLocal_42 /*104*/].f_25, Global_113386.f_14141[iLocal_42 /*104*/].f_26, Global_113386.f_14141[iLocal_42 /*104*/].f_29, 0, 1, Global_113386.f_14141[iLocal_42 /*104*/].f_31, Global_113386.f_14141[iLocal_42 /*104*/].f_30))
						{
							Global_113386.f_14141[iLocal_42 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_64 == 0)
			{
				if (Global_8812[Global_20266])
				{
					iLocal_64 = 1;
					iLocal_65 = Global_20266;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_62 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_56 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_63 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_62);
				}
				else
				{
					iLocal_57 = MISC::GET_GAME_TIMER();
					iLocal_63 = (iLocal_57 - iLocal_56);
				}
				if (iLocal_63 > 7000)
				{
					if (__LIB_0__::func_215(0))
					{
						Global_8746[1 /*6*/] = { Global_8795[Global_20266 /*4*/] };
						Global_8822 = Global_8817[Global_20266];
						Global_8812[Global_20266] = 0;
						iLocal_64 = 0;
					}
				}
				if (iLocal_65 != Global_20266)
				{
					iLocal_64 = 0;
				}
			}
		}
	}
}

int func_65(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x3E1F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (__LIB_3__::func_427(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

void func_80()//Position - 0x4853
{
	if (BitTest(Global_8136, 6))
	{
		if (Global_8840 > 0)
		{
			if (BitTest(Global_8137, 11))
			{
				if (iLocal_41)
				{
					__LIB_16__::func_287(iLocal_37, "CLEAR_ALL");
					if (BitTest(Global_8136, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (BitTest(Global_4541229, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_78319 == 1)
					{
						if (BitTest(Global_4541229, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						if (BitTest(Global_4541229, 28))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (BitTest(Global_4541229, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						if ((BitTest(Global_4541229, 12) || BitTest(Global_4541229, 11)) || BitTest(Global_8136, 25))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					MISC::CLEAR_BIT(&Global_8137, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_8840 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_37);
			MISC::CLEAR_BIT(&Global_8136, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_8840 > 0)
	{
		iLocal_37 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_37))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_8136, 6);
	}
}

void func_82()//Position - 0x4A1D
{
	if (BitTest(Global_8137, 7))
	{
		MISC::SET_BIT(&Global_8137, 6);
		MISC::CLEAR_BIT(&Global_8137, 7);
		return;
	}
	if (!BitTest(Global_8137, 7))
	{
		MISC::CLEAR_BIT(&Global_8137, 6);
		return;
	}
}

void func_83()//Position - 0x4A54
{
	if (BitTest(Global_8137, 4))
	{
		MISC::SET_BIT(&Global_8137, 3);
		MISC::CLEAR_BIT(&Global_8137, 4);
		return;
	}
	if (!BitTest(Global_8137, 4))
	{
		MISC::CLEAR_BIT(&Global_8137, 3);
		return;
	}
}

void func_84()//Position - 0x4A8B
{
	if (BitTest(Global_8137, 2))
	{
		if (!Global_20266.f_1 == 1)
		{
			Global_20266.f_1 = 0;
		}
		MISC::CLEAR_BIT(&Global_8137, 2);
		return;
	}
	if (!BitTest(Global_8137, 2))
	{
		if (!Global_20266.f_1 == 1)
		{
			if (Global_20266.f_1 < 4)
			{
				Global_20266.f_1 = 3;
			}
		}
		return;
	}
}

