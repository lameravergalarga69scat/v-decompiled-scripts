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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_59();
	}
	func_58();
	Global_22671 = 0;
	Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
	Global_20463 = 0;
	func_57();
	__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 7;
	}
	iLocal_31 = MISC::GET_GAME_TIMER();
	Global_20270 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_39);
	Local_38 = { Local_39 };
	Local_38.f_0 = (Local_38.f_0 - 10f);
	Local_38.f_1 = (Local_38.f_1 + 20f);
	Global_22638 = 0;
	Global_22639 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_22639 == 0 && Global_22638 == 1)
		{
			func_50();
		}
		if (Global_22639 == 1 && Global_22638 == 0)
		{
			func_45();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = MISC::GET_GAME_TIMER();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_20266.f_1 != 9 && Global_22639 == 0) && Global_22638 == 0)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						if (Global_2825434 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				case 8:
					if (Global_22671 == 1)
					{
						func_11();
						func_5();
					}
					break;
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (__LIB_9__.func_600())
				{
					Global_22638 = 1;
				}
			}
			else if (__LIB_9__.func_596(2, Global_20234, 0) || BitTest(Global_8137, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8137, 12);
					__LIB_9__.func_601();
					Global_20244 = 1;
					Global_22671 = 0;
					if (Global_20266.f_1 > 3)
					{
						Global_20266.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_59();
					}
					__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4539964[iLocal_24 /*104*/].f_29 = 4;
							Global_4539964[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4539964[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		if (__LIB_9__.func_594())
		{
			func_59();
		}
	}
}

void func_5()//Position - 0x398
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_9__.func_596(2, 181, 0))
		{
			__LIB_19__.func_917();
		}
		if (__LIB_9__.func_596(2, 180, 0))
		{
			__LIB_19__.func_854();
		}
	}
	if (iLocal_27 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20242, 0))
		{
			__LIB_19__.func_917();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0))
		{
			__LIB_19__.func_854();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_11()//Position - 0x510
{
	func_12();
}

void func_12()//Position - 0x51C
{
	if (Global_4539964[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_20244 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20237))
			{
				__LIB_9__.func_601();
				Global_20244 = 1;
				__LIB_24__.func_942();
				if (Global_4539964[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4539964[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4539964[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4539964[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4539964[iLocal_24 /*104*/].f_99[Global_20266] = 0;
				}
				if (__LIB_2__.func_292(iLocal_24))
				{
				}
				else
				{
					Global_4539964[iLocal_24 /*104*/].f_24 = 0;
					Global_4539964[iLocal_24 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_4539964[iLocal_24 /*104*/].f_16);
				__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_51();
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
					Global_22671 = 0;
				}
			}
		}
	}
	else if (Global_20244 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20238))
		{
			if (iLocal_26 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					StringCopy(&Global_75468, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_22646), 64);
					if (MISC::ARE_STRINGS_EQUAL(&Global_75468, "HARDCODED_4207156"))
					{
						Global_20266.f_1 = 3;
						Global_1963987 = 1;
					}
					else
					{
						Global_75598 = 7;
						MISC::SET_BIT(&Global_8137, 10);
						Global_20266.f_1 = 6;
					}
				}
				func_59();
			}
		}
	}
	if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_20244 == 0)
		{
			if (__LIB_9__.func_596(2, Global_20238, 0))
			{
				__LIB_19__.func_847();
				Global_20244 = 1;
				Global_4539964[iLocal_24 /*104*/].f_29 = 2;
				Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				Global_4539964[iLocal_24 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_8136, 17);
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_20244 == 0 && iLocal_30 == 1)
	{
		if (__LIB_9__.func_596(2, Global_20235, 0))
		{
			Global_20244 = 1;
			if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
			{
				__LIB_19__.func_847();
				Global_4539964[iLocal_24 /*104*/].f_29 = 3;
				Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4539964[iLocal_24 /*104*/].f_30 == 1)
			{
				__LIB_19__.func_847();
				Global_7451 = 144;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 10;
					__LIB_19__.func_937();
				}
				__LIB_6__.func_362("appContacts");
				Global_20264 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_7451 = Global_4539964[iLocal_24 /*104*/].f_17;
				if (__LIB_0__.func_166(Global_7451, Global_20266) == 0)
				{
					__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_211" /* GXT: DIALING... */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_211" /* GXT: DIALING... */, &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				__LIB_32__.func_479();
				func_59();
			}
		}
	}
}

