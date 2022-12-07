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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	struct<6> Local_32[5];
	int iLocal_33[5] = { 0, 0, 0, 0, 0 };
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
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					__LIB_9__::func_640();
					if (iLocal_25 == 0)
					{
						func_15();
					}
					break;
				case 8:
					if (iLocal_25 == 2)
					{
						__LIB_9__::func_640();
						if (bLocal_31)
						{
							func_10();
						}
					}
					if (iLocal_25 == 1)
					{
						__LIB_9__::func_640();
					}
					if (__LIB_9__::func_596(2, Global_20234, 0))
					{
						__LIB_9__::func_601();
						Global_20244 = 1;
						if (iLocal_25 == 2 || iLocal_25 == 1)
						{
							__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_20266.f_1 > 3)
							{
								Global_20266.f_1 = 7;
							}
						}
						if (iLocal_25 == 3)
						{
							__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
						}
					}
					break;
				default:
					break;
			}
			if (__LIB_9__::func_600())
			{
				__LIB_0__::func_199();
			}
		}
		else
		{
			Global_20268 = 6;
			__LIB_0__::func_199();
		}
		if (__LIB_9__::func_594())
		{
			__LIB_0__::func_199();
		}
	}
}

void func_4()//Position - 0x1E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bLocal_31 = false;
	func_31();
	iLocal_21 = 0;
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_20262 == 0)
	{
		while (iVar0 < 5)
		{
			__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_32[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iLocal_21] = iVar0;
			iLocal_21++;
			iVar0++;
		}
	}
	if (Global_20262 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_33[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_32[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_33[iVar1] == 0)
				{
					__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_32[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_26[iLocal_21] = iVar1;
					iLocal_21++;
					iLocal_33[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_21 == 0)
	{
		__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3092" /* GXT: No progress made. */, 0, 0, 0, 0);
	}
	else
	{
		bLocal_31 = true;
	}
	__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_9__::func_619(Global_20247, "SET_HEADER", "CELL_23" /* GXT: Check List */, 0, 0, 0, 0);
	if (Global_20254)
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8136, 17);
	}
	else
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8136, 17);
	}
	iLocal_25 = 2;
}

void func_10()//Position - 0x5B3
{
	int iVar0;
	if (Global_20244 == 0)
	{
		if (__LIB_9__::func_596(2, Global_20235, 0))
		{
			__LIB_19__::func_847();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_30 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_30))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_30);
			iLocal_23 = iLocal_26[iVar0];
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 8;
			}
			__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_23 == 1)
			{
			}
			func_11();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3206" /* GXT: - Total Available: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_27);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3101" /* GXT: - Total Complete: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_28);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_9__::func_619(Global_20247, "SET_HEADER", &(Local_32[iLocal_23 /*6*/]), 0, 0, 0, 0);
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (Global_20254)
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_25 = 3;
		}
	}
}

void func_11()//Position - 0x743
{
	switch (iLocal_23)
	{
		case 0:
			iLocal_27 = Global_113105;
			iLocal_28 = Global_113122;
			break;
		case 1:
			iLocal_27 = (Global_113106 + Global_113107);
			iLocal_28 = (Global_113123 + Global_113124);
			break;
		case 2:
			iLocal_27 = Global_113108;
			iLocal_28 = Global_113125;
			break;
		case 3:
			iLocal_27 = Global_113109;
			iLocal_28 = Global_113126;
			break;
		case 4:
			iLocal_27 = (Global_113110 + Global_113111);
			iLocal_28 = (Global_113127 + Global_113128);
			break;
		default:
			iLocal_27 = 0;
			iLocal_28 = 0;
			break;
	}
}

