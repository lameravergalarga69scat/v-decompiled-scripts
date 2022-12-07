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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
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
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_56 = -1;
	iLocal_57 = -1;
	fLocal_66 = 0f;
	iLocal_67 = 1;
	if (Global_78319)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_51 = __LIB_18__::func_173();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	Global_22638 = 0;
	Global_22639 = 0;
	Global_20266.f_1 = 8;
	Global_22639 = 1;
	Global_44247 = 1;
	if (Global_20248)
	{
		func_78(0);
		func_77(1);
		func_75(0);
	}
	SYSTEM::SETTIMERB(0);
	Local_47 = { Global_20219[Global_20211 /*3*/] };
	Local_48 = { Local_47 };
	Local_48.f_0 = (Local_48.f_0 - 10f);
	Local_48.f_1 = (Local_48.f_1 + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			if (Global_22639 && !Global_22638)
			{
				func_73();
			}
			else if (Global_22638)
			{
				func_68();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 1;
			}
			else if (Global_20248)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 1;
					func_66(Global_20247, iLocal_51);
					__LIB_9__::func_619(Global_20247, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_44248)
					{
						Global_44248 = 0;
						iLocal_54 = 1;
					}
					if (iLocal_54)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_56 == -1)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0;
								fLocal_66 = 0f;
							}
							__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_66(Global_20247, iLocal_51);
							__LIB_9__::func_619(Global_20247, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_55 = 0;
							if (iVar0 > 0)
							{
								func_78(1);
							}
							else
							{
								func_78(0);
							}
							func_77(1);
							func_75(0);
							__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 8f, fLocal_66, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_77(1);
							func_63();
							if (iLocal_57 == -1)
							{
								func_61(iLocal_51, iLocal_56);
								func_56(Global_20247, iLocal_51, iLocal_56);
								Global_22665 = 0;
								iLocal_64 = func_54(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_51(iLocal_51, iLocal_56);
									if (!__LIB_0__::func_67(37))
									{
										switch (__LIB_11__::func_512("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */))
										{
											case 2:
												__LIB_18__::func_203("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												__LIB_0__::func_460(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!BitTest(Global_4541229, 17))
										{
											MISC::SET_BIT(&Global_4541229, 17);
											__LIB_0__::func_151("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, -1);
										}
									}
									func_75(1);
								}
								else
								{
									if (!__LIB_0__::func_67(38))
									{
										switch (__LIB_11__::func_512("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */))
										{
											case 2:
												__LIB_18__::func_203("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												__LIB_0__::func_460(38);
												break;
											}
									}
									func_75(0);
								}
								__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_20247, iLocal_51, iLocal_56);
								__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_54 = 0;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_51 == __LIB_18__::func_173())
			{
				Global_44247 = 0;
				func_4();
			}
		}
		if (__LIB_9__::func_594())
		{
			Global_22638 = 0;
			Global_22639 = 0;
			Global_44247 = 0;
			__LIB_19__::func_845(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_4()//Position - 0x544
{
	if (Global_53556 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_53556));
		Global_53556 = -1;
	}
	Global_44247 = 0;
	if (Global_20266.f_1 > 4)
	{
		Global_20266.f_1 = 6;
		func_5();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5()//Position - 0x57D
{
	char cVar0[24];
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_8__::func_120(Global_8741);
			if (Global_8741 == 1)
			{
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8136, 17);
			}
			if (Global_78319)
			{
				__LIB_19__::func_846();
				MISC::CLEAR_BIT(&Global_8138, 9);
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		case 7:
			break;
		case 10:
			__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20209)
				{
					__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_20265 == 1)
			{
				__LIB_9__::func_606();
				__LIB_2__::func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21620);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					__LIB_0__::func_478("CELL_300" /* GXT: CHAR_DEFAULT */);
					__LIB_0__::func_478("CELL_217" /* GXT: INCOMING CALL */);
					__LIB_0__::func_478("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (__LIB_0__::func_166(Global_7451, Global_20266) == 0)
				{
					__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				__LIB_2__::func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_9__::func_606();
				if (Global_21618)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21620);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					__LIB_0__::func_478("CELL_300" /* GXT: CHAR_DEFAULT */);
					__LIB_0__::func_478("CELL_219" /* GXT: CONNECTED */);
					__LIB_0__::func_478("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (__LIB_0__::func_166(Global_7451, Global_20266) == 0)
					{
						__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		default:
			break;
	}
}

void func_6()//Position - 0xB35
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
	{
		__LIB_10__::func_687();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20209)
				{
					__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

char* func_16(int iParam0)//Position - 0x1627
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		case 1:
			return "Epsilon_Cars";
		case 2:
			return "Epsilon_Cars";
		case 3:
			return "Epsilon_Cars";
		case 4:
			return "Epsilon_Cars";
		case 5:
			return "Epsilon_Cars";
		case 6:
			return "Epsilon_Cars";
		case 12:
			return "Assassinations";
		case 13:
			return "Assassinations";
		case 14:
			return "Assassinations";
		case 15:
			return "Assassinations";
		case 64:
			return "BSPBadHacker";
		case 65:
			return "BPDGoodHacker";
		case 66:
			return "BPSMedHacker";
		case 75:
			return "email_quarry_bail_bond";
		case 76:
			return "email_abandonedfarm_bail_bond";
		case 77:
			return "email_mountain_bail_bond";
		case 78:
			return "email_hobocamp_bail_bond";
		case 80:
			return "email_quarry_bail_bond";
		case 81:
			return "email_abandonedfarm_bail_bond";
		case 82:
			return "email_mountain_bail_bond";
		case 83:
			return "email_hobocamp_bail_bond";
		case 205:
			return "hush_foxymama21";
		case 209:
			return "hush_alterego";
		case 212:
			return "hush_michael";
		case 238:
			return "hush_trevor";
		default:
	}
	return "NULL";
}

void func_17()//Position - 0x1783
{
	bool bVar0;
	if (Global_22665)
	{
		iLocal_56 = 0;
		fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
		if (func_39(iLocal_51) == 0)
		{
			iLocal_56 = -1;
		}
		if (!iLocal_56 == -1)
		{
			Global_20266.f_1 = 8;
			iLocal_54 = 1;
			SYSTEM::SETTIMERB(0);
			__LIB_19__::func_847();
		}
		return;
	}
	if (__LIB_0__::func_661())
	{
		return;
	}
	if (Global_22638)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			iLocal_60 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_56 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_60 = 0;
	}
	if (!iLocal_61)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			iLocal_61 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_56 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (!iLocal_62)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
		{
			iLocal_62 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
		{
			iLocal_63 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		iLocal_63 = 0;
	}
	if (!iLocal_59)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_56 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_49 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_49))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_50 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_49);
				iLocal_56 = iLocal_50;
				if (func_39(iLocal_51) == 0)
				{
					iLocal_56 = -1;
				}
				if (!iLocal_56 == -1)
				{
					if (iLocal_67 == 1)
					{
						fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
						iLocal_67 = 0;
					}
					Global_20266.f_1 = 8;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					__LIB_19__::func_847();
				}
			}
			else if (iLocal_57 == -1)
			{
				if (func_34(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					__LIB_19__::func_847();
				}
			}
			else
			{
				iLocal_57 = 0;
				func_22(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 1;
				iLocal_57 = -1;
				iLocal_54 = 1;
				__LIB_19__::func_847();
				SYSTEM::SETTIMERB(0);
			}
			iLocal_59 = 1;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
		{
			bVar0 = false;
			if (iLocal_58 == 0)
			{
				if (!iLocal_56 == -1)
				{
					if (iLocal_57 == -1)
					{
						iLocal_56 = SYSTEM::ROUND(fLocal_66);
						iLocal_64 = 0;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						__LIB_9__::func_601();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_57 = -1;
						__LIB_9__::func_601();
					}
					iLocal_54 = 1;
				}
				else
				{
					if (__LIB_11__::func_512("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
					{
						__LIB_0__::func_460(37);
					}
					if (__LIB_11__::func_512("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
					{
						__LIB_0__::func_460(38);
					}
					if (Global_22639 == 0 && !Global_22638)
					{
						__LIB_9__::func_601();
						Global_22638 = 1;
						Global_44247 = 0;
					}
				}
				iLocal_58 = 1;
			}
			if (bVar0)
			{
				iLocal_56 = -1;
			}
		}
		else
		{
			iLocal_58 = 0;
		}
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/))
	{
		if (iLocal_64)
		{
			if (__LIB_11__::func_512("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
			{
				__LIB_0__::func_460(37);
			}
			if (__LIB_11__::func_512("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
			{
				__LIB_0__::func_460(38);
			}
			StringCopy(&Global_75468, sLocal_65, 64);
			__LIB_8__::func_517(7, 0, 0);
			iLocal_64 = 0;
			__LIB_19__::func_847();
		}
	}
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0x1DBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_53195[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_53195[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_53195[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_47582[iVar3 /*46*/].f_32[iVar4];
	if (Global_44257[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_53195[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_53195[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)//Position - 0x1EB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_47582[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_47582[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_44257[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_44257[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_47582[iParam0 /*46*/].f_31 < (Global_47582[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_47582[iParam0 /*46*/].f_8[Global_47582[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_47582[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_44257[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					__LIB_36__::func_40(Global_47582[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_44257[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_24(Global_44257[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_44257[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_47582[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_47582[iParam0 /*46*/].f_45 = Global_44257[iVar2 /*12*/].f_10;
		Global_47582[iParam0 /*46*/].f_43 = Global_44257[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_47582[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_47582[iParam0 /*46*/].f_43 < 30000)
	{
		Global_47582[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_24(int iParam0, bool bParam1)//Position - 0x205B
{
	Global_44248 = 1;
	if (!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		Global_47582[iParam0 /*46*/] = 1;
		func_26(iParam0, bParam1);
	}
	else
	{
		__LIB_11__::func_503(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_26(int iParam0, bool bParam1)//Position - 0x20E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_47582[iParam0 /*46*/].f_31 == Global_47582[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_47582[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_44257[Global_47582[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_47582[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_47582[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_47582[iParam0 /*46*/].f_8[Global_47582[iParam0 /*46*/].f_31];
	Global_47582[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_47582[iParam0 /*46*/].f_45 = Global_44257[iVar1 /*12*/].f_10;
	Global_47582[iParam0 /*46*/].f_43 = Global_44257[iVar1 /*12*/].f_11;
	iVar2 = Global_47582[iParam0 /*46*/].f_2;
	__LIB_36__::func_40(Global_44257[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_47582[iParam0 /*46*/].f_3[iVar3] != Global_44257[iVar1 /*12*/].f_2 && Global_47582[iParam0 /*46*/].f_3[iVar3] != Global_44257[iVar1 /*12*/].f_3)
		{
			__LIB_36__::func_40(Global_47582[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_47582[iParam0 /*46*/].f_31 == Global_47582[iParam0 /*46*/].f_30)
	{
		if (Global_44257[Global_47582[iParam0 /*46*/].f_32[(Global_47582[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_47582[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_33(int iParam0, int iParam1)//Position - 0x2FD2
{
	if (Global_47582[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_47582[iParam0 /*46*/].f_32[Global_47582[iParam0 /*46*/].f_42] = iParam1;
	Global_47582[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1)//Position - 0x3017
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_53195[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_53195[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_53195[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_53195[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47582[iVar3 /*46*/].f_32[iVar4];
		if (Global_44257[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_53195[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_35(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x30F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_53195[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_53195[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_47582[iVar1 /*46*/] && !Global_47582[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_47582[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_47582[iVar1 /*46*/].f_32[(Global_47582[iVar1 /*46*/].f_42 - 1)];
	if (Global_44257[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x31CC
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_53195[iVar0 /*120*/];
}

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x3209
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
	struct<16> Var9;
	struct<16> Var10;
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_53195[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_53195[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_53195[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_53195[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47582[iVar3 /*46*/].f_32[iVar4];
		if (Global_44257[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_44257[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_44257[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { __LIB_10__::func_690(Global_44257[iVar8 /*12*/].f_1) };
			Var10 = { __LIB_10__::func_690(Global_44257[iVar8 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			__LIB_0__::func_478("");
			__LIB_0__::func_478("");
			__LIB_0__::func_478("EM_RESPONSE_NEW" /* GXT: Response: */);
			__LIB_0__::func_478(&Var10);
			__LIB_0__::func_478(func_42(Global_44257[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_44257[iVar8 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x3372
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		default:
	}
	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		default:
	}
}

char* func_42(int iParam0)//Position - 0x348C
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2" /* GXT: -Michael */;
		case 3:
			return "EMSTR_5" /* GXT: J */;
		case 1:
			return "EMSTR_8" /* GXT: F */;
		case 2:
			return "EMSTR_11" /* GXT: T */;
		case 4:
			return "EMSTR_14" /* GXT: M */;
		case 5:
			return "EMSTR_31" /* GXT: Praise Kraff */;
		case 6:
			return "EMSTR_38" /* GXT: -Maude */;
		case 7:
			return "EMSTR_41" /* GXT: -Lester */;
		case 8:
			return "EMSTR_54" /* GXT: Maze Online Support */;
		case 9:
			return "EMSTR_57" /* GXT: Fleeca Customer Services */;
		case 10:
			return "EMSTR_60" /* GXT: BoL Transaction Services */;
		case 11:
			return "EMSTR_80" /* GXT: Legendary Motorsport */;
		case 12:
			return "EMSTR_83" /* GXT: Elitas Travel */;
		case 13:
			return "EMSTR_86" /* GXT: C&C */;
		case 14:
			return "EMSTR_89" /* GXT: DT Sales */;
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		case 16:
			return "EMSTR_116" /* GXT: ~b~<u>www.ammunation.net</u>~s~ */;
		case 17:
			return "EMSTR_144" /* GXT: C */;
		case 18:
			return "EMSTR_147" /* GXT: P */;
		case 19:
			return "EMSTR_154" /* GXT: LS Tourist Info */;
		case 20:
			return "EMSTR_159" /* GXT: R */;
		case 21:
			return "EMSTR_165" /* GXT: Minotaur Finance - navigating the maze that is property ownership */;
		case 22:
			return "EMSTR_184" /* GXT: -Saeeda Kadam */;
		case 23:
			return "EMSTR_189" /* GXT: -Vanilla Unicorn */;
		case 24:
			return "EMSTR_192" /* GXT: Isiah Friedlander */;
		case 25:
			return "EMSTR_208" /* GXT: - Tracey */;
		case 26:
			return "EMSTR_221" /* GXT: - Davey */;
		case 27:
			return "EMSTR_228" /* GXT: - Amanda */;
		case 28:
			return "EMSTR_235" /* GXT: - Donald Percival */;
		case 29:
			return "EMSTR_244" /* GXT: - Ron */;
		case 30:
			return "EMSTR_251" /* GXT: - Tanisha */;
		case 31:
			return "EMSTR_264" /* GXT: - Denise */;
		case 32:
			return "EMSTR_271" /* GXT: - Lamar */;
		case 33:
			return "EMSTR_321" /* GXT: - Brad */;
		case 34:
			return "EMSTR_342" /* GXT: - Patricia M */;
		case 35:
			return "EMSTR_350" /* GXT: - Eileen Haworth */;
		case 36:
			return "EMSTR_354" /* GXT: - Saeeda Kadam */;
		case 37:
			return "EMSTR_359" /* GXT: - Gray N */;
		case 38:
			return "EMSTR_362" /* GXT: - Nigel */;
		case 39:
			return "EMSTR_371" /* GXT: - Hookies */;
		case 40:
			return "EMSTR_378" /* GXT: - Towing Impound */;
		case 41:
			return "EMSTR_381" /* GXT: - Downtown Cab Co. */;
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		case 43:
			return "EMSTR_386" /* GXT: - Sonar Collections Dock */;
		case 44:
			return "EMSTR_389" /* GXT: - Los Santos Customs */;
		case 45:
			return "EMSTR_392" /* GXT: - Cinema Doppler */;
		case 46:
			return "EMSTR_395" /* GXT: - Ten Cent Theater */;
		case 47:
			return "EMSTR_398" /* GXT: - Tivoli Cinema */;
		case 48:
			return "EMSTR_401" /* GXT: - Los Santos Golf Club */;
		case 49:
			return "EMSTR_404" /* GXT: - Car Scrap Yard */;
		case 50:
			return "EMSTR_407" /* GXT: - Smoke on the Water */;
		case 51:
			return "EMSTR_410" /* GXT: - Tequi-la-la */;
		case 52:
			return "EMSTR_413" /* GXT: - Pitchers */;
		case 53:
			return "EMSTR_416" /* GXT: - The Hen House */;
		case 54:
			return "EMSTR_467" /* GXT: Pedal & Metal Cycles */;
		case 55:
			return "EMSTR_470" /* GXT: SSA Super Autos */;
		case 56:
			return "EMSTR_491" /* GXT: Hush Smush */;
		case 57:
			return "EMSTR_494" /* GXT: foxymama21 */;
		case 58:
			return "EMSTR_497" /* GXT: Altarego12 */;
		case 59:
			return "EMSTR_500" /* GXT: BadKitty11 */;
		case 60:
			return "EMSTR_503" /* GXT: 7yearbitch */;
		case 61:
			return "EMSTR_506" /* GXT: Froggy69 */;
		case 62:
			return "EMSTR_509" /* GXT: Misscuddles */;
		case 63:
			return "EMSTR_642" /* GXT: - Southern San Andreas Super Autos */;
		case 64:
			return "EMSTR_645" /* GXT: - Dock Tease Events */;
		case 65:
			return "EMSTR_654" /* GXT: Brother Adrian */;
		default:
	}
	return "NULL";
}

char* func_51(int iParam0, int iParam1)//Position - 0x3BFF
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_53195[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47582[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53557[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53557[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)//Position - 0x3CBF
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		case 18:
			return "WWW_FLEECA_COM";
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 24:
			return "WWW_FLEECA_COM";
		case 25:
			return "WWW_FLEECA_COM";
		case 26:
			return "WWW_FLEECA_COM";
		case 27:
			return "WWW_FLEECA_COM";
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		case 47:
			return "WWW_AMMUNATION_NET";
		case 48:
			return "WWW_AMMUNATION_NET";
		case 49:
			return "WWW_AMMUNATION_NET";
		case 50:
			return "WWW_AMMUNATION_NET";
		case 51:
			return "WWW_AMMUNATION_NET";
		case 52:
			return "WWW_AMMUNATION_NET";
		case 53:
			return "WWW_AMMUNATION_NET";
		case 54:
			return "WWW_AMMUNATION_NET";
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		case 56:
			return "WWW_DOCKTEASE_COM";
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		case 60:
			return "WWW_DOCKTEASE_COM";
		case 61:
			return "WWW_DOCKTEASE_COM";
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		case 68:
			return "WWW_AMMUNATION_NET";
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 194:
			return "WWW_HUSHSMUSH_COM";
		case 195:
			return "WWW_HUSHSMUSH_COM";
		case 196:
			return "WWW_HUSHSMUSH_COM";
		case 197:
			return "WWW_HUSHSMUSH_COM";
		case 198:
			return "WWW_HUSHSMUSH_COM";
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		case 270:
			return "WWW_AMMUNATION_NET";
		case 271:
			return "WWW_AMMUNATION_NET";
		case 272:
			return "WWW_AMMUNATION_NET";
		case 273:
			return "WWW_AMMUNATION_NET";
		case 274:
			return "WWW_AMMUNATION_NET";
		case 275:
			return "WWW_AMMUNATION_NET";
		case 276:
			return "WWW_AMMUNATION_NET";
		default:
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3FCF
{
	int iVar0;
	int iVar1;
	iVar0 = ((Global_53195[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_53195[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_53195[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_53195[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)//Position - 0x402E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_53195[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47582[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53557[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53557[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)//Position - 0x40EB
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
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
		case 43:
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
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		default:
	}
	return 0;
}

void func_56(int iParam0, int iParam1, int iParam2)//Position - 0x4261
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_53195[iVar0 /*120*/].f_86[iVar4];
	if (!Global_53195[iVar0 /*120*/].f_69[iVar4])
	{
		func_60(-1);
	}
	Global_53195[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_47582[iVar2 /*46*/].f_32[iVar3];
		Var7 = { __LIB_10__::func_690(Global_44257[iVar6 /*12*/]) };
		Var8 = { __LIB_10__::func_690(Global_44257[iVar6 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		__LIB_0__::func_478(func_59(Global_44257[iVar6 /*12*/].f_3));
		__LIB_0__::func_478(func_59(Global_44257[iVar6 /*12*/].f_2));
		__LIB_0__::func_478(&Var7);
		__LIB_0__::func_478(&Var8);
		__LIB_0__::func_478(func_42(Global_44257[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_44257[iVar6 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (Global_44257[iVar6 /*12*/].f_4 == 0)
		{
			func_78(0);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_78(0);
		}
		else
		{
			func_78(1);
		}
		if (Global_47582[iVar2 /*46*/].f_42 > 1)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 1);
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_47582[iVar2 /*46*/].f_32[iVar10];
				Var7 = { __LIB_10__::func_690(Global_44257[iVar6 /*12*/]) };
				Var8 = { __LIB_10__::func_690(Global_44257[iVar6 /*12*/].f_1) };
				iVar12 = func_58(iParam1, Global_44257[iVar6 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11 + 1);
				__LIB_0__::func_478(func_59(iVar12));
				__LIB_0__::func_478(func_59(Global_44257[iVar6 /*12*/].f_2));
				__LIB_0__::func_478(&Var7);
				__LIB_0__::func_478(&Var8);
				__LIB_0__::func_478(func_42(Global_44257[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_44257[iVar6 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar10 = (iVar10 - 1);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = -1;
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 7)
		{
			if (Global_53557[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == -1)
		{
			return;
		}
		else
		{
			iVar15 = Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/];
			iVar16 = Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/];
			Var17 = { __LIB_10__::func_690(Global_44257[iVar15 /*12*/]) };
			Var18 = { __LIB_10__::func_690(Global_44257[iVar15 /*12*/].f_1) };
			if (Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_44257[iVar15 /*12*/].f_4 == 0)
			{
				func_78(0);
			}
			else if (bVar1)
			{
				func_78(0);
			}
			else
			{
				func_78(1);
			}
			bVar19 = false;
			bVar19 = func_57(iParam0, Global_53557[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_478(func_59(Global_44257[iVar15 /*12*/].f_3));
				__LIB_0__::func_478(func_59(Global_44257[iVar15 /*12*/].f_2));
				__LIB_0__::func_478(&Var17);
				if (Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var18);
					iVar20 = 0;
					iVar20 = 0;
					while (iVar20 < Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_53557[iVar13 /*203*/].f_10[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					__LIB_0__::func_478(&Var18);
				}
				__LIB_0__::func_478(func_42(Global_44257[iVar15 /*12*/].f_2));
				func_41(iVar15, Global_44257[iVar15 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_57(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x464E
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var3 = { __LIB_10__::func_690(Global_44257[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var4, "PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */, 64);
			break;
		case 73:
			StringCopy(&Var4, "PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */, 64);
			break;
		case 74:
			StringCopy(&Var4, "PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */, 64);
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	__LIB_0__::func_478(func_59(Global_44257[iParam3 /*12*/].f_3));
	__LIB_0__::func_478(func_59(Global_44257[iParam3 /*12*/].f_2));
	__LIB_0__::func_478(&Var3);
	__LIB_0__::func_478(&Var4);
	__LIB_0__::func_478(func_42(Global_44257[iParam3 /*12*/].f_2));
	__LIB_0__::func_478("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar2++;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		iVar6 = iVar5;
		bVar7 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_113386.f_24904[iVar6 /*4*/] == 0)
				{
					bVar7 = true;
				}
				break;
			case 73:
				if (Global_113386.f_24904[iVar6 /*4*/] == 1)
				{
					bVar7 = true;
				}
				break;
			case 74:
				if (Global_113386.f_24904[iVar6 /*4*/] == 2)
				{
					bVar7 = true;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0:
					sVar8 = "ACCNA_TOWING" /* GXT: Towing Impound */;
					break;
				case 1:
					sVar8 = "ACCNA_TAXI_LOT" /* GXT: Downtown Cab Co. */;
					break;
				case 2:
					sVar8 = "ACCNA_ARMS" /* GXT: McKenzie Field Hangar */;
					break;
				case 3:
					sVar8 = "ACCNA_SONAR" /* GXT: Sonar Collections Dock */;
					break;
				case 4:
					sVar8 = "ACCNA_CARMOD" /* GXT: Los Santos Customs */;
					break;
				case 5:
					sVar8 = "ACCNA_VCINEMA" /* GXT: Cinema Doppler */;
					break;
				case 6:
					sVar8 = "ACCNA_DCINEMA" /* GXT: Ten Cent Theater */;
					break;
				case 7:
					sVar8 = "ACCNA_MCINEMA" /* GXT: Tivoli Cinema */;
					break;
				case 8:
					sVar8 = "ACCNA_GOLF" /* GXT: Los Santos Golf Club */;
					break;
				case 9:
					sVar8 = "ACCNA_CSCRAP" /* GXT: Car Scrapyard */;
					break;
				case 10:
					sVar8 = "ACCNA_SMOKE" /* GXT: Smoke on the Water */;
					break;
				case 11:
					sVar8 = "ACCNA_TEQUILA" /* GXT: Tequi-la-la */;
					break;
				case 12:
					sVar8 = "ACCNA_PITCHERS" /* GXT: Pitchers */;
					break;
				case 13:
					sVar8 = "ACCNA_HEN" /* GXT: The Hen House */;
					break;
				case 14:
					sVar8 = "ACCNA_HOOKIES" /* GXT: Hookies */;
					break;
				case 15:
					sVar8 = "ACCNA_STRP" /* GXT: Vanilla Unicorn */;
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4" /* GXT: ~a~: $~1~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar8);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_24904[iVar6 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			iVar0 = 1;
		}
		iVar5++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)//Position - 0x48E7
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_59(int iParam0)//Position - 0x490E
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1" /* GXT: Mike@eyefind.info */;
		case 3:
			return "EMSTR_4" /* GXT: jimmy@eyefind.info */;
		case 1:
			return "EMSTR_7" /* GXT: Frankie@eyefind.info */;
		case 2:
			return "EMSTR_10" /* GXT: trev@eyefind.info */;
		case 4:
			return "EMSTR_13" /* GXT: Marnie@epsilonprogram.com */;
		case 5:
			return "EMSTR_30" /* GXT: noreply@epsilonprogram.com */;
		case 6:
			return "EMSTR_37" /* GXT: Maude@eyefind.info */;
		case 7:
			return "EMSTR_40" /* GXT: t34b4g99@eyefind.info */;
		case 8:
			return "EMSTR_53" /* GXT: services@maze-bank.com */;
		case 9:
			return "EMSTR_56" /* GXT: services@fleeca.com */;
		case 10:
			return "EMSTR_59" /* GXT: transactions@thebankofliberty.com */;
		case 11:
			return "EMSTR_79" /* GXT: sales@legendarymotorsport.net */;
		case 12:
			return "EMSTR_82" /* GXT: sales@elitastravel.com */;
		case 13:
			return "EMSTR_85" /* GXT: CnCsales@warstock-cache-and-carry.com */;
		case 14:
			return "EMSTR_88" /* GXT: sales@docktease.com */;
		case 15:
			return "EMSTR_107" /* GXT: MODS@lossantoscustoms.com */;
		case 16:
			return "EMSTR_115" /* GXT: GUNS@ammunation.net */;
		case 17:
			return "EMSTR_143" /* GXT: Feltz@eyefind.info */;
		case 18:
			return "EMSTR_146" /* GXT: Paige@eyefind.info */;
		case 19:
			return "EMSTR_153" /* GXT: info@LSTouristInfo.com */;
		case 20:
			return "EMSTR_158" /* GXT: Rickie@lifeinvader.com */;
		case 21:
			return "EMSTR_164" /* GXT: property@minotaurfinance.com */;
		case 22:
			return "EMSTR_183" /* GXT: SKadam@eyefind.info */;
		case 23:
			return "EMSTR_188" /* GXT: promotions@vanillaunicorn.xxx */;
		case 24:
			return "EMSTR_191" /* GXT: DrFriedlander@eyefind.info */;
		case 25:
			return "EMSTR_207" /* GXT: tracey@eyefind.info */;
		case 26:
			return "EMSTR_220" /* GXT: DaveNorton@eyefind.info */;
		case 27:
			return "EMSTR_227" /* GXT: AmandaDS@eyefind.info */;
		case 28:
			return "EMSTR_234" /* GXT: Don.Percival@merryweather.com */;
		case 29:
			return "EMSTR_243" /* GXT: BigBadRon@eyefind.info */;
		case 30:
			return "EMSTR_250" /* GXT: TanishaMarks@eyefind.info */;
		case 31:
			return "EMSTR_263" /* GXT: denise@eyefind.info */;
		case 32:
			return "EMSTR_270" /* GXT: LamDav@eyefind.info */;
		case 33:
			return "EMSTR_320" /* GXT: Bradley@eyefind.info */;
		case 34:
			return "EMSTR_341" /* GXT: PatriciaMadrazo@eyefind.info */;
		case 35:
			return "EMSTR_349" /* GXT: EileenHaworth@eyefind.info */;
		case 36:
			return "EMSTR_353" /* GXT: SaeedaKadam@eyefind.info */;
		case 37:
			return "EMSTR_358" /* GXT: GrayNicholson@eyefind.info */;
		case 38:
			return "EMSTR_361" /* GXT: Nigel@eyefind.info */;
		case 39:
			return "EMSTR_370" /* GXT: Hookies@eyefind.info */;
		case 40:
			return "EMSTR_377" /* GXT: TowingImpound@eyefind.info */;
		case 41:
			return "EMSTR_380" /* GXT: DowntownCabCo@eyefind.info */;
		case 42:
			return "EMSTR_383" /* GXT: McKenzieField@eyefind.info */;
		case 43:
			return "EMSTR_385" /* GXT: SonarCollections@eyefind.info */;
		case 44:
			return "EMSTR_388" /* GXT: LosSantosCustoms@eyefind.info */;
		case 45:
			return "EMSTR_391" /* GXT: CinemaDoppler@eyefind.info */;
		case 46:
			return "EMSTR_394" /* GXT: TenCentTheater@eyefind.info */;
		case 47:
			return "EMSTR_397" /* GXT: TivoliCinema@eyefind.info */;
		case 48:
			return "EMSTR_400" /* GXT: LosSantosGolfClub@eyefind.info */;
		case 49:
			return "EMSTR_403" /* GXT: CarScrapYard@eyefind.info */;
		case 50:
			return "EMSTR_406" /* GXT: SmokeOnTheWater@eyefind.info */;
		case 51:
			return "EMSTR_409" /* GXT: Tequi-la-la@eyefind.info */;
		case 52:
			return "EMSTR_412" /* GXT: Pitchers@eyefind.info */;
		case 53:
			return "EMSTR_415" /* GXT: TheHenHouse@eyefind.info */;
		case 54:
			return "EMSTR_466" /* GXT: sales@pandmcycles.com */;
		case 55:
			return "EMSTR_469" /* GXT: sales@southernsanandreassuperautos.com */;
		case 56:
			return "EMSTR_490" /* GXT: promotions@hushmush.com */;
		case 57:
			return "EMSTR_493" /* GXT: foxymama21@hushmush.com */;
		case 58:
			return "EMSTR_496" /* GXT: Altarego12@hushmush.com */;
		case 59:
			return "EMSTR_499" /* GXT: BadKitty11@hushmush.com */;
		case 60:
			return "EMSTR_502" /* GXT: 7yearbitch@hushmush.com */;
		case 61:
			return "EMSTR_505" /* GXT: Froggy69@hushmush.com */;
		case 62:
			return "EMSTR_508" /* GXT: Misscuddles@hushmush.com */;
		case 63:
			return "EMSTR_641" /* GXT: events@SouthernSanAndreasSuperAutos.com */;
		case 64:
			return "EMSTR_644" /* GXT: RaceOrganiser@docktease.com */;
		case 65:
			return "EMSTR_653" /* GXT: adrian@mydivinewithin.com */;
		default:
	}
	return "NULL";
}

void func_60(int iParam0)//Position - 0x4C79
{
	switch (__LIB_18__::func_173())
	{
		case 0:
			Global_44249 = (Global_44249 + iParam0);
			if (Global_44249 < 0)
			{
				Global_44249 = 0;
			}
			break;
		case 2:
			Global_44251 = (Global_44251 + iParam0);
			if (Global_44251 < 0)
			{
				Global_44251 = 0;
			}
			break;
		case 1:
			Global_44250 = (Global_44250 + iParam0);
			if (Global_44250 < 0)
			{
				Global_44250 = 0;
			}
			break;
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)//Position - 0x4CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_53195[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_53195[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_53195[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_53195[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_47582[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53557[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_53557[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_53556 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_53556));
	}
	Global_53556 = iVar5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_16(iVar5), false);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_16(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

int func_62(int iParam0)//Position - 0x4E16
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		default:
	}
	return 0;
}

void func_63()//Position - 0x4EC6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_44252[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_44252[iVar0]);
			Global_44252[iVar0] = -1;
		}
		iVar0++;
	}
	Global_44256 = 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x4FC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	func_67(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_53195[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_53195[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_53195[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_53195[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_53195[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_53195[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_47582[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_53195[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_44257[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_53195[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {__LIB_10__::func_690(Global_44257[iVar6 /*12*/])}, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			__LIB_0__::func_478(func_59(Global_44257[iVar6 /*12*/].f_2));
			__LIB_0__::func_478(&sVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			iVar9 = Global_53195[iVar0 /*120*/].f_18[iVar1];
			iVar10 = -1;
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < 7)
			{
				if (Global_53557[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == -1)
			{
				return 1;
			}
			else
			{
				iVar12 = Global_53195[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0;
				if (Global_53195[iVar0 /*120*/].f_69[iVar1])
				{
					iVar13 = 1;
				}
				iVar14 = Global_53557[iVar10 /*203*/].f_10[iVar12 /*48*/];
				if (iVar13 == 1)
				{
					if (Global_44257[iVar14 /*12*/].f_4 > 0)
					{
						if (Global_53195[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar13 = 2;
						}
					}
				}
				Var15 = { __LIB_10__::func_690(Global_44257[iVar14 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_478(func_59(Global_44257[iVar14 /*12*/].f_2));
				__LIB_0__::func_478(&Var15);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)//Position - 0x5252
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53195[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_53195[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_53195[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		bVar6 = true;
		if (Global_53195[iVar0 /*120*/].f_103[iVar3])
		{
			bVar6 = false;
		}
		if (Global_53195[iVar0 /*120*/].f_86[iVar3])
		{
			iVar7 = Global_53195[iVar0 /*120*/].f_18[iVar3];
			iVar8 = -1;
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (Global_53557[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == -1)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4.f_0;
			Var4.f_1[iVar10] = Global_53195[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar10] = Global_53195[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar10] = Global_53195[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar10] = Global_53195[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar10] = Global_53195[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar10] = Global_53195[iVar0 /*120*/].f_86[iVar3];
			Var4.f_0++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar5++;
	}
	Global_53195[iVar0 /*120*/] = Var4.f_0;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Global_53195[iVar0 /*120*/].f_103[iVar5] = 0;
		Global_53195[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_53195[iVar0 /*120*/].f_18[iVar5] = Var4.f_18[iVar5];
		Global_53195[iVar0 /*120*/].f_35[iVar5] = Var4.f_35[iVar5];
		Global_53195[iVar0 /*120*/].f_52[iVar5] = Var4.f_52[iVar5];
		Global_53195[iVar0 /*120*/].f_69[iVar5] = Var4.f_69[iVar5];
		Global_53195[iVar0 /*120*/].f_86[iVar5] = Var4.f_86[iVar5];
		iVar5++;
	}
}

void func_68()//Position - 0x54EE
{
	float fVar0;
	fVar0 = __LIB_20__::func_598(Local_48, Local_47, -90f, 0f, 90f, Global_20226, 350f, 0);
	if (Global_8940 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_22638 = 0;
		__LIB_19__::func_845(0);
		func_4();
		iLocal_18 = 0;
	}
}

void func_73()//Position - 0x58E5
{
	float fVar0;
	fVar0 = __LIB_20__::func_598(Local_47, Local_48, Global_20226, -90f, 0f, 90f, 350f, 0);
	if (Global_8940 == 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			if (!__LIB_9__::func_620())
			{
				MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
			}
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		__LIB_19__::func_845(1);
		Global_22639 = 0;
		iLocal_18 = 0;
	}
}

void func_75(bool bParam0)//Position - 0x5985
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_77(bool bParam0)//Position - 0x5A19
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_78(bool bParam0)//Position - 0x5A93
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		HUD::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

