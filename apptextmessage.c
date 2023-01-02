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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<6> Local_49[165];
	struct<6> Local_50[165];
	struct<8> Local_51[19];
	int iLocal_52 = 0;
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
		func_57();
	}
	func_47();
	Global_22671 = 0;
	Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
	Global_20463 = 0;
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	func_43();
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 7;
	}
	iLocal_30 = MISC::GET_GAME_TIMER();
	Global_20270 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_29 == 0)
		{
			iLocal_31 = MISC::GET_GAME_TIMER();
			if ((iLocal_31 - iLocal_30) > 500)
			{
				iLocal_29 = 1;
			}
		}
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						if (Global_2825434 == 0)
						{
							func_38();
							func_33();
						}
					}
					break;
				case 8:
					if (Global_22671 == 1)
					{
						func_5();
						func_38();
					}
					break;
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (__LIB_13__::func_89())
				{
					func_57();
				}
			}
			else if (__LIB_13__::func_85(2, Global_20234, 0) || BitTest(Global_8137, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8137, 12);
					__LIB_13__::func_90();
					Global_20244 = 1;
					Global_22671 = 0;
					if (Global_20266.f_1 > 3)
					{
						Global_20266.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_57();
					}
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_44();
					func_43();
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
					{
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
						{
							Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 4;
							Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
						}
						else
						{
							Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 4;
							Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_57();
		}
		if (__LIB_13__::func_83())
		{
			func_57();
		}
	}
}

void func_5()//Position - 0x336
{
	func_6();
}

void func_6()//Position - 0x342
{
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 == 1)
	{
		if (Global_20244 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20237))
			{
				__LIB_13__::func_90();
				Global_20244 = 1;
				__LIB_0__::func_698();
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_27 == 1)
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[0] = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[1] = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[Global_20266] = 0;
				}
				if (__LIB_3__::func_416(iLocal_23))
				{
				}
				else
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iLocal_23 /*104*/].f_16);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				if (iLocal_21 > 0)
				{
					iLocal_21 = (iLocal_21 - 1);
				}
				func_43();
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
			if (iLocal_25 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					StringCopy(&Global_75468, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_22646), 64);
					Global_75598 = 7;
					MISC::SET_BIT(&Global_8137, 10);
					Global_20266.f_1 = 6;
				}
				func_57();
			}
		}
	}
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
	{
		if (Global_20244 == 0)
		{
			if (__LIB_13__::func_85(2, Global_20238, 0))
			{
				__LIB_13__::func_111();
				Global_20244 = 1;
				Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 2;
				Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				Global_113386.f_14141[iLocal_23 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_8136, 17);
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
		}
	}
	if (Global_20244 == 0 && iLocal_29 == 1)
	{
		if (__LIB_13__::func_85(2, Global_20235, 0))
		{
			Global_20244 = 1;
			if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
			{
				__LIB_13__::func_111();
				Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 3;
				Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
			else if (Global_113386.f_14141[iLocal_23 /*104*/].f_30 == 1)
			{
				__LIB_13__::func_111();
				Global_7451 = 144;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 10;
					if (__LIB_13__::func_98() == 0)
					{
						__LIB_13__::func_550();
					}
				}
				__LIB_10__::func_567("appContacts");
				Global_20264 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_7451 = Global_113386.f_14141[iLocal_23 /*104*/].f_17;
				if (__LIB_0__::func_168(Global_7451, Global_20266) == 0)
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_211" /* GXT: DIALING... */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_211" /* GXT: DIALING... */, &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				__LIB_13__::func_424();
				func_57();
			}
		}
	}
}

