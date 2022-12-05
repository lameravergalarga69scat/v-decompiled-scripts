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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	struct<3> Local_29 = { 0, 0, 0 } ;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	func_28();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_24 == 0)
		{
			if (Global_20266.f_1 != 9)
			{
				switch (Global_20266.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_22640 == 0)
						{
							func_22();
							func_16();
						}
						break;
					case 8:
						if ((__LIB_9__.func_596(2, Global_20234, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							__LIB_9__.func_601();
							Global_20244 = 1;
							if (Global_20266.f_1 > 3)
							{
								if (BitTest(Global_8137, 15))
								{
								}
								func_13();
							}
						}
						break;
					default:
						break;
				}
				if (__LIB_9__.func_600())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_20268 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (__LIB_9__.func_594())
		{
			func_11();
		}
	}
}

void func_2()//Position - 0x157
{
	iLocal_25 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		case 1:
			break;
		case 2:
			Global_20266.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (GRAPHICS::DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(iLocal_22))
		{
			__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_9__.func_619(Global_20247, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20254)
	{
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_8()//Position - 0x44E
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			Local_30.f_0 = (Local_30.f_0 + 1f);
		}
		if (Local_30.f_0 > Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			Local_30.f_1 = (Local_30.f_1 - 2f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			Local_30.f_2 = (Local_30.f_2 - 7f);
		}
		if (Local_30.f_2 < Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 7;
				HUD::CLEAR_HELP(true);
				Global_22642 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_22640 == 6)
	{
		if (iLocal_33)
		{
			Local_30.f_0 = (Local_30.f_0 - 1f);
		}
		if (Local_30.f_0 < Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			Local_30.f_1 = (Local_30.f_1 - 0.5f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			Local_30.f_2 = (Local_30.f_2 + 7f);
		}
		if (Local_30.f_2 > Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			__LIB_0__.func_187("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
	}
	if (BitTest(Global_8137, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
		__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_9__.func_619(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_11()//Position - 0x732
{
	Global_22642 = 1;
	HUD::CLEAR_HELP(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()//Position - 0x770
{
	if (iLocal_31 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
		Local_29 = { Global_20226 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_16()//Position - 0x82D
{
	if (iLocal_28)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_28 = 0;
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
	if (iLocal_28 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20242, 0))
		{
			__LIB_19__.func_917();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0))
		{
			__LIB_19__.func_854();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()//Position - 0x9A5
{
	int iVar0;
	if (Global_20244 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20235, 0))
		{
			MISC::CLEAR_BIT(&Global_8137, 15);
			__LIB_19__.func_847();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_20266.f_1 > 3)
				{
					if (Global_22640 == 0)
					{
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_3__.func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_9__.func_619(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_20254)
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8136, 17);
						Global_22644 = iLocal_23;
						Global_22640 = 12;
						Global_20266.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB25
{
	if (iLocal_32 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
		Local_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_26()//Position - 0xB92
{
	if ((MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_28()//Position - 0xBF2
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