void func_37()//Position - 0x1D3D
{
	struct<16> Var0;
	if (Global_20244 == 0)
	{
		if ((__LIB_9__.func_596(2, Global_20235, 0) || Global_4541214 == 1) || Global_22665 == 1)
		{
			if (Global_4541214 == 0 && Global_22665 == 0)
			{
				__LIB_19__.func_847();
			}
			Global_20244 = 1;
			iLocal_30 = 0;
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 8;
					Global_22671 = 1;
					iLocal_23 = iLocal_22;
					SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_33 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_33) && iLocal_28 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_42();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__.func_478("CELL_1" /* GXT: Texts */);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD" /* GXT: To: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON" /* GXT: ~a~~a~~a~~a~~a~~a~~a~~a~~a~~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[1 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[2 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[3 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[4 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[5 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[6 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[7 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[8 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[9 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 3:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 4:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 5:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 6:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 7:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 8:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_dynasty8");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 9:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_bennys");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 10:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ammunation");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 11:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_SSSA");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 12:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 13:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_shark");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					case 14:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_RP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (BitTest(Global_4541229, 25))
					{
						MISC::CLEAR_BIT(&Global_4541229, 25);
					}
					if (Global_4539963 > 0)
					{
						__LIB_0__.func_427(11355, iLocal_40, -1, 1, 0);
						if (Global_4539963 > 0)
						{
							Global_4539963 = 0;
						}
					}
				}
				return;
			}
			if (Global_4539964[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 8;
				}
				if (Global_4541214 == 1 || Global_22665 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4541214 == 1)
					{
					}
					Global_22665 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_28 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
					iLocal_33 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_33) && iLocal_28 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4539964[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_22646, "NO_HYPERLINK", 64);
				Var0 = { Global_4539964[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_22646 = { Var0 };
					iLocal_26 = 1;
					if (Global_20254)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267" /* GXT: LINK */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8136, 17);
					Global_4539964[iLocal_24 /*104*/].f_26 = 1;
					Global_4539964[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4539964[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				}
				func_42();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__.func_478("CELL_1" /* GXT: Texts */);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD" /* GXT: To: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1998[Global_4539964[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_4539964[iLocal_24 /*104*/].f_32)
				{
					case 0:
						__LIB_0__.func_478(&(Global_4539964[iLocal_24 /*104*/]));
						break;
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539964[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_33));
						if (Global_4539964[iLocal_24 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4539964[iLocal_24 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[iLocal_24 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[iLocal_24 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539964[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539964[iLocal_24 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539964[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539964[iLocal_24 /*104*/].f_49);
						if (Global_4539964[iLocal_24 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4539964[iLocal_24 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[iLocal_24 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4539964[iLocal_24 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 4:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 5:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 6:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 7:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 8:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 9:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 10:
						__LIB_9__.func_882(iLocal_24);
						break;
					case 11:
						__LIB_9__.func_882(iLocal_24);
						break;
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iLocal_24 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					__LIB_0__.func_478(&(Global_1998[Global_4539964[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 149)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 140)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 155)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_arena");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 160)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_diamond");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 174)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ls_car_meet");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 185)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_LUXURY_AUTOS");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 186)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_PREMIUM_DELUXE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_22671 = 1;
				__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				HUD::THEFEED_REMOVE_ITEM(Global_4539964[iLocal_24 /*104*/].f_16);
				if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_20254)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4539964[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_20254)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_20254)
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20254)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_20254)
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264" /* GXT: BARTER */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8136, 17);
					}
					else if (iLocal_26 == 0)
					{
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8136, 17);
					}
				}
				else if (Global_20254)
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216" /* GXT: DELETE */, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8136, 17);
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8136, 17);
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_4541214 = 0;
			}
			else
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_4541214 = 0;
			}
		}
		if (Global_2825434 == 0)
		{
			if (Global_78319)
			{
			}
		}
	}
}