void func_33()//Position - 0x1E07
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	if (Global_20244 == 0)
	{
		if ((__LIB_13__::func_85(2, Global_20235, 0) || Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1) || Global_22665 == 1)
		{
			if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0 && Global_22665 == 0)
			{
				__LIB_13__::func_111();
			}
			Global_20244 = 1;
			iLocal_29 = 0;
			iLocal_23 = iLocal_19[iLocal_21];
			if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 != 0)
			{
				if (Global_20266.f_1 > 3)
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8136, 17);
					Global_20266.f_1 = 8;
				}
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1 || Global_22665 == 1)
				{
					iLocal_23 = iLocal_19[0];
					iLocal_22 = 0;
					if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
					{
					}
					Global_22665 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_27 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
					iLocal_32 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_32) && iLocal_27 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_27 = 1;
						}
					}
					if (iLocal_27 == 1)
					{
						iLocal_28 = 0;
					}
					else
					{
						iLocal_28 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_32);
					}
					if (iLocal_28 < 0)
					{
						iLocal_28 = 0;
					}
					iLocal_23 = iLocal_19[iLocal_28];
					iLocal_22 = iLocal_28;
				}
				Global_113386.f_14141[iLocal_23 /*104*/].f_28 = 1;
				iLocal_25 = 0;
				StringCopy(&Global_22646, "NO_HYPERLINK", 64);
				Var0 = { Global_113386.f_14141[iLocal_23 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_22646 = { Var0 };
					iLocal_25 = 1;
					if (Global_20254)
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267" /* GXT: LINK */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8136, 17);
					Global_113386.f_14141[iLocal_23 /*104*/].f_26 = 1;
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 2;
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_26 == 0)
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				}
				func_37();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(Global_1998[Global_113386.f_14141[iLocal_23 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113386.f_14141[iLocal_23 /*104*/].f_32)
				{
					case 0:
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						break;
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_33));
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[iLocal_23 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[iLocal_23 /*104*/].f_49);
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 4:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 5:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 6:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 7:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 8:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 9:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 10:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 11:
						__LIB_13__::func_549(iLocal_23);
						break;
					case 12:
						func_35(iLocal_23);
						break;
				}
				if (Global_22674[iLocal_23] == 0)
				{
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_17 == 159)
					{
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */);
					}
					else
					{
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(Global_1998[Global_113386.f_14141[iLocal_23 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_22674[iLocal_23]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_22674[iLocal_23]))
						{
							sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_22674[iLocal_23]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_22671 = 1;
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iLocal_23 /*104*/].f_16);
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
				{
					if (Global_20254)
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_113386.f_14141[iLocal_23 /*104*/].f_30 == 1)
				{
					if (Global_20254)
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/]), "CELL_FINV"))
					{
						if (Global_20254)
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20254)
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 == 2)
				{
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
					{
						iLocal_25 = 0;
						if (Global_20254)
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264" /* GXT: BARTER */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8136, 17);
					}
					else if (iLocal_25 == 0)
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8136, 17);
					}
				}
				else if (Global_20254)
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216" /* GXT: DELETE */, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8136, 17);
				}
				else
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8136, 17);
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_113386.f_14051[Global_20266 /*20*/].f_17 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1 || Global_22665 == 1)
				{
					if (Global_22665)
					{
					}
					iVar2 = 1;
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_113386.f_14051[Global_20266 /*20*/].f_17 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_20266.f_1 = 3;
				}
			}
		}
		if (Global_2825434 == 0)
		{
			if (Global_78319)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20238);
				if (__LIB_13__::func_85(2, Global_20238, 0))
				{
					Global_20244 = 1;
					Global_2825434 = 1;
				}
			}
		}
	}
}

