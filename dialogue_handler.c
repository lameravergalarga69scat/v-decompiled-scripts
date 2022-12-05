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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	char cLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	char cLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_8137, 1))
		{
			if (!BitTest(Global_8136, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_20254)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
						if (Global_20209)
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_8137, 1);
				}
			}
		}
		if (BitTest(Global_20471, 0))
		{
			if (!__LIB_0__.func_75())
			{
				if (!BitTest(Global_20471, 1))
				{
					MISC::SET_BIT(&Global_20471, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_89 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_85 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_89);
				}
				else
				{
					iLocal_86 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_113(&Global_21059, &Global_21675, &Global_21595, Global_21608, Global_22590, Global_22591, 0))
					{
						Global_20471 = 0;
					}
				}
				else
				{
					Global_20471 = 0;
				}
			}
		}
		if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !BitTest(Global_4718592.f_17, 4)) && !__LIB_0__.func_493()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21605 != 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					__LIB_0__.func_74();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_107();
		}
		switch (Global_21605)
		{
			case 0:
				break;
			case 1:
				if (Global_21611)
				{
					if (Global_21601 == 0)
					{
						func_105();
					}
					else
					{
						func_104();
						func_105();
					}
				}
				else if (Global_21601 == 0)
				{
					func_92();
				}
				else
				{
					func_104();
					func_74();
				}
				break;
			case 2:
				func_68();
				break;
			case 3:
				func_64();
				break;
			case 4:
				if (Global_21611)
				{
					if (Global_21613)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			case 5:
				func_4();
				break;
			case 6:
				func_1();
				break;
			default:
				break;
		}
	}
}

void func_1()//Position - 0x259
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_2()//Position - 0x26D
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21616 = 0;
	Global_21617 = 0;
	Global_21618 = 0;
	Global_21619 = 0;
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
	Global_21609 = 0;
	Global_21610 = 0;
	Global_21652 = 0;
	Global_21653 = 0;
	Global_21656 = 0;
	Global_21658 = 0;
	Global_21657 = 0;
	Global_21660 = 0;
	Global_21659 = 0;
	Global_22622 = 0;
	Global_21662 = 0;
	if (Global_20266.f_1 == 10)
	{
	}
	else if (BitTest(Global_8136, 11))
	{
		__LIB_11__.func_304();
	}
	Global_21611 = 0;
	Global_21612 = 0;
	Global_21613 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22595 = 0;
	Global_22602 = 0;
	Global_22601 = 0;
	Global_22598 = 0;
	Global_22597 = 0;
	Global_22599 = 0;
	Global_22600 = 0;
	Global_21601 = 0;
	Global_21602 = 0;
	Global_21603 = 0;
	Global_21604 = 0;
	Global_21863 = 0;
	Global_22626 = 5000;
	Global_20249 = 0;
	MISC::CLEAR_BIT(&Global_8136, 20);
	MISC::CLEAR_BIT(&Global_8136, 24);
	MISC::CLEAR_BIT(&Global_8137, 23);
	MISC::CLEAR_BIT(&Global_8138, 0);
	MISC::CLEAR_BIT(&Global_8137, 9);
	MISC::CLEAR_BIT(&Global_8137, 31);
	MISC::CLEAR_BIT(&Global_8137, 17);
	MISC::CLEAR_BIT(&Global_8138, 5);
	Global_22589 = 0;
	Global_22588 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_21605 = 4;
	}
	else
	{
		Global_21605 = 0;
		Global_22616 = 0;
		Global_22627 = MISC::GET_GAME_TIMER();
	}
}

void func_4()//Position - 0x407
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_5()//Position - 0x41B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_21661 == 0)
			{
				__LIB_0__.func_205();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		__LIB_0__.func_205();
		__LIB_0__.func_205();
	}
	if (Global_22597 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22616 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_31 = 1;
			}
		}
		else if (Global_22616 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_22599 > 0)
	{
		iLocal_37 = MISC::GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_22599)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_22597 = 0;
		}
	}
	if (Global_22616 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_21605 = 6;
		}
	}
}

