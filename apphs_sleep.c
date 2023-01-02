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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 0.82f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_0__::func_698();
	iLocal_24 = 1;
	__LIB_13__::func_534();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					func_21();
					if (iLocal_24)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				case 8:
					func_21();
					func_12();
					if (__LIB_13__::func_85(2, Global_20234, 0))
					{
						__LIB_13__::func_90();
						Global_20244 = 1;
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
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
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (__LIB_13__::func_83())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x156
{
	__LIB_13__::func_532();
	if (__LIB_0__::func_540(0))
	{
		__LIB_0__::func_764();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_12()//Position - 0x541
{
	if (Global_20244 == 0)
	{
		if (__LIB_13__::func_85(2, Global_20235, 0))
		{
			__LIB_13__::func_111();
			Global_20244 = 1;
			__LIB_0__::func_698();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_21)];
			__LIB_13__::func_91(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (__LIB_0__::func_540(0))
			{
				__LIB_0__::func_764();
			}
		}
	}
}

void func_18()//Position - 0x725
{
	Global_20244 = 1;
	iLocal_23 = 0;
	iLocal_24 = 0;
	func_19();
}

void func_19()//Position - 0x73B
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_0__::func_698();
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar2] < Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar3])
					{
						iVar3 = iVar2;
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_104[iVar3]), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_91(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20254)
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_21()//Position - 0x9F5
{
	if (iLocal_29)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_29 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_13__::func_85(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			__LIB_13__::func_162();
		}
		if (__LIB_13__::func_85(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			__LIB_13__::func_161();
		}
	}
	if (iLocal_29 == 0)
	{
		if (__LIB_13__::func_85(2, Global_20242, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			__LIB_13__::func_162();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_13__::func_85(2, Global_20243, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			__LIB_13__::func_161();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_26()//Position - 0xB5E
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_19 = 0;
	iVar1 = 0;
	__LIB_0__::func_698();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8941[Global_20266 /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/] < Global_8941[Global_20266 /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar1), -1f, -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
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
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_16" /* GXT: Settings */, 0, 0, 0, 0);
	if (Global_20254)
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