void func_35(int iParam0)//Position - 0x2806
{
	int iVar0;
	iVar0 = 0;
	switch (Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L01" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~. */);
			break;
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L02" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~. */);
			break;
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L03" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~. */);
			break;
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L04" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L05" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L06" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L07" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L08" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L09" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		case 10:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L10" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
	}
	while (iVar0 < Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		switch (Global_113386.f_14141[iParam0 /*104*/].f_32)
		{
			case 12:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1931569[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_37()//Position - 0x2AB4
{
	int iVar0;
	if (iLocal_52)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_33);
	}
	iLocal_52 = 0;
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_49[iVar0 /*6*/])) && MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iLocal_23 /*104*/]), &(Local_49[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_33, {Local_51[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_33, {Local_50[iVar0 /*6*/]}, 16);
				}
				iLocal_52 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_33, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_33))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_38()//Position - 0x2B5F
{
	if (iLocal_26)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_26 = 0;
		}
	}
	if (iLocal_26 == 0)
	{
		if (__LIB_13__::func_85(2, Global_20242, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			if (iLocal_21 > 0)
			{
				iLocal_21 = (iLocal_21 - 1);
			}
			__LIB_13__::func_162();
			iLocal_26 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_13__::func_85(2, Global_20243, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			iLocal_21++;
			if (iLocal_21 == iLocal_20)
			{
				iLocal_21 = 0;
			}
			__LIB_13__::func_161();
			iLocal_26 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_43()//Position - 0x2CA4
{
	if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0)
	{
		if (iLocal_22 < 0)
		{
			iLocal_22 = 0;
		}
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_22), -1082130432, -1082130432, -1082130432);
		__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
		if (Global_20254)
		{
			if (iLocal_20 > 0)
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214" /* GXT: OPTIONS */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78319)
		{
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
	}
	else
	{
		iLocal_22 = 0;
	}
}

void func_44()//Position - 0x2DE0
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_20 = 0;
	__LIB_0__::func_698();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_57();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_113386.f_14141[iVar3 /*104*/].f_18 = -1;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_1 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_2 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_3 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_5 = 0;
		while (iVar2 < 35)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_57();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_113386.f_14141[iVar2 /*104*/].f_24 != 0)
				{
					if (Global_113386.f_14141[iVar2 /*104*/].f_99[Global_20266] == 1)
					{
						if (__LIB_2__::func_831(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[iVar3 /*104*/].f_18))
						{
							iVar3 = iVar2;
							if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
							{
								iLocal_24 = 33;
							}
							else
							{
								iLocal_24 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_19[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
		{
			if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_113386.f_14141[iVar3 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_113386.f_14141[iVar3 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_24);
				if (Global_113386.f_14141[iVar3 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH" /* GXT: <C>~a~</C> */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(Global_1998[Global_113386.f_14141[iVar3 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113386.f_14141[iVar3 /*104*/].f_32)
				{
					case 0:
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iVar3 /*104*/]));
						break;
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_33));
						if (Global_113386.f_14141[iVar3 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iVar3 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iVar3 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iVar3 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[iVar3 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113386.f_14141[iVar3 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113386.f_14141[iVar3 /*104*/].f_49);
						if (Global_113386.f_14141[iVar3 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iVar3 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar3 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iVar3 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113386.f_14141[iVar3 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					case 4:
						__LIB_13__::func_549(iVar3);
						break;
					case 5:
						__LIB_13__::func_549(iVar3);
						break;
					case 6:
						__LIB_13__::func_549(iVar3);
						break;
					case 7:
						__LIB_13__::func_549(iVar3);
						break;
					case 8:
						__LIB_13__::func_549(iVar3);
						break;
					case 9:
						__LIB_13__::func_549(iVar3);
						break;
					case 10:
						__LIB_13__::func_549(iVar3);
						break;
					case 11:
						__LIB_13__::func_549(iVar3);
						break;
					case 12:
						func_35(iVar3);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_113386.f_14141[iVar1 /*104*/].f_24 != 0)
		{
			if (Global_113386.f_14141[iVar1 /*104*/].f_99[Global_20266] == 1)
			{
				iLocal_20++;
			}
		}
		iVar1++;
	}
}

void func_47()//Position - 0x347F
{
	StringCopy(&(Local_49[0 /*6*/]), "SXT_JUL_1ST" /* GXT: I can't wait until you cum again! ~nrt~ <img src='img://05_a_sext_stripperJuliet/05_a_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[1 /*6*/]), "SXT_JUL_2ND" /* GXT: Just when I thought that it couldn't get any better! ~nrt~ <img src='img://05_b_sext_stripperJuliet/05_b_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[2 /*6*/]), "SXT_JUL_NEED" /* GXT: Missing you badly! I want you inside me. ~nrt~ <img src='img://05_c_sext_stripperJuliet/05_c_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[3 /*6*/]), "SXT_NIK_1ST" /* GXT: I just wanted you to know that I miss you already :-* ~nrt~ <img src='img://06_a_sext_stripperNikki/06_a_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_49[4 /*6*/]), "SXT_NIK_2ND" /* GXT: You're the man that I've been looking for my entire life! ~nrt~ <img src='img://06_b_sext_stripperNikki/06_b_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_49[5 /*6*/]), "SXT_NIK_NEED" /* GXT: Maybe this will get your attention! ~nrt~ <img src='img://06_c_sext_stripperNikki/06_c_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_49[6 /*6*/]), "SXT_SAP_1ST" /* GXT: That was deliciously yummy. Next time, I want to be on top. What do you think of this position? ~nrt~ <img src='img://08_a_sext_stripperSapphire/08_a_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[7 /*6*/]), "SXT_SAP_2ND" /* GXT: Here don't show this to anyone else. ~nrt~ <img src='img://08_b_sext_stripperSapphire/08_b_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[8 /*6*/]), "SXT_SAP_NEED" /* GXT: My body aches for you! ~nrt~ <img src='img://08_c_sext_stripperSapphire/08_c_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[9 /*6*/]), "SXT_INF_1ST" /* GXT: This body is all yours and only yours baby! ~nrt~ <img src='img://04_a_sext_stripperInfernus/04_a_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[10 /*6*/]), "SXT_INF_2ND" /* GXT: I can hardly walk, that was amazing! ~nrt~ <img src='img://04_b_sext_stripperInfernus/04_b_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[11 /*6*/]), "SXT_INF_NEED" /* GXT: My loins quiver with the thought of you! ~nrt~ <img src='img://04_c_sext_stripperInfernus/04_c_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[12 /*6*/]), "SXT_TXI_1ST" /* GXT: I can't stop thinking about the last time. ~nrt~ <img src='img://11_a_sext_taxiLiz/11_a_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_49[13 /*6*/]), "SXT_TXI_2ND" /* GXT: You're so amazing! I've been missing out. ~nrt~ <img src='img://11_b_sext_taxiLiz/11_b_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_49[14 /*6*/]), "SXT_TXI_NEED" /* GXT: Hey babe, I need a study break... ~nrt~ <img src='img://11_c_sext_taxiLiz/11_c_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_49[15 /*6*/]), "SXT_HCH_1ST" /* GXT: You always know how to give a good ride ;) ~nrt~ <img src='img://10_a_sext_hitcherGirl/10_a_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[16 /*6*/]), "SXT_HCH_2ND" /* GXT: Can't wait to meet again honey. ~nrt~ <img src='img://10_b_sext_hitcherGirl/10_b_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[17 /*6*/]), "SXT_HCH_NEED" /* GXT: I've been thinking... you should let me ride you. ~nrt~ <img src='img://10_c_sext_hitcherGirl/10_c_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[18 /*6*/]), "SOL2_PASS" /* GXT: Michael I have put your name in the credits for the film. ~nrt~ <img src='img://ExecutiveProducer/executiveproducer' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_51[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_49[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_50[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_49[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_50[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_49[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_50[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_49[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_50[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_49[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_50[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_49[24 /*6*/]), "SAD_SMS_0" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_01/MP_SND_TARGET_01' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_49[25 /*6*/]), "SAD_SMS_1" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_02/MP_SND_TARGET_02' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_49[26 /*6*/]), "SAD_SMS_2" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_03/MP_SND_TARGET_03' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_49[27 /*6*/]), "SAD_SMS_3" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_04/MP_SND_TARGET_04' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_49[28 /*6*/]), "SAD_SMS_4" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_05/MP_SND_TARGET_05' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_49[29 /*6*/]), "SAD_SMS_5" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_06/MP_SND_TARGET_06' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_49[30 /*6*/]), "SAD_SMS_6" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_07/MP_SND_TARGET_07' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_49[31 /*6*/]), "SAD_SMS_7" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_08/MP_SND_TARGET_08' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_49[32 /*6*/]), "SAD_SMS_8" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_09/MP_SND_TARGET_09' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_49[33 /*6*/]), "SAD_SMS_9" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_10/MP_SND_TARGET_10' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_49[34 /*6*/]), "SAD_SMS_10" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_11/MP_SND_TARGET_11' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_49[35 /*6*/]), "SAD_SMS_11" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_12/MP_SND_TARGET_12' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_49[36 /*6*/]), "SAD_SMS_12" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_13/MP_SND_TARGET_13' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_49[37 /*6*/]), "SAD_SMS_13" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_14/MP_SND_TARGET_14' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_49[38 /*6*/]), "SAD_SMS_14" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_15/MP_SND_TARGET_15' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_49[39 /*6*/]), "SAD_SMS_15" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_16/MP_SND_TARGET_16' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_49[40 /*6*/]), "SAD_SMS_16" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_17/MP_SND_TARGET_17' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_49[41 /*6*/]), "SAD_SMS_17" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_18/MP_SND_TARGET_18' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_49[42 /*6*/]), "SAD_SMS_18" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_19/MP_SND_TARGET_19' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_49[43 /*6*/]), "SAD_SMS_19" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_20/MP_SND_TARGET_20' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_49[44 /*6*/]), "VEX_PM_PHOTO0" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Del Perro Beach ~nrt~ <img src='img://MP_EX_LOCATION_01/MP_EX_LOCATION_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_49[45 /*6*/]), "VEX_PM_PHOTO1" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_02/MP_EX_LOCATION_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_49[46 /*6*/]), "VEX_PM_PHOTO2" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vinewood Hills ~nrt~ <img src='img://MP_EX_LOCATION_03/MP_EX_LOCATION_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_49[47 /*6*/]), "VEX_PM_PHOTO3" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Mount Gordo ~nrt~ <img src='img://MP_EX_LOCATION_04/MP_EX_LOCATION_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_49[48 /*6*/]), "VEX_PM_PHOTO4" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Los Santos International Airport ~nrt~ <img src='img://MP_EX_LOCATION_05/MP_EX_LOCATION_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_49[49 /*6*/]), "VEX_PM_PHOTO5" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_06/MP_EX_LOCATION_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_49[50 /*6*/]), "VEX_PM_PHOTO6" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Bay ~nrt~ <img src='img://MP_EX_LOCATION_07/MP_EX_LOCATION_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_49[51 /*6*/]), "VEX_PM_PHOTO7" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Ron Alternates Wind Farm ~nrt~ <img src='img://MP_EX_LOCATION_08/MP_EX_LOCATION_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_49[52 /*6*/]), "VEX_PM_PHOTO8" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Grand Senora Desert ~nrt~ <img src='img://MP_EX_LOCATION_09/MP_EX_LOCATION_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_49[53 /*6*/]), "VEX_PM_PHOTO9" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Sandy Shores ~nrt~ <img src='img://MP_EX_LOCATION_10/MP_EX_LOCATION_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_49[54 /*6*/]), "VEX_PM_PHOTO10" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Legion Square ~nrt~ <img src='img://MP_EX_LOCATION_11/MP_EX_LOCATION_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_49[55 /*6*/]), "VEX_PM_PHOTO11" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: GWC and Golfing Society ~nrt~ <img src='img://MP_EX_LOCATION_12/MP_EX_LOCATION_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_49[56 /*6*/]), "VEX_PM_PHOTO12" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vespucci Beach ~nrt~ <img src='img://MP_EX_LOCATION_13/MP_EX_LOCATION_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_49[57 /*6*/]), "VEX_PM_PHOTO13" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Tongva Hills ~nrt~ <img src='img://MP_EX_LOCATION_14/MP_EX_LOCATION_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_49[58 /*6*/]), "VEX_1_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_01/IE_TEXTVECH_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_49[59 /*6*/]), "VEX_2_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_02/IE_TEXTVECH_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_49[60 /*6*/]), "VEX_3_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_03/IE_TEXTVECH_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_49[61 /*6*/]), "VEX_4_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_04/IE_TEXTVECH_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_49[62 /*6*/]), "VEX_5_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_05/IE_TEXTVECH_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_49[63 /*6*/]), "VEX_6_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_06/IE_TEXTVECH_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_49[64 /*6*/]), "VEX_7_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_07/IE_TEXTVECH_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_49[65 /*6*/]), "VEX_8_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_08/IE_TEXTVECH_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_49[66 /*6*/]), "VEX_9_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_09/IE_TEXTVECH_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_49[67 /*6*/]), "VEX_10_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_10/IE_TEXTVECH_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_49[68 /*6*/]), "VEX_11_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_11/IE_TEXTVECH_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_49[69 /*6*/]), "VEX_12_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_12/IE_TEXTVECH_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_49[70 /*6*/]), "VEX_13_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_13/IE_TEXTVECH_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_49[71 /*6*/]), "VEX_14_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_14/IE_TEXTVECH_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_49[72 /*6*/]), "VEX_15_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_15/IE_TEXTVECH_15' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_49[73 /*6*/]), "VEX_16_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_16/IE_TEXTVECH_16' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_49[74 /*6*/]), "VEX_17_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_17/IE_TEXTVECH_17' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_49[75 /*6*/]), "VEX_18_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_18/IE_TEXTVECH_18' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_49[76 /*6*/]), "VEX_19_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_19/IE_TEXTVECH_19' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_49[77 /*6*/]), "VEX_20_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_20/IE_TEXTVECH_20' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_49[78 /*6*/]), "VEX_21_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_21/IE_TEXTVECH_21' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_49[79 /*6*/]), "VEX_22_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_22/IE_TEXTVECH_22' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_49[80 /*6*/]), "VEX_23_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_23/IE_TEXTVECH_23' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_49[81 /*6*/]), "VEX_24_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_24/IE_TEXTVECH_24' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_49[82 /*6*/]), "VEX_25_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_25/IE_TEXTVECH_25' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_49[83 /*6*/]), "VEX_26_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_26/IE_TEXTVECH_26' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_49[84 /*6*/]), "VEX_27_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_27/IE_TEXTVECH_27' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_49[85 /*6*/]), "VEX_28_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_28/IE_TEXTVECH_28' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_49[86 /*6*/]), "VEX_29_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_29/IE_TEXTVECH_29' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_49[87 /*6*/]), "VEX_30_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_30/IE_TEXTVECH_30' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_49[88 /*6*/]), "VEX_31_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_31/IE_TEXTVECH_31' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_49[89 /*6*/]), "VEX_32_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_32/IE_TEXTVECH_32' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_49[90 /*6*/]), "VEX_33_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_33/IE_TEXTVECH_33' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_49[91 /*6*/]), "VEX_34_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_34/IE_TEXTVECH_34' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_49[92 /*6*/]), "VEX_35_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_35/IE_TEXTVECH_35' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_49[93 /*6*/]), "VEX_36_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_36/IE_TEXTVECH_36' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_49[94 /*6*/]), "VEX_37_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_37/IE_TEXTVECH_37' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_49[95 /*6*/]), "VEX_38_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_38/IE_TEXTVECH_38' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_49[96 /*6*/]), "VEX_39_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_39/IE_TEXTVECH_39' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_49[97 /*6*/]), "VEX_40_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_40/IE_TEXTVECH_40' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_49[98 /*6*/]), "VEX_41_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_41/IE_TEXTVECH_41' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_49[99 /*6*/]), "VEX_42_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_42/IE_TEXTVECH_42' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_49[100 /*6*/]), "VEX_43_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_43/IE_TEXTVECH_43' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_49[101 /*6*/]), "VEX_44_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_44/IE_TEXTVECH_44' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_49[102 /*6*/]), "VEX_45_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_45/IE_TEXTVECH_45' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_49[103 /*6*/]), "VEX_46_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_46/IE_TEXTVECH_46' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_49[104 /*6*/]), "VEX_47_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_47/IE_TEXTVECH_47' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_49[105 /*6*/]), "VEX_48_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_48/IE_TEXTVECH_48' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_49[106 /*6*/]), "VEX_49_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_49/IE_TEXTVECH_49' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_49[107 /*6*/]), "VEX_50_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_50/IE_TEXTVECH_50' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_49[108 /*6*/]), "VEX_51_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_51/IE_TEXTVECH_51' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_49[109 /*6*/]), "VEX_52_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_52/IE_TEXTVECH_52' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_49[110 /*6*/]), "VEX_53_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_53/IE_TEXTVECH_53' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_49[111 /*6*/]), "VEX_54_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_54/IE_TEXTVECH_54' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_49[112 /*6*/]), "VEX_55_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_55/IE_TEXTVECH_55' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_49[113 /*6*/]), "VEX_56_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_56/IE_TEXTVECH_56' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_49[114 /*6*/]), "VEX_57_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_57/IE_TEXTVECH_57' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_49[115 /*6*/]), "VEX_58_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_58/IE_TEXTVECH_58' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_49[116 /*6*/]), "VEX_59_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_59/IE_TEXTVECH_59' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_49[117 /*6*/]), "VEX_60_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_60/IE_TEXTVECH_60' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_49[118 /*6*/]), "VEX_61_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_61/IE_TEXTVECH_61' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_49[119 /*6*/]), "VEX_62_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_62/IE_TEXTVECH_62' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_49[120 /*6*/]), "VEX_63_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_63/IE_TEXTVECH_63' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_49[121 /*6*/]), "VEX_64_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_64/IE_TEXTVECH_64' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_49[122 /*6*/]), "VEX_65_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_65/IE_TEXTVECH_65' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_49[123 /*6*/]), "VEX_66_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_66/IE_TEXTVECH_66' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_49[124 /*6*/]), "VEX_67_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_67/IE_TEXTVECH_67' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_49[125 /*6*/]), "VEX_68_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_68/IE_TEXTVECH_68' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_49[126 /*6*/]), "VEX_69_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_69/IE_TEXTVECH_69' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_49[127 /*6*/]), "VEX_70_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_70/IE_TEXTVECH_70' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_49[128 /*6*/]), "VEX_71_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_71/IE_TEXTVECH_71' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_49[129 /*6*/]), "VEX_72_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_72/IE_TEXTVECH_72' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_49[130 /*6*/]), "VEX_73_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_73/IE_TEXTVECH_73' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_49[131 /*6*/]), "VEX_74_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_74/IE_TEXTVECH_74' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_49[132 /*6*/]), "VEX_75_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_75/IE_TEXTVECH_75' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_49[133 /*6*/]), "VEX_76_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_76/IE_TEXTVECH_76' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_49[134 /*6*/]), "VEX_77_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_77/IE_TEXTVECH_77' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_49[135 /*6*/]), "VEX_78_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_78/IE_TEXTVECH_78' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_49[136 /*6*/]), "VEX_79_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_79/IE_TEXTVECH_79' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_49[137 /*6*/]), "VEX_80_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_80/IE_TEXTVECH_80' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_49[138 /*6*/]), "VEX_81_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_81/IE_TEXTVECH_81' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_49[139 /*6*/]), "VEX_82_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_82/IE_TEXTVECH_82' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_49[140 /*6*/]), "VEX_83_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_84/IE_TEXTVECH_84' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_49[141 /*6*/]), "VEX_84_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_85/IE_TEXTVECH_85' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_49[142 /*6*/]), "VEX_82_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_83/IE_TEXTVECH_83' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_49[143 /*6*/]), "VEX_86_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_86/IE_TEXTVECH_86' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_49[144 /*6*/]), "VEX_87_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_87/IE_TEXTVECH_87' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_49[145 /*6*/]), "VEX_88_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_88/IE_TEXTVECH_88' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_49[146 /*6*/]), "VEX_89_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_89/IE_TEXTVECH_89' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_49[147 /*6*/]), "VEX_90_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_90/IE_TEXTVECH_90' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_49[148 /*6*/]), "VEX_91_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_91/IE_TEXTVECH_91' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_49[149 /*6*/]), "VEX_92_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_92/IE_TEXTVECH_92' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_49[150 /*6*/]), "VEX_93_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_93/IE_TEXTVECH_93' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_49[151 /*6*/]), "VEX_94_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_94/IE_TEXTVECH_94' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_49[152 /*6*/]), "VEX_95_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_95/IE_TEXTVECH_95' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_49[153 /*6*/]), "VEX_96_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_96/IE_TEXTVECH_96' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_49[154 /*6*/]), "GO_AS_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_autosalvage/NHP_prep_autosalvage' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_49[155 /*6*/]), "GO_DR_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://nhp_prep_daylightrob/nhp_prep_daylightrob' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_49[156 /*6*/]), "FHTXT_DDR00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_deaddrop/NHP_prep_deaddrop' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_49[157 /*6*/]), "BBTXT_CPS00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_1/BAT_carpark_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_49[158 /*6*/]), "BBTXT_CPS10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_2/BAT_carpark_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_49[159 /*6*/]), "BBTXT_CPS20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_3/BAT_carpark_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_50[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_49[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_50[160 /*6*/]), "ib_aircon", 24);
	if (__LIB_12__::func_547(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_49[44 /*6*/]), "SNP_IMG_0_0" /* GXT: ~nrt~ <img src='img://SCLUB_1/DEL_PERRO_PIER_1_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "SNP_IMG_0_1" /* GXT: ~nrt~ <img src='img://SCLUB_1/ORIENTAL_THEATER_1_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[46 /*6*/]), "SNP_IMG_0_2" /* GXT: ~nrt~ <img src='img://SCLUB_1/GALILEO_OBSERVATORY_1_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[47 /*6*/]), "SNP_IMG_0_3" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_ARENA_1_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[48 /*6*/]), "SNP_IMG_0_4" /* GXT: ~nrt~ <img src='img://SCLUB_1/CHUMASH_PIER_1_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[49 /*6*/]), "SNP_IMG_0_5" /* GXT: ~nrt~ <img src='img://SCLUB_1/RICHMAN_HOTEL_1_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[50 /*6*/]), "SNP_IMG_0_6" /* GXT: ~nrt~ <img src='img://SCLUB_1/ROCKFORD_HILLS_CITY_HALL_1_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[51 /*6*/]), "SNP_IMG_0_7" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_TOWER_1_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[52 /*6*/]), "SNP_IMG_0_8" /* GXT: ~nrt~ <img src='img://SCLUB_1/PIPELINE_INN_1_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[53 /*6*/]), "SNP_IMG_0_9" /* GXT: ~nrt~ <img src='img://SCLUB_1/THE_VICEROY_HOTEL_1_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[54 /*6*/]), "SNP_IMG_1_0" /* GXT: ~nrt~ <img src='img://SCLUB_2/VENETIAN_2_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[55 /*6*/]), "SNP_IMG_1_1" /* GXT: ~nrt~ <img src='img://SCLUB_2/OPIUM_NIGHTS_HOTEL_2_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[56 /*6*/]), "SNP_IMG_1_2" /* GXT: ~nrt~ <img src='img://SCLUB_2/VINEWOOD_SIGN_2_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[57 /*6*/]), "SNP_IMG_1_3" /* GXT: ~nrt~ <img src='img://SCLUB_2/LEGION_SQUARE_2_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[58 /*6*/]), "SNP_IMG_1_4" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON_CRASTENBURG_HOTEL_2_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[59 /*6*/]), "SNP_IMG_1_5" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON-CRASTENBURG-RICHMAN_2_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[60 /*6*/]), "SNP_IMG_1_6" /* GXT: ~nrt~ <img src='img://SCLUB_2/RANCHO_TOWERS_2_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[61 /*6*/]), "SNP_IMG_1_7" /* GXT: ~nrt~ <img src='img://SCLUB_2/MIRROR_PARK_2_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[62 /*6*/]), "SNP_IMG_1_8" /* GXT: ~nrt~ <img src='img://SCLUB_2/BJ_SMITH_REC_CENTER_2_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[64 /*6*/]), "SNP_IMG_1_9" /* GXT: ~nrt~ <img src='img://SCLUB_2/ROCKFORD_DORSET_HOTEL_2_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[65 /*6*/]), "SNP_IMG_2_0" /* GXT: ~nrt~ <img src='img://SCLUB_3/KOREAN_PAVILLION_3_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[66 /*6*/]), "SNP_IMG_2_1" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BEACH_3_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[67 /*6*/]), "SNP_IMG_2_2" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_RACETRACK_3_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[68 /*6*/]), "SNP_IMG_2_3" /* GXT: ~nrt~ <img src='img://SCLUB_3/SISYPHUS_THEATER_3_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[69 /*6*/]), "SNP_IMG_2_4" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BOULEVARD_BRIDGE_3_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[70 /*6*/]), "SNP_IMG_2_5" /* GXT: ~nrt~ <img src='img://SCLUB_3/ROCKFORD_HILLS_CHURCH_3_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[71 /*6*/]), "SNP_IMG_2_6" /* GXT: ~nrt~ <img src='img://SCLUB_3/LAST_TRAIN_DINER_3_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[72 /*6*/]), "SNP_IMG_2_7" /* GXT: ~nrt~ <img src='img://SCLUB_3/VON-CRASTENBURG-HOTEL_3_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[73 /*6*/]), "SNP_IMG_2_8" /* GXT: ~nrt~ <img src='img://SCLUB_3/METEOR_STREET_APARTMENTS_3_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[74 /*6*/]), "SNP_IMG_2_9" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_HILLS_3_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_50[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (__LIB_2__::func_839(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_49[44 /*6*/]), "GBC_TM_TC100" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[45 /*6*/]), "GBC_TM_TC101" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[46 /*6*/]), "GBC_TM_TC102" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[47 /*6*/]), "GBC_TM_TC103" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[48 /*6*/]), "GBC_TM_TC104" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[49 /*6*/]), "GBC_TM_TC105" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[50 /*6*/]), "GBC_TM_TC110" /* GXT: This one should be easy - we have the make and model of the car. It's an orange Rhapsody. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[51 /*6*/]), "GBC_TM_TC111" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[52 /*6*/]), "GBC_TM_TC120" /* GXT: Stay sharp, this one was last seen on a yellow Vindicator. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[53 /*6*/]), "GBC_TM_TC121" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[54 /*6*/]), "GBC_TM_TC130" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at the graveyard a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[55 /*6*/]), "GBC_TM_TC140" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[56 /*6*/]), "GBC_TM_TC200" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[57 /*6*/]), "GBC_TM_TC201" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[58 /*6*/]), "GBC_TM_TC202" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[59 /*6*/]), "GBC_TM_TC203" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[60 /*6*/]), "GBC_TM_TC204" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[61 /*6*/]), "GBC_TM_TC205" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[62 /*6*/]), "GBC_TM_TC210" /* GXT: This one should be easy - we have the make and model of the car. It's a white 9F. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[63 /*6*/]), "GBC_TM_TC211" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[64 /*6*/]), "GBC_TM_TC220" /* GXT: Stay sharp, this one was last seen on a pink Faggio. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[65 /*6*/]), "GBC_TM_TC221" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[66 /*6*/]), "GBC_TM_TC230" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at IAA headquarters a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[67 /*6*/]), "GBC_TM_TC240" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (__LIB_13__::func_552(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_49[44 /*6*/]), "CSH_TXT_MD_01M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid01/heist3_prep_maid01' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_49[45 /*6*/]), "CSH_TXT_MD_02M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid02/heist3_prep_maid02' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (__LIB_13__::func_552(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_49[44 /*6*/]), "CSHT_IMC_00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier1/heist3_cashier1' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "CSHT_IMC_10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier2/heist3_cashier2' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_49[46 /*6*/]), "CSHT_IMC_20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier3/heist3_cashier3' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_49[47 /*6*/]), "CSHT_IMC_30M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier4/heist3_cashier4' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 17)
	{
		StringCopy(&(Local_49[44 /*6*/]), "ILHTEXT_SFE00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist4_sec_guard/heist4_sec_guard' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (__LIB_13__::func_551(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_49[44 /*6*/]), "TR_TXT_CV1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS/TUNER_TEXT_IMG_VIRUS' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_49[45 /*6*/]), "TR_TXT_CV2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_02/TUNER_TEXT_IMG_VIRUS_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_49[46 /*6*/]), "TR_TXT_CV3" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_03/TUNER_TEXT_IMG_VIRUS_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (__LIB_13__::func_551(PLAYER::PLAYER_ID()) == 11)
	{
		StringCopy(&(Local_49[44 /*6*/]), "ROBTEXT_IAA00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_IAA/TUNER_TEXT_IMG_IAA' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (__LIB_13__::func_553(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_49[44 /*6*/]), "FXR_TXT_WI1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://FXR_WAYIN/FXR_WAYIN' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_50[44 /*6*/]), "FXR_WAYIN", 24);
	}
}

void func_57()//Position - 0x4C61
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		__LIB_0__::func_366(0);
	}
	if (iLocal_52)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_33);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