void func_7()//Position - 0x4D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!BitTest(Global_8136, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_78319 == 0)
					{
						__LIB_19__.func_937();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_78319 == 0)
				{
					__LIB_11__.func_304();
				}
			}
		}
	}
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		__LIB_6__.func_849(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22616 == 1)
		{
			if (Global_22617 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_31 = 1;
				Global_22617 = 0;
			}
		}
	}
	else if (Global_22616 == 0)
	{
		if (Global_22617 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_22617 = 0;
		}
	}
	if (Global_21658 == 0)
	{
		if (!Global_21618)
		{
			if (!BitTest(Global_8137, 31))
			{
				if (!BitTest(Global_8137, 27))
				{
					if (func_54())
					{
						if (Global_20266.f_1 > 6)
						{
							MISC::SET_BIT(&Global_8137, 24);
							MISC::SET_BIT(&Global_8137, 27);
							MISC::CLEAR_BIT(&Global_8137, 26);
							MISC::CLEAR_BIT(&Global_8137, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_21618 == 0)
	{
		if (Global_21658 == 1)
		{
			MISC::SET_BIT(&Global_8137, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8137, 23);
		}
		if (Global_21662)
		{
			if (Global_21658 == 0)
			{
				Global_21224 = { Global_21663 };
				Global_21681 = { Global_21669 };
				Global_21615 = 0;
				Global_22622 = 6;
				__LIB_0__.func_206();
				return;
			}
		}
		if (!Global_21660)
		{
			while (Global_21658 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21660)
						{
							iLocal_30 = 1;
							Global_22620 = 1;
							__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
							__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20254)
							{
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8136, 17);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8136, 17);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22618 = 1;
							if (__LIB_0__.func_166(Global_7451, Global_20266) == 0)
							{
								__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21747, "CELL_300" /* GXT: CHAR_DEFAULT */, &(Global_117[Global_7451 /*10*/].f_4), "CELL_195" /* GXT: Unknown */, 0);
								__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
								__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20254)
							{
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_8136, 17);
						}
					}
					if (__LIB_9__.func_596(2, Global_20235, 0))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						__LIB_19__.func_847();
						if (Global_21660)
						{
							Global_21224 = { Global_21741 };
							Global_22622 = 5;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22589 + 1)
								{
									uLocal_94[iVar0] = __LIB_1__.func_192(&(Global_21864[iVar0 /*6*/]));
									uLocal_95[iVar0] = __LIB_1__.func_192(&(Global_22226[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22589, &Global_20894, Global_7451, &Global_21681, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21759[0 /*6*/]), &(Global_21811[0 /*6*/]), &(Global_21759[1 /*6*/]), &(Global_21811[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 1;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							__LIB_26__.func_50();
							return;
						}
						else
						{
							Global_21224 = { Global_21699 };
							Global_22622 = 1;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						__LIB_26__.func_50();
						__LIB_0__.func_206();
						return;
					}
					if (__LIB_9__.func_596(2, Global_20236, 0) || BitTest(Global_8136, 24))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						__LIB_19__.func_847();
						if (Global_21660)
						{
							Global_21224 = { Global_21735 };
							Global_22622 = 4;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22588 + 1)
								{
									uLocal_96[iVar1] = __LIB_1__.func_192(&(Global_22045[iVar1 /*6*/]));
									uLocal_97[iVar1] = __LIB_1__.func_192(&(Global_22407[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22588, &Global_20894, Global_7451, &Global_21681, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21772[0 /*6*/]), &(Global_21824[0 /*6*/]), &(Global_21772[1 /*6*/]), &(Global_21824[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 2;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							__LIB_26__.func_50();
							return;
						}
						else
						{
							Global_21224 = { Global_21705 };
							Global_22622 = 2;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						__LIB_26__.func_50();
						__LIB_0__.func_206();
						return;
					}
					if (__LIB_9__.func_596(2, Global_20238, 0))
					{
						if (Global_21660)
						{
							Global_20192 = 0.19f;
							Global_21658 = 0;
							__LIB_19__.func_847();
							func_47();
							Global_21224 = { Global_21729 };
							Global_22622 = 3;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							__LIB_26__.func_50();
							__LIB_0__.func_206();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21658)
			{
				SYSTEM::WAIT(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
						__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
						__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_9__.func_619(Global_20247, "SET_HEADER", "CELL_601" /* GXT: Which Service? */, 0, 0, 0, 0);
						if (Global_20254)
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8136, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (__LIB_9__.func_596(2, Global_20235, 0))
					{
						func_47();
						Global_21658 = 0;
						__LIB_19__.func_847();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
						iLocal_99 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_99))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_21224 = { Global_21735 };
								Global_22622 = 4;
								break;
							case 1:
								Global_21224 = { Global_21729 };
								Global_22622 = 3;
								break;
							case 2:
								Global_21224 = { Global_21741 };
								Global_22622 = 5;
								break;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						__LIB_26__.func_50();
						__LIB_0__.func_206();
						return;
					}
					if (__LIB_9__.func_596(2, Global_20236, 0))
					{
						Global_21658 = 0;
						__LIB_19__.func_847();
					}
				}
			}
		}
		if (Global_21606 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_20266.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_21605 = 6;
		}
		if (!Global_1574982)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		__LIB_32__.func_479();
	}
	else if (Global_20464 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20234, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						__LIB_19__.func_847();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_21654 = 1;
						Global_21655 = 1;
						Global_21605 = 6;
						func_15();
						Global_20266.f_1 = Global_20268;
						__LIB_32__.func_479();
					}
				}
			}
		}
	}
}

void func_15()//Position - 0x1C27
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return;
	}
	switch (Global_20268)
	{
		case 5:
			Global_20268 = 6;
			break;
		case 6:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				MISC::CLEAR_BIT(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		case 7:
			Global_20268 = 3;
			break;
		case 3:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				MISC::CLEAR_BIT(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		default:
			Global_20268 = 3;
			break;
	}
}

void func_16()//Position - 0x1CBA
{
	if (iLocal_98)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20242, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			__LIB_19__.func_917();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			__LIB_19__.func_854();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x2027
{
	var uVar0;
	var uVar1;
	__LIB_0__.func_391(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	__LIB_11__.func_170();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_26__.func_460(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2086
{
	int iVar0;
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					__LIB_0__.func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_0__.func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
					}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		__LIB_0__.func_206();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

void func_30()//Position - 0x2546
{
	if (__LIB_0__.func_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = __LIB_20__.func_645();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2930
{
	__LIB_0__.func_391(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	__LIB_11__.func_170();
	if (iParam7 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	__LIB_11__.func_169(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

void func_47()//Position - 0x29B2
{
	if (__LIB_9__.func_607())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_20209)
				{
					if (!BitTest(Global_8136, 11))
					{
						__LIB_19__.func_937();
					}
				}
			}
		}
	}
}

void func_52()//Position - 0x2D37
{
	if (__LIB_9__.func_607())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_20209)
				{
					if (BitTest(Global_8136, 11))
					{
						__LIB_11__.func_304();
					}
				}
			}
		}
	}
}

int func_54()//Position - 0x2DA5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_90);
	}
	else
	{
		iLocal_88 = MISC::GET_GAME_TIMER();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_60()//Position - 0x2F43
{
	if (__LIB_9__.func_596(2, Global_20243, 0))
	{
		if (Global_22616 == 0)
		{
			if (Global_21611)
			{
				if (BitTest(Global_8137, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_63()//Position - 0x30BB
{
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		__LIB_6__.func_849(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22618 = 1;
		if (__LIB_0__.func_166(Global_7451, Global_20266) == 0)
		{
			__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21747, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_195" /* GXT: Unknown */, "CELL_195" /* GXT: Unknown */, 0);
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20192 = 0.2f;
		if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	if (Global_21658 == 1)
	{
		if (Global_20266.f_1 < 6)
		{
			Global_21658 = 0;
		}
		else
		{
			if (Global_20206 == 0)
			{
				if (__LIB_9__.func_596(2, Global_20235, 0))
				{
					Global_20192 = 0.19f;
					Global_21658 = 0;
					__LIB_19__.func_847();
					Global_22623 = 1;
					iLocal_32 = 1;
				}
			}
			if (__LIB_9__.func_596(2, Global_20236, 0))
			{
				Global_20192 = 0.19f;
				Global_21658 = 0;
				__LIB_19__.func_847();
				Global_22623 = 2;
			}
		}
	}
	else if (Global_22623 == 2)
	{
		if (Global_21606 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_21605 = 6;
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		__LIB_32__.func_479();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
		func_15();
		Global_20266.f_1 = Global_20268;
		__LIB_32__.func_479();
	}
}

void func_64()//Position - 0x32E8
{
	if (Global_20472 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_20472 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_20472 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_21605 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_20472 == 1)
		{
			Global_20472 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_22626 || Global_20472 == 1)
	{
		if (__LIB_9__.func_596(2, Global_20234, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						__LIB_19__.func_847();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_21654 = 1;
						Global_21605 = 6;
						MISC::CLEAR_BIT(&Global_8136, 27);
						if (!Global_21616)
						{
							MISC::SET_BIT(&Global_8137, 5);
						}
						func_15();
						Global_20266.f_1 = Global_20268;
						__LIB_32__.func_479();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 27);
		Global_21605 = 4;
		Global_21662 = 0;
		__LIB_20__.func_597();
		__LIB_20__.func_596();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				if (!BitTest(Global_8138, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_8138, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
	}
}

void func_65()//Position - 0x340F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_90 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_87 = MISC::GET_GAME_TIMER();
	}
}

void func_68()//Position - 0x3616
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_92 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_78);
		iLocal_93 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_81);
	}
	else
	{
		iLocal_77 = MISC::GET_GAME_TIMER();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = MISC::GET_GAME_TIMER();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21652 == 1)
	{
		if (__LIB_9__.func_607())
		{
			if (iLocal_92 > 4000)
			{
				if (BitTest(Global_8136, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
					{
						__LIB_19__.func_847();
						Global_20265 = 2;
						__LIB_20__.func_597();
						__LIB_20__.func_596();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (BitTest(Global_8136, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
				{
					__LIB_19__.func_847();
					Global_20265 = 2;
					__LIB_20__.func_597();
					__LIB_20__.func_596();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_20265 = 3;
	}
	if (Global_20265 == 2)
	{
		iLocal_30 = 0;
		Global_21605 = 4;
		__LIB_19__.func_937();
		Global_21662 = 0;
		__LIB_20__.func_597();
		__LIB_20__.func_596();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
		Global_22621 = 0;
	}
	if (Global_21652 == 0)
	{
		if (Global_20265 == 3)
		{
			if (Global_21618)
			{
				__LIB_26__.func_418();
				__LIB_6__.func_849(0);
			}
			else
			{
				__LIB_0__.func_371();
				Global_22621 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_21605 = 6;
				func_15();
				Global_20266.f_1 = Global_20268;
				__LIB_32__.func_479();
			}
		}
	}
	else if (Global_20265 == 3)
	{
	}
}

void func_74()//Position - 0x38D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_21601)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_21224.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_20473[iVar2 /*6*/] = { Global_21224.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20473[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_46, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				iVar5 = func_85(iVar13);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(iVar13);
				bVar7 = func_80(iVar13);
				bVar8 = func_79(iVar13);
				iVar12 = func_78(iVar13);
				bVar9 = func_77(iVar13);
				bVar10 = func_76(iVar13);
				bVar11 = func_75(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_20473[iVar2 /*6*/]), &(Global_21224.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				iVar5 = func_85(0);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(0);
				bVar7 = func_80(0);
				bVar8 = func_79(0);
				iVar12 = func_78(0);
				bVar9 = func_77(0);
				bVar10 = func_76(0);
				bVar11 = func_75(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_21224.f_6[iLocal_75 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21611 == 0)
	{
		AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_68);
		AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_69);
		AUDIO::START_SCRIPT_CONVERSATION(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
		Global_21605 = 4;
	}
}

int func_75(int iParam0)//Position - 0x3B56
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)//Position - 0x3B8B
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x3BC0
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x3BF5
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x3C6B
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)//Position - 0x3CA0
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)//Position - 0x3CD5
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()//Position - 0x3D08
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()//Position - 0x3D33
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()//Position - 0x3D5E
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x3D89
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return __LIB_9__.func_612(sVar0);
}

int func_87(int iParam0)//Position - 0x404E
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return __LIB_9__.func_612(sVar0);
}

int func_88(int iParam0)//Position - 0x4074
{
	char* sVar0;
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return __LIB_9__.func_612(sVar0);
}

void func_89()//Position - 0x4098
{
	cLocal_70 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_90()//Position - 0x40D1
{
	cLocal_60 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_91()//Position - 0x413E
{
	cLocal_55 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

void func_92()//Position - 0x4177
{
	func_93();
	AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_68);
	AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_69);
	if (Global_22597)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
		iLocal_36 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
	}
	Global_21605 = 4;
}

void func_93()//Position - 0x41D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_21681))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (__LIB_0__.func_52() || __LIB_0__.func_53())
		{
			if (Global_1835497 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_78319 || __LIB_0__.func_155(0))
		{
			if (Global_1835497 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!__LIB_20__.func_645())
		{
			iVar14 = 1;
		}
		if (func_98(MISC::GET_HASH_KEY(&Global_21681)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_21681, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21681, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_21681, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21681, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22615 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_21224 };
		StringConCat(&cLocal_42, "A", 24);
		Global_20473[iVar2 /*6*/] = { Global_21224 };
		StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20473[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_46, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4541417 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			iVar5 = func_85(iVar2);
			bLocal_67 = func_84();
			bLocal_68 = func_83();
			bLocal_69 = func_82();
			bVar6 = func_81(iVar2);
			bVar7 = func_80(iVar2);
			bVar8 = func_79(iVar2);
			iVar12 = func_78(iVar2);
			bVar9 = func_77(iVar2);
			bVar10 = func_76(iVar2);
			bVar11 = func_75(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar2 /*6*/])))
			{
				if (Global_22595 == 0 && Global_22601 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_20473[iVar2 /*6*/]), &Global_22603))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_22615 = iVar2;
					if (Global_22601 == 1)
					{
						Global_22601 = 0;
					}
				}
			}
			else if (Global_22601 == 0 && Global_22595 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &cLocal_46, iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				iVar5 = func_85(iVar2);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(iVar2);
				bVar7 = func_80(iVar2);
				bVar8 = func_79(iVar2);
				iVar12 = func_78(iVar2);
				bVar9 = func_77(iVar2);
				bVar10 = func_76(iVar2);
				bVar11 = func_75(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &Global_21224, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()//Position - 0x45EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20894[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_20894[iVar0 /*10*/]) || Global_20894[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_20894[iVar0 /*10*/], &(Global_20894[iVar0 /*10*/].f_1));
			}
			if (Global_20894.f_161 == iVar0)
			{
				if ((Global_20894.f_162 != 0f && Global_20894.f_162.f_1 != 0f) && Global_20894.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::SET_POSITION_FOR_NULL_CONV_PED(Global_20894.f_161, Global_20894.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4541417 == 1)
	{
		Global_4541417 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4541236[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4541236[iVar0 /*9*/]) || Global_4541236[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4541236[iVar0 /*9*/].f_8, Global_4541236[iVar0 /*9*/], &(Global_4541236[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()//Position - 0x46FB
{
	cLocal_70 = { Global_21224 };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_96()//Position - 0x472E
{
	cLocal_60 = { Global_21224 };
	StringConCat(&cLocal_60, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_60), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_97()//Position - 0x4795
{
	cLocal_55 = { Global_21224 };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)//Position - 0x47C8
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case joaat("IMTRAAU"):
		case joaat("IMAMPAU"):
		case joaat("IMWEDAU"):
		case joaat("IMBUSAU"):
		case joaat("IMROCAU"):
		case joaat("IMFLIAU"):
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case joaat("HS3SPAU"):
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case joaat("HS4C1AU"):
		case joaat("HS4C2AU"):
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case joaat("SM2AGAU"):
		case joaat("SM2MAAU"):
		case joaat("SM2TOAU"):
		case joaat("SM2WBAU"):
		case joaat("SM2YOAU"):
		case joaat("SM2ULAU"):
		case joaat("SM2U1AU"):
		case joaat("SM2U2AU"):
		case joaat("SM2U3AU"):
		case joaat("SM2U4AU"):
		case joaat("SM2U5AU"):
		case joaat("SM2U6AU"):
			return 1;
		default:
	}
	return 0;
}

void func_104()//Position - 0x4C11
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (__LIB_0__.func_52() || __LIB_0__.func_53())
	{
		if (Global_1835497 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_78319)
	{
		if (Global_1835497 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!__LIB_20__.func_645())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_21681))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(MISC::GET_HASH_KEY(&Global_21681)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_21681, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21681, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_21681, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21681, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_94();
}

void func_105()//Position - 0x4D76
{
	while (Global_20249 == 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_20249 = 0;
	if (BitTest(Global_8136, 20))
	{
		MISC::SET_BIT(&Global_8137, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8137, 1);
	}
	Global_20250 = 0;
	if (Global_21601 == 0)
	{
		if (!Global_21618)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20472 = 0;
	if (Global_21615)
	{
		if (Global_22622 == 0)
		{
			if (Global_21618 == 0)
			{
				iLocal_34 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21224.f_368, Global_21224.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20472 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_20472 == 1 && Global_21605 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_20472 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_21605 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_20472 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_21605 != 1)
		{
		}
		if (Global_20472 == 0)
		{
		}
	}
	Global_20472 = 0;
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 0) || Global_21605 != 1) || Global_20232 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
	else
	{
		if (Global_21613)
		{
			Global_22623 = 0;
			iLocal_32 = 0;
		}
		if (Global_21615 == 0)
		{
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			iLocal_30 = 0;
			if (Global_22622 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21224.f_368, Global_21224.f_369);
				SYSTEM::WAIT(0);
				Global_21605 = 3;
				Global_20472 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_8136, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_20472 = 0;
				Global_21605 = 4;
			}
			Global_20265 = 0;
			if (Global_21616 == 1)
			{
				if (Global_20266.f_1 == 10)
				{
				}
				if (!Global_20266.f_1 == 9)
				{
					if (Global_20266.f_1 > 4)
					{
						if (Global_20249 == 0)
						{
							Global_20266.f_1 = 9;
							__LIB_32__.func_479();
						}
					}
					else
					{
						Global_20266.f_1 = 4;
					}
				}
				else
				{
					__LIB_32__.func_479();
				}
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_20472 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_20472 = 0;
							}
						}
					}
				}
				if (Global_20266.f_1 == 6)
				{
				}
				if (Global_20266.f_1 == 10)
				{
				}
				if (Global_20266.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21605 = 6;
					Global_20250 = 1;
					return;
				}
				Global_20266.f_1 = 9;
				__LIB_32__.func_479();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_20472 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_20472 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_84);
				}
				else
				{
					iLocal_83 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
					}
				}
			}
			if (!BitTest(Global_8136, 11))
			{
				if (__LIB_9__.func_607() == 0)
				{
					__LIB_19__.func_937();
				}
			}
			if (Global_20249 == 0)
			{
				if (!Global_22622 == 0)
				{
					Global_21662 = 0;
					__LIB_20__.func_597();
					__LIB_20__.func_596();
					if (!Global_21618)
					{
						if (Global_22622 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21224.f_368, Global_21224.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				__LIB_0__.func_296();
				Global_20250 = 1;
			}
		}
		else
		{
			Global_20265 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_20266.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_8137, 21);
				}
			}
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			if (Global_20266.f_1 == 3)
			{
				Global_20266.f_1 = 4;
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_20266.f_1 == 6)
				{
				}
				Global_20266.f_1 = 9;
				__LIB_32__.func_479();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_84);
				}
				else
				{
					iLocal_83 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
						MISC::CLEAR_BIT(&Global_8137, 21);
					}
				}
			}
			if (Global_20249 == 0)
			{
				Global_21605 = 2;
			}
			else
			{
				__LIB_0__.func_296();
				Global_20250 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_78 = NETWORK::GET_NETWORK_TIME();
				iLocal_81 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_76 = MISC::GET_GAME_TIMER();
				iLocal_79 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_107()//Position - 0x5216
{
	float fVar0;
	fVar0 = __LIB_20__.func_598(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20197, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22619 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_32 = 0;
	}
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x541A
{
	__LIB_0__.func_391(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)//Position - 0x5468
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					__LIB_0__.func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (__LIB_0__.func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		__LIB_0__.func_206();
		__LIB_7__.func_265();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

