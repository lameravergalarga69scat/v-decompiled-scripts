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
	if (iLocal_20 == 0)
	{
		__LIB_13__::func_554();
		func_10();
		iLocal_20 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				case 8:
					if (__LIB_13__::func_85(2, Global_20234, 0))
					{
						__LIB_13__::func_90();
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
			if (__LIB_13__::func_89())
			{
				__LIB_0__::func_202();
			}
		}
		else
		{
			Global_20268 = 6;
			__LIB_0__::func_202();
		}
		if (__LIB_13__::func_83())
		{
			__LIB_0__::func_202();
		}
	}
}

void func_6()//Position - 0x1EF
{
	func_7();
}

void func_7()//Position - 0x1FB
{
	__LIB_2__::func_829(Global_20247, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (BitTest(Global_4541229, 23))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		__LIB_0__::func_610("CELL_EXTBYOU" /* GXT: You */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541230);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541231);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541232);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510.f_2));
		__LIB_0__::func_610("CELL_BODYG" /* GXT: Guard */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541233);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541234);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541235);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513.f_2));
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		__LIB_0__::func_610("CELL_EXTBYOU" /* GXT: You */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541233);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541234);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541235);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541513.f_2));
		__LIB_0__::func_610("CELL_EXTBTARG" /* GXT: Target */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541230);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541231);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541232);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4541510.f_2));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_10()//Position - 0x40B
{
	func_7();
}

