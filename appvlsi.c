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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (__LIB_9__.func_596(2, Global_20235, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
							Global_20244 = 1;
							func_10();
							__LIB_26__.func_61();
							SYSTEM::SETTIMERA(0);
							SYSTEM::SETTIMERB(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (SYSTEM::TIMERB() > 499)
						{
							SYSTEM::SETTIMERB(0);
						}
						if (SYSTEM::TIMERA() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_1836093 = 1;
					}
					break;
				case 8:
					if (__LIB_9__.func_596(2, Global_20234, 0))
					{
						__LIB_9__.func_601();
						Global_20244 = 1;
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

void func_2()//Position - 0x169
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_9()//Position - 0x38F
{
	if (Global_20254)
	{
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
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

void func_10()//Position - 0x421
{
	if (iLocal_21 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", false, -1);
		while (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", false, -1) == 0)
		{
			SYSTEM::WAIT(0);
		}
		__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		if (BitTest(Global_8138, 1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		if (BitTest(Global_8138, 1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

