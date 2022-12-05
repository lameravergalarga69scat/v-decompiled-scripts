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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
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
	iLocal_26 = -99;
	StringCopy(&cLocal_27, "TRACKID", 32);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_27, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_33)
		{
			if (iLocal_35 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_35++;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					__LIB_0__.func_478("CELL_4005");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_35);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				__LIB_0__.func_478("CELL_4006");
				__LIB_0__.func_478("CELL_4007");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_34 = 1;
				iLocal_33 = 0;
			}
		}
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					func_8();
					if (iLocal_32 == 0)
					{
						func_6();
					}
					break;
				case 8:
					if (__LIB_9__.func_596(2, Global_20234, 0))
					{
						__LIB_9__.func_601();
						iLocal_33 = 0;
						iLocal_34 = 0;
						Global_20244 = 1;
						func_14();
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				default:
					break;
			}
			if (__LIB_9__.func_600())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (__LIB_9__.func_594())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x209
{
	iLocal_33 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_6()//Position - 0x2D4
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_32 = 1;
	}
}

void func_8()//Position - 0x3D7
{
	if (Global_20244 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20235, 0))
		{
			if ((iLocal_32 && iLocal_34 == 0) && iLocal_33 == 0)
			{
				iLocal_35 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				__LIB_0__.func_478("CELL_4005");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_35);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				if (Global_20254)
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
				iLocal_33 = 1;
				SYSTEM::SETTIMERA(0);
			}
		}
	}
}

void func_11()//Position - 0x562
{
	int iVar0;
	__LIB_0__.func_181(134, 1);
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	switch (__LIB_31__.func_154(iVar0))
	{
		case 1:
			__LIB_0__.func_181(82, 1);
			break;
		case 2:
			__LIB_0__.func_181(81, 1);
			break;
		default:
			__LIB_0__.func_181(83, 1);
			break;
	}
}

void func_14()//Position - 0x695
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__.func_478("CELL_4001");
	__LIB_0__.func_478(&Local_20);
	__LIB_0__.func_478(&(Local_20.f_16));
	__LIB_0__.func_478("CELL_4002");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_20.f_24);
	__LIB_0__.func_478("CELL_4003");
	__LIB_0__.func_478(&(Local_20.f_25));
	__LIB_0__.func_478("CELL_4004");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	if (Global_20254)
	{
		if (iLocal_32)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		}
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_32)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_15()//Position - 0x7E5
{
	iLocal_26 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_26, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195" /* GXT: Unknown */, 64);
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195" /* GXT: Unknown */, 32);
		StringCopy(&(Local_20.f_25), "CELL_195" /* GXT: Unknown */, 24);
	}
}