void func_15()//Position - 0x858
{
	if (Global_20244 == 0)
	{
		if (__LIB_9__::func_596(2, Global_20235, 0))
		{
			__LIB_19__::func_847();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_30 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_30))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_30);
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 8;
				if (iLocal_29 == 0)
				{
					iLocal_25 = 1;
					func_16();
				}
				else
				{
					iLocal_25 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()//Position - 0x8CD
{
	int iVar0;
	iLocal_21 = 0;
	func_20();
	iVar0 = 0;
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (__LIB_6__::func_854(0))
	{
		__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_229" /* GXT: On Active Mission */, 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_95442)
		{
			__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_95233[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_21++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_9__::func_619(Global_20247, "SET_HEADER", "CELL_3301" /* GXT: Open Missions */, 0, 0, 0, 0);
	if (__LIB_6__::func_854(0) || Global_95442 == 0)
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
		if (Global_20254)
		{
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_20254)
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
	}
	else
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 1;
}

void func_20()//Position - 0xCE1
{
	bool bVar0;
	int iVar1;
	Global_95442 = 0;
	bVar0 = false;
	while (bVar0 < 7)
	{
		if (Global_91193[bVar0 /*5*/] != -1)
		{
			if (Global_95442 < 52)
			{
				iVar1 = Global_78588.f_109[Global_91193[bVar0 /*5*/] /*4*/];
				MemCopy(&(Global_95233[Global_95442 /*4*/]), {__LIB_0__::func_103(iVar1)}, 4);
				Global_95442++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 63)
	{
		if ((BitTest(Global_113386.f_18574[bVar0 /*6*/], 0) && BitTest(Global_113386.f_18574[bVar0 /*6*/], 1)) && !BitTest(Global_113386.f_18574[bVar0 /*6*/], 3))
		{
			if (Global_95442 < 52)
			{
				MemCopy(&(Global_95233[Global_95442 /*4*/]), {__LIB_0__::func_339(bVar0)}, 4);
				Global_95442++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 20)
	{
		if (BitTest(Global_113386.f_9085.f_99.f_219[0], bVar0))
		{
			if (Global_95442 < 52)
			{
				StringCopy(&(Global_95233[Global_95442 /*4*/]), func_21(bVar0), 16);
				Global_95442++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
}

char* func_21(bool bParam0)//Position - 0xE10
{
	switch (bParam0)
	{
		case 0:
			return "MG_BJUM" /* GXT: Base Jumping */;
			break;
		case 1:
			return "MG_DART" /* GXT: Darts */;
			break;
		case 2:
			return "MG_GOLF" /* GXT: Golf */;
			break;
		case 3:
			return "MG_HUNT" /* GXT: Hunting */;
			break;
		case 4:
			return "MG_OFFR" /* GXT: Offroad Races */;
			break;
		case 5:
			return "MG_PILO" /* GXT: Flight School */;
			break;
		case 6:
			return "MG_RMPG" /* GXT: Rampages */;
			break;
		case 7:
			return "MG_SERA" /* GXT: Sea Races */;
			break;
		case 8:
			return "MG_SRAC" /* GXT: Street Races */;
			break;
		case 9:
			return "MG_STRP" /* GXT: Stripclub */;
			break;
		case 10:
			return "MG_STNT" /* GXT: Stunt Planes */;
			break;
		case 11:
			return "MG_SHTR" /* GXT: Shooting Range */;
			break;
		case 12:
			return "MG_TAXI" /* GXT: Taxi Jobs */;
			break;
		case 13:
			return "MG_TENN" /* GXT: Tennis */;
			break;
		case 14:
			return "MG_TOWI" /* GXT: Towing */;
			break;
		case 15:
			return "MG_TRFA" /* GXT: Trafficking - Air */;
			break;
		case 16:
			return "MG_TRFG" /* GXT: Trafficking - Ground */;
			break;
		case 17:
			return "MG_TRIA" /* GXT: Triathlon */;
			break;
		case 18:
			return "MG_YOGA" /* GXT: Yoga */;
			break;
		case 19:
			return "MG_CRCE" /* GXT: Stock Car Races */;
			break;
	}
	return "INVALID!";
}

void func_30()//Position - 0x15B7
{
	__LIB_2__::func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3301" /* GXT: Open Missions */, 0, 0, 0, 0);
	__LIB_3__::func_637(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3302" /* GXT: Progress */, 0, 0, 0, 0);
	iLocal_21 = 2;
	__LIB_2__::func_41(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_9__::func_619(Global_20247, "SET_HEADER", "CELL_23" /* GXT: Check List */, 0, 0, 0, 0);
	if (Global_20254)
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
	}
	else
	{
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		__LIB_3__::func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 0;
}

void func_31()//Position - 0x16F1
{
	func_32(0, "CELL_3001" /* GXT: Missions */, 1, Global_113122);
	func_32(1, "CELL_3008" /* GXT: Hobbies and Pastimes */, 3, Global_113122);
	func_32(2, "CELL_3004" /* GXT: Strangers and Freaks */, 7, Global_113125);
	func_32(3, "CELL_3005" /* GXT: Random Events */, 9, Global_113126);
	func_32(4, "CELL_3007" /* GXT: Miscellaneous */, 11, Global_113127);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)//Position - 0x1741
{
	StringCopy(&(Local_32[iParam0 /*6*/]), sParam1, 16);
	Local_32[iParam0 /*6*/].f_4 = iParam2;
	Local_32[iParam0 /*6*/].f_5 = uParam3;
	if (Local_32[0 /*6*/].f_4 == 1)
	{
	}
}