void func_42()//Position - 0x2B61
{
	int iVar0;
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4539964[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_1963979, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_34, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_34))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)//Position - 0x2BFC
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case joaat("BONEPIC1_TXT"):
		case joaat("BONEPIC2_TXT"):
		case joaat("BONEPIC3_TXT"):
		case joaat("BONEPIC4_TXT"):
		case joaat("BONEPIC5_TXT"):
		case joaat("BONEPIC6_TXT"):
		case joaat("BONEPIC7_TXT"):
		case joaat("BONEPIC8_TXT"):
		case joaat("BONEPIC9_TXT"):
		case joaat("BONEPIC10_TXT"):
		case joaat("BONEPIC11_TXT"):
		case joaat("BONEPIC12_TXT"):
		case joaat("BONEPIC13_TXT"):
		case joaat("BONEPIC14_TXT"):
		case joaat("BONEPIC15_TXT"):
		case joaat("BONEPIC16_TXT"):
		case joaat("BONEPIC17_TXT"):
		case joaat("BONEPIC18_TXT"):
		case joaat("BONEPIC19_TXT"):
		case joaat("BONEPIC20_TXT"):
			return 1;
		default:
	}
	return 0;
}

void func_44()//Position - 0x2C8C
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_9__.func_596(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				__LIB_19__.func_917();
			}
		}
		if (__LIB_9__.func_596(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			__LIB_19__.func_854();
		}
	}
	if (iLocal_27 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20242, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				__LIB_19__.func_917();
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			__LIB_19__.func_854();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_45()//Position - 0x2D39
{
	float fVar0;
	fVar0 = __LIB_20__.func_598(Local_39, Local_38, Global_20226, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_22639 = 0;
		iLocal_18 = 0;
	}
}

void func_50()//Position - 0x3120
{
	float fVar0;
	fVar0 = __LIB_20__.func_598(Local_38, Local_39, -90f, 0f, 90f, Global_20226, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_22638 = 0;
		func_59();
		iLocal_18 = 0;
	}
}

void func_51()//Position - 0x3174
{
	if (Global_4541214 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		__LIB_9__.func_619(Global_20247, "SET_HEADER", "CELL_INBOX" /* GXT: Inbox */, 0, 0, 0, 0);
		__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_20254)
		{
			if (iLocal_20 > 0)
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214" /* GXT: OPTIONS */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78319)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_53()//Position - 0x3301
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	iLocal_20 = 0;
	iLocal_21 = 0;
	__LIB_24__.func_942();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4539964[iVar4 /*104*/].f_18 = -1;
		Global_4539964[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_59();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4539964[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4539964[iVar3 /*104*/].f_99[Global_20266] == 1)
					{
						if (__LIB_2__.func_43(Global_4539964[iVar3 /*104*/].f_18, Global_4539964[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4539964[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4539964[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4539964[iVar4 /*104*/].f_99[Global_20266] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_25);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				if (Global_4539964[iVar4 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539964[iVar4 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					__LIB_0__.func_478(&(Global_1998[Global_4539964[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4539964[iVar4 /*104*/] };
				if (func_43(&(Global_4539964[iVar4 /*104*/])))
				{
					iVar6 = __LIB_0__.func_228(7315, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB" /* GXT: First Bounty Target */, 64);
							break;
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB" /* GXT: Second Bounty Target */, 64);
							break;
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB" /* GXT: Third Bounty Target */, 64);
							break;
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB" /* GXT: Fourth Bounty Target */, 64);
							break;
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB" /* GXT: Final Bounty Target */, 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				__LIB_0__.func_478(&Var5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4539963 == 0)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ" /* GXT: ~a~~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_23[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_23[1 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_57()//Position - 0x37A7
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
	SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 6);
	SYSTEM::WAIT(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_20266.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_43 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
		if (__LIB_9__.func_600())
		{
			Global_20266.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			case 1:
				break;
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_58()//Position - 0x3966
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST" /* GXT: I can't wait until you cum again! ~nrt~ <img src='img://05_a_sext_stripperJuliet/05_a_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND" /* GXT: Just when I thought that it couldn't get any better! ~nrt~ <img src='img://05_b_sext_stripperJuliet/05_b_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED" /* GXT: Missing you badly! I want you inside me. ~nrt~ <img src='img://05_c_sext_stripperJuliet/05_c_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_19/NHP_PHOTO_19' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND" /* GXT: You're the man that I've been looking for my entire life! ~nrt~ <img src='img://06_b_sext_stripperNikki/06_b_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED" /* GXT: Maybe this will get your attention! ~nrt~ <img src='img://06_c_sext_stripperNikki/06_c_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST" /* GXT: That was deliciously yummy. Next time, I want to be on top. What do you think of this position? ~nrt~ <img src='img://08_a_sext_stripperSapphire/08_a_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND" /* GXT: Here don't show this to anyone else. ~nrt~ <img src='img://08_b_sext_stripperSapphire/08_b_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED" /* GXT: My body aches for you! ~nrt~ <img src='img://08_c_sext_stripperSapphire/08_c_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST" /* GXT: This body is all yours and only yours baby! ~nrt~ <img src='img://04_a_sext_stripperInfernus/04_a_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND" /* GXT: I can hardly walk, that was amazing! ~nrt~ <img src='img://04_b_sext_stripperInfernus/04_b_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED" /* GXT: My loins quiver with the thought of you! ~nrt~ <img src='img://04_c_sext_stripperInfernus/04_c_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST" /* GXT: I can't stop thinking about the last time. ~nrt~ <img src='img://11_a_sext_taxiLiz/11_a_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND" /* GXT: You're so amazing! I've been missing out. ~nrt~ <img src='img://11_b_sext_taxiLiz/11_b_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED" /* GXT: Hey babe, I need a study break... ~nrt~ <img src='img://11_c_sext_taxiLiz/11_c_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST" /* GXT: You always know how to give a good ride ;) ~nrt~ <img src='img://10_a_sext_hitcherGirl/10_a_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND" /* GXT: Can't wait to meet again honey. ~nrt~ <img src='img://10_b_sext_hitcherGirl/10_b_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED" /* GXT: I've been thinking... you should let me ride you. ~nrt~ <img src='img://10_c_sext_hitcherGirl/10_c_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS" /* GXT: Michael I have put your name in the credits for the film. ~nrt~ <img src='img://ExecutiveProducer/executiveproducer' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_18/NHP_PHOTO_18' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_11/NHP_PHOTO_11' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_13/NHP_PHOTO_13' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_5/NHP_PHOTO_5' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_12/NHP_PHOTO_12' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_3/NHP_PHOTO_3' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_1/NHP_PHOTO_1' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_10/NHP_PHOTO_10' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_6/NHP_PHOTO_6' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_20/NHP_PHOTO_20' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_7/NHP_PHOTO_7' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_14/NHP_PHOTO_14' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_4/NHP_PHOTO_4' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_17/NHP_PHOTO_17' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_2/NHP_PHOTO_2' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_15/NHP_PHOTO_15' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_8/NHP_PHOTO_8' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_9/NHP_PHOTO_9' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_16/NHP_PHOTO_16' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_mines/NHP_prep_mines' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_0/BAT_CASE_0'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_1/BAT_CASE_1'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_2/BAT_CASE_2'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_3/BAT_CASE_3'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_4/BAT_CASE_4'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_5/BAT_CASE_5'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_6/BAT_CASE_6'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_7/BAT_CASE_7'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_8/BAT_CASE_8'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_9/BAT_CASE_9'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_10/BAT_CASE_10'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_11/BAT_CASE_11'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_12/BAT_CASE_12'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_13/BAT_CASE_13'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_14/BAT_CASE_14'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_15/BAT_CASE_15'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_16/BAT_CASE_16'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_17/BAT_CASE_17'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_18/BAT_CASE_18'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_19/BAT_CASE_19'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_59()//Position - 0x3F21
{
	if (__LIB_9__.func_607() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_20219[Global_20211 /*3*/]);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		__LIB_6__.func_849(0);
	}
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	Global_22639 = 0;
	Global_22638 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

