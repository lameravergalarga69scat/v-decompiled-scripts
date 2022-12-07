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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_24__::func_942();
	if (Global_20211 == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_8941[Global_20266 /*2811*/][2 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_6;
	Global_8941[Global_20266 /*2811*/][4 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_78319)
		{
			Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 = __LIB_0__::func_534(1199, -1, 0);
			Global_8941[Global_20266 /*2811*/][2 /*281*/].f_259 = __LIB_0__::func_534(2030, -1, 0);
			Global_8941[Global_20266 /*2811*/][4 /*281*/].f_259 = __LIB_0__::func_534(2029, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), &(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = __LIB_0__::func_534(1198, -1, 0);
	}
	Global_8941[Global_20266 /*2811*/][3 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_10;
	__LIB_39__::func_845();
	if (Global_78319)
	{
		Global_8941[3 /*2811*/][0 /*281*/] = 190;
		Global_8941[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_2), "CELL_701" /* GXT: Snapmatic */, 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_8941[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704" /* GXT: Quick launch Off */, 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703" /* GXT: Quick launch On */, 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801" /* GXT: Sleep Mode */, 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (__LIB_0__::func_534(2092, -1, 0) == 0)
		{
			Global_8941[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_8941[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_30)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							SYSTEM::SETTIMERB(0);
							Global_113386.f_14051.f_82 = 1;
							iLocal_37 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_37 = 0;
							HUD::CLEAR_HELP(true);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (__LIB_9__::func_596(2, Global_20234, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							iLocal_33 = 0;
							__LIB_9__::func_601();
							Global_20244 = 1;
							__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_20266.f_1 > 3)
							{
								Global_20266.f_1 = 7;
							}
						}
					}
					break;
				default:
					break;
			}
			if (__LIB_9__::func_600())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (__LIB_9__::func_594())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x491
{
	__LIB_39__::func_844();
	if (__LIB_6__::func_854(0))
	{
		__LIB_0__::func_566();
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_36)
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_113386.f_14051.f_83 == 0 || Global_113386.f_14051.f_82 == 0)
	{
		__LIB_0__::func_566();
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_11()//Position - 0x860
{
	int iVar0;
	iLocal_34 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
	}
}

void func_12()//Position - 0x895
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = MISC::GET_GAME_TIMER();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((__LIB_9__::func_596(2, Global_20242, 0) || __LIB_9__::func_596(2, Global_20243, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_30 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_27 = iLocal_18[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_21)];
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
			}
		}
	}
	if (Global_20244 == 0)
	{
		if (__LIB_9__::func_596(2, Global_20235, 0))
		{
			__LIB_19__::func_847();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_26 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				Global_113386.f_14051[Global_20266 /*20*/].f_6 = Global_8941[Global_20266 /*2811*/][2 /*281*/].f_260[iVar0];
				__LIB_2__::func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_78319)
				{
					Global_4541505 = Global_8941[3 /*2811*/][2 /*281*/].f_259;
					__LIB_0__::func_427(2030, Global_8941[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					__LIB_2__::func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					__LIB_2__::func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				__LIB_9__::func_606();
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_9 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_78319)
				{
					Global_4541506 = Global_8941[3 /*2811*/][4 /*281*/].f_259;
					__LIB_0__::func_427(2029, Global_8941[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4541506 == 0)
					{
						Var2 = { __LIB_0__::func_604(PLAYER::PLAYER_ID()) };
						iVar3 = 0;
						if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4541509 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							__LIB_2__::func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						__LIB_2__::func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4541506), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					__LIB_2__::func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_11 = { Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_78319)
				{
					__LIB_0__::func_427(1199, Global_8941[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_10 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_78319)
				{
					__LIB_0__::func_427(1198, Global_113386.f_14051[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_78319 == 1)
				{
					Global_8941[3 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
					__LIB_0__::func_427(2092, Global_8941[3 /*2811*/][iLocal_23 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_8941[0 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8941[1 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8941[2 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43052 == 15)
						{
							if (Global_113386.f_14051.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								__LIB_0__::func_187("CELL_7050" /* GXT: If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode. */);
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								__LIB_2__::func_41(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_8136, 25);
								MISC::SET_BIT(&Global_8137, 11);
								if (Global_113386.f_14051.f_83 == 0)
								{
									HUD::CLEAR_HELP(true);
									__LIB_0__::func_151("CELL_7051" /* GXT: When Sleep Mode is active, the Sleep symbol will be displayed near the Radar. */, -1);
									Global_113386.f_14051.f_83 = 1;
								}
							}
						}
					}
					else
					{
						__LIB_2__::func_41(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_8136, 25);
						MISC::SET_BIT(&Global_8137, 11);
					}
				}
			}
			__LIB_9__::func_619(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (__LIB_6__::func_854(0))
			{
				__LIB_0__::func_566();
			}
		}
	}
}

void func_26()//Position - 0x161D
{
	if (Global_20244 == 0)
	{
		if (__LIB_9__::func_596(2, Global_20235, 0))
		{
			__LIB_19__::func_847();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_24 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_78319 == 0)
					{
						if (Global_43052 == 15)
						{
							if (Global_113386.f_14051.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								__LIB_0__::func_187("CELL_7050" /* GXT: If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode. */);
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
			}
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_27()//Position - 0x16EF
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_78319)
	{
		StringCopy(&(Global_8941[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB" /* GXT: Crew Emblem */, 16);
		Var2 = { __LIB_0__::func_604(PLAYER::PLAYER_ID()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
		{
			StringCopy(&(Global_8941[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840" /* GXT: Default */, 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] < Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_78319 == 1)
			{
				__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_9__::func_619(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
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
	__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_28()//Position - 0x1A34
{
	if (iLocal_42)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_9__::func_596(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			__LIB_19__::func_917();
		}
		if (__LIB_9__::func_596(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			__LIB_19__::func_854();
		}
	}
	if (iLocal_42 == 0)
	{
		if (__LIB_9__::func_596(2, Global_20242, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			__LIB_19__::func_917();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__::func_596(2, Global_20243, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			__LIB_19__::func_854();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_33()//Position - 0x1BA1
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8941[Global_20266 /*2811*/][iVar3 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_8941[Global_20266 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_8941[Global_20266 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/] < Global_8941[Global_20266 /*2811*/][iVar3 /*281*/])
					{
						if (Global_78319)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (__LIB_38__::func_18() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_42(iVar2, iVar3);
							__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8941[Global_20266 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_24), -1082130432, -1082130432, -1082130432);
	__LIB_9__::func_619(Global_20247, "SET_HEADER", "CELL_16" /* GXT: Settings */, 0, 0, 0, 0);
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
	__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_42(int iParam0, int iParam1)//Position - 0x2044
{
	switch (iParam0)
	{
		case 0:
			if (Global_78319)
			{
				iLocal_29 = 19;
			}
			else if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		case 3:
			if (Global_8941[Global_20266 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		default:
			iLocal_29 = Global_8941[Global_20266 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

