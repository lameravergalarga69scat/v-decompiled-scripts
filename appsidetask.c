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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0.72f;
	fLocal_24 = 0.42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_22671 = 0;
	Global_20463 = 0;
	func_18();
	Global_20266.f_1 = 7;
	__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				case 8:
					if (Global_22671 == 1)
					{
						func_5();
					}
					break;
				case 3:
					SCRIPT::TERMINATE_THIS_THREAD();
					break;
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (__LIB_13__::func_89())
				{
					__LIB_0__::func_202();
				}
			}
			else if (__LIB_13__::func_85(2, Global_20234, 0))
			{
				Global_20244 = 1;
				Global_22671 = 0;
				Global_20266.f_1 = 7;
				func_18();
				__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_83())
		{
			__LIB_0__::func_202();
		}
	}
}

void func_5()//Position - 0x24D
{
	GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, false);
	func_6();
}

void func_6()//Position - 0x277
{
	int iVar0;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	__LIB_16__::func_301(255, 255, 255, 205);
	func_9();
	__LIB_13__::func_84(fLocal_25, fLocal_26, &(Global_1998[Global_22893[iLocal_21 /*9*/] /*29*/].f_3), 0);
	fLocal_25 = (fLocal_25 + 0.07f);
	__LIB_16__::func_301(255, 255, 255, 205);
	if (Global_22893[iLocal_21 /*9*/].f_2.f_1 < 10)
	{
		__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_506" /* GXT: ~1~:0~1~ */, Global_22893[iLocal_21 /*9*/].f_2.f_2, Global_22893[iLocal_21 /*9*/].f_2.f_1);
	}
	else
	{
		__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_503" /* GXT: ~1~:~1~ */, Global_22893[iLocal_21 /*9*/].f_2.f_2, Global_22893[iLocal_21 /*9*/].f_2.f_1);
	}
	fLocal_25 = (fLocal_25 + 0.07f);
	__LIB_16__::func_301(255, 255, 255, 205);
	__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_505" /* GXT: ~1~/~1~ */, Global_22893[iLocal_21 /*9*/].f_2.f_3, Global_22893[iLocal_21 /*9*/].f_2.f_4);
	fLocal_25 = fLocal_23;
	__LIB_16__::func_301(255, 255, 255, 205);
	fLocal_26 = (fLocal_26 + 0.02f);
	if (Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	HUD::SET_TEXT_WRAP(0f, 0.93f);
	__LIB_13__::func_84(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_26 = (fLocal_26 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_9)
	{
		__LIB_16__::func_301(255, 255, 255, 255);
		fLocal_26 = (fLocal_26 + 0.04f);
		if (Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			__LIB_13__::func_84(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			__LIB_3__::func_46(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_27[iVar0], Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_9()//Position - 0x493
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
	HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
}

void func_11()//Position - 0x4FC
{
	if (__LIB_13__::func_85(2, Global_20235, 0))
	{
		iLocal_21 = iLocal_18[iLocal_20];
		Global_22671 = 1;
		__LIB_2__::func_845(Global_20247, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, "CELL_285" /* GXT: Move */, "CELL_284" /* GXT: Zoom */, 0);
		__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_13__::func_91(Global_20247, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
		Global_20266.f_1 = 8;
		Global_22671 = 1;
	}
}

void func_14()//Position - 0x63F
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
		if (__LIB_13__::func_85(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
		}
		if (__LIB_13__::func_85(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
		}
	}
	if (iLocal_27 == 0)
	{
		if (__LIB_13__::func_85(2, Global_20242, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_13__::func_85(2, Global_20243, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x6DC
{
	int iVar0;
	iVar0 = 0;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	iLocal_22 = iLocal_19;
	while (iVar0 < iLocal_22)
	{
		__LIB_16__::func_301(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		__LIB_13__::func_84(fLocal_25, fLocal_26, &(Global_1998[Global_22893[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_25 = (fLocal_25 + 0.07f);
		__LIB_16__::func_301(255, 255, 255, 205);
		if (Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_506" /* GXT: ~1~:0~1~ */, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_503" /* GXT: ~1~:~1~ */, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_25 = (fLocal_25 + 0.07f);
		__LIB_16__::func_301(255, 255, 255, 205);
		__LIB_3__::func_46(fLocal_25, fLocal_26, "CELL_505" /* GXT: ~1~/~1~ */, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_25 = fLocal_23;
		__LIB_16__::func_301(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		fLocal_26 = (fLocal_26 + 0.02f);
		HUD::SET_TEXT_WRAP(0f, 0.93f);
		__LIB_13__::func_84(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_26 = (fLocal_26 + 0.05f);
		iVar0++;
	}
}

void func_18()//Position - 0x8FD
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar3 = 3;
		Global_22893[iVar3 /*9*/].f_2 = -1;
		Global_22893[iVar3 /*9*/].f_2.f_1 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_2 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_3 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_5 = 0;
		while (iVar2 < 4)
		{
			if (iVar0[iVar2] == 0)
			{
				if (Global_22893[iVar2 /*9*/].f_8 != 0)
				{
					if (__LIB_2__::func_831(Global_22893[iVar2 /*9*/].f_2, Global_22893[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_22893[iVar1 /*9*/].f_8 != 0)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	__LIB_2__::func_845(Global_20247, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, 0, 0, 0);
}

