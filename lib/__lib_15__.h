namespace __LIB_15__ {
	
int func_0(var uParam0)//Position - 0xD9C17
{
	if (Global_2824571.f_136 > 0 || uParam0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_14__::func_325());
	}
	return 0;
}

void func_1(var uParam0, var uParam1)//Position - 0xD9FF7
{
	*uParam0 = { -0.14f, -58.1f, -3.38f };
	*uParam1 = { 49.68f, 0f, 0f };
}

float func_2(int iParam0)//Position - 0xDA01D
{
	return Global_4280768[iParam0 /*45*/].f_11;
}

void func_3(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0xDA02F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.953125f, -2.17139f, 9.60403f };
					*fParam3 = 90f;
					break;
				case 1:
					*uParam2 = { 1.27979f, -1.99268f, 13.4305f };
					*fParam3 = -180f;
					break;
				case 2:
					*uParam2 = { 5.48218f, -1.98486f, 18.1568f };
					*fParam3 = -90f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2.24878f, -1.99268f, 17.32f };
					*fParam3 = -90f;
					break;
				case 1:
					*uParam2 = { 1.6189f, -1.99268f, 14.0505f };
					*fParam3 = -180f;
					break;
				case 2:
					*uParam2 = { 7.63501f, -1.99268f, 10.3491f };
					*fParam3 = 90f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 10.8328f, -1.99268f, 9.85299f };
					*fParam3 = 90f;
					break;
				case 1:
					*uParam2 = { -0.226318f, -1.96289f, 12.8964f };
					*fParam3 = 180f;
					break;
				case 2:
					*uParam2 = { -15.052f, -1.99463f, 9.06741f };
					*fParam3 = 90f;
					break;
			}
			break;
	}
}

void func_4(var uParam0, var uParam1)//Position - 0xDA213
{
	*uParam0 = { -50.8065f, -1.98013f, 0.136816f };
	*uParam1 = 0f;
}

int func_5()//Position - 0xE6D91
{
	if (Local_211.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_211.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_6()//Position - 0xE6DB4
{
	if (Local_211.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_7()//Position - 0xE6F7D
{
	if (Local_211.f_15.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_8()//Position - 0xE7065
{
	if (Local_211.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_9()//Position - 0xE7174
{
	if (Local_211.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_10()//Position - 0xE73F0
{
	if (Local_211.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_11()//Position - 0xE74A7
{
	if (Local_211.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_12()//Position - 0xE74CC
{
	if (Local_211.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_13()//Position - 0xE74EF
{
	if (Local_211.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_14()//Position - 0xE754D
{
	if (Local_211.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_15()//Position - 0xE7570
{
	if (Local_211.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_16()//Position - 0xE7593
{
	if (Local_211.f_15.f_6 != 0)
	{
		Call_Loc(Local_211.f_15.f_6);
		return StackVal;
	}
	return 0;
}

char* func_17()//Position - 0xF0C1C
{
	return "FXR_OT_AG_EXT" /* GXT: Exit the Agency. */;
}

float func_18()//Position - 0xFD671
{
	return 1.7f;
}

int func_19(int iParam0)//Position - 0x11383D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 5);
	}
	return 0;
}

void func_20(bool bParam0)//Position - 0x31C5
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_1965626, bParam0))
		{
			MISC::CLEAR_BIT(&Global_1965626, bParam0);
			MISC::CLEAR_BIT(&Global_1965632, bParam0);
			MISC::CLEAR_BIT(&Global_1965634, bParam0);
		}
	}
	else if (BitTest(Global_1965627, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&Global_1965627, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965633, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965635, (bParam0 - 32));
	}
}

bool func_21(bool bParam0)//Position - 0x33CB
{
	if (bParam0 < 32)
	{
		return (BitTest(Global_1965628, bParam0) && BitTest(Global_1965630, bParam0));
	}
	return (BitTest(Global_1965629, (bParam0 - 32)) && BitTest(Global_1965631, (bParam0 - 32)));
}

void func_22(int iParam0)//Position - 0x355D
{
	if ((MISC::GET_FRAME_COUNT() % 20) == 0)
	{
	}
	Global_1965528 = iParam0;
}

void func_23()//Position - 0x4CE1
{
	Global_2787917 = 0;
}

bool func_24()//Position - 0x4DA2
{
	return BitTest(Global_1958736, 4);
}

bool func_25()//Position - 0x4DE1
{
	return BitTest(Global_1958736, 5);
}

void func_26(bool bParam0)//Position - 0x4DFD
{
	if (bParam0)
	{
		if (__LIB_0__::func_93())
		{
			if (!BitTest(Global_1958711, 9))
			{
				MISC::SET_BIT(&Global_1958711, 9);
			}
		}
	}
	else if (BitTest(Global_1958711, 9))
	{
		MISC::CLEAR_BIT(&Global_1958711, 9);
	}
}

void func_27(int iParam0)//Position - 0x4F1B
{
	Global_2787907 = iParam0;
}

int func_28(int iParam0)//Position - 0x8554
{
	if (((((iParam0 == joaat("xs_prop_arena_turntable_02a") || iParam0 == joaat("xs_prop_arena_turntable_03a")) || iParam0 == joaat("vw_prop_arena_turntable_02f_sf")) || iParam0 == joaat("xs_prop_arena_turntable_03a_sf")) || iParam0 == joaat("xs_prop_arena_turntable_02a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_03a_wl"))
	{
		return 1;
	}
	return 0;
}

void func_29()//Position - 0x87AF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (BitTest(Global_4718592.f_21, 21))
		{
			iVar1 = iVar0;
			if (HUD::IS_MP_GAMER_TAG_ACTIVE(iVar0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				if ((iVar1 != PLAYER::PLAYER_ID() || BitTest(Global_4718592.f_31, 9)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
				{
					if (BitTest(Global_4718592.f_31, 1))
					{
						HUD::SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(iVar0, true);
						HUD::SET_MP_GAMER_TAGS_POINT_HEALTH(iVar0, SYSTEM::ROUND(VEHICLE::GET_VEHICLE_BODY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false))), 1001);
					}
					else
					{
						HUD::SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(iVar0, true);
					}
				}
				else
				{
					HUD::SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(iVar0, false);
					HUD::SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(iVar0, false);
				}
			}
		}
		iVar0++;
	}
}

int func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x9522
{
	if (bParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				default:
			}
			break;
	}
	return 0;
}

bool func_31()//Position - 0xA0CE
{
	return BitTest(Global_2788035, 2);
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA578
{
	MISC::SET_BIT(&Global_2788033, 12);
	Global_2787947.f_20 = iParam0;
	Global_2787947.f_20.f_1 = iParam1;
	Global_2787947.f_20.f_2 = iParam2;
	Global_2787947.f_20.f_3 = iParam3;
}

void func_33(int iParam0)//Position - 0xA5B0
{
	MISC::SET_BIT(&Global_2788033, 6);
	Global_2787947.f_19 = iParam0;
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0xA5C9
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 1;
	Global_2787947.f_8 = iParam0;
	Global_2787947.f_8.f_2 = iParam2;
	Global_2787947.f_8.f_3 = iParam1;
	Global_2787947.f_8.f_4 = iParam3;
	Global_2787947.f_13 = fParam4;
	Global_2787947.f_13.f_1 = iParam5;
	Global_2787947.f_13.f_2 = iParam6;
}

int func_35()//Position - 0xA625
{
	int iVar0;
	var uVar1;
	MISC::SET_BIT(&Global_2788035, 1);
	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787946 = iVar0;
	uVar1 = Global_2788034;
	Global_2788034 = Global_2788033;
	Global_2788033 = uVar1;
	return iVar0;
}

void func_36(int iParam0)//Position - 0xA673
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 3;
	Global_2787947.f_8 = joaat("VEHICLE_WEAPON_PLAYER_BULLET");
	Global_2787947.f_8.f_2 = iParam0;
	Global_2787947.f_8.f_3 = 0;
	Global_2787947.f_8.f_4 = 0f;
}

void func_37()//Position - 0xA6B4
{
	Global_2788034 = Global_2788033;
	Global_2788033 = 0;
}

bool func_38()//Position - 0xAA0E
{
	return (Global_2787934 == Global_2787943 && !__LIB_6__::func_364());
}

void func_39(var* uParam0)//Position - 0xAA29
{
	Global_2787945 = 0;
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("turret_cam_script"), uParam0, 8, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("turret_cam_script"));
	Global_2787934 = Global_2787943;
	Global_1944345.f_44 = 1;
}

void func_40(var uParam0)//Position - 0xAC7F
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787946 = *uParam0;
}

void func_41(char* sParam0)//Position - 0xAC95
{
	MISC::SET_BIT(&Global_2788033, 11);
	StringCopy(&(Global_2787947.f_80), sParam0, 16);
}

void func_42(int iParam0, char* sParam1)//Position - 0xACB1
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 7);
	iVar0 = Global_2787947.f_24;
	if (iVar0 > 8)
	{
		return;
	}
	StringCopy(&(Global_2787947.f_24.f_1[iVar0 /*4*/]), sParam1, 16);
	Global_2787947.f_24.f_34[iVar0] = iParam0;
	Global_2787947.f_24++;
}

void func_43(int iParam0, char* sParam1)//Position - 0xAD00
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 7);
	iVar0 = Global_2787947.f_24;
	if (iVar0 >= 8)
	{
		return;
	}
	StringCopy(&(Global_2787947.f_24.f_1[iVar0 /*4*/]), sParam1, 16);
	Global_2787947.f_24.f_34[iVar0] = (32 + iParam0);
	Global_2787947.f_24++;
}

void func_44(int iParam0)//Position - 0xADB8
{
	MISC::SET_BIT(&Global_2788033, 5);
	Global_2787947.f_18 = iParam0;
}

void func_45(int iParam0)//Position - 0xAE15
{
	MISC::SET_BIT(&Global_2788033, 4);
	Global_2787947.f_17 = iParam0;
}

void func_46(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0xAE2E
{
	MISC::SET_BIT(&Global_2788033, 0);
	Global_2787947 = fParam0;
	Global_2787947.f_1 = fParam1;
	Global_2787947.f_2 = fParam2;
	Global_2787947.f_3 = fParam3;
	Global_2787947.f_4 = fParam4;
	Global_2787947.f_5 = fParam5;
}

void func_47()//Position - 0xAE90
{
	Global_2788033 = 0;
	Global_2787947.f_24 = 0;
	Global_2787947.f_74 = 0;
}

int func_48(int iParam0, int iParam1)//Position - 0xB063
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 20;
			break;
		case 3:
			iVar0 = 10;
			break;
	}
	iVar0 = (iVar0 + iParam1 + 1);
	if (iParam1 >= 10)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_49(int iParam0)//Position - 0xB1E0
{
	if (iParam0 == PLAYER::PLAYER_ID() && !__LIB_6__::func_364())
	{
		return Global_2787940;
	}
	return Global_2680265.f_1399[iParam0 /*3*/];
}

bool func_50()//Position - 0xE156
{
	return BitTest(Global_1958736, 0);
}

void func_51(bool bParam0)//Position - 0xEBF9
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 2))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 2);
		}
	}
	else if (BitTest(Global_1958711.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 2);
	}
}

float func_52()//Position - 0x1055F
{
	return 3.5f;
}

void func_53(int iParam0)//Position - 0x10C52
{
	Global_2667225.f_2675 = iParam0;
}

void func_54(int iParam0)//Position - 0x1176E
{
	Global_1965622 = iParam0;
}

void func_55(var uParam0)//Position - 0x1225A
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	iVar0 = 1;
	while (iVar0 < 5)
	{
		Var2 = { *(uParam0[iVar0 /*13*/]) };
		iVar1 = iVar0;
		while (iVar1 > 0 && Var2.f_2 < (uParam0[(iVar1 - 1) /*13*/])->f_2)
		{
			*(uParam0[iVar1 /*13*/]) = { *(uParam0[(iVar1 - 1) /*13*/]) };
			iVar1 = (iVar1 - 1);
		}
		*(uParam0[iVar1 /*13*/]) = { Var2 };
		iVar0++;
	}
}

int func_56(int iParam0)//Position - 0x1271A
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_57(var uParam0)//Position - 0x13E2E
{
	return BitTest(uParam0->f_105, 3);
}

int func_58(var uParam0)//Position - 0x13EFC
{
	if (uParam0->f_8 == 20)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, bool bParam1)//Position - 0x13F12
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_30[iVar0] >= uParam0->f_30[iVar1])
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (uParam0->f_30[iVar0] >= uParam0->f_30[iVar2] && iVar0 != iVar1)
			{
				iVar2 = iVar0;
			}
			iVar0++;
		}
		return iVar2;
	}
	return iVar1;
}

bool func_60(var uParam0)//Position - 0x13F85
{
	return BitTest(uParam0->f_105, 7);
}

bool func_61(var uParam0)//Position - 0x13F93
{
	return BitTest(uParam0->f_105, 2);
}

bool func_62(var uParam0)//Position - 0x13FA1
{
	return BitTest(uParam0->f_105, 5);
}

void func_63(var uParam0)//Position - 0x140C5
{
	if (!__LIB_0__::func_649(&(uParam0->f_2)))
	{
		__LIB_0__::func_580(&(uParam0->f_2), 0, 0);
	}
}

void func_64(var uParam0)//Position - 0x140E3
{
	__LIB_0__::func_495(&(uParam0->f_2), 0, 0);
}

void func_65(var uParam0)//Position - 0x140F5
{
	if (uParam0->f_108 == 0)
	{
		if (!BitTest(uParam0->f_105, 2))
		{
			MISC::SET_BIT(&(uParam0->f_105), 2);
		}
	}
	else if (!BitTest(uParam0->f_105, 5))
	{
		MISC::SET_BIT(&(uParam0->f_105), 5);
	}
}

int func_66(var uParam0)//Position - 0x1412E
{
	if (uParam0->f_8 == 19)
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, int iParam1)//Position - 0x14144
{
	uParam0->f_104 = iParam1;
}

int func_68(int iParam0, bool bParam1)//Position - 0x15151
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_72;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_72;
}

int func_69(int iParam0, bool bParam1)//Position - 0x1535B
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_80;
}

int func_70(int iParam0, bool bParam1)//Position - 0x15385
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_77;
}

var func_71(int iParam0, bool bParam1)//Position - 0x153AF
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_76;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_76;
}

struct<6> func_72(int iParam0, bool bParam1)//Position - 0x1543C
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/];
	}
	return Global_794709.f_4[iParam0 /*88*/];
}

void func_73(var uParam0)//Position - 0x15472
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 18)
	{
		if (BitTest(uParam0->f_106, bVar0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_106), bVar0);
		}
		bVar0++;
	}
}

int func_74(int iParam0, bool bParam1)//Position - 0x15BAD
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_177589[iParam0 /*13*/].f_1;
}

int func_75(int iParam0, bool bParam1)//Position - 0x16247
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_70;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_70;
}

int func_76(int iParam0, bool bParam1)//Position - 0x162BB
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_69;
	}
	if (Global_794709.f_177589[iParam0 /*13*/].f_2 != -1 && Global_262145.f_4947[Global_794709.f_177589[iParam0 /*13*/].f_2] != -1)
	{
		return Global_262145.f_4947[Global_794709.f_177589[iParam0 /*13*/].f_2];
	}
	return Global_794709.f_4[iParam0 /*88*/].f_69;
}

int func_77(int iParam0, bool bParam1)//Position - 0x1633F
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_71;
	}
	if (Global_794709.f_177589[iParam0 /*13*/].f_2 != -1 && Global_262145.f_4896[Global_794709.f_177589[iParam0 /*13*/].f_2] != -1)
	{
		return Global_262145.f_4896[Global_794709.f_177589[iParam0 /*13*/].f_2];
	}
	return Global_794709.f_4[iParam0 /*88*/].f_71;
}

int func_78(int iParam0, bool bParam1)//Position - 0x163FD
{
	if (bParam1 && iParam0 < 100)
	{
		return -1;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_68;
}

bool func_79(int iParam0, bool bParam1)//Position - 0x16427
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_65;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_65;
}

bool func_80(var uParam0)//Position - 0x16564
{
	return BitTest(uParam0->f_105, 4);
}

int func_81(var uParam0, var uParam1)//Position - 0x16572
{
	if (Global_262145.f_9458 /* Tunable: DISABLE_NJVS_PLAYSTYLE */ || uParam1->f_46 == 0)
	{
		return 0;
	}
	else if (uParam0->f_54 < uParam1->f_46)
	{
		return 1;
	}
	return 0;
}

int func_82(var uParam0)//Position - 0x1670B
{
	if (Global_1057166.f_103 < uParam0->f_111[0 /*5*/])
	{
		return 1;
	}
	return 0;
}

int func_83(var uParam0, var uParam1)//Position - 0x16728
{
	if (uParam1->f_26 < 3)
	{
		if (uParam0->f_54 == uParam1->f_27[uParam1->f_26])
		{
			return 1;
		}
	}
	return 0;
}

int func_84(var uParam0, var uParam1)//Position - 0x1674E
{
	if (uParam1->f_31 < 6)
	{
		if (uParam0->f_54 == uParam1->f_32[uParam1->f_31])
		{
			return 1;
		}
	}
	return 0;
}

bool func_85(int iParam0)//Position - 0x18A93
{
	return iParam0 == 52;
}

int func_86(int iParam0, int iParam1)//Position - 0x18AFB
{
	int iVar0;
	int iVar1;
	iVar1 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 4);
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 36:
				return Global_262145.f_9830[iVar1];
			case 42:
				return Global_262145.f_9841[iVar1];
			case 43:
				return Global_262145.f_9852[iVar1];
			case 44:
				return Global_262145.f_9863[iVar1];
			case 45:
				return Global_262145.f_9874[iVar1];
			case 47:
				return Global_262145.f_9885[iVar1];
			case 49:
				return Global_262145.f_9896[iVar1];
			case 54:
				return Global_262145.f_9907[iVar1];
			case 51:
				return Global_262145.f_9918[iVar1];
			case 52:
				return Global_262145.f_9929[iVar1];
			case 55:
				return Global_262145.f_9940[iVar1];
			case 58:
				return Global_262145.f_9951[iVar1];
			case 57:
				return Global_262145.f_9962[iVar1];
			case 50:
				return Global_262145.f_9973[iVar1];
			case 56:
				return Global_262145.f_9984[iVar1];
			case 61:
				return Global_262145.f_9995[iVar1];
			case 60:
				return Global_262145.f_10006[iVar1];
			case 64:
				return Global_262145.f_10017[iVar1];
			case 65:
				return Global_262145.f_10028[iVar1];
			case 67:
				return Global_262145.f_10040[iVar1];
			case 68:
				return Global_262145.f_10051[iVar1];
			}
		default:
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9511[iVar1];
			}
			else
			{
				return Global_262145.f_9533[iVar1];
			}
			break;
		case 11:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9698[iVar1];
			}
			else
			{
				return Global_262145.f_9674[iVar1];
			}
			break;
		case 0:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9522[iVar1];
			}
			else
			{
				return Global_262145.f_9533[iVar1];
			}
			break;
		case 2:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9522[iVar1];
			}
			else
			{
				return Global_262145.f_9511[iVar1];
			}
			break;
		case 3:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9511[iVar1];
			}
			else if (iVar0 == 1)
			{
				return Global_262145.f_9533[iVar1];
			}
			else
			{
				return Global_262145.f_9522[iVar1];
			}
			break;
		case 28:
			return Global_262145.f_9797[iVar1];
			break;
		case 29:
			return Global_262145.f_9819[iVar1];
			break;
		case 30:
			return Global_262145.f_9808[iVar1];
			break;
		case 31:
			return Global_262145.f_9786[iVar1];
			break;
		case 9:
			return Global_262145.f_9674[iVar1];
			break;
		case 10:
			return Global_262145.f_9687[iVar1];
			break;
		case 12:
			return Global_262145.f_9709[iVar1];
			break;
		case 13:
			return Global_262145.f_9731[iVar1];
			break;
		case 22:
			return Global_262145.f_9577[iVar1];
			break;
		case 14:
			return Global_262145.f_9720[iVar1];
			break;
		case 16:
			return Global_262145.f_9588[iVar1];
			break;
		case 27:
			return Global_262145.f_9599[iVar1];
			break;
		case 24:
			return Global_262145.f_9608[iVar1];
			break;
		case 26:
			return Global_262145.f_9618[iVar1];
			break;
		case 25:
			return Global_262145.f_9630[iVar1];
			break;
		case 17:
			return Global_262145.f_9742[iVar1];
			break;
		case 20:
			return Global_262145.f_9753[iVar1];
			break;
		case 21:
			return Global_262145.f_9764[iVar1];
			break;
		case 23:
			return Global_262145.f_9775[iVar1];
			break;
		case 7:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9641[iVar1];
			}
			else
			{
				return Global_262145.f_9663[iVar1];
			}
			break;
		case 6:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9652[iVar1];
			}
			else
			{
				return Global_262145.f_9663[iVar1];
			}
			break;
		case 8:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9652[iVar1];
			}
			else
			{
				return Global_262145.f_9641[iVar1];
			}
			break;
	}
	return 0;
}

int func_87(var uParam0)//Position - 0x1912B
{
	return uParam0->f_110;
}

int func_88(var uParam0, int iParam1)//Position - 0x19137
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = 1;
	while (iVar3 && iVar2 < 10)
	{
		iVar3 = 0;
		iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(iParam1, iParam1 + 6);
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (iVar0 == uParam0->f_27[iVar1])
			{
				iVar3 = 0;
				iVar2++;
				iVar0 = -1;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_89()//Position - 0x19190
{
	if (Global_4718592.f_117095 == 5 || Global_4718592.f_117095 == 6)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x191BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	while (iVar2 && iVar1 < 10)
	{
		iVar2 = 0;
		iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(iParam0, iParam0 + 6);
		iVar1++;
	}
	return iVar0;
}

void func_91(var uParam0)//Position - 0x1986C
{
	uParam0->f_107 = 0;
}

int func_92(int iParam0)//Position - 0x19915
{
	return __LIB_5__::func_62(Global_4718592.f_116524, iParam0);
}

int func_93(int iParam0)//Position - 0x19CA3
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_262145.f_6890[iVar1] == iParam0)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6210[iVar1])
			{
				if (Global_262145.f_5065[iVar1 /*51*/][iVar0] == 0)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_94(int iParam0)//Position - 0x19DC4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == __LIB_12__::func_818(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_95(var uParam0)//Position - 0x19F96
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uParam0->f_11[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_128 = { Global_1922899 };
}

void func_96()//Position - 0x19FD4
{
	Global_1835431.f_3 = 1;
}

int func_97(var uParam0)//Position - 0x1A0AD
{
	return uParam0->f_104;
}

void func_98(var uParam0, int iParam1)//Position - 0x1A0B9
{
	if (BitTest(uParam0->f_105, 6) || iParam1)
	{
		if (!__LIB_0__::func_649(uParam0))
		{
			uParam0->f_5++;
			__LIB_0__::func_580(uParam0, 0, 0);
		}
	}
}

bool func_99()//Position - 0x1A99C
{
	return BitTest(Global_1057830.f_94, 1);
}

bool func_100()//Position - 0x1AF1D
{
	return Global_1941273.f_10;
}

int func_101(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1BAD7
{
	if (iParam0 != 2)
	{
		return 1;
	}
	if (!bParam1)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (bParam4)
		{
			if (__LIB_0__::func_858(Global_794709.f_177589[iParam2 /*13*/].f_1))
			{
				return 1;
			}
			return 0;
		}
		else if (((((((Global_794709.f_4[iParam2 /*88*/].f_68 == 6 || Global_794709.f_4[iParam2 /*88*/].f_68 == 7) || Global_794709.f_4[iParam2 /*88*/].f_68 == 19) || Global_794709.f_4[iParam2 /*88*/].f_68 == 19) || Global_794709.f_4[iParam2 /*88*/].f_68 == 20) || Global_794709.f_4[iParam2 /*88*/].f_68 == 21) || Global_794709.f_4[iParam2 /*88*/].f_68 == 22) || Global_794709.f_4[iParam2 /*88*/].f_68 == 23)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_102()//Position - 0x1EB62
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_180134.f_2825[0] != Global_4718592.f_180134.f_2825[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_103(int iParam0)//Position - 0x284BC
{
	struct<2> Var0;
	Var0.f_1 = { 0f, 0f, 0f };
	if (iParam0 < 0 || iParam0 >= 59)
	{
		return Var0.f_1;
	}
	return Global_4980736.f_69361[iParam0 /*151*/];
}

int func_104(int iParam0)//Position - 0x28E18
{
	int iVar0;
	if (!__LIB_0__::func_721())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_172946.f_1 - 1))
	{
		if (Global_4718592.f_172946.f_2[iVar0 /*20*/] == 2 && Global_4718592.f_172946.f_2[iVar0 /*20*/].f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_105(int iParam0)//Position - 0x294B5
{
	if ((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("tampa3") || iParam0 == joaat("dune3")) || iParam0 == joaat("halftrack")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("technical3")) || iParam0 == joaat("apc")) || iParam0 == joaat("oppressor")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("microlight")) || iParam0 == joaat("havok")) || iParam0 == joaat("seabreeze")) || iParam0 == joaat("starling")) || iParam0 == joaat("pyro")) || iParam0 == joaat("mogul")) || iParam0 == joaat("rogue")) || iParam0 == joaat("nokota")) || iParam0 == joaat("hunter")) || iParam0 == joaat("tula")) || iParam0 == joaat("bombushka")) || iParam0 == joaat("alphaz1")) || iParam0 == joaat("howard")) || iParam0 == joaat("barrage")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("volatol")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("cuban800")) || iParam0 == joaat("molotok")) || iParam0 == joaat("akula")) || iParam0 == joaat("avenger")) || iParam0 == joaat("savestra")) || iParam0 == joaat("comet4")) || iParam0 == joaat("revolter")) || iParam0 == joaat("viseris")) || iParam0 == joaat("menacer")) || iParam0 == joaat("oppressor2")) || iParam0 == joaat("strikeforce")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("seasparrow")) || iParam0 == joaat("jb7002")) || iParam0 == joaat("minitank")) || iParam0 == joaat("annihilator2")) || iParam0 == joaat("alkonost"))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, struct<3> Param1, int iParam2)//Position - 0x2AF43
{
	if (Param1.f_2 < -100f && iParam2 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_107(int iParam0)//Position - 0x2E606
{
	return Global_262145.f_6086[iParam0] == Global_4718592.f_116524;
}

int func_108(int iParam0)//Position - 0x2E65A
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_3880, iParam0);
}

int func_109(int iParam0)//Position - 0x2EC51
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_7;
	}
	return 0;
}

void func_110(var uParam0, float fParam1, float fParam2)//Position - 0x2F0D2
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	Var1 = { -16000f, -16000f, -1700f };
	Var2 = { 16000f, 16000f, 2700f };
	*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Var1, Var2, fParam1, fParam2, bVar0, true);
}

void func_111(var uParam0)//Position - 0x2F480
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_34[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_40 = -1;
}

Vector3 func_112()//Position - 0x2F6D8
{
	return 2800f, -3800.5f, 185.8f;
}

int func_113()//Position - 0x2F71D
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_180134.f_2820[0] != Global_4718592.f_180134.f_2820[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_114(var uParam0)//Position - 0x3572B
{
	return (BitTest(*uParam0, 7) || BitTest(Global_1965531, 20));
}

int func_115()//Position - 0x37719
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x37730
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return 1;
	}
	return 0;
}

bool func_117(var uParam0)//Position - 0x37875
{
	return uParam0->f_29 == 5;
}

void func_118()//Position - 0x378A5
{
	Global_2714762.f_841 = 1;
}

void func_119()//Position - 0x38B73
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
	iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1057161, NETWORK::GET_NETWORK_TIME()));
	STATS::PLAYSTATS_QUIT_MODE(Global_4718592, &(Global_4718592.f_116811), iVar0, iVar1, Global_1057161.f_1);
	__LIB_1__::func_779();
}

int func_120()//Position - 0x3907A
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x3917A
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/))
	{
		return 1;
	}
	return 0;
}

int func_122()//Position - 0x39239
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x392D7
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0)//Position - 0x39373
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 26) && uParam0->f_27 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_125()//Position - 0x393D6
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1, 5);
}

bool func_126(var uParam0)//Position - 0x393EF
{
	return uParam0->f_28 == 1;
}

bool func_127(var uParam0)//Position - 0x393FD
{
	return (((uParam0->f_29 == 1 || uParam0->f_29 == 3) || uParam0->f_29 == 4) || uParam0->f_29 == 5);
}

int func_128(int* iParam0)//Position - 0x39BE5
{
	if (iParam0->f_1 > 0)
	{
		return 1;
	}
	return 0;
}

int func_129()//Position - 0x39BFA
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/))
	{
		return 1;
	}
	return 0;
}

bool func_130(int* iParam0)//Position - 0x54AD4
{
	return BitTest(*iParam0, 3);
}

int func_131(int* iParam0)//Position - 0x54AE1
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(iParam0->f_1, false, true, false, -1, 0))
	{
		return 0;
	}
	return 1;
}

int func_132(var uParam0)//Position - 0x54CC2
{
	if (BitTest(*uParam0, 1))
	{
		return 0;
	}
	if (Global_1836604)
	{
		return 0;
	}
	if (__LIB_0__::func_912())
	{
		return 0;
	}
	return 1;
}

int func_133()//Position - 0xA0860
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0)//Position - 0xA090E
{
	if (BitTest(*uParam0, 0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_15, 2))
	{
		return 0;
	}
	if ((__LIB_5__::func_50(Global_4718592.f_116524) || __LIB_5__::func_51(Global_4718592.f_116524)) || __LIB_4__::func_754(Global_4718592.f_116524))
	{
		return 0;
	}
	if (__LIB_0__::func_912())
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA09DE
{
	int iVar0;
	iVar0 = 0;
	if (!bParam1 && !bParam2)
	{
		if (((((((((((((((Global_4718592.f_658[iParam0 /*22957*/].f_61 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_62 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_63 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_64 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_339 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_340 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_341 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_342 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_616 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_617 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_618 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_619 != 0) || Global_4718592.f_176572[iParam0 /*8*/] != -1) || Global_4718592.f_176572[iParam0 /*8*/].f_1 != -1) || Global_4718592.f_176572[iParam0 /*8*/].f_2 != -1) || BitTest(Global_4718592.f_176572[iParam0 /*8*/].f_3, 4))
		{
			iVar0 = 1;
		}
	}
	else
	{
		if (bParam1)
		{
			if (((((Global_4718592.f_658[iParam0 /*22957*/].f_61 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_62 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_63 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_64 != 0) || Global_4718592.f_176572[iParam0 /*8*/] != -1) || BitTest(Global_4718592.f_176572[iParam0 /*8*/].f_3, 4))
			{
				iVar0 = 1;
			}
		}
		if (bParam2)
		{
			if ((((Global_4718592.f_658[iParam0 /*22957*/].f_339 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_340 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_341 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_342 != 0) || Global_4718592.f_176572[iParam0 /*8*/].f_1 != -1)
			{
				iVar0 = 1;
			}
		}
		if (bParam3)
		{
			if ((((Global_4718592.f_658[iParam0 /*22957*/].f_616 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_617 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_618 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_619 != 0) || Global_4718592.f_176572[iParam0 /*8*/].f_2 != -1)
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_136()//Position - 0xA1290
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 7) == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_137()//Position - 0xA12FC
{
	if (Global_4718592 != 0)
	{
		return 0;
	}
	return Global_4718592.f_593 == 2;
}

void func_138()//Position - 0xA151B
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 1);
}

void func_139()//Position - 0xA1CAD
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 13);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 6);
}

void func_140(int iParam0)//Position - 0xA1D60
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_5 = iParam0;
}

void func_141()//Position - 0xA1D77
{
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 23))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 23);
	}
}

int func_142()//Position - 0xA21E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2715699.f_6603), 13))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
		{
			Var3 = { __LIB_1__::func_267(iVar0) };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2715699.f_6603)) && __LIB_0__::func_949(iVar0))
			{
				__LIB_0__::func_948();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_143()//Position - 0xA28CD
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 9);
}

bool func_144(var uParam0)//Position - 0xA28EA
{
	return uParam0->f_29 == 1;
}

int func_145(int iParam0)//Position - 0xA3D01
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("LBD_VOTE_TICK" /* GXT: Rated Job.  +~1~ ~BLIP_RP~ */);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(false, true);
	return iVar0;
}

var func_146()//Position - 0xA3D24
{
	return Global_262145.f_4306 /* Tunable: XP_TUNABLE_VOTE_FOR_CONTENT */;
}

int func_147()//Position - 0xA3E6B
{
	if ((!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
	{
		return 1;
	}
	return 0;
}

void func_148(var uParam0)//Position - 0xA4B37
{
	__LIB_12__::func_912(uParam0, 1);
}

int func_149()//Position - 0xA7806
{
	if (Global_1836382)
	{
		if (__LIB_12__::func_922())
		{
			return 0;
		}
	}
	return BitTest(Global_4718592.f_13, 2);
}

int func_150()//Position - 0xA784A
{
	if (__LIB_12__::func_923() && __LIB_12__::func_924())
	{
		return 1;
	}
	return 0;
}

bool func_151()//Position - 0xA7911
{
	return __LIB_2__::func_826(Global_4718592.f_168757);
}

void func_152(var uParam0)//Position - 0xA8903
{
	__LIB_12__::func_912(uParam0, 6);
}

int func_153()//Position - 0xAC104
{
	if (__LIB_12__::func_922())
	{
		return 2;
	}
	return 1;
}

void func_154(var uParam0, int iParam1, int iParam2)//Position - 0xAC1A5
{
	uParam0->f_17[iParam2 /*13*/] = { __LIB_1__::func_267(iParam1) };
}

var func_155(int iParam0)//Position - 0xAC2D5
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 23);
}

var func_156(int iParam0)//Position - 0xAC2ED
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 6);
}

var func_157(int iParam0)//Position - 0xAC304
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 7);
}

var func_158(int iParam0)//Position - 0xAC31B
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 8);
}

void func_159(var uParam0, int iParam1)//Position - 0xB0F99
{
	if (iParam1 != -1)
	{
		if (BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 10) || BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 11))
		{
			uParam0->f_500 = 1;
		}
		else
		{
			uParam0->f_500 = 0;
		}
		if (BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 11))
		{
			uParam0->f_501 = 1;
		}
		else
		{
			uParam0->f_501 = 0;
		}
	}
}

bool func_160(int iParam0)//Position - 0xB1001
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 5);
}

int func_161(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB1408
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = (((iParam1 + iParam2) + iParam2) + iParam3);
	}
	else
	{
		iVar0 = (iParam1 + iParam3);
	}
	iVar0 = (iVar0 - Global_1836355);
	return iVar0;
}

int func_162(int iParam0, int iParam1)//Position - 0xB5060
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (__LIB_1__::func_656(iParam0, &iVar0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (((Global_2779511[iVar1 /*5*/].f_1 == -1 || Global_2779511[iVar1 /*5*/].f_2 == -1) || Global_2779511[iVar1 /*5*/].f_3 == -1) || Global_2779511[iVar1 /*5*/].f_4 == -1)
		{
			iVar0 = iVar1;
			iVar1 = 2;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	HUD::GET_HUD_COLOUR(iParam0, &uVar2, &uVar3, &uVar4, &uVar5);
	Global_2779511[iVar0 /*5*/] = iParam0;
	Global_2779511[iVar0 /*5*/].f_1 = uVar2;
	Global_2779511[iVar0 /*5*/].f_2 = uVar3;
	Global_2779511[iVar0 /*5*/].f_3 = uVar4;
	Global_2779511[iVar0 /*5*/].f_4 = uVar5;
	HUD::REPLACE_HUD_COLOUR(iParam0, iParam1);
	return iVar0;
}

int func_163()//Position - 0xB5A97
{
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
	{
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
	{
		return 1;
	}
	return 0;
}

int func_164(bool bParam0)//Position - 0xB67BB
{
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)) && __LIB_12__::func_918(Global_1836352, 0))
	{
		return 1;
	}
	if (bParam0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
	{
		return 1;
	}
	return 0;
}

int func_165()//Position - 0xC28A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_600[iVar1] == 0)
		{
			return iVar1;
		}
		else if (Global_4718592.f_600[iVar1] > iVar2 || iVar0 == -1)
		{
			iVar0 = iVar1;
			iVar2 = Global_4718592.f_600[iVar1];
		}
		iVar1++;
	}
	return iVar0;
}

int func_166()//Position - 0xC291D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_211(Global_4718592.f_168757))
	{
		return 2;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= (Global_4718592.f_593 - 1))
	{
		if ((Global_4718592.f_600[iVar1] < iVar2 || iVar0 == -1) && Global_4718592.f_600[iVar1] != 0)
		{
			iVar0 = iVar1;
			iVar2 = Global_4718592.f_600[iVar1];
		}
		iVar1++;
	}
	return iVar0;
}

int func_167()//Position - 0xC2E1B
{
	if (Global_1056949 > -1 && Global_1056949 < 10)
	{
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_168(char* sParam0)//Position - 0xC2E64
{
	if (__LIB_0__::func_1(sParam0))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_169()//Position - 0xC3171
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
}

int func_170(int iParam0)//Position - 0xDCB58
{
	if (__LIB_12__::func_967(iParam0) || __LIB_12__::func_972(iParam0))
	{
		return 60309;
	}
	if (__LIB_12__::func_973(iParam0))
	{
		return 31086;
	}
	return 28422;
}

Vector3 func_171(int iParam0)//Position - 0xDCB8E
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 0f, 90f, 0f };
			break;
		case 2:
			Var0 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

Vector3 func_172(int iParam0)//Position - 0xDCBE5
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 0f, 0f, 0.3f };
			break;
		case 3:
			Var0 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

char* func_173(int iParam0)//Position - 0xDCC3C
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "scr_xs_beer_chug";
			break;
		case 1:
			sVar0 = "scr_xs_money_rain_celeb";
			break;
		case 2:
			sVar0 = "scr_xs_champagne_spray";
			break;
		case 3:
			sVar0 = "scr_xs_confetti_burst";
			break;
	}
	return sVar0;
}

int func_174(int iParam0, int iParam1)//Position - 0xDCC92
{
	if (__LIB_12__::func_973(iParam0))
	{
		*iParam1 = 0;
		return 1;
	}
	if (__LIB_12__::func_972(iParam0))
	{
		*iParam1 = 1;
		return 1;
	}
	if (__LIB_12__::func_968(iParam0))
	{
		*iParam1 = 2;
		return 1;
	}
	if (__LIB_12__::func_967(iParam0))
	{
		*iParam1 = 3;
		return 1;
	}
	*iParam1 = 4;
	return 0;
}

char* func_175(int iParam0)//Position - 0xDCCE3
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "vfx_xs_beer_chug_stop";
			break;
		case 1:
			sVar0 = "vfx_xs_raining_cash_celeb_stop";
			break;
		case 2:
			sVar0 = "vfx_xs_champagne_spray_celeb_stop";
			break;
	}
	return sVar0;
}

char* func_176(int iParam0)//Position - 0xDCD29
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "vfx_xs_beer_chug_start";
			break;
		case 1:
			sVar0 = "vfx_xs_raining_cash_celeb_start";
			break;
		case 2:
			sVar0 = "vfx_xs_champagne_spray_celeb_start";
			break;
		case 3:
			sVar0 = "vfx_xs_confetti_fire";
			break;
	}
	return sVar0;
}

char* func_177()//Position - 0xDCD7F
{
	return "scr_xs_celebration";
}

void func_178(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xDCD8C
{
	StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
	if (__LIB_12__::func_975(uParam0))
	{
		StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
	}
	switch (uParam0->f_1[iParam3])
	{
		case 80:
			StringCopy(sParam2, "cham_a_champagne", 64);
			break;
		case 81:
			StringCopy(sParam2, "cham_b_champagne", 64);
			break;
		case 82:
			StringCopy(sParam2, "cham_c_champagne", 64);
			break;
		case 83:
			StringCopy(sParam2, "cham_d_champagne", 64);
			break;
		case 100:
			StringCopy(sParam2, "cham_a_champagne", 64);
			break;
		case 101:
			StringCopy(sParam2, "cham_b_champagne", 64);
			break;
		case 102:
			StringCopy(sParam2, "cham_c_champagne", 64);
			break;
		case 103:
			StringCopy(sParam2, "cham_d_champagne", 64);
			break;
		case 26:
			StringCopy(sParam2, "cham_chug_a_champagne", 64);
			break;
		case 27:
			StringCopy(sParam2, "cham_spray_a_champagne", 64);
			break;
		case 28:
			StringCopy(sParam2, "cham_spray_b_champagne", 64);
			break;
		case 29:
			StringCopy(sParam2, "cham_spray_c_champagne", 64);
			break;
		case 30:
			StringCopy(sParam2, "confetti_canon_a_1st", 64);
			break;
		case 31:
			StringCopy(sParam2, "confetti_canon_c_1st", 64);
			break;
		case 32:
			StringCopy(sParam2, "confetti_canon_d_1st", 64);
			break;
		case 0:
		case 3:
		case 84:
		case 104:
			StringCopy(sParam2, "trophy_a_trophy", 64);
			break;
		case 1:
		case 4:
		case 85:
		case 105:
			StringCopy(sParam2, "trophy_b_trophy", 64);
			break;
		case 2:
		case 5:
		case 86:
		case 106:
			StringCopy(sParam2, "trophy_c_trophy", 64);
			break;
	}
}

int func_179(var uParam0)//Position - 0xDCFFA
{
	if (__LIB_12__::func_975(uParam0))
	{
		return 2;
	}
	return 3;
}

int func_180()//Position - 0xDD848
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 10:
		case 9:
		case 12:
		case 8:
			return 0;
		default:
	}
	return 1;
}

struct<4> func_181(int iParam0, bool bParam1)//Position - 0xDDB1D
{
	struct<4> Var0;
	StringCopy(&Var0, "HEIST_RL_NONE" /* GXT: UNASSIGNED */, 16);
	if (iParam0 < 0)
	{
		return Var0;
	}
	StringCopy(&Var0, "COR_TEAM_", 16);
	if (bParam1)
	{
		StringConCat(&Var0, "S_", 16);
	}
	StringIntConCat(&Var0, Global_4718592.f_92543[iParam0], 16);
	if (Global_4718592.f_92543[iParam0] == 38)
	{
		Var0 = { Global_4718592.f_92548[iParam0 /*4*/] };
	}
	return Var0;
}

char* func_182(var uParam0)//Position - 0xDDFE4
{
	char* sVar0;
	sVar0 = "PODIUM_CAM_1";
	if (__LIB_12__::func_975(uParam0))
	{
		sVar0 = "FLAT_CAM_1";
	}
	return sVar0;
}

struct<16> func_183(var uParam0)//Position - 0xDE005
{
	struct<16> Var0;
	StringCopy(&Var0, "anim@arena@celeb@podium@no_prop@", 64);
	if (__LIB_12__::func_975(uParam0))
	{
		StringCopy(&Var0, "anim@arena@celeb@flat@paired@no_props@", 64);
	}
	return Var0;
}

void func_184(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xDF164
{
	switch (uParam0->f_1[bParam3])
	{
		case default:
			break;
		case 0:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_a_1st", 64);
			break;
		case 1:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_b_1st", 64);
			break;
		case 2:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_c_1st", 64);
			break;
		case 3:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_d_1st", 64);
			break;
		case 4:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_e_1st", 64);
			break;
		case 5:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_f_1st", 64);
			break;
		case 6:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_1st", 64);
			break;
		case 7:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_1st", 64);
			break;
		case 8:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_1st", 64);
			break;
		case 9:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_1st", 64);
			break;
		case 10:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_1st", 64);
			break;
		case 11:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_1st", 64);
			break;
		case 12:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_1st", 64);
			break;
		case 13:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_1st", 64);
			break;
		case 14:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_1st", 64);
			break;
		case 15:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_1st", 64);
			break;
		case 16:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_1st", 64);
			break;
		case 17:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_1st", 64);
			break;
		case 18:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_1st", 64);
			break;
		case 19:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_1st", 64);
			break;
		case 20:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_1st", 64);
			break;
		case 21:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_1st", 64);
			break;
		case 22:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_1st", 64);
			break;
		case 23:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_1st", 64);
			break;
		case 24:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_1st", 64);
			break;
		case 33:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_2nd", 64);
			break;
		case 34:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_2nd", 64);
			break;
		case 35:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_2nd", 64);
			break;
		case 36:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_2nd", 64);
			break;
		case 37:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_2nd", 64);
			break;
		case 38:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_2nd", 64);
			break;
		case 39:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_2nd", 64);
			break;
		case 40:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_2nd", 64);
			break;
		case 41:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_2nd", 64);
			break;
		case 42:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_2nd", 64);
			break;
		case 43:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_3rd", 64);
			break;
		case 44:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_3rd", 64);
			break;
		case 45:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_3rd", 64);
			break;
		case 46:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_3rd", 64);
			break;
		case 47:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_3rd", 64);
			break;
		case 48:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_3rd", 64);
			break;
		case 49:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_3rd", 64);
			break;
		case 50:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_3rd", 64);
			break;
		case 51:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_3rd", 64);
			break;
		case 25:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_1st", 64);
			break;
		case 52:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_2nd", 64);
			break;
		case 26:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_1st", 64);
			break;
		case 27:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_1st", 64);
			break;
		case 28:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_1st", 64);
			break;
		case 29:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_1st", 64);
			break;
		case 30:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_1st", 64);
			break;
		case 31:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_1st", 64);
			break;
		case 32:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_1st", 64);
			break;
		case 53:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_2nd", 64);
			break;
		case 54:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_2nd", 64);
			break;
		case 55:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_2nd", 64);
			break;
		case 56:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_2nd", 64);
			break;
		case 57:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_2nd", 64);
			break;
		case 58:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_2nd", 64);
			break;
		case 59:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_2nd", 64);
			break;
		case 60:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_3rd", 64);
			break;
		case 61:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_3rd", 64);
			break;
		case 62:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_3rd", 64);
			break;
		case 63:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_3rd", 64);
			break;
		case 64:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_3rd", 64);
			break;
		case 65:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_3rd", 64);
			break;
		case 66:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_3rd", 64);
			break;
		case 109:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_a_player_a", 64);
			break;
		case 110:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_a", 64);
			break;
		case 129:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_b", 64);
			break;
		case 111:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "cap_a_player_a", 64);
			break;
		case 112:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "flip_a_player_a", 64);
			break;
		case 113:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_a", 64);
			break;
		case 130:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_b", 64);
			break;
		case 114:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_a_player_a", 64);
			break;
		case 115:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_b_player_a", 64);
			break;
		case 116:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_c_player_a", 64);
			break;
		case 117:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_d_player_a", 64);
			break;
		case 118:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_a", 64);
			break;
		case 131:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_b", 64);
			break;
		case 119:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_a_player_a", 64);
			break;
		case 120:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_b_player_a", 64);
			break;
		case 121:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_c_player_a", 64);
			break;
		case 122:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slugger_a_player_a", 64);
			break;
		case 123:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_a", 64);
			break;
		case 132:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_b", 64);
			break;
		case 124:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_a", 64);
			break;
		case 133:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_b", 64);
			break;
		case 125:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_a", 64);
			break;
		case 134:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_b", 64);
			break;
		case 135:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_c_player_b", 64);
			break;
		case 136:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_d_player_b", 64);
			break;
		case 137:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_e_player_b", 64);
			break;
		case 126:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_a", 64);
			break;
		case 138:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_b", 64);
			break;
		case 139:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wave_a_player_b", 64);
			break;
		case 140:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_a_player_b", 64);
			break;
		case 141:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_b_player_b", 64);
			break;
		case 80:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_a", 64);
			break;
		case 100:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_b", 64);
			break;
		case 81:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_a", 64);
			break;
		case 101:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_b", 64);
			break;
		case 82:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_a", 64);
			break;
		case 102:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_b", 64);
			break;
		case 83:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_a", 64);
			break;
		case 103:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_b", 64);
			break;
		case 84:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_a", 64);
			break;
		case 104:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_b", 64);
			break;
		case 85:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_a", 64);
			break;
		case 105:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_b", 64);
			break;
		case 86:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_a", 64);
			break;
		case 106:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_b", 64);
			break;
		case 67:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_a", 64);
			break;
		case 87:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_b", 64);
			break;
		case 68:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_a", 64);
			break;
		case 88:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_b", 64);
			break;
		case 69:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_a", 64);
			break;
		case 89:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_b", 64);
			break;
		case 70:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_a", 64);
			break;
		case 90:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_b", 64);
			break;
		case 71:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_a", 64);
			break;
		case 91:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_b", 64);
			break;
		case 72:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_a", 64);
			break;
		case 92:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_b", 64);
			break;
		case 73:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_a", 64);
			break;
		case 93:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_b", 64);
			break;
		case 74:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_a", 64);
			break;
		case 94:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_b", 64);
			break;
		case 75:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_a", 64);
			break;
		case 95:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_b", 64);
			break;
		case 76:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_a", 64);
			break;
		case 96:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_b", 64);
			break;
		case 77:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_a", 64);
			break;
		case 97:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_b", 64);
			break;
		case 78:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_a", 64);
			break;
		case 98:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_b", 64);
			break;
		case 79:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_a", 64);
			break;
		case 99:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_b", 64);
			break;
		case 107:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_a_player_a", 64);
			break;
		case 108:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_b_player_a", 64);
			break;
		case 127:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "make_it_rain_b_player_b", 64);
			break;
		case 128:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "smoking_b_player_b", 64);
			break;
	}
}

void func_185(var uParam0)//Position - 0xE0718
{
	int iVar0;
	struct<3> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1226))
	{
		iVar0 = joaat("reh_prop_celebration_lp");
		if (__LIB_0__::func_584(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_23[0], true) };
				Var1.f_2 = (Var1.f_2 - 1.05f);
				uParam0->f_1226 = OBJECT::CREATE_OBJECT(iVar0, Var1, false, true, false);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_1226, 255f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
	}
}

int func_186(int iParam0)//Position - 0xE07CC
{
	if (__LIB_12__::func_967(iParam0) || __LIB_12__::func_972(iParam0))
	{
		return 60309;
	}
	return 28422;
}

int func_187(var uParam0, int iParam1)//Position - 0xE07F3
{
	if (__LIB_12__::func_976(iParam1))
	{
		return 0;
	}
	if (__LIB_12__::func_977(iParam1))
	{
		return 1;
	}
	if (__LIB_12__::func_970(iParam1))
	{
		return 1;
	}
	if (__LIB_12__::func_967(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_188(var uParam0)//Position - 0xE08FC
{
	int iVar0;
	struct<3> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1225))
	{
		iVar0 = joaat("exile1_lightrig");
		if (__LIB_0__::func_584(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_23[0], true) };
				uParam0->f_1225 = OBJECT::CREATE_OBJECT(iVar0, Var1, false, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
	}
}

int func_189(int iParam0)//Position - 0xE7474
{
	if (__LIB_1__::func_425(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_190(int iParam0)//Position - 0xE750D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_191(int iParam0)//Position - 0xF407D
{
	if (iParam0 > 675)
	{
		return 675;
	}
	return iParam0;
}

int func_192(int iParam0)//Position - 0xF4095
{
	int iVar0;
	if (iParam0 >= 9)
	{
		return Global_262145.f_26575 /* Tunable: -43734750 */;
	}
	else if (iParam0 >= Global_262145.f_26573 /* Tunable: 228354248 */)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f));
		return (Global_262145.f_26574 /* Tunable: -1894644386 */ * iVar0);
	}
	return 0;
}

float func_193(int iParam0)//Position - 0xF40D9
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f));
	if (iVar0 >= 6)
	{
		return Global_262145.f_26572 /* Tunable: -1544941337 */;
	}
	else if (iVar0 >= Global_262145.f_26564 /* Tunable: 545899484 */)
	{
		return (1f + (IntToFloat((iVar0 - 1)) * Global_262145.f_26571 /* Tunable: 537045080 */));
	}
	return 1f;
}

void func_194(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)//Position - 0xF4164
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_ARENA_UNLOCK_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_514("CLB_UNLOCK" /* GXT: UNLOCKED */);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam6))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uParam2);
		if (iParam10 > 0)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uParam6);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_195(int iParam0)//Position - 0xF41C9
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return Global_1964893.f_4[iParam0];
}

int func_196(int iParam0)//Position - 0xF4CEB
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	return Global_1964893[iParam0];
}

bool func_197()//Position - 0xF4D10
{
	return Global_1964893[0] != -1;
}

int func_198()//Position - 0xF4D21
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1964893[iVar0] != -1)
		{
			iVar1++;
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_199(var uParam0, char* sParam1)//Position - 0xF4DAC
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_5);
	__LIB_0__::func_478("CLB_RNKA" /* GXT: TIER */);
	__LIB_0__::func_478("CLB_RNKB" /* GXT: UP */);
}

void func_200(var uParam0, var uParam1)//Position - 0xF4E0C
{
	uParam0->f_1210 = *uParam1;
	uParam0->f_1210.f_1 = uParam1->f_1;
	uParam0->f_1210.f_2 = uParam1->f_2;
	uParam0->f_1210.f_3 = uParam1->f_3;
	uParam0->f_1210.f_4 = uParam1->f_4;
	uParam0->f_1210.f_5 = uParam1->f_5;
}

int func_201()//Position - 0xF4FF1
{
	int iVar0;
	struct<13> Var1[32];
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (iVar3 != PLAYER::PLAYER_ID())
			{
				Var1[iVar2 /*13*/] = { __LIB_1__::func_267(iVar3) };
				if (NETWORK::NETWORK_IS_FRIEND(&(Var1[iVar2 /*13*/])))
				{
					iVar0++;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_202(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xF5075
{
	char* sVar0;
	char cVar1[16];
	char cVar2[16];
	char* sVar3;
	StringCopy(&cVar1, "", 16);
	StringCopy(&cVar2, "", 16);
	StringIntConCat(&cVar1, iParam3, 16);
	StringIntConCat(&cVar2, iParam4, 16);
	if (iParam2 == 1)
	{
		if (bParam5)
		{
			sVar0 = "CELEB_WINNERS" /* GXT: WINNERS */;
		}
		else
		{
			sVar0 = "CELEB_LOSERS" /* GXT: LOSERS */;
		}
		sVar3 = "CELEB_H2H_PART_OF" /* GXT: CREW HEAD TO HEAD PART ~a~ OF ~a~ */;
	}
	else
	{
		if (bParam5)
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
		else
		{
			sVar0 = "CELEB_LOSER" /* GXT: Loser */;
		}
		sVar3 = "CELEB_CHALLENGE_PART_OF" /* GXT: CHALLENGE PART ~a~ OF ~a~ */;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_514(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_514(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_514(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_203(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0xF51A9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_514(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_514(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_514(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_204(var uParam0, int iParam1, bool bParam2)//Position - 0x100FAB
{
	var uVar0;
	uVar0 = BitTest(uParam0, iParam1);
	if (!bParam2)
	{
		return uVar0;
	}
	switch (iParam1)
	{
		case 0:
			return uVar0;
		case 1:
			return uVar0;
		case 2:
			return uVar0;
		case 3:
			return uVar0;
		case 4:
			return uVar0;
		case 5:
			return uVar0;
		case 6:
			return uVar0;
		case 7:
			return uVar0;
		case 8:
			return uVar0;
		default:
	}
	return 0;
}

bool func_205(int iParam0)//Position - 0x101425
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_14, 20);
}

void func_206()//Position - 0x10153F
{
	MISC::SET_BIT(&(Global_2714762.f_669.f_1), 0);
}

int func_207(int iParam0, int iParam1)//Position - 0x101DAA
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == 1)
	{
		iVar0 = iParam1;
	}
	return iVar0;
}

int func_208(int iParam0)//Position - 0x1024B2
{
	int iVar0;
	iVar0 = __LIB_13__::func_97(iParam0);
	if (!Global_2103119.f_22[iVar0])
	{
		return 0;
	}
	if (Global_2103119.f_11[iVar0])
	{
		return 0;
	}
	return 1;
}

struct<6> func_209()//Position - 0x10265D
{
	int iVar0;
	if (__LIB_0__::func_840())
	{
		iVar0 = 1;
	}
	else if (__LIB_0__::func_838(Global_4718592.f_168757))
	{
		iVar0 = 2;
	}
	else if (__LIB_0__::func_841(Global_4718592.f_168757))
	{
		iVar0 = 3;
	}
	else if (__LIB_0__::func_839())
	{
		iVar0 = 4;
	}
	else if (__LIB_0__::func_843(Global_4718592.f_168757))
	{
		iVar0 = 5;
	}
	else if (__LIB_0__::func_844(Global_4718592.f_168757))
	{
		iVar0 = 6;
	}
	else if (__LIB_0__::func_842(Global_4718592.f_168757))
	{
		iVar0 = 7;
	}
	else if (__LIB_0__::func_837(Global_4718592.f_168757))
	{
		iVar0 = 8;
	}
	else if (__LIB_0__::func_845(Global_4718592.f_168757))
	{
		iVar0 = 9;
	}
	return __LIB_5__::func_30(iVar0);
}

var func_210(int iParam0)//Position - 0x102725
{
	return Global_1964904[iParam0 /*15*/].f_11;
}

void func_211(int iParam0)//Position - 0x102A63
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1057406 = (Global_1057406 + iParam0);
		Global_1853348[iVar0 /*834*/].f_9 = Global_1057406;
	}
}

int func_212(int iParam0)//Position - 0x103667
{
	switch (iParam0)
	{
		case 9:
		case 5:
		case 6:
			return 1;
		default:
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x103959
{
	if (iParam0 <= 10)
	{
		return 100;
	}
	else if (iParam0 <= 30)
	{
		return 25;
	}
	else
	{
		switch (iParam0)
		{
			case 31:
				return 24;
			case 32:
				return 23;
			case 33:
				return 22;
			case 34:
				return 21;
			case 35:
				return 20;
			case 36:
				return 19;
			case 37:
				return 18;
			case 38:
				return 17;
			case 39:
				return 16;
			case 40:
				return 15;
			case 41:
				return 14;
			case 42:
				return 13;
			case 43:
				return 12;
			case 44:
				return 11;
			case 45:
				return 10;
			case 46:
				return 9;
			case 47:
				return 8;
			default:
		}
		return 7;
	}
	return 100;
}

float func_214(int iParam0, int iParam1)//Position - 0x103A4A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = SYSTEM::TO_FLOAT(iParam0);
	fVar2 = SYSTEM::TO_FLOAT(iParam1);
	fVar3 = (fVar2 - fVar1);
	fVar4 = (fVar3 / 400f);
	fVar5 = SYSTEM::POW(10f, fVar4);
	fVar0 = (1f / (1f + fVar5));
	return fVar0;
}

void func_215(int iParam0)//Position - 0x11EFCC
{
	Global_1837284 = (Global_1837284 + iParam0);
}

int func_216(int iParam0, var uParam1, int iParam2)//Position - 0x11F8E7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	__LIB_0__::func_580(iParam0, 0, 0);
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam1, *iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, char[64] cParam1)//Position - 0x124A04
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2727852, "", 64);
	}
	else
	{
		Global_2727852 = { cParam1 };
	}
	Global_2727851 = iParam0;
}

struct<16> func_218()//Position - 0x124AB4
{
	return Global_2727852;
}

bool func_219()//Position - 0x124AC3
{
	return Global_2727851;
}

void func_220(int* iParam0)//Position - 0x125453
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
}

float func_221()//Position - 0x152AE2
{
	return 0.72f;
}

void func_222(bool bParam0)//Position - 0x152FD6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2815059.f_1795), 14);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1795), 14);
	}
}

bool func_223()//Position - 0x153000
{
	return BitTest(Global_2815059.f_1795, 14);
}

bool func_224()//Position - 0x1531C5
{
	return BitTest(Global_2815059.f_1795, 13);
}

int func_225()//Position - 0x153F0C
{
	if (Global_1659909 == -1)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x153FAF
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			return 1;
		default:
	}
	return 0;
}

void func_227()//Position - 0x1540CE
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), false);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_252 = 1;
}

void func_228(int iParam0)//Position - 0x1542A0
{
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		VEHICLE::DELETE_VEHICLE(&iParam0);
	}
}

int func_229()//Position - 0x15D470
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_718(1))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0, int iParam1)//Position - 0x163DC4
{
	if (iParam0 != 0)
	{
		return (WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * iParam1);
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x163DDF
{
	switch (iParam0)
	{
		case joaat("WEAPON_MINIGUN"):
			return 1;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 1;
			break;
		case joaat("WEAPON_RPG"):
			return 1;
			break;
		case joaat("WEAPON_MUSKET"):
			return 1;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 1;
			break;
		case joaat("WEAPON_GRENADE"):
			return 1;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 1;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 1;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 1;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 1;
			break;
	}
	return 0;
}

void func_232()//Position - 0x16464B
{
	if (Global_1836604 == 0)
	{
		Global_1836604 = 1;
	}
}

int func_233(int iParam0)//Position - 0x165D21
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_UNARMED");
			break;
		case 1:
			return joaat("WEAPON_PISTOL");
			break;
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 3:
			return joaat("WEAPON_APPISTOL");
			break;
		case 4:
			return joaat("WEAPON_MICROSMG");
			break;
		case 5:
			return joaat("WEAPON_SMG");
			break;
		case 6:
			return joaat("WEAPON_MG");
			break;
		case 7:
			return joaat("WEAPON_COMBATMG");
			break;
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 10:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 11:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 12:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 13:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 14:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 15:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 16:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 17:
			return joaat("WEAPON_RPG");
			break;
		case 18:
			return joaat("WEAPON_MINIGUN");
			break;
		case 19:
			return joaat("WEAPON_GRENADE");
			break;
		case 20:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 21:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 22:
			return joaat("WEAPON_KNIFE");
			break;
		case 23:
			return joaat("WEAPON_BAT");
			break;
		case 24:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 25:
			return joaat("WEAPON_PISTOL");
			break;
		case 26:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 27:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 28:
			return joaat("WEAPON_COMBATMG");
			break;
		case 29:
			return joaat("WEAPON_UNARMED");
			break;
		case 30:
			return joaat("WEAPON_UNARMED");
			break;
		case 31:
			return joaat("WEAPON_UNARMED");
			break;
		case 32:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 33:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 34:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 35:
			return joaat("WEAPON_CROWBAR");
			break;
		case 36:
			return joaat("WEAPON_PISTOL50");
			break;
		case 37:
			return joaat("WEAPON_COMBATMG");
			break;
		case 38:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 39:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 40:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 41:
			return joaat("WEAPON_PISTOL50");
			break;
		case 42:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 43:
			return joaat("WEAPON_PISTOL");
		case 44:
			return joaat("WEAPON_APPISTOL");
		case 45:
			return joaat("WEAPON_HOMINGLAUNCHER");
		case 46:
			return joaat("WEAPON_FLASHLIGHT");
		case 47:
			return joaat("WEAPON_MACHETE");
		case 48:
			return joaat("WEAPON_MACHINEPISTOL");
		case 49:
			return joaat("WEAPON_MARKSMANPISTOL");
		case 50:
			return joaat("WEAPON_HATCHET");
		case 51:
			return joaat("WEAPON_ASSAULTSMG");
		case 52:
			return joaat("WEAPON_RAILGUN");
		case 53:
			return joaat("WEAPON_GUSENBERG");
		case 54:
			return joaat("WEAPON_REVOLVER");
		case 55:
			return joaat("WEAPON_DBSHOTGUN");
		case 56:
			return joaat("WEAPON_COMPACTRIFLE");
		case 57:
			return joaat("WEAPON_AUTOSHOTGUN");
		case 58:
			return joaat("WEAPON_MINISMG");
		case 59:
			return joaat("WEAPON_COMPACTLAUNCHER");
		case 60:
			return joaat("WEAPON_BATTLEAXE");
		case 61:
			return joaat("WEAPON_PIPEBOMB");
		case 62:
			return joaat("WEAPON_POOLCUE");
		case 63:
			return joaat("WEAPON_WRENCH");
		case 64:
			return joaat("WEAPON_HAMMER");
		case 65:
			return joaat("WEAPON_GOLFCLUB");
		case 66:
			return joaat("WEAPON_BOTTLE");
		case 67:
			return joaat("WEAPON_DAGGER");
		case 68:
			return joaat("WEAPON_KNUCKLE");
		case 69:
			return joaat("WEAPON_SWITCHBLADE");
	}
	return joaat("WEAPON_UNARMED");
}

int func_234(int iParam0)//Position - 0x168ED5
{
	if (Global_4718592.f_658[Global_1836612 /*22957*/].f_65[iParam0] == -3 || Global_4718592.f_658[Global_1836612 /*22957*/].f_343[iParam0] == -3)
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x169256
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_ASSAULTMG"):
			return joaat("COMPONENT_AT_AR_FLSH");
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("COMPONENT_AT_PI_FLSH");
		default:
	}
	return 0;
}

int func_236(int iParam0, int iParam1)//Position - 0x169330
{
	if (iParam1 > -1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SMG_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SMG_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE");
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY");
					case 5:
						return 0;
					case 6:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING");
					case 2:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE");
					case 3:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY");
					case 5:
						return 0;
					case 6:
						return 0;
					default:
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1)//Position - 0x169C62
{
	if (__LIB_12__::func_606(iParam0))
	{
		if (iParam1 > -1)
		{
			return Global_4980736.f_69361[iParam1 /*151*/].f_43;
		}
	}
	return -1;
}

int func_238(int iParam0)//Position - 0x169CAD
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return 0;
		case joaat("WEAPON_SMG_MK2"):
			return 1;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 2;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 3;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 4;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 5;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 6;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 7;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 8;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 9;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 10;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 11;
		default:
	}
	return -1;
}

int func_239(int iParam0)//Position - 0x16A2B2
{
	if (iParam0 < 100)
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x16A3C5
{
	int iVar0;
	if ((iParam0 == joaat("WEAPON_STUNGUN") || iParam0 == joaat("WEAPON_STUNGUN_MP")) || iParam0 == joaat("GADGET_PARACHUTE"))
	{
		return 1;
	}
	if ((((iParam0 == joaat("WEAPON_GRENADE") || iParam0 == joaat("WEAPON_STICKYBOMB")) || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_MOLOTOV")) || iParam0 == joaat("WEAPON_PETROLCAN"))
	{
		if (iParam0 == joaat("WEAPON_SMOKEGRENADE"))
		{
			iVar0 = 4;
		}
		else if (iParam0 == joaat("WEAPON_PETROLCAN"))
		{
			iVar0 = 800;
		}
		else if (__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 8;
		}
		return iVar0;
	}
	iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 2;
	if (Global_1836577 == 1)
	{
		iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 4;
		return iVar0;
	}
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return iVar0;
}

void func_241(int iParam0, int iParam1, int iParam2)//Position - 0x16A72E
{
	WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, iParam2);
}

void func_242(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16A744
{
	int iVar0;
	if (__LIB_12__::func_606(iParam0) && iParam1 != 0)
	{
		if (bParam2)
		{
			iVar0 = -1;
		}
		else if (iParam3 != -1)
		{
			iVar0 = iParam3;
		}
		else
		{
			iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 30;
		}
		WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iParam1, iVar0);
	}
}

void func_243(int iParam0, int iParam1)//Position - 0x16A791
{
	WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
}

void func_244(int iParam0)//Position - 0x16A808
{
	if (!BitTest(Global_4718592.f_35, 20))
	{
		Global_1574580 = iParam0;
	}
}

int func_245(int iParam0)//Position - 0x16D384
{
	switch (*iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x16D3C0
{
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_STINGER"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_RAILGUN"):
		case joaat("WEAPON_RAYMINIGUN"):
		case joaat("WEAPON_EMPLAUNCHER"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 1;
		default:
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x16D410
{
	switch (iParam0)
	{
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_AUTOSHOTGUN"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 1;
		default:
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x16D49C
{
	switch (iParam0)
	{
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_RAYCARBINE"):
			return 1;
		default:
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x16D4CE
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
		default:
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x16D51E
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_MINISMG"):
		case joaat("WEAPON_SMG_MK2"):
			return 1;
		default:
	}
	return 0;
}

void func_251(var uParam0, int iParam1)//Position - 0x16F099
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		switch (iParam1)
		{
			case 1:
				__LIB_1__::func_416(0);
				break;
			case 0:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 2:
				break;
			case 3:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_GALLERY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 7:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 4:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_WEAPONS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			}
	}
}

bool func_252()//Position - 0x16F504
{
	return Global_1836580 != 0;
}

void func_253(var uParam0, var uParam1)//Position - 0x16F593
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

char* func_254(int iParam0, bool bParam1, bool bParam2)//Position - 0x17246A
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "PWRUP_U_SHNT";
			}
			else if (bParam2)
			{
				return "PWRUP_SHNT_H";
			}
			else
			{
				return "PWRUP_SHNT";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "PWRUP_U_BMB";
			}
			else if (bParam2)
			{
				return "PWRUP_BMB_H";
			}
			else
			{
				return "PWRUP_BMB";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "PWRUP_U_REP";
			}
			else if (bParam2)
			{
				return "PWRUP_REP_H";
			}
			else
			{
				return "PWRUP_REP";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "PWRUP_U_GST";
			}
			else if (bParam2)
			{
				return "PWRUP_GST_H";
			}
			else
			{
				return "PWRUP_GST";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "PWRUP_U_RKT";
			}
			else if (bParam2)
			{
				return "PWRUP_RKT_H";
			}
			else
			{
				return "PWRUP_RKT";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "PWRUP_U_MK";
			}
			else if (bParam2)
			{
				return "PWRUP_MK_H";
			}
			else
			{
				return "PWRUP_MK";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "PWRUP_U_MSP";
			}
			else if (bParam2)
			{
				return "PWRUP_MSP_H";
			}
			else
			{
				return "PWRUP_MSP";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "PWRUP_U_ME";
			}
			else if (bParam2)
			{
				return "PWRUP_ME_H";
			}
			else
			{
				return "PWRUP_ME";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "PWRUP_U_MSL";
			}
			else if (bParam2)
			{
				return "PWRUP_MSL_H";
			}
			else
			{
				return "PWRUP_MSL";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "PWRUP_U_TNK";
			}
			else if (bParam2)
			{
				return "PWRUP_TNK_H";
			}
			else
			{
				return "PWRUP_TNK";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "PWRUP_U_AMP";
			}
			else if (bParam2)
			{
				return "PWRUP_AMP_H";
			}
			else
			{
				return "PWRUP_AMP";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "PWRUP_U_SQCH";
			}
			else if (bParam2)
			{
				return "PWRUP_SQCH_H";
			}
			else
			{
				return "PWRUP_SQCH";
			}
			break;
	}
	return "";
}

void func_255(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x174556
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

int func_256(int iParam0)//Position - 0x174C88
{
	if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_257()//Position - 0x1752D5
{
	int iVar0;
	char* sVar1;
	if (!__LIB_0__::func_493() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "ARANN_AAAC";
			break;
		case 1:
			sVar1 = "ARANN_KOAC";
			break;
		case 2:
			sVar1 = "ARANN_KPAC";
			break;
		case 3:
			sVar1 = "ARANN_KQAC";
			break;
		case 4:
			sVar1 = "ARANN_KRAC";
			break;
		case 5:
			sVar1 = "ARANN_ABAB";
			break;
		case 6:
			sVar1 = "ARANN_KSAB";
			break;
		case 7:
			sVar1 = "ARANN_KVAB";
			break;
		case 8:
			sVar1 = "ARANN_KXAB";
			break;
	}
	AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(sVar1, "ARENA_ANNOUNCE1", 2800f, -3800.2f, 179.5f, "SPEECH_PARAMS_FORCE_FRONTEND");
}

void func_258(int iParam0)//Position - 0x1758A6
{
	Global_2727744 = iParam0;
}

void func_259(bool bParam0)//Position - 0x1758DA
{
	if (bParam0)
	{
		if (!BitTest(Global_2789739, 11))
		{
			MISC::SET_BIT(&Global_2789739, 11);
		}
	}
	else if (BitTest(Global_2789739, 11))
	{
		MISC::CLEAR_BIT(&Global_2789739, 11);
	}
}

void func_260(int iParam0)//Position - 0x175913
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TeamId", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId", iParam0);
		}
	}
}

void func_261(bool bParam0)//Position - 0x175B38
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_LOOK_AT_TALKERS(bParam0);
	}
}

int func_262()//Position - 0x175B4D
{
	return joaat("prop_npc_phone");
}

int func_263()//Position - 0x175D80
{
	if (__LIB_0__::func_836() && !__LIB_6__::func_935())
	{
		return 1;
	}
	return 0;
}

void func_264(float fParam0)//Position - 0x17629A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(true);
	}
}

bool func_265(int iParam0)//Position - 0x176566
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1888862[iParam0 /*120*/].f_29, 17));
}

void func_266(var uParam0)//Position - 0x176589
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_38));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_39));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_40));
}

float func_267(int iParam0)//Position - 0x176C16
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("halftrack"):
				case joaat("granger"):
					fVar0 = -1.5f;
					break;
				case joaat("boxville5"):
					fVar0 = -2.5f;
					break;
				case joaat("monster3"):
				case joaat("monster4"):
				case joaat("monster5"):
					fVar0 = -4.5f;
					break;
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
				case joaat("brutus"):
				case joaat("brutus2"):
				case joaat("brutus3"):
					fVar0 = -1.5f;
					break;
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
					fVar0 = -1f;
					break;
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					fVar0 = -7.5f;
					break;
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger2"))
			{
				fVar0 = -1.5f;
			}
		}
	}
	return fVar0;
}

int func_268()//Position - 0x178016
{
	return 6000;
}

bool func_269()//Position - 0x179F08
{
	return Global_2714762.f_669.f_2;
}

void func_270(var uParam0, int iParam1)//Position - 0x179F4D
{
	uParam0->f_51.f_3 = iParam1;
}

int func_271(int iParam0)//Position - 0x17A1A5
{
	switch (*iParam0)
	{
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_POOLCUE"):
			return 1;
			break;
	}
	return 0;
}

int func_272(int iParam0)//Position - 0x17A1CF
{
	switch (*iParam0)
	{
		case joaat("WEAPON_GOLFCLUB"):
			return 1;
			break;
	}
	return 0;
}

int func_273(var uParam0)//Position - 0x17A2EF
{
	return uParam0->f_51.f_3;
}

void func_274(int iParam0)//Position - 0x17BFAD
{
	Global_2715699.f_3479.f_24 = iParam0;
}

int func_275(int iParam0)//Position - 0x180603
{
	switch (*iParam0)
	{
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 1;
			break;
	}
	return 0;
}

int func_276(int iParam0)//Position - 0x180627
{
	switch (*iParam0)
	{
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_277(int iParam0)//Position - 0x180651
{
	switch (*iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_278(int iParam0)//Position - 0x1806B7
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 1;
		default:
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x1806D1
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTMG"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_AMRIFLE"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_280(int iParam0)//Position - 0x18075A
{
	switch (iParam0)
	{
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_MACHINEPISTOL"):
			return 1;
		default:
	}
	return 0;
}

int func_281(var uParam0)//Position - 0x18EBC2
{
	char* sVar0;
	if (uParam0->f_124.f_422)
	{
		sVar0 = __LIB_12__::func_630(uParam0);
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
			if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
			{
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 1;
			}
		}
		MISC::SET_BIT(&(Global_1940663[1]), 8);
		return 0;
	}
	return 1;
}

var func_282(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x18ECB0
{
	switch (iParam1)
	{
		case 0:
			if (bParam3)
			{
				if (bParam6)
				{
					return __LIB_1__::func_192(uParam0[0 /*16*/]);
				}
				else
				{
					return __LIB_1__::func_192(uParam0[1 /*16*/]);
				}
			}
			else if (!bParam7)
			{
				if (bParam6)
				{
					return __LIB_1__::func_192(uParam0[2 /*16*/]);
				}
				else if (uParam2 || uParam5)
				{
					return __LIB_1__::func_192(uParam0[4 /*16*/]);
				}
				else if (bParam4)
				{
					return __LIB_1__::func_192(uParam0[5 /*16*/]);
				}
				else
				{
					return __LIB_1__::func_192(uParam0[3 /*16*/]);
				}
			}
			else if (bParam6)
			{
				return __LIB_1__::func_192(uParam0[6 /*16*/]);
			}
			else if (uParam2 || uParam5)
			{
				return __LIB_1__::func_192(uParam0[8 /*16*/]);
			}
			else if (bParam4)
			{
				return __LIB_1__::func_192(uParam0[9 /*16*/]);
			}
			else
			{
				return __LIB_1__::func_192(uParam0[7 /*16*/]);
			}
			break;
	}
	if (bParam8)
	{
		return __LIB_1__::func_192(uParam0[12 /*16*/]);
	}
	return __LIB_1__::func_192(uParam0[0 /*16*/]);
}

void func_283(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x18F35A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 29:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("prototipo")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 27:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("prototipo")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 30:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("prototipo")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 7:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 10:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 11:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 15:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 25:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("raptor")), 1);
							break;
					}
					break;
				case 26:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("italigtb")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("italigtb2")), 1);
							break;
					}
					break;
				case 5:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("italigtb")), 1);
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("italigtb2")), 1);
							break;
					}
					break;
				case 23:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 9:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 28:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 42:
					switch (iParam3)
					{
						case 3:
							__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("slamtruck")), 1);
							break;
					}
					break;
			}
			switch (iParam3)
			{
				case 3:
					__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("formula")), 1);
					__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("formula2")), 1);
					__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("openwheel1")), 1);
					__LIB_12__::func_650(uParam2, __LIB_12__::func_651(joaat("openwheel2")), 1);
					break;
			}
			break;
	}
}

void func_284(char* sParam0, bool bParam1, float fParam2)//Position - 0x197759
{
	if (bParam1)
	{
		MISC::SET_OVERRIDE_WEATHEREX(sParam0, true);
	}
	else if (fParam2 > 0f)
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam0, fParam2);
	}
	else
	{
		MISC::SET_OVERRIDE_WEATHER(sParam0);
	}
}

int func_285()//Position - 0x197788
{
	if (BitTest(Global_4718592.f_162495, 19))
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_39, 20))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0)//Position - 0x197B78
{
	switch (iParam0)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			break;
		case 1:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
			PED::SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(false);
			STREAMING::SET_DITCH_POLICE_MODELS(true);
			break;
		case 2:
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			break;
		default:
			break;
	}
	if (__LIB_9__::func_901() && BitTest(Global_4718592.f_14, 21))
	{
		PED::SET_CREATE_RANDOM_COPS(false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Security_01"), true);
	}
}

void func_287()//Position - 0x197BFB
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bVar0 = BitTest(Global_4718592.f_31, 21);
	bVar1 = BitTest(Global_4718592.f_31, 22);
	bVar2 = BitTest(Global_4718592.f_31, 23);
	bVar3 = BitTest(Global_4718592.f_31, 24);
	bVar4 = BitTest(Global_4718592.f_31, 25);
	bVar5 = BitTest(Global_4718592.f_31, 26);
	bVar6 = BitTest(Global_4718592.f_31, 27);
	bVar7 = BitTest(Global_4718592.f_31, 28);
	if (!__LIB_0__::func_155(0))
	{
		if ((((((bVar0 || bVar1) || bVar2) || bVar3) || bVar4) || bVar5) || bVar6)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, false, bVar6);
				if (bVar3)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
				}
			}
			if (bVar7)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
					{
						ENTITY::SET_ENTITY_PROOFS(iVar8, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, false, bVar6);
					}
				}
			}
		}
	}
}

void func_288()//Position - 0x197E2D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
		}
	}
}

void func_289(int iParam0)//Position - 0x197F82
{
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iParam0, 0);
}

void func_290(int iParam0, int iParam1)//Position - 0x197F95
{
	PLAYER::SET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID(), iParam1);
	if ((!Global_1836577 && !Global_1836575) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] == -1)
	{
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), iParam0);
	}
	HUD::SET_MAX_ARMOUR_HUD_DISPLAY(iParam1);
}

int func_291(var uParam0)//Position - 0x19801C
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 737;
				break;
			case 1:
				return 738;
				break;
		}
	}
	return 13122;
}

void func_292(var uParam0)//Position - 0x1980EC
{
	Global_2703735.f_2399 = uParam0;
}

int func_293()//Position - 0x1980FD
{
	return 12000;
}

void func_294(int iParam0)//Position - 0x19B65A
{
	Global_2667225.f_45.f_305 = iParam0;
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_305);
	if (Global_2667225.f_45.f_305 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, false);
	}
}

int func_295(int iParam0)//Position - 0x19C5F0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 23:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 26:
			return 3;
		case 27:
			return 3;
		case 28:
			return 3;
		case 29:
			return 4;
		case 30:
			return 4;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 4;
		case 37:
			return 4;
		case 38:
			return 4;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 5;
		case 43:
			return 5;
		case 44:
			return 5;
		case 45:
			return 5;
		case 46:
			return 5;
		case 47:
			return 5;
		case 48:
			return 6;
		case 49:
			return 6;
		case 50:
			return 6;
		case 51:
			return 6;
		case 52:
			return 6;
		case 53:
			return 6;
		case 54:
			return 6;
		case 55:
			return 6;
		case 56:
			return 6;
		case 57:
			return 6;
		case 58:
			return 6;
		case 59:
			return 6;
		case 60:
			return 7;
		case 61:
			return 7;
		case 62:
			return 7;
		case 63:
			return 7;
		case 64:
			return 7;
		case 65:
			return 7;
		case 66:
			return 7;
		case 67:
			return 7;
		case 68:
			return 7;
		case 69:
			return 8;
		case 70:
			return 8;
		case 71:
			return 8;
		case 72:
			return 8;
		case 73:
			return 8;
		case 74:
			return 8;
		case 75:
			return 8;
		case 76:
			return 9;
		case 77:
			return 9;
		case 78:
			return 9;
		case 79:
			return 9;
		default:
	}
	return -1;
}

char* func_296(int iParam0)//Position - 0x19C92B
{
	switch (iParam0)
	{
		case 0:
			return "RC_HEIST_1";
		case 1:
			return "RC_HEIST_2";
		case 2:
			return "RC_HEIST_3";
		case 3:
			return "RC_HEIST_4";
		case 4:
			return "RC_HEIST_5";
		case 5:
			return "RC_HEIST_6";
		case 6:
			return "RC_HEIST_7";
		case 7:
			return "RC_EXECUTIVE_1";
		case 8:
			return "RC_EXECUTIVE_2";
		case 9:
			return "RC_EXECUTIVE_3";
		case 10:
			return "RC_EXECUTIVE_4";
		case 11:
			return "RC_EXECUTIVE_5";
		case 12:
			return "RC_EXECUTIVE_6";
		case 13:
			return "RC_EXECUTIVE_7";
		case 14:
			return "RC_EXECUTIVE_8";
		case 15:
			return "RC_BUSINESS_1";
		case 16:
			return "RC_BUSINESS_2";
		case 17:
			return "RC_BUSINESS_3";
		case 18:
			return "RC_LOWRIDER_1";
		case 19:
			return "RC_LOWRIDER_2";
		case 20:
			return "RC_LOWRIDER_3";
		case 21:
			return "RC_LOWRIDER_4";
		case 22:
			return "RC_LOWRIDER_5";
		case 23:
			return "RC_LOWRIDER_6";
		case 24:
			return "RC_LOWRIDER_7";
		case 25:
			return "RC_LOWRIDER_8";
		case 26:
			return "RC_LOWRIDER_9";
		case 27:
			return "RC_LOWRIDER_10";
		case 28:
			return "RC_LOWRIDER_11";
		case 29:
			return "RC_BIKER_1";
		case 30:
			return "RC_BIKER_2";
		case 31:
			return "RC_BIKER_3";
		case 32:
			return "RC_BIKER_4";
		case 33:
			return "RC_BIKER_5";
		case 34:
			return "RC_BIKER_6";
		case 35:
			return "RC_BIKER_7";
		case 36:
			return "RC_BIKER_8";
		case 37:
			return "RC_BIKER_9";
		case 38:
			return "RC_BIKER_10";
		case 39:
			return "RC_BIKER_11";
		case 40:
			return "RC_BIKER_12";
		case 41:
			return "RC_BIKER_13";
		case 42:
			return "RC_IMPORT_EXPORT_1";
		case 43:
			return "RC_IMPORT_EXPORT_2";
		case 44:
			return "RC_IMPORT_EXPORT_3";
		case 45:
			return "RC_IMPORT_EXPORT_4";
		case 46:
			return "RC_IMPORT_EXPORT_5";
		case 47:
			return "RC_IMPORT_EXPORT_6";
		case 48:
			return "RC_GUNRUNNING_1";
		case 49:
			return "RC_GUNRUNNING_2";
		case 50:
			return "RC_GUNRUNNING_3";
		case 51:
			return "RC_GUNRUNNING_4";
		case 52:
			return "RC_GUNRUNNING_5";
		case 53:
			return "RC_GUNRUNNING_6";
		case 54:
			return "RC_GUNRUNNING_7";
		case 55:
			return "RC_GUNRUNNING_8";
		case 56:
			return "RC_GUNRUNNING_9";
		case 57:
			return "RC_GUNRUNNING_10";
		case 58:
			return "RC_GUNRUNNING_11";
		case 59:
			return "RC_GUNRUNNING_12";
		case 60:
			return "RC_SMUGGLER_1";
		case 61:
			return "RC_SMUGGLER_2";
		case 62:
			return "RC_SMUGGLER_3";
		case 63:
			return "RC_SMUGGLER_4";
		case 64:
			return "RC_SMUGGLER_5";
		case 65:
			return "RC_SMUGGLER_6";
		case 66:
			return "RC_SMUGGLER_7";
		case 67:
			return "RC_SMUGGLER_8";
		case 68:
			return "RC_SMUGGLER_9";
		case 69:
			return "RC_HEIST2_1";
		case 70:
			return "RC_HEIST2_2";
		case 71:
			return "RC_HEIST2_3";
		case 72:
			return "RC_HEIST2_4";
		case 73:
			return "RC_HEIST2_5";
		case 74:
			return "RC_HEIST2_6";
		case 75:
			return "RC_HEIST2_7";
		case 76:
			return "RC_ASSAULT_1";
		case 77:
			return "RC_ASSAULT_2";
		case 78:
			return "RC_ASSAULT_3";
		case 79:
			return "RC_ASSAULT_4";
		default:
	}
	return "";
}

void func_297()//Position - 0x19D783
{
	if (!BitTest(Global_1965531, 0))
	{
		MISC::SET_BIT(&Global_1965531, 0);
	}
}

void func_298()//Position - 0x19D79E
{
	Global_2727744 = -1;
}

void func_299(int iParam0)//Position - 0x19D8F9
{
	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 9:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_152058.f_11);
				break;
			case 8:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_152138.f_11);
				break;
			default:
				if (iParam0 == -1)
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_1837161[PLAYER::PLAYER_ID()]);
				}
				break;
			}
	}
	switch (__LIB_0__::func_3())
	{
		case 0:
			switch (iParam0)
			{
				case 8:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152138.f_1);
					break;
				default:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), true);
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 9:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152058.f_1);
					break;
				case 8:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152138.f_1);
					break;
			}
			break;
	}
}

int func_300()//Position - 0x19E2E5
{
	int iVar0;
	if (!__LIB_0__::func_721())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4718592.f_110280[iVar0] != 0 && STREAMING::IS_MODEL_VALID(Global_4718592.f_110280[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_301(var uParam0)//Position - 0x19E4C4
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
}

int func_302(int iParam0)//Position - 0x19E616
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_PISTOL");
			break;
		case 1:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 2:
			return joaat("WEAPON_APPISTOL");
			break;
		case 3:
			return joaat("WEAPON_PISTOL50");
			break;
		case 4:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		case 5:
			return joaat("WEAPON_SNSPISTOL");
			break;
		case 6:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		case 7:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 8:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		case 9:
			return joaat("WEAPON_PISTOL_MK2");
			break;
		case 10:
			return joaat("WEAPON_REVOLVER_MK2");
			break;
		case 11:
			return joaat("WEAPON_SNSPISTOL_MK2");
			break;
		case 12:
			return joaat("WEAPON_REVOLVER");
			break;
		case 13:
			return joaat("WEAPON_RAYPISTOL");
			break;
		case 14:
			return joaat("WEAPON_GADGETPISTOL");
			break;
		case 15:
			return joaat("WEAPON_MICROSMG");
			break;
		case 16:
			return joaat("WEAPON_SMG");
			break;
		case 17:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		case 18:
			return joaat("WEAPON_COMBATPDW");
			break;
		case 19:
			return joaat("WEAPON_MINISMG");
			break;
		case 20:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		case 21:
			return joaat("WEAPON_SMG_MK2");
			break;
		case 22:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 23:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 24:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 25:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 26:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		case 27:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		case 28:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 29:
			return joaat("WEAPON_MUSKET");
			break;
		case 30:
			return joaat("WEAPON_RAYCARBINE");
			break;
		case 31:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 32:
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
			break;
		case 33:
			return joaat("WEAPON_CARBINERIFLE_MK2");
			break;
		case 34:
			return joaat("WEAPON_COMBATMG_MK2");
			break;
		case 35:
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
			break;
		case 36:
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
			break;
		case 37:
			return joaat("WEAPON_SPECIALCARBINE_MK2");
			break;
		case 38:
			return joaat("WEAPON_MILITARYRIFLE");
			break;
		case 39:
			return joaat("WEAPON_MG");
			break;
		case 40:
			return joaat("WEAPON_COMBATMG");
			break;
		case 41:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 42:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 43:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 44:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		case 45:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 46:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		case 47:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		case 48:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		case 49:
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
			break;
		case 50:
			return joaat("WEAPON_COMBATSHOTGUN");
			break;
		case 51:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 52:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 53:
			return joaat("WEAPON_HEAVYSNIPER_MK2");
			break;
		case 54:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 55:
			return joaat("WEAPON_RPG");
			break;
		case 56:
			return joaat("WEAPON_MINIGUN");
			break;
		case 57:
			return joaat("WEAPON_RAYMINIGUN");
			break;
		case 58:
			return joaat("WEAPON_FIREWORK");
			break;
		case 59:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		case 60:
			return joaat("WEAPON_RAILGUN");
			break;
		case 61:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		case 62:
			return joaat("WEAPON_GRENADE");
			break;
		case 63:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		case 64:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 65:
			return joaat("WEAPON_MOLOTOV");
			break;
		case 66:
			return joaat("WEAPON_PROXMINE");
			break;
		case 67:
			return joaat("WEAPON_PIPEBOMB");
			break;
		case 68:
			return joaat("WEAPON_STUNGUN_MP");
			break;
		case 69:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 70:
			return joaat("WEAPON_KNIFE");
			break;
		case 71:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 72:
			return joaat("WEAPON_HAMMER");
			break;
		case 73:
			return joaat("WEAPON_BAT");
			break;
		case 74:
			return joaat("WEAPON_CROWBAR");
			break;
		case 75:
			return joaat("WEAPON_GOLFCLUB");
			break;
		case 76:
			return joaat("WEAPON_BOTTLE");
			break;
		case 77:
			return joaat("WEAPON_DAGGER");
			break;
		case 78:
			return joaat("WEAPON_KNUCKLE");
			break;
		case 79:
			return joaat("WEAPON_HATCHET");
			break;
		case 80:
			return joaat("WEAPON_MACHETE");
			break;
		case 81:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		case 82:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		case 83:
			return joaat("WEAPON_BATTLEAXE");
			break;
		case 84:
			return joaat("WEAPON_POOLCUE");
			break;
		case 85:
			return joaat("WEAPON_WRENCH");
			break;
		case 86:
			return joaat("WEAPON_STONE_HATCHET");
			break;
		case 87:
			return joaat("WEAPON_UNARMED");
			break;
		case 88:
			return joaat("WEAPON_FERTILIZERCAN");
			break;
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
			break;
		case 90:
			return joaat("WEAPON_TACTICALRIFLE");
			break;
		case 91:
			return joaat("WEAPON_PRECISIONRIFLE");
			break;
		case 92:
			return joaat("WEAPON_HEAVYRIFLE");
			break;
	}
	return joaat("WEAPON_PISTOL");
}

void func_303()//Position - 0x19F753
{
	Global_1888195 = 0;
}

void func_304(int iParam0)//Position - 0x19F8C1
{
	Global_1966059 = iParam0;
}

int func_305()//Position - 0x1A00DE
{
	if (Global_1966059 == 1)
	{
		return 1;
	}
	return 0;
}

int func_306()//Position - 0x1A0118
{
	if (Global_1965657[0] == 1)
	{
		return Global_1965654[0];
	}
	return -1;
}

void func_307(int iParam0)//Position - 0x1A05AD
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 10))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 10);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 10))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 10);
	}
}

void func_308()//Position - 0x1A0690
{
	if (!BitTest(Global_1965532, 8))
	{
		MISC::SET_BIT(&Global_1965532, 8);
	}
}

int func_309(int iParam0, bool bParam1)//Position - 0x1A09D2
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("PICKUP_ARMOUR_STANDARD"):
				return 0;
			case joaat("PICKUP_HEALTH_STANDARD"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_PARACHUTE"):
				return joaat("WEAPON_FALL");
			case joaat("PICKUP_CUSTOM_SCRIPT"):
				return joaat("WEAPON_COUGAR");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
				return joaat("WEAPON_EXPLOSION");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
				return joaat("WEAPON_EXPLOSION");
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
				return joaat("VEHICLE_WEAPON_TORPEDO");
			default:
		}
		return OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iParam0);
	}
	else
	{
		switch (iParam0)
		{
			case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
				return joaat("WEAPON_PISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
				return joaat("WEAPON_COMBATPISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
				return joaat("WEAPON_APPISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
				return joaat("WEAPON_MICROSMG");
			case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
				return joaat("WEAPON_SAWNOFFSHOTGUN");
			case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
				return joaat("WEAPON_ASSAULTSMG");
			case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
				return joaat("WEAPON_PISTOL50");
			case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
				return joaat("WEAPON_GRENADE");
			case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
				return joaat("WEAPON_SMOKEGRENADE");
			case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
				return joaat("WEAPON_STICKYBOMB");
			case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
				return joaat("WEAPON_MOLOTOV");
			case joaat("PICKUP_WEAPON_PROXMINE"):
				return joaat("WEAPON_PROXMINE");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
				return 0;
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
				return 0;
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_WEAPON_DOUBLEACTION"):
				return joaat("WEAPON_DOUBLEACTION");
			case joaat("PICKUP_WEAPON_STONE_HATCHET"):
				return joaat("WEAPON_STONE_HATCHET");
			case joaat("PICKUP_WEAPON_FERTILIZERCAN"):
				return joaat("WEAPON_FERTILIZERCAN");
			}
		default:
	}
	return -1;
}

int func_310(int iParam0)//Position - 0x1A0B5A
{
	if ((((((iParam0 != joaat("PICKUP_ARMOUR_STANDARD") || iParam0 != joaat("PICKUP_HEALTH_STANDARD")) || iParam0 != joaat("PICKUP_PARACHUTE")) || iParam0 != joaat("PICKUP_CUSTOM_SCRIPT")) || iParam0 != joaat("PICKUP_VEHICLE_HEALTH_STANDARD")) || iParam0 != joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW")) || iParam0 != joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"))
	{
		return 1;
	}
	return 0;
}

int func_311(int iParam0)//Position - 0x1A2867
{
	switch (iParam0)
	{
		case 0:
			return joaat("hei_prop_hst_usb_drive");
		default:
	}
	return 0;
}

int func_312(int iParam0)//Position - 0x1A2885
{
	switch (iParam0)
	{
		case 0:
			return joaat("h4_prop_h4_bolt_cutter_01a");
		case 1:
			return joaat("h4_prop_h4_bag_hook_01a");
		case 2:
			return joaat("prop_cs_duffel_01b");
		case 3:
			return joaat("prop_cs_envolope_01");
		case 4:
			return joaat("h4_prop_h4_card_hack_01a");
		case 5:
			return joaat("h4_prop_h4_keys_jail_01a");
		case 6:
			return joaat("h4_prop_h4_codes_01a");
		case 7:
			return joaat("h4_prop_h4_securitycard_01a");
		default:
	}
	return 0;
}

int func_313(int iParam0)//Position - 0x1A2905
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_cs_duffel_01");
		case 1:
			return joaat("hei_prop_heist_binbag");
		default:
	}
	return joaat("prop_cs_duffel_01");
}

int func_314(struct<3> Param0, int iParam1, int iParam2, float fParam3, int iParam4)//Position - 0x1A2978
{
	STREAMING::REQUEST_MODEL(iParam1);
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
	}
	return OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"), Param0, 0f, 0f, fParam3, iParam2, iParam4, 2, true, iParam1);
}

int func_315()//Position - 0x1A2D95
{
	return joaat("prop_mp_repair");
}

int func_316(int iParam0)//Position - 0x1A2DA2
{
	if (__LIB_6__::func_176(Global_4718592.f_168757))
	{
		switch (iParam0)
		{
			case -1:
				return joaat("prop_ic_mguns_wh_tr");
				break;
			case 0:
				return joaat("prop_ic_mguns_tr");
				break;
			case 1:
				return joaat("prop_ic_mguns_p_tr");
				break;
			case 2:
				return joaat("prop_ic_mguns_pk_tr");
				break;
			case 3:
				return joaat("prop_ic_mguns_g_tr");
				break;
		}
	}
	else
	{
		return joaat("prop_ic_mguns_b");
	}
	return joaat("prop_ic_mguns_b");
}

int func_317()//Position - 0x1A2E27
{
	return joaat("gr_prop_gr_rsply_crate01a");
}

int func_318()//Position - 0x1A2FC9
{
	return joaat("prop_tyre_spike_01");
}

bool func_319(int iParam0)//Position - 0x1AD1CA
{
	return __LIB_13__::func_185(iParam0) != 0;
}

void func_320(bool bParam0)//Position - 0x1AD2AE
{
	if (bParam0)
	{
		if (Global_2621442 == 0)
		{
			Global_2621442 = 1;
		}
	}
	else if (Global_2621442 == 1)
	{
		Global_2621442 = 0;
	}
}

void func_321(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1AE419
{
	GRAPHICS::DRAW_POLY(Param0, Param1, Param2, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param0, Param2, Param3, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param2, Param1, Param0, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param3, Param2, Param0, iParam4, iParam5, iParam6, iParam7);
}

float func_322(float fParam0, float fParam1, float fParam2)//Position - 0x1AF965
{
	fParam0 = __LIB_0__::func_301(fParam0, -fParam1, fParam1);
	fParam0 = __LIB_0__::func_316((fParam0 > fParam2 || fParam0 < -fParam2), fParam0, 0f);
	return fParam0;
}

int func_323(int iParam0)//Position - 0x1AF996
{
	if (iParam0 != 0 && !__LIB_1__::func_928(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_324(bool bParam0)//Position - 0x1AFB6D
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 16))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 16);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 16))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 16);
	}
}

void func_325()//Position - 0x1AFDF7
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 139 /*INPUT_VEH_PUSHBIKE_REAR_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 331 /*INPUT_VEH_FLY_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
	MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
}

void func_326(var uParam0, int iParam1)//Position - 0x1AFE50
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam1) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
	}
	else if (iParam1 == joaat("avenger"))
	{
		fVar0 = 1.25f;
		fVar1 = 1.5f;
		fVar2 = 1.25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
	{
		fVar0 = 1f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else if (iParam1 == joaat("thruster"))
	{
		fVar0 = 0f;
		fVar1 = 0.2f;
		fVar2 = 0.125f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else if (iParam1 == joaat("tug"))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 2.5f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	if (fVar0 != 0f)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "wings", fVar0, false);
	}
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "width", fVar1, false);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "length", fVar2, false);
}

int func_327()//Position - 0x1B06D3
{
	float fVar0;
	struct<3> Var1;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, true, false))
	{
		if ((Var1.f_2 - fVar0) > 7.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0)//Position - 0x1B0AFB
{
	if ((iParam0 == joaat("veto") || iParam0 == joaat("veto2")) || iParam0 == joaat("minitank"))
	{
		return 1;
	}
	return 0;
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x1B0C82
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_330(var uParam0)//Position - 0x1B2460
{
	return uParam0->f_47.f_1062;
}

void func_331(var uParam0, int iParam1)//Position - 0x1B246F
{
	int iVar0;
	uParam0->f_47.f_1012[uParam0->f_47.f_1045] = iParam1;
	uParam0->f_47.f_1045++;
	if (uParam0->f_47.f_1045 >= 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2621446.f_9[iVar0] != uParam0->f_47.f_1012[iVar0])
			{
				__LIB_6__::func_271();
			}
			Global_2621446.f_9[iVar0] = uParam0->f_47.f_1012[iVar0];
			uParam0->f_47.f_1012[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_47.f_1045 = 0;
	}
}

var func_332(var uParam0)//Position - 0x1B252B
{
	return uParam0->f_47.f_1045;
}

void func_333(int iParam0)//Position - 0x2D7165
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 10);
	iVar0 = Global_2787947.f_74;
	if (iVar0 >= 4)
	{
		return;
	}
	Global_2787947.f_74.f_1[iVar0] = iParam0;
	Global_2787947.f_74++;
}

void func_334()//Position - 0x2D71A4
{
	MISC::SET_BIT(&Global_2788033, 10);
	Global_2787947.f_74 = 0;
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D7266
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 2;
	Global_2787947.f_8 = iParam0;
	Global_2787947.f_8.f_2 = iParam3;
	Global_2787947.f_8.f_3 = iParam2;
	Global_2787947.f_8.f_4 = iParam4;
	Global_2787947.f_16 = iParam1;
}

bool func_336()//Position - 0x2D72D9
{
	return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_843(Global_4718592.f_168757));
}

void func_337(struct<3> Param0)//Position - 0x2D73E6
{
	MISC::SET_BIT(&Global_2788033, 9);
	Global_2787947.f_71 = { Param0 };
}

int func_338(int iParam0)//Position - 0x2D7404
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (BitTest(iParam0, 0))
		{
			return iVar0;
		}
		iParam0 = SYSTEM::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return -1;
}

var func_339()//Position - 0x2D743F
{
	int iVar0;
	var uVar1[4];
	float fVar2[4];
	float fVar3;
	float fVar4;
	MISC::SET_BIT(&(uVar1[0]), 0);
	fVar2[0] = 1.5f;
	MISC::SET_BIT(&(uVar1[1]), 1);
	fVar2[1] = 1.3f;
	MISC::SET_BIT(&(uVar1[2]), 2);
	fVar2[2] = 1.2f;
	MISC::SET_BIT(&(uVar1[3]), 0);
	MISC::SET_BIT(&(uVar1[3]), 1);
	MISC::SET_BIT(&(uVar1[3]), 2);
	fVar2[3] = 1f;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar3 = (fVar3 + fVar2[iVar0]);
		iVar0++;
	}
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar3);
	fVar3 = 0f;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar3 = (fVar3 + fVar2[iVar0]);
		if (fVar4 <= fVar3)
		{
		}
		else
		{
			iVar0++;
		}
	}
	return uVar1[iVar0];
}

int func_340(int iParam0, int iParam1, int iParam2)//Position - 0x2D7520
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_2680265.f_1399)
	{
		if ((Global_2680265.f_1399[iVar0 /*3*/].f_1 == iParam0 && Global_2680265.f_1399[iVar0 /*3*/].f_2 == iParam1) && Global_2680265.f_1399[iVar0 /*3*/] == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_341(var uParam0, bool bParam1, int iParam2)//Position - 0x2D7581
{
	return ((*uParam0)[bParam1] != 0 && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET((*uParam0)[bParam1], -iParam2)));
}

int func_342(bool bParam0, float fParam1, float fParam2)//Position - 0x2D75AB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Global_2788036.f_1[bParam0], false) };
	fVar2 = (Var0.f_2 - Var1.f_2);
	if (fVar2 >= -1.5f && fVar2 <= 5.5f)
	{
		*fParam2 = SYSTEM::VMAG(Var0 - Var1);
		return *fParam2 <= fParam1;
	}
	return 0;
}

void func_343(var uParam0)//Position - 0x2D7C05
{
	*uParam0 = (*uParam0 + 1 % Global_2788036);
}

void func_344(bool bParam0)//Position - 0x2D7C1A
{
	int iVar0;
	char* sVar1;
	if (!Global_2788182 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		Global_2788182 = 1;
		iVar0 = __LIB_0__::func_228(24889, -1);
		if (iVar0 < 3)
		{
			if (bParam0)
			{
				sVar1 = "ACT_HELP_P" /* GXT: Gun Towers ~HUD_COLOUR_YELLOW~~BLIP_ARENA_TURRET~~s~ are now online, drive under a tower for the chance to use machine guns, homing missiles or piloted missile. */;
			}
			else
			{
				sVar1 = "ACT_HELP_S" /* GXT: The Gun Tower ~HUD_COLOUR_YELLOW~~BLIP_ARENA_TURRET~~s~ is now online, drive under the tower for the chance to use machine guns, homing missiles or piloted missile. */;
			}
			__LIB_0__::func_151(sVar1, 10000);
			__LIB_1__::func_39(24889, iVar0 + 1, -1);
		}
	}
}

void func_345(var uParam0, int iParam1)//Position - 0x2D7C74
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_15[iParam1]))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_15[iParam1]));
	}
}

int func_346(int iParam0)//Position - 0x2D7E70
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != joaat("rcbandito"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_347(var uParam0)//Position - 0x2D7F3B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_15[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_15[iVar0]));
		}
		iVar0++;
	}
}

int func_348()//Position - 0x2D7F71
{
	return Global_2788036;
}

void func_349(bool bParam0, var uParam1, int* iParam2)//Position - 0x2D8220
{
	MISC::CLEAR_BIT(&(uParam1->f_68), bParam0);
	MISC::CLEAR_BIT(&(uParam1->f_67), bParam0);
	__LIB_0__::func_579(&(uParam1->f_335[bParam0 /*2*/]));
	__LIB_0__::func_579(&(uParam1->f_2[bParam0 /*2*/]));
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || __LIB_0__::func_155(0)) || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
	}
}

int func_350(int iParam0)//Position - 0x2D8314
{
	return Global_4980736.f_63312[iParam0 /*183*/].f_41 * 1000;
}

int func_351(int* iParam0)//Position - 0x2D8601
{
	if ((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || ENTITY::GET_ENTITY_HEALTH(*iParam0) < 1) || !ENTITY::IS_ENTITY_VISIBLE(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_352(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2D8A64
{
	if (uParam0->f_666[iParam1] == -1)
	{
		uParam0->f_666[iParam1] = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_666[iParam1], sParam3, iParam2, sParam4, false, 0);
	}
}

void func_353(int iParam0)//Position - 0x2D8D64
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1136672596;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = __LIB_1__::func_276(PLAYER::INT_TO_PLAYERINDEX(iParam0));
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_354()//Position - 0x2D8DA6
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(70, -1);
	if (iVar0 >= 10)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 16);
	}
}

int func_355(int iParam0)//Position - 0x2D8DF3
{
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 19);
}

char* func_356(int iParam0)//Position - 0x2D8E15
{
	if (((iParam0 == joaat("xs_prop_arena_pit_fire_01a") || iParam0 == joaat("xs_prop_arena_pit_fire_01a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_02a")) || iParam0 == joaat("xs_prop_arena_pit_fire_02a_wl"))
	{
		return "DLC_AW_Trap_Fire_Pit_Small_Sounds";
	}
	if (((iParam0 == joaat("xs_prop_arena_pit_fire_03a") || iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
		return "DLC_AW_Trap_Fire_Pit_Large_Sounds";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_01a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_02a_sf"))
	{
		return "DLC_AW_Trap_Electro_Pit_Small_Sounds";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf"))
	{
		return "DLC_AW_Trap_Electro_Pit_Large_Sounds";
	}
	return "INVALID";
}

int func_357()//Position - 0x2D9156
{
	if (BitTest(Global_4718592.f_32, 23))
	{
		return 0;
	}
	return 1;
}

void func_358(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2D91F2
{
	if (uParam0->f_633[iParam1] == -1)
	{
		uParam0->f_633[iParam1] = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_633[iParam1], sParam3, iParam2, sParam4, false, 0);
	}
}

char* func_359(int iParam0)//Position - 0x2D93BB
{
	if ((iParam0 == joaat("xs_prop_arena_pit_fire_01a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_02a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf"))
	{
		return "scr_xs_sf_pit";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf"))
	{
		return "scr_xs_sf_pit_long";
	}
	if ((iParam0 == joaat("xs_prop_arena_pit_fire_01a_wl") || iParam0 == joaat("xs_prop_arena_pit_fire_02a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a") || iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl"))
	{
		return "scr_xs_fire_pit_long";
	}
	return "scr_xs_fire_pit";
}

int func_360(bool bParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x2D9451
{
	if (BitTest(uParam3->f_565, bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!BitTest(uParam3->f_564, bParam0))
		{
			return 1;
		}
	}
	else if (BitTest(uParam3->f_564, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_361(int iParam0, var uParam1)//Position - 0x2D9ADF
{
	__LIB_0__::func_495(&(uParam1->f_270[iParam0 /*2*/]), 0, 0);
}

int func_362(int iParam0)//Position - 0x2D9BE0
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || __LIB_0__::func_155(0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_363(int iParam0, var uParam1)//Position - 0x2D9CF2
{
	return BitTest(uParam1->f_2, iParam0);
}

bool func_364(bool bParam0, var uParam1)//Position - 0x2D9DAB
{
	return BitTest(*uParam1, bParam0);
}

void func_365(var uParam0)//Position - 0x2D9E4D
{
	int iVar0;
	if (__LIB_0__::func_155(0) || (NETWORK::NETWORK_IS_SESSION_ACTIVE() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_5[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_5[iVar0], false);
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&Global_2726975, 0);
	}
}

void func_366(var uParam0, var uParam1, var uParam2, int* iParam3)//Position - 0x2DA03B
{
	bool bVar0;
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_VISIBLE(*uParam0))
	{
		MISC::SET_BIT(iParam3, *uParam2);
	}
	if (!BitTest(*iParam3, *uParam2))
	{
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1, 0);
		if (__LIB_0__::func_155(0) && __LIB_12__::func_364())
		{
			bVar0 = true;
		}
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(*uParam0, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, false);
		FIRE::ADD_EXPLOSION(*uParam1, 58, 1f, true, false, 1f, bVar0);
		MISC::SET_BIT(iParam3, *uParam2);
	}
}

bool func_367(int iParam0)//Position - 0x2DF2DB
{
	return iParam0 == 56;
}

int func_368(int iParam0)//Position - 0x2DF544
{
	if (PAD::GET_CONTROL_HOW_LONG_AGO(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

float func_369(int iParam0)//Position - 0x2DFCD3
{
	if (iParam0 == joaat("veto") || iParam0 == joaat("veto2"))
	{
		return 0f;
	}
	return 0.2f;
}

Vector3 func_370(struct<3> Param0)//Position - 0x2DFD22
{
	float fVar0;
	float fVar1;
	if (Param0.f_0 < 8f && Param0.f_0 > -8f)
	{
		fVar1 = 0f;
		fVar0 = 1f;
	}
	else
	{
		fVar1 = SYSTEM::SIN(Param0.f_0);
		fVar0 = SYSTEM::COS(Param0.f_0);
	}
	return (-SYSTEM::SIN(Param0.f_2) * fVar0), (SYSTEM::COS(Param0.f_2) * fVar0), fVar1;
}

char* func_371(int iParam0, bool bParam1)//Position - 0x2E0489
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_372(int iParam0)//Position - 0x2E12D8
{
	if (BitTest(Global_4718592.f_30, 28))
	{
		return 0;
	}
	return 0;
}

char* func_373(int iParam0)//Position - 0x2E1B7F
{
	switch (iParam0)
	{
		case joaat("prop_drug_package"):
			return "FMMC_OM_1";
		case joaat("prop_drug_package_02"):
			return "FMMC_OM_0";
		case joaat("prop_gold_bar"):
			return "FMMC_OM_2";
		case joaat("prop_bomb_01"):
			return "FMMC_OM_3";
		case joaat("prop_ld_case_01"):
			return "FMMC_OM_4";
		case joaat("prop_contr_03b_ld"):
			return "FMMC_OM_5";
		case joaat("prop_laptop_01a"):
			return "FMMC_OM_6";
		case joaat("prop_ld_keypad_01"):
			return "FMMC_OM_7";
		case joaat("prop_ld_keypad_01b"):
			return "FMMC_OM_8";
		case joaat("p_v_43_safe_s"):
			return "FMMC_OM_9";
		case joaat("prop_box_wood02a_pu"):
			return "FMMC_OM_10";
		case joaat("prop_box_wood02a_mws"):
			return "FMMC_OM_11";
		case joaat("prop_container_ld_pu"):
			return "FMMC_OM_12";
		case joaat("prop_security_case_01"):
			return "FMMC_OM_13";
		case joaat("prop_money_bag_01"):
			return "FMMC_OM_14";
		case joaat("prop_cs_duffel_01"):
			return "FMMC_OM_15";
		case joaat("prop_cash_crate_01"):
			return "FMMC_OM_16";
		case joaat("prop_gold_trolly_full"):
			return "FMMC_OM_17";
		case joaat("hei_p_attache_case_shut_s"):
			return "FMMC_OM_18";
		case joaat("prop_box_wood02a"):
			return "FMMC_OM_19";
		case joaat("ind_prop_dlc_flag_02"):
			return "FMMC_OM_21";
		case joaat("prop_container_ld"):
			return "FMMC_OM_22";
		case joaat("prop_idol_case_02"):
			return "FMMC_OM_23";
		case joaat("prop_gun_case_01"):
			return "FMMC_OM_24";
		case joaat("hei_prop_hei_keypad_01"):
			return "FMMC_OM_25";
		case joaat("hei_prop_hei_keypad_02"):
			return "FMMC_OM_26";
		case joaat("hei_prop_hei_cash_trolly_01"):
			return "FMMC_OM_28";
		case joaat("hei_prop_heist_binbag"):
			return "FMMC_OM_29";
		case joaat("hei_prop_hei_timetable"):
			return "FMMC_OM_30";
		case joaat("hei_prop_hei_securitypanel"):
			return "FMMC_OM_31";
		case joaat("hei_prop_heist_box"):
			return "FMMC_OM_32";
		case joaat("prop_ld_scrap"):
			return "FMMC_OM_33";
		case joaat("prop_amanda_note_01"):
			return "FMMC_OM_34";
		case joaat("hei_prop_hei_bio_panel"):
			return "FMMC_OM_35";
		case joaat("hei_prop_hei_drug_pack_01a"):
			return "FMMC_OM_DP3";
		case joaat("reh_prop_reh_keypad_01a"):
			return "FMMC_OM_KPC";
		case joaat("reh_prop_reh_drone_02a"):
			return "FMMC_OM_RD2";
		default:
	}
	if (iParam0 == joaat("pil_prop_pilot_icon_01"))
	{
		return "FMMC_OM_27";
	}
	else if (iParam0 == joaat("hei_prop_bank_cctv_01"))
	{
		return "FMMC_OM_CCTV";
	}
	else if (iParam0 == joaat("hei_prop_bank_cctv_02"))
	{
		return "FMMC_OM_DOMC";
	}
	else if (iParam0 == joaat("prop_mk_ball"))
	{
		return "FMMC_OM_FBIC";
	}
	else if (iParam0 == joaat("stt_prop_stunt_soccer_sball"))
	{
		return "MC_PR_STNT66";
	}
	else if (iParam0 == joaat("stt_prop_stunt_soccer_ball"))
	{
		return "MC_PR_STNT68";
	}
	else if (iParam0 == joaat("stt_prop_stunt_soccer_lball"))
	{
		return "MC_PR_STNT65";
	}
	else if (iParam0 == joaat("xs_prop_arena_bomb_s"))
	{
		return "ARNAP_BMB_S";
	}
	else if (iParam0 == joaat("xs_prop_arena_bomb_m"))
	{
		return "ARNAP_BMB_M";
	}
	else if (iParam0 == joaat("xs_prop_arena_bomb_l"))
	{
		return "ARNAP_BMB_L";
	}
	else if (iParam0 == joaat("stt_prop_stunt_bowling_pin"))
	{
		return "MC_PR_STNT63";
	}
	else if (iParam0 == joaat("gr_prop_gr_adv_case"))
	{
		return "MC_PR_EXC_1";
	}
	else if (iParam0 == joaat("imp_prop_adv_hdsec"))
	{
		return "MC_PR_EXC_0";
	}
	else if (iParam0 == joaat("sr_prop_sr_boxwood_01"))
	{
		return "FMMC_PR_97";
	}
	else if (iParam0 == joaat("imp_prop_impexp_boxcoke_01"))
	{
		return "FMMC_PR_99";
	}
	else if (iParam0 == joaat("bkr_prop_weed_bigbag_01a"))
	{
		return "MC_BKR_DG_0";
	}
	else if (iParam0 == joaat("bkr_prop_meth_smallbag_01a"))
	{
		return "MC_BKR_DG_1";
	}
	else if (iParam0 == joaat("bkr_prop_weed_bucket_01a"))
	{
		return "MC_BKR_DG_2";
	}
	else if (iParam0 == joaat("bkr_prop_coke_boxeddoll"))
	{
		if (__LIB_0__::func_721())
		{
			return "FMMC_CO_9";
		}
		else
		{
			return "MC_BKR_DG_3";
		}
	}
	else if (iParam0 == joaat("imp_prop_impexp_coke_trolly"))
	{
		return "FMMC_OM_36";
	}
	else if (iParam0 == joaat("gr_prop_gr_hdsec"))
	{
		return "MC_PR_WVM_0";
	}
	else if (iParam0 == joaat("prop_ex_bmd"))
	{
		return "MC_PR_BSTP";
	}
	else if (iParam0 == joaat("prop_ex_bmd_wh"))
	{
		return "MC_PR_BSTPW";
	}
	else if (iParam0 == joaat("prop_ex_bmd_g"))
	{
		return "MC_PR_BSTPG";
	}
	else if (iParam0 == joaat("prop_ic_jugg"))
	{
		return "MC_PR_JUGP";
	}
	else if (iParam0 == joaat("prop_ic_jugg_wh"))
	{
		return "MC_PR_JUGPW";
	}
	else if (iParam0 == joaat("prop_ic_jugg_g"))
	{
		return "MC_PR_JUGPG";
	}
	else if (iParam0 == joaat("prop_ic_cp_bag"))
	{
		return "FMMC_OM_37";
	}
	else if (iParam0 == joaat("xm_prop_x17_mine_01a"))
	{
		return "FMMC_OM_MN1";
	}
	else if (iParam0 == joaat("xm_prop_x17_mine_02a"))
	{
		return "FMMC_OM_MN2";
	}
	else if (iParam0 == joaat("xm_prop_x17_mine_03a"))
	{
		return "FMMC_OM_MN3";
	}
	else if (iParam0 == -1248305064)
	{
		return "FMMC_OM_CRD1";
	}
	else if (iParam0 == 1006398754)
	{
		return "FMMC_OM_CRD2";
	}
	else if (iParam0 == 565630619)
	{
		return "FMMC_OM_SAMH";
	}
	else if (iParam0 == joaat("xm_prop_sam_turret_01"))
	{
		return "FMMC_OM_SAM1";
	}
	else if (iParam0 == -409632754)
	{
		return "FMMC_OM_SAM2";
	}
	else if (iParam0 == joaat("xm_prop_x17_boxwood_01b"))
	{
		return "FMMC_OM_WDNB";
	}
	else if (iParam0 == joaat("xm_prop_x17_powerbox_01"))
	{
		return "FMMC_OM_PBOX";
	}
	else if (iParam0 == joaat("xm_prop_vancrate_01a"))
	{
		return "FMMC_CARG_GRC";
	}
	else if (iParam0 == joaat("xm_prop_moderncrate_xplv_01"))
	{
		return "FMMC_CARG_MEC";
	}
	else if (iParam0 == joaat("xm_prop_x17_server_farm_cctv_01"))
	{
		return "FMMC_OBJ_CRL";
	}
	else if (iParam0 == joaat("ch_prop_ch_cctv_cam_01a"))
	{
		return "FMMC_OBJ_CWA";
	}
	else if (iParam0 == joaat("ch_prop_ch_cctv_cam_02a"))
	{
		return "FMMC_OBJ_CWA2";
	}
	else if (iParam0 == joaat("prop_cctv_cam_05a"))
	{
		return "FMMC_OBJ_CWA3";
	}
	else if (iParam0 == joaat("as_prop_as_laptop_01a"))
	{
		return "FMMC_OM_6";
	}
	else if (iParam0 == joaat("sf_prop_sf_car_keys_01a"))
	{
		return "FMMC_OBJ_KEYS";
	}
	else if (iParam0 == joaat("sf_prop_sf_speaker_l_01a"))
	{
		return "FMMC_P_SPK";
	}
	else if (iParam0 == joaat("sf_prop_sf_speaker_stand_01a"))
	{
		return "FMMC_P_SPK2";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_white"))
	{
		return "FMMC_OBJ_FW";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_yellow"))
	{
		return "FMMC_OBJ_FY";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_purple"))
	{
		return "FMMC_OBJ_FP";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_green"))
	{
		return "FMMC_OBJ_FG";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_pink"))
	{
		return "FMMC_OBJ_FPI";
	}
	else if (iParam0 == joaat("prop_arena_icon_flag_red"))
	{
		return "FMMC_OBJ_FR";
	}
	else if (iParam0 == 169060383)
	{
		return "ARNAP_PR_TWR_B";
	}
	else if (iParam0 == joaat("vw_prop_vw_elecbox_01a"))
	{
		return "FMMC_P_ELCB";
	}
	else if (iParam0 == joaat("ch_prop_ch_fuse_box_01a"))
	{
		return "FMMC_P_FUSEL";
	}
	else if (iParam0 == joaat("tr_prop_tr_fuse_box_01a"))
	{
		return "FMMC_P_FUSE";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_01a"))
	{
		return "FMMC_P_CKPAD1";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_01b"))
	{
		return "FMMC_P_CKPAD2";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_01c"))
	{
		return "FMMC_P_CKPAD3";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_01d"))
	{
		return "FMMC_P_CKPAD4";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_01e"))
	{
		return "FMMC_P_CKPAD5";
	}
	else if (iParam0 == joaat("ch_prop_fingerprint_scanner_error_01b"))
	{
		return "FMMC_P_CKPADE";
	}
	else if (iParam0 == joaat("tr_prop_tr_fp_scanner_01a"))
	{
		return "FMMC_P_FPSNRA";
	}
	else if (iParam0 == joaat("ch_prop_swipe_card_01a"))
	{
		return "FMMC_P_SWCRDA";
	}
	else if (iParam0 == joaat("ch_prop_swipe_card_01b"))
	{
		return "FMMC_P_SWCRDB";
	}
	else if (iParam0 == joaat("ch_prop_swipe_card_01c"))
	{
		return "FMMC_P_SWCRDC";
	}
	else if (iParam0 == joaat("ch_prop_swipe_card_01d"))
	{
		return "FMMC_P_SWCRDD";
	}
	else if (iParam0 == joaat("ch_prop_diamond_trolly_01a"))
	{
		return "FMMC_P_DBT";
	}
	else if (iParam0 == joaat("ch_prop_diamond_trolly_01b"))
	{
		return "FMMC_P_DBT_B";
	}
	else if (iParam0 == joaat("ch_prop_diamond_trolly_01c"))
	{
		return "FMMC_P_DBT_C";
	}
	else if (iParam0 == joaat("ch_prop_cash_low_trolly_01a"))
	{
		return "FMMC_P_LCT";
	}
	else if (iParam0 == joaat("ch_prop_cash_low_trolly_01b"))
	{
		return "FMMC_P_LCT_B";
	}
	else if (iParam0 == joaat("ch_prop_cash_low_trolly_01c"))
	{
		return "FMMC_P_LCT_C";
	}
	else if (iParam0 == joaat("ch_prop_ch_cash_trolly_01a"))
	{
		return "FMMC_P_CCT";
	}
	else if (iParam0 == joaat("ch_prop_ch_cash_trolly_01b"))
	{
		return "FMMC_P_CCT_B";
	}
	else if (iParam0 == joaat("ch_prop_ch_cash_trolly_01c"))
	{
		return "FMMC_P_CCT_C";
	}
	else if (iParam0 == joaat("ch_prop_gold_trolly_01a"))
	{
		return "FMMC_P_CGGT";
	}
	else if (iParam0 == joaat("ch_prop_gold_trolly_01b"))
	{
		return "FMMC_P_CGGT_B";
	}
	else if (iParam0 == joaat("ch_prop_gold_trolly_01c"))
	{
		return "FMMC_P_CGGT_C";
	}
	else if (iParam0 == joaat("ch_prop_ch_casino_button_01a"))
	{
		return "FMMC_P_DCRB";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01a"))
	{
		return "FMMC_P_PAINT1";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01b"))
	{
		return "FMMC_P_PAINT2";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01c"))
	{
		return "FMMC_P_PAINT3";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01d"))
	{
		return "FMMC_P_PAINT4";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01e"))
	{
		return "FMMC_P_PAINT5";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01f"))
	{
		return "FMMC_P_PAINT6";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01g"))
	{
		return "FMMC_P_PAINT7";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01h"))
	{
		return "FMMC_P_PAINT8";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01i"))
	{
		return "FMMC_P_PAINT9";
	}
	else if (iParam0 == joaat("ch_prop_vault_painting_01j"))
	{
		return "FMMC_P_PAINT10";
	}
	else if (iParam0 == joaat("ch_prop_ch_casino_button_01b"))
	{
		return "FMMC_P_DCRE";
	}
	else if (iParam0 == joaat("sum_prop_ac_aircon_02a"))
	{
		return "FMMC_OBJ_AC";
	}
	else if (iParam0 == joaat("sum_ac_prop_container_01a"))
	{
		return "FMMC_OBJ_WPC";
	}
	else if (iParam0 == joaat("tr_prop_tr_adv_case_01a"))
	{
		return "FMMC_P_MPCRT";
	}
	else if (iParam0 == joaat("sum_prop_ac_papers_01a"))
	{
		return "FMMC_OBJ_PWIP";
	}
	else if (iParam0 == joaat("prop_chem_grill_bit"))
	{
		return "FMMC_P_GRILL";
	}
	else if (iParam0 == joaat("ch_prop_ch_ld_bomb_01a"))
	{
		return "INCN_MD_BMB";
	}
	else if (iParam0 == joaat("h4_prop_h4_ld_bomb_02a"))
	{
		return "INCN_MD_BMB2";
	}
	else if (iParam0 == joaat("h4_prop_h4_safe_01a"))
	{
		return "FMMC_P_VSAFE";
	}
	else if (iParam0 == joaat("h4_prop_h4_glass_disp_01a"))
	{
		return "FMMC_P_GPLINTH";
	}
	else if (iParam0 == joaat("xm_prop_x17_bag_01b"))
	{
		return "FMMC_P_HSTBG";
	}
	else if (iParam0 == joaat("p_michael_backpack_s"))
	{
		return "FMMC_P_MCHBK";
	}
	else if (iParam0 == joaat("sf_prop_sf_backpack_01a"))
	{
		return "FMMC_P_GRYBK";
	}
	else if (iParam0 == joaat("prop_npc_phone"))
	{
		return "FMMC_P_PHONE";
	}
	else if (iParam0 == joaat("sf_prop_sf_dj_desk_01a"))
	{
		return "FMMC_P_DJDSK";
	}
	else if (iParam0 == joaat("sf_prop_sf_laptop_01a"))
	{
		return "FMMC_P_LAPTOP";
	}
	else if (iParam0 == joaat("sf_prop_sf_npc_phone_01a"))
	{
		return "FMMC_P_NPCP";
	}
	else if (iParam0 == joaat("prop_cctv_cam_07a"))
	{
		return "FMMC_P_CCTV";
	}
	else if (iParam0 == joaat("reh_prop_reh_gadget_01a"))
	{
		return "FMMC_P_CLFD";
	}
	else if (iParam0 == joaat("reh_prop_reh_tablet_01a"))
	{
		return "FMMC_P_AHTAB";
	}
	else if (iParam0 == joaat("reh_prop_reh_harddisk_01a"))
	{
		return "FMMC_P_AHHDD";
	}
	else if (iParam0 == joaat("reh_prop_reh_glasses_smt_01a"))
	{
		return "FMMC_P_MXRG";
	}
	else if (iParam0 == joaat("reh_prop_reh_desk_comp_01a"))
	{
		return "FMMC_P_COMP";
	}
	else if (iParam0 == joaat("reh_prop_reh_b_computer_04a"))
	{
		return "FMMC_P_FBOX";
	}
	else if (iParam0 == joaat("reh_prop_reh_fuse_01b"))
	{
		return "FMMC_P_BFUS";
	}
	else if (iParam0 == joaat("tr_prop_tr_ser_storage_01a"))
	{
		return "INCN_MD_NASS";
	}
	else if (iParam0 == joaat("tr_prop_tr_break_dev_01a"))
	{
		return "FMMC_P_TRBCY";
	}
	else if (iParam0 == joaat("tr_prop_tr_carry_box_01a"))
	{
		return "FMMC_P_MPLTES";
	}
	else if (iParam0 == joaat("tr_prop_tr_control_unit_01a"))
	{
		return "FMMC_P_SDECU";
	}
	else if (iParam0 == joaat("tr_prop_tr_file_cylinder_01a"))
	{
		return "FMMC_P_FILCYL";
	}
	else if (iParam0 == joaat("tr_prop_tr_sand_01a"))
	{
		return "FMMC_P_SNDPL_D";
	}
	else if (iParam0 == joaat("tr_prop_tr_sand_cs_01a"))
	{
		return "FMMC_P_SNDPL2_D";
	}
	else if (iParam0 == joaat("sf_prop_sf_weed_lrg_01a"))
	{
		return "FMMC_P_FLWD_L";
	}
	else if (iParam0 == joaat("sf_prop_sf_weed_med_01a"))
	{
		return "FMMC_P_FLWD_M";
	}
	else if (iParam0 == joaat("sf_prop_sf_weed_01_small_01a"))
	{
		return "FMMC_P_FLWD_S";
	}
	else if (iParam0 == joaat("sf_prop_sf_weed_bigbag_01a"))
	{
		return "FMMC_P_FLWD_BG";
	}
	else if (iParam0 == joaat("prop_cs_server_drive"))
	{
		return "FMMC_P_HDD";
	}
	else if (iParam0 == joaat("reh_prop_reh_bag_outfit_01a"))
	{
		return "FMMC_P_OUTBM";
	}
	return "";
}

char* func_374(int iParam0)//Position - 0x2E29E0
{
	switch (iParam0)
	{
		case joaat("dinghy2"):
			return "MC_VN_DNG2";
		case joaat("dinghy3"):
			return "MC_VN_DNG4";
		case joaat("tanker"):
			return "MC_VN_TNKR";
		case joaat("tanker2"):
			return "MC_VN_TNK";
		case joaat("trflat"):
			return "MC_VN_TRLF";
		case joaat("boxville2"):
			return "MC_VN_BXVGP";
		case joaat("boxville3"):
			return "MC_VN_BXVHL";
		case joaat("boxville4"):
			return "MC_VN_BXVPOP";
		case joaat("gburrito"):
			return "MC_VN_GBL";
		case joaat("mule3"):
			return "MC_VN_MULNL";
		case joaat("dilettante2"):
			return "MC_VN_DLTPTR";
		case joaat("fbi2"):
			return "MC_VN_FIBVAN";
		case joaat("cargobob"):
			return "MC_VN_CBARM";
		case joaat("baller2"):
			return "MC_VN_BLR2";
		case joaat("kuruma2"):
			return "MC_VN_KURARM";
		case joaat("emperor2"):
			return "MC_VN_EMPRST";
		case joaat("emperor3"):
			return "MC_VN_EMPSN";
		case joaat("barracks3"):
			return "MC_VN_BARNF";
		case joaat("luxor2"):
			return "MC_VN_LUXD";
		case joaat("valkyrie2"):
			return "MC_VN_VALK2";
		case joaat("mixer2"):
			return "MC_VN_MIX2";
		case joaat("trash2"):
			return "MC_VN_TRSH2";
		case joaat("seven70"):
			return "MC_VN_D770";
		case joaat("baller6"):
			return "MC_VN_BALL6";
		case joaat("cog552"):
			return "MC_COG552";
		case joaat("schafter6"):
			return "MC_SCHAFTER6";
		case joaat("cognoscenti2"):
			return "MC_COGNOSC2";
		case joaat("buffalo3"):
			return "MC_VN_BFLO";
		case joaat("dominator2"):
			return "DOMINATOR2" /* GXT: Pisswasser Dominator */;
		case joaat("stalion2"):
			return "MC_VN_STSTL";
		case joaat("gauntlet2"):
			return "MC_VN_RWG";
		case joaat("tropos"):
			return "TROPOS" /* GXT: Tropos Rallye */;
		case joaat("daemon2"):
			return "MC_VN_DAEMON2";
		case joaat("dukes2"):
			return "IMP_V_3" /* GXT: Duke O'Death */;
		case joaat("deviant"):
			return "AV_VEH_DEVI" /* GXT: Deviant */;
		case joaat("vamos"):
			return "AV_VEH_VAMOS" /* GXT: Vamos */;
		case 0:
			return "FMMC_PD_DUMMY";
		default:
	}
	if (iParam0 == joaat("seven70"))
	{
		return "MC_VN_770";
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return "MC_VN_811";
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return "TROPHY" /* GXT: Trophy Truck */;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return "BF400" /* GXT: BF400 */;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return "CLIFFHANGER" /* GXT: Cliffhanger */;
	}
	else if (iParam0 == joaat("contender"))
	{
		return "CONTENDER" /* GXT: Contender */;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return "OMNIS" /* GXT: Omnis */;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return "TROPHY2" /* GXT: Desert Raid */;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return "LE7B" /* GXT: RE-7B */;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return "RALLYTRUCK" /* GXT: Dune */;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return "TAMPA2" /* GXT: Drift Tampa */;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return "BRIOSO" /* GXT: Brioso R/A */;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return "TYRUS" /* GXT: Tyrus */;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return "SHEAVA" /* GXT: ETR1 */;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return "LYNX" /* GXT: Lynx */;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return "GARGOYLE" /* GXT: Gargoyle */;
	}
	else if (iParam0 == joaat("trailerlarge"))
	{
		return "MC_VN_MOC";
	}
	else if (iParam0 == joaat("caddy3"))
	{
		return "CADDY3_CUS";
	}
	else if (iParam0 == joaat("prop_cs_dildo_01"))
	{
		return "FMMC_RDT_NVOF";
	}
	else if (iParam0 == joaat("v_res_d_dildo_b"))
	{
		return "FMMC_RDT_BEAST";
	}
	else if (iParam0 == joaat("deviant"))
	{
		return "FMMC_VN_DEV";
	}
	else if (iParam0 == joaat("vamos"))
	{
		return "FMMC_VN_VMS";
	}
	else if (iParam0 == joaat("cargobob4"))
	{
		return "FMMC_VN_CBOB4";
	}
	else if (iParam0 == joaat("bison3"))
	{
		return "FMMC_VN_BISON3";
	}
	else if (iParam0 == joaat("boxville"))
	{
		return "FMMC_VN_BXVLLE";
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return "FMMC_VN_BRRITO";
	}
	else if (iParam0 == joaat("seashark3"))
	{
		return "FMMC_VN_SSHARK3";
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

float func_375(float fParam0, float fParam1)//Position - 0x2E3DF5
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(MISC::GET_FRAME_COUNT());
	fVar0 = SYSTEM::SIN((fVar1 * fParam0));
	fVar0 = (fVar0 * fParam1);
	fVar0 = (fVar0 + fParam1);
	return MISC::ABSF(fVar0);
}

void func_376(var uParam0)//Position - 0x2E4B67
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_377(int iParam0, var uParam1)//Position - 0x2E4C7E
{
	if ((iParam0 > 1 || iParam0 < -1) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_378(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x2E4CAC
{
	if (bParam3)
	{
		return 1;
	}
	if ((iParam0 > 10 || iParam0 < -10) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		__LIB_0__::func_495(&(uParam2->f_11), 0, 0);
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/))
	{
		__LIB_0__::func_495(&(uParam2->f_11), 0, 0);
		return 1;
	}
	if (__LIB_0__::func_649(&(uParam2->f_11)))
	{
		if (__LIB_2__::func_30(uParam2->f_11, 2500, 0))
		{
			__LIB_0__::func_579(&(uParam2->f_11));
		}
		return 1;
	}
	return 0;
}

bool func_379(var uParam0)//Position - 0x2E4D4C
{
	return uParam0->f_6 > IntToFloat(Global_262145.f_19336);
}

bool func_380()//Position - 0x2E59BB
{
	return (Global_4718592.f_162543.f_2 == 3 || Global_4718592.f_162543.f_2 == 9);
}

void func_381(var uParam0, bool bParam1)//Position - 0x2E61FC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_ITEMS_GREYED_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_382(var uParam0, int iParam1, bool bParam2)//Position - 0x2E62BF
{
	if (iParam1 > -1 && iParam1 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_HOVER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(!bParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_383(var uParam0)//Position - 0x2E62F7
{
	int iVar0;
	int iVar1;
	uParam0->f_135 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			MISC::SET_BIT(&(uParam0->f_135), iVar0);
		}
		iVar0++;
	}
}

void func_384(int iParam0)//Position - 0x2E6468
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_6), iParam0);
}

int func_385(var uParam0)//Position - 0x2E668C
{
	return uParam0->f_126;
}

int func_386(bool bParam0)//Position - 0x2E6BA3
{
	if (bParam0)
	{
		return 1;
	}
	return 9;
}

int func_387(int iParam0)//Position - 0x2E6CF1
{
	switch (iParam0)
	{
		case 72:
		case 74:
		case 76:
		case 77:
		case 78:
		case 81:
		case 83:
			return 1;
		default:
	}
	return 0;
}

var func_388(var uParam0, var uParam1, bool bParam2)//Position - 0x2E6ECD
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return BitTest(Global_998606.f_604[uParam1->f_107[bParam2] /*88*/].f_76, 14);
	}
	return BitTest(Global_794709.f_4[uParam1->f_107[bParam2] /*88*/].f_76, 14);
}

int func_389(var uParam0, var uParam1, bool bParam2)//Position - 0x2E6F20
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return 0;
	}
	return Global_794709.f_4[uParam1->f_107[bParam2] /*88*/].f_80;
}

var func_390(var uParam0, var uParam1, int iParam2)//Position - 0x2E70FB
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_73;
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_73;
}

Vector3 func_391(var uParam0, var uParam1, int iParam2)//Position - 0x2E7148
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_56;
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_56;
}

var func_392(var uParam0, var uParam1, int iParam2)//Position - 0x2E7199
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_71;
	}
	if (Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2 != -1 && Global_262145.f_4896[Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2] != -1)
	{
		return Global_262145.f_4896[Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2];
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_71;
}

var func_393(var uParam0, var uParam1, int iParam2)//Position - 0x2E7246
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_69;
	}
	if (Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2 != -1 && Global_262145.f_4947[Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2] != -1)
	{
		return Global_262145.f_4947[Global_794709.f_177589[uParam1->f_107[iParam2] /*13*/].f_2];
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_69;
}

int func_394(var uParam0, var uParam1, int iParam2)//Position - 0x2E72F3
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_65;
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_65;
}

var func_395(var uParam0, int iParam1, bool bParam2)//Position - 0x2E7340
{
	if (!bParam2)
	{
		if (uParam0->f_107[iParam1] < 100)
		{
			return Global_998606.f_10707[uParam0->f_107[iParam1]];
		}
	}
	return Global_4718592.f_117081;
}

int func_396(int iParam0)//Position - 0x2E740E
{
	if (iParam0 == 18)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)//Position - 0x2E7422
{
	if (iParam0 < 18)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)//Position - 0x2E756C
{
	switch (iParam0)
	{
		case 18:
			return 6;
			break;
		case 19:
			return 7;
			break;
		case 20:
			return 8;
			break;
	}
	return (iParam0 % 6);
}

int func_399(int iParam0)//Position - 0x2E75E5
{
	if (iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0)//Position - 0x2E75F9
{
	if (iParam0 == 19)
	{
		return 1;
	}
	return 0;
}

struct<16> func_401(int iParam0, var uParam1)//Position - 0x2E766B
{
	if (uParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_22;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_22;
}

int func_402(var uParam0, var uParam1, int iParam2)//Position - 0x2E76D8
{
	if (BitTest(uParam0->f_124, iParam2) && uParam1->f_107[iParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[iParam2] /*88*/].f_54;
	}
	return Global_794709.f_4[uParam1->f_107[iParam2] /*88*/].f_54;
}

bool func_403(var uParam0)//Position - 0x2E7725
{
	return BitTest(uParam0->f_129, 1);
}

bool func_404(var uParam0)//Position - 0x2E80CF
{
	return BitTest(uParam0->f_129, 3);
}

void func_405()//Position - 0x2E80DD
{
	AUDIO::SET_AUDIO_FLAG("PlayMenuMusic", false);
}

void func_406()//Position - 0x2E80EE
{
	Global_2714762.f_857 = 1;
}

void func_407(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2E89B0
{
	StringCopy(&(uParam1->f_17), "", 32);
	if (bParam3)
	{
		StringIntConCat(&(uParam1->f_17), 21, 32);
	}
	else if (iParam2 >= 0 && iParam2 <= 17)
	{
		MemCopy(&(uParam1->f_17), {uParam0->f_131[iParam2 /*6*/]}, 8);
	}
	else if (uParam0->f_8 == -1)
	{
		StringIntConCat(&(uParam1->f_17), 23, 32);
	}
	else
	{
		StringIntConCat(&(uParam1->f_17), uParam0->f_8, 32);
	}
}

Vector3 func_408(int iParam0, var uParam1)//Position - 0x2E8AC1
{
	if (uParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_56;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_56;
}

void func_409()//Position - 0x2E8B09
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 12);
}

void func_410(char* sParam0)//Position - 0x2E8B26
{
	StringCopy(&(Global_2714762.f_33), sParam0, 24);
}

void func_411()//Position - 0x2E8B38
{
	Global_2714762.f_16 = 1;
}

void func_412(int iParam0)//Position - 0x2E8B47
{
	Global_2714762.f_13 = iParam0;
}

int func_413(var uParam0)//Position - 0x2E8BDC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_30[iVar0] > 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_414()//Position - 0x2E8C08
{
	if (((((((((((((((((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 1)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 2)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 3)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 4)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 5)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 6)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 7)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 8)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 9)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 10)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 11)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 12)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 13)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 14)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 15)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 16)) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 17))
	{
		return 1;
	}
	return 0;
}

int func_415(var uParam0)//Position - 0x2E8D96
{
	if (uParam0->f_9 == -1)
	{
		return 0;
	}
	if (((((uParam0->f_9 == 0 || uParam0->f_9 == 1) || uParam0->f_9 == 2) || uParam0->f_9 == 3) || uParam0->f_9 == 4) || uParam0->f_9 == 5)
	{
		return 1;
	}
	return 0;
}

var func_416()//Position - 0x2E8DF4
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 18);
}

void func_417()//Position - 0x2E8E0C
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 7);
}

int func_418(var uParam0, bool bParam1)//Position - 0x2E8E28
{
	if (bParam1)
	{
		if (uParam0->f_9 == 18)
		{
			return 1;
		}
	}
	else if (uParam0->f_8 == 18)
	{
		return 1;
	}
	return 0;
}

void func_419()//Position - 0x2E8E53
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 8);
}

void func_420()//Position - 0x2E8E70
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (BitTest(Global_1853348[iVar0 /*834*/].f_7, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_7), 0);
	}
}

var func_421()//Position - 0x2E8EF0
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, 20);
}

var func_422(var* uParam0)//Position - 0x2E9092
{
	if (__LIB_0__::func_585(*uParam0))
	{
		NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 0, uParam0);
	}
	return Global_2787435;
}

int func_423()//Position - 0x2E90B6
{
	int iVar0;
	iVar0 = -1;
	switch (Global_1057830.f_96)
	{
		case 0:
		case 6:
		case 12:
			iVar0 = 0;
			break;
		case 1:
		case 7:
		case 13:
			iVar0 = 1;
			break;
		case 2:
		case 8:
		case 14:
			iVar0 = 2;
			break;
		case 3:
		case 9:
		case 15:
			iVar0 = 3;
			break;
		case 4:
		case 10:
		case 16:
			iVar0 = 4;
			break;
		case 5:
		case 11:
		case 17:
			iVar0 = 5;
			break;
		case 18:
			iVar0 = 6;
			break;
		case 19:
			iVar0 = 7;
			break;
		case 20:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_424(var uParam0)//Position - 0x2E923E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_LOBBY_LIST_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_855);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_425(var uParam0)//Position - 0x2E9261
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_LOBBY_LIST_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_426(var uParam0, bool bParam1)//Position - 0x2E928A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_LOBBY_LIST_VISIBILITY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_427(var uParam0)//Position - 0x2E92AA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SET_LOBBY_LIST_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_428(bool bParam0)//Position - 0x2E950F
{
	int iVar0;
	iVar0 = 65;
	if (bParam0)
	{
		iVar0 = 47;
	}
	else
	{
		iVar0 = 65;
	}
	return iVar0;
}

int func_429(bool bParam0)//Position - 0x2E952D
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 66;
	}
	return iVar0;
}

char* func_430(bool bParam0)//Position - 0x2E9540
{
	char* sVar0;
	if (bParam0)
	{
		sVar0 = "FM_NXT_VOTED" /* GXT: VOTED */;
	}
	return sVar0;
}

var func_431(int iParam0)//Position - 0x2E9595
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_833, 0);
}

void func_432(var uParam0, var uParam1)//Position - 0x2E95F9
{
	if (uParam0->f_4 > 16)
	{
		if (!BitTest(uParam1->f_129, 14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1->f_106, "INIT_LOBBY_LIST_SCROLL");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			MISC::SET_BIT(&(uParam1->f_129), 14);
		}
	}
}

void func_433()//Position - 0x2E964D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < Global_1057121.f_31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1057121[iVar0 /*6*/]), &(Global_4718592.f_116811)))
		{
			bVar2 = false;
		}
		iVar0++;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			iVar1 = (3 - iVar0);
			Global_1057121[iVar1 + 1 /*6*/] = { Global_1057121[iVar1 /*6*/] };
			iVar0++;
		}
		Global_1057121[0 /*6*/] = { Global_4718592.f_116811 };
		Global_1057121.f_31++;
		if (Global_1057121.f_31 > 5)
		{
			Global_1057121.f_31 = 5;
		}
	}
}

void func_434()//Position - 0x2E96F0
{
	AUDIO::SET_AUDIO_FLAG("PlayMenuMusic", true);
}

void func_435()//Position - 0x2E9715
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(0f);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(true);
	}
}

var func_436(int iParam0)//Position - 0x2E9851
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_6, iParam0);
}

int func_437(bool bParam0)//Position - 0x2E9DBE
{
	int iVar0;
	iVar0 = 1;
	if (bParam0)
	{
		iVar0 = 9;
	}
	return iVar0;
}

int func_438(var uParam0, var uParam1, bool bParam2)//Position - 0x2E9DD4
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_439(int iParam0, int iParam1, float* fParam2, bool bParam3)//Position - 0x2EA224
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_1__::func_614(iParam0);
	uVar1 = *fParam2;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(iVar0, iParam1, fParam2))
	{
		if (bParam3)
		{
		}
		return;
		*fParam2 = uVar1;
	}
	else
	{
		NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_MODIFICATION_DETECTION_REGISTRATION_HASH(iVar0, iParam1, fParam2);
	}
	if (bParam3)
	{
	}
}

struct<6> func_440(var uParam0, var uParam1, bool bParam2)//Position - 0x2EA414
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[bParam2] /*88*/];
	}
	return Global_794709.f_4[uParam1->f_107[bParam2] /*88*/];
}

int func_441(var uParam0, var uParam1, bool bParam2)//Position - 0x2EA461
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return 0;
	}
	return Global_794709.f_177589[uParam1->f_107[bParam2] /*13*/].f_1;
}

var func_442(var uParam0, var uParam1, bool bParam2)//Position - 0x2EA49F
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return BitTest(Global_998606.f_604[uParam1->f_107[bParam2] /*88*/].f_76, 17);
	}
	return BitTest(Global_794709.f_4[uParam1->f_107[bParam2] /*88*/].f_76, 17);
}

void func_443(var uParam0, var uParam1)//Position - 0x2EA5B6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1->f_106, "SET_TITLE");
	__LIB_0__::func_478("FM_NXT_J_TIT" /* GXT: Vote on the next Job */);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NXT_VCNT" /* GXT: ~1~/~1~ Votes */);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_52);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_444(var uParam0)//Position - 0x2EA5F5
{
	uParam0->f_106 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_next_job_selection");
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_106);
}

void func_445()//Position - 0x2EA612
{
	Global_1835431.f_3 = 0;
}

bool func_446()//Position - 0x2EA621
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 30);
}

int func_447(int iParam0)//Position - 0x2EBBD0
{
	int iVar0;
	iVar0 = __LIB_1__::func_555(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return __LIB_0__::func_689(iVar0, 0);
}

void func_448(bool bParam0)//Position - 0x2ED05A
{
	if (bParam0)
	{
		Global_1836571 = 1;
	}
	else
	{
		Global_1836571 = 0;
	}
}

int func_449(var uParam0, var uParam1, bool bParam2)//Position - 0x2ED355
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[bParam2] /*88*/].f_67;
	}
	return Global_794709.f_4[uParam1->f_107[bParam2] /*88*/].f_67;
}

int func_450(var uParam0, var uParam1, bool bParam2)//Position - 0x2ED3A2
{
	if (BitTest(uParam0->f_124, bParam2) && uParam1->f_107[bParam2] < 100)
	{
		return Global_998606.f_604[uParam1->f_107[bParam2] /*88*/].f_66;
	}
	return Global_794709.f_4[uParam1->f_107[bParam2] /*88*/].f_66;
}

int func_451(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2ED427
{
	char cVar0[64];
	switch (uParam0->f_1)
	{
		case 0:
			NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
			*uParam0 = 0;
			uParam0->f_1 = 1;
			break;
		case 1:
			StringCopy(&cVar0, sParam1, 64);
			StringConCat(&cVar0, sParam2, 64);
			*uParam0 = NETWORK::TITLE_TEXTURE_DOWNLOAD_REQUEST(&cVar0, sParam2, false);
			uParam0->f_1 = 2;
			break;
		case 2:
			switch (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(*uParam0))
			{
				case 1:
					return 0;
				case 0:
					uParam0->f_4 = 1;
					return 1;
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > iParam3)
					{
						if (*uParam0 != 0)
						{
							NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_4 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_452()//Position - 0x2EDC71
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 30);
}

void func_453()//Position - 0x2EDC8E
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_36.f_18), 29);
	}
}

void func_454()//Position - 0x2EDCB5
{
	struct<88> Var0;
	int iVar1;
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar1 = 2000;
	while (iVar1 <= 2017)
	{
		Global_794709.f_4[iVar1 /*88*/] = { Var0 };
		iVar1++;
	}
}

bool func_455()//Position - 0x2EDCFA
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 29);
}

void func_456(var uParam0)//Position - 0x2EDD14
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_106))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_106, 255, 255, 255, 255, 0);
	}
}

bool func_457(var uParam0)//Position - 0x2EDD36
{
	return BitTest(uParam0->f_129, 8);
}

int func_458()//Position - 0x2EDD45
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	return Global_1853348[iVar0 /*834*/].f_8;
}

int func_459(var uParam0)//Position - 0x2EDEEB
{
	if (uParam0->f_131 == 6)
	{
		return 1;
	}
	return 0;
}

void func_460(var uParam0)//Position - 0x2EDF00
{
	int iVar0;
	if (uParam0->f_131 < 6)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1057830[iVar0 /*5*/] != -1)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(Global_1057830[iVar0 /*5*/]);
			}
			Global_1057830[iVar0 /*5*/] = -1;
			uParam0->f_131++;
			iVar0++;
		}
	}
}

int func_461(int iParam0, var uParam1)//Position - 0x2EDFB2
{
	if (*uParam1 != iParam0)
	{
		if (*uParam1 != 0)
		{
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(*uParam1);
		}
		uParam1->f_2 = 0;
		*uParam1 = iParam0;
		uParam1->f_1 = 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (uParam1->f_2)
	{
		return 1;
	}
	else
	{
		if (iParam0 == -1)
		{
			uParam1->f_2 = 1;
			return 1;
		}
		if (!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(iParam0) && uParam1->f_1 == 0)
		{
			uParam1->f_1 = NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
		}
		else if (NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(iParam0))
		{
			if (NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(iParam0))
			{
				uParam1->f_2 = 1;
				return 1;
			}
			else
			{
				uParam1->f_2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_462()//Position - 0x2EE051
{
	HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
	HUD::REMOVE_MULTIPLAYER_BANK_CASH();
}

void func_463(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2EE292
{
	bool bVar0;
	if (uParam2->f_686 == 0)
	{
		return;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		bVar0 = false;
		while (bVar0 < uParam2->f_693)
		{
			if (BitTest(uParam2->f_686, bVar0))
			{
				if (iParam3 && uParam2->f_694 != bVar0)
				{
				}
				else if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "OVERRIDE_RESPAWN_TEXT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
					if (uParam2->f_694 == bVar0)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			bVar0++;
		}
	}
}

void func_464()//Position - 0x2EE399
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (!BitTest(Global_1853348[iVar0 /*834*/].f_7, 0))
	{
		MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_7), 0);
	}
}

void func_465(int iParam0)//Position - 0x2EE3C8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Global_1853348[iVar0 /*834*/].f_8 = iParam0;
}

void func_466(var uParam0)//Position - 0x2EE3E3
{
	MISC::SET_BIT(&(uParam0->f_129), 8);
}

bool func_467(var uParam0)//Position - 0x2EE3F5
{
	return BitTest(uParam0->f_105, 1);
}

bool func_468(var uParam0)//Position - 0x2EE403
{
	return BitTest(uParam0->f_129, 6);
}

void func_469(bool bParam0)//Position - 0x2EE629
{
	if (bParam0)
	{
		if (Global_1836598 == 0)
		{
			Global_1836598 = 1;
		}
	}
}

int func_470(var uParam0)//Position - 0x2EEAFC
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if ((uParam0[iVar0 /*13*/])->f_6 && !MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*13*/])->f_8))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((uParam0[iVar0 /*13*/])->f_8, false);
			if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((uParam0[iVar0 /*13*/])->f_8))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

void func_471(int iParam0, int iParam1, struct<16> Param2, bool bParam3)//Position - 0x2EED71
{
	struct<20> Var0;
	int iVar1;
	Var0.f_0 = -1566383297;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_19 = bParam3;
	if (bParam3)
	{
		Var0.f_3 = { Param2 };
	}
	iVar1 = __LIB_1__::func_276(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 20, iVar1);
	}
}

void func_472()//Position - 0x2EEEAA
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1057166.f_127 = 0;
	}
}

void func_473(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2EF1AF
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1576) || Global_2678393.f_1576 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam4)
	{
		if (bParam0)
		{
			Global_2678393.f_1576 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
			Global_2678393.f_1577 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2678393.f_1576 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
		}
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_4 = iParam2;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_5 = iParam3;
		Global_2678393.f_1579 = iParam1;
	}
	else if (!bParam4)
	{
	}
}

bool func_474(int iParam0, var uParam1)//Position - 0x2EFE00
{
	return __LIB_0__::func_649(&(uParam1->f_69[Global_4980736.f_36356[iParam0 /*134*/].f_85 /*2*/]));
}

void func_475(int iParam0, float fParam1)//Position - 0x2F009B
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -280224876;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = fParam1;
	iVar1 = __LIB_1__::func_276(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_476()//Position - 0x2F0299
{
	if (Global_4718592.f_623 != 0 && Global_1659814.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_477()//Position - 0x2F02BF
{
	if (BitTest(Global_4718592.f_162497, 12))
	{
		INTERIOR::ENABLE_STADIUM_PROBES_THIS_FRAME(1);
	}
}

void func_478(int iParam0)//Position - 0x2F0590
{
	if (Global_1836358 != iParam0)
	{
		Global_1836358 = iParam0;
	}
}

void func_479()//Position - 0x2F19FA
{
	MISC::CLEAR_AREA(0f, 0f, 0f, 99999f, true, false, false, false);
}

int func_480(char* sParam0, char* sParam1)//Position - 0x2F20D6
{
	if (STREAMING::IS_IPL_ACTIVE(sParam0))
	{
		STREAMING::REMOVE_IPL(sParam0);
	}
	if (!STREAMING::IS_IPL_ACTIVE(sParam1))
	{
		STREAMING::REQUEST_IPL(sParam1);
		return 0;
	}
	return 1;
}

int func_481()//Position - 0x2F21F4
{
	if (__LIB_2__::func_369())
	{
		return 1;
	}
	if (__LIB_4__::func_658())
	{
		return 1;
	}
	if (__LIB_0__::func_706() && !__LIB_9__::func_794())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !Global_2726594)
	{
		return 1;
	}
	return 0;
}

void func_482()//Position - 0x2F22E5
{
	if (BitTest(Global_4718592.f_162495, 19))
	{
		Global_2726594 = 1;
		STREAMING::LOAD_GLOBAL_WATER_FILE(1);
	}
}

int func_483(var uParam0)//Position - 0x2F2B41
{
	struct<4> Var0;
	int iVar1;
	STREAMING::REQUEST_IPL("xs_arena_interior_vip");
	if (!INTERIOR::IS_VALID_INTERIOR(*uParam0))
	{
		Var0 = { __LIB_6__::func_296(194) };
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
		if (iVar1 == 0)
		{
		}
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			*uParam0 = iVar1;
			INTERIOR::CAP_INTERIOR(*uParam0, false);
			INTERIOR::DISABLE_INTERIOR(*uParam0, false);
			__LIB_6__::func_295(194, 0);
			INTERIOR::REFRESH_INTERIOR(*uParam0);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(*uParam0);
			return 0;
		}
		else
		{
			return 0;
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(*uParam0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(*uParam0);
		return 0;
	}
	if (Global_262145.f_2339 > 0 && Global_295821)
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_READY(*uParam0))
	{
		if (INTERIOR::IS_VALID_INTERIOR(*uParam0))
		{
			if (!Global_1836151)
			{
				if (Global_262145.f_25825 /* Tunable: -1208911595 */)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam0, "VIP_XMAS_DECS");
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam0, "VIP_XMAS_DECS");
				}
				INTERIOR::REFRESH_INTERIOR(*uParam0);
				Global_1836151 = 1;
			}
		}
	}
	return 1;
}

void func_484(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7)//Position - 0x2F2CF3
{
	if (__LIB_0__::func_155(0))
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam3);
	}
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam1, fParam2);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam4);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam5);
	if (fParam6 == 0f)
	{
	}
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bParam7);
}

void func_485(int iParam0)//Position - 0x2F3D68
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	iVar1 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
	if ((iVar0 + iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (iVar0 + iParam0), 0);
	}
}

void func_486(var uParam0, var uParam1, int iParam2)//Position - 0x2F45BA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (OBJECT::DOES_PICKUP_EXIST((*uParam0)[iVar0]))
		{
			if (!OBJECT::DOES_PICKUP_OBJECT_EXIST((*uParam0)[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
				{
					HUD::REMOVE_BLIP(uParam1[iVar0]);
				}
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)//Position - 0x2F4BB5
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_0 == 1210723500)
		{
			if (Var0.f_2 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Var0.f_2)))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Var0.f_2)));
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (Var0.f_4 > -1)
						{
							if (Var0.f_4 == 255)
							{
								ENTITY::RESET_ENTITY_ALPHA(iVar1);
							}
							else
							{
								ENTITY::SET_ENTITY_ALPHA(iVar1, Var0.f_4, false);
							}
						}
						if (Var0.f_5 > -1)
						{
							if (Var0.f_5 == 255)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iVar1, false)))
								{
									ENTITY::RESET_ENTITY_ALPHA(PED::GET_VEHICLE_PED_IS_IN(iVar1, false));
								}
								if (Var0.f_3 > 0)
								{
									iVar2 = Var0.f_3;
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2))
									{
										iVar3 = NETWORK::NET_TO_VEH(iVar2);
										ENTITY::RESET_ENTITY_ALPHA(iVar3);
									}
								}
							}
							else
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iVar1, false)))
								{
									ENTITY::SET_ENTITY_ALPHA(PED::GET_VEHICLE_PED_IS_IN(iVar1, false), Var0.f_5, false);
								}
								if (Var0.f_3 > 0)
								{
									iVar4 = Var0.f_3;
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar4))
									{
										iVar5 = NETWORK::NET_TO_VEH(iVar4);
										ENTITY::SET_ENTITY_ALPHA(iVar5, Var0.f_5, false);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_488(int iParam0, var uParam1)//Position - 0x2F5178
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_0 == -407754957)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				MISC::SET_BIT(&(uParam1->f_4), Var0.f_2);
			}
		}
	}
}

void func_489(int iParam0, int* iParam1, var uParam2)//Position - 0x2F51AA
{
	struct<6> Var0;
	int iVar1;
	Var0.f_5 = 1065353216;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (Var0.f_0 == 921411241)
		{
			if (Var0.f_2 < 0 || Var0.f_2 >= 32)
			{
				return;
			}
			uParam2->f_566 = -1;
			if (Var0.f_1 != __LIB_0__::func_160())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1)))
				{
					iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1);
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (Var0.f_3)
				{
					case 0:
						MISC::CLEAR_BIT(iParam1, Var0.f_2);
						break;
					case 1:
						MISC::CLEAR_BIT(&(iParam1->f_1), Var0.f_2);
						break;
					case 2:
						MISC::CLEAR_BIT(&(iParam1->f_2), Var0.f_2);
						break;
					case -1:
						MISC::CLEAR_BIT(iParam1, Var0.f_2);
						MISC::CLEAR_BIT(&(iParam1->f_1), Var0.f_2);
						break;
					}
				}
			}
	}
}

void func_490(int iParam0, int* iParam1, var uParam2)//Position - 0x2F528B
{
	struct<6> Var0;
	Var0.f_5 = 1065353216;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (Var0.f_0 == 1466307086)
		{
			if (Var0.f_2 < 0 || Var0.f_2 >= 32)
			{
				return;
			}
			if (Var0.f_3 == 3)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(iParam1->f_3), Var0.f_2);
				}
				return;
			}
			else
			{
				MISC::CLEAR_BIT(&(iParam1->f_3), Var0.f_2);
			}
			uParam2->f_566 = -1;
			if (Var0.f_1 != __LIB_0__::func_160())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1)))
				{
					uParam2->f_566 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1);
				}
			}
			uParam2->f_237[Var0.f_2] = Var0.f_5;
			__LIB_0__::func_579(&(uParam2->f_2[Var0.f_2 /*2*/]));
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (Var0.f_3)
				{
					case 0:
						MISC::SET_BIT(iParam1, Var0.f_2);
						break;
					case 1:
						MISC::SET_BIT(&(iParam1->f_1), Var0.f_2);
						break;
					case 2:
						MISC::SET_BIT(&(iParam1->f_2), Var0.f_2);
						break;
					case -1:
						MISC::SET_BIT(iParam1, Var0.f_2);
						MISC::SET_BIT(&(iParam1->f_1), Var0.f_2);
						MISC::SET_BIT(&(iParam1->f_2), Var0.f_2);
						break;
				}
				__LIB_0__::func_495(&(iParam1->f_38[Var0.f_2 /*2*/]), 0, 0);
			}
		}
	}
}

void func_491()//Position - 0x2F5C9B
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(84, -1);
	if (iVar0 >= 100)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 3);
	}
}

void func_492(bool bParam0)//Position - 0x2F5CE6
{
	Global_1964901++;
	if (!bParam0)
	{
		Global_1964901++;
	}
}

void func_493(bool bParam0)//Position - 0x2F5D33
{
	Global_1964901.f_1++;
	if (!bParam0)
	{
		Global_1964901.f_1++;
	}
}

void func_494()//Position - 0x2F5D88
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(86, -1);
	if (iVar0 >= 100)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 0);
	}
}

void func_495()//Position - 0x2F5DD3
{
	Global_1964901.f_2 = 0;
}

void func_496(int iParam0)//Position - 0x2F67DF
{
	if (__LIB_13__::func_7(iParam0))
	{
		MISC::SET_BIT(&Global_103905, 3);
	}
}

int func_497(int iParam0)//Position - 0x2F69C5
{
	int iVar0;
	iVar0 = (iParam0 / 5);
	return __LIB_11__::func_298(Global_262145.f_26527 /* Tunable: 1983871601 */, (Global_262145.f_26525 /* Tunable: -1477900497 */ + (Global_262145.f_26526 /* Tunable: -378954823 */ * iVar0)));
}

void func_498()//Position - 0x2F6AE3
{
	int iVar0;
	iVar0 = __LIB_13__::func_26() + 1;
	if (iVar0 <= Global_262145.f_26533 /* Tunable: 2022949430 */)
	{
		__LIB_1__::func_39(24888, iVar0, -1);
	}
}

void func_499(int iParam0, bool bParam1)//Position - 0x2FA3D3
{
	__LIB_0__::func_521(__LIB_0__::func_868(iParam0), bParam1, -1);
}

int func_500(int iParam0)//Position - 0x2FA5DE
{
	switch (__LIB_13__::func_37(iParam0))
	{
		case joaat("taxi"):
			return 450;
		case joaat("bulldozer"):
			return 451;
		case joaat("speedo2"):
			return 452;
		case joaat("trash2"):
			return 453;
		case joaat("barracks2"):
			return 454;
		case joaat("mixer2"):
			return 455;
		case joaat("dune2"):
			return 456;
		case joaat("tractor"):
			return 457;
		default:
	}
	return -1;
}

void func_501()//Position - 0x2FA9CA
{
	Global_1964901.f_2++;
}

int func_502(int iParam0)//Position - 0x2FAB70
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_26577 /* Tunable: 1686476350 */;
		case 2:
			return Global_262145.f_26578 /* Tunable: 2142030988 */;
		case 3:
			return Global_262145.f_26579 /* Tunable: -1323126917 */;
		case 4:
			return Global_262145.f_26580 /* Tunable: 1775509715 */;
		case 5:
			return Global_262145.f_26581 /* Tunable: 1738021979 */;
		case 6:
			return Global_262145.f_26582 /* Tunable: -1769866706 */;
		case 7:
			return Global_262145.f_26583 /* Tunable: -2059741280 */;
		case 8:
			return Global_262145.f_26584 /* Tunable: 81286873 */;
		case 9:
			return Global_262145.f_26585 /* Tunable: 849556082 */;
		case 10:
			return Global_262145.f_26586 /* Tunable: -640392676 */;
		case 11:
			return Global_262145.f_26587 /* Tunable: -375127621 */;
		case 12:
			return Global_262145.f_26588 /* Tunable: -2054014571 */;
		case 13:
			return Global_262145.f_26589 /* Tunable: -1756701434 */;
		case 14:
			return Global_262145.f_26590 /* Tunable: -1592987510 */;
		case 15:
			return Global_262145.f_26591 /* Tunable: -1293118387 */;
		case 16:
			return Global_262145.f_26592 /* Tunable: 1419204524 */;
		case 17:
			return Global_262145.f_26593 /* Tunable: 1579117244 */;
		case 18:
			return Global_262145.f_26594 /* Tunable: 1834879289 */;
		case 19:
			return Global_262145.f_26595 /* Tunable: 2139925910 */;
		case 20:
			return Global_262145.f_26596 /* Tunable: -1569950015 */;
		default:
	}
	return 0;
}

void func_503()//Position - 0x2FACC0
{
	Global_1964901 = 0;
}

int func_504(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2FACDA
{
	var uVar0;
	if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()) || Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1)
		{
			if (iParam0 < 11)
			{
				uVar0 = Global_262145.f_26610 /* Tunable: -1639073645 */;
			}
			else if (iParam0 < 20)
			{
				uVar0 = Global_262145.f_26611 /* Tunable: -1600235871 */;
			}
			else
			{
				uVar0 = Global_262145.f_26612 /* Tunable: -1722088755 */;
			}
		}
		else if (bParam2)
		{
			if (iParam0 < 11)
			{
				uVar0 = Global_262145.f_26613 /* Tunable: 1759297304 */;
			}
			else if (iParam0 >= 11 && iParam0 < 20)
			{
				uVar0 = Global_262145.f_26614 /* Tunable: 1961252947 */;
			}
			else
			{
				uVar0 = Global_262145.f_26615 /* Tunable: 2115922451 */;
			}
		}
		else if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26607 /* Tunable: -437496823 */;
		}
		else if (iParam0 >= 11 && iParam0 < 20)
		{
			uVar0 = Global_262145.f_26608 /* Tunable: 1929703188 */;
		}
		else
		{
			uVar0 = Global_262145.f_26609 /* Tunable: -35920742 */;
		}
	}
	else if (bParam1)
	{
		if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26601 /* Tunable: 1686109621 */;
		}
		else if (iParam0 < 20)
		{
			uVar0 = Global_262145.f_26602 /* Tunable: 1773044870 */;
		}
		else
		{
			uVar0 = Global_262145.f_26603 /* Tunable: 929198240 */;
		}
	}
	else if (bParam2)
	{
		if (iParam0 < 11)
		{
			uVar0 = Global_262145.f_26604 /* Tunable: -947133412 */;
		}
		else if (iParam0 >= 11 && iParam0 < 20)
		{
			uVar0 = Global_262145.f_26605 /* Tunable: -365712093 */;
		}
		else
		{
			uVar0 = Global_262145.f_26606 /* Tunable: -1183497877 */;
		}
	}
	else if (iParam0 < 11)
	{
		uVar0 = Global_262145.f_26598 /* Tunable: 1202560047 */;
	}
	else if (iParam0 >= 11 && iParam0 < 20)
	{
		uVar0 = Global_262145.f_26599 /* Tunable: 1480447191 */;
	}
	else
	{
		uVar0 = Global_262145.f_26600 /* Tunable: -1774733417 */;
	}
	return uVar0;
}

int func_505()//Position - 0x2FAF83
{
	return Global_262145.f_26055 /* Tunable: 1124488103 */;
}

int func_506(int iParam0)//Position - 0x2FB091
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_26035 /* Tunable: 674189051 */;
			break;
		case 2:
			return Global_262145.f_26036 /* Tunable: -639061393 */;
			break;
		case 3:
			return Global_262145.f_26037 /* Tunable: -864413806 */;
			break;
		case 4:
			return Global_262145.f_26038 /* Tunable: -5571085 */;
			break;
		case 5:
			return Global_262145.f_26039 /* Tunable: -387919777 */;
			break;
		case 6:
			return Global_262145.f_26040 /* Tunable: 1859181605 */;
			break;
		case 7:
			return Global_262145.f_26041 /* Tunable: 1499377985 */;
			break;
		case 8:
			return Global_262145.f_26042 /* Tunable: -2091743960 */;
			break;
		case 9:
			return Global_262145.f_26043 /* Tunable: 1944905309 */;
			break;
		case 10:
			return Global_262145.f_26044 /* Tunable: 2102273135 */;
			break;
		case 11:
			return Global_262145.f_26045 /* Tunable: -1935949046 */;
			break;
		case 12:
			return Global_262145.f_26046 /* Tunable: -2105364772 */;
			break;
		case 13:
			return Global_262145.f_26047 /* Tunable: -1873720711 */;
			break;
		case 14:
			return Global_262145.f_26048 /* Tunable: -468717071 */;
			break;
		case 15:
			return Global_262145.f_26049 /* Tunable: 1906838823 */;
			break;
		case 16:
			return Global_262145.f_26050 /* Tunable: -948160310 */;
			break;
		case 17:
			return Global_262145.f_26051 /* Tunable: -689023058 */;
			break;
		case 18:
			return Global_262145.f_26052 /* Tunable: 212157211 */;
			break;
		case 19:
			return Global_262145.f_26053 /* Tunable: -1164730631 */;
			break;
		case 20:
			return Global_262145.f_26054 /* Tunable: 187939468 */;
			break;
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x2FB240
{
	switch (iParam0)
	{
		case 1:
			return 30;
			break;
		case 2:
			return 31;
			break;
		case 3:
			return 32;
			break;
		case 4:
			return 33;
			break;
		case 5:
			return 34;
			break;
		case 6:
			return 35;
			break;
		case 7:
			return 36;
			break;
		case 8:
			return 37;
			break;
		case 9:
			return 38;
			break;
		case 10:
			return 39;
			break;
		case 11:
			return 40;
			break;
		case 12:
			return 41;
			break;
		case 13:
			return 42;
			break;
		case 14:
			return 43;
			break;
		case 15:
			return 44;
			break;
		case 16:
			return 45;
			break;
		case 17:
			return 46;
			break;
		case 18:
			return 47;
			break;
		case 19:
			return 48;
			break;
		case 20:
			return 49;
			break;
	}
	return 30;
}

int func_508()//Position - 0x2FB3A1
{
	if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()) || Global_262145.f_25922 /* Tunable: 1068308345 */)
	{
		return 0;
	}
	return Global_262145.f_26597 /* Tunable: 1676995406 */;
}

int func_509(int iParam0)//Position - 0x2FB406
{
	switch (iParam0)
	{
		case 0:
			return 7921;
		case 1:
			return 7922;
		case 2:
			return 7923;
		case 3:
			return 7924;
		case 4:
			return 7925;
		case 5:
			return 7926;
		case 6:
			return 7927;
		case 7:
			return 7928;
		case 8:
			return 7929;
		default:
	}
	return 0;
}

int func_510(int iParam0)//Position - 0x2FB4F8
{
	switch (iParam0)
	{
		case 0:
			return 7912;
		case 1:
			return 7913;
		case 2:
			return 7914;
		case 3:
			return 7915;
		case 4:
			return 7916;
		case 5:
			return 7917;
		case 6:
			return 7918;
		case 7:
			return 7919;
		case 8:
			return 7920;
		default:
	}
	return 0;
}

int func_511(int iParam0)//Position - 0x2FB596
{
	switch (iParam0)
	{
		case joaat("monster3"):
			return 7930;
		case joaat("monster4"):
			return 7931;
		case joaat("monster5"):
			return 7932;
		case joaat("cerberus"):
			return 7933;
		case joaat("cerberus2"):
			return 7934;
		case joaat("cerberus3"):
			return 7935;
		case joaat("bruiser"):
			return 7936;
		case joaat("bruiser2"):
			return 7937;
		case joaat("bruiser3"):
			return 7938;
		case joaat("slamvan4"):
			return 7939;
		case joaat("slamvan5"):
			return 7940;
		case joaat("slamvan6"):
			return 7941;
		case joaat("brutus"):
			return 7942;
		case joaat("brutus2"):
			return 7943;
		case joaat("brutus3"):
			return 7944;
		case joaat("scarab"):
			return 7945;
		case joaat("scarab2"):
			return 7946;
		case joaat("scarab3"):
			return 7947;
		case joaat("dominator4"):
			return 7948;
		case joaat("dominator5"):
			return 7949;
		case joaat("dominator6"):
			return 7950;
		case joaat("impaler2"):
			return 7951;
		case joaat("impaler3"):
			return 7952;
		case joaat("impaler4"):
			return 7953;
		case joaat("issi4"):
			return 7954;
		case joaat("issi5"):
			return 7955;
		case joaat("issi6"):
			return 7956;
		case joaat("imperator"):
			return 7957;
		case joaat("imperator2"):
			return 7958;
		case joaat("imperator3"):
			return 7959;
		case joaat("zr380"):
			return 7960;
		case joaat("zr3802"):
			return 7961;
		case joaat("zr3803"):
			return 7962;
		case joaat("deathbike"):
			return 7963;
		case joaat("deathbike2"):
			return 7964;
		case joaat("deathbike3"):
			return 7965;
		default:
	}
	return 13122;
}

int func_512(bool bParam0)//Position - 0x2FD36D
{
	if (Global_1574964)
	{
		return 0;
	}
	if (__LIB_0__::func_155(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_29, 1))
	{
		return 1;
	}
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_513(var uParam0, var uParam1)//Position - 0x2FD3A5
{
	int iVar0;
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || __LIB_0__::func_155(0)) || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_5[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_5[iVar0], false);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (BitTest(uParam1->f_1, 0))
		{
			if (uParam1->f_633[iVar0] > -1)
			{
				AUDIO::STOP_SOUND(uParam1->f_633[iVar0]);
				AUDIO::RELEASE_SOUND_ID(uParam1->f_633[iVar0]);
				uParam1->f_633[iVar0] = -1;
			}
			if (uParam1->f_666[iVar0] > -1)
			{
				AUDIO::STOP_SOUND(uParam1->f_666[iVar0]);
				AUDIO::RELEASE_SOUND_ID(uParam1->f_666[iVar0]);
				uParam1->f_666[iVar0] = -1;
			}
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam1->f_1), 0);
}

void func_514()//Position - 0x300213
{
	__LIB_1__::func_640(-1f);
}

void func_515()//Position - 0x300E60
{
	__LIB_11__::func_619(Global_2703735.f_924, -1, 0);
}

void func_516()//Position - 0x3016C2
{
	MISC::SET_BIT(&(Global_2703735.f_3576), 2);
}

int func_517(var uParam0)//Position - 0x307403
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 694;
				break;
			case 1:
				return 695;
				break;
			case 2:
				return 696;
				break;
		}
	}
	return 13122;
}

bool func_518(var uParam0, int iParam1, int iParam2)//Position - 0x30C5A6
{
	*uParam0 = joaat("AMMO_SPACE_ROCKET");
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_PISTOL_FMJ");
					break;
				case 1:
					*uParam0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
					break;
				case 2:
					*uParam0 = joaat("AMMO_PISTOL_INCENDIARY");
					break;
				case 3:
					*uParam0 = joaat("AMMO_PISTOL_TRACER");
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SMG_FMJ");
					break;
				case 1:
					*uParam0 = joaat("AMMO_SMG_HOLLOWPOINT");
					break;
				case 2:
					*uParam0 = joaat("AMMO_SMG_INCENDIARY");
					break;
				case 3:
					*uParam0 = joaat("AMMO_SMG_TRACER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_RIFLE_ARMORPIERCING");
					break;
				case 1:
					*uParam0 = joaat("AMMO_RIFLE_FMJ");
					break;
				case 2:
					*uParam0 = joaat("AMMO_RIFLE_INCENDIARY");
					break;
				case 3:
					*uParam0 = joaat("AMMO_RIFLE_TRACER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_MG_ARMORPIERCING");
					break;
				case 1:
					*uParam0 = joaat("AMMO_MG_FMJ");
					break;
				case 2:
					*uParam0 = joaat("AMMO_MG_INCENDIARY");
					break;
				case 3:
					*uParam0 = joaat("AMMO_MG_TRACER");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SNIPER_ARMORPIERCING");
					break;
				case 1:
					*uParam0 = joaat("AMMO_SNIPER_EXPLOSIVE");
					break;
				case 2:
					*uParam0 = joaat("AMMO_SNIPER_FMJ");
					break;
				case 3:
					*uParam0 = joaat("AMMO_SNIPER_INCENDIARY");
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SNIPER_ARMORPIERCING");
					break;
				case 1:
					*uParam0 = joaat("AMMO_SNIPER_FMJ");
					break;
				case 2:
					*uParam0 = joaat("AMMO_SNIPER_INCENDIARY");
					break;
				case 3:
					*uParam0 = joaat("AMMO_SNIPER_TRACER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
					break;
				case 1:
					*uParam0 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
					break;
				case 2:
					*uParam0 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
					break;
				case 3:
					*uParam0 = joaat("AMMO_SHOTGUN_INCENDIARY");
					break;
			}
			break;
	}
	return *uParam0 != joaat("AMMO_SPACE_ROCKET");
}

int func_519(int iParam0)//Position - 0x30CA46
{
	if (__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return 201;
				break;
			case joaat("WEAPON_PISTOL"):
				return 259;
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				return 269;
				break;
			case joaat("WEAPON_APPISTOL"):
				return 289;
				break;
			case joaat("WEAPON_MICROSMG"):
				return 299;
				break;
			case joaat("WEAPON_SMG"):
				return 309;
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				return 328;
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				return 337;
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				return 10886;
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return 346;
				break;
			case joaat("WEAPON_MG"):
				return 355;
				break;
			case joaat("WEAPON_COMBATMG"):
				return 364;
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				return 382;
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return 392;
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return 410;
				break;
			case joaat("WEAPON_STUNGUN"):
				return 420;
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				return 429;
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				return 438;
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				return 447;
				break;
			case joaat("WEAPON_RPG"):
				return 454;
				break;
			case joaat("WEAPON_MINIGUN"):
				return 463;
				break;
			case joaat("WEAPON_GRENADE"):
				return 471;
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				return 480;
				break;
			case joaat("WEAPON_STICKYBOMB"):
				return 488;
				break;
			case joaat("WEAPON_MOLOTOV"):
				return 497;
				break;
			case joaat("WEAPON_PETROLCAN"):
				return 588;
				break;
			case joaat("WEAPON_NIGHTSTICK"):
				return 208;
				break;
			case joaat("WEAPON_PISTOL50"):
				return 279;
				break;
			case joaat("WEAPON_ASSAULTMG"):
				return 373;
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				return 319;
				break;
			case joaat("WEAPON_ASSAULTSNIPER"):
				return 441;
				break;
			case joaat("WEAPON_HAMMER"):
				return 236;
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				return 401;
				break;
			case joaat("WEAPON_BOTTLE"):
				return 1739;
				break;
			case joaat("WEAPON_SNSPISTOL"):
				return 1749;
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				return 10876;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 10896;
				break;
			case joaat("WEAPON_GUSENBERG"):
				return 10906;
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 11173;
				break;
			case joaat("WEAPON_DAGGER"):
				return 11163;
				break;
			case joaat("WEAPON_MUSKET"):
				return 11193;
				break;
			case joaat("WEAPON_FIREWORK"):
				return 11183;
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				return 11271;
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 11281;
				break;
			case joaat("WEAPON_PROXMINE"):
				return 11297;
				break;
			case joaat("WEAPON_HOMINGLAUNCHER"):
				return 11305;
				break;
			case joaat("WEAPON_HATCHET"):
				return 11289;
				break;
			case joaat("WEAPON_COMBATPDW"):
				return 11315;
				break;
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 11332;
				break;
			case joaat("WEAPON_KNUCKLE"):
				return 11322;
				break;
			case joaat("WEAPON_MACHETE"):
				return 11340;
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				return 11350;
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				return 11378;
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				return 11368;
				break;
			case joaat("WEAPON_FLASHLIGHT"):
				return 11386;
				break;
			case joaat("WEAPON_AUTOSHOTGUN"):
				return 11457;
				break;
			case joaat("WEAPON_MINISMG"):
				return 11483;
				break;
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return 11473;
				break;
			case joaat("WEAPON_BATTLEAXE"):
				return 11501;
				break;
			case joaat("WEAPON_PIPEBOMB"):
				return 11491;
				break;
			case joaat("WEAPON_POOLCUE"):
				return 11502;
				break;
			case joaat("WEAPON_WRENCH"):
				return 229;
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				return 328;
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				return 337;
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				return 364;
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				return 438;
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				return 259;
				break;
			case joaat("WEAPON_SMG_MK2"):
				return 309;
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				return 10896;
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				return 11281;
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				return 382;
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				return 11406;
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				return 1749;
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				return 10886;
				break;
			case joaat("WEAPON_RAYPISTOL"):
				return 12385;
				break;
			case joaat("WEAPON_RAYCARBINE"):
				return 12395;
				break;
			case joaat("WEAPON_RAYMINIGUN"):
				return 12405;
				break;
			case joaat("WEAPON_NAVYREVOLVER"):
				return 12836;
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				return 12826;
				break;
			case joaat("WEAPON_MILITARYRIFLE"):
				return 12996;
				break;
			case joaat("WEAPON_GADGETPISTOL"):
				return 12986;
				break;
			case joaat("WEAPON_COMBATSHOTGUN"):
				return 12976;
				break;
			case joaat("WEAPON_EMPLAUNCHER"):
				return 13027;
				break;
			case joaat("WEAPON_FERTILIZERCAN"):
				return 13040;
				break;
			case joaat("WEAPON_STUNGUN_MP"):
				return 13049;
				break;
			case joaat("WEAPON_METALDETECTOR"):
				return 13101;
				break;
			case joaat("WEAPON_TACTICALRIFLE"):
				return 13111;
				break;
			case joaat("WEAPON_PRECISIONRIFLE"):
				return 13121;
				break;
			}
	}
	return 487;
}

int func_520(var uParam0)//Position - 0x30D0E3
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 725;
				break;
			case 1:
				return 726;
				break;
			case 2:
				return 727;
				break;
			case 3:
				return 728;
				break;
			case 4:
				return 729;
				break;
			}
	}
	return 13122;
}

int func_521(int iParam0)//Position - 0x30D205
{
	switch (iParam0)
	{
		case 0:
			return 255;
		case 1:
			return 256;
		case 2:
			return 257;
		case 3:
			return 258;
		case 4:
			return 259;
		case 5:
			return 260;
		case 6:
			return 261;
		case 7:
			return 262;
		case 8:
			return 305;
		case 9:
			return 306;
		case 10:
			return 307;
		case 11:
			return 308;
		case 12:
			return 309;
		case 13:
			return 310;
		case 14:
			return 311;
		case 15:
			return 312;
		case 16:
			return 313;
		case 17:
			return 314;
		case 18:
			return 315;
		case 19:
			return 316;
		case 20:
			return 317;
		case 21:
			return 318;
		case 22:
			return 319;
		case 23:
			return 320;
		case 24:
			return 321;
		case 25:
			return 322;
		case 26:
			return 323;
		case 27:
			return 345;
		case 28:
			return 346;
		case 29:
			return 347;
		case 30:
			return 348;
		case 31:
			return 349;
		case 32:
			return 350;
		case 33:
			return 351;
		case 34:
			return 352;
		case 35:
			return 353;
		case 36:
			return 354;
		case 37:
			return 355;
		case 38:
			return 356;
		case 39:
			return 357;
		case 40:
			return 358;
		case 41:
			return 359;
		case 42:
			return 360;
		case 43:
			return 361;
		case 44:
			return 362;
		case 45:
			return 363;
		case 46:
			return 364;
		default:
	}
	return 255;
}

void func_522(int iParam0, bool bParam1)//Position - 0x30D784
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1028[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1028[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

char* func_523(int iParam0)//Position - 0x30D7D3
{
	char* sVar0;
	sVar0 = "MPWeaponsGang1_small";
	if (iParam0 == 4)
	{
	}
	return sVar0;
}

char* func_524(int iParam0)//Position - 0x30D7EA
{
	char* sVar0;
	sVar0 = "W_AR_AssaultRifle";
	if (iParam0 == 4)
	{
	}
	return sVar0;
}

char* func_525(int iParam0)//Position - 0x30D801
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return "HLTH_REGEN2" /* GXT: Max Health */;
			break;
	}
	return sVar0;
}

int func_526(int iParam0)//Position - 0x30D8C7
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 4;
			break;
		case 5:
			iVar0 = 5;
			break;
		case 6:
			iVar0 = 6;
			break;
		case 7:
			iVar0 = 7;
			break;
		case 8:
			iVar0 = 8;
			break;
		case 9:
			iVar0 = 9;
			break;
		case 10:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_527(int iParam0)//Position - 0x30D963
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return 13;
			break;
	}
	return iVar0;
}

var func_528(int iParam0)//Position - 0x30D9DE
{
	var uVar0;
	uVar0 = Global_2825435.f_1028[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

int func_529(int iParam0)//Position - 0x30DA45
{
	switch (iParam0)
	{
		case 1:
			return 19;
			break;
		case 2:
			return 39;
			break;
		case 3:
			return 59;
			break;
		case 4:
			return 79;
			break;
		case 5:
			return 99;
			break;
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x30F8D8
{
	switch (iParam0)
	{
		case 17:
		case 19:
		case 22:
		case 27:
		case 62:
		case 63:
		case 29:
		case 30:
		case 33:
		case 68:
		case 47:
		case 51:
			return 0;
			break;
		case 18:
			return 3;
			break;
		case 35:
			return 12;
			break;
		case 20:
			return 15;
			break;
		case 32:
			return 18;
			break;
		case 70:
			return 21;
			break;
		case 23:
			return 24;
			break;
		case 37:
			return 27;
			break;
		case 61:
			return 30;
			break;
		case 21:
			return 33;
			break;
		case 36:
			return 36;
			break;
		case 67:
			return 39;
			break;
		case 38:
			return 42;
			break;
		case 40:
			return 45;
			break;
		case 41:
			return 48;
			break;
		case 28:
			return 51;
			break;
		case 69:
			return 84;
			break;
		case 43:
			return 54;
			break;
		case 42:
			return 57;
			break;
		case 26:
			return 6;
			break;
		case 39:
			return 60;
			break;
		case 64:
			return 63;
			break;
		case 50:
			return 66;
			break;
		case 53:
			return 69;
			break;
		case 31:
			return 72;
			break;
		case 52:
			return 75;
			break;
		case 44:
			return 78;
			break;
		case 24:
			return 81;
			break;
		case 66:
			return 9;
			break;
	}
	return 0;
}

void func_531(int iParam0)//Position - 0x31268A
{
	if (iParam0 == -1 || iParam0 == 172)
	{
		return;
	}
	MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_40[(iParam0 / 32)]), (iParam0 % 32));
}

void func_532(int iParam0, bool bParam1)//Position - 0x3126C7
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1056[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1056[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

var func_533(int iParam0)//Position - 0x312733
{
	var uVar0;
	uVar0 = Global_2825435.f_1056[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

int func_534(var uParam0)//Position - 0x31278E
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 741;
				break;
			case 1:
				return 742;
				break;
			case 2:
				return 743;
				break;
			case 3:
				return 744;
				break;
			case 4:
				return 745;
				break;
			case 5:
				return 746;
				break;
			case 6:
				return 747;
				break;
			case 7:
				return 748;
				break;
			case 8:
				return 749;
				break;
			case 9:
				return 750;
				break;
			case 10:
				return 751;
				break;
		}
	}
	return 13122;
}

int func_535(int iParam0)//Position - 0x3128D0
{
	switch (iParam0)
	{
		case 28:
			return 1;
			break;
		case 29:
			return 1;
			break;
		case 30:
			return 1;
			break;
		case 31:
			return 4;
			break;
		case 32:
			return 6;
			break;
		case 33:
			return 1;
			break;
		case 34:
			return 1;
			break;
		case 35:
			return 10;
			break;
		case 36:
			return 1;
			break;
		case 37:
			return 1;
			break;
		case 38:
			return 12;
			break;
		case 39:
			return 14;
			break;
		case 40:
			return 16;
			break;
		case 41:
			return 18;
			break;
		case 42:
			return 20;
			break;
		case 43:
			return 8;
			break;
		case 44:
			return 1;
			break;
		case 45:
			return 1;
			break;
		case 46:
			return 7;
			break;
		case 47:
			return 5;
			break;
		case 48:
			return 21;
			break;
		case 49:
			return 19;
			break;
		case 50:
			return 17;
			break;
		case 51:
			return 0;
			break;
		case 52:
			return 0;
			break;
		case 53:
			return 0;
			break;
		case 54:
			return 0;
			break;
		case 55:
			return 9;
			break;
		case 56:
			return 13;
			break;
		case 57:
			return 11;
			break;
		case 58:
			return 15;
			break;
		case 59:
			return 23;
			break;
		case 60:
			return 25;
			break;
		case 91:
			return 1;
			break;
		case 92:
			return 1;
			break;
		case 93:
			return 1;
			break;
		case 94:
			return 1;
			break;
		case 95:
			return 1;
			break;
		case 96:
			return 1;
			break;
		case 97:
			return 1;
			break;
		case 98:
			return 1;
			break;
		case 99:
			return 1;
			break;
		case 100:
			return 1;
			break;
		case 101:
			return 1;
			break;
		case 102:
			return 1;
			break;
		case 103:
			return 1;
			break;
		case 104:
			return 1;
			break;
		case 105:
			return 1;
			break;
		case 106:
			return 1;
			break;
		case 107:
			return 1;
			break;
		case 108:
			return 1;
			break;
		case 109:
			return 1;
			break;
		case 110:
			return 1;
			break;
		case 111:
			return 1;
			break;
		case 112:
			return 1;
			break;
		case 113:
			return 1;
			break;
		case 114:
			return 1;
			break;
		case 115:
			return 1;
			break;
		case 116:
			return 1;
			break;
		case 117:
			return 1;
			break;
		case 118:
			return 1;
			break;
		case 119:
			return 1;
			break;
		case 120:
			return 1;
			break;
		case 121:
			return 1;
			break;
		case 122:
			return 1;
			break;
		case 61:
			return 1;
			break;
		case 62:
			return 1;
			break;
		case 63:
			return 6;
			break;
		case 64:
			return 1;
			break;
		case 65:
			return 1;
			break;
		case 66:
			return 22;
			break;
		case 67:
			return 14;
			break;
		case 68:
			return 8;
			break;
		case 69:
			return 1;
			break;
		case 70:
			return 20;
			break;
		case 71:
			return 10;
			break;
		case 72:
			return 1;
			break;
		case 73:
			return 1;
			break;
		case 74:
			return 18;
			break;
		case 75:
			return 16;
			break;
		case 76:
			return 12;
			break;
		case 77:
			return 24;
			break;
		case 78:
			return 26;
			break;
		case 80:
			return 1;
			break;
		case 81:
			return 1;
			break;
		case 82:
			return 1;
			break;
		case 83:
			return 1;
			break;
		case 84:
			return 1;
			break;
		case 85:
			return 1;
			break;
		case 86:
			return 1;
			break;
		case 87:
			return 1;
			break;
		case 88:
			return 1;
			break;
		case 89:
			return 1;
			break;
		case 90:
			return 1;
			break;
		case 149:
			return 1;
			break;
		case 150:
			return 1;
			break;
		case 151:
			return 1;
			break;
		case 152:
			return 1;
			break;
		case 153:
			return 1;
			break;
		case 154:
			return 1;
			break;
		case 155:
			return 1;
			break;
		case 156:
			return 1;
			break;
		case 157:
			return 1;
			break;
		case 158:
			return 1;
			break;
		case 159:
			return 1;
			break;
		case 160:
			return 1;
			break;
		case 161:
			return 1;
			break;
		case 162:
			return 1;
			break;
		case 163:
			return 1;
			break;
		case 164:
			return 1;
			break;
		case 165:
			return 1;
			break;
		case 166:
			return 1;
			break;
		case 167:
			return 1;
			break;
		case 168:
			return 1;
			break;
		case 169:
			return 1;
			break;
		case 170:
			return 1;
			break;
		case 171:
			return 1;
			break;
	}
	return 0;
}

void func_536(int iParam0, bool bParam1)//Position - 0x3160D8
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1069[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1069[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

int func_537(int iParam0)//Position - 0x316127
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			return 7;
			break;
		case 2:
			return 7;
			break;
		case 3:
			return 8;
			break;
		case 4:
			return 7;
			break;
		case 6:
			return 8;
			break;
		case 7:
			return 7;
			break;
		case 8:
			return 7;
			break;
		case 9:
			return 1;
			break;
		case 10:
			return 8;
			break;
		case 11:
			return 8;
			break;
		case 12:
			return 5;
			break;
		case 13:
			return 1;
			break;
		case 14:
			return 3;
			break;
		case 15:
			return 5;
			break;
		case 5:
			return 5;
			break;
		case 16:
			return 6;
			break;
		case 17:
			return 6;
			break;
		case 18:
			return 6;
			break;
		case 19:
			return 6;
			break;
	}
	return iVar0;
}

char* func_538(int iParam0)//Position - 0x316236
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "CREWUNLOCK_1" /* GXT: Crew Male Color T-Shirts */;
			break;
		case 2:
			return "CREWUNLOCK_2" /* GXT: Crew Female Color T-Shirts */;
			break;
		case 3:
			return "CREWUNLOCK_3" /* GXT: Crew Challenges */;
			break;
		case 4:
			return "CREWUNLOCK_4" /* GXT: Crew Primary Color Vehicle Paint */;
			break;
		case 6:
			return "CREWUNLOCK_5" /* GXT: Crew Parachute Smoke */;
			break;
		case 7:
			return "CREWUNLOCK_6" /* GXT: Crew Male Head Gear */;
			break;
		case 8:
			return "CREWUNLOCK_7" /* GXT: Crew Female Head Gear */;
			break;
		case 9:
			return "CREWUNLOCK_8" /* GXT: Crew Tattoo Emblem */;
			break;
		case 10:
			return "CREWUNLOCK_9" /* GXT: Crew Male Fatigues */;
			break;
		case 11:
			return "CREWUNLOCK_10" /* GXT: Crew Female Fatigues */;
			break;
		case 12:
			return "CREWUNLOCK_11" /* GXT: Crew Colored Tire Smoke */;
			break;
		case 13:
			return "CREWUNLOCK_14" /* GXT: Crew Tattoo Motto */;
			break;
		case 14:
			return "CREWUNLOCK_15" /* GXT: Crew Golden Tint */;
			break;
		case 15:
			return "CREWUNLOCK_16" /* GXT: Crew Emblem On Vehicles */;
			break;
		case 5:
			return "CREWUNLOCK_17" /* GXT: Crew Secondary Color Vehicle Paint */;
			break;
		case 16:
			return "CREWUNLOCK_MASK1" /* GXT: Black Pig Mask */;
			break;
		case 17:
			return "CREWUNLOCK_MASK2" /* GXT: Bone Skull Mask */;
			break;
		case 18:
			return "CREWUNLOCK_MASK3" /* GXT: White Carnival Mask */;
			break;
		case 19:
			return "CREWUNLOCK_MASK4" /* GXT: White Monster Mask */;
			break;
	}
	return sVar0;
}

var func_539(int iParam0)//Position - 0x3163AC
{
	var uVar0;
	uVar0 = Global_2825435.f_1069[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

void func_540()//Position - 0x31C798
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (Global_1057830[iVar0 /*5*/] != -1)
		{
			NETWORK::TEXTURE_DOWNLOAD_RELEASE(Global_1057830[iVar0 /*5*/]);
		}
		Global_1057830[iVar0 /*5*/] = -1;
		iVar0++;
	}
}

void func_541(var uParam0, var uParam1)//Position - 0x31C7D4
{
	int iVar0;
	if (__LIB_9__::func_794())
	{
		iVar0 = 0;
		while (iVar0 <= 199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				OBJECT::DELETE_OBJECT(uParam0[iVar0]);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				OBJECT::DELETE_OBJECT(uParam0[iVar0]);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			OBJECT::DELETE_OBJECT(uParam1[iVar0]);
		}
		iVar0++;
	}
}

void func_542()//Position - 0x31D4CE
{
	if (__LIB_11__::func_66(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_485(25);
	}
}

void func_543(bool bParam0)//Position - 0x31EFBD
{
	int iVar0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1965654[iVar0] = -1;
		Global_1965657[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		Global_1965849[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_1965912[iVar0] = 0;
		Global_1966006[iVar0] = -1;
		iVar0++;
	}
	Global_1965625 = 0;
	Global_1965644 = 0;
	Global_1965626 = 0;
	Global_1965627 = 0;
	Global_1965645 = 0;
	Global_1965628 = 0;
	Global_1965629 = 0;
	Global_1965646 = 0;
	Global_1965647 = 0;
	Global_1965630 = 0;
	Global_1965631 = 0;
	Global_1965648 = 0;
	Global_1965649 = 0;
	Global_1965632 = 0;
	Global_1965633 = 0;
	Global_1965634 = 0;
	Global_1965635 = 0;
	Global_1965678 = 0;
	Global_1965679 = 0;
	Global_1965680 = 0;
	Global_1965846 = -1;
	Global_1965847 = -1;
	Global_1965848 = -1;
	__LIB_0__::func_579(&Global_1966037);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts");
}

void func_544(int iParam0)//Position - 0x31F0C2
{
	bool bVar0;
	bVar0 = false;
	if (iParam0 > -1)
	{
		if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(iParam0))
		{
			MISC::REMOVE_POP_MULTIPLIER_AREA(iParam0, bVar0);
		}
	}
}

void func_545()//Position - 0x31F0E4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (BitTest(Global_103906[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(Global_103906[iVar0]), 1);
		}
		if (BitTest(Global_103906[iVar0], 0))
		{
			MISC::CLEAR_BIT(&(Global_103906[iVar0]), 0);
		}
		StringCopy(&(Global_103392[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_546(int iParam0)//Position - 0x31F88B
{
	return Global_2715699.f_1.f_845[iParam0 /*57*/].f_45;
}

int func_547(int iParam0, int iParam1)//Position - 0x31FE71
{
	if (!__LIB_0__::func_770(Global_4718592.f_168757))
	{
		return 1;
	}
	if (Global_4718592.f_600[iParam0] != 1 || Global_4718592.f_600[iParam0] == 0)
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_548()//Position - 0x31FEC1
{
	MISC::CLEAR_BIT(&(Global_2714762.f_669.f_1), 2);
}

bool func_549()//Position - 0x31FED7
{
	return BitTest(Global_2714762.f_669.f_1, 2);
}

void func_550()//Position - 0x31FEEA
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 14);
}

void func_551()//Position - 0x31FF7D
{
	int iVar0;
	struct<2> Var1;
	struct<3> Var2;
	struct<6> Var3;
	struct<5> Var4;
	var uVar5;
	Var4 = 4;
	Var4.f_1 = 6;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Global_1057166.f_30[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Global_1057166.f_11[iVar0] = 0;
		Global_1057166.f_131[iVar0 /*6*/] = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1057166.f_111[iVar0 /*5*/] = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_1057166.f_55[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1057166.f_55.f_14[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1057166.f_55.f_17[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1057166.f_55.f_27[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Global_1057166.f_55.f_32[iVar0] = 0;
		Global_1057166.f_55.f_39[iVar0] = 0;
		iVar0++;
	}
	Global_1057166.f_55.f_23 = 1;
	Global_1057166.f_55.f_24 = 0;
	Global_1057166.f_55.f_25 = 0;
	Global_1057166.f_55.f_46 = 0;
	Global_1057166.f_55.f_31 = 0;
	Global_1057166.f_55.f_26 = 0;
	Global_1057166.f_126 = uVar5;
	Global_1057166 = { Var1 };
	Global_1057166.f_2 = { Var1 };
	Global_1057166.f_8 = -1;
	Global_1057166.f_9 = -1;
	Global_1057166.f_103 = 0;
	Global_1057166.f_106 = 0;
	Global_1057166.f_107 = 0;
	Global_1057166.f_108 = 0;
	Global_1057166.f_122 = 0;
	Global_1057166.f_123 = 0;
	Global_1057166.f_125 = 0;
	Global_1057166.f_53 = 0;
	Global_1057166.f_4 = 0;
	Global_1057166.f_5 = 0;
	Global_1057166.f_6 = 0;
	Global_1057166.f_7 = 0;
	Global_1057166.f_10 = 0;
	Global_1057166.f_52 = 0;
	Global_1057166.f_54 = 0;
	Global_1057166.f_104 = 0;
	Global_1057166.f_105 = 0;
	Global_1057166.f_128 = { Var2 };
	Global_1057166.f_124 = 0;
	Global_1057166.f_110 = -1;
	Global_1057166.f_127 = 0;
}

void func_552()//Position - 0x321194
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_264(iVar1, 0, 1))
		{
			NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
		}
		iVar0++;
	}
}

void func_553()//Position - 0x2F8C
{
	if ((((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_survival_creator")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_creator")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_lts_creator")) > 0)
	{
		Global_1574607 = 1;
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}
}

int func_554(int iParam0)//Position - 0x3CDA
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 5);
	}
	return 0;
}

int func_555(int iParam0)//Position - 0x3D3F
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 31);
	}
	return 0;
}

void func_556()//Position - 0x40C9
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	CLOCK::GET_POSIX_TIME(&uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	Global_4718592.f_168709 = (((iVar5 + iVar4 * 60) + iVar3 * 60 * 60) + iVar2 * 24 * 60 * 60);
}

int func_557()//Position - 0x4174
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	CLOCK::GET_POSIX_TIME(&uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar6 = (((iVar5 + iVar4 * 60) + iVar3 * 60 * 60) + iVar2 * 24 * 60 * 60);
	return (iVar6 - Global_4718592.f_168709);
}

void func_558(int iParam0, int iParam1)//Position - 0x42A2
{
	var uVar0;
	int iVar1;
	uVar0 = Global_1659575[iParam0];
	iVar1 = uVar0;
	STATS::STAT_SET_INT(iVar1, iParam1, true);
}

struct<129> func_559()//Position - 0x4CBD
{
	struct<129> Var0;
	int iVar1;
	Var0 = 8;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		Var0[iVar1 /*16*/] = { Global_4718592.f_116553[iVar1 /*16*/] };
		iVar1++;
	}
	return Var0;
}

void func_560(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x567E
{
	StringCopy(sParam0, sParam1, 16);
	StringIntConCat(sParam0, bParam2, 16);
	if (iParam3 != -1)
	{
		StringConCat(sParam0, "_", 16);
		StringIntConCat(sParam0, iParam3, 16);
	}
}

void func_561(char* sParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5)//Position - 0x574D
{
	int iVar0;
	if (*iParam2 == 0)
	{
		return;
	}
	__LIB_12__::func_372(iParam3, bParam4);
	if (*uParam1 == fParam5 && *iParam3 == 0)
	{
		return;
	}
	if (*iParam3 == 0 && *uParam1 != fParam5)
	{
		*iParam3 = DATAFILE::DATADICT_CREATE_ARRAY(*iParam2, sParam0);
		if (fParam5 != -2340845.8f)
		{
			iVar0 = 0;
			while (iVar0 <= (bParam4 - 1))
			{
				DATAFILE::DATAARRAY_ADD_FLOAT(*iParam3, fParam5);
				iVar0++;
			}
		}
	}
	DATAFILE::DATAARRAY_ADD_FLOAT(*iParam3, *uParam1);
}

void func_562(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x57CF
{
	int iVar0;
	if (*iParam2 == 0)
	{
		return;
	}
	__LIB_12__::func_372(iParam3, bParam4);
	if (iParam1 == iParam5 && *iParam3 == 0)
	{
		return;
	}
	if (*iParam3 == 0 && iParam1 != iParam5)
	{
		*iParam3 = DATAFILE::DATADICT_CREATE_ARRAY(*iParam2, sParam0);
		if (iParam5 != -2340845)
		{
			iVar0 = 0;
			while (iVar0 <= (bParam4 - 1))
			{
				DATAFILE::DATAARRAY_ADD_INT(*iParam3, iParam5);
				iVar0++;
			}
		}
	}
	DATAFILE::DATAARRAY_ADD_INT(*iParam3, iParam1);
}

void func_563(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x584D
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*iParam1 == iParam3)
	{
		return;
	}
	DATAFILE::DATADICT_SET_INT(*iParam2, sParam0, *iParam1);
}

void func_564(char* sParam0, var uParam1, int iParam2, float fParam3)//Position - 0x6333
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*uParam1 == fParam3)
	{
		return;
	}
	DATAFILE::DATADICT_SET_FLOAT(*iParam2, sParam0, *uParam1);
}

void func_565(char* sParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x754B
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	if (*iParam3 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		__LIB_12__::func_372(uParam4[iVar0], bParam5);
		StringCopy(&cVar1, sParam0, 32);
		StringConCat(&cVar1, "_BS", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		if ((*uParam1)[iVar0] == 0 && (*uParam4)[iVar0] == 0)
		{
		}
		else
		{
			if ((*uParam4)[iVar0] == 0 || bParam5 == 0)
			{
				(*uParam4)[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(*iParam3, &cVar1);
				iVar2 = 0;
				while (iVar2 <= (bParam5 - 1))
				{
					DATAFILE::DATAARRAY_ADD_INT((*uParam4)[iVar0], 0);
					iVar2++;
				}
			}
			DATAFILE::DATAARRAY_ADD_INT((*uParam4)[iVar0], (*uParam1)[iVar0]);
		}
		iVar0++;
	}
}

void func_566(var uParam0, var uParam1)//Position - 0x7604
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	*uParam1 = DATAFILE::DATADICT_CREATE_DICT(*uParam0, "surv");
	DATAFILE::DATADICT_SET_INT(*uParam1, "wave", Global_4718592.f_170137);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvtst", Global_4718592.f_170137.f_2728);
	DATAFILE::DATADICT_SET_INT(*uParam1, "sbits", Global_4718592.f_170137.f_2808);
	iVar1 = 1;
	while (iVar1 <= Global_4718592.f_170137)
	{
		StringCopy(&cVar6, "wKil", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1[iVar1]);
		StringCopy(&cVar6, "wveq", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2729[iVar1]);
		StringCopy(&cVar6, "wvss", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2773[iVar1]);
		StringCopy(&cVar6, "wdif", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2751[iVar1]);
		iVar2 = 0;
		while (iVar2 <= 2)
		{
			StringCopy(&cVar6, "sqd", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_23[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "pps", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_108[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "sqdH", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_278[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "sqdA", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_363[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "sqdAC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_448[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "sqdC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_533[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "sqdMN", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_193[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "hvyN", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_618[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "hvyH", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_703[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "hvyA", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_788[iVar1 /*4*/][iVar2]);
			StringCopy(&cVar6, "hvyMN", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "d", 16);
			StringIntConCat(&cVar6, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_873[iVar1 /*4*/][iVar2]);
			iVar2++;
		}
		StringCopy(&cVar6, "lVeh", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_958[iVar1]);
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar6, "vped", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "v", 16);
			StringIntConCat(&cVar6, iVar3, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_980[iVar1 /*5*/][iVar3]);
			StringCopy(&cVar6, "vmn", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "v", 16);
			StringIntConCat(&cVar6, iVar3, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1086[iVar1 /*5*/][iVar3]);
			StringCopy(&cVar6, "vHP", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "v", 16);
			StringIntConCat(&cVar6, iVar3, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1192[iVar1 /*5*/][iVar3]);
			StringCopy(&cVar6, "vC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "v", 16);
			StringIntConCat(&cVar6, iVar3, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1298[iVar1 /*5*/][iVar3]);
			iVar3++;
		}
		StringCopy(&cVar6, "sHeli", 16);
		StringIntConCat(&cVar6, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2440[iVar1]);
		iVar4 = 0;
		while (iVar4 <= 2)
		{
			StringCopy(&cVar6, "airMN", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "a", 16);
			StringIntConCat(&cVar6, iVar4, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2462[iVar1 /*4*/][iVar4]);
			StringCopy(&cVar6, "airH", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "a", 16);
			StringIntConCat(&cVar6, iVar4, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2547[iVar1 /*4*/][iVar4]);
			StringCopy(&cVar6, "airC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "a", 16);
			StringIntConCat(&cVar6, iVar4, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2632[iVar1 /*4*/][iVar4]);
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			StringCopy(&cVar6, "wepTyp", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1404[iVar1 /*5*/][iVar5]);
			StringCopy(&cVar6, "wepC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1510[iVar1 /*5*/][iVar5]);
			StringCopy(&cVar6, "wepT", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1616[iVar1 /*5*/][iVar5]);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 9)
		{
			StringCopy(&cVar6, "ldWTyp", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1722[iVar1 /*11*/][iVar5]);
			StringCopy(&cVar6, "ldWwepC", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1954[iVar1 /*11*/][iVar5]);
			StringCopy(&cVar6, "ldWwepT", 16);
			StringIntConCat(&cVar6, iVar1, 16);
			StringConCat(&cVar6, "w", 16);
			StringIntConCat(&cVar6, iVar5, 16);
			DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2186[iVar1 /*11*/][iVar5]);
			iVar5++;
		}
		DATAFILE::DATADICT_SET_INT(*uParam1, "swwon", Global_4718592.f_170137.f_2418[iVar1]);
		iVar1++;
	}
	StringCopy(&cVar6, "sqdMN", 16);
	StringIntConCat(&cVar6, 0, 16);
	StringConCat(&cVar6, "d", 16);
	StringIntConCat(&cVar6, 0, 16);
	DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_193[0 /*4*/][0]);
	StringCopy(&cVar6, "vmn", 16);
	StringIntConCat(&cVar6, 0, 16);
	StringConCat(&cVar6, "v", 16);
	StringIntConCat(&cVar6, 0, 16);
	DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_1086[0 /*5*/][0]);
	StringCopy(&cVar6, "airMN", 16);
	StringIntConCat(&cVar6, 0, 16);
	StringConCat(&cVar6, "a", 16);
	StringIntConCat(&cVar6, 0, 16);
	DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_2462[0 /*4*/][0]);
	StringCopy(&cVar6, "hvyMN", 16);
	StringIntConCat(&cVar6, 0, 16);
	StringConCat(&cVar6, "d", 16);
	StringIntConCat(&cVar6, 0, 16);
	DATAFILE::DATADICT_SET_INT(*uParam1, &cVar6, Global_4718592.f_170137.f_873[0 /*4*/][0]);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&cVar6, "sbndsv", 16);
		StringIntConCat(&cVar6, iVar0, 16);
		DATAFILE::DATADICT_SET_VECTOR(*uParam1, &cVar6, Global_4718592.f_170137.f_2717[iVar0 /*3*/]);
		iVar0++;
	}
	DATAFILE::DATADICT_SET_FLOAT(*uParam1, "sbndsr", Global_4718592.f_170137.f_2724);
	DATAFILE::DATADICT_SET_FLOAT(*uParam1, "sbndsh", Global_4718592.f_170137.f_2725);
	DATAFILE::DATADICT_SET_FLOAT(*uParam1, "sbndsbo", Global_4718592.f_170137.f_2726);
	DATAFILE::DATADICT_SET_INT(*uParam1, "sbndst", Global_4718592.f_170137.f_2727);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvalv", Global_4718592.f_170137.f_2795);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvaav", Global_4718592.f_170137.f_2796);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvscb", Global_4718592.f_170137.f_2798);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvpcb", Global_4718592.f_170137.f_2799);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvlvcb", Global_4718592.f_170137.f_2802);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvlmcb", Global_4718592.f_170137.f_2803);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvavcb", Global_4718592.f_170137.f_2804);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvamcb", Global_4718592.f_170137.f_2805);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvdcb", Global_4718592.f_170137.f_2800);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvpmcb", Global_4718592.f_170137.f_2801);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvhcb", Global_4718592.f_170137.f_2806);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvhmcb", Global_4718592.f_170137.f_2807);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wvhow", Global_4718592.f_170137.f_2797);
}

void func_567(var uParam0, var* uParam1)//Position - 0xA2A5
{
	var* uVar0;
	int iVar1;
	uVar0 = DATAFILE::DATADICT_CREATE_ARRAY(uParam1, "plrPH");
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		DATAFILE::DATAARRAY_ADD_STRING(uVar0, uParam0[iVar1 /*6*/]);
		iVar1++;
	}
}

void func_568(char* sParam0, char* sParam1, int iParam2, var uParam3, bool bParam4)//Position - 0xA2D7
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (*uParam3 == 0 || bParam4 == 0)
	{
		*uParam3 = DATAFILE::DATADICT_CREATE_ARRAY(*iParam2, sParam0);
	}
	DATAFILE::DATAARRAY_ADD_STRING(*uParam3, sParam1);
}

void func_569(var* uParam0, var uParam1)//Position - 0xA338
{
	DATAFILE::DATADICT_SET_INT(*uParam0, "vehId", *uParam1);
	DATAFILE::DATADICT_SET_INT(*uParam0, "vehIdS", uParam1->f_1);
	DATAFILE::DATADICT_SET_INT(*uParam0, "vehSeat", uParam1->f_2);
	DATAFILE::DATADICT_SET_INT(*uParam0, "bit1", uParam1->f_3);
}

void func_570(var* uParam0)//Position - 0xCF94
{
	int iVar0;
	uParam0->f_1901 = DATAFILE::DATADICT_CREATE_DICT(uParam0->f_1, "door");
	DATAFILE::DATADICT_SET_INT(uParam0->f_1901, "no", Global_4980736.f_34610);
	uParam0->f_1902 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "loc");
	uParam0->f_1912 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "fopen");
	uParam0->f_1903 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "model");
	uParam0->f_1913 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "lock");
	uParam0->f_1914 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "swing");
	uParam0->f_1916 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "udrle");
	uParam0->f_1917 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "udtem");
	uParam0->f_1918 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "udrat");
	uParam0->f_1915 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "swingu");
	uParam0->f_1921 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "audst");
	uParam0->f_1922 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "aurt");
	uParam0->f_1919 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "uaudst");
	uParam0->f_1920 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "uaurt");
	uParam0->f_1923 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "lfp");
	uParam0->f_1924 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dtime");
	uParam0->f_1925 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "mid");
	uParam0->f_1904 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dbs");
	uParam0->f_1907 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dcoid");
	uParam0->f_1926 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "fcz");
	uParam0->f_1927 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "foz");
	uParam0->f_1928 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "org");
	uParam0->f_1906 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dle");
	uParam0->f_1929 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dird");
	uParam0->f_1930 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dirdv");
	uParam0->f_1931 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dirud");
	uParam0->f_1932 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "dirduv");
	uParam0->f_1933 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1901, "ORNLO");
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_34610 - 1))
	{
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1902, Global_4980736.f_34611[iVar0 /*50*/]);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1912, Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_2);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1903, Global_4980736.f_34611[iVar0 /*50*/].f_3);
		DATAFILE::DATAARRAY_ADD_BOOL(uParam0->f_1913, Global_4980736.f_34611[iVar0 /*50*/].f_41);
		DATAFILE::DATAARRAY_ADD_BOOL(uParam0->f_1914, Global_4980736.f_34611[iVar0 /*50*/].f_42);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1916, Global_4980736.f_34611[iVar0 /*50*/].f_37);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1917, Global_4980736.f_34611[iVar0 /*50*/].f_38);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1918, Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_2);
		DATAFILE::DATAARRAY_ADD_BOOL(uParam0->f_1915, Global_4980736.f_34611[iVar0 /*50*/].f_39);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1921, Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_4);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1922, Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_3);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1919, Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_4);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1920, Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_3);
		DATAFILE::DATAARRAY_ADD_BOOL(uParam0->f_1923, Global_4980736.f_34611[iVar0 /*50*/].f_44);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1924, Global_4980736.f_34611[iVar0 /*50*/].f_43);
		DATAFILE::DATAARRAY_ADD_BOOL(uParam0->f_1925, Global_4980736.f_34611[iVar0 /*50*/].f_40);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1904, Global_4980736.f_34611[iVar0 /*50*/].f_33);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1907, Global_4980736.f_34611[iVar0 /*50*/].f_35);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1926, Global_4980736.f_34611[iVar0 /*50*/].f_4);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1927, Global_4980736.f_34611[iVar0 /*50*/].f_5);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1928, Global_4980736.f_34611[iVar0 /*50*/].f_34);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1906, Global_4980736.f_34611[iVar0 /*50*/].f_46);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1929, Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_5);
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1930, Global_4980736.f_34611[iVar0 /*50*/].f_6[0 /*11*/].f_6);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1931, Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_5);
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1932, Global_4980736.f_34611[iVar0 /*50*/].f_6[1 /*11*/].f_6);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1933, Global_4980736.f_34611[iVar0 /*50*/].f_45);
		iVar0++;
	}
}

void func_571(var* uParam0)//Position - 0x106B2
{
	int iVar0;
	uParam0->f_1860 = DATAFILE::DATADICT_CREATE_DICT(uParam0->f_1, "otzone");
	uParam0->f_1861 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otvo");
	uParam0->f_1862 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otvt");
	uParam0->f_1863 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otbs");
	uParam0->f_1864 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otpg");
	uParam0->f_1865 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otrw");
	uParam0->f_1866 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1860, "otpl");
	DATAFILE::DATADICT_SET_INT(uParam0->f_1860, "otz", Global_4718592.f_169028);
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_169028 - 1))
	{
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1861, Global_4718592.f_169029[iVar0 /*11*/][0 /*3*/]);
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1862, Global_4718592.f_169029[iVar0 /*11*/][1 /*3*/]);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1863, Global_4718592.f_169029[iVar0 /*11*/].f_7);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1864, Global_4718592.f_169029[iVar0 /*11*/].f_8);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1865, Global_4718592.f_169029[iVar0 /*11*/].f_10);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1866, Global_4718592.f_169029[iVar0 /*11*/].f_9);
		iVar0++;
	}
}

void func_572(var* uParam0)//Position - 0x10801
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	uParam0->f_8378 = DATAFILE::DATADICT_CREATE_DICT(uParam0->f_1, "ptemp");
	DATAFILE::DATADICT_SET_INT(uParam0->f_8378, "no", Global_4718592.f_168703);
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_168703 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_8332[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_8378, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_8343[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_8378, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_8354[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_8378, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_8365[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_8378, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (Global_4718592.f_166222[iVar0 /*248*/].f_182[iVar1] != 0)
			{
				DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_8332[iVar0], Global_4718592.f_166222[iVar0 /*248*/][iVar1 /*3*/]);
				DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_8343[iVar0], Global_4718592.f_166222[iVar0 /*248*/].f_91[iVar1 /*3*/]);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_8354[iVar0], Global_4718592.f_166222[iVar0 /*248*/].f_182[iVar1]);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_8365[iVar0], Global_4718592.f_166222[iVar0 /*248*/].f_213[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_573(var* uParam0)//Position - 0x113C1
{
	int iVar0;
	uParam0->f_2546 = DATAFILE::DATADICT_CREATE_DICT(uParam0->f_1, "usj" /* GXT: Stunt Jump */);
	DATAFILE::DATADICT_SET_INT(uParam0->f_2546, "no", Global_4718592.f_115311);
	uParam0->f_2547 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_2546, "vto");
	uParam0->f_2548 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_2546, "vld");
	uParam0->f_2549 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_2546, "vcm");
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_115311 - 1))
	{
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2547, Global_4718592.f_115312[iVar0 /*9*/]);
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2548, Global_4718592.f_115312[iVar0 /*9*/].f_3);
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2549, Global_4718592.f_115312[iVar0 /*9*/].f_6);
		iVar0++;
	}
}

int func_574(int iParam0)//Position - 0x1241B
{
	if (iParam0 == joaat("lts_prop_lts_offroad_tyres01"))
	{
		return joaat("prop_offroad_tyres01");
	}
	else if (iParam0 == joaat("lts_prop_lts_elecbox_24"))
	{
		return joaat("prop_elecbox_24");
	}
	else if (iParam0 == joaat("lts_prop_lts_elecbox_24b"))
	{
		return joaat("prop_elecbox_24b");
	}
	else if (iParam0 == joaat("lts_prop_lts_ramp_01"))
	{
		return joaat("prop_mp_ramp_01_tu");
	}
	else if (iParam0 == joaat("lts_prop_lts_ramp_02"))
	{
		return joaat("prop_mp_ramp_02_tu");
	}
	else if (iParam0 == joaat("lts_prop_lts_ramp_03"))
	{
		return joaat("prop_mp_ramp_03_tu");
	}
	return iParam0;
}

void func_575(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x13117
{
	DATAFILE::DATAARRAY_ADD_INT(*uParam1, *uParam0);
	DATAFILE::DATAARRAY_ADD_FLOAT(*uParam2, uParam0->f_1);
	DATAFILE::DATAARRAY_ADD_FLOAT(*uParam3, uParam0->f_2);
	DATAFILE::DATAARRAY_ADD_FLOAT(*uParam4, uParam0->f_3);
	DATAFILE::DATAARRAY_ADD_FLOAT(*uParam5, uParam0->f_4);
	DATAFILE::DATAARRAY_ADD_FLOAT(*uParam6, uParam0->f_5);
	DATAFILE::DATAARRAY_ADD_INT(*uParam7, uParam0->f_6);
	DATAFILE::DATAARRAY_ADD_INT(*uParam8, uParam0->f_7);
	DATAFILE::DATAARRAY_ADD_INT(*uParam9, uParam0->f_8);
}

void func_576(var uParam0, var uParam1, var uParam2)//Position - 0x13181
{
	DATAFILE::DATAARRAY_ADD_INT(*uParam1, *uParam0);
	DATAFILE::DATAARRAY_ADD_INT(*uParam2, uParam0->f_1);
}

bool func_577(bool bParam0, int iParam1, int iParam2)//Position - 0x1319E
{
	if (bParam0 > iParam2)
	{
		return iParam2;
	}
	else if (bParam0 < iParam1)
	{
		return iParam1;
	}
	return bParam0;
}

void func_578(var* uParam0)//Position - 0x16053
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_78574 - 1))
		{
			if (Global_4980736.f_78578[iVar0 /*450*/].f_393 > -1 && Global_4980736.f_78578[iVar0 /*450*/].f_393 == iVar1)
			{
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1432, Global_4980736.f_93429[iVar1 /*45*/]);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1433, Global_4980736.f_93429[iVar1 /*45*/].f_1);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1434, Global_4980736.f_93429[iVar1 /*45*/].f_2);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1435, Global_4980736.f_93429[iVar1 /*45*/].f_3);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1436, Global_4980736.f_93429[iVar1 /*45*/].f_4);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1437, Global_4980736.f_93429[iVar1 /*45*/].f_5);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1438, Global_4980736.f_93429[iVar1 /*45*/].f_6);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1439, Global_4980736.f_93429[iVar1 /*45*/].f_7);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1440, Global_4980736.f_93429[iVar1 /*45*/].f_8);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1441, Global_4980736.f_93429[iVar1 /*45*/].f_9);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1442, Global_4980736.f_93429[iVar1 /*45*/].f_10);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1443, Global_4980736.f_93429[iVar1 /*45*/].f_11);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1444, Global_4980736.f_93429[iVar1 /*45*/].f_12);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1445, Global_4980736.f_93429[iVar1 /*45*/].f_13);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1446, Global_4980736.f_93429[iVar1 /*45*/].f_14);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1447, Global_4980736.f_93429[iVar1 /*45*/].f_15);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1448, Global_4980736.f_93429[iVar1 /*45*/].f_16);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1449, Global_4980736.f_93429[iVar1 /*45*/].f_17);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1450, Global_4980736.f_93429[iVar1 /*45*/].f_21);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1451, Global_4980736.f_93429[iVar1 /*45*/].f_22);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1452, Global_4980736.f_93429[iVar1 /*45*/].f_26);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1453, Global_4980736.f_93429[iVar1 /*45*/].f_27);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1454, Global_4980736.f_93429[iVar1 /*45*/].f_28);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1455, Global_4980736.f_93429[iVar1 /*45*/].f_29);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1456, Global_4980736.f_93429[iVar1 /*45*/].f_30);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1457, Global_4980736.f_93429[iVar1 /*45*/].f_31);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1458, Global_4980736.f_93429[iVar1 /*45*/].f_32);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1459, Global_4980736.f_93429[iVar1 /*45*/].f_33);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1460, Global_4980736.f_93429[iVar1 /*45*/].f_34);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1461, Global_4980736.f_93429[iVar1 /*45*/].f_35);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1462, Global_4980736.f_93429[iVar1 /*45*/].f_36);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1463, Global_4980736.f_93429[iVar1 /*45*/].f_37);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1464, Global_4980736.f_93429[iVar1 /*45*/].f_38);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1465, Global_4980736.f_93429[iVar1 /*45*/].f_39);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1466, Global_4980736.f_93429[iVar1 /*45*/].f_40);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1467, Global_4980736.f_93429[iVar1 /*45*/].f_41);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1468, Global_4980736.f_93429[iVar1 /*45*/].f_42);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1469, Global_4980736.f_93429[iVar1 /*45*/].f_43);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1470, Global_4980736.f_93429[iVar1 /*45*/].f_44);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1471, Global_4980736.f_93429[iVar1 /*45*/].f_23);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1472, Global_4980736.f_93429[iVar1 /*45*/].f_24);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1473, Global_4980736.f_93429[iVar1 /*45*/].f_18);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1474, Global_4980736.f_93429[iVar1 /*45*/].f_19);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1475, Global_4980736.f_93429[iVar1 /*45*/].f_20);
				DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1476, Global_4980736.f_93429[iVar1 /*45*/].f_25);
			}
			else
			{
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_579(var* uParam0)//Position - 0x1D5BC
{
	int iVar0;
	uParam0->f_1934 = DATAFILE::DATADICT_CREATE_DICT(uParam0->f_1, "cover");
	DATAFILE::DATADICT_SET_INT(uParam0->f_1934, "no", Global_4980736.f_36212);
	uParam0->f_1935 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1934, "loc");
	uParam0->f_1936 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1934, "dir");
	uParam0->f_1937 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1934, "use");
	uParam0->f_1938 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1934, "high");
	uParam0->f_1939 = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_1934, "arc");
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_36212 - 1))
	{
		DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_1935, Global_4980736.f_36213[iVar0 /*7*/]);
		DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_1936, Global_4980736.f_36213[iVar0 /*7*/].f_3);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1937, Global_4980736.f_36213[iVar0 /*7*/].f_4);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1938, Global_4980736.f_36213[iVar0 /*7*/].f_5);
		DATAFILE::DATAARRAY_ADD_INT(uParam0->f_1939, Global_4980736.f_36213[iVar0 /*7*/].f_6);
		iVar0++;
	}
}

void func_580(var* uParam0)//Position - 0x24DAD
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2734, Global_4718592.f_595[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2759, Global_4718592.f_94870[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2760, Global_4718592.f_94875[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2735, Global_4718592.f_600[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3148, Global_4718592.f_93337[iVar0 /*4*/][0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3149, Global_4718592.f_93337[iVar0 /*4*/][1]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3150, Global_4718592.f_93337[iVar0 /*4*/][2]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3152, Global_4718592.f_93320[iVar0 /*4*/][0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3153, Global_4718592.f_93320[iVar0 /*4*/][1]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3154, Global_4718592.f_93320[iVar0 /*4*/][2]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3156, Global_4718592.f_93354[iVar0 /*4*/][0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3157, Global_4718592.f_93354[iVar0 /*4*/][1]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3158, Global_4718592.f_93354[iVar0 /*4*/][2]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3159, Global_4718592.f_93371[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3160, Global_4718592.f_93376[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3131, Global_4718592.f_92538[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3137, Global_4718592.f_92570[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3138, Global_4718592.f_92575[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3139, Global_4718592.f_92590[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3140, Global_4718592.f_92595[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3141, Global_4718592.f_92600[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3143, Global_4718592.f_92620[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3142, Global_4718592.f_92605[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3144, Global_4718592.f_92625[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3145, Global_4718592.f_92610[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3146, Global_4718592.f_92615[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3132, Global_4718592.f_92543[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3133, Global_4718592.f_92580[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3134, Global_4718592.f_92585[iVar0]);
			DATAFILE::DATAARRAY_ADD_STRING(uParam0->f_3135, &(Global_4718592.f_92548[iVar0 /*4*/]));
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3136, Global_4718592.f_92565[iVar0]);
			DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2736, Global_4718592.f_658[iVar0 /*22957*/]);
			DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2737, Global_4718592.f_658[iVar0 /*22957*/].f_4);
			DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2738, Global_4718592.f_658[iVar0 /*22957*/].f_7);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2740, Global_4718592.f_658[iVar0 /*22957*/].f_14);
			DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2741, Global_4718592.f_658[iVar0 /*22957*/].f_15);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2742, Global_4718592.f_658[iVar0 /*22957*/].f_18);
			DATAFILE::DATAARRAY_ADD_VECTOR(uParam0->f_2743, Global_4718592.f_658[iVar0 /*22957*/].f_19);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2744, Global_4718592.f_658[iVar0 /*22957*/].f_22);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2745, Global_4718592.f_658[iVar0 /*22957*/].f_23);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2746, Global_4718592.f_658[iVar0 /*22957*/].f_24);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2747, Global_4718592.f_658[iVar0 /*22957*/].f_25);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2748, Global_4718592.f_658[iVar0 /*22957*/].f_26);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2749, Global_4718592.f_658[iVar0 /*22957*/].f_27);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2750, Global_4718592.f_658[iVar0 /*22957*/].f_28);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2751, Global_4718592.f_658[iVar0 /*22957*/].f_29);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2752, Global_4718592.f_658[iVar0 /*22957*/].f_30);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2753, Global_4718592.f_658[iVar0 /*22957*/].f_31);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2754, Global_4718592.f_658[iVar0 /*22957*/].f_32);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2755, Global_4718592.f_658[iVar0 /*22957*/].f_33);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2756, Global_4718592.f_658[iVar0 /*22957*/].f_34);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2757, Global_4718592.f_658[iVar0 /*22957*/].f_35);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2758, Global_4718592.f_658[iVar0 /*22957*/].f_36);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2783, Global_4718592.f_658[iVar0 /*22957*/].f_5560);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2784, Global_4718592.f_658[iVar0 /*22957*/].f_5561);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2761, Global_4718592.f_658[iVar0 /*22957*/].f_5962);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2762, Global_4718592.f_658[iVar0 /*22957*/].f_5964);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2763, Global_4718592.f_658[iVar0 /*22957*/].f_6021);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2764, Global_4718592.f_658[iVar0 /*22957*/].f_5963);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2765, Global_4718592.f_658[iVar0 /*22957*/].f_6020);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2766, Global_4718592.f_658[iVar0 /*22957*/].f_7081);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2767, Global_4718592.f_658[iVar0 /*22957*/].f_7082);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2768, Global_4718592.f_658[iVar0 /*22957*/].f_12179);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2769, Global_4718592.f_658[iVar0 /*22957*/].f_12180);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2770, Global_4718592.f_658[iVar0 /*22957*/].f_12181);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2771, Global_4718592.f_658[iVar0 /*22957*/].f_12182);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2772, Global_4718592.f_658[iVar0 /*22957*/].f_5965);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2773, Global_4718592.f_658[iVar0 /*22957*/].f_6334);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2774, Global_4718592.f_658[iVar0 /*22957*/].f_12388);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2775, Global_4718592.f_658[iVar0 /*22957*/].f_12389);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2776, Global_4718592.f_658[iVar0 /*22957*/].f_12390);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2777, Global_4718592.f_658[iVar0 /*22957*/].f_12409);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2778, Global_4718592.f_658[iVar0 /*22957*/].f_16432);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2779, Global_4718592.f_658[iVar0 /*22957*/].f_16433);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2780, Global_4718592.f_658[iVar0 /*22957*/].f_16434);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2785, Global_4718592.f_658[iVar0 /*22957*/].f_59);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2781, Global_4718592.f_658[iVar0 /*22957*/].f_16435);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2782, Global_4718592.f_658[iVar0 /*22957*/].f_16436);
			iVar1 = Global_4718592.f_110280[iVar0];
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2787, iVar1);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2788, Global_4718592.f_92497[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2789, Global_4718592.f_110328[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2790, Global_4718592.f_110338[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2791, Global_4718592.f_110343[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2792, Global_4718592.f_110323[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2786, Global_4718592.f_658[iVar0 /*22957*/].f_38);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2793, Global_4718592.f_658[iVar0 /*22957*/].f_5555);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2794, Global_4718592.f_658[iVar0 /*22957*/].f_5556);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2795, Global_4718592.f_658[iVar0 /*22957*/].f_5557);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_2796, Global_4718592.f_658[iVar0 /*22957*/].f_5558);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3045, Global_4718592.f_658[iVar0 /*22957*/].f_5559);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3042, Global_4718592.f_658[iVar0 /*22957*/].f_5554);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3043, Global_4718592.f_658[iVar0 /*22957*/].f_5553);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3044, Global_4718592.f_658[iVar0 /*22957*/].f_5552);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3049, Global_4718592.f_658[iVar0 /*22957*/].f_5817);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3046, Global_4718592.f_658[iVar0 /*22957*/].f_5815);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3047, Global_4718592.f_658[iVar0 /*22957*/].f_5814);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3048, Global_4718592.f_658[iVar0 /*22957*/].f_5816);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3050, Global_4718592.f_658[iVar0 /*22957*/].f_61);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3051, Global_4718592.f_658[iVar0 /*22957*/].f_62);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3052, Global_4718592.f_658[iVar0 /*22957*/].f_63);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3053, Global_4718592.f_658[iVar0 /*22957*/].f_64);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3054, Global_4718592.f_658[iVar0 /*22957*/].f_336);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3100, Global_4718592.f_658[iVar0 /*22957*/].f_614);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3101, Global_4718592.f_658[iVar0 /*22957*/].f_615);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3080, Global_4718592.f_658[iVar0 /*22957*/].f_339);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3081, Global_4718592.f_658[iVar0 /*22957*/].f_340);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3082, Global_4718592.f_658[iVar0 /*22957*/].f_341);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3083, Global_4718592.f_658[iVar0 /*22957*/].f_342);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3084, Global_4718592.f_658[iVar0 /*22957*/].f_337);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3106, Global_4718592.f_658[iVar0 /*22957*/].f_338);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3122, Global_4718592.f_658[iVar0 /*22957*/].f_891);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3123, Global_4718592.f_658[iVar0 /*22957*/].f_892);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3102, Global_4718592.f_658[iVar0 /*22957*/].f_616);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3103, Global_4718592.f_658[iVar0 /*22957*/].f_617);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3104, Global_4718592.f_658[iVar0 /*22957*/].f_618);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3105, Global_4718592.f_658[iVar0 /*22957*/].f_619);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3126, Global_4718592.f_658[iVar0 /*22957*/].f_57);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3127, Global_4718592.f_658[iVar0 /*22957*/].f_58);
			DATAFILE::DATAARRAY_ADD_FLOAT(uParam0->f_3128, Global_4718592.f_658[iVar0 /*22957*/].f_3);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3129, Global_4718592.f_92487[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3130, Global_4718592.f_92492[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3161, Global_4718592.f_658[iVar0 /*22957*/].f_37);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3162, Global_4718592.f_658[iVar0 /*22957*/].f_2051);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3163, Global_4718592.f_658[iVar0 /*22957*/].f_2052);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3164, Global_4718592.f_658[iVar0 /*22957*/].f_2053);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3165, Global_4718592.f_658[iVar0 /*22957*/].f_2054);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3124, Global_4718592.f_658[iVar0 /*22957*/].f_893);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3125, Global_4718592.f_658[iVar0 /*22957*/].f_894);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3553, Global_4718592.f_142632[iVar0]);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3554, Global_4718592.f_142637[iVar0]);
			DATAFILE::DATAARRAY_ADD_STRING(uParam0->f_3166, &(Global_4718592.f_658[iVar0 /*22957*/].f_15686[0 /*16*/]));
			DATAFILE::DATAARRAY_ADD_STRING(uParam0->f_3167, &(Global_4718592.f_658[iVar0 /*22957*/].f_15686[1 /*16*/]));
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3555, Global_4718592.f_658[iVar0 /*22957*/].f_1013);
			DATAFILE::DATAARRAY_ADD_INT(uParam0->f_3556, Global_4718592.f_658[iVar0 /*22957*/].f_1014);
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3528[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "sudtm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3533[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3543[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3548[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3538[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4500[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "tsc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4505[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "tscm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4510[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4550[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4515[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4520[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4525[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4530[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4535[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wlreq", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4540[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mxwl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4545[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4590[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4595[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7040[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3168[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3173[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3178[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs4", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3183[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs5", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3188[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs6", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3193[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs7", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3198[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs8", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3203[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs9", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3208[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs10", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3213[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs11", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3218[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs12", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3223[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs13", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3228[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irbs14", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3233[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irsdst", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3264[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irlpst", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3259[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "iroamtr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3269[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "icmsk1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3632[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "icmsk2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3637[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "icmsk3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3642[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "itpreqs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3647[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mnvms", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3712[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivms", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3717[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmsh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3722[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmst", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3727[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmsa", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3732[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmsac", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3737[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmsb", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3742[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ivmse", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3747[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "isvmg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3752[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "isvro", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3757[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "isvhr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3762[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "irfbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3518[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "plvrl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3523[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbnum", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7128[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbngn", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7133[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gblgn", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7138[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbcol", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7143[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbdel", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7148[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbmax", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7153[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbngm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7158[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gblgm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7163[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbaie", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7203[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbfnr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7208[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbvhl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7168[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gacc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7173[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gfld", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7178[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbat", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7183[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbv1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7188[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbv2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7193[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gbaw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7198[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "filtlh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7368[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mcstr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7213[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mcsrm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7233[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mcmp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7218[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "aumx", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7223[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpaumx", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7228[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpaumxscr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7238[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpagrom", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7243[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4990[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5008[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5013[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5018[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dops", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5023[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dovd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5028[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5033[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bdprt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5123[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bdpst", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5128[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5038[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5043[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5048[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5053[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4980[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4985[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4970[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drph", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4975[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5068[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5073[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5078[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5083[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5088[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5093[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5098[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5103[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rnrbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5108[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "cojr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5113[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "cojc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5118[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4555[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4560[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4565[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt4", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4570[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "txt5", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4575[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fail", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4580[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bfm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4585[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wwm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4600[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vss", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4605[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "cwt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4610[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vhm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4615[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3767[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3772[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4376[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4381[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4396[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4421[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4431[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4436[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4426[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4401[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4406[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4411[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4416[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4441[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4386[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dsosui", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4391[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outbt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4620[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4625[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4635[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4630[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4645[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4640[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4650[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2hv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4795[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2t", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4765[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4770[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4775[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4780[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4785[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4790[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4920[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4930[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "destv3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4925[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4940[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4935[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4960[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4945[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar3, "rlbs", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5133[iVar0 /*5*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				StringCopy(&cVar3, "rlnm", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5154[iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				StringCopy(&cVar3, "irlw", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5159[iVar0 /*33*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 79)
			{
				StringCopy(&cVar3, "pelw", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5292[iVar0 /*81*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				StringCopy(&cVar3, "oblw", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5617[iVar0 /*33*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 19)
			{
				StringCopy(&cVar3, "lolw", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5750[iVar0 /*21*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 59)
			{
				StringCopy(&cVar3, "intrw", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_5835[iVar0 /*61*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar3, "rcbs", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringConCat(&cVar3, "-", 16);
				StringIntConCat(&cVar3, iVar2, 16);
				uParam0->f_6996[iVar0 /*5*/][iVar2] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar2++;
			}
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4655[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4660[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4665[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4670[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outmm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4675[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outclo", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4680[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outclr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4685[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outclp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4690[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outfp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4695[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outsg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4700[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outhc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4730[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpaib", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4735[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mpaib2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4740[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vrach", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4745[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vrach2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4750[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bundel", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4755[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bundel2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4760[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outbh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4720[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4705[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4710[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outilv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4715[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "outonfv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4725[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4800[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4805[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4810[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4815[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2mm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4820[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2fp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4825[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2sg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4830[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2hc", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4860[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2bh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4835[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4840[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4845[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2ilv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4850[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "out2onfv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4855[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airset", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4865[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airsid", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4870[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airstv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4875[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airsod", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4880[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airsodx", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4885[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airssp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4890[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airola", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4895[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airoha", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4900[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airsr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4905[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airsft", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4910[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "airtyp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4915[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mcry", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_7035[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3055[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3085[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3107[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "siat", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3060[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "stiamt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3090[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mmiam2t", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3112[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3065[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3095[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3117[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3070[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3075[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3557[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rloftv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3562[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3567[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3572[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mspdsv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3577[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3582[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3587[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3592[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3597[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3602[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3795[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "diawfm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3813[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3777[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3831[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3849[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3854[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3859[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3864[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3879[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3919[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3924[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3929[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3934[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3939[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3944[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3949[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3954[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3959[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3964[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3969[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3974[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3979[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "drnmss", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3984[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4221[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4226[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4231[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4236[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4241[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4246[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4251[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bmmdm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4256[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4286[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4291[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "invor", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4296[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rorfr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4261[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "emonR", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4301[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "pDSaD", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4306[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3607[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3612[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3617[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3869[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "fceStlth", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3874[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3884[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3889[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3894[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vehdmro", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3899[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "vehdmri", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3904[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "remiveh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3909[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rtkpro", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3914[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3622[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3627[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4064[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4069[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4074[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4079[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4084[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4089[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4094[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rltiA", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4099[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rltiB", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4104[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rltiC", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4109[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rltiD", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4114[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 <= 19)
			{
				StringCopy(&cVar3, "hlm", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringIntConCat(&cVar3, iVar4, 16);
				uParam0->f_4119[iVar0 /*21*/][iVar4] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar4++;
			}
			iVar5 = 0;
			iVar5 = 0;
			while (iVar5 <= 2)
			{
				StringCopy(&cVar3, "hppp", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringIntConCat(&cVar3, iVar5, 16);
				uParam0->f_4204[iVar0 /*4*/][iVar5] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
				iVar5++;
			}
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3989[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3994[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_3999[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4004[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4311[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4316[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "mgdm", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4321[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rorcp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4326[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rocok", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4331[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rodp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4336[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rodpt", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4341[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rochta", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4371[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rotes", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4346[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "expRR", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4351[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "rolsw", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4356[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "roapa", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4361[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "hdmfp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5058[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "hddstra", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_5063[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
			StringCopy(&cVar3, "sthpp", 16);
			StringIntConCat(&cVar3, iVar0, 16);
			uParam0->f_4366[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(uParam0->f_7373, &cVar3);
		}
		iVar0++;
	}
}

void func_581(var* uParam0, var uParam1, bool bParam2)//Position - 0x29161
{
	*uParam1 = DATAFILE::DATADICT_CREATE_DICT(*uParam0, "rule");
	DATAFILE::DATADICT_SET_INT(*uParam1, "time", Global_4718592.f_613);
	DATAFILE::DATADICT_SET_INT(*uParam1, "score", Global_4718592.f_616);
	DATAFILE::DATADICT_SET_INT(*uParam1, "tod", Global_4718592.f_116980);
	DATAFILE::DATADICT_SET_INT(*uParam1, "weth", Global_4718592.f_116938);
	DATAFILE::DATADICT_SET_INT(*uParam1, "traf", Global_4718592.f_107229);
	DATAFILE::DATADICT_SET_INT(*uParam1, "vdm", Global_4718592.f_625);
	DATAFILE::DATADICT_SET_INT(*uParam1, "tdm", Global_4718592.f_623);
	DATAFILE::DATADICT_SET_INT(*uParam1, "liv", Global_4718592.f_608);
	DATAFILE::DATADICT_SET_INT(*uParam1, "pol", Global_4718592.f_110359);
	DATAFILE::DATADICT_SET_INT(*uParam1, "vehd", Global_4718592.f_116981);
	DATAFILE::DATADICT_SET_INT(*uParam1, "wethec", Global_4718592.f_116941);
	if (bParam2)
	{
		DATAFILE::DATADICT_SET_INT(*uParam1, "prule", Global_4718592.f_627);
		DATAFILE::DATADICT_SET_INT(*uParam1, "ptyp", Global_4980736.f_69353);
		DATAFILE::DATADICT_SET_INT(*uParam1, "blip" /* GXT: Blip */, Global_4718592.f_617);
		DATAFILE::DATADICT_SET_INT(*uParam1, "tag", Global_4718592.f_619);
		DATAFILE::DATADICT_SET_INT(*uParam1, "voice", Global_4718592.f_620);
		DATAFILE::DATADICT_SET_INT(*uParam1, "radio", Global_4718592.f_621);
		DATAFILE::DATADICT_SET_INT(*uParam1, "aim", Global_4718592.f_622);
		DATAFILE::DATADICT_SET_INT(*uParam1, "apeds", Global_4718592.f_116982);
		DATAFILE::DATADICT_SET_INT(*uParam1, "alW", Global_4718592.f_116939);
		DATAFILE::DATADICT_SET_INT(*uParam1, "alWC", Global_4718592.f_116940);
	}
}

void func_582(int iParam0)//Position - 0x2DC99
{
	int iVar0;
	char cVar1[16];
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar1", Global_4718592.f_174966);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar2", Global_4718592.f_174966.f_1);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar3", Global_4718592.f_174966.f_2);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar4", Global_4718592.f_174966.f_3);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar5", Global_4718592.f_174966.f_4);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar6", Global_4718592.f_174966.f_5);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar7", Global_4718592.f_174966.f_6);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar8", Global_4718592.f_174966.f_7);
	DATAFILE::DATADICT_SET_FLOAT(*iParam0, "carbar9", Global_4718592.f_174966.f_8);
	StringCopy(&cVar1, "", 16);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "carbar10", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar1, Global_4718592.f_174966.f_9[iVar0]);
		iVar0++;
	}
}

void func_583(int iParam0, int iParam1)//Position - 0x2DDD2
{
	char cVar0[16];
	StringCopy(&cVar0, "MYmi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_16);
	StringCopy(&cVar0, "MYbs", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_17);
	StringCopy(&cVar0, "MYyn", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_STRING(*iParam0, &cVar0, &(Global_4718592.f_174915[iParam1 /*24*/]));
	StringCopy(&cVar0, "MYai", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_18);
	StringCopy(&cVar0, "MYpi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_19);
	StringCopy(&cVar0, "MYci", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_20);
	StringCopy(&cVar0, "MYli", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_21);
	StringCopy(&cVar0, "MYfi", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_22);
	StringCopy(&cVar0, "MYfl", 16);
	if (iParam1 > 0)
	{
		StringIntConCat(&cVar0, iParam1, 16);
	}
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174915[iParam1 /*24*/].f_23);
}

void func_584(int iParam0)//Position - 0x2E17B
{
	int iVar0;
	char cVar1[16];
	DATAFILE::DATADICT_SET_INT(*iParam0, "KhBS", Global_4718592.f_172946);
	DATAFILE::DATADICT_SET_INT(*iParam0, "KhNha", Global_4718592.f_172946.f_1);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "KhAC", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_VECTOR(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_4);
		StringCopy(&cVar1, "KhAD", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_VECTOR(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_7);
		StringCopy(&cVar1, "KhAU", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_VECTOR(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_10);
		StringCopy(&cVar1, "KhAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_13);
		StringCopy(&cVar1, "KhTy", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/]);
		StringCopy(&cVar1, "KhEn", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_1);
		StringCopy(&cVar1, "KhBS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_2);
		StringCopy(&cVar1, "KhCt", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_18);
		StringCopy(&cVar1, "KhPt", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_19);
		StringCopy(&cVar1, "KhWd", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_14);
		StringCopy(&cVar1, "KhHe", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_16);
		StringCopy(&cVar1, "KhHd", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_17);
		StringCopy(&cVar1, "KhLn", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_FLOAT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_15);
		StringCopy(&cVar1, "KhMnP", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar1, Global_4718592.f_172946.f_2[iVar0 /*20*/].f_3);
		iVar0++;
	}
}

void func_585(char* sParam0, char* sParam1, int iParam2)//Position - 0x2E3F4
{
	if (*iParam2 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	DATAFILE::DATADICT_SET_STRING(*iParam2, sParam0, sParam1);
}

void func_586(int iParam0)//Position - 0x2E41D
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	StringCopy(&cVar0, "MCV_BS1", 16);
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_1);
	StringCopy(&cVar0, "MCV_ESET", 16);
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999);
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		StringCopy(&cVar0, "MCV_EHP", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_2[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		StringCopy(&cVar0, "MCV_EII", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_6[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		StringCopy(&cVar0, "MCV_EMN", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_13[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			StringCopy(&cVar0, "MCV_ESPW", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_30[iVar1 /*6*/][iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TTE", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_73[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRF", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_78[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_83[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_TZN", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_88[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			StringCopy(&cVar0, "MCV_TMS", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_93[iVar1 /*6*/][iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar0, "MCV_OMS", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_118[iVar1 /*3*/]);
		StringCopy(&cVar0, "MCV_OMT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_118[iVar1 /*3*/].f_1);
		StringCopy(&cVar0, "MCV_OMST", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_118[iVar1 /*3*/].f_2);
		iVar1++;
	}
	StringCopy(&cVar0, "MCV_JTE", 16);
	DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_131);
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar0, "MCV_JTP", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_132[iVar1 /*5*/][iVar2]);
			StringCopy(&cVar0, "MCV_JTF", 16);
			StringIntConCat(&cVar0, iVar1, 16);
			StringIntConCat(&cVar0, iVar2, 16);
			DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_148[iVar1 /*5*/][iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		StringCopy(&cVar0, "MCV_ECO", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_INT(*iParam0, &cVar0, Global_4718592.f_174999.f_164[iVar1]);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&cVar0, "MCV_POT", 16);
		StringIntConCat(&cVar0, iVar1, 16);
		DATAFILE::DATADICT_SET_STRING(*iParam0, &cVar0, &(Global_4718592.f_174999.f_170[iVar1 /*16*/]));
		iVar1++;
	}
}

int func_587(int iParam0, var uParam1)//Position - 0x2F547
{
	switch (iParam0)
	{
		case 0:
			if (!BitTest(Global_4718592.f_607, 16))
			{
				return uParam1;
			}
			break;
		case 2:
			return 1;
		case 1:
			return 2;
		case 3:
			return 1;
		case 8:
			return 1;
	}
	return 1;
}

int func_588(int iParam0, int iParam1)//Position - 0x32E41
{
	if (iParam0 == 0)
	{
		if (iParam1 == 5)
		{
			return 7;
		}
	}
	return iParam0;
}

int func_589(char[4] cParam0, char* sParam1, int iParam2)//Position - 0x333C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if (!MISC::IS_STRING_NULL((*cParam0)[iVar0]) && !MISC::IS_STRING_NULL(sParam1))
		{
			if (MISC::ARE_STRINGS_EQUAL((*cParam0)[iVar0], sParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_590(bool bParam0)//Position - 0x33412
{
	switch (bParam0)
	{
		case 0:
			return "Armor";
		case 1:
			return "Pistol";
		case 2:
			return "CombatPistol";
		case 3:
			return "APPistol";
		case 4:
			return "MicroSMG";
		case 5:
			return "SMG";
		case 6:
			return "MG";
		case 7:
			return "CombatMG";
		case 8:
			return "AssaultRifle";
		case 9:
			return "CarbineRifle";
		case 10:
			return "AdvancedRifle";
		case 11:
			return "SniperRifle";
		case 12:
			return "HeavySniper";
		case 13:
			return "PumpShotgun";
		case 14:
			return "SawnOff";
		case 15:
			return "AssaultShotgun";
		case 16:
			return "GL";
		case 17:
			return "RPG";
		case 18:
			return "Minigun";
		case 19:
			return "Grenade";
		case 20:
			return "Bomb";
		case 21:
			return "JerryCan";
		case 22:
			return "Knife";
		case 23:
			return "Bat";
		case 24:
			return "SpecialCarbine";
		case 25:
			return "PistolSup";
		case 26:
			return "PumpShotgunSup";
		case 27:
			return "SpecialCarbineSup";
		case 28:
			return "CombatMGSExt";
		case 29:
			return "Parachute";
		case 30:
			return "ParachuteBlack";
		case 31:
			return "SniperRifleSup";
		case 32:
			return "FlareGun";
		case 33:
			return "PumpShotgunFlashlight";
		case 34:
			return "Crowbar";
		case 35:
			return "Pistol50Flashlight";
		case 36:
			return "CombatMGSuppressor";
		case 37:
			return "AssaultShotgunSuppressor";
		case 38:
			return "Nightstick";
		case 39:
			return "BullpupShotgun";
		case 40:
			return "Pistol50";
		case 41:
			return "HeavyShotgun";
		default:
	}
	return "";
}

int func_591(int iParam0, int iParam1, int iParam2)//Position - 0x33840
{
	int iVar0;
	if (iParam2 >= 80)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_592(int iParam0, int iParam1)//Position - 0x33878
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				return 1;
			}
			else if (iParam1 == 2)
			{
				return 6;
			}
			else if (iParam1 == 3)
			{
				return 11;
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				return 23;
			}
			else if (iParam1 == 2)
			{
				return 24;
			}
			else if (iParam1 == 3)
			{
				return 25;
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				return 26;
			}
			else if (iParam1 == 27)
			{
				return 28;
			}
			else if (iParam1 == 3)
			{
				return 28;
			}
			else if (iParam1 == 4)
			{
				return 29;
			}
			break;
		case 13:
			return 30;
		case 2:
			if (iParam1 == 1)
			{
				return 2;
			}
			else if (iParam1 == 2)
			{
				return 7;
			}
			else if (iParam1 == 3)
			{
				return 12;
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				return 46;
			}
			else if (iParam1 == 2)
			{
				return 50;
			}
			else if (iParam1 == 3)
			{
				return 51;
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				return 55;
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				return 47;
			}
			else if (iParam1 == 2)
			{
				return 48;
			}
			else if (iParam1 == 3)
			{
				return 49;
			}
			break;
		case 15:
			return 32;
		case 17:
			return 33;
		case 3:
			if (iParam1 == 1)
			{
				return 3;
			}
			else if (iParam1 == 2)
			{
				return 8;
			}
			else if (iParam1 == 3)
			{
				return 13;
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				return 4;
			}
			else if (iParam1 == 2)
			{
				return 9;
			}
			else if (iParam1 == 3)
			{
				return 14;
			}
			else if (iParam1 == 4)
			{
				return 16;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 5;
			}
			else if (iParam1 == 2)
			{
				return 10;
			}
			else if (iParam1 == 3)
			{
				return 15;
			}
			else if (iParam1 == 4)
			{
				return 17;
			}
			break;
		case 6:
			return 18;
		case 7:
			return 19;
		case 8:
			return 20;
		case 9:
			return 21;
		case 10:
			return 22;
		case 14:
			return 31;
		case 16:
			return 34;
		case 18:
			return 35;
		case 19:
			return 36;
		case 20:
			return 37;
		case 21:
			return 38;
		case 22:
			return 39;
		case 23:
			return 40;
		case 27:
			return 42;
		case 28:
			return 43;
		case 29:
			return 44;
		case 30:
			return 45;
		case 33:
			return 53;
		case 34:
			return 54;
		case 36:
			return 56;
		case 24:
			return 41;
	}
	return 0;
}

int func_593(var uParam0, char* sParam1, int iParam2)//Position - 0x33C00
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]) && !MISC::IS_STRING_NULL(sParam1))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_594(int iParam0)//Position - 0x33C4B
{
	switch (iParam0)
	{
		case joaat("PICKUP_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_STUNGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_REVOLVER"):
		case joaat("PICKUP_WEAPON_PISTOL_MK2"):
		case joaat("PICKUP_WEAPON_SNSPISTOL_MK2"):
		case joaat("PICKUP_WEAPON_REVOLVER_MK2"):
		case joaat("PICKUP_WEAPON_NAVYREVOLVER"):
		case joaat("PICKUP_WEAPON_GADGETPISTOL"):
			return "PISTOL";
		case joaat("PICKUP_WEAPON_MICROSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
		case joaat("PICKUP_WEAPON_SMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMG"):
		case joaat("PICKUP_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_WEAPON_RUBBERGUN"):
		case joaat("PICKUP_WEAPON_MINISMG"):
		case joaat("PICKUP_WEAPON_SMG_MK2"):
		case joaat("PICKUP_WEAPON_COMBATMG_MK2"):
			return "SMG";
		case joaat("PICKUP_HEALTH_STANDARD"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
			return "HEALTH";
		case joaat("PICKUP_ARMOUR_STANDARD"):
			return "ARMOUR";
		case joaat("PICKUP_WEAPON_MG"):
		case joaat("PICKUP_WEAPON_COMBATMG"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE"):
		case joaat("PICKUP_WEAPON_ADVANCEDRIFLE"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE_MK2"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2"):
		case joaat("PICKUP_WEAPON_POLICERIFLE"):
			return "ASSAULT_RIFLE";
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN"):
		case joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"):
		case joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
		case joaat("PICKUP_WEAPON_AUTOSHOTGUN"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2"):
			return "SHOTGUN";
		case joaat("PICKUP_WEAPON_SNIPERRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2"):
			return "SNIPER";
		case joaat("PICKUP_WEAPON_GRENADELAUNCHER"):
			return "GRENADELAUNCHER";
		case joaat("PICKUP_WEAPON_RPG"):
			return "ROCKET";
		case joaat("PICKUP_WEAPON_MINIGUN"):
			return "MINIGUN";
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
			return "GRENADE";
		case joaat("PICKUP_WEAPON_KNIFE"):
		case joaat("PICKUP_WEAPON_SWITCHBLADE"):
			return "KNIFE";
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
		case joaat("PICKUP_WEAPON_HAMMER"):
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
		case joaat("PICKUP_WEAPON_BAT"):
		case joaat("PICKUP_WEAPON_POOLCUE"):
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
		case joaat("PICKUP_WEAPON_WRENCH"):
			return "BAT";
		case joaat("PICKUP_WEAPON_MOLOTOV"):
		case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
			return "MOLOTOV";
		case joaat("PICKUP_MONEY_CASE"):
			return "CASH";
		default:
	}
	return "";
}

int func_595(var uParam0, int iParam1, int iParam2)//Position - 0x33EEA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_596(bool bParam0)//Position - 0x33FE1
{
	switch (bParam0)
	{
		case 0:
			return "Compacts";
		case 1:
			return "Sedans";
		case 2:
			return "SUV";
		case 3:
			return "Coupes";
		case 4:
			return "Mucle";
		case 5:
			return "Classics";
		case 6:
			return "Sports";
		case 7:
			return "Super";
		case 8:
			return "Bikes";
		case 9:
			return "OffRoad";
		case 10:
			return "Industrial";
		case 11:
			return "Utility";
		case 12:
			return "Vans";
		case 13:
			return "Cycles";
		case 15:
			return "Special";
		case 16:
			return "Weaponised";
		case 17:
			return "Contender" /* GXT: Contender */;
		case 18:
			return "Open Wheel";
		case 19:
			return "Go-Kart";
		case 20:
			return "Car Club";
		default:
	}
	return "";
}

int func_597(var uParam0, int iParam1)//Position - 0x34210
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*6*/], uParam0[iParam1 /*6*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_598()//Position - 0x350AC
{
	return HUD::BUSYSPINNER_IS_ON();
}

void func_599(var uParam0)//Position - 0x987F8
{
	if (uParam0->f_4 > -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_4);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		uParam0->f_4 = -1;
	}
}

void func_600(int* iParam0, int iParam1)//Position - 0x98A0E
{
	iParam0->f_548 = iParam1;
}

int func_601(int iParam0)//Position - 0x98D21
{
	if (((((((((((((((iParam0 == 23 || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 30) || iParam0 == 28) || iParam0 == 29) || iParam0 == 31) || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 35) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38)
	{
		return 1;
	}
	return 0;
}

void func_602(int* iParam0, bool bParam1)//Position - 0x98DDB
{
	if (bParam1 >= 10)
	{
		return;
	}
	if (iParam0->f_2852 != bParam1)
	{
		iParam0->f_2852 = bParam1;
	}
}

int func_603(int iParam0)//Position - 0x98DFE
{
	if ((iParam0 == 0 || iParam0 == 14) || iParam0 == 788)
	{
		return 1;
	}
	return 0;
}

void func_604(bool bParam0, bool bParam1)//Position - 0x98E29
{
	if (bParam0)
	{
		if (!bParam1)
		{
			AUDIO::START_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
		}
		AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", true);
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
	}
	else
	{
		if (!bParam1)
		{
			AUDIO::STOP_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
		}
		AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
	}
}

int func_605()//Position - 0x99755
{
	switch (Global_4718592)
	{
		case 1:
			switch (Global_4718592.f_2)
			{
				case 0:
					return 310;
					break;
				case 1:
					return 378;
					break;
				case 2:
					return 380;
					break;
				case 3:
					return 674;
					break;
				case 4:
					return 675;
					break;
			}
			break;
		case 0:
			switch (Global_4718592.f_2)
			{
				case 5:
					return 409;
					break;
			}
			break;
		case 2:
			switch (Global_4718592.f_107227)
			{
				case 4:
				case 5:
					return 314;
					break;
				case 2:
				case 3:
					return 316;
					break;
				case 0:
				case 1:
					return 315;
					break;
				case 6:
				case 7:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
					return 488;
					break;
				case 8:
				case 9:
					return 94;
					break;
				case 10:
				case 11:
					return 379;
					break;
				case 24:
				case 25:
					return 726;
				case 26:
					return 315;
				case 27:
					return 315;
					break;
			}
			break;
		case 31:
			break;
		case 6:
			break;
		case 7:
			break;
		case 3:
			return 305;
			break;
	}
	return -1;
}

Vector3 func_606(int iParam0)//Position - 0x9A9FF
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0.5f;
		case 1:
			return -0.3f, -0.3f, 0.5f;
		case 2:
			return -0.3f, 0f, 0.5f;
		case 3:
			return -0.3f, 0.3f, 0.5f;
		case 4:
			return 0f, 0.3f, 0.5f;
		case 5:
			return 0.3f, 0.3f, 0.5f;
		case 6:
			return 0.3f, 0f, 0.5f;
		case 7:
			return 0.3f, -0.3f, 0.5f;
		case 8:
			return 0f, -0.3f, 0.5f;
		default:
	}
	return 0f, 0f, 0.5f;
}

void func_607(int iParam0, int iParam1, bool bParam2)//Position - 0x9AF2F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("prop_container_ld"))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
		Var3 = { Var2 - Var1 };
		Var0.f_2 = (-1f + Var3.f_2);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var0), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, (ENTITY::GET_ENTITY_HEADING(iParam1) + 180f));
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam0, true);
		VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam0, true);
		if (bParam2)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, 180f, false, false, true, false, 2, true, 0);
		}
	}
}

void func_608(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x9AFE3
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && ((VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("flatbed")) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("tr2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander"))))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
		Var3 = { Var2 - Var1 };
		if (VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander")))
		{
			Var0.f_1 = -1.75f;
		}
		else
		{
			Var0.f_1 = -2.75f;
		}
		if (Var3.f_1 > 4f)
		{
			Var0.f_1 = (Var0.f_1 - (2f - (Var3.f_1 / 2f)));
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("tr2")))
		{
			Var0.f_2 = (Var3.f_2 - 0.45f);
		}
		else if (VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander")))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("ruiner3")))
			{
				Var0.f_2 = 1.4f;
			}
			else
			{
				Var0.f_2 = 1.63f;
			}
		}
		else
		{
			Var0.f_2 = (Var3.f_2 - 0.58f);
		}
		if (bParam3)
		{
			VEHICLE::SET_DISABLE_SUPERDUMMY(iParam0, true);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iParam1, true);
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var0), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, ENTITY::GET_ENTITY_HEADING(iParam1));
		if (bParam2)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
		}
	}
}

void func_609(int iParam0, int iParam1)//Position - 0x9C8E6
{
	int iVar0;
	var uVar1;
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar0, &uVar1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar0, iParam1);
}

int func_610(int iParam0)//Position - 0x9CA46
{
	if (iParam0 == -1)
	{
		return 255;
	}
	return iParam0;
}

int func_611(int iParam0, int iParam1, bool bParam2)//Position - 0x9D493
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_3() == 0)
		{
			return BitTest(__LIB_1__::func_556(func_676(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_612(var uParam0, int iParam1)//Position - 0xAD8E9
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= 13)
	{
		if (BitTest(uParam0, bVar0) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, bVar0 + 1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam1, bVar0 + 1, false);
		}
		else if (!BitTest(uParam0, bVar0) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, bVar0 + 1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam1, bVar0 + 1, true);
		}
		bVar0++;
	}
}

void func_613(int iParam0, int iParam1, int iParam2)//Position - 0xAD94D
{
	int iVar0;
	if (BitTest(iParam1, 8))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule"))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, true);
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson"))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dune"))
		{
			if (BitTest(Global_4718592.f_16, 2))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
			}
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dune"))
	{
		if (BitTest(Global_4718592.f_16, 2))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
		}
		else
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule") && iParam2 != -1)
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::POW(SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iParam2 + 2)));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, !BitTest(iVar0, 2));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, !BitTest(iVar0, 3));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, !BitTest(iVar0, 4));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, !BitTest(iVar0, 5));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, !BitTest(iVar0, 6));
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, !BitTest(iVar0, 7));
	}
}

int func_614(int iParam0, int iParam1)//Position - 0xADB29
{
	float fVar0;
	int iVar1;
	fVar0 = (IntToFloat(Global_4980736.f_78578[iParam0 /*450*/].f_32) / 100f);
	iVar1 = SYSTEM::FLOOR((fVar0 * 1000f));
	if (BitTest(Global_4980736.f_78578[iParam0 /*450*/].f_110, 30) && iParam1 > 0)
	{
		iVar1 = (iVar1 * iParam1);
	}
	if (iVar1 > 262143)
	{
		iVar1 = 262143;
	}
	return iVar1;
}

void func_615(var uParam0, var uParam1, var uParam2)//Position - 0xADB8F
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	if (iVar0 == joaat("avisa"))
	{
		return;
	}
	if (BitTest(uParam2, 0))
	{
		if (BitTest(uParam1, 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 0) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 0, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 0) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 0, true);
		}
	}
	if (BitTest(uParam2, 1))
	{
		if (BitTest(uParam1, 1))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 1) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 1, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 1) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 1, true);
		}
	}
	if (BitTest(uParam2, 2))
	{
		if (BitTest(uParam1, 2))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 2) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 2, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 2) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 2, true);
		}
	}
	if (BitTest(uParam2, 3))
	{
		if (BitTest(uParam1, 3))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 3) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 3, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 3) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 3, true);
		}
	}
	if (BitTest(uParam2, 4))
	{
		if (BitTest(uParam1, 4))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 4) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 4, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 4) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 4, true);
		}
	}
	if (BitTest(uParam2, 5))
	{
		if (BitTest(uParam1, 5))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 5) < 0.2f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(*uParam0, 5, false, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(*uParam0, 5) > 0f)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(*uParam0, 5, true);
		}
	}
}

int func_616(int iParam0)//Position - 0xAF1B8
{
	if (((((iParam0 == joaat("besra") || iParam0 == joaat("lazer")) || iParam0 == joaat("barracks")) || iParam0 == joaat("barracks2")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("dune3"))
	{
		return 1;
	}
	return 0;
}

void func_617(int iParam0, struct<3> Param1)//Position - 0xAF27D
{
	int iVar0;
	iVar0 = 0;
	while (Param1.f_0 < -180f && iVar0 < 10)
	{
		if (Param1.f_0 < -180f)
		{
			Param1.f_0 = (Param1.f_0 + 360f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (Param1.f_0 > 180f && iVar0 < 10)
	{
		if (Param1.f_0 > 180f)
		{
			Param1.f_0 = (Param1.f_0 - 360f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (Param1.f_1 < -180f && iVar0 < 10)
	{
		if (Param1.f_1 < -180f)
		{
			Param1.f_1 = (Param1.f_1 + 360f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (Param1.f_1 > 180f && iVar0 < 10)
	{
		if (Param1.f_1 > 180f)
		{
			Param1.f_1 = (Param1.f_1 - 360f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (Param1.f_2 < -180f && iVar0 < 10)
	{
		if (Param1.f_2 < -180f)
		{
			Param1.f_2 = (Param1.f_2 + 360f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (Param1.f_2 > 180f && iVar0 < 10)
	{
		if (Param1.f_2 > 180f)
		{
			Param1.f_2 = (Param1.f_2 - 360f);
		}
		iVar0++;
	}
	ENTITY::SET_ENTITY_ROTATION(iParam0, Param1, 2, true);
}

int func_618(var uParam0, int iParam1)//Position - 0xAFCA6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		if (GRAPHICS::IS_DECAL_ALIVE((*uParam0)[iVar0]))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_619(int iParam0)//Position - 0xBC051
{
	if (((((iParam0 == joaat("PICKUP_HEALTH_STANDARD") || iParam0 == joaat("PICKUP_ARMOUR_STANDARD")) || iParam0 == joaat("PICKUP_PARACHUTE")) || iParam0 == joaat("PICKUP_VEHICLE_HEALTH_STANDARD")) || iParam0 == joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT")) || iParam0 == joaat("PICKUP_WEAPON_PETROLCAN"))
	{
		return 1;
	}
	return 0;
}

int func_620(int iParam0, int iParam1, int iParam2)//Position - 0xBC180
{
	iParam0 = OBJECT::CONVERT_OLD_PICKUP_TYPE_TO_NEW(iParam0);
	if (iParam2 > -1)
	{
		switch (iParam2)
		{
			case 0:
				return 403;
				break;
			case 1:
				return 463;
				break;
			case 2:
				return 468;
				break;
			case 3:
				return 467;
				break;
			case 4:
				return 469;
				break;
			case 5:
				return 466;
				break;
			case 6:
				return 464;
				break;
			case 7:
				return 472;
				break;
			case 8:
				return 465;
				break;
			case 10:
				return 489;
				break;
			case 11:
				return 586;
				break;
			case 15:
				return 834;
				break;
			}
	}
	if (iParam1 == 7)
	{
		return 156;
	}
	switch (iParam0)
	{
		case joaat("PICKUP_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_STUNGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_SNSPISTOL"):
		case joaat("PICKUP_WEAPON_HEAVYPISTOL"):
		case joaat("PICKUP_WEAPON_VINTAGEPISTOL"):
		case joaat("PICKUP_WEAPON_MARKSMANPISTOL"):
		case joaat("PICKUP_WEAPON_REVOLVER"):
		case joaat("PICKUP_WEAPON_FLAREGUN"):
		case joaat("PICKUP_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_GADGETPISTOL"):
		case joaat("PICKUP_WEAPON_STUNGUN_MP"):
		case joaat("PICKUP_WEAPON_CERAMICPISTOL"):
		case joaat("PICKUP_WEAPON_SNSPISTOL_MK2"):
		case joaat("PICKUP_WEAPON_PISTOL_MK2"):
		case joaat("PICKUP_WEAPON_REVOLVER_MK2"):
		case joaat("PICKUP_WEAPON_DOUBLEACTION"):
		case joaat("PICKUP_WEAPON_NAVYREVOLVER"):
		case joaat("PICKUP_WEAPON_RAYPISTOL"):
			return 156;
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN"):
		case joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"):
		case joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"):
		case joaat("PICKUP_WEAPON_HEAVYSHOTGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
		case joaat("PICKUP_WEAPON_BULLPUPSHOTGUN"):
		case joaat("PICKUP_WEAPON_MUSKET"):
		case joaat("PICKUP_WEAPON_DBSHOTGUN"):
		case joaat("PICKUP_WEAPON_AUTOSHOTGUN"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("PICKUP_WEAPON_COMBATSHOTGUN"):
			return 158;
		case joaat("PICKUP_WEAPON_MICROSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
		case joaat("PICKUP_WEAPON_SMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMG"):
		case joaat("PICKUP_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_WEAPON_RUBBERGUN"):
		case joaat("PICKUP_WEAPON_COMBATPDW"):
		case joaat("PICKUP_WEAPON_MACHINEPISTOL"):
		case joaat("PICKUP_WEAPON_MINISMG"):
		case joaat("PICKUP_WEAPON_SMG_MK2"):
			return 159;
		case joaat("PICKUP_WEAPON_MG"):
		case joaat("PICKUP_WEAPON_COMBATMG"):
		case joaat("PICKUP_WEAPON_GUSENBERG"):
		case joaat("PICKUP_WEAPON_COMBATMG_MK2"):
			return 150;
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE"):
		case joaat("PICKUP_WEAPON_ADVANCEDRIFLE"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE"):
		case joaat("PICKUP_WEAPON_COMPACTRIFLE"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE_MK2"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2"):
		case joaat("PICKUP_WEAPON_POLICERIFLE"):
		case joaat("PICKUP_WEAPON_MILITARYRIFLE"):
		case joaat("PICKUP_WEAPON_TACTICALRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYRIFLE"):
			return 150;
		case joaat("PICKUP_WEAPON_RAYCARBINE"):
			return 725;
		case joaat("PICKUP_WEAPON_SNIPERRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2"):
		case joaat("PICKUP_WEAPON_PRECISIONRIFLE"):
			return 160;
		case joaat("PICKUP_WEAPON_RAILGUN"):
			return 470;
		case joaat("PICKUP_WEAPON_GRENADELAUNCHER"):
		case joaat("PICKUP_WEAPON_COMPACTLAUNCHER"):
		case joaat("PICKUP_WEAPON_EMPLAUNCHER"):
			return 174;
		case joaat("PICKUP_WEAPON_RPG"):
		case joaat("PICKUP_WEAPON_FIREWORK"):
		case joaat("PICKUP_WEAPON_HOMINGLAUNCHER"):
			return 157;
		case joaat("PICKUP_WEAPON_MINIGUN"):
		case joaat("PICKUP_WEAPON_RAYMINIGUN"):
			return 173;
		case joaat("PICKUP_WEAPON_GRENADE"):
			return 152;
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
			return 152;
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
			return 152;
		case joaat("PICKUP_WEAPON_MOLOTOV"):
			return 155;
		case joaat("PICKUP_WEAPON_PETROLCAN"):
			return 415;
		case joaat("PICKUP_WEAPON_FERTILIZERCAN"):
			return 415;
		case joaat("PICKUP_WEAPON_PROXMINE"):
			return 152;
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
			return 152;
		case joaat("PICKUP_WEAPON_KNIFE"):
			return 154;
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
			return 151;
		case joaat("PICKUP_WEAPON_BAT"):
			return 151;
		case joaat("PICKUP_WEAPON_CROWBAR"):
			return 151;
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
			return 151;
		case joaat("PICKUP_WEAPON_BOTTLE"):
			return 151;
		case joaat("PICKUP_WEAPON_DAGGER"):
			return 154;
		case joaat("PICKUP_WEAPON_KNUCKLE"):
			return 151;
		case joaat("PICKUP_WEAPON_MACHETE"):
			return 154;
		case joaat("PICKUP_WEAPON_HATCHET"):
			return 154;
		case joaat("PICKUP_WEAPON_HAMMER"):
			return 151;
		case joaat("PICKUP_WEAPON_SWITCHBLADE"):
			return 154;
		case joaat("PICKUP_WEAPON_POOLCUE"):
			return 151;
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
			return 154;
		case joaat("PICKUP_WEAPON_WRENCH"):
			return 151;
		case joaat("PICKUP_WEAPON_FLASHLIGHT"):
			return 151;
		case joaat("PICKUP_WEAPON_STONE_HATCHET"):
			return 151;
		case joaat("PICKUP_HEALTH_STANDARD"):
			return 153;
		case joaat("PICKUP_ARMOUR_STANDARD"):
			return 175;
		case joaat("PICKUP_PARACHUTE"):
			return 377;
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
			return 153;
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
			return 153;
		case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
		case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"):
			if (iParam1 == 0)
			{
				return 354;
			}
			else if (iParam1 == 3)
			{
				return 377;
			}
			else
			{
				return 368;
			}
			return 354;
		case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
			return 152;
		case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
			return 152;
		case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
			return 152;
		case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
			return 155;
		case joaat("PICKUP_MONEY_CASE"):
			return 272;
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
			return 51;
		default:
	}
	return 134;
	return 134;
}

bool func_621()//Position - 0xBC64C
{
	return __LIB_9__::func_794();
}

void func_622(int iParam0)//Position - 0xBCF0F
{
	NETWORK::NETWORK_SESSION_HOST_SINGLE_PLAYER(iParam0);
}

void func_623(bool bParam0)//Position - 0xBD122
{
	if (bParam0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_QUIT_WARN" /* GXT: Quit */, "FMMC_END_T", 18, "PM_QUIT_WARN5" /* GXT: All unsaved progress will be lost. */, false, -1, 0, 0, true, 0);
	}
	else
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_QUIT_WARN" /* GXT: Quit */, "PM_QUIT_WARN9" /* GXT: Are you sure you want to quit to the Creator Menu? */, 18, "PM_QUIT_WARN5" /* GXT: All unsaved progress will be lost. */, false, -1, 0, 0, true, 0);
	}
}

void func_624(var uParam0)//Position - 0xBD4E9
{
	uParam0->f_742 = 0;
	MISC::CLEAR_BIT(&(Global_4718592.f_142643), 1);
}

void func_625(var uParam0)//Position - 0xBD505
{
	uParam0->f_741 = 0;
	MISC::CLEAR_BIT(&(Global_4718592.f_142643), 0);
}

void func_626(var uParam0, var uParam1)//Position - 0xBE41A
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = { uParam0->f_2 };
}

int func_627(int iParam0)//Position - 0xBE4C5
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 76:
			return 5;
		case 16:
			return 6;
		case 48:
			return 7;
		case 40:
			return 8;
		case 41:
			return 9;
		case 2:
			return 10;
		case 91:
			return 11;
		default:
	}
	return -1;
}

void func_628(int iParam0, bool bParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBE551
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		*iParam2 = 0;
		return;
	}
	MISC::CLEAR_BIT(iParam2, iParam0);
	iVar0 = (*iParam2 - (*iParam2 && uParam3));
	iVar0 = SYSTEM::SHIFT_RIGHT(iVar0, 1);
	MISC::CLEAR_BIT(&iVar0, 31);
	iVar1 = (*iParam2 - (*iParam2 && uParam4));
	*iParam2 = (iVar0 || iVar1);
}

void func_629(int iParam0, bool bParam1, var uParam2)//Position - 0xBE59E
{
	if (bParam1)
	{
		*uParam2 = -1;
		return;
	}
	if (*uParam2 > iParam0)
	{
		*uParam2 = (*uParam2 - 1);
	}
	else if (*uParam2 == iParam0)
	{
		*uParam2 = -1;
	}
}

void func_630(var uParam0)//Position - 0xBE7F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_631(int iParam0)//Position - 0xBE923
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 11:
			return 3;
		case 12:
			return 4;
		case 16:
			return 5;
		case 14:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 10:
			return 10;
		case 3:
			return 2;
		case 4:
			return 6;
		case 18:
			return 11;
		default:
	}
	return -1;
}

int func_632(int iParam0)//Position - 0xBECA0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 10;
		default:
	}
	return -1;
}

int func_633(int iParam0)//Position - 0xBF0B0
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 6;
		case 7:
			return 11;
		default:
	}
	return -1;
}

void func_634(int iParam0, var uParam1, var uParam2)//Position - 0xBF679
{
	int iVar0;
	iVar0 = -1;
	*uParam2 = SYSTEM::SHIFT_LEFT(iVar0, iParam0);
	*uParam1 = ((*uParam2 * -1) - 1);
}

void func_635()//Position - 0xBF88F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_115311 - 1))
	{
		Global_4718592.f_115312[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		Global_4718592.f_115312[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_4718592.f_115312[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4718592.f_115311 = 0;
}

void func_636(bool bParam0)//Position - 0xBFBC6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_78578[bParam0 /*450*/].f_13[iVar0] != 0)
		{
			Global_4980736.f_78578[bParam0 /*450*/].f_13[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_637(bool bParam0)//Position - 0xBFC0D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_78578[bParam0 /*450*/].f_13[iVar0] == 0)
		{
			Global_4980736.f_78578[bParam0 /*450*/].f_12 = 0;
		}
		iVar0++;
	}
}

void func_638()//Position - 0xC03B0
{
	Global_4980736.f_78574 = (Global_4980736.f_78574 - 1);
	if (Global_4980736.f_78574 < 0)
	{
		Global_4980736.f_78574 = 0;
	}
}

void func_639(int iParam0, int iParam1)//Position - 0xC03E7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (iParam1 == Global_4718592.f_111254[iVar0] && Global_4718592.f_111285[iVar0] > iParam0)
		{
			Global_4718592.f_111285[iVar0] = (Global_4718592.f_111285[iVar0] - 1);
		}
		iVar0++;
	}
}

char* func_640()//Position - 0xC05AD
{
	if ((((__LIB_11__::func_574(1) || Global_4718592 == 31) || Global_4718592 == 6) || Global_4718592 == 4) || Global_4718592.f_2 == 6)
	{
		return "HUD_MISSION_CREATOR_SOUNDSET";
	}
	else if (Global_4718592 == 1 || Global_4718592.f_2 == 5)
	{
		return "HUD_DEATHMATCH_SOUNDSET";
	}
	else if (__LIB_9__::func_794())
	{
		return "HUD_RACE_CREATOR_SOUNDSET";
	}
	return "";
}

void func_641(int iParam0, int iParam1)//Position - 0xC062F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (Global_4718592.f_111254[iVar0] == iParam1 && Global_4718592.f_111285[iVar0] == iParam0)
		{
			Global_4718592.f_111285[iVar0] = -1;
			Global_4718592.f_111254[iVar0] = -1;
			iVar1 = 0;
			while (iVar1 <= 12)
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					Global_4718592.f_111316[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
					Global_4718592.f_113297[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
					iVar2++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_642(var uParam0, int iParam1)//Position - 0xC06DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_4980736.f_78578[iVar0 /*450*/].f_204 == iParam1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_643(bool bParam0)//Position - 0xC0727
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_78578[bParam0 /*450*/].f_13[iVar0] != 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_644(bool bParam0)//Position - 0xC077E
{
	Global_4718592.f_658[bParam0 /*22957*/].f_6885[0] = 0f;
	Global_4718592.f_658[bParam0 /*22957*/].f_6781[0 /*3*/] = { 0f, 0f, 0f };
	Global_4718592.f_658[bParam0 /*22957*/].f_6833[0 /*3*/] = { 0f, 0f, 0f };
}

void func_645(bool bParam0)//Position - 0xC092B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_78578[bParam0 /*450*/].f_13[iVar0] != 0)
		{
			Global_4980736.f_78578[bParam0 /*450*/].f_12 = 0;
		}
		iVar0++;
	}
}

void func_646()//Position - 0xC0AB8
{
	int iVar0;
	struct<7> Var1;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_201777 - 1))
	{
		Global_4980736.f_201076[iVar0 /*7*/] = { Var1 };
		iVar0++;
	}
	Global_4980736.f_201777 = 0;
}

void func_647()//Position - 0xC0D2D
{
	Global_1922032 = 0;
	Global_1922033 = 0;
	Global_1922034 = 0;
	Global_1922035 = 0f;
}

void func_648(var uParam0, int iParam1)//Position - 0xC0E15
{
	if (HUD::DOES_BLIP_EXIST((*uParam0)[iParam1]))
	{
		HUD::REMOVE_BLIP(uParam0[iParam1]);
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_21[iParam1]))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_21[iParam1]));
	}
}

void func_649()//Position - 0xC0E4F
{
	Global_4718592.f_170137.f_2717[0 /*3*/] = { 0f, 0f, 0f };
	Global_4718592.f_170137.f_2717[1 /*3*/] = { 0f, 0f, 0f };
}

void func_650(var uParam0, bool bParam1)//Position - 0xC0E7F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= (Global_4980736.f_176055[iVar0] - 1))
		{
			if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*313*/])->f_1[iVar1]))
			{
				HUD::REMOVE_BLIP(&((uParam0[iVar0 /*313*/])->f_1[iVar1]));
			}
			if (GRAPHICS::IS_DECAL_ALIVE((uParam0[iVar0 /*313*/])->f_62[iVar1]))
			{
				GRAPHICS::REMOVE_DECAL((uParam0[iVar0 /*313*/])->f_62[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bParam1)
	{
		Global_4980736.f_176055[0] = 0;
		Global_4980736.f_176055[1] = 0;
		Global_4980736.f_176055[2] = 0;
		Global_4980736.f_176055[3] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			iVar1 = 0;
			while (iVar1 <= 59)
			{
				Global_4980736.f_179962[iVar0 /*3901*/][iVar1 /*65*/] = { 0f, 0f, 0f };
				Global_4980736.f_179962[iVar0 /*3901*/][iVar1 /*65*/].f_3 = 0f;
				Global_4980736.f_179962[iVar0 /*3901*/][iVar1 /*65*/].f_9 = 0;
				Global_4980736.f_179962[iVar0 /*3901*/][iVar1 /*65*/].f_7 = -1;
				Global_4980736.f_179962[iVar0 /*3901*/][iVar1 /*65*/].f_5 = 0;
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_651(var uParam0)//Position - 0xC11CD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_9182[iVar0] = 1;
		iVar0++;
	}
}

void func_652(int* iParam0)//Position - 0xC165C
{
	MISC::SET_BIT(iParam0, 10);
}

void func_653(var uParam0)//Position - 0xC166C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		uParam0->f_50[iVar0] = -1;
		iVar0++;
	}
}

int func_654(int iParam0)//Position - 0xC1752
{
	switch (iParam0)
	{
		case -1:
			return joaat("prop_amanda_note_01");
		case 0:
			return joaat("ch_prop_fingerprint_scanner_01a");
		case 1:
			return joaat("hei_prop_hei_keypad_01");
		case 2:
			return joaat("h4_prop_h4_fingerkeypad_01a");
		case 3:
			return joaat("prop_ld_keypad_01b");
		case 4:
			return joaat("reh_prop_reh_keypad_01a");
		case 5:
			return joaat("h4_prop_h4_casino_button_01a");
		case 6:
			return joaat("xm_prop_x17_powerbox_01");
		case 7:
			return joaat("h4_prop_h4_lever_box_01a");
		case 8:
			return joaat("h4_prop_h4_elecbox_01a");
		case 9:
			return joaat("v_ind_cf_crate2");
		case 10:
			return joaat("h4_prop_h4_crate_cloth_01a");
		case 11:
			return joaat("h4_prop_door_safe_01");
		case 12:
			return joaat("h4_prop_h4_safe_01a");
		case 13:
			return joaat("tr_prop_tr_ser_storage_01a");
		case 14:
			return joaat("tr_prop_tr_fuse_box_01a");
		case 15:
			return joaat("tr_prop_tr_adv_case_01a");
		case 16:
			return joaat("sf_prop_sf_el_box_01a");
		case 17:
			return joaat("gr_prop_gr_adv_case");
		case 18:
			return joaat("h4_prop_h4_chain_lock_01a");
		case 19:
			return joaat("tr_prop_tr_lock_01a");
		case 20:
			return joaat("h4_prop_h4_cash_stack_01a");
		case 21:
			return joaat("h4_prop_h4_coke_stack_01a");
		case 22:
			return joaat("h4_prop_h4_weed_stack_01a");
		case 23:
			return joaat("h4_prop_h4_gold_stack_01a");
		case 24:
			return joaat("w_sg_pumpshotgunh4");
		case 25:
			return joaat("w_pi_singleshoth4");
		case 26:
			return joaat("ch_prop_ch_ld_bomb_01a");
		case 27:
			return joaat("h4_prop_h4_ld_bomb_02a");
		case 28:
			return joaat("h4_prop_h4_painting_01a");
		case 29:
			return joaat("h4_prop_h4_painting_01b");
		case 30:
			return joaat("h4_prop_h4_painting_01c");
		case 31:
			return joaat("h4_prop_h4_painting_01d");
		case 32:
			return joaat("h4_prop_h4_painting_01e");
		case 33:
			return joaat("h4_prop_h4_painting_01f");
		case 34:
			return joaat("h4_prop_h4_painting_01g");
		case 35:
			return joaat("h4_prop_h4_painting_01h");
		case 36:
			return joaat("reh_prop_reh_bag_outfit_01a");
		case 37:
			return joaat("reh_prop_reh_laptop_01a");
		case 38:
			return joaat("reh_prop_reh_folder_01b");
		case 39:
			return joaat("reh_prop_reh_fuse_01a");
		default:
	}
	return 0;
}

int func_655(var uParam0, var uParam1)//Position - 0xC2D13
{
	if ((__LIB_9__::func_794() && (uParam1->f_550 == 25 || uParam1->f_550 == 66)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_525))
	{
		return 1;
	}
	return 0;
}

bool func_656(int* iParam0)//Position - 0xC2D60
{
	return (BitTest(iParam0->f_2909, 1) && (iParam0->f_550 == 4 || iParam0->f_550 == 5));
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC2D88
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*iParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_658(int* iParam0, int iParam1)//Position - 0xC2DD8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_2878)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (iParam1 == iParam0->f_2878[iVar0])
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 0;
}

int func_659(var uParam0)//Position - 0xC2E19
{
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_6)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_6, true))
	{
		return ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);
	}
	return 0;
}

int func_660(int* iParam0)//Position - 0xC2E53
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2878[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 30;
}

void func_661(var uParam0)//Position - 0xC2E86
{
	uParam0->f_525 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_25, uParam0->f_3, false, false, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_525, false, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_525, true, 1);
	ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_525, 500);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_525, false, false);
}

int func_662(struct<3> Param0)//Position - 0xC2ED1
{
	if (((((Param0.f_0 < 4500f && Param0.f_0 > -4500f) && Param0.f_1 < 7800f) && Param0.f_1 > -5000f) && Param0.f_2 < 3000f) && Param0.f_2 > -1400f)
	{
		return 1;
	}
	if (__LIB_0__::func_236())
	{
		if (((Param0.f_0 < 8000f && Param0.f_0 > 1000f) && Param0.f_1 < -1500f) && Param0.f_1 > -7500f)
		{
			return 1;
		}
	}
	return 0;
}

void func_663(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC373E
{
	GRAPHICS::DRAW_POLY(Param1, Param0, Param2, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param3, Param2, Param0, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param2, Param0, Param1, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param0, Param2, Param3, iParam4, iParam5, iParam6, iParam7);
}

Vector3 func_664(struct<3> Param0, struct<3> Param1)//Position - 0xC37A6
{
	struct<3> Var0;
	Var0 = { Param0 + Param1 };
	Var0 = { (Var0.f_0 / 2f), (Var0.f_1 / 2f), (Var0.f_2 / 2f) };
	return Var0;
}

void func_665(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, var uParam4)//Position - 0xC3BFA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	Var0 = { __LIB_0__::func_79(Param1) };
	Var1 = { __LIB_0__::func_620(Param2, Var0) };
	fVar2 = 11f;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		Var3 = { __LIB_0__::func_79(Param2 * FtoV(SYSTEM::COS((fVar2 * IntToFloat(iVar4)))) + Var1 * FtoV(SYSTEM::SIN((fVar2 * IntToFloat(iVar4))))) * Vector(fParam3, fParam3, fParam3) };
		*(uParam4[iVar4 /*3*/]) = { Param0 + Var3 };
		iVar4++;
	}
}

void func_666(int iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0xC3D06
{
	var uVar0;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 255;
			*iParam2 = 0;
			*iParam3 = 255;
			break;
		case 1:
			*iParam1 = 200;
			*iParam2 = 0;
			*iParam3 = 0;
			break;
		case 2:
			*iParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 255;
			break;
		case 3:
			*iParam1 = 0;
			*iParam2 = 255;
			*iParam3 = 0;
			break;
		case 4:
			*iParam1 = 255;
			*iParam2 = 120;
			*iParam3 = 0;
			break;
		case 5:
			*iParam1 = 0;
			*iParam2 = 128;
			*iParam3 = 255;
			break;
		case 6:
			*iParam1 = 128;
			*iParam2 = 0;
			*iParam3 = 255;
			break;
		case 7:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 55;
			break;
		case 8:
			*iParam1 = 128;
			*iParam2 = 64;
			*iParam3 = 255;
			break;
		case 9:
			*iParam1 = 255;
			*iParam2 = 132;
			*iParam3 = 102;
			break;
		case 19:
			*iParam1 = 125;
			*iParam2 = 255;
			*iParam3 = 125;
			break;
		case 10:
			*iParam1 = 64;
			*iParam2 = 255;
			*iParam3 = 200;
			break;
		case 11:
			*iParam1 = 51;
			*iParam2 = 255;
			*iParam3 = 153;
			break;
		case 12:
			*iParam1 = 255;
			*iParam2 = 102;
			*iParam3 = 178;
			break;
		case 13:
			*iParam1 = 0;
			*iParam2 = 190;
			*iParam3 = 130;
			break;
		case 14:
			*iParam1 = 127;
			*iParam2 = 0;
			*iParam3 = 62;
			break;
		case 15:
			*iParam1 = 227;
			*iParam2 = 111;
			*iParam3 = 176;
			break;
		case 16:
		case 61:
			*iParam1 = 255;
			*iParam2 = 171;
			*iParam3 = 0;
			break;
		case 17:
			*iParam1 = 0;
			*iParam2 = 128;
			*iParam3 = 0;
			break;
		case 18:
			*iParam1 = 255;
			*iParam2 = 100;
			*iParam3 = 100;
			break;
		case 28:
			*iParam1 = 255;
			*iParam2 = 128;
			*iParam3 = 0;
			break;
		case 29:
			*iParam1 = 0;
			*iParam2 = 128;
			*iParam3 = 255;
			break;
		case 31:
			*iParam1 = 170;
			*iParam2 = 170;
			*iParam3 = 255;
			break;
		case 36:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
		case 34:
			*iParam1 = 255;
			*iParam2 = 80;
			*iParam3 = 160;
			break;
		case 35:
			*iParam1 = 255;
			*iParam2 = 1;
			*iParam3 = 1;
			break;
		case 40:
			*iParam1 = 255;
			*iParam2 = 90;
			*iParam3 = 1;
			break;
		case 41:
			*iParam1 = 200;
			*iParam2 = 225;
			*iParam3 = 50;
			break;
		case 42:
			*iParam1 = 225;
			*iParam2 = 175;
			*iParam3 = 50;
			break;
		case 43:
			*iParam1 = 140;
			*iParam2 = 0;
			*iParam3 = 0;
			break;
		case 45:
			*iParam1 = 0;
			*iParam2 = 140;
			*iParam3 = 0;
			break;
		case 46:
			*iParam1 = 190;
			*iParam2 = 25;
			*iParam3 = 65;
			break;
		case 47:
			*iParam1 = 255;
			*iParam2 = 0;
			*iParam3 = 50;
			break;
		case 49:
			*iParam1 = 65;
			*iParam2 = 65;
			*iParam3 = 185;
			break;
		case 52:
			*iParam1 = 215;
			*iParam2 = 5;
			*iParam3 = 5;
			break;
		case 67:
			*iParam1 = 180;
			*iParam2 = 10;
			*iParam3 = 10;
			break;
		case 63:
			HUD::GET_HUD_COLOUR(21, iParam1, iParam2, iParam3, &uVar0);
			break;
		case 59:
			HUD::GET_HUD_COLOUR(52, iParam1, iParam2, iParam3, &uVar0);
			break;
		default:
			HUD::GET_HUD_COLOUR(iParam0, iParam1, iParam2, iParam3, &uVar0);
			break;
	}
}

int func_667()//Position - 0xC40CA
{
	return Global_1837337.f_441[Global_1837337.f_448];
}

void func_668(int* iParam0)//Position - 0xC40E2
{
	iParam0->f_3274 = 1;
}

int func_669()//Position - 0xC43AA
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 256;
	}
	return 203;
}

void func_670(int iParam0)//Position - 0xC44A3
{
	iParam0->f_763 = 1;
}

void func_671(int* iParam0, int iParam1)//Position - 0xC44B9
{
	if (Global_4980736.f_5[iParam1 /*273*/] == 1)
	{
		Global_4718592.f_142664 = { Global_4980736.f_5[iParam1 /*273*/].f_57 };
		Global_4718592.f_142667 = { Global_4980736.f_5[iParam1 /*273*/].f_60 };
		Global_4980736.f_5[iParam1 /*273*/].f_57 = { 0f, 0f, 0f };
		Global_4980736.f_5[iParam1 /*273*/].f_60 = { 0f, 0f, 0f };
	}
}

void func_672(var uParam0, var uParam1, int iParam2)//Position - 0xC45B9
{
	int iVar0;
	if (*uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam1)[iVar0] = ((*uParam0)[iVar0] * iParam2);
		iVar0++;
	}
}

int func_673(var uParam0)//Position - 0xC460D
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || !uParam0->f_2742)
	{
		return 0;
	}
	return BitTest(uParam0->f_2739, 1);
}

bool func_674(int* iParam0)//Position - 0xC4669
{
	if (iParam0->f_550 != 40)
	{
		return 0;
	}
	return iParam0->f_551 > -1;
}

int func_675(int iParam0)//Position - 0xC46C7
{
	return Global_4980736.f_195934[iParam0 /*111*/].f_10;
}

int func_676(int iParam0)//Position - 0xC476C
{
	if (iParam0 == 1 || iParam0 == 3)
	{
		return 1;
	}
	return 0;
}

int func_677(int iParam0)//Position - 0xC479D
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			return 1;
			break;
	}
	return 0;
}

bool func_678(int iParam0)//Position - 0xC4A86
{
	return ((iParam0 == 226 || iParam0 == 483) || iParam0 == 227);
}

void func_679(int* iParam0)//Position - 0xC5106
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 126)
	{
		iParam0->f_283[iVar0] = "";
		iVar0++;
	}
}

void func_680(int* iParam0)//Position - 0xC512D
{
	if (iParam0->f_2852 + 1 < 10 && iParam0->f_2841[iParam0->f_2852 + 1] != 0)
	{
		iParam0->f_2841[iParam0->f_2852 + 1] = 0;
	}
	if (iParam0->f_2852 + 2 < 9 && iParam0->f_2841[iParam0->f_2852 + 2] != 0)
	{
		iParam0->f_2841[iParam0->f_2852 + 2] = 0;
	}
}

bool func_681()//Position - 0xC7A52
{
	return Global_1922033;
}

bool func_682(int* iParam0)//Position - 0xC7A92
{
	return iParam0->f_547;
}

void func_683(int iParam0, var uParam1)//Position - 0xC9005
{
	*uParam1 = iParam0;
}

int func_684(int iParam0, bool bParam1)//Position - 0xCCBD1
{
	switch (iParam0)
	{
		case 649:
			switch (bParam1)
			{
				case 4:
					return 189;
				case 5:
					return 3;
				case 6:
					return 23;
				case 7:
					return 20;
				case 9:
					return 45;
				case 16:
					return 140;
				case 17:
					return 22;
				case 18:
					return 150;
				case 19:
					return 151;
				case 20:
					return 152;
				case 21:
					return 153;
				case 22:
					return 154;
				case 23:
					return 155;
				case 24:
					return 156;
				case 25:
					return 157;
				case 26:
					return 158;
				case 27:
					return 159;
				case 29:
					return 163;
				case 30:
					return 13;
				case 31:
					return 12;
				case 35:
					return 196;
				case 39:
					return 218;
				case 40:
					return 219;
				case 43:
					return 225;
				case 44:
					return 14;
				case 45:
					return 226;
				case 46:
					return 227;
				case 47:
					return 70;
				default:
			}
			break;
		case 665:
			switch (bParam1)
			{
				case 0:
					return 193;
				default:
			}
			break;
		case 674:
			switch (bParam1)
			{
				case 1:
					return 198;
				case 2:
					return 199;
				case 4:
					return 201;
				case 15:
					return 202;
				case 16:
					return 203;
				case 17:
					return 204;
				case 18:
					return 205;
				case 19:
					return 206;
				case 20:
					return 207;
				case 21:
					return 208;
				case 22:
					return 209;
				case 23:
					return 210;
				case 24:
					return 211;
				default:
			}
			break;
		case 675:
			switch (bParam1)
			{
				case 0:
					return 200;
				default:
			}
			break;
		case 656:
			switch (bParam1)
			{
				case 0:
					return 141;
				case 1:
					return 142;
				case 2:
					return 143;
				case 3:
					return 144;
				case 4:
					return 145;
				case 5:
					return 146;
				case 6:
					return 147;
				case 7:
					return 148;
				case 8:
					return 149;
				case 9:
					return 167;
				case 10:
					return 168;
				case 11:
					return 171;
				case 12:
					return 174;
				case 13:
					return 177;
				case 14:
					return 182;
				default:
			}
			break;
		case 651:
			switch (bParam1)
			{
				case 0:
					return 137;
				default:
			}
			break;
		case 654:
			switch (bParam1)
			{
				case 0:
					return 138;
				default:
			}
			break;
		case 655:
			switch (bParam1)
			{
				case 0:
					return 139;
				default:
			}
			break;
		case 677:
			switch (bParam1)
			{
				case 0:
					return 212;
				default:
			}
			break;
		case 653:
			switch (bParam1)
			{
				case 0:
					return 213;
				default:
			}
			break;
		case 659:
			switch (bParam1)
			{
				case 0:
					return 197;
				case 1:
					return 214;
				case 3:
					return 215;
				case 5:
					return 216;
				case 7:
					return 217;
				default:
			}
			break;
		case 660:
			switch (bParam1)
			{
				case 0:
					return 195;
				case 2:
					return 223;
				default:
			}
			break;
		case 661:
			switch (bParam1)
			{
				case 0:
					return 196;
				default:
			}
			break;
		case 662:
			switch (bParam1)
			{
				case 0:
					return 221;
				default:
			}
			break;
		case 663:
			switch (bParam1)
			{
				case 0:
					return 222;
				default:
			}
			break;
		case 664:
			switch (bParam1)
			{
				case 0:
					return 160;
				case 1:
					return 161;
				case 2:
					return 162;
				default:
			}
			break;
	}
	return 228;
}

int func_685(int iParam0, int iParam1)//Position - 0xCD0DD
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	else
	{
		return iParam1;
	}
	return 1;
}

void func_686(var uParam0, int iParam1)//Position - 0xCF496
{
	if (uParam0->f_666[iParam1] > -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_666[iParam1]);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_666[iParam1]);
		uParam0->f_666[iParam1] = -1;
	}
}

void func_687(var uParam0, int iParam1)//Position - 0xCF4CF
{
	if (uParam0->f_633[iParam1] > -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_633[iParam1]);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_633[iParam1]);
		uParam0->f_633[iParam1] = -1;
	}
}

int func_688(var uParam0, char* sParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0xCFA30
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	iVar1 = -1;
	if (bParam4)
	{
		iVar1 = AUDIO::GET_SOUND_ID();
	}
	if (__LIB_13__::func_163(iVar0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, sParam1, iParam3, "DLC_AW_Arena_Traps_Turntable_Sounds", NETWORK::NETWORK_IS_ACTIVITY_SESSION(), 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, sParam1, iParam3, "DLC_AW_Arena_Traps_Rams_Sounds", NETWORK::NETWORK_IS_ACTIVITY_SESSION(), 0);
	}
	return iVar1;
}

int func_689(int iParam0)//Position - 0xCFC34
{
	if (__LIB_13__::func_162(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_690(var uParam0, bool bParam1)//Position - 0xD1211
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	iVar1 = 150;
	if (__LIB_13__::func_163(iVar0))
	{
		iVar1 = 0;
	}
	if (__LIB_13__::func_162(iVar0))
	{
		iVar1 = 8500;
	}
	return iVar1;
}

int func_691(int iParam0)//Position - 0xD1339
{
	int iVar0;
	iVar0 = 2000;
	if (__LIB_13__::func_163(iParam0))
	{
		iVar0 = 0;
	}
	if (__LIB_13__::func_162(iParam0))
	{
		iVar0 = 10500;
	}
	return iVar0;
}

bool func_692(int iParam0, var uParam1)//Position - 0xD157C
{
	return BitTest(uParam1->f_1, iParam0);
}

bool func_693(int iParam0)//Position - 0xD1F09
{
	return (iParam0 >= 0 && iParam0 < 11);
}

void func_694(int iParam0)//Position - 0xD4BC0
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 0.25f);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, false);
}

void func_695(int iParam0, int iParam1)//Position - 0xD6258
{
	Global_2689235[iParam0 /*453*/].f_238 = iParam1;
}

void func_696(int iParam0)//Position - 0xE232B
{
	Global_2725379 = iParam0;
}

int func_697(bool bParam0)//Position - 0xE72FA
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("WEAPON_UNARMED");
	iVar1 = 0;
	if (!bParam0 && __LIB_1__::func_556(256, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL");
		iVar1 = __LIB_1__::func_556(256, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(286, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_APPISTOL");
		iVar1 = __LIB_1__::func_556(286, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(266, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPISTOL");
		iVar1 = __LIB_1__::func_556(266, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(296, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MICROSMG");
		iVar1 = __LIB_1__::func_556(296, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(306, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG");
		iVar1 = __LIB_1__::func_556(306, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(389, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SAWNOFFSHOTGUN");
		iVar1 = __LIB_1__::func_556(389, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(417, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STUNGUN");
		iVar1 = __LIB_1__::func_556(417, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(468, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADE");
		iVar1 = __LIB_1__::func_556(468, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(477, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMOKEGRENADE");
		iVar1 = __LIB_1__::func_556(477, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(485, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STICKYBOMB");
		iVar1 = __LIB_1__::func_556(485, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(494, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MOLOTOV");
		iVar1 = __LIB_1__::func_556(494, -1, 0);
	}
	if (__LIB_1__::func_556(198, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNIFE");
		iVar1 = __LIB_1__::func_556(198, -1, 0);
	}
	if (__LIB_1__::func_556(206, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NIGHTSTICK");
		iVar1 = __LIB_1__::func_556(206, -1, 0);
	}
	if (__LIB_1__::func_556(213, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CROWBAR");
		iVar1 = __LIB_1__::func_556(213, -1, 0);
	}
	if (__LIB_1__::func_556(234, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HAMMER");
		iVar1 = __LIB_1__::func_556(234, -1, 0);
	}
	if (__LIB_1__::func_556(241, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BAT");
		iVar1 = __LIB_1__::func_556(241, -1, 0);
	}
	if (__LIB_1__::func_556(248, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GOLFCLUB");
		iVar1 = __LIB_1__::func_556(248, -1, 0);
	}
	if (__LIB_1__::func_556(1736, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BOTTLE");
		iVar1 = __LIB_1__::func_556(1736, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(276, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL50");
		iVar1 = __LIB_1__::func_556(276, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(316, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSMG");
		iVar1 = __LIB_1__::func_556(316, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(326, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE");
		iVar1 = __LIB_1__::func_556(326, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(335, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE");
		iVar1 = __LIB_1__::func_556(335, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(10883, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = __LIB_1__::func_556(10883, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(1746, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL");
		iVar1 = __LIB_1__::func_556(1746, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(10894, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE");
		iVar1 = __LIB_1__::func_556(10894, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(10874, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYPISTOL");
		iVar1 = __LIB_1__::func_556(10874, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(344, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ADVANCEDRIFLE");
		iVar1 = __LIB_1__::func_556(344, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(353, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MG");
		iVar1 = __LIB_1__::func_556(353, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(362, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG");
		iVar1 = __LIB_1__::func_556(362, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(371, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTMG");
		iVar1 = __LIB_1__::func_556(371, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(380, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN");
		iVar1 = __LIB_1__::func_556(380, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(399, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPSHOTGUN");
		iVar1 = __LIB_1__::func_556(399, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(408, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSHOTGUN");
		iVar1 = __LIB_1__::func_556(408, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(427, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNIPERRIFLE");
		iVar1 = __LIB_1__::func_556(427, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(436, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER");
		iVar1 = __LIB_1__::func_556(436, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(445, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADELAUNCHER");
		iVar1 = __LIB_1__::func_556(445, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(452, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_RPG");
		iVar1 = __LIB_1__::func_556(452, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(461, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINIGUN");
		iVar1 = __LIB_1__::func_556(461, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11170, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_VINTAGEPISTOL");
		iVar1 = __LIB_1__::func_556(11170, -1, 0);
	}
	if (__LIB_1__::func_556(11160, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DAGGER");
		iVar1 = __LIB_1__::func_556(11160, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11180, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FIREWORK");
		iVar1 = __LIB_1__::func_556(11180, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11190, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MUSKET");
		iVar1 = __LIB_1__::func_556(11190, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11294, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PROXMINE");
		iVar1 = __LIB_1__::func_556(11294, -1, 0);
	}
	if (__LIB_1__::func_556(11286, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HATCHET");
		iVar1 = __LIB_1__::func_556(11286, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11302, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HOMINGLAUNCHER");
		iVar1 = __LIB_1__::func_556(11302, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(10883, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = __LIB_1__::func_556(10883, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(10903, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GUSENBERG");
		iVar1 = __LIB_1__::func_556(10903, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11268, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSHOTGUN");
		iVar1 = __LIB_1__::func_556(11268, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11278, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE");
		iVar1 = __LIB_1__::func_556(11278, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11312, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPDW");
		iVar1 = __LIB_1__::func_556(11312, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11329, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANPISTOL");
		iVar1 = __LIB_1__::func_556(11329, -1, 0);
	}
	if (__LIB_1__::func_556(11320, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNUCKLE");
		iVar1 = __LIB_1__::func_556(11320, -1, 0);
	}
	if (__LIB_1__::func_556(11337, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHETE");
		iVar1 = __LIB_1__::func_556(11337, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11347, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHINEPISTOL");
		iVar1 = __LIB_1__::func_556(11347, -1, 0);
	}
	if (__LIB_1__::func_556(11383, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FLASHLIGHT");
		iVar1 = __LIB_1__::func_556(11383, -1, 0);
	}
	if (__LIB_1__::func_556(11411, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SWITCHBLADE");
		iVar1 = __LIB_1__::func_556(11411, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11403, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER");
		iVar1 = __LIB_1__::func_556(11403, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11375, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DBSHOTGUN");
		iVar1 = __LIB_1__::func_556(11375, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11365, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTRIFLE");
		iVar1 = __LIB_1__::func_556(11365, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11454, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_AUTOSHOTGUN");
		iVar1 = __LIB_1__::func_556(11454, -1, 0);
	}
	if (__LIB_1__::func_556(11462, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BATTLEAXE");
		iVar1 = __LIB_1__::func_556(11462, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11470, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTLAUNCHER");
		iVar1 = __LIB_1__::func_556(11470, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11480, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINISMG");
		iVar1 = __LIB_1__::func_556(11480, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11488, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PIPEBOMB");
		iVar1 = __LIB_1__::func_556(11488, -1, 0);
	}
	if (__LIB_1__::func_556(11496, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_POOLCUE");
		iVar1 = __LIB_1__::func_556(11496, -1, 0);
	}
	if (__LIB_1__::func_556(227, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_WRENCH");
		iVar1 = __LIB_1__::func_556(227, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11942, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL_MK2");
		iVar1 = __LIB_1__::func_556(11942, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11952, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG_MK2");
		iVar1 = __LIB_1__::func_556(11952, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11932, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER_MK2");
		iVar1 = __LIB_1__::func_556(11932, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11922, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG_MK2");
		iVar1 = __LIB_1__::func_556(11922, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11902, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE_MK2");
		iVar1 = __LIB_1__::func_556(11902, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11912, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE_MK2");
		iVar1 = __LIB_1__::func_556(11912, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11962, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE_MK2");
		iVar1 = __LIB_1__::func_556(11962, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11982, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE_MK2");
		iVar1 = __LIB_1__::func_556(11982, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11972, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN_MK2");
		iVar1 = __LIB_1__::func_556(11972, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(11992, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER_MK2");
		iVar1 = __LIB_1__::func_556(11992, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(12012, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL_MK2");
		iVar1 = __LIB_1__::func_556(12012, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(12022, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE_MK2");
		iVar1 = __LIB_1__::func_556(12022, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(12002, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DOUBLEACTION");
		iVar1 = __LIB_1__::func_556(12002, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(12834, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NAVYREVOLVER");
		iVar1 = __LIB_1__::func_556(12834, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_556(12824, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CERAMICPISTOL");
		iVar1 = __LIB_1__::func_556(12824, -1, 0);
	}
	return iVar0;
}

int func_698(int iParam0, int iParam1)//Position - 0xFAC86
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_PISTOL_FMJ"):
					return __LIB_1__::func_556(5583, -1, 0);
					break;
				case joaat("AMMO_PISTOL_HOLLOWPOINT"):
					return __LIB_1__::func_556(5584, -1, 0);
					break;
				case joaat("AMMO_PISTOL_INCENDIARY"):
					return __LIB_1__::func_556(5585, -1, 0);
					break;
				case joaat("AMMO_PISTOL_TRACER"):
					return __LIB_1__::func_556(5586, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return __LIB_1__::func_556(5567, -1, 0);
					break;
				case joaat("AMMO_RIFLE_FMJ"):
					return __LIB_1__::func_556(5568, -1, 0);
					break;
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return __LIB_1__::func_556(5569, -1, 0);
					break;
				case joaat("AMMO_RIFLE_TRACER"):
					return __LIB_1__::func_556(5570, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return __LIB_1__::func_556(5571, -1, 0);
					break;
				case joaat("AMMO_RIFLE_FMJ"):
					return __LIB_1__::func_556(5572, -1, 0);
					break;
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return __LIB_1__::func_556(5573, -1, 0);
					break;
				case joaat("AMMO_RIFLE_TRACER"):
					return __LIB_1__::func_556(5574, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_MG_ARMORPIERCING"):
					return __LIB_1__::func_556(5575, -1, 0);
					break;
				case joaat("AMMO_MG_FMJ"):
					return __LIB_1__::func_556(5576, -1, 0);
					break;
				case joaat("AMMO_MG_INCENDIARY"):
					return __LIB_1__::func_556(5577, -1, 0);
					break;
				case joaat("AMMO_MG_TRACER"):
					return __LIB_1__::func_556(5578, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SNIPER_ARMORPIERCING"):
					return __LIB_1__::func_556(5579, -1, 0);
					break;
				case joaat("AMMO_SNIPER_EXPLOSIVE"):
					return __LIB_1__::func_556(5580, -1, 0);
					break;
				case joaat("AMMO_SNIPER_FMJ"):
					return __LIB_1__::func_556(5581, -1, 0);
					break;
				case joaat("AMMO_SNIPER_INCENDIARY"):
					return __LIB_1__::func_556(5582, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SMG_FMJ"):
					return __LIB_1__::func_556(5587, -1, 0);
					break;
				case joaat("AMMO_SMG_HOLLOWPOINT"):
					return __LIB_1__::func_556(5588, -1, 0);
					break;
				case joaat("AMMO_SMG_INCENDIARY"):
					return __LIB_1__::func_556(5589, -1, 0);
					break;
				case joaat("AMMO_SMG_TRACER"):
					return __LIB_1__::func_556(5590, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SHOTGUN_ARMORPIERCING"):
					return __LIB_1__::func_556(6398, -1, 0);
					break;
				case joaat("AMMO_SHOTGUN_EXPLOSIVE"):
					return __LIB_1__::func_556(6399, -1, 0);
					break;
				case joaat("AMMO_SHOTGUN_HOLLOWPOINT"):
					return __LIB_1__::func_556(6400, -1, 0);
					break;
				case joaat("AMMO_SHOTGUN_INCENDIARY"):
					return __LIB_1__::func_556(6401, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return __LIB_1__::func_556(6402, -1, 0);
					break;
				case joaat("AMMO_RIFLE_FMJ"):
					return __LIB_1__::func_556(6403, -1, 0);
					break;
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return __LIB_1__::func_556(6404, -1, 0);
					break;
				case joaat("AMMO_RIFLE_TRACER"):
					return __LIB_1__::func_556(6405, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SNIPER_ARMORPIERCING"):
					return __LIB_1__::func_556(6406, -1, 0);
					break;
				case joaat("AMMO_SNIPER_FMJ"):
					return __LIB_1__::func_556(6407, -1, 0);
					break;
				case joaat("AMMO_SNIPER_INCENDIARY"):
					return __LIB_1__::func_556(6408, -1, 0);
					break;
				case joaat("AMMO_SNIPER_TRACER"):
					return __LIB_1__::func_556(6409, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_PISTOL_FMJ"):
					return __LIB_1__::func_556(6410, -1, 0);
					break;
				case joaat("AMMO_PISTOL_HOLLOWPOINT"):
					return __LIB_1__::func_556(6411, -1, 0);
					break;
				case joaat("AMMO_PISTOL_INCENDIARY"):
					return __LIB_1__::func_556(6412, -1, 0);
					break;
				case joaat("AMMO_PISTOL_TRACER"):
					return __LIB_1__::func_556(6413, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_PISTOL_FMJ"):
					return __LIB_1__::func_556(6414, -1, 0);
					break;
				case joaat("AMMO_PISTOL_HOLLOWPOINT"):
					return __LIB_1__::func_556(6415, -1, 0);
					break;
				case joaat("AMMO_PISTOL_INCENDIARY"):
					return __LIB_1__::func_556(6416, -1, 0);
					break;
				case joaat("AMMO_PISTOL_TRACER"):
					return __LIB_1__::func_556(6417, -1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return __LIB_1__::func_556(6418, -1, 0);
					break;
				case joaat("AMMO_RIFLE_FMJ"):
					return __LIB_1__::func_556(6419, -1, 0);
					break;
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return __LIB_1__::func_556(6420, -1, 0);
					break;
				case joaat("AMMO_RIFLE_TRACER"):
					return __LIB_1__::func_556(6421, -1, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_699(int iParam0)//Position - 0x1276E1
{
	return Global_1659759[__LIB_1__::func_443(iParam0)];
}

void func_700()//Position - 0x14A393
{
	Global_2703735.f_4.f_15 = PLAYER::PLAYER_PED_ID();
}

void func_701(int* iParam0)//Position - 0x14C18B
{
	if (BitTest(*iParam0, 0))
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
}

int func_702(int iParam0)//Position - 0x14C771
{
	switch (iParam0)
	{
		case 1:
		case 59:
			return 4500;
		case 2:
			return 3000;
		case 57:
			return 10000;
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 7:
		case 8:
		case 9:
		case 10:
			return 10000;
		case 25:
		case 26:
		case 61:
		case 29:
		case 30:
			return 4500;
		case 28:
			return 8000;
		case 39:
		case 37:
		case 38:
		case 43:
		case 44:
		case 51:
		case 52:
			return 2200;
		case 58:
			return 7000;
		case 27:
		case 84:
			return 3000;
		case 20:
		case 21:
		case 18:
		case 19:
		case 24:
		case 45:
		case 31:
		case 32:
		case 33:
		case 36:
		case 22:
		case 47:
		case 46:
		case 55:
		case 48:
		case 49:
		case 50:
		case 62:
			return 6000;
		case 63:
		case 64:
		case 65:
		case 66:
		case 78:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 8000;
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 108:
		case 109:
		case 110:
		case 112:
			return 12000;
		case 98:
		case 99:
		case 96:
		case 97:
		case 95:
		case 105:
			return 7500;
		case 111:
			return 13000;
		default:
	}
	return 3000;
}

void func_703()//Position - 0x14CB04
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (Global_2703735.f_2400[iVar0 /*80*/].f_1)
		{
			case 15:
			case 16:
			case 17:
			case 20:
			case 21:
			case 18:
			case 19:
			case 22:
			case 39:
			case 43:
			case 44:
			case 47:
			case 46:
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
				break;
		}
		iVar0++;
	}
}

int func_704(int iParam0)//Position - 0x14CC37
{
	if ((((((((iParam0 == 1 || iParam0 == 59) || iParam0 == 100) || iParam0 == 101) || iParam0 == 102) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_705(int iParam0)//Position - 0x14CCA3
{
	switch (iParam0)
	{
		case 1:
		case 59:
		case 13:
		case 53:
		case 36:
		case 29:
		case 30:
		case 54:
		case 56:
			return 0;
		default:
	}
	return 1;
}

bool func_706()//Position - 0x14FCC4
{
	return Global_2703735.f_2724 != 0;
}

int func_707(var uParam0, bool bParam1)//Position - 0x150003
{
	if (!bParam1)
	{
		if (__LIB_0__::func_517(uParam0->f_69, 8192))
		{
			return Global_1931432;
		}
	}
	return 0;
}

bool func_708(var uParam0)//Position - 0x150082
{
	return __LIB_0__::func_517(uParam0->f_69, 512);
}

bool func_709(var uParam0)//Position - 0x150095
{
	return __LIB_0__::func_517(uParam0->f_69, 2048);
}

int func_710(int iParam0)//Position - 0x1500F2
{
	switch (iParam0)
	{
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 1;
		default:
	}
	return 0;
}

void func_711(char* sParam0, int iParam1)//Position - 0x151D12
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_712(int iParam0)//Position - 0x151D33
{
	switch (iParam0)
	{
		case 85:
			return 1;
		default:
	}
	return 0;
}

float func_713(int iParam0)//Position - 0x151FD1
{
	float fVar0;
	fVar0 = 0f;
	if (iParam0 == 14)
	{
		fVar0 = Global_262145.f_4258 /* Tunable: XP_TUNABLE_REVENGE_KILLSTREAK */;
	}
	else if (iParam0 == 39)
	{
		fVar0 = Global_262145.f_4259 /* Tunable: XP_TUNABLE_KILL_POWER_PLAY_PLAYER */;
	}
	return fVar0;
}

int func_714()//Position - 0x1520FA
{
	return __LIB_1__::func_556(1298, -1, 0);
}

struct<16> func_715(int iParam0, int iParam1)//Position - 0x15219B
{
	struct<16> Var0;
	StringCopy(&Var0, "RANK_G", 64);
	if (iParam1 == 9 || iParam1 == 8)
	{
		StringConCat(&Var0, "fm", 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam1, 64);
	}
	StringConCat(&Var0, "_", 64);
	StringIntConCat(&Var0, __LIB_13__::func_142(iParam0), 64);
	return Var0;
}

char* func_716(int iParam0, bool bParam1)//Position - 0x1521E8
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 % 100);
	if (iVar0 >= 11 && iVar0 <= 19)
	{
		if (bParam1)
		{
			return "BM_NPOS_TH" /* GXT: ~1~th place */;
		}
		else
		{
			return "BM_POS_TH" /* GXT: th place */;
		}
	}
	iVar1 = (iVar0 % 10);
	switch (iVar1)
	{
		case 0:
			if (bParam1)
			{
				return "BM_NPOS_TH" /* GXT: ~1~th place */;
			}
			else
			{
				return "BM_POS_TH" /* GXT: th place */;
			}
			break;
		case 1:
			if (bParam1)
			{
				return "BM_NPOS_ST" /* GXT: ~1~st place */;
			}
			else
			{
				return "BM_POS_ST" /* GXT: st place */;
			}
			break;
		case 2:
			if (bParam1)
			{
				return "BM_NPOS_ND" /* GXT: ~1~nd place */;
			}
			else
			{
				return "BM_POS_ND" /* GXT: nd place */;
			}
			break;
		case 3:
			if (bParam1)
			{
				return "BM_NPOS_RD" /* GXT: ~1~rd place */;
			}
			else
			{
				return "BM_POS_RD" /* GXT: rd place */;
			}
			break;
	}
	if (bParam1)
	{
		return "BM_NPOS_TH" /* GXT: ~1~th place */;
	}
	return "BM_POS_TH" /* GXT: th place */;
}

void func_717(int iParam0, char* sParam1)//Position - 0x152435
{
	StringCopy(sParam1, "<C>", 64);
	StringConCat(sParam1, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	StringConCat(sParam1, "</C>", 64);
}

void func_718(char* sParam0)//Position - 0x15247A
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_719(var uParam0, char* sParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x152562
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	uParam0->f_9 = uParam2;
	uParam0->f_10 = uParam3;
	if (bParam4)
	{
		uParam0->f_11 = 2;
	}
	else
	{
		uParam0->f_11 = 1;
	}
}

void func_720(var uParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x152590
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = uParam3;
	uParam0->f_11 = 0;
}

bool func_721()//Position - 0x152DE2
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_465 == 1;
}

void func_722()//Position - 0x152F3E
{
	AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_Blade_Scene");
}

char* func_723(var uParam0)//Position - 0x152F6C
{
	if (__LIB_0__::func_965(uParam0->f_1))
	{
		return "MIDSIZED_MESSAGE";
	}
	return "MP_BIG_MESSAGE_FREEMODE";
}

int func_724(var uParam0)//Position - 0x153279
{
	int iVar0;
	__LIB_15__::func_55(uParam0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!(uParam0[iVar0 /*13*/])->f_6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

Vector3 func_725(float fParam0, float fParam1)//Position - 0x1532CF
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = (1f / 1280f);
	fVar1 = (1f / 720f);
	Var2.f_0 = (fParam0 * fVar0);
	Var2.f_1 = (fParam1 * fVar1);
	return Var2;
}

char* func_726(int iParam0)//Position - 0x153E07
{
	switch (iParam0)
	{
		case 0:
			return "Shunt";
		case 1:
			return "Bomb";
		case 2:
			return "Repair";
		case 3:
			return "";
		case 4:
			return "Rockets";
		case 5:
			return "KineticMine";
		case 6:
			return "";
		case 7:
			return "EMPMine";
		case 8:
			return "OilMine";
		case 9:
			return "Tank";
		case 10:
			return "Amped";
		case 11:
			return "Truck";
		default:
	}
	return "";
}

int func_727()//Position - 0x153F16
{
	return Global_4718592.f_176701.f_1;
}

int func_728()//Position - 0x153F67
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 1001)) / 10f));
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		iVar2 = (iVar2 + Global_4718592.f_176701.f_2[iVar1]);
		if (iVar2 >= iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 13;
}

int func_729(var uParam0)//Position - 0x155988
{
	*uParam0 = OBJECT::CONVERT_OLD_PICKUP_TYPE_TO_NEW(*uParam0);
	switch (*uParam0)
	{
		case joaat("PICKUP_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
		case joaat("PICKUP_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_COMPACTRIFLE"):
		case joaat("PICKUP_WEAPON_DBSHOTGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
		case joaat("PICKUP_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_WEAPON_APPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
		case joaat("PICKUP_WEAPON_MICROSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
		case joaat("PICKUP_WEAPON_SMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMG"):
		case joaat("PICKUP_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
		case joaat("PICKUP_WEAPON_COMBATMG"):
		case joaat("PICKUP_WEAPON_MG"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE"):
		case joaat("PICKUP_WEAPON_ADVANCEDRIFLE"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN"):
		case joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
		case joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"):
		case joaat("PICKUP_WEAPON_SNIPERRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER"):
		case joaat("PICKUP_WEAPON_GRENADELAUNCHER"):
		case joaat("PICKUP_WEAPON_RPG"):
		case joaat("PICKUP_WEAPON_MINIGUN"):
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_KNIFE"):
		case joaat("PICKUP_WEAPON_BAT"):
		case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
		case joaat("PICKUP_WEAPON_MACHINEPISTOL"):
		case joaat("PICKUP_WEAPON_RUBBERGUN"):
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
		case joaat("PICKUP_WEAPON_HAMMER"):
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
		case joaat("PICKUP_WEAPON_STUNGUN"):
		case joaat("PICKUP_WEAPON_BULLPUPSHOTGUN"):
		case joaat("PICKUP_WEAPON_HEAVYRIFLE"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE"):
		case joaat("PICKUP_WEAPON_BOTTLE"):
		case joaat("PICKUP_WEAPON_SNSPISTOL"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE"):
		case joaat("PICKUP_WEAPON_HEAVYPISTOL"):
		case joaat("PICKUP_WEAPON_GUSENBERG"):
		case joaat("PICKUP_WEAPON_DAGGER"):
		case joaat("PICKUP_WEAPON_VINTAGEPISTOL"):
		case joaat("PICKUP_WEAPON_MUSKET"):
		case joaat("PICKUP_WEAPON_FIREWORK"):
		case joaat("PICKUP_WEAPON_HEAVYSHOTGUN"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE"):
		case joaat("PICKUP_WEAPON_REVOLVER"):
		case joaat("PICKUP_WEAPON_SWITCHBLADE"):
		case joaat("PICKUP_WEAPON_FLAREGUN"):
		case joaat("PICKUP_WEAPON_HOMINGLAUNCHER"):
		case joaat("PICKUP_WEAPON_PROXMINE"):
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
		case joaat("PICKUP_WEAPON_POOLCUE"):
		case joaat("PICKUP_WEAPON_WRENCH"):
		case joaat("PICKUP_WEAPON_COMPACTLAUNCHER"):
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
		case joaat("PICKUP_WEAPON_AUTOSHOTGUN"):
		case joaat("PICKUP_WEAPON_MINISMG"):
		case joaat("PICKUP_WEAPON_RAILGUN"):
		case joaat("PICKUP_WEAPON_DOUBLEACTION"):
		case joaat("PICKUP_WEAPON_NAVYREVOLVER"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE_MK2"):
		case joaat("PICKUP_WEAPON_COMBATMG_MK2"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2"):
		case joaat("PICKUP_WEAPON_PISTOL_MK2"):
		case joaat("PICKUP_WEAPON_SMG_MK2"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("PICKUP_WEAPON_REVOLVER_MK2"):
		case joaat("PICKUP_WEAPON_SNSPISTOL_MK2"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_730(int iParam0, bool bParam1)//Position - 0x156B8D
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("PICKUP_ARMOUR_STANDARD");
			case joaat("WEAPON_UNARMED"):
				return joaat("PICKUP_HEALTH_STANDARD");
			case joaat("WEAPON_COUGAR"):
				return joaat("PICKUP_CUSTOM_SCRIPT");
			case joaat("WEAPON_FALL"):
				return joaat("PICKUP_PARACHUTE");
			case joaat("WEAPON_EXPLOSION"):
				return joaat("PICKUP_VEHICLE_HEALTH_STANDARD");
			case joaat("VEHICLE_WEAPON_TORPEDO"):
				return joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT");
			default:
		}
		return OBJECT::GET_PICKUP_TYPE_FROM_WEAPON_HASH(iParam0);
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				return joaat("PICKUP_VEHICLE_WEAPON_PISTOL");
			case joaat("WEAPON_COMBATPISTOL"):
				return joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL");
			case joaat("WEAPON_APPISTOL"):
				return joaat("PICKUP_VEHICLE_WEAPON_APPISTOL");
			case joaat("WEAPON_MICROSMG"):
				return joaat("PICKUP_VEHICLE_WEAPON_MICROSMG");
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF");
			case joaat("WEAPON_ASSAULTSMG"):
				return joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG");
			case joaat("WEAPON_PISTOL50"):
				return joaat("PICKUP_VEHICLE_WEAPON_PISTOL50");
			case joaat("WEAPON_GRENADE"):
				return joaat("PICKUP_VEHICLE_WEAPON_GRENADE");
			case joaat("WEAPON_STICKYBOMB"):
				return joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB");
			case joaat("WEAPON_SMOKEGRENADE"):
				return joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE");
			case joaat("WEAPON_MOLOTOV"):
				return joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV");
			case 0:
				return joaat("PICKUP_VEHICLE_HEALTH_STANDARD");
			case joaat("WEAPON_UNARMED"):
				return joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT");
			}
		default:
	}
	return -1;
}

bool func_731(int iParam0)//Position - 0x15727C
{
	return (iParam0 >= 0 && iParam0 < 9);
}

void func_732(int iParam0)//Position - 0x1574BA
{
	MISC::SET_BIT(&uLocal_84, iParam0);
}

int func_733(float fParam0, int iParam1, int iParam2)//Position - 0x15750C
{
	switch (iParam2)
	{
		case 0:
			return 0;
		case 1:
			return SYSTEM::ROUND(fParam0);
		case 2:
			return SYSTEM::ROUND((fParam0 * 0.5f));
		case 3:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.1f));
		case 4:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.2f));
		case 5:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.3f));
		case 6:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.4f));
		case 7:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.5f));
		case 8:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.6f));
		case 9:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.7f));
		case 10:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.8f));
		case 11:
			return SYSTEM::ROUND((IntToFloat(iParam1) * 0.9f));
		case 12:
			return iParam1;
		default:
	}
	return 0;
}

float func_734(int iParam0)//Position - 0x158C2A
{
	switch (iParam0)
	{
		case joaat("veto"):
		case joaat("veto2"):
			return 0.1f;
		default:
	}
	return 0.25f;
}

int func_735()//Position - 0x158CDA
{
	if (Global_1922006)
	{
		return 1;
	}
	return 0;
}

void func_736(var uParam0, int iParam1)//Position - 0x158CEE
{
	if (uParam0->f_7 != iParam1)
	{
		uParam0->f_7 = iParam1;
	}
}

int func_737()//Position - 0x158D1A
{
	if (BitTest(Global_4718592.f_33, 9) && !Global_1574966)
	{
		return 0;
	}
	return 1;
}

void func_738()//Position - 0x158D3D
{
	if (!BitTest(Global_4718592.f_38, 5))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
}

void func_739(var uParam0)//Position - 0x158D99
{
	if (uParam0->f_3 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_3);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_3);
		uParam0->f_3 = -1;
	}
}

int func_740(int iParam0)//Position - 0x1595AF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || __LIB_0__::func_155(0))
	{
		if (Global_4980736.f_69354 != 0)
		{
			if (Global_4980736.f_69354 == -1)
			{
				return 9600000;
			}
			else
			{
				return Global_4980736.f_69354 * 1000;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("PICKUP_HEALTH_STANDARD"):
		case joaat("PICKUP_ARMOUR_STANDARD"):
			return 60000;
			break;
	}
	return 15000;
}

int func_741(int iParam0)//Position - 0x1596E9
{
	switch (iParam0)
	{
		case joaat("PICKUP_WEAPON_PISTOL_MK2"):
		case joaat("PICKUP_WEAPON_SMG_MK2"):
		case joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2"):
		case joaat("PICKUP_WEAPON_COMBATMG_MK2"):
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_CARBINERIFLE_MK2"):
		case joaat("PICKUP_WEAPON_SNSPISTOL_MK2"):
		case joaat("PICKUP_WEAPON_REVOLVER_MK2"):
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2"):
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

void func_742(int* iParam0)//Position - 0x15976C
{
	MISC::SET_BIT(iParam0, 1);
	MISC::SET_BIT(iParam0, 9);
	MISC::CLEAR_BIT(iParam0, 4);
	MISC::CLEAR_BIT(iParam0, 3);
}

int func_743(int iParam0)//Position - 0x159E06
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) && VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return 0;
	}
	return 1;
}

float func_744(int iParam0)//Position - 0x159E3A
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
	{
		return 30f;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 100f;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return 80f;
	}
	return 60f;
}

float func_745(int iParam0)//Position - 0x159E8B
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
	{
		return 5f;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 10f;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return 10f;
	}
	return 10f;
}

void func_746(float fParam0, bool bParam1, int iParam2)//Position - 0x159ED8
{
	int iVar0;
	int iVar1;
	if (fParam0 < 0f)
	{
		fParam0 = 0f;
	}
	if (fParam0 > 2f)
	{
		fParam0 = 2f;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam2) - (SYSTEM::TO_FLOAT(iParam2) * fParam0)));
	Global_1574481 = 1;
	Global_1574481.f_1 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (iVar1 * -1));
	Global_1574481.f_2 = 0f;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			Global_1574481.f_2 = ENTITY::GET_ENTITY_SPEED(iVar0);
			if (__LIB_15__::func_256(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || !bParam1)
				{
					AUDIO::SET_VEHICLE_BOOST_ACTIVE(iVar0, true);
				}
			}
		}
	}
	Global_1574481.f_3 = 0;
}

bool func_747()//Position - 0x159F82
{
	return Global_1574481.f_3;
}

void func_748(var uParam0)//Position - 0x15A126
{
	if (BitTest(uParam0->f_19, 1))
	{
		if (!__LIB_0__::func_649(&(uParam0->f_20)))
		{
			__LIB_0__::func_495(&(uParam0->f_20), 0, 0);
		}
		else if (__LIB_2__::func_30(uParam0->f_20, 2000, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_18, "HIDE_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			__LIB_0__::func_579(&(uParam0->f_20));
			MISC::CLEAR_BIT(&(uParam0->f_19), 1);
		}
	}
}

int func_749(var uParam0)//Position - 0x15A1BB
{
	if (*uParam0 == -1)
	{
		return 13;
	}
	return uParam0->f_1[*uParam0];
}

int func_750(var uParam0)//Position - 0x15A1D8
{
	if (!__LIB_0__::func_649(&(uParam0->f_12)) && uParam0->f_11 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_751(var uParam0)//Position - 0x15A2EE
{
	return __LIB_2__::func_30(uParam0->f_12, uParam0->f_14, 0);
}

bool func_752()//Position - 0x15A305
{
	return Global_1574492;
}

int func_753(int iParam0, int iParam1)//Position - 0x15A45D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = iParam1 + 1;
	iVar0 = (iVar0 + (iParam1 * 12 + iVar1));
	return iVar0;
}

var func_754(var uParam0)//Position - 0x15A53C
{
	return BitTest(uParam0->f_5, 0);
}

int func_755(int iParam0)//Position - 0x15A686
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_1957724)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("tampa3"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("khanjali"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("rcbandito"):
		case joaat("issi4"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("impaler2"):
		case joaat("zr380"):
		case joaat("dominator4"):
		case joaat("imperator3"):
		case joaat("imperator2"):
		case joaat("imperator"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("monster3"):
		case joaat("issi5"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("impaler3"):
		case joaat("zr3802"):
		case joaat("dominator5"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("monster4"):
		case joaat("issi6"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("impaler4"):
		case joaat("zr3803"):
		case joaat("dominator6"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("monster5"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("jb7002"):
		case joaat("champion"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("patriot3"):
		case joaat("jubilee"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x15A7FF
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("rcbandito"):
		case joaat("issi4"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("impaler2"):
		case joaat("zr380"):
		case joaat("dominator4"):
		case joaat("imperator3"):
		case joaat("imperator2"):
		case joaat("imperator"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("monster3"):
		case joaat("issi5"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("impaler3"):
		case joaat("zr3802"):
		case joaat("dominator5"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("monster4"):
		case joaat("issi6"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("impaler4"):
		case joaat("zr3803"):
		case joaat("dominator6"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("monster5"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("jb7002"):
			return 1;
			break;
	}
	return 0;
}

int func_757(int iParam0)//Position - 0x15A939
{
	if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0) && !ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0) && !ENTITY::IS_ENTITY_UPRIGHT(iParam0, 50f))
	{
		return 0;
	}
	return 1;
}

void func_758(int* iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x15A9A9
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	if (iParam0->f_1 == 0)
	{
		iParam0->f_2 = { Param1 };
		iParam0->f_2.f_2 = (iParam0->f_2.f_2 + 1f);
		iParam0->f_5 = { 2.5f, 4f, 2f };
		iParam0->f_8 = { Param2 };
		iVar0 = 17;
		iParam0->f_1 = SHAPETEST::START_SHAPE_TEST_BOX(iParam0->f_2, iParam0->f_5, iParam0->f_8, 2, iVar0, 0, 4);
	}
	else
	{
		SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_1, iParam0, &uVar1, &uVar2, &iVar3);
		iParam0->f_1 = 0;
		SHAPETEST::RELEASE_SCRIPT_GUID_FROM_ENTITY(iVar3);
	}
}

void func_759(var uParam0, int iParam1)//Position - 0x15AD34
{
	uParam0->f_17 = iParam1;
}

int func_760(int iParam0)//Position - 0x15ADDC
{
	switch (iParam0)
	{
		case 0:
			return 30;
		case 1:
			return 32;
		case 2:
			return 18;
		case 3:
			return 10;
		case 4:
			return 19;
		case 5:
			return 33;
		case 6:
			return 13;
		case 7:
			return 31;
		case 8:
			return 35;
		case 9:
			return 2;
		case 10:
			return 13;
		case 11:
			return 34;
		default:
	}
	return 0;
}

void func_761(var uParam0, int iParam1)//Position - 0x15AE6F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_18, "ADD_ICON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_762(var uParam0)//Position - 0x15AFD7
{
	struct<2> Var0;
	if (!BitTest(Global_4718592.f_176701, 0))
	{
		uParam0->f_9 = 13;
		return 1;
	}
	StringCopy(&Var0, __LIB_15__::func_254(uParam0->f_9, 1, 0), 16);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_18, "SHOW_MESSAGE");
	__LIB_0__::func_478(&Var0);
	__LIB_0__::func_478("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_9 = 13;
	MISC::SET_BIT(&(uParam0->f_19), 1);
	return 1;
}

int func_763(var uParam0)//Position - 0x15B03B
{
	return uParam0->f_17;
}

void func_764(int iParam0)//Position - 0x15CB3B
{
	if (Global_1957725 != iParam0)
	{
		Global_1957725 = iParam0;
	}
}

void func_765(bool bParam0)//Position - 0x15CB52
{
	if (bParam0)
	{
		if (!Global_1957724)
		{
			Global_1957724 = 1;
		}
	}
	else if (Global_1957724)
	{
		Global_1957724 = 0;
	}
}

void func_766()//Position - 0x15CBA4
{
	if (Global_1574492 == 1)
	{
		if (!Global_1836584 || !Global_1574481.f_3)
		{
			Global_1574492 = 0;
			Global_1574492.f_1 = 0;
			Global_1574492.f_3 = 0;
		}
	}
}

void func_767()//Position - 0x15CBDC
{
	if (Global_1574481.f_3)
	{
		Global_1574481.f_3 = 0;
	}
}

void func_768(var uParam0, var uParam1, int iParam2)//Position - 0x15CDF6
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_29))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uParam1->f_29, false);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
	{
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false));
	}
	GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(uParam0->f_7);
	Global_1922005 = iParam2;
	__LIB_1__::func_0(&(uParam1->f_2), 1);
}

void func_769(var uParam0)//Position - 0x15CE42
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (PED::IS_PED_INJURED(uParam0->f_7))
	{
		return;
	}
	sVar0 = "scr_sum_ow";
	sVar1 = "scr_sum_ow_race_repair_smoke";
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, false))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
		GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sVar1, uParam0->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
		iVar2 = 1000;
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_8, true, true, false);
		VEHICLE::SET_VEHICLE_WEAPON_DAMAGE_SCALE(uParam0->f_8, 1f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_8, SYSTEM::TO_FLOAT(iVar2));
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_8, SYSTEM::TO_FLOAT(iVar2));
		VEHICLE::SET_VEHICLE_BODY_HEALTH(uParam0->f_8, SYSTEM::TO_FLOAT(iVar2));
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_8);
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, iVar2, 0);
	}
}

bool func_770(var uParam0)//Position - 0x15D0B4
{
	return !BitTest(uParam0->f_5, 1);
}

void func_771(int iParam0, int iParam1)//Position - 0x15D32E
{
	if (Global_1574492 == 0)
	{
		if (!Global_1836584 || !Global_1574481.f_3)
		{
			Global_1574492 = 1;
			Global_1574492.f_1 = iParam0;
			if (iParam1 < 1)
			{
				iParam1 = 1;
			}
			Global_1574492.f_3 = iParam1;
		}
	}
}

void func_772()//Position - 0x15D44F
{
	if (!Global_1574481.f_3)
	{
		if (!Global_1836584 || !Global_1574492)
		{
			Global_1574481.f_3 = 1;
		}
	}
}

void func_773(var uParam0)//Position - 0x15D47B
{
	uParam0->f_14 = 0;
	MISC::CLEAR_BIT(&(uParam0->f_5), 1);
	MISC::CLEAR_BIT(&(uParam0->f_5), 3);
}

bool func_774(var uParam0)//Position - 0x15D521
{
	return uParam0->f_4 > 0;
}

bool func_775()//Position - 0x15D5BA
{
	if ((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/)) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/))
	{
		return 0;
	}
	return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/);
}

void func_776(var uParam0, int iParam1)//Position - 0x15D6C9
{
	if (uParam0->f_1[iParam1] != 13)
	{
		uParam0->f_1[iParam1] = 13;
		uParam0->f_4 = (uParam0->f_4 - 1);
		if (uParam0->f_4 < 0)
		{
			uParam0->f_4 = 0;
		}
	}
}

int func_777(var uParam0)//Position - 0x15D6FF
{
	switch (uParam0->f_11)
	{
		case 1:
		case 2:
		case 3:
			return 1;
		default:
	}
	return 0;
}

void func_778(var uParam0)//Position - 0x15D7B8
{
	uParam0->f_7 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false)))
		{
			uParam0->f_8 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, false);
		}
	}
}

bool func_779()//Position - 0x15D847
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Adversary_GoKart_Battle", false, -1);
}

int func_780(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x15E4D1
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	Var0 = { Param0 + Param1 * Vector(0.5f, 0.5f, 0.5f) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, false);
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.f_0 - Param0.f_0), (Param1.f_1 - Param0.f_1));
	iVar3 = HUD::ADD_BLIP_FOR_AREA(Var0, fParam2, fVar1);
	HUD::SET_BLIP_ROTATION_WITH_FLOAT(iVar3, fVar2);
	return iVar3;
}

int func_781(int iParam0)//Position - 0x15E66B
{
	if (Global_4718592.f_173049[iParam0 /*18*/].f_14 != 15000)
	{
		if (Global_4718592.f_173049[iParam0 /*18*/].f_14 == 0)
		{
			return 250;
		}
		return Global_4718592.f_173049[iParam0 /*18*/].f_14;
	}
	return 15000;
}

int func_782(var uParam0, int iParam1)//Position - 0x15ECAD
{
	return (*uParam0)[iParam1 /*4*/];
}

void func_783(var uParam0, int iParam1, int iParam2)//Position - 0x15ECBB
{
	(uParam0[iParam1 /*2*/])->f_1 = iParam2;
}

int func_784(var uParam0, int iParam1)//Position - 0x15ECCD
{
	return (uParam0[iParam1 /*2*/])->f_1;
}

void func_785(var uParam0, int iParam1, int iParam2)//Position - 0x15EDDE
{
	(*uParam0)[iParam1 /*4*/] = iParam2;
}

bool func_786(var uParam0)//Position - 0x15F609
{
	return BitTest(uParam0->f_212, 0);
}

int func_787(int iParam0, int iParam1)//Position - 0x15F6F5
{
	if (__LIB_0__::func_155(0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
	}
	if (Global_4718592.f_172946.f_2[iParam0 /*20*/].f_3 > iParam1)
	{
		return 0;
	}
	return 1;
}

int func_788(int iParam0)//Position - 0x15F787
{
	if (Global_4718592.f_172946.f_2[iParam0 /*20*/] == 2)
	{
		return 1;
	}
	return 0;
}

int func_789(var uParam0, int iParam1)//Position - 0x15F7A7
{
	if ((*uParam0)[iParam1 /*42*/] == -1)
	{
		return 0;
	}
	if ((uParam0[iParam1 /*42*/])->f_5[(*uParam0)[iParam1 /*42*/]] == 0)
	{
		return 1;
	}
	return 0;
}

bool func_790(int iParam0)//Position - 0x15FC15
{
	return Global_4718592.f_172946.f_2[iParam0 /*20*/].f_18 <= 0.1f;
}

float func_791(var uParam0, var uParam1)//Position - 0x15FFD3
{
	return uParam1->f_11;
}

int func_792(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x160AB8
{
	if ((uParam0[iParam1 /*42*/])->f_41)
	{
		return 1;
	}
	if (iParam2 > -1 && bParam3)
	{
		if ((uParam0[iParam1 /*42*/])->f_5[iParam2] < (uParam0[iParam1 /*42*/])->f_4)
		{
			return 1;
		}
	}
	return 0;
}

int func_793(int iParam0)//Position - 0x1618AE
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((((((((((iVar0 == joaat("tanker") || iVar0 == joaat("tanker2")) || iVar0 == joaat("trailers")) || iVar0 == joaat("trailers2")) || iVar0 == joaat("trailers3")) || iVar0 == joaat("trailers4")) || iVar0 == joaat("trailersmall")) || iVar0 == joaat("trflat")) || iVar0 == joaat("armytanker")) || iVar0 == joaat("armytrailer")) || iVar0 == joaat("armytrailer2"))
	{
		return 0;
	}
	return 1;
}

void func_794(var uParam0)//Position - 0x16227B
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_2));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
}

int func_795(var uParam0, bool bParam1)//Position - 0x1633D8
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return 0;
	}
	return BitTest(uParam0->f_1, bParam1);
}

void func_796(bool bParam0)//Position - 0x163786
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	Var0 = { Global_4980736.f_78578[bParam0 /*450*/] };
	iVar1 = Global_4980736.f_78578[bParam0 /*450*/].f_12;
	MISC::GET_MODEL_DIMENSIONS(iVar1, &Var5, &Var4);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
	{
		fVar6 = (Var4.f_0 * 0.55f);
		Var5.f_0 = 0f;
		Var4.f_0 = 0f;
		Var5.f_2 = (Var4.f_2 * 0.8f);
		Var4.f_2 = (Var4.f_2 * 0.8f);
		Var5.f_1 = (Var5.f_1 * 0.5f);
		Var4.f_1 = (Var4.f_1 * 0.5f);
	}
	else
	{
		fVar6 = (Var4.f_0 * 0.8f);
		Var5.f_0 = 0f;
		Var4.f_0 = 0f;
		Var5.f_2 = (Var4.f_2 * 0.8f);
		Var4.f_2 = (Var4.f_2 * 0.8f);
		Var5.f_1 = (Var5.f_1 * 0.9f);
		Var4.f_1 = (Var4.f_1 * 0.9f);
	}
	Var5.f_1 = (Var5.f_1 - fVar6);
	Var4.f_1 = (Var4.f_1 + fVar6);
	Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Global_4980736.f_78578[bParam0 /*450*/].f_3, Var5) };
	Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Global_4980736.f_78578[bParam0 /*450*/].f_3, Var4) };
	Var0.f_0 = (Var2.f_0 + Var3.f_0);
	Var0.f_1 = (Var2.f_1 + Var3.f_1);
	Var0.f_0 = (Var0.f_0 / 2f);
	Var0.f_1 = (Var0.f_1 / 2f);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var2, false);
	fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.f_0 - Var2.f_0), (Var3.f_1 - Var2.f_1));
	GRAPHICS::DRAW_MARKER(43, Var0.f_0, Var0.f_1, (Var0.f_2 - 0.2f), 0f, 0f, 0f, 0f, 0f, fVar8, MISC::ABSF((fVar6 * 2f)), MISC::ABSF(fVar7), 0.5f, 255, 50, 50, 150, false, false, 2, false, 0, 0, false);
}

bool func_797()//Position - 0x163D83
{
	return Global_1922892;
}

float func_798(int iParam0)//Position - 0x164AFC
{
	switch (Global_4718592.f_180134[iParam0 /*256*/].f_252)
	{
		case 0:
			return 0.25f;
		case 1:
			return 0.5f;
		case 2:
			return 1f;
		case 3:
			return 1.5f;
		case 4:
			return 2f;
		default:
	}
	return 1f;
}

float func_799(int iParam0)//Position - 0x164B58
{
	switch (Global_4718592.f_180134[iParam0 /*256*/].f_251)
	{
		case 0:
			return 0.25f;
		case 1:
			return 0.5f;
		case 2:
			return 0.75f;
		case 3:
			return 1f;
		default:
	}
	return 0.5f;
}

void func_800(int iParam0)//Position - 0x164BC8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (BitTest(Global_4718592.f_180134[iParam0 /*256*/], 5))
	{
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	}
	if (BitTest(Global_4718592.f_180134[iParam0 /*256*/], 6))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 47, true);
		PED::SET_PED_RESET_FLAG(iVar0, 102, true);
	}
	if (BitTest(Global_4718592.f_180134[iParam0 /*256*/], 7))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 46, true);
	}
	if (BitTest(Global_4718592.f_180134[iParam0 /*256*/], 8))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 446, true);
	}
	if (BitTest(Global_4718592.f_180134[iParam0 /*256*/], 9))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 200, true);
	}
}

void func_801(int* iParam0)//Position - 0x164E10
{
	MISC::CLEAR_BIT(&(iParam0->f_1), 0);
}

void func_802(int* iParam0, var uParam1)//Position - 0x164E21
{
	*uParam1 = -1;
	*iParam0 = 0;
}

void func_803(var uParam0, int iParam1)//Position - 0x164F7F
{
	if (Global_4718592.f_180134[iParam1 /*256*/].f_255 == -1)
	{
		return;
	}
	uParam0->f_90 = Global_4718592.f_180134[iParam1 /*256*/].f_255;
}

float func_804(int iParam0)//Position - 0x16511E
{
	switch (Global_4718592.f_180134[iParam0 /*256*/].f_253)
	{
		case 3:
			return 0.25f;
		case 2:
			return 0.5f;
		case 1:
			return 0.75f;
		default:
	}
	return 1f;
}

void func_805(var uParam0, int iParam1, int iParam2)//Position - 0x16521E
{
	float fVar0;
	float fVar1;
	fVar0 = (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam2)) - 100f);
	if (Global_4718592.f_180134[iParam1 /*256*/].f_250 != 100)
	{
		fVar1 = (SYSTEM::TO_FLOAT(Global_4718592.f_180134[iParam1 /*256*/].f_250) / 100f);
		fVar0 = (fVar0 * fVar1);
	}
	else if (BitTest(uParam0->f_1, 4) && !PED::IS_PED_INJURED(iParam2))
	{
		if (PED::GET_PED_MAX_HEALTH(iParam2) != ENTITY::GET_ENTITY_HEALTH(iParam2))
		{
			return;
		}
	}
	fVar0 = (fVar0 + 100f);
	ENTITY::SET_ENTITY_HEALTH(iParam2, SYSTEM::ROUND(fVar0), 0);
}

int func_806(int iParam0)//Position - 0x167227
{
	return Global_4718592.f_658[Global_1836612 /*22957*/].f_472[__LIB_15__::func_238(iParam0)];
}

int func_807(int iParam0)//Position - 0x167248
{
	return Global_4718592.f_658[Global_1836612 /*22957*/].f_194[__LIB_15__::func_238(iParam0)];
}

int func_808()//Position - 0x1677AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (__LIB_9__::func_361(iVar0) == joaat("WEAPON_PISTOL") && iVar0 != 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 100;
}

void func_809()//Position - 0x16796E
{
	WEAPON::GIVE_LOADOUT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("LOADOUT_DEFAULT"));
}

void func_810(var uParam0, int iParam1)//Position - 0x167983
{
	if (!BitTest(Global_4718592.f_180134[iParam1 /*256*/], 3))
	{
		return;
	}
	uParam0->f_81 = Global_4718592.f_180134[iParam1 /*256*/].f_254;
}

bool func_811(int iParam0, int iParam1)//Position - 0x1679B6
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_NETWORK_TIME_ACCURATE() - iParam0) >= iParam1;
}

void func_812(var uParam0, bool bParam1)//Position - 0x1679D2
{
	if (bParam1)
	{
		uParam0->f_81 = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
}

int func_813(int iParam0)//Position - 0x167C99
{
	switch (iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
			break;
	}
	return -1;
}

void func_814(var uParam0, var uParam1)//Position - 0x168097
{
	uParam0->f_83 = uParam1;
}

bool func_815(var uParam0, int iParam1)//Position - 0x1680A5
{
	return uParam0->f_78 == iParam1;
}

void func_816(var uParam0, float fParam1)//Position - 0x1680D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = fParam1;
		iVar0++;
	}
}

bool func_817(var uParam0)//Position - 0x1680F9
{
	return BitTest(uParam0->f_1, 0);
}

void func_818(var uParam0)//Position - 0x16817E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
		uParam0->f_16[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_32[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_32[iVar0]));
		}
		iVar0++;
	}
}

int func_819(char* sParam0, int iParam1)//Position - 0x1688D0
{
	int iVar0;
	if (iParam1 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iParam1 - 2))
		{
			if (!MISC::ARE_STRINGS_EQUAL(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam0, iVar0, iVar0 + 1, 1), " "))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 1)
	{
		return MISC::ARE_STRINGS_EQUAL(sParam0, " ");
	}
	return 1;
}

void func_820()//Position - 0x168D87
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4718592.f_116553[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

void func_821(int iParam0)//Position - 0x168E12
{
	if (Global_4718592.f_169915 < 25)
	{
		Global_4718592.f_169889[Global_4718592.f_169915] = iParam0;
		Global_4718592.f_169915++;
	}
}

char* func_822(int iParam0)//Position - 0x16CEA7
{
	if (iParam0 == joaat("prop_const_fence02b"))
	{
		return "FMMC_PR_0";
	}
	if (iParam0 == joaat("prop_offroad_bale03"))
	{
		return "FMMC_PR_1";
	}
	if (iParam0 == joaat("prop_offroad_bale02"))
	{
		return "FMMC_PR_2";
	}
	if (iParam0 == joaat("prop_offroad_bale01"))
	{
		return "FMMC_PR_3";
	}
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return "FMMC_PR_4";
	}
	if (iParam0 == joaat("lts_prop_lts_offroad_tyres01"))
	{
		return "FMMC_PR_4";
	}
	if (iParam0 == joaat("prop_offroad_tyres02"))
	{
		return "FMMC_PR_5";
	}
	if (iParam0 == joaat("prop_barier_conc_02a"))
	{
		return "FMMC_PR_6";
	}
	if (iParam0 == joaat("prop_barier_conc_05c"))
	{
		return "FMMC_PR_7";
	}
	if (iParam0 == joaat("prop_barier_conc_05a"))
	{
		return "FMMC_PR_8";
	}
	if (iParam0 == joaat("prop_barier_conc_05b"))
	{
		return "FMMC_PR_9";
	}
	if (iParam0 == joaat("prop_barier_conc_01a"))
	{
		return "FMMC_PR_10";
	}
	if (iParam0 == joaat("prop_bench_05"))
	{
		return "FMMC_PR_12";
	}
	if (iParam0 == joaat("prop_bench_07"))
	{
		return "FMMC_PR_13";
	}
	if (iParam0 == joaat("prop_bench_01a"))
	{
		return "FMMC_PR_14";
	}
	if (iParam0 == joaat("prop_bench_08"))
	{
		return "FMMC_PR_BNBLUE";
	}
	if (iParam0 == joaat("prop_dock_bouy_1"))
	{
		return "FMMC_PR_15";
	}
	if (iParam0 == joaat("prop_dock_bouy_2"))
	{
		return "FMMC_PR_16";
	}
	if (iParam0 == joaat("prop_elecbox_24"))
	{
		return "FMMC_PR_17";
	}
	if (iParam0 == joaat("prop_elecbox_24b"))
	{
		return "FMMC_PR_18";
	}
	if (iParam0 == joaat("prop_portacabin01"))
	{
		return "FMMC_PR_19";
	}
	if (iParam0 == joaat("prop_cementbags01"))
	{
		return "FMMC_PR_20";
	}
	if (iParam0 == joaat("prop_conc_blocks01a"))
	{
		return "FMMC_PR_21";
	}
	if (iParam0 == joaat("prop_cons_crate"))
	{
		return "FMMC_PR_22";
	}
	if (iParam0 == joaat("prop_jyard_block_01a"))
	{
		return "FMMC_PR_23";
	}
	if (iParam0 == joaat("prop_conc_sacks_02a"))
	{
		return "FMMC_PR_24";
	}
	if (iParam0 == joaat("prop_byard_sleeper01"))
	{
		return "FMMC_PR_25";
	}
	if (iParam0 == joaat("prop_shuttering01"))
	{
		return "FMMC_PR_26";
	}
	if (iParam0 == joaat("prop_shuttering02"))
	{
		return "FMMC_PR_27";
	}
	if (iParam0 == joaat("prop_shuttering03"))
	{
		return "FMMC_PR_28";
	}
	if (iParam0 == joaat("prop_shuttering04"))
	{
		return "FMMC_PR_29";
	}
	if (iParam0 == joaat("prop_woodpile_01a"))
	{
		return "FMMC_PR_30";
	}
	if (iParam0 == joaat("prop_woodpile_01c"))
	{
		return "FMMC_PR_31";
	}
	if (iParam0 == joaat("prop_rub_cont_01b"))
	{
		return "FMMC_PR_32";
	}
	if (iParam0 == joaat("prop_rail_boxcar4"))
	{
		return "FMMC_PR_33";
	}
	if (iParam0 == joaat("prop_rub_railwreck_2"))
	{
		return "FMMC_PR_34";
	}
	if (iParam0 == joaat("prop_contr_03b_ld"))
	{
		return "FMMC_PR_35";
	}
	if (iParam0 == joaat("prop_container_ld2"))
	{
		return "FMMC_PR_36";
	}
	if (iParam0 == joaat("prop_rail_boxcar"))
	{
		return "FMMC_PR_37";
	}
	if (iParam0 == joaat("prop_rail_boxcar3"))
	{
		return "FMMC_PR_38";
	}
	if (iParam0 == joaat("prop_byard_floatpile"))
	{
		return "FMMC_PR_39";
	}
	if (iParam0 == joaat("prop_boxpile_07a"))
	{
		return "FMMC_PR_40";
	}
	if (iParam0 == joaat("prop_watercrate_01"))
	{
		return "FMMC_PR_41";
	}
	if (iParam0 == joaat("prop_box_wood01a"))
	{
		return "FMMC_PR_42";
	}
	if (iParam0 == joaat("prop_box_wood03a"))
	{
		return "FMMC_PR_43";
	}
	if (iParam0 == joaat("prop_box_wood04a"))
	{
		return "FMMC_PR_44";
	}
	if (iParam0 == joaat("prop_cash_crate_01"))
	{
		return "FMMC_PR_45";
	}
	if (iParam0 == joaat("prop_bin_13a"))
	{
		return "FMMC_PR_46";
	}
	if (iParam0 == joaat("prop_bin_14a"))
	{
		return "FMMC_PR_47";
	}
	if (iParam0 == joaat("prop_dumpster_3a"))
	{
		return "FMMC_PR_48";
	}
	if (iParam0 == joaat("prop_dumpster_4b"))
	{
		return "FMMC_PR_49";
	}
	if (iParam0 == joaat("prop_dumpster_01a"))
	{
		return "FMMC_PR_50";
	}
	if (iParam0 == joaat("prop_skip_06a"))
	{
		return "FMMC_PR_51";
	}
	if (iParam0 == joaat("prop_elecbox_02a"))
	{
		return "FMMC_PR_52";
	}
	if (iParam0 == joaat("prop_elecbox_16"))
	{
		return "FMMC_PR_53";
	}
	if (iParam0 == joaat("prop_elecbox_14"))
	{
		return "FMMC_PR_54";
	}
	if (iParam0 == joaat("prop_ind_deiseltank"))
	{
		return "FMMC_PR_55";
	}
	if (iParam0 == joaat("prop_ind_mech_02a"))
	{
		return "FMMC_PR_56";
	}
	if (iParam0 == joaat("prop_ind_mech_02b"))
	{
		return "FMMC_PR_57";
	}
	if (iParam0 == joaat("prop_sub_trans_01a"))
	{
		return "FMMC_PR_58";
	}
	if (iParam0 == joaat("prop_sub_trans_02a"))
	{
		return "FMMC_PR_59";
	}
	if (iParam0 == joaat("prop_sub_trans_04a"))
	{
		return "FMMC_PR_60";
	}
	if (iParam0 == joaat("prop_skip_04"))
	{
		return "FMMC_PR_62";
	}
	if (iParam0 == joaat("prop_mp_ramp_01") || iParam0 == joaat("lts_prop_lts_ramp_01"))
	{
		return "FMMC_PR_61";
	}
	if (iParam0 == joaat("prop_mp_ramp_02") || iParam0 == joaat("lts_prop_lts_ramp_02"))
	{
		return "FMMC_PR_63";
	}
	if (iParam0 == joaat("prop_mp_ramp_03") || iParam0 == joaat("lts_prop_lts_ramp_03"))
	{
		return "FMMC_PR_64";
	}
	if (iParam0 == joaat("prop_skip_08a"))
	{
		return "FMMC_PR_65";
	}
	if (iParam0 == joaat("prop_jetski_ramp_01"))
	{
		return "FMMC_PR_666";
	}
	if (iParam0 == joaat("ar_prop_ar_jetski_ramp_01_dev"))
	{
		return "FMMC_PR_66";
	}
	if (iParam0 == joaat("prop_trafficdiv_01"))
	{
		return "FMMC_PR_67";
	}
	if (iParam0 == joaat("prop_sign_road_09a"))
	{
		return "FMMC_PR_68";
	}
	if (iParam0 == joaat("prop_sign_road_09b"))
	{
		return "FMMC_PR_69";
	}
	if (iParam0 == joaat("prop_sign_road_09c"))
	{
		return "FMMC_PR_70";
	}
	if (iParam0 == joaat("prop_sign_road_09d"))
	{
		return "FMMC_PR_71";
	}
	if (iParam0 == joaat("prop_sign_road_06q"))
	{
		return "FMMC_PR_72";
	}
	if (iParam0 == joaat("prop_sign_road_06r"))
	{
		return "FMMC_PR_73";
	}
	if (iParam0 == joaat("prop_sign_road_05c"))
	{
		return "FMMC_PR_74";
	}
	if (iParam0 == joaat("prop_sign_road_05d"))
	{
		return "FMMC_PR_75";
	}
	if (iParam0 == joaat("prop_sign_road_05e"))
	{
		return "FMMC_PR_76";
	}
	if (iParam0 == joaat("prop_sign_road_05f"))
	{
		return "FMMC_PR_77";
	}
	if (iParam0 == joaat("prop_food_van_01"))
	{
		return "FMMC_PR_78";
	}
	if (iParam0 == joaat("prop_food_van_02"))
	{
		return "FMMC_PR_79";
	}
	if (iParam0 == joaat("prop_tanktrailer_01a"))
	{
		return "FMMC_PR_80";
	}
	if (iParam0 == joaat("prop_truktrailer_01a"))
	{
		return "FMMC_PR_81";
	}
	if (iParam0 == joaat("prop_rub_buswreck_01"))
	{
		return "FMMC_PR_82";
	}
	if (iParam0 == joaat("prop_rub_buswreck_06"))
	{
		return "FMMC_PR_83";
	}
	if (iParam0 == joaat("prop_rub_carwreck_11"))
	{
		return "FMMC_PR_84";
	}
	if (iParam0 == joaat("prop_rub_carwreck_12"))
	{
		return "FMMC_PR_85";
	}
	if (iParam0 == joaat("prop_rub_carwreck_13"))
	{
		return "FMMC_PR_86";
	}
	if (iParam0 == joaat("prop_rub_carwreck_9"))
	{
		return "FMMC_PR_87";
	}
	if (iParam0 == joaat("prop_shamal_crash"))
	{
		return "FMMC_PR_89";
	}
	if (iParam0 == joaat("apa_mp_apa_crashed_usaf_01a"))
	{
		return "FMMC_PR_90";
	}
	if (iParam0 == -1305574636)
	{
		return "FMMC_PR_91";
	}
	if (iParam0 == joaat("imp_prop_impexp_boxpile_01"))
	{
		return "FMMC_PR_92";
	}
	if (iParam0 == joaat("imp_prop_impexp_boxpile_02"))
	{
		return "FMMC_PR_93";
	}
	if (iParam0 == joaat("sr_prop_sr_boxpile_02"))
	{
		return "FMMC_PR_111";
	}
	if (iParam0 == joaat("sr_prop_sr_boxpile_03"))
	{
		return "FMMC_PR_112";
	}
	if (iParam0 == joaat("sr_prop_sr_track_wall"))
	{
		return "FMMC_PR_114";
	}
	if (iParam0 == joaat("sr_prop_sr_tube_wall"))
	{
		return "FMMC_PR_115";
	}
	if (iParam0 == joaat("ar_prop_ar_ammu_sign"))
	{
		return "FMMC_PR_116";
	}
	if (iParam0 == joaat("sr_mp_spec_races_ammu_sign"))
	{
		return "FMMC_PR_116";
	}
	if (iParam0 == joaat("imp_prop_groupbarrel_01"))
	{
		return "FMMC_PR_94";
	}
	if (iParam0 == joaat("imp_prop_groupbarrel_02"))
	{
		return "FMMC_PR_95";
	}
	if (iParam0 == joaat("imp_prop_groupbarrel_03"))
	{
		return "FMMC_PR_96";
	}
	if (iParam0 == joaat("sr_prop_sr_boxwood_01"))
	{
		return "FMMC_PR_97";
	}
	if (iParam0 == joaat("prop_sec_gate_01d"))
	{
		return "FMMC_PR_98";
	}
	if (iParam0 == joaat("prop_vault_shutter"))
	{
		return "FMMC_PR_100";
	}
	if (iParam0 == joaat("ba_prop_battle_track_exshort"))
	{
		return "FMMC_BB_DEST";
	}
	if (iParam0 == joaat("ba_prop_battle_track_short"))
	{
		return "FMMC_BB_DST";
	}
	if (iParam0 == joaat("prop_fnclink_03gate5"))
	{
		return "FMMC_PR_FNCMGTS";
	}
	if (iParam0 == joaat("prop_fnclink_02gate3"))
	{
		return "FMMC_PR_FNCMGTD";
	}
	if (iParam0 == joaat("prop_plas_barier_01a"))
	{
		return "FMMC_PR_BARPRED";
	}
	if (iParam0 == joaat("prop_barier_conc_02b"))
	{
		return "FMMC_PR_BARCANW";
	}
	if (iParam0 == joaat("prop_barrier_work06a"))
	{
		return "FMMC_PR_BARWRKP";
	}
	if (iParam0 == joaat("prop_barrier_work04a"))
	{
		return "FMMC_PR_BARWRKW";
	}
	if (iParam0 == joaat("prop_fnclink_06a"))
	{
		return "FMMC_PR_FNCBWSG";
	}
	if (iParam0 == joaat("prop_fnclink_06b"))
	{
		return "FMMC_PR_FNCBWLN";
	}
	if (iParam0 == joaat("prop_fnclink_06c"))
	{
		return "FMMC_PR_FNCBWWD";
	}
	if (iParam0 == joaat("prop_fnclink_06d"))
	{
		return "FMMC_PR_FNCBWWL";
	}
	if (iParam0 == joaat("prop_fnccorgm_03a"))
	{
		return "FMMC_PR_FNCCDCF";
	}
	if (iParam0 == joaat("prop_fnccorgm_03b"))
	{
		return "FMMC_PR_FNCCPDF";
	}
	if (iParam0 == joaat("prop_fnccorgm_03c"))
	{
		return "FMMC_PR_FNCCSCF";
	}
	if (iParam0 == joaat("prop_fnccorgm_02a"))
	{
		return "FMMC_PR_FNCCRDF";
	}
	if (iParam0 == joaat("prop_fnccorgm_02b"))
	{
		return "FMMC_PR_FNCCPRF";
	}
	if (iParam0 == joaat("prop_fnccorgm_02c"))
	{
		return "FMMC_PR_FNCCBPF";
	}
	if (iParam0 == joaat("prop_fnccorgm_02d"))
	{
		return "FMMC_PR_FNCCTCF";
	}
	if (iParam0 == joaat("prop_fnccorgm_02e"))
	{
		return "FMMC_PR_FNCCSRF";
	}
	if (iParam0 == joaat("prop_gate_cult_01_l"))
	{
		return "FMMC_PR_FNCGTAL";
	}
	if (iParam0 == joaat("prop_gate_cult_01_r"))
	{
		return "FMMC_PR_FNCGTAR";
	}
	if (iParam0 == joaat("prop_const_fence03b_cr"))
	{
		return "FMMC_PR_BARQADB";
	}
	if (iParam0 == joaat("prop_const_fence02a"))
	{
		return "FMMC_PR_BARDUBU";
	}
	if (iParam0 == joaat("prop_const_fence01b_cr"))
	{
		return "FMMC_PR_BARSINB";
	}
	if (iParam0 == joaat("prop_fncwood_16b"))
	{
		return "FMMC_PR_FNCPKOD";
	}
	if (iParam0 == joaat("prop_fncwood_16c"))
	{
		return "FMMC_PR_FNCPKOS";
	}
	if (iParam0 == joaat("prop_fnc_farm_01b"))
	{
		return "FMMC_PR_FNCFMS";
	}
	if (iParam0 == joaat("prop_fnc_farm_01c"))
	{
		return "FMMC_PR_FNCFMSL";
	}
	if (iParam0 == joaat("prop_fnc_farm_01d"))
	{
		return "FMMC_PR_FNCFMD";
	}
	if (iParam0 == joaat("prop_fnc_farm_01e"))
	{
		return "FMMC_PR_FNCFMT";
	}
	if (iParam0 == joaat("prop_fnc_farm_01f"))
	{
		return "FMMC_PR_FNCFMSX";
	}
	if (iParam0 == joaat("prop_ind_barge_01_cr"))
	{
		return "FMMC_PR_BARGE";
	}
	if (iParam0 == joaat("prop_tollbooth_1"))
	{
		return "FMMC_PR_CABTBTH";
	}
	if (iParam0 == joaat("prop_parking_hut_2"))
	{
		return "FMMC_PR_CABPHUT";
	}
	if (iParam0 == joaat("prop_woodpile_01b"))
	{
		return "FMMC_PR_WODPLSM";
	}
	if (iParam0 == joaat("prop_woodpile_03a"))
	{
		return "FMMC_PR_WODPLUT";
	}
	if (iParam0 == joaat("prop_conc_blocks01c"))
	{
		return "FMMC_PR_CONCCND";
	}
	if (iParam0 == joaat("prop_cons_cements01"))
	{
		return "FMMC_PR_CONCSAK";
	}
	if (iParam0 == joaat("prop_container_01mb"))
	{
		return "FMMC_PR_CNTLNGG";
	}
	if (iParam0 == joaat("prop_container_03mb"))
	{
		return "FMMC_PR_CNTSHTG";
	}
	if (iParam0 == joaat("prop_pallet_pile_02"))
	{
		return "FMMC_PR_PLTPILL";
	}
	if (iParam0 == joaat("prop_pallet_pile_01"))
	{
		return "FMMC_PR_PLTPILS";
	}
	if (iParam0 == joaat("prop_cratepile_07a"))
	{
		return "FMMC_PR_CRTPILL";
	}
	if (iParam0 == joaat("prop_boxpile_04a"))
	{
		return "FMMC_PR_BOXPILW";
	}
	if (iParam0 == joaat("prop_dumpster_02a"))
	{
		return "FMMC_PR_DMPCLDB";
	}
	if (iParam0 == joaat("prop_dumpster_02b"))
	{
		return "FMMC_PR_DMPCLDM";
	}
	if (iParam0 == joaat("prop_elecbox_10_cr"))
	{
		return "FMMC_PR_ELECBXW";
	}
	if (iParam0 == joaat("prop_elecbox_15_cr"))
	{
		return "FMMC_PR_ELCBXGN";
	}
	if (iParam0 == joaat("prop_elecbox_17_cr"))
	{
		return "FMMC_PR_ELCBXGY";
	}
	if (iParam0 == joaat("prop_generator_03b"))
	{
		return "FMMC_PR_GANDLMP";
	}
	if (iParam0 == joaat("prop_feeder1_cr"))
	{
		return "FMMC_PR_FEEDER";
	}
	if (iParam0 == joaat("prop_skip_03"))
	{
		return "FMMC_PR_RMPDMPM";
	}
	if (iParam0 == joaat("prop_byard_rampold_cr"))
	{
		return "FMMC_PR_RMPOLD";
	}
	if (iParam0 == joaat("prop_skate_halfpipe_cr"))
	{
		return "FMMC_PR_RMPHP";
	}
	if (iParam0 == joaat("prop_skate_quartpipe_cr"))
	{
		return "FMMC_PR_RMPQP";
	}
	if (iParam0 == joaat("prop_skate_spiner_cr"))
	{
		return "FMMC_PR_RMPFRS";
	}
	if (iParam0 == joaat("prop_skate_flatramp_cr"))
	{
		return "FMMC_PR_RMPLFR";
	}
	if (iParam0 == joaat("prop_skate_kickers_cr"))
	{
		return "FMMC_PR_RMPFRK";
	}
	if (iParam0 == joaat("prop_skate_funbox_cr"))
	{
		return "FMMC_PR_RMPFBP";
	}
	if (iParam0 == joaat("prop_pile_dirt_07_cr"))
	{
		return "FMMC_PR_RMPPILE";
	}
	if (iParam0 == joaat("prop_old_farm_03"))
	{
		return "FMMC_PR_FRMOLDT";
	}
	if (iParam0 == joaat("prop_rub_carwreck_14"))
	{
		return "FMMC_PR_WRKCRRD";
	}
	if (iParam0 == joaat("prop_rub_couch02"))
	{
		return "FMMC_PR_WRKCCH";
	}
	if (iParam0 == joaat("prop_tree_olive_cr2"))
	{
		return "FMMC_PR_NTROLVT";
	}
	if (iParam0 == joaat("prop_tree_eng_oak_cr2"))
	{
		return "FMMC_PR_NTROAKT";
	}
	if (iParam0 == joaat("prop_tree_fallen_02"))
	{
		return "FMMC_PR_NTRFLNT";
	}
	if (iParam0 == joaat("prop_hayb_st_01_cr"))
	{
		return "FMMC_PR_HBSTK";
	}
	if (iParam0 == joaat("prop_haybale_03"))
	{
		return "FMMC_PR_HBRND";
	}
	if (iParam0 == joaat("prop_haybale_02"))
	{
		return "FMMC_PR_HBSSTK";
	}
	if (iParam0 == joaat("prop_haybale_01"))
	{
		return "FMMC_PR_HBSML";
	}
	if (iParam0 == joaat("prop_byard_float_02"))
	{
		return "FMMC_PR_FLOATD";
	}
	if (iParam0 == joaat("prop_tyre_wall_01"))
	{
		return "FMMC_PR_TYR1";
	}
	if (iParam0 == joaat("prop_tyre_wall_02"))
	{
		return "FMMC_PR_TYR2";
	}
	if (iParam0 == joaat("prop_tyre_wall_03"))
	{
		return "FMMC_PR_TYR3";
	}
	if (iParam0 == joaat("prop_tyre_wall_04"))
	{
		return "FMMC_PR_TYR4";
	}
	if (iParam0 == joaat("prop_tyre_wall_05"))
	{
		return "FMMC_PR_TYR5";
	}
	if (iParam0 == joaat("prop_tyre_wall_01b"))
	{
		return "FMMC_PR_TYR1B";
	}
	if (iParam0 == joaat("prop_tyre_wall_02b"))
	{
		return "FMMC_PR_TYR2B";
	}
	if (iParam0 == joaat("prop_tyre_wall_03b"))
	{
		return "FMMC_PR_TYR3B";
	}
	if (iParam0 == joaat("prop_tyre_wall_01c"))
	{
		return "FMMC_PR_TYR1C";
	}
	if (iParam0 == joaat("prop_tyre_wall_02c"))
	{
		return "FMMC_PR_TYR2C";
	}
	if (iParam0 == joaat("prop_tyre_wall_03c"))
	{
		return "FMMC_PR_TYR3C";
	}
	if (iParam0 == joaat("lts_prop_lts_offroad_tyres01"))
	{
		return "FMMC_PR_ORT1";
	}
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return "FMMC_PR_ORT1";
	}
	if (iParam0 == joaat("prop_offroad_tyres02"))
	{
		return "FMMC_PR_ORT2";
	}
	if (iParam0 == joaat("prop_pipes_conc_01"))
	{
		return "FMMC_PR_CNPPE";
	}
	if (iParam0 == joaat("prop_start_gate_01b"))
	{
		return "FMMC_PR_SGTE";
	}
	if (iParam0 == joaat("prop_makeup_trail_01_cr"))
	{
		return "FMMC_PR_SMTR";
	}
	if (iParam0 == joaat("prop_makeup_trail_02_cr"))
	{
		return "FMMC_PR_MUTR";
	}
	if (iParam0 == joaat("prop_bleachers_04_cr"))
	{
		return "FMMC_PR_SBLE";
	}
	if (iParam0 == joaat("prop_bleachers_05_cr"))
	{
		return "FMMC_PR_BLEA";
	}
	if (iParam0 == joaat("prop_beachf_01_cr"))
	{
		return "FMMC_PR_BEAF";
	}
	if (iParam0 == joaat("prop_set_generator_01_cr"))
	{
		return "FMMC_PR_SEGE";
	}
	if (iParam0 == joaat("sm_prop_smug_jammer"))
	{
		return "FMMC_PR_SMJA";
	}
	if (iParam0 == joaat("prop_air_blastfence_01"))
	{
		return "FMMC_PR_FNCBLST";
	}
	if (iParam0 == joaat("prop_mb_sandblock_01"))
	{
		return "FMMC_PR_SNDBKSI";
	}
	if (iParam0 == joaat("prop_mb_sandblock_02"))
	{
		return "FMMC_PR_SNDBKTR";
	}
	if (iParam0 == joaat("prop_mb_sandblock_05_cr"))
	{
		return "FMMC_PR_SNDBKED";
	}
	if (iParam0 == joaat("prop_mb_sandblock_04"))
	{
		return "FMMC_PR_SNDBKCR";
	}
	if (iParam0 == joaat("prop_mb_sandblock_03_cr"))
	{
		return "FMMC_PR_SNDBKST";
	}
	if (iParam0 == joaat("prop_mb_hesco_06"))
	{
		return "FMMC_PR_SNDBKFT";
	}
	if (iParam0 == joaat("prop_const_fence03a_cr"))
	{
		return "FMMC_PR_BARWDQU";
	}
	if (iParam0 == joaat("prop_air_monhut_03_cr"))
	{
		return "FMMC_PR_CABAPHT";
	}
	if (iParam0 == joaat("prop_air_sechut_01"))
	{
		return "FMMC_PR_CABSCHT";
	}
	if (iParam0 == joaat("prop_mb_cargo_03a"))
	{
		return "FMMC_PR_CRG01";
	}
	if (iParam0 == joaat("prop_mb_cargo_04a"))
	{
		return "FMMC_PR_CRG02";
	}
	if (iParam0 == joaat("prop_air_cargo_04a"))
	{
		return "FMMC_PR_CRG03";
	}
	if (iParam0 == joaat("prop_mb_crate_01b"))
	{
		return "FMMC_PR_CRG04";
	}
	if (iParam0 == joaat("prop_air_cargo_01a"))
	{
		return "FMMC_PR_CRGAIR";
	}
	if (iParam0 == joaat("prop_mb_cargo_04b"))
	{
		return "FMMC_PR_CRG05";
	}
	if (iParam0 == joaat("prop_mb_cargo_02a"))
	{
		return "FMMC_PR_CRG06";
	}
	if (iParam0 == joaat("prop_air_taxisign_01a"))
	{
		return "FMMC_PR_SINAPTX";
	}
	if (iParam0 == joaat("prop_air_stair_01"))
	{
		return "FMMC_PR_STRFLY";
	}
	if (iParam0 == joaat("prop_air_stair_02"))
	{
		return "FMMC_P_AIRST2";
	}
	if (iParam0 == joaat("prop_air_trailer_1b"))
	{
		return "FMMC_P_HNGRTR";
	}
	if (iParam0 == joaat("prop_air_stair_04a_cr"))
	{
		return "FMMC_PR_STRRSD";
	}
	if (iParam0 == joaat("prop_air_stair_04b_cr"))
	{
		return "FMMC_PR_STRLWR";
	}
	if (iParam0 == joaat("prop_air_bagloader"))
	{
		return "FMMC_PR_BAGLDL";
	}
	if (iParam0 == joaat("prop_air_bagloader2_cr"))
	{
		return "FMMC_PR_BAGLDH";
	}
	if (iParam0 == joaat("prop_plant_group_04_cr"))
	{
		return "FMMC_PR_PLNTGP";
	}
	if (iParam0 == joaat("prop_bush_lrg_01c_cr"))
	{
		return "FMMC_PR_BUSHLD";
	}
	if (iParam0 == joaat("prop_bush_lrg_01e_cr2"))
	{
		return "FMMC_PR_BUSHM";
	}
	if (iParam0 == joaat("prop_bush_med_03_cr2"))
	{
		return "FMMC_PR_BUSHS";
	}
	if (iParam0 == joaat("prop_joshua_tree_01a"))
	{
		return "FMMC_PR_JOTREE";
	}
	if (iParam0 == joaat("prop_cactus_01e"))
	{
		return "FMMC_PR_CACTUS";
	}
	if (iParam0 == joaat("prop_log_break_01"))
	{
		return "FMMC_PR_TREFLN";
	}
	if (iParam0 == joaat("prop_pot_plant_05c"))
	{
		return "FMMC_PR_PLNTAP";
	}
	if (iParam0 == joaat("prop_pot_plant_04c"))
	{
		return "FMMC_PR_PLNTPP";
	}
	if (iParam0 == joaat("prop_pot_plant_05d"))
	{
		return "FMMC_PR_PLNTFW";
	}
	if (iParam0 == joaat("prop_pot_plant_03b_cr2"))
	{
		return "FMMC_PR_PLNTCF";
	}
	if (iParam0 == joaat("prop_pot_plant_04b"))
	{
		return "FMMC_PR_PLNTTC";
	}
	if (iParam0 == joaat("prop_rock_4_big2"))
	{
		return "FMMC_PR_RCKBGR";
	}
	if (iParam0 == joaat("prop_rock_4_c_2"))
	{
		return "FMMC_PR_RCKMDF";
	}
	if (iParam0 == joaat("prop_rock_4_big"))
	{
		return "FMMC_PR_RCKBGF";
	}
	if (iParam0 == joaat("prop_rock_4_big"))
	{
		return "FMMC_PR_RCKBGF";
	}
	if (iParam0 == joaat("sum_prop_ac_rock_01a"))
	{
		return "MC_PR_RCK1";
	}
	if (iParam0 == joaat("sum_prop_ac_rock_01b"))
	{
		return "MC_PR_RCK2";
	}
	if (iParam0 == joaat("sum_prop_ac_rock_01c"))
	{
		return "MC_PR_RCK3";
	}
	if (iParam0 == joaat("sum_prop_ac_rock_01d"))
	{
		return "MC_PR_RCK4";
	}
	if (iParam0 == joaat("sum_prop_ac_rock_01e"))
	{
		return "MC_PR_RCK5";
	}
	if (iParam0 == joaat("prop_worklight_01a"))
	{
		return "FMMC_PR_WKLGHT1a";
	}
	if (iParam0 == joaat("prop_worklight_02a"))
	{
		return "FMMC_PR_WKLGHT2a";
	}
	if (iParam0 == joaat("prop_worklight_03a"))
	{
		return "FMMC_PR_WKLGHT3a";
	}
	if (iParam0 == joaat("prop_worklight_03b"))
	{
		return "FMMC_PR_WKLGHT3b";
	}
	if (iParam0 == joaat("prop_worklight_04b"))
	{
		return "FMMC_PR_WKLGHT4b";
	}
	if (iParam0 == joaat("prop_worklight_04d"))
	{
		return "FMMC_PR_WKLGHT4d";
	}
	if (iParam0 == joaat("prop_ind_coalcar_02"))
	{
		return "FMMC_PR_COALCAR";
	}
	if (iParam0 == joaat("prop_crashed_heli"))
	{
		return "FMMC_PR_CRSHHELI";
	}
	if (iParam0 == joaat("prop_water_ramp_01"))
	{
		return "FMMC_PR_WTRRAMP1";
	}
	if (iParam0 == joaat("prop_water_ramp_02"))
	{
		return "FMMC_PR_WTRRAMP2";
	}
	if (iParam0 == joaat("prop_water_ramp_03"))
	{
		return "FMMC_PR_WTRRAMP3";
	}
	if (iParam0 == joaat("vw_prop_vw_barrel_01a"))
	{
		return "FMMC_PR_WBARR1";
	}
	if (iParam0 == joaat("vw_prop_vw_barrel_pile_01a"))
	{
		return "FMMC_PR_WBARR2";
	}
	if (iParam0 == joaat("vw_prop_vw_barrel_pile_02a"))
	{
		return "FMMC_PR_WBARR3";
	}
	if (iParam0 == joaat("vw_prop_vw_barrier_rope_01a"))
	{
		return "FMMC_PR_ROPEB1";
	}
	if (iParam0 == joaat("vw_prop_vw_barrier_rope_02a"))
	{
		return "FMMC_PR_ROPEB2";
	}
	if (iParam0 == joaat("reh_prop_reh_platform_b_01a"))
	{
		return "FMMC_PR_WPLAT";
	}
	if (iParam0 == joaat("prop_offroad_barrel01"))
	{
		return "FMMC_DPR_BARREL";
	}
	if (iParam0 == joaat("prop_offroad_barrel02"))
	{
		return "FMMC_DPR_BRLLNE";
	}
	if (iParam0 == joaat("prop_barrel_exp_01a"))
	{
		return "FMMC_DPR_EXPBRL";
	}
	if (iParam0 == joaat("prop_fire_exting_1b"))
	{
		return "FMMC_DPR_FIREXT";
	}
	if (iParam0 == joaat("prop_roadcone02c"))
	{
		return "FMMC_DPR_CONE";
	}
	if (iParam0 == joaat("prop_roadcone02a"))
	{
		return "FMMC_DPR_TRFCNE";
	}
	if (iParam0 == joaat("prop_roadcone01a"))
	{
		return "FMMC_DPR_LTRFCN";
	}
	if (iParam0 == joaat("prop_roadpole_01a"))
	{
		return "FMMC_DPR_TRFPLE";
	}
	if (iParam0 == joaat("prop_postbox_01a"))
	{
		return "FMMC_DPR_MALBOX";
	}
	if (iParam0 == joaat("prop_news_disp_02d"))
	{
		return "FMMC_DPR_NPVND";
	}
	if (iParam0 == joaat("prop_vend_water_01"))
	{
		return "FMMC_DPR_WVND";
	}
	if (iParam0 == joaat("prop_vend_snak_01_tu"))
	{
		return "FMMC_DPR_MCHSNK";
	}
	if (iParam0 == joaat("prop_train_ticket_02_tu"))
	{
		return "FMMC_DPR_MCHTCK";
	}
	if (iParam0 == joaat("prop_boxpile_02b"))
	{
		return "FMMC_DPR_BOXPIL";
	}
	if (iParam0 == joaat("prop_mc_conc_barrier_01"))
	{
		return "FMMC_DPR_DESBAR";
	}
	if (iParam0 == joaat("prop_fncsec_03b"))
	{
		return "FMMC_DPR_SECFEN";
	}
	if (iParam0 == joaat("prop_table_08_side"))
	{
		return "FMMC_DPR_UPTTBL";
	}
	if (iParam0 == joaat("prop_container_ld_pu"))
	{
		return "FMMC_DPR_AMOCRT";
	}
	if (iParam0 == joaat("prop_mb_ordnance_02"))
	{
		return "FMMC_DPR_ORDNAN";
	}
	if (iParam0 == joaat("prop_storagetank_02b"))
	{
		return "FMMC_DPR_TKRDEX";
	}
	if (iParam0 == joaat("prop_logpile_01"))
	{
		return "FMMC_DPR_LGPLEL";
	}
	if (iParam0 == joaat("prop_logpile_03"))
	{
		return "FMMC_DPR_LGPLES";
	}
	if (iParam0 == joaat("prop_pipes_02b"))
	{
		return "FMMC_DPR_PIPPLE";
	}
	if (iParam0 == joaat("prop_barrel_pile_01"))
	{
		return "FMMC_DPR_BRLPLE";
	}
	if (iParam0 == joaat("prop_barrel_exp_01b"))
	{
		return "FMMC_DPR_BRGOEX";
	}
	if (iParam0 == joaat("prop_barrel_exp_01c"))
	{
		return "FMMC_DPR_BRFLEX";
	}
	if (iParam0 == joaat("prop_gas_tank_02a"))
	{
		return "FMMC_DPR_TKLRGW";
	}
	if (iParam0 == joaat("prop_gas_tank_04a"))
	{
		return "FMMC_DPR_TKLRGG";
	}
	if (iParam0 == joaat("prop_gas_tank_02b"))
	{
		return "FMMC_DPR_TKLRGY";
	}
	if (iParam0 == joaat("prop_jerrycan_01a"))
	{
		return "FMMC_DPR_JRYCAN";
	}
	if (iParam0 == joaat("prop_gascyl_01a"))
	{
		return "FMMC_DPR_SGC";
	}
	if (iParam0 == joaat("prop_gascyl_04a"))
	{
		return "FMMC_DPR_LGC";
	}
	if (iParam0 == joaat("prop_gascyl_03a"))
	{
		return "FMMC_DPR_TBGAS";
	}
	if (iParam0 == joaat("prop_gascyl_03b"))
	{
		return "FMMC_DPR_TRGAS";
	}
	if (iParam0 == joaat("prop_gascyl_02a"))
	{
		return "FMMC_DPR_OLGAS";
	}
	if (iParam0 == joaat("prop_gascyl_02b"))
	{
		return "FMMC_DPR_OSGAS";
	}
	if (iParam0 == joaat("prop_fruitstand_b"))
	{
		return "FMMC_DPR_FSTND";
	}
	if (iParam0 == joaat("prop_rub_tyre_03"))
	{
		return "FMMC_DPR_RBRTYR";
	}
	if (iParam0 == joaat("prop_barrel_02b"))
	{
		return "FMMC_DPR_BAR2";
	}
	if (iParam0 == joaat("prop_barrel_01a"))
	{
		return "FMMC_DPR_BAR3";
	}
	if (iParam0 == joaat("imp_prop_impexp_boxpile_01"))
	{
		return "FMMC_DPR_BP3" /* GXT: Pile of Crates */;
	}
	if (iParam0 == joaat("sr_prop_sr_boxpile_02"))
	{
		return "FMMC_DPR_CP1" /* GXT: Crate Pile 1 */;
	}
	if (iParam0 == joaat("sr_prop_sr_boxpile_03"))
	{
		return "FMMC_DPR_CP2" /* GXT: Crate Pile 2 */;
	}
	if (iParam0 == joaat("xm_prop_rsply_crate04a"))
	{
		return "FMMC_PR_GCRTC";
	}
	if (iParam0 == joaat("prop_mb_crate_01a"))
	{
		return "FMMC_PR_GCRTL";
	}
	if (iParam0 == joaat("prop_pallettruck_01"))
	{
		return "FMMC_PR_PLTTRK";
	}
	if (iParam0 == joaat("prop_rub_cardpile_04"))
	{
		return "FMMC_PR_CCP1";
	}
	if (iParam0 == joaat("prop_rub_cardpile_06"))
	{
		return "FMMC_PR_CCP2";
	}
	if (iParam0 == joaat("prop_skid_box_01"))
	{
		return "FMMC_PR_CSB";
	}
	if (iParam0 == joaat("prop_cons_plyboard_01"))
	{
		return "FMMC_PR_CPB";
	}
	if (iParam0 == joaat("prop_cons_plank"))
	{
		return "FMMC_PR_CP";
	}
	if (iParam0 == joaat("prop_barrier_work01c"))
	{
		return "FMMC_PR_CWB";
	}
	if (iParam0 == joaat("prop_food_cb_tray_01"))
	{
		return "FMMC_PR_CFT1";
	}
	if (iParam0 == joaat("prop_food_bs_tray_06"))
	{
		return "FMMC_PR_CFT2";
	}
	if (iParam0 == joaat("prop_cs_envolope_01"))
	{
		return "FMMC_PR_CE";
	}
	if (iParam0 == joaat("prop_cs_binder_01"))
	{
		return "FMMC_PR_CB";
	}
	if (iParam0 == joaat("stt_prop_stunt_bowling_pin"))
	{
		return "MC_PR_STNT63";
	}
	if (iParam0 == joaat("stt_prop_stunt_bowling_ball"))
	{
		return "MC_PR_STNT261";
	}
	if (iParam0 == joaat("stt_prop_stunt_soccer_lball"))
	{
		return "MC_PR_STNT65";
	}
	if (iParam0 == joaat("stt_prop_stunt_soccer_sball"))
	{
		return "MC_PR_STNT66";
	}
	if (iParam0 == joaat("stt_prop_stunt_soccer_ball"))
	{
		return "MC_PR_STNT68";
	}
	if (iParam0 == joaat("xs_prop_arena_bomb_s"))
	{
		return "ARNAP_BMB_S";
	}
	if (iParam0 == joaat("xs_prop_arena_bomb_m"))
	{
		return "ARNAP_BMB_M";
	}
	if (iParam0 == joaat("xs_prop_arena_bomb_l"))
	{
		return "ARNAP_BMB_L";
	}
	if (iParam0 == joaat("prop_ld_alarm_01"))
	{
		return "FMMC_PR_ALARM";
	}
	if (iParam0 == joaat("prop_flare_01"))
	{
		return "FMMC_PR_FLARE";
	}
	if (iParam0 == joaat("ind_prop_firework_03"))
	{
		return "FMMC_PR_FIREW";
	}
	if (iParam0 == joaat("prop_barrier_work05"))
	{
		return "FMMC_PR_PBARR";
	}
	if (iParam0 == joaat("ind_prop_dlc_flag_02"))
	{
		return "FMMC_PR_AMFLG";
	}
	if (iParam0 == joaat("sm_prop_smug_cover_01a"))
	{
		return "FMMC_PR_RACOV";
	}
	if (iParam0 == joaat("xm_prop_x17_cover_01"))
	{
		return "FMMC_PR_RACOVS";
	}
	if (iParam0 == joaat("xm_prop_x17_bunker_door"))
	{
		return "FMMC_PR_IAADR";
	}
	if (iParam0 == joaat("prop_sm1_11_garaged"))
	{
		return "FMMC_PR_GRGDR";
	}
	if (iParam0 == joaat("prop_conslift_lift"))
	{
		return "FMMC_PR_CSLIF";
	}
	if (iParam0 == joaat("ba_prop_battle_ps_box_01"))
	{
		return "FMMC_PR_PONSON";
	}
	if (iParam0 == joaat("reh_prop_reh_keypad_01a"))
	{
		return "FMMC_OM_KPC";
	}
	if (iParam0 == joaat("hei_prop_bank_plug"))
	{
		return "FMMC_PR_BPLUG";
	}
	if (iParam0 == joaat("hei_prop_wall_alarm_on"))
	{
		return "FMMC_PR_AMLG1";
	}
	if (iParam0 == joaat("hei_prop_wall_alarm_off"))
	{
		return "FMMC_PR_AMLG2";
	}
	if (iParam0 == joaat("hei_prop_hei_cash_trolly_03"))
	{
		return "FMMC_PR_CASHT";
	}
	if (iParam0 == joaat("hei_prop_carrier_docklight_01"))
	{
		return "FMMC_PR_CARL2";
	}
	if (iParam0 == joaat("hei_prop_carrier_docklight_02"))
	{
		return "FMMC_PR_CARL5";
	}
	if (iParam0 == joaat("hei_prop_wall_light_10a_cr"))
	{
		return "FMMC_PR_WALLL";
	}
	if (iParam0 == joaat("hei_prop_heist_apecrate"))
	{
		return "FMMC_PR_MNKCR";
	}
	if (iParam0 == joaat("hei_prop_cc_metalcover_01"))
	{
		return "FMMC_PR_METCV";
	}
	if (iParam0 == joaat("hei_prop_bank_alarm_01"))
	{
		return "FMMC_PR_BNKAL";
	}
	if (iParam0 == joaat("prop_road_memorial_02"))
	{
		return "FMMC_PR_RDMEM";
	}
	if (iParam0 == joaat("prop_boombox_01"))
	{
		return "FMMC_PR_BBRE";
	}
	if (iParam0 == joaat("prop_ghettoblast_02"))
	{
		return "FMMC_PR_GHBL";
	}
	if (iParam0 == joaat("prop_tapeplayer_01"))
	{
		return "FMMC_PR_TAPL";
	}
	if (iParam0 == joaat("prop_radio_01"))
	{
		return "FMMC_PR_RADI";
	}
	if (iParam0 == joaat("ind_prop_firework_01"))
	{
		return "FMMC_PR_FRWK";
	}
	if (iParam0 == joaat("prop_cs_heist_bag_01"))
	{
		return "FMMC_PR_HB01";
	}
	if (iParam0 == joaat("prop_bikerset"))
	{
		return "FMMC_PR_BISET";
	}
	if (iParam0 == joaat("prop_champset"))
	{
		return "FMMC_PR_CHSET";
	}
	if (iParam0 == joaat("xm_prop_body_bag"))
	{
		return "FMMC_OM_54";
	}
	if (iParam0 == joaat("xm_prop_x17_corpse_01"))
	{
		return "FMMC_OM_56";
	}
	if (iParam0 == joaat("xm_prop_x17_corpse_02"))
	{
		return "FMMC_OM_57";
	}
	if (iParam0 == joaat("xm_prop_x17_corpse_03"))
	{
		return "FMMC_OM_58";
	}
	if (iParam0 == joaat("xm_prop_x17_shovel_01b"))
	{
		return "FMMC_OM_59";
	}
	if (iParam0 == joaat("xm_prop_x17_shovel_01a"))
	{
		return "FMMC_OM_60";
	}
	if (iParam0 == joaat("xm_prop_x17_note_paper_01a"))
	{
		return "FMMC_OM_61";
	}
	if (iParam0 == joaat("xm_prop_x17_chest_closed"))
	{
		return "FMMC_OM_62";
	}
	if (iParam0 == joaat("xm_prop_x17_chest_open"))
	{
		return "FMMC_OM_63";
	}
	if (iParam0 == joaat("xm_prop_gr_console_01"))
	{
		return "FMMC_OM_H2CON";
	}
	if (iParam0 == joaat("prop_cabinet_01b"))
	{
		return "FMMC_OM_64";
	}
	if (iParam0 == joaat("xm_prop_base_jet_01"))
	{
		return "FMMC_OM_JET1";
	}
	if (iParam0 == joaat("xm_prop_base_jet_02"))
	{
		return "FMMC_OM_JET2";
	}
	if (iParam0 == joaat("xm_prop_x17_desk_cover_01a"))
	{
		return "FMMC_OM_42";
	}
	if (iParam0 == joaat("xm_prop_x17_tv_stand_01a"))
	{
		return "FMMC_OM_47";
	}
	if (iParam0 == joaat("xm_prop_x17_tool_draw_01a"))
	{
		return "FMMC_OM_46";
	}
	if (iParam0 == joaat("xm_prop_x17_filecab_01a"))
	{
		return "FMMC_OM_45";
	}
	if (iParam0 == joaat("xm_prop_x17_labvats"))
	{
		return "FMMC_OM_44";
	}
	if (iParam0 == joaat("xm_prop_x17_seat_cover_01a"))
	{
		return "FMMC_OM_41";
	}
	if (iParam0 == joaat("ba_prop_battle_mast_01a"))
	{
		return "FMMC_PR_ARMS";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_lrg1"))
	{
		return "FMMC_PR_LHB";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_mdm1"))
	{
		return "FMMC_PR_MHB";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_sml1"))
	{
		return "FMMC_PR_SHB";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_xl1"))
	{
		return "FMMC_PR_XLHB";
	}
	if (iParam0 == joaat("sr_prop_spec_target_s_01a"))
	{
		return "FMMC_PR_BJT1";
	}
	if (iParam0 == joaat("sr_prop_spec_target_m_01a"))
	{
		return "FMMC_PR_BJT2";
	}
	if (iParam0 == joaat("sr_prop_spec_target_b_01a"))
	{
		return "FMMC_PR_BJT3";
	}
	if (iParam0 == joaat("w_ar_railgun"))
	{
		return "FMMC_STR_WP_52";
	}
	if (iParam0 == joaat("xm_prop_x17_bag_01a"))
	{
		return "FMMC_OM_48";
	}
	if (iParam0 == joaat("xm_prop_x17_bag_med_01a"))
	{
		return "FMMC_OM_49";
	}
	if (iParam0 == joaat("xm_prop_x17_barge_01"))
	{
		return "FMMC_OM_50";
	}
	if (iParam0 == joaat("xm_prop_x17_trail_01a"))
	{
		return "FMMC_OM_51";
	}
	if (iParam0 == joaat("xm_prop_x17_trail_02a"))
	{
		return "FMMC_OM_52";
	}
	if (iParam0 == joaat("xm_prop_x17_sub"))
	{
		return "FMMC_OM_SUBMAR";
	}
	if (iParam0 == joaat("xm_prop_base_cabinet_door_01"))
	{
		return "FMMC_OM_53";
	}
	if (iParam0 == joaat("xm_prop_x17_shamal_crash"))
	{
		return "FMMC_PR_117";
	}
	if (iParam0 == joaat("v_corp_filecablow"))
	{
		return "FMMC_PR_118";
	}
	if (iParam0 == joaat("w_pi_pistol"))
	{
		return "FMMC_PR_PST";
	}
	if (iParam0 == joaat("reh_prop_reh_jammer_01a"))
	{
		return "FMMC_PD_SIGJ";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_flip_m"))
	{
		return "MC_PR_STNT173";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_flip_mb"))
	{
		return "MC_PR_STNT32";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_flip_s"))
	{
		return "MC_PR_STNT193";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_flip_sb"))
	{
		return "MC_PR_STNT31";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_hloop"))
	{
		return "MC_PR_STNT19";
	}
	if (iParam0 == joaat("stt_prop_ramp_adj_loop"))
	{
		return "MC_PR_STNT20";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_xs"))
	{
		return "MC_PR_STNT25";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_s"))
	{
		return "MC_PR_STNT26";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_m"))
	{
		return "MC_PR_STNT27";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_l"))
	{
		return "MC_PR_STNT28";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_xl"))
	{
		return "MC_PR_STNT29";
	}
	if (iParam0 == joaat("stt_prop_ramp_jump_xxl"))
	{
		return "MC_PR_STNT30";
	}
	if (iParam0 == joaat("stt_prop_track_jump_01a"))
	{
		return "MC_PR_STNT156";
	}
	if (iParam0 == joaat("stt_prop_track_jump_01b"))
	{
		return "MC_PR_STNT157";
	}
	if (iParam0 == joaat("stt_prop_track_jump_01c"))
	{
		return "MC_PR_STNT158";
	}
	if (iParam0 == joaat("stt_prop_track_jump_02a"))
	{
		return "MC_PR_STNT159";
	}
	if (iParam0 == joaat("stt_prop_track_jump_02b"))
	{
		return "MC_PR_STNT160";
	}
	if (iParam0 == joaat("stt_prop_track_jump_02c"))
	{
		return "MC_PR_STNT161";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_01a"))
	{
		return "MC_PR_STNT156";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_01b"))
	{
		return "MC_PR_STNT157";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_01c"))
	{
		return "MC_PR_STNT158";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_02a"))
	{
		return "MC_PR_STNT159";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_02b"))
	{
		return "MC_PR_STNT160";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_02c"))
	{
		return "MC_PR_STNT161";
	}
	if (iParam0 == joaat("stt_prop_ramp_multi_loop_rb"))
	{
		return "MC_PR_STNT21";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_loop"))
	{
		return "MC_PR_STNT319";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_s"))
	{
		return "MC_PR_STNT24";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_l_s"))
	{
		return "MC_PR_STNT150";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_m"))
	{
		return "MC_PR_STNT23";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_l_m"))
	{
		return "MC_PR_STNT151";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_l"))
	{
		return "MC_PR_STNT22";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_l_l"))
	{
		return "MC_PR_STNT152";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_xxl"))
	{
		return "MC_PR_STNT155";
	}
	if (iParam0 == joaat("stt_prop_ramp_spiral_l_xxl"))
	{
		return "MC_PR_STNT153";
	}
	if (iParam0 == joaat("stt_prop_stunt_bowlpin_stand"))
	{
		return "MC_PR_STNT64";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_s"))
	{
		return "MC_PR_STNT88";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_m"))
	{
		return "MC_PR_STNT89";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_l"))
	{
		return "MC_PR_STNT90";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_s"))
	{
		return "MC_PR_STNT88";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_m"))
	{
		return "MC_PR_STNT89";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_l"))
	{
		return "MC_PR_STNT90";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_sb"))
	{
		return "MC_PR_STNT110";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_mb"))
	{
		return "MC_PR_STNT111";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump_lb"))
	{
		return "MC_PR_STNT112";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_sb"))
	{
		return "MC_PR_STNT110";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_mb"))
	{
		return "MC_PR_STNT111";
	}
	if (iParam0 == joaat("bkr_prop_biker_jump_lb"))
	{
		return "MC_PR_STNT112";
	}
	if (iParam0 == joaat("stt_prop_stunt_ramp"))
	{
		return "MC_PR_STNT33";
	}
	if (iParam0 == joaat("stt_prop_stunt_wideramp"))
	{
		return "MC_PR_STNT135";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_qp3"))
	{
		return "MC_PR_STNT162";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_qp2"))
	{
		return "MC_PR_STNT163";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_qp"))
	{
		return "MC_PR_STNT164";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_hump_01"))
	{
		return "MC_PR_STNT163s";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_hump_02"))
	{
		return "MC_PR_STNT163m";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_cor"))
	{
		return "MC_PR_BKRQC";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_cor_02"))
	{
		return "MC_PR_BKRQCM";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_cor_03"))
	{
		return "MC_PR_BKRQCL";
	}
	if (iParam0 == joaat("stt_prop_stunt_soccer_goal"))
	{
		return "MC_PR_STNT67";
	}
	if (iParam0 == joaat("stt_prop_race_start_line_01"))
	{
		return "MC_PR_STNT190";
	}
	if (iParam0 == joaat("stt_prop_race_start_line_01b"))
	{
		return "MC_PR_STNT190b";
	}
	if (iParam0 == joaat("sr_prop_sr_start_line_02"))
	{
		return "MC_PR_STNT191";
	}
	if (iParam0 == joaat("stt_prop_race_start_line_02b"))
	{
		return "MC_PR_STNT243";
	}
	if (iParam0 == joaat("stt_prop_race_start_line_03"))
	{
		return "MC_PR_STNT192";
	}
	if (iParam0 == joaat("stt_prop_race_start_line_03b"))
	{
		return "MC_PR_STNT244";
	}
	if (iParam0 == joaat("ch_prop_track_pit_stop_01"))
	{
		return "MC_PR_STNT325";
	}
	if (iParam0 == joaat("sum_prop_ac_track_pit_stop_30r"))
	{
		return "MC_PR_STNT325";
	}
	if (iParam0 == joaat("sum_prop_ac_track_pit_stop_16l"))
	{
		return "MC_PR_SLPL2";
	}
	if (iParam0 == joaat("sum_prop_ac_track_pit_stop_16r"))
	{
		return "MC_PR_SLPR";
	}
	if (iParam0 == joaat("sum_prop_ac_track_pit_stop_30l"))
	{
		return "MC_PR_SLPL";
	}
	if (iParam0 == joaat("stt_prop_stunt_target_small"))
	{
		return "MC_PR_STNT320";
	}
	if (iParam0 == joaat("stt_prop_stunt_target"))
	{
		return "MC_PR_STNT34";
	}
	if (iParam0 == joaat("as_prop_as_stunt_target"))
	{
		return "MC_PR_ASC01";
	}
	if (iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return "MC_PR_ASC02";
	}
	if (iParam0 == joaat("stt_prop_stunt_landing_zone_01"))
	{
		return "MC_PR_STNT171";
	}
	if (iParam0 == joaat("stt_prop_hoop_tyre_01a"))
	{
		return "MC_PR_STNT194";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_crn"))
	{
		return "MC_PR_STNT46";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_crn2"))
	{
		return "MC_PR_STNT102";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_crn_5d"))
	{
		return "MC_PR_STNT226";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_crn_15d"))
	{
		return "MC_PR_STNT227";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_crn_30d"))
	{
		return "MC_PR_STNT228";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fork"))
	{
		return "MC_PR_STNT134";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_gap_01"))
	{
		return "MC_PR_STNT165";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_gap_02"))
	{
		return "MC_PR_STNT166";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_gap_03"))
	{
		return "MC_PR_STNT262";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_cross"))
	{
		return "MC_PR_STNT40";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_end"))
	{
		return "MC_PR_STNT47";
	}
	if (iParam0 == joaat("sr_prop_sr_tube_end"))
	{
		return "MC_PR_STNT47b";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_speed"))
	{
		return "MC_PR_STNT248";
	}
	if (iParam0 == joaat("stt_prop_track_tube_02"))
	{
		return "MC_PR_STNT170";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_qg"))
	{
		return "MC_PR_STNT41";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_hg"))
	{
		return "MC_PR_STNT42";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_xxs"))
	{
		return "MC_PR_STNT104";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_xs"))
	{
		return "MC_PR_STNT37";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_s"))
	{
		return "MC_PR_STNT38";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_m"))
	{
		return "MC_PR_STNT39";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_l"))
	{
		return "MC_PR_STNT100";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_jmp"))
	{
		return "MC_PR_STNT44";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_jmp2"))
	{
		return "MC_PR_STNT82";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_ent"))
	{
		return "MC_PR_STNT93";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_01"))
	{
		return "MC_PR_STNT83";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_02"))
	{
		return "MC_PR_STNT84";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_03"))
	{
		return "MC_PR_STNT85";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_04"))
	{
		return "MC_PR_STNT86";
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_05"))
	{
		return "MC_PR_STNT87";
	}
	if (iParam0 == joaat("ba_prop_battle_tube_fn_01"))
	{
		return "MC_PR_STNT83";
	}
	if (iParam0 == joaat("ba_prop_battle_tube_fn_02"))
	{
		return "MC_PR_STNT84";
	}
	if (iParam0 == joaat("ba_prop_battle_tube_fn_03"))
	{
		return "MC_PR_STNT85";
	}
	if (iParam0 == joaat("ba_prop_battle_tube_fn_04"))
	{
		return "MC_PR_STNT86";
	}
	if (iParam0 == joaat("ba_prop_battle_tube_fn_05"))
	{
		return "MC_PR_STNT87";
	}
	if (iParam0 == joaat("as_prop_as_tube_gap_03"))
	{
		return "MC_PR_ASC03";
	}
	if (iParam0 == joaat("as_prop_as_tube_xxs"))
	{
		return "MC_PR_ASC04";
	}
	if (iParam0 == joaat("stt_prop_track_stop_sign"))
	{
		return "MC_PR_STNT101";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_01"))
	{
		return "MC_PR_STNT174";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_02"))
	{
		return "MC_PR_STNT175";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_03"))
	{
		return "MC_PR_STNT176";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_04"))
	{
		return "MC_PR_STNT177";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_05"))
	{
		return "MC_PR_STNT178";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_06"))
	{
		return "MC_PR_STNT179";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_07"))
	{
		return "MC_PR_STNT180";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_08"))
	{
		return "MC_PR_STNT181";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_09"))
	{
		return "MC_PR_STNT182";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_10"))
	{
		return "MC_PR_STNT183";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_11"))
	{
		return "MC_PR_STNT184";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_12"))
	{
		return "MC_PR_STNT185";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_13"))
	{
		return "MC_PR_STNT186";
	}
	if (iParam0 == joaat("stt_prop_corner_sign_14"))
	{
		return "MC_PR_STNT187";
	}
	if (iParam0 == joaat("ch_prop_pit_sign_01a"))
	{
		return "FMMC_PIT_SIGN";
	}
	if (iParam0 == joaat("sum_prop_ac_pit_sign_left"))
	{
		return "MC_PR_S_PTL";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_01"))
	{
		return "MC_PR_STNT198";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_02"))
	{
		return "MC_PR_STNT199";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_03"))
	{
		return "MC_PR_STNT200";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_04"))
	{
		return "MC_PR_STNT201";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_05"))
	{
		return "MC_PR_STNT202";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_06"))
	{
		return "MC_PR_STNT203";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_07"))
	{
		return "MC_PR_STNT204";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_08"))
	{
		return "MC_PR_STNT205";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_09"))
	{
		return "MC_PR_STNT206";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_10"))
	{
		return "MC_PR_STNT207";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_11"))
	{
		return "MC_PR_STNT208";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_12"))
	{
		return "MC_PR_STNT209";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_13"))
	{
		return "MC_PR_STNT210";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_14"))
	{
		return "MC_PR_STNT211";
	}
	if (iParam0 == joaat("stt_prop_sign_circuit_15"))
	{
		return "MC_PR_STNT212";
	}
	if (iParam0 == joaat("stt_prop_track_bend_bar_m"))
	{
		return "MC_PR_STNT52";
	}
	if (iParam0 == joaat("stt_prop_track_bend_5d_bar"))
	{
		return "MC_PR_STNT264";
	}
	if (iParam0 == joaat("stt_prop_track_bend_15d_bar"))
	{
		return "MC_PR_STNT265";
	}
	if (iParam0 == joaat("stt_prop_track_bend_30d_bar"))
	{
		return "MC_PR_STNT266";
	}
	if (iParam0 == joaat("stt_prop_track_bend_180d_bar"))
	{
		return "MC_PR_STNT267";
	}
	if (iParam0 == joaat("stt_prop_track_bend_m"))
	{
		return "MC_PR_STNT48";
	}
	if (iParam0 == joaat("stt_prop_track_bend_5d"))
	{
		return "MC_PR_STNT222";
	}
	if (iParam0 == joaat("stt_prop_track_bend_15d"))
	{
		return "MC_PR_STNT223";
	}
	if (iParam0 == joaat("stt_prop_track_bend_30d"))
	{
		return "MC_PR_STNT224";
	}
	if (iParam0 == joaat("stt_prop_track_bend_180d"))
	{
		return "MC_PR_STNT225";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_180d"))
	{
		return "MC_PR_CRN_180h";
	}
	if (iParam0 == joaat("stt_prop_track_fork"))
	{
		return "MC_PR_STNT137";
	}
	if (iParam0 == joaat("stt_prop_track_cross"))
	{
		return "MC_PR_STNT56";
	}
	if (iParam0 == joaat("stt_prop_track_fork_bar"))
	{
		return "MC_PR_STNT138";
	}
	if (iParam0 == joaat("stt_prop_track_cross_bar"))
	{
		return "MC_PR_STNT57";
	}
	if (iParam0 == joaat("stt_prop_track_chicane_l"))
	{
		return "MC_PR_STNT167";
	}
	if (iParam0 == joaat("stt_prop_track_tube_01"))
	{
		return "MC_PR_STNT169";
	}
	if (iParam0 == joaat("stt_prop_track_chicane_r"))
	{
		return "MC_PR_STNT168";
	}
	if (iParam0 == joaat("stt_prop_track_chicane_l_02"))
	{
		return "MC_PR_STNT196";
	}
	if (iParam0 == joaat("stt_prop_track_chicane_r_02"))
	{
		return "MC_PR_STNT197";
	}
	if (iParam0 == joaat("stt_prop_track_block_01"))
	{
		return "MC_PR_STNT236";
	}
	if (iParam0 == joaat("stt_prop_track_block_02"))
	{
		return "MC_PR_STNT237";
	}
	if (iParam0 == joaat("stt_prop_track_block_03"))
	{
		return "MC_PR_STNT238";
	}
	if (iParam0 == joaat("stt_prop_track_bend_l"))
	{
		return "MC_PR_STNT239";
	}
	if (iParam0 == joaat("stt_prop_track_bend2_l"))
	{
		return "MC_PR_STNT240";
	}
	if (iParam0 == joaat("stt_prop_track_bend_l_b"))
	{
		return "MC_PR_STNT49D";
	}
	if (iParam0 == joaat("ba_prop_track_bend_l_b"))
	{
		return "MC_PR_STNT49";
	}
	if (iParam0 == joaat("stt_prop_track_bend2_l_b"))
	{
		return "MC_PR_STNT141";
	}
	if (iParam0 == joaat("stt_prop_track_bend_bar_l"))
	{
		return "MC_PR_STNT241";
	}
	if (iParam0 == joaat("stt_prop_track_bend2_bar_l"))
	{
		return "MC_PR_STNT259";
	}
	if (iParam0 == joaat("stt_prop_track_bend_bar_l_b"))
	{
		return "MC_PR_STNT53";
	}
	if (iParam0 == joaat("stt_prop_track_bend2_bar_l_b"))
	{
		return "MC_PR_STNT142";
	}
	if (iParam0 == joaat("stt_prop_race_gantry_01"))
	{
		return "MC_PR_STNT242";
	}
	if (iParam0 == joaat("ch_prop_ch_race_gantry_02"))
	{
		return "MC_PR_STNT242b";
	}
	if (iParam0 == joaat("ch_prop_ch_race_gantry_03"))
	{
		return "MC_PR_STNT242c";
	}
	if (iParam0 == joaat("ch_prop_ch_race_gantry_04"))
	{
		return "MC_PR_STNT242d";
	}
	if (iParam0 == joaat("ch_prop_ch_race_gantry_05"))
	{
		return "MC_PR_STNT242e";
	}
	if (iParam0 == joaat("stt_prop_track_funnel"))
	{
		return "MC_PR_STNT58";
	}
	if (iParam0 == joaat("stt_prop_track_funnel_ads_01a"))
	{
		return "MC_PR_STNT235";
	}
	if (iParam0 == joaat("stt_prop_track_funnel_ads_01b"))
	{
		return "MC_PR_STNT253";
	}
	if (iParam0 == joaat("stt_prop_track_funnel_ads_01c"))
	{
		return "MC_PR_STNT254";
	}
	if (iParam0 == joaat("stt_prop_track_link"))
	{
		return "MC_PR_STNT115";
	}
	if (iParam0 == joaat("stt_prop_track_start"))
	{
		return "MC_PR_STNT59";
	}
	if (iParam0 == joaat("stt_prop_track_start_02"))
	{
		return "MC_PR_STNT2";
	}
	if (iParam0 == joaat("stt_prop_track_straight_bar_l"))
	{
		return "MC_PR_STNT55";
	}
	if (iParam0 == joaat("stt_prop_track_straight_lm_bar"))
	{
		return "MC_PR_STNT55a";
	}
	if (iParam0 == joaat("stt_prop_track_straight_bar_m"))
	{
		return "MC_PR_STNT54";
	}
	if (iParam0 == joaat("stt_prop_track_straight_bar_s"))
	{
		return "MC_PR_STNT106";
	}
	if (iParam0 == joaat("stt_prop_track_straight_l"))
	{
		return "MC_PR_STNT51";
	}
	if (iParam0 == joaat("stt_prop_track_straight_lm"))
	{
		return "MC_O_STNT51a";
	}
	if (iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return "MC_PR_STNT51a";
	}
	if (iParam0 == joaat("stt_prop_track_straight_m"))
	{
		return "MC_PR_STNT50";
	}
	if (iParam0 == joaat("stt_prop_track_straight_s"))
	{
		return "MC_PR_STNT105";
	}
	if (iParam0 == joaat("sum_prop_ac_track_pit_stop_01"))
	{
		return "MC_PR_STPS";
	}
	if (iParam0 == joaat("stt_prop_wallride_01"))
	{
		return "MC_PR_STNT256";
	}
	if (iParam0 == joaat("stt_prop_wallride_01b"))
	{
		return "MC_PR_STNT91";
	}
	if (iParam0 == joaat("stt_prop_wallride_04"))
	{
		return "MC_PR_STNT60";
	}
	if (iParam0 == joaat("stt_prop_wallride_45r"))
	{
		return "MC_PR_STNT143";
	}
	if (iParam0 == joaat("stt_prop_wallride_45ra"))
	{
		return "MC_PR_STNT249";
	}
	if (iParam0 == joaat("stt_prop_wallride_45l"))
	{
		return "MC_PR_STNT144";
	}
	if (iParam0 == joaat("stt_prop_wallride_45la"))
	{
		return "MC_PR_STNT250";
	}
	if (iParam0 == joaat("stt_prop_wallride_90r"))
	{
		return "MC_PR_STNT145";
	}
	if (iParam0 == joaat("stt_prop_wallride_90rb"))
	{
		return "MC_PR_STNT251";
	}
	if (iParam0 == joaat("stt_prop_wallride_90l"))
	{
		return "MC_PR_STNT146";
	}
	if (iParam0 == joaat("stt_prop_wallride_90lb"))
	{
		return "MC_PR_STNT252";
	}
	if (iParam0 == joaat("stt_prop_wallride_02"))
	{
		return "MC_PR_STNT257";
	}
	if (iParam0 == joaat("stt_prop_wallride_02b"))
	{
		return "MC_PR_STNT92";
	}
	if (iParam0 == joaat("stt_prop_wallride_05"))
	{
		return "MC_PR_STNT258";
	}
	if (iParam0 == joaat("stt_prop_wallride_05b"))
	{
		return "MC_PR_STNT61";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_exshort"))
	{
		return "MC_PR_STNT154";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_short"))
	{
		return "MC_PR_STNT103";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_straight"))
	{
		return "MC_PR_STNT80";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_cutout"))
	{
		return "MC_PR_STNT113";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_otake"))
	{
		return "MC_PR_STNT69";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_fork"))
	{
		return "MC_PR_STNT139";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_funnel"))
	{
		return "MC_PR_STNT70";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_funlng"))
	{
		return "MC_PR_STNT140";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_slope15"))
	{
		return "MC_PR_STNT74";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_slope30"))
	{
		return "MC_PR_STNT75";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_slope45"))
	{
		return "MC_PR_STNT76";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_hill"))
	{
		return "MC_PR_STNT77";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_hill2"))
	{
		return "MC_PR_STNT78";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_bumps"))
	{
		return "MC_PR_STNT136";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_jump"))
	{
		return "MC_PR_STNT79";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump15"))
	{
		return "MC_PR_STNT116";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump30"))
	{
		return "MC_PR_STNT117";
	}
	if (iParam0 == joaat("stt_prop_stunt_jump45"))
	{
		return "MC_PR_STNT118";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_start"))
	{
		return "MC_PR_STNT71";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_start_02"))
	{
		return "MC_PR_STNT1";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_st_01"))
	{
		return "MC_PR_STNT246";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_st_02"))
	{
		return "MC_PR_STNT245";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_turn"))
	{
		return "MC_PR_STNT73";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_sh15"))
	{
		return "MC_PR_STNT107";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_sh30"))
	{
		return "MC_PR_STNT108";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_sh45"))
	{
		return "MC_PR_STNT109";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_sh45_a"))
	{
		return "MC_PR_STNT109A";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_uturn"))
	{
		return "MC_PR_STNT81";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_link"))
	{
		return "MC_PR_STNT114";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwlink"))
	{
		return "MC_PR_STNT3";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwlink_02"))
	{
		return "MC_PR_STNT247";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwshort"))
	{
		return "MC_PR_STNT4";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwsh15"))
	{
		return "MC_PR_STNT5";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwturn"))
	{
		return "MC_PR_STNT6";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwuturn"))
	{
		return "MC_PR_STNT7";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwslope15"))
	{
		return "MC_PR_STNT8";
	}
	if (iParam0 == joaat("as_prop_as_dwslope30"))
	{
		return "MC_PR_STNT9";
	}
	if (iParam0 == joaat("stt_prop_stunt_track_dwslope45"))
	{
		return "MC_PR_STNT10";
	}
	if (iParam0 == joaat("stt_prop_track_speedup"))
	{
		return "MC_PR_STNT132";
	}
	if (iParam0 == joaat("stt_prop_track_speedup_t1"))
	{
		return "MC_PR_STNT231";
	}
	if (iParam0 == joaat("stt_prop_track_speedup_t2"))
	{
		return "MC_PR_STNT232";
	}
	if (iParam0 == joaat("stt_prop_track_slowdown"))
	{
		return "MC_PR_STNT133";
	}
	if (iParam0 == joaat("stt_prop_track_slowdown_t1"))
	{
		return "MC_PR_STNT233";
	}
	if (iParam0 == joaat("stt_prop_track_slowdown_t2"))
	{
		return "MC_PR_STNT234";
	}
	if (iParam0 == -583990942)
	{
		return "MC_PR_STNT6";
	}
	if (iParam0 == 1601693814)
	{
		return "MC_PR_STNT7";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_sml1"))
	{
		return "MC_PR_STNT120";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_sml2"))
	{
		return "MC_PR_STNT121";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_sml3"))
	{
		return "MC_PR_STNT122";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_mdm1"))
	{
		return "MC_PR_STNT123";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_mdm2"))
	{
		return "MC_PR_STNT124";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_mdm3"))
	{
		return "MC_PR_STNT125";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_lrg1"))
	{
		return "MC_PR_STNT126";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_lrg2"))
	{
		return "MC_PR_STNT127";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_lrg3"))
	{
		return "MC_PR_STNT128";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_xl1"))
	{
		return "MC_PR_STNT129";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_xl2"))
	{
		return "MC_PR_STNT130";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_xl3"))
	{
		return "MC_PR_STNT131";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_huge_01"))
	{
		return "MC_PR_STNT147";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_huge_02"))
	{
		return "MC_PR_STNT148";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_huge_03"))
	{
		return "MC_PR_STNT149";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_huge_04"))
	{
		return "MC_PR_STNT229";
	}
	if (iParam0 == joaat("stt_prop_stunt_bblock_huge_05"))
	{
		return "MC_PR_STNT230";
	}
	if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "MC_PR_STNT188";
	}
	if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return "MC_AR_PROP_60";
	}
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return "MC_PR_STNT189";
	}
	if (iParam0 == joaat("stt_prop_race_tannoy"))
	{
		return "MC_PR_STNT255";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_01"))
	{
		return "MC_PR_AS_F";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_02"))
	{
		return "MC_PR_AS_LM";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_03"))
	{
		return "MC_PR_AS_RM";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_04"))
	{
		return "MC_PR_AS_LL";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_05"))
	{
		return "MC_PR_AS_RL";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_0l1"))
	{
		return "MC_PR_AS_L";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_sign_0r1"))
	{
		return "MC_PR_AS_R";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_01"))
	{
		return "MC_PR_STNT213";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_lit_01"))
	{
		return "MC_PR_STNT213";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_02"))
	{
		return "MC_PR_STNT214";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_03"))
	{
		return "MC_PR_STNT215";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_04"))
	{
		return "MC_PR_STNT274";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_05"))
	{
		return "MC_PR_STNT275";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_06"))
	{
		return "MC_PR_STNT276";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_07"))
	{
		return "MC_PR_STNT277";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_08"))
	{
		return "MC_PR_STNT278";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_09"))
	{
		return "MC_PR_STNT279";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_010"))
	{
		return "MC_PR_STNT280";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_011"))
	{
		return "MC_PR_STNT281";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_012"))
	{
		return "MC_PR_STNT282";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_013"))
	{
		return "MC_PR_STNT283";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_014"))
	{
		return "MC_PR_STNT316";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_015"))
	{
		return "MC_PR_STNT284";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r1"))
	{
		return "MC_PR_STNT216";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_lit_0r1"))
	{
		return "MC_PR_STNT216";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r2"))
	{
		return "MC_PR_STNT217";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r06"))
	{
		return "MC_PR_STNT285";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r07"))
	{
		return "MC_PR_STNT286";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r011"))
	{
		return "MC_PR_STNT287";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r012"))
	{
		return "MC_PR_STNT288";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r013"))
	{
		return "MC_PR_STNT289";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r014"))
	{
		return "MC_PR_STNT290";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r019"))
	{
		return "MC_PR_STNT291";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r3"))
	{
		return "MC_PR_STNT218";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r04"))
	{
		return "MC_PR_STNT292";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r05"))
	{
		return "MC_PR_STNT293";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r08"))
	{
		return "MC_PR_STNT294";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r09"))
	{
		return "MC_PR_STNT295";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r010"))
	{
		return "MC_PR_STNT296";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r015"))
	{
		return "MC_PR_STNT297";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r016"))
	{
		return "MC_PR_STNT298";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r017"))
	{
		return "MC_PR_STNT299";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0r018"))
	{
		return "MC_PR_STNT300";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l1"))
	{
		return "MC_PR_STNT219";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_lit_0l1"))
	{
		return "MC_PR_STNT219";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l2"))
	{
		return "MC_PR_STNT220";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l06"))
	{
		return "MC_PR_STNT301";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l07"))
	{
		return "MC_PR_STNT302";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l013"))
	{
		return "MC_PR_STNT303";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l014"))
	{
		return "MC_PR_STNT304";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l015"))
	{
		return "MC_PR_STNT305";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l020"))
	{
		return "MC_PR_STNT306";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l3"))
	{
		return "MC_PR_STNT221";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l04"))
	{
		return "MC_PR_STNT307";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l05"))
	{
		return "MC_PR_STNT308";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l08"))
	{
		return "MC_PR_STNT309";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l010"))
	{
		return "MC_PR_STNT310";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l012"))
	{
		return "MC_PR_STNT311";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l16"))
	{
		return "MC_PR_STNT312";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l17"))
	{
		return "MC_PR_STNT313";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l018"))
	{
		return "MC_PR_STNT314";
	}
	if (iParam0 == joaat("stt_prop_tyre_wall_0l019"))
	{
		return "MC_PR_STNT315";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_pit_l"))
	{
		return "MC_PR_TW_PL";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_pit_r"))
	{
		return "MC_PR_TW_PR";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_u_l"))
	{
		return "MC_PR_TW_UTL";
	}
	if (iParam0 == joaat("sum_prop_ac_tyre_wall_u_r"))
	{
		return "MC_PR_TW_UTR";
	}
	if (iParam0 == joaat("stt_prop_speakerstack_01a"))
	{
		return "MC_PR_STNT263";
	}
	if (iParam0 == joaat("ar_prop_ar_stunt_block_01a"))
	{
		return "MC_PR_STNT323";
	}
	if (iParam0 == joaat("ar_prop_ar_stunt_block_01b"))
	{
		return "MC_PR_STNT324";
	}
	if (iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s"))
	{
		return "MC_PR_STNT326";
	}
	if (iParam0 == joaat("ch_prop_track_ch_straight_bar_s"))
	{
		return "MC_PR_STNT327";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out"))
	{
		return "MC_PR_STNT328";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b"))
	{
		return "MC_PR_STNT329";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out"))
	{
		return "MC_PR_STNT330";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in"))
	{
		return "MC_PR_STNT331";
	}
	if (iParam0 == joaat("sum_prop_track_ac_straight_bar_s_s"))
	{
		return "MC_PR_STNT326";
	}
	if (iParam0 == joaat("sum_prop_track_ac_straight_bar_s"))
	{
		return "MC_PR_STNT327";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_bar_m_out"))
	{
		return "MC_PR_STNT330";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_bar_m_in"))
	{
		return "MC_PR_STNT331";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_bar_l_out"))
	{
		return "MC_PR_STNT328";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_bar_l_b"))
	{
		return "MC_PR_STNT329";
	}
	if (iParam0 == joaat("ch_prop_track_ch_straight_bar_m"))
	{
		return "MC_PR_STNT332";
	}
	if (iParam0 == joaat("ch_prop_stunt_landing_zone_01a"))
	{
		return "MC_PR_STNT333";
	}
	if (iParam0 == joaat("ch_prop_track_bend_bar_lc"))
	{
		return "MC_PR_STNT335b";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_lc"))
	{
		return "MC_PR_STNT335";
	}
	if (iParam0 == joaat("sum_prop_track_ac_bend_bar_180d"))
	{
		return "MC_PR_STNT336";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_45d") || iParam0 == joaat("sum_prop_track_ac_bend_bar_45"))
	{
		return "MC_PR_STNT339";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_45") || iParam0 == joaat("sum_prop_track_ac_bend_45"))
	{
		return "MC_PR_STNT340";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_bar_135") || iParam0 == joaat("sum_prop_track_ac_bend_bar_135"))
	{
		return "MC_PR_STNT341";
	}
	if (iParam0 == joaat("ch_prop_track_ch_bend_135") || iParam0 == joaat("sum_prop_track_ac_bend_135"))
	{
		return "MC_PR_STNT342";
	}
	if (iParam0 == joaat("as_prop_as_target_small_02"))
	{
		return "MC_TGT_TS0";
	}
	if (iParam0 == joaat("as_prop_as_target_small"))
	{
		return "MC_TGT_TS1";
	}
	if (iParam0 == joaat("as_prop_as_target_medium"))
	{
		return "MC_TGT_TM";
	}
	if (iParam0 == joaat("as_prop_as_target_big"))
	{
		return "MC_TGT_TB";
	}
	if (iParam0 == joaat("as_prop_as_target_scaffold_01a"))
	{
		return "MC_TGT_SF0";
	}
	if (iParam0 == joaat("as_prop_as_target_scaffold_01b"))
	{
		return "MC_TGT_SF1";
	}
	if (iParam0 == joaat("as_prop_as_target_scaffold_02a"))
	{
		return "MC_TGT_SF2";
	}
	if (iParam0 == joaat("as_prop_as_target_scaffold_02b"))
	{
		return "MC_TGT_SF3";
	}
	if (iParam0 == joaat("bkr_prop_weed_bigbag_01a"))
	{
		return "MC_BKR_DG_0";
	}
	if (iParam0 == joaat("bkr_prop_meth_smallbag_01a"))
	{
		return "MC_BKR_DG_1";
	}
	if (iParam0 == joaat("bkr_prop_weed_bucket_01a"))
	{
		return "MC_BKR_DG_2";
	}
	if (iParam0 == joaat("bkr_prop_coke_boxeddoll"))
	{
		return "MC_BKR_DG_3";
	}
	if (iParam0 == joaat("prop_keg_01"))
	{
		return "MC_BKR_DG_4";
	}
	if (iParam0 == joaat("bkr_prop_coke_table01a"))
	{
		return "MC_BKR_DG_5";
	}
	if (iParam0 == joaat("bkr_prop_meth_table01a"))
	{
		return "MC_BKR_DG_6";
	}
	if (iParam0 == joaat("bkr_prop_meth_phosphorus"))
	{
		return "MC_BKR_DG_7";
	}
	if (iParam0 == joaat("prop_meth_setup_01"))
	{
		return "MC_BKR_DG_8";
	}
	if (iParam0 == joaat("bkr_prop_meth_pseudoephedrine"))
	{
		return "MC_BKR_DG_9";
	}
	if (iParam0 == joaat("bkr_prop_weed_table_01a"))
	{
		return "MC_BKR_DG_10";
	}
	if (iParam0 == joaat("bkr_prop_weed_bigbag_open_01a"))
	{
		return "MC_BKR_DG_11";
	}
	if (iParam0 == joaat("bkr_prop_weed_scales_01a"))
	{
		return "MC_BKR_DG_13";
	}
	if (iParam0 == joaat("bkr_prop_weed_lrg_01a"))
	{
		return "MC_BKR_DG_14";
	}
	if (iParam0 == joaat("bkr_prop_weed_lrg_01b"))
	{
		return "MC_BKR_DG_15";
	}
	if (iParam0 == joaat("bkr_prop_weed_med_01a"))
	{
		return "MC_BKR_DG_16";
	}
	if (iParam0 == joaat("bkr_prop_weed_med_01b"))
	{
		return "MC_BKR_DG_17";
	}
	if (iParam0 == joaat("bkr_prop_weed_01_small_01a"))
	{
		return "MC_BKR_DG_18";
	}
	if (iParam0 == joaat("bkr_prop_weed_smallbag_01a"))
	{
		return "MC_BKR_DG_19";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_sml1"))
	{
		return "MC_BKR_DG_20";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_sml2"))
	{
		return "MC_BKR_DG_21";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_sml3"))
	{
		return "MC_BKR_DG_22";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_mdm1"))
	{
		return "MC_BKR_DG_23";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_mdm2"))
	{
		return "MC_BKR_DG_24";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_mdm3"))
	{
		return "MC_BKR_DG_25";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_lrg1"))
	{
		return "MC_BKR_DG_26";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_lrg2"))
	{
		return "MC_BKR_DG_27";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_lrg3"))
	{
		return "MC_BKR_DG_28";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_xl1"))
	{
		return "MC_BKR_DG_29";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_xl2"))
	{
		return "MC_BKR_DG_30";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_xl3"))
	{
		return "MC_BKR_DG_31";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_huge_01"))
	{
		return "MC_BKR_DG_32";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_huge_02"))
	{
		return "MC_BKR_DG_33";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_huge_03"))
	{
		return "MC_BKR_DG_34";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_huge_04"))
	{
		return "MC_BKR_DG_35";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_huge_05"))
	{
		return "MC_BKR_DG_36";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_qp"))
	{
		return "MC_BKR_DG_37";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_qp2"))
	{
		return "MC_BKR_DG_38";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_qp3"))
	{
		return "MC_BKR_DG_39";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_hump_01"))
	{
		return "MC_BKR_DG_40";
	}
	if (iParam0 == joaat("bkr_prop_biker_bblock_hump_02"))
	{
		return "MC_BKR_DG_41";
	}
	if (iParam0 == joaat("imp_prop_impexp_bblock_huge_01"))
	{
		return "MC_IE_PROP_01" /* GXT: Large Hazard Block Panel */;
	}
	if (iParam0 == joaat("bkr_prop_biker_landing_zone_01"))
	{
		return "MC_BKR_DG_42";
	}
	if (iParam0 == joaat("bkr_prop_biker_bowlpin_stand"))
	{
		return "MC_BKR_DG_43";
	}
	if (iParam0 == joaat("bkr_prop_biker_target_small"))
	{
		return "MC_BKR_DG_44";
	}
	if (iParam0 == joaat("bkr_prop_biker_target"))
	{
		return "MC_BKR_DG_45";
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_01a"))
	{
		return "MC_SR_PROP_01" /* GXT: Corner */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_02a"))
	{
		return "MC_SR_PROP_01" /* GXT: Corner */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_03a"))
	{
		return "MC_SR_PROP_01" /* GXT: Corner */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_04a"))
	{
		return "MC_SR_PROP_01" /* GXT: Corner */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_05a"))
	{
		return "MC_SR_PROP_01" /* GXT: Corner */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_30d_01a"))
	{
		return "MC_SR_PROP_02" /* GXT: Corner 30D */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_30d_02a"))
	{
		return "MC_SR_PROP_02" /* GXT: Corner 30D */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_30d_03a"))
	{
		return "MC_SR_PROP_02" /* GXT: Corner 30D */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_30d_04a"))
	{
		return "MC_SR_PROP_02" /* GXT: Corner 30D */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_crn_30d_05a"))
	{
		return "MC_SR_PROP_02" /* GXT: Corner 30D */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_s_01a"))
	{
		return "MC_SR_PROP_03" /* GXT: Medium */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_s_02a"))
	{
		return "MC_SR_PROP_03" /* GXT: Medium */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_s_03a"))
	{
		return "MC_SR_PROP_03" /* GXT: Medium */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_s_04a"))
	{
		return "MC_SR_PROP_03" /* GXT: Medium */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_s_05a"))
	{
		return "MC_SR_PROP_03" /* GXT: Medium */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_m_01a"))
	{
		return "MC_SR_PROP_04" /* GXT: Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_m_02a"))
	{
		return "MC_SR_PROP_04" /* GXT: Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_m_03a"))
	{
		return "MC_SR_PROP_04" /* GXT: Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_m_04a"))
	{
		return "MC_SR_PROP_04" /* GXT: Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_m_05a"))
	{
		return "MC_SR_PROP_04" /* GXT: Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_l_01a"))
	{
		return "MC_SR_PROP_05" /* GXT: Extra Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_l_02a"))
	{
		return "MC_SR_PROP_05" /* GXT: Extra Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_l_03a"))
	{
		return "MC_SR_PROP_05" /* GXT: Extra Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_l_04a"))
	{
		return "MC_SR_PROP_05" /* GXT: Extra Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_l_05a"))
	{
		return "MC_SR_PROP_05" /* GXT: Extra Long */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_xxs_01a"))
	{
		return "MC_SR_PROP_06" /* GXT: Extra Short */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_xxs_02a"))
	{
		return "MC_SR_PROP_06" /* GXT: Extra Short */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_xxs_03a"))
	{
		return "MC_SR_PROP_06" /* GXT: Extra Short */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_xxs_04a"))
	{
		return "MC_SR_PROP_06" /* GXT: Extra Short */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_xxs_05a"))
	{
		return "MC_SR_PROP_06" /* GXT: Extra Short */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_5d_01a"))
	{
		return "MC_SR_PROP_07" /* GXT: Corner 5D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_5d_02a"))
	{
		return "MC_SR_PROP_07" /* GXT: Corner 5D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_5d_03a"))
	{
		return "MC_SR_PROP_07" /* GXT: Corner 5D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_5d_04a"))
	{
		return "MC_SR_PROP_07" /* GXT: Corner 5D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_5d_05a"))
	{
		return "MC_SR_PROP_07" /* GXT: Corner 5D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_15d_01a"))
	{
		return "MC_SR_PROP_08" /* GXT: Corner 15D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_15d_02a"))
	{
		return "MC_SR_PROP_08" /* GXT: Corner 15D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_15d_03a"))
	{
		return "MC_SR_PROP_08" /* GXT: Corner 15D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_15d_04a"))
	{
		return "MC_SR_PROP_08" /* GXT: Corner 15D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn_15d_05a"))
	{
		return "MC_SR_PROP_08" /* GXT: Corner 15D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn2_01a"))
	{
		return "MC_SR_PROP_09" /* GXT: Corner 45D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn2_02a"))
	{
		return "MC_SR_PROP_09" /* GXT: Corner 45D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn2_03a"))
	{
		return "MC_SR_PROP_09" /* GXT: Corner 45D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn2_04a"))
	{
		return "MC_SR_PROP_09" /* GXT: Corner 45D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_crn2_05a"))
	{
		return "MC_SR_PROP_09" /* GXT: Corner 45D */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_xs_01a"))
	{
		return "MC_SR_PROP_10" /* GXT: Short */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_xs_02a"))
	{
		return "MC_SR_PROP_10" /* GXT: Short */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_xs_03a"))
	{
		return "MC_SR_PROP_10" /* GXT: Short */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_xs_04a"))
	{
		return "MC_SR_PROP_10" /* GXT: Short */;
	}
	if (iParam0 == joaat("sr_prop_stunt_tube_xs_05a"))
	{
		return "MC_SR_PROP_10" /* GXT: Short */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_d5"))
	{
		return "MC_SR_PROP_31" /* GXT: Track Down (5) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_d15"))
	{
		return "MC_SR_PROP_32" /* GXT: Track Down (15) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_d30"))
	{
		return "MC_SR_PROP_33" /* GXT: Track Down (30) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_d45"))
	{
		return "MC_SR_PROP_34" /* GXT: Track Down (45) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_u5"))
	{
		return "MC_SR_PROP_35" /* GXT: Track Up (5) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_u15"))
	{
		return "MC_SR_PROP_36" /* GXT: Track Up (15) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_u30"))
	{
		return "MC_SR_PROP_37" /* GXT: Track Up (30) */;
	}
	if (iParam0 == joaat("sr_prop_track_straight_l_u45"))
	{
		return "MC_SR_PROP_38" /* GXT: Track Up (45) */;
	}
	if (iParam0 == joaat("sr_prop_track_refill"))
	{
		return "MC_SR_PROP_39" /* GXT: Boost Refiller */;
	}
	if (iParam0 == joaat("sr_prop_track_refill_t2"))
	{
		return "MC_SR_PROP_40" /* GXT: Boost Refiller Raised Track */;
	}
	if (iParam0 == joaat("sr_prop_track_refill_t1"))
	{
		return "MC_SR_PROP_41" /* GXT: Boost Refiller Track */;
	}
	if (iParam0 == joaat("sr_prop_sr_track_jumpwall"))
	{
		return "MC_SR_PROP_42" /* GXT: Track Hurdle */;
	}
	if (iParam0 == joaat("sr_prop_spec_tube_refill"))
	{
		return "MC_SR_PROP_44" /* GXT: Tube Boost Refiller */;
	}
	if (iParam0 == joaat("sr_mp_spec_races_blimp_sign"))
	{
		return "MC_SR_PROP_45" /* GXT: Xero Blimp Sign */;
	}
	if (iParam0 == joaat("sr_mp_spec_races_take_flight_sign"))
	{
		return "MC_SR_PROP_46" /* GXT: Take Flight Sign */;
	}
	if (iParam0 == joaat("sr_mp_spec_races_ron_sign"))
	{
		return "MC_SR_PROP_47" /* GXT: Ron Sign */;
	}
	if (iParam0 == joaat("sr_mp_spec_races_xero_sign"))
	{
		return "MC_SR_PROP_48" /* GXT: Xero Sign */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_thin_m"))
	{
		return "MC_SM_PROP_0" /* GXT: Thin Medium Arrow */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_wide_m"))
	{
		return "MC_SM_PROP_1" /* GXT: Wide Medium Arrow */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_thin_l"))
	{
		return "MC_SM_PROP_2" /* GXT: Thin Large Arrow */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_wide_l"))
	{
		return "MC_SM_PROP_3" /* GXT: Wide Large Arrow */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_thin_xl"))
	{
		return "MC_SM_PROP_4" /* GXT: Thin XL Arrow */;
	}
	if (iParam0 == joaat("ar_prop_ar_arrow_wide_xl"))
	{
		return "MC_SM_PROP_5" /* GXT: Wide XL Arrow */;
	}
	if (iParam0 == joaat("sum_prop_archway_01"))
	{
		return "MC_PR_SIGN_1";
	}
	if (iParam0 == joaat("sum_prop_archway_02"))
	{
		return "MC_PR_SIGN_2";
	}
	if (iParam0 == joaat("sum_prop_archway_03"))
	{
		return "MC_PR_SIGN_3";
	}
	if (iParam0 == joaat("sum_prop_ac_pit_sign_r_01a"))
	{
		return "MC_PR_SIGN_4";
	}
	if (iParam0 == joaat("sum_prop_ac_pit_sign_l_01a"))
	{
		return "MC_PR_SIGN_5";
	}
	if (iParam0 == joaat("gr_prop_gr_bunkeddoor"))
	{
		return "MC_GR_BNKR_DR";
	}
	if (iParam0 == joaat("xm_prop_x17_osphatch_27m"))
	{
		return "MC_H2_FAC_HAT";
	}
	if (iParam0 == joaat("gr_prop_gr_bench_03a"))
	{
		return "FMMC_PR_LTBL";
	}
	if (iParam0 == joaat("gr_prop_gr_bench_04a"))
	{
		return "FMMC_PR_STBL";
	}
	if (iParam0 == joaat("gr_prop_gr_bench_04b"))
	{
		return "FMMC_PR_STBD";
	}
	if (iParam0 == joaat("v_res_pctower"))
	{
		return "FMMC_PR_PCTW";
	}
	if (iParam0 == joaat("sr_prop_special_bblock_sml1"))
	{
		return "MC_SR_PROP_49" /* GXT: Neon Block Small 1 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_mdm1"))
	{
		return "MC_SR_PROP_50" /* GXT: Neon Block Medium 1 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_lrg11"))
	{
		return "MC_SR_PROP_51" /* GXT: Neon Block Large 1 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_xl1"))
	{
		return "MC_SR_PROP_52" /* GXT: Neon Block Extra Large 1 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_sml2"))
	{
		return "MC_SR_PROP_53" /* GXT: Neon Block Small 2 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_mdm2"))
	{
		return "MC_SR_PROP_54" /* GXT: Neon Block Medium 2 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_lrg2"))
	{
		return "MC_SR_PROP_55" /* GXT: Neon Block Large 2 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_xl2"))
	{
		return "MC_SR_PROP_56" /* GXT: Neon Block Extra Large 2 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_sml3"))
	{
		return "MC_SR_PROP_57" /* GXT: Neon Block Small 3 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_mdm3"))
	{
		return "MC_SR_PROP_58" /* GXT: Neon Block Medium 3 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_lrg3"))
	{
		return "MC_SR_PROP_59" /* GXT: Neon Block Large 3 */;
	}
	if (iParam0 == joaat("sr_prop_special_bblock_xl3"))
	{
		return "MC_SR_PROP_60x";
	}
	if (iParam0 == joaat("sr_prop_special_bblock_xl3_fixed"))
	{
		return "MC_SR_PROP_60" /* GXT: Neon Block Extra Large 3 */;
	}
	if (iParam0 == joaat("vw_prop_vw_bblock_huge_01"))
	{
		return "MC_AR_PROP_61";
	}
	if (iParam0 == joaat("vw_prop_vw_bblock_huge_02"))
	{
		return "MC_AR_PROP_62";
	}
	if (iParam0 == joaat("vw_prop_vw_bblock_huge_03"))
	{
		return "MC_AR_PROP_63";
	}
	if (iParam0 == joaat("vw_prop_vw_bblock_huge_04"))
	{
		return "MC_AR_PROP_64";
	}
	if (iParam0 == joaat("vw_prop_vw_bblock_huge_05"))
	{
		return "MC_AR_PROP_65";
	}
	if (iParam0 == joaat("ar_prop_ar_stunt_block_01a"))
	{
		return "MC_AR_PROP_97";
	}
	if (iParam0 == joaat("ar_prop_ar_stunt_block_01b"))
	{
		return "MC_AR_PROP_98";
	}
	if (iParam0 == joaat("gr_prop_gr_target_1_01a"))
	{
		return "MC_SR_PROP_61" /* GXT: Landing Pad Target 1pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_1_01b"))
	{
		return "MC_SR_PROP_61b" /* GXT: Landing Pad Target 1pt (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_2_04a"))
	{
		return "MC_SR_PROP_62" /* GXT: Landing Pad Target 2pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_2_04b"))
	{
		return "MC_SR_PROP_62b" /* GXT: Landing Pad Target 2pt (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_3_03a"))
	{
		return "MC_SR_PROP_63" /* GXT: Landing Pad Target 3pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_3_03b"))
	{
		return "MC_SR_PROP_63b" /* GXT: Landing Pad Target 3pt (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_4_01a"))
	{
		return "MC_SR_PROP_64" /* GXT: Landing Pad Target 4pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_4_01b"))
	{
		return "MC_SR_PROP_64b" /* GXT: Landing Pad Target 4pt (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_5_01a"))
	{
		return "MC_SR_PROP_65" /* GXT: Landing Pad Target 5pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_5_01b"))
	{
		return "MC_SR_PROP_65b" /* GXT: Landing Pad Target 5pt (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_large_01a"))
	{
		return "MC_SR_PROP_66" /* GXT: Landing Pad Target Large */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_large_01b"))
	{
		return "MC_SR_PROP_66b" /* GXT: Landing Pad Target Large (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_long_01a"))
	{
		return "MC_SR_PROP_67" /* GXT: Landing Pad Target Long */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_01a"))
	{
		return "MC_SR_PROP_68" /* GXT: Landing Pad Target Small 1 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_01b"))
	{
		return "MC_SR_PROP_68b" /* GXT: Landing Pad Target Small 1 (B) */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_02a"))
	{
		return "MC_SR_PROP_72" /* GXT: Landing Ring 1pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_03a"))
	{
		return "MC_SR_PROP_73" /* GXT: Landing Ring 2pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_04a"))
	{
		return "MC_SR_PROP_74" /* GXT: Landing Ring Stack Open */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_05a"))
	{
		return "MC_SR_PROP_69" /* GXT: Landing Ring Stack */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_06a"))
	{
		return "MC_SR_PROP_75" /* GXT: Landing Ring 3pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_small_07a"))
	{
		return "MC_SR_PROP_76" /* GXT: Landing Ring 4pt */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_trap_01a"))
	{
		return "MC_SR_PROP_70" /* GXT: Landing Pad Target Trap 1 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_trap_02a"))
	{
		return "MC_SR_PROP_71" /* GXT: Landing Pad Target Trap 2 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_pistols_01a"))
	{
		return "MC_GR_PROP_01" /* GXT: Crate 1 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_rifles_01a"))
	{
		return "MC_GR_PROP_02" /* GXT: Crate 2 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_rifles_02a"))
	{
		return "MC_GR_PROP_03" /* GXT: Crate 3 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_rifles_03a"))
	{
		return "MC_GR_PROP_04" /* GXT: Crate 4 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_rifles_04a"))
	{
		return "MC_GR_PROP_05" /* GXT: Crate 5 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_sam_01a"))
	{
		return "MC_GR_PROP_06" /* GXT: Crate 6 */;
	}
	if (iParam0 == joaat("gr_prop_gr_crates_weapon_mix_01a"))
	{
		return "MC_GR_PROP_07" /* GXT: Crate 7 */;
	}
	if (iParam0 == joaat("gr_prop_gr_gunsmithsupl_01a"))
	{
		return "MC_GR_PROP_08" /* GXT: Crate 8 */;
	}
	if (iParam0 == joaat("gr_prop_gr_gunsmithsupl_02a"))
	{
		return "MC_GR_PROP_09" /* GXT: Crate 9 */;
	}
	if (iParam0 == joaat("gr_prop_gr_gunsmithsupl_03a"))
	{
		return "MC_GR_PROP_10" /* GXT: Crate 10 */;
	}
	if (iParam0 == joaat("gr_prop_gr_rsply_crate01a"))
	{
		return "MC_GR_PROP_11" /* GXT: Crate 11 */;
	}
	if (iParam0 == joaat("gr_prop_gr_rsply_crate02a"))
	{
		return "MC_GR_PROP_12" /* GXT: Crate 12 */;
	}
	if (iParam0 == joaat("gr_prop_gr_rsply_crate03a"))
	{
		return "MC_GR_PROP_13" /* GXT: Crate 13 */;
	}
	if (iParam0 == joaat("hei_heist_apart2_door"))
	{
		return "MC_GR_PROP_14" /* GXT: Door */;
	}
	if (iParam0 == joaat("prop_target_ora_purp_01"))
	{
		return "MC_GR_PROP_15" /* GXT: Target 1 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_01a"))
	{
		return "MC_GR_PROP_16" /* GXT: Target 2 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_01b"))
	{
		return "MC_GR_PROP_17" /* GXT: Target 3 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_02a"))
	{
		return "MC_GR_PROP_18" /* GXT: Target 4 */;
	}
	if (iParam0 == joaat("gr_prop_gr_target_02b"))
	{
		return "MC_GR_PROP_19" /* GXT: Target 5 */;
	}
	if (iParam0 == joaat("gr_prop_gr_bench_01a"))
	{
		return "MC_GR_PROP_20" /* GXT: Bench 1 */;
	}
	if (iParam0 == joaat("gr_prop_gr_bench_01b"))
	{
		return "MC_GR_PROP_21" /* GXT: Bench 2 */;
	}
	if (iParam0 == joaat("gr_prop_gr_bench_02a"))
	{
		return "MC_GR_PROP_22" /* GXT: Bench 3 */;
	}
	if (iParam0 == joaat("gr_prop_gr_bench_02b"))
	{
		return "MC_GR_PROP_23" /* GXT: Bench 4 */;
	}
	if (iParam0 == joaat("gr_prop_gr_speeddrill_01a"))
	{
		return "MC_GR_PROP_24" /* GXT: Drill */;
	}
	if (iParam0 == joaat("gr_prop_gr_vertmill_01a"))
	{
		return "MC_GR_PROP_25" /* GXT: Mill */;
	}
	if (iParam0 == joaat("gr_prop_gr_cratespile_01a"))
	{
		return "MC_GR_PROP_26" /* GXT: Crates Pile */;
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_01a"))
	{
		return "MC_NH_PROP_01";
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_04a"))
	{
		return "MC_NH_PROP_02";
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_02a"))
	{
		return "MC_NH_PROP_03";
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_05a"))
	{
		return "MC_NH_PROP_04";
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_03a"))
	{
		return "MC_NH_PROP_05";
	}
	if (iParam0 == joaat("imp_prop_covered_vehicle_06a"))
	{
		return "MC_NH_PROP_06";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_crn2"))
	{
		return "MC_AR_PROP2_15";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_crn_30d"))
	{
		return "MC_AR_PROP2_16";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_crn_15d"))
	{
		return "MC_AR_PROP2_17";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_crn_5d"))
	{
		return "MC_AR_PROP2_18";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_crn2"))
	{
		return "MC_AR_PROP2_19";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_crn_30d"))
	{
		return "MC_AR_PROP2_20";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_crn_15d"))
	{
		return "MC_AR_PROP2_21";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_crn_5d"))
	{
		return "MC_AR_PROP2_22";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_crn"))
	{
		return "MC_AR_PROP_00";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_crn_15d"))
	{
		return "MC_AR_PROP_01";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_crn_30d"))
	{
		return "MC_AR_PROP_02";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_crn_5d"))
	{
		return "MC_AR_PROP_03";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_crn2"))
	{
		return "MC_AR_PROP_04";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_cross"))
	{
		return "MC_AR_PROP_05";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_fork"))
	{
		return "MC_AR_PROP_06";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_hg"))
	{
		return "MC_AR_PROP_07";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_jmp"))
	{
		return "MC_AR_PROP_08";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_l"))
	{
		return "MC_AR_PROP_09";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_m"))
	{
		return "MC_AR_PROP_10";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_qg"))
	{
		return "MC_AR_PROP_11";
	}
	if (iParam0 == joaat("as_prop_as_tube_gap_02"))
	{
		return "MC_AR_PROP_38";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_speed"))
	{
		return "MC_AR_PROP_54";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_speed"))
	{
		return "MC_AR_PROP_55";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_speed"))
	{
		return "MC_AR_PROP_56";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_s"))
	{
		return "MC_AR_PROP_12";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_xxs"))
	{
		return "MC_AR_PROP_13";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_xs"))
	{
		return "MC_AR_PROP_14";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_l"))
	{
		return "MC_AR_PROP4_09";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_m"))
	{
		return "MC_AR_PROP4_10";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_s"))
	{
		return "MC_AR_PROP4_12";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_xs"))
	{
		return "MC_AR_PROP4_14";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_xxs"))
	{
		return "MC_AR_PROP4_13";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_crn"))
	{
		return "MC_AR_PROP4_00";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_4x_gap_02"))
	{
		return "MC_AR_PROP_39";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_l"))
	{
		return "MC_AR_PROP2_09";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_m"))
	{
		return "MC_AR_PROP2_10";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_s"))
	{
		return "MC_AR_PROP2_12";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_xs"))
	{
		return "MC_AR_PROP2_14";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_xxs"))
	{
		return "MC_AR_PROP2_13";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_crn"))
	{
		return "MC_AR_PROP2_00";
	}
	if (iParam0 == joaat("ar_prop_ar_tube_2x_gap_02"))
	{
		return "MC_AR_PROP_40";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_crn"))
	{
		return "MC_AR_PROP_15";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_crn_15d"))
	{
		return "MC_AR_PROP_16";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_crn_30d"))
	{
		return "MC_AR_PROP_17";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_crn02"))
	{
		return "MC_AR_PROP_18";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_fork"))
	{
		return "MC_AR_PROP_19";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_xxs"))
	{
		return "MC_AR_PROP_20";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_xs"))
	{
		return "MC_AR_PROP_21";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_s"))
	{
		return "MC_AR_PROP_22";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_m"))
	{
		return "MC_AR_PROP_23";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoint_l"))
	{
		return "MC_AR_PROP_24";
	}
	if (iParam0 == joaat("ar_prop_ar_checkpoints_crn_5d"))
	{
		return "MC_AR_PROP_25";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_01a"))
	{
		return "MC_AR_PROP_26";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_01b"))
	{
		return "MC_AR_PROP_26B";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_02a"))
	{
		return "MC_AR_PROP_27";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_02b"))
	{
		return "MC_AR_PROP_27B";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_03a"))
	{
		return "MC_AR_PROP_28";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_04a"))
	{
		return "MC_AR_PROP_29";
	}
	if (iParam0 == joaat("ar_prop_ar_neon_gate_05a"))
	{
		return "MC_AR_PROP_30";
	}
	if (iParam0 == joaat("ar_prop_ar_start_01a"))
	{
		return "MC_AR_PROP_31";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp"))
	{
		return "MC_AR_PROP_37";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_h1"))
	{
		return "MC_AR_PROP_41";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_h2"))
	{
		return "MC_AR_PROP_42";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop"))
	{
		return "MC_AR_PROP_79";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop_h1"))
	{
		return "MC_AR_PROP_80";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop_h2"))
	{
		return "MC_AR_PROP_81";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop_01a"))
	{
		return "MC_AR_PROP_82";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop_01b"))
	{
		return "MC_AR_PROP_83";
	}
	if (iParam0 == joaat("ar_prop_inflategates_cp_loop_01c"))
	{
		return "MC_AR_PROP_84";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d"))
	{
		return "MC_AR_PROP_91";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d_h1"))
	{
		return "MC_AR_PROP_92";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d_h2"))
	{
		return "MC_AR_PROP_93";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d_01a"))
	{
		return "MC_AR_PROP_94";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d_01b"))
	{
		return "MC_AR_PROP_95";
	}
	if (iParam0 == joaat("ar_prop_gate_cp_90d_01c"))
	{
		return "MC_AR_PROP_96";
	}
	if (iParam0 == joaat("ar_prop_ar_speed_ring"))
	{
		return "MC_AR_PROP_57";
	}
	if (iParam0 == joaat("ar_prop_ar_jump_loop"))
	{
		return "MC_AR_PROP_58";
	}
	if (iParam0 == joaat("sm_prop_smug_cont_01a"))
	{
		return "MC_AR_PROP_59";
	}
	if (iParam0 == joaat("ar_prop_ig_sprunk_cp_b"))
	{
		return "MC_AR_PROP_66";
	}
	if (iParam0 == joaat("ar_prop_ig_raine_cp_b"))
	{
		return "MC_AR_PROP_67";
	}
	if (iParam0 == joaat("ar_prop_ig_flow_cp_b"))
	{
		return "MC_AR_PROP_68";
	}
	if (iParam0 == joaat("ar_prop_ig_shark_cp_b"))
	{
		return "MC_AR_PROP_69";
	}
	if (iParam0 == joaat("ar_prop_ig_jackal_cp_b"))
	{
		return "MC_AR_PROP_70";
	}
	if (iParam0 == joaat("ar_prop_ig_metv_cp_b"))
	{
		return "MC_AR_PROP_71";
	}
	if (iParam0 == joaat("ar_prop_ig_metv_cp_single"))
	{
		return "MC_AR_PROP_72";
	}
	if (iParam0 == joaat("ar_prop_ig_jackal_cp_single"))
	{
		return "MC_AR_PROP_73";
	}
	if (iParam0 == joaat("ar_prop_ig_shark_cp_single"))
	{
		return "MC_AR_PROP_74";
	}
	if (iParam0 == joaat("ar_prop_ig_flow_cp_single"))
	{
		return "MC_AR_PROP_75";
	}
	if (iParam0 == joaat("ar_prop_ig_raine_cp_single"))
	{
		return "MC_AR_PROP_76";
	}
	if (iParam0 == joaat("ar_prop_ig_sprunk_cp_single"))
	{
		return "MC_AR_PROP_77";
	}
	if (iParam0 == joaat("xm_prop_x17_mine_01a"))
	{
		return "FMMC_OM_MN1";
	}
	if (iParam0 == joaat("xm_prop_x17_mine_02a"))
	{
		return "FMMC_OM_MN2";
	}
	if (iParam0 == joaat("xm_prop_x17_mine_03a"))
	{
		return "FMMC_OM_MN3";
	}
	if (__LIB_0__::func_236())
	{
		if (iParam0 == joaat("bkr_prop_biker_tube_crn"))
		{
			return "MC_DO_STNT46";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_crn2"))
		{
			return "MC_DO_STNT102";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_cross"))
		{
			return "MC_DO_STNT40";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_01"))
		{
			return "MC_DO_STNT165";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_02"))
		{
			return "MC_DO_STNT166";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_03"))
		{
			return "MC_DO_STNT262";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_xxs"))
		{
			return "MC_DO_STNT104";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_xs"))
		{
			return "MC_DO_STNT37";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_s"))
		{
			return "MC_DO_STNT38";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_m"))
		{
			return "MC_DO_STNT39";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_l"))
		{
			return "MC_DO_STNT100";
		}
		if (iParam0 == joaat("p_ld_stinger_s"))
		{
			return "FMMC_PR_STING";
		}
		if (iParam0 == joaat("prop_wall_light_09a"))
		{
			return "FMMC_BB_LGT";
		}
		if (iParam0 == joaat("ba_prop_battle_emis_rig_01"))
		{
			return "FMMC_LIG_MN1";
		}
		if (iParam0 == joaat("ba_prop_battle_emis_rig_02"))
		{
			return "FMMC_LIG_MN2";
		}
		if (iParam0 == joaat("ba_prop_battle_emis_rig_03"))
		{
			return "FMMC_LIG_MN3";
		}
		if (iParam0 == joaat("ba_prop_battle_emis_rig_04"))
		{
			return "FMMC_LIG_MN4";
		}
		if (iParam0 == joaat("vw_prop_vw_elecbox_01a"))
		{
			return "FMMC_P_ELCB";
		}
		if (iParam0 == joaat("vw_prop_vw_radiomast_01a"))
		{
			return "FMMC_P_RDTW";
		}
	}
	else
	{
		if (iParam0 == joaat("bkr_prop_biker_tube_crn"))
		{
			return "MC_PR_STNT46";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_crn2"))
		{
			return "MC_PR_STNT102";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_cross"))
		{
			return "MC_PR_STNT40";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_01"))
		{
			return "MC_PR_STNT165";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_02"))
		{
			return "MC_PR_STNT166";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_gap_03"))
		{
			return "MC_PR_STNT262";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_xxs"))
		{
			return "MC_PR_STNT104";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_xs"))
		{
			return "MC_PR_STNT37";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_s"))
		{
			return "MC_PR_STNT38";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_m"))
		{
			return "MC_PR_STNT39";
		}
		if (iParam0 == joaat("bkr_prop_biker_tube_l"))
		{
			return "MC_PR_STNT100";
		}
	}
	if (iParam0 == joaat("prop_crate_11e"))
	{
		return "FMMC_BB_OTC";
	}
	if (iParam0 == joaat("v_ret_ml_beerpat1"))
	{
		return "FMMC_BB_PC";
	}
	if (iParam0 == joaat("v_ret_ml_beerpis2"))
	{
		return "FMMC_BB_PWC";
	}
	if (iParam0 == joaat("ba_prop_battle_crate_beer_01"))
	{
		return "FMMC_BB_POC1";
	}
	if (iParam0 == joaat("ba_prop_battle_crate_beer_02"))
	{
		return "FMMC_BB_POC2";
	}
	if (iParam0 == joaat("ba_prop_battle_crate_beer_03"))
	{
		return "FMMC_BB_POC3";
	}
	if (iParam0 == joaat("ba_prop_battle_crate_beer_04"))
	{
		return "FMMC_BB_POC4";
	}
	if (iParam0 == joaat("prop_dyn_pc"))
	{
		return "FMMC_BB_PCU";
	}
	if (iParam0 == joaat("prop_dummy_01"))
	{
		return "FMMC_BB_CPM";
	}
	if (iParam0 == joaat("prop_ped_gib_01"))
	{
		return "FMMC_BB_DED";
	}
	if (iParam0 == joaat("vw_prop_vw_valet_01a"))
	{
		return "FMMC_BB_VAL";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_01a"))
	{
		return "ARNAT_FREPT";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_02a"))
	{
		return "ARNAT_FREPTS";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a"))
	{
		return "ARNAT_FREPTL";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_04a"))
	{
		return "ARNAT_FREPTXL";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_small_01a"))
	{
		return "ARNAT_SMFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_large_01a"))
	{
		return "ARNAT_LGFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_xl_01a"))
	{
		return "ARNAT_XLFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_01a"))
	{
		return "ARNAT_WALLSA";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_02a"))
	{
		return "ARNAT_WALLSXL";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_side_01a"))
	{
		return "ARNAT_SDBLD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01a"))
	{
		return "ARNAT_BOLLRD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01b"))
	{
		return "ARNAT_BLDRW";
	}
	if (iParam0 == joaat("xs_prop_arena_spikes_01a"))
	{
		return "ARNAT_TYSPK";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_01a"))
	{
		return "ARNAT_LNDMN";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_03a"))
	{
		return "ARNAT_SEAMN";
	}
	if (iParam0 == joaat("xs_prop_arena_barrel_01a"))
	{
		return "ARNAT_BRBMB";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_01c"))
	{
		return "ARNAT_LNDMNXL";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a"))
	{
		return "ARNAT_TRNTBA";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_b_01a"))
	{
		return "ARNAT_TRNTB_BS";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a"))
	{
		return "ARNAT_TRNTBB";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a"))
	{
		return "ARNAT_TRNTBC";
	}
	if (iParam0 == -1255963777)
	{
		return "ARNAT_TRNTXL";
	}
	if (iParam0 == 11714146)
	{
		return "ARNAT_TRNTXLB";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01a"))
	{
		return "ARNAT_DBPIT_A";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01b"))
	{
		return "ARNAT_DBPIT_B";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_01a_sf"))
	{
		return "ARNAT_FREPT";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_02a_sf"))
	{
		return "ARNAT_FREPTS";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf"))
	{
		return "ARNAT_FREPTL";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf"))
	{
		return "ARNAT_FREPTXL";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_side_01a_sf"))
	{
		return "ARNAT_SDBLD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01a_sf"))
	{
		return "ARNAT_BOLLRD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01b_sf"))
	{
		return "ARNAT_BLDRW";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_01c_sf"))
	{
		return "ARNAT_LNDMN_SF";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_01a_sf"))
	{
		return "ARNAT_WALLSA";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_02a_sf"))
	{
		return "ARNAT_WALLSXL";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_03a_sf"))
	{
		return "ARNAT_SEAMN";
	}
	if (iParam0 == joaat("xs_prop_arena_barrel_01a_sf"))
	{
		return "ARNAT_BRBMB";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_small_01a_sf"))
	{
		return "ARNAT_SMFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_large_01a_sf"))
	{
		return "ARNAT_LGFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_xl_01a_sf"))
	{
		return "ARNAT_XLFLIP";
	}
	if (iParam0 == 1076615480)
	{
		return "ARNAT_TRNTBA";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01a_sf"))
	{
		return "ARNAT_DBPIT_A";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01b_sf"))
	{
		return "ARNAT_DBPIT_B";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_sf"))
	{
		return "ARNAT_TRNTBA";
	}
	if (iParam0 == joaat("vw_prop_arena_turntable_02f_sf"))
	{
		return "ARNAT_TRNTBB";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_sf"))
	{
		return "ARNAT_TRNTBC";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_b_01a_sf"))
	{
		return "ARNAT_TRNTB_BS";
	}
	if (iParam0 == joaat("xs_prop_arena_spikes_01a_sf"))
	{
		return "ARNAT_S_TYSPK";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_01a_wl"))
	{
		return "ARNAT_FREPT";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_02a_wl"))
	{
		return "ARNAT_FREPTS";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl"))
	{
		return "ARNAT_FREPTL";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
		return "ARNAT_FREPTXL";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_side_01a_wl"))
	{
		return "ARNAT_SDBLD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01a_wl"))
	{
		return "ARNAT_BOLLRD";
	}
	if (iParam0 == joaat("xs_prop_arena_bollard_rising_01b_wl"))
	{
		return "ARNAT_BLDRW";
	}
	if (iParam0 == -2003814848)
	{
		return "ARNAT_DBPIT";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_wl"))
	{
		return "ARNAT_TRNTBA";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a_wl"))
	{
		return "ARNAT_TRNTBB";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_wl"))
	{
		return "ARNAT_TRNTBC";
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_b_01a_wl"))
	{
		return "ARNAT_TRNTB_BS";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_01a_wl"))
	{
		return "ARNAT_WALLSA";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_rising_02a_wl"))
	{
		return "ARNAT_WALLSXL";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_small_01a_wl"))
	{
		return "ARNAT_SMFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_large_01a_wl"))
	{
		return "ARNAT_LGFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_flipper_xl_01a_wl"))
	{
		return "ARNAT_XLFLIP";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_01c_wl"))
	{
		return "ARNAT_LNDMN_W";
	}
	if (iParam0 == joaat("xs_prop_arena_landmine_03a_wl"))
	{
		return "ARNAT_SEAMN";
	}
	if (iParam0 == joaat("xs_prop_arena_barrel_01a_wl"))
	{
		return "ARNAT_BRBMB";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01a_wl"))
	{
		return "ARNAT_DBPIT_A";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_double_01b_wl"))
	{
		return "ARNAT_DBPIT_B";
	}
	if (iParam0 == joaat("xs_prop_arena_pressure_plate_01a"))
	{
		return "ARNAP_PRPAD";
	}
	if (iParam0 == joaat("xs_prop_arena_car_wall_01a"))
	{
		return "ARNAP_CRWL_A";
	}
	if (iParam0 == joaat("xs_prop_arena_car_wall_02a"))
	{
		return "ARNAP_CRWL_B";
	}
	if (iParam0 == joaat("xs_prop_arena_car_wall_03a"))
	{
		return "ARNAP_CRWL_C";
	}
	if (iParam0 == joaat("xs_prop_arena_station_01a"))
	{
		return "ARNAP_BUILD_A";
	}
	if (iParam0 == joaat("xs_prop_arena_station_02a"))
	{
		return "ARNAP_BUILD_B";
	}
	if (iParam0 == joaat("xs_prop_arena_wedge_01a"))
	{
		return "ARNAP_WEDGE";
	}
	if (iParam0 == joaat("xs_prop_arena_oil_jack_01a"))
	{
		return "ARNAP_PR_001";
	}
	if (iParam0 == joaat("xs_prop_arena_oil_jack_02a"))
	{
		return "ARNAP_PR_002";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_01c"))
	{
		return "ARNAP_PR_003";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_01b"))
	{
		return "ARNAP_PR_004";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_01a"))
	{
		return "ARNAP_PR_005";
	}
	if (iParam0 == joaat("xs_prop_arena_building_01a"))
	{
		return "ARNAP_PR_032";
	}
	if (iParam0 == joaat("xs_prop_arena_industrial_a"))
	{
		return "ARNAP_PR_006";
	}
	if (iParam0 == joaat("xs_prop_arena_industrial_b"))
	{
		return "ARNAP_PR_007";
	}
	if (iParam0 == joaat("xs_prop_arena_industrial_c"))
	{
		return "ARNAP_PR_008";
	}
	if (iParam0 == joaat("xs_prop_arena_industrial_d"))
	{
		return "ARNAP_PR_009";
	}
	if (iParam0 == joaat("xs_prop_arena_industrial_e"))
	{
		return "ARNAP_PR_010";
	}
	if (iParam0 == joaat("xs_prop_arena_1bay_01a"))
	{
		return "ARNAP_PR_011";
	}
	if (iParam0 == joaat("xs_prop_arena_2bay_01a"))
	{
		return "ARNAP_PR_012";
	}
	if (iParam0 == joaat("xs_prop_arena_3bay_01a"))
	{
		return "ARNAP_PR_013";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xs_01a"))
	{
		return "ARNAP_PR_014";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_s_01a"))
	{
		return "ARNAP_PR_015";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_m_01a"))
	{
		return "ARNAP_PR_016";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_l_01a"))
	{
		return "ARNAP_PR_017";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xl_01a"))
	{
		return "ARNAP_PR_018";
	}
	if (iParam0 == joaat("xs_prop_arena_adj_hloop"))
	{
		return "ARNAP_PR_033";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_02b"))
	{
		return "ARNAP_PR_TJ2";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xs_01a_wl"))
	{
		return "ARNAP_PR_014W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_s_01a_wl"))
	{
		return "ARNAP_PR_015W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_m_01a_wl"))
	{
		return "ARNAP_PR_016W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_l_01a_wl"))
	{
		return "ARNAP_PR_017W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xl_01a_wl"))
	{
		return "ARNAP_PR_018W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xxl_01a_wl"))
	{
		return "ARNAP_PR_019W";
	}
	if (iParam0 == joaat("xs_prop_arena_adj_hloop_wl"))
	{
		return "ARNAP_PR_033W";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xs_01a_sf"))
	{
		return "ARNAP_PR_014SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_s_01a_sf"))
	{
		return "ARNAP_PR_015SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_m_01a_sf"))
	{
		return "ARNAP_PR_016SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_l_01a_sf"))
	{
		return "ARNAP_PR_017SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xl_01a_sf"))
	{
		return "ARNAP_PR_018SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xxl_01a_sf"))
	{
		return "ARNAP_PR_019SF";
	}
	if (iParam0 == joaat("xs_prop_arena_adj_hloop_sf"))
	{
		return "ARNAP_PR_033SF";
	}
	if (iParam0 == joaat("xs_prop_arena_jump_xxl_01a"))
	{
		return "ARNAP_PR_019";
	}
	if (iParam0 == joaat("xs_prop_arena_goal"))
	{
		return "ARNAP_PR_020";
	}
	if (iParam0 == joaat("xs_prop_arena_gate_01a"))
	{
		return "ARNAP_PR_021";
	}
	if (iParam0 == joaat("xs_prop_arena_tower_01a"))
	{
		return "ARNAP_PR_022";
	}
	if (iParam0 == joaat("xs_prop_arena_tower_02a"))
	{
		return "ARNAP_PR_023";
	}
	if (iParam0 == joaat("xs_prop_arena_startgate_01a"))
	{
		return "ARNAP_PR_024";
	}
	if (iParam0 == joaat("xs_prop_arena_arrow_01a"))
	{
		return "ARNAP_PR_025";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_02a"))
	{
		return "ARNAP_PR_026";
	}
	if (iParam0 == joaat("xs_prop_arena_tower_04a"))
	{
		return "ARNAP_PR_027";
	}
	if (iParam0 == joaat("xs_prop_wall_tyre_01a"))
	{
		return "ARNAP_PR_028";
	}
	if (iParam0 == joaat("xs_prop_wall_tyre_l_01a"))
	{
		return "ARNAP_PR_029";
	}
	if (iParam0 == joaat("xs_prop_wall_tyre_start_01a"))
	{
		return "ARNAP_PR_030";
	}
	if (iParam0 == joaat("xs_prop_wall_tyre_end_01a"))
	{
		return "ARNAP_PR_031";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01a"))
	{
		return "ARNAP_PR_ARTY_A";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01b"))
	{
		return "ARNAP_PR_ARTY_B";
	}
	if (iParam0 == joaat("xs_prop_arena_turret_01a"))
	{
		return "ARNAP_PR_TWR_D";
	}
	if (iParam0 == joaat("xs_prop_arena_turret_01a_sf"))
	{
		return "ARNAP_PR_TWR_S";
	}
	if (iParam0 == joaat("xs_prop_arena_turret_01a_wl"))
	{
		return "ARNAP_PR_TWR_W";
	}
	if (iParam0 == joaat("xs_prop_arena_finish_line"))
	{
		return "ARNAP_PR_FNSH";
	}
	if (iParam0 == joaat("xs_prop_arena_pressure_plate_01a_sf"))
	{
		return "ARNAP_PRPAD";
	}
	if (iParam0 == -24212519)
	{
		return "ARNAP_SF_001";
	}
	if (iParam0 == 602461837)
	{
		return "ARNAP_SF_002";
	}
	if (iParam0 == -7893553)
	{
		return "ARNAP_SF_003";
	}
	if (iParam0 == 1164711295)
	{
		return "ARNAP_SF_004";
	}
	if (iParam0 == 1600014691)
	{
		return "ARNAP_SF_005";
	}
	if (iParam0 == -1570254564)
	{
		return "ARNAP_SF_006";
	}
	if (iParam0 == -280401182)
	{
		return "ARNAP_SF_007";
	}
	if (iParam0 == 1362955823)
	{
		return "ARNAP_SF_008";
	}
	if (iParam0 == 2081645531)
	{
		return "ARNAP_SF_009";
	}
	if (iParam0 == -76356964)
	{
		return "ARNAP_SF_010";
	}
	if (iParam0 == -312654223)
	{
		return "ARNAP_SF_011";
	}
	if (iParam0 == -1728275023)
	{
		return "ARNAP_SF_012";
	}
	if (iParam0 == -739296408)
	{
		return "ARNAP_SF_013";
	}
	if (iParam0 == 559478677)
	{
		return "ARNAP_SF_014";
	}
	if (iParam0 == 301586647)
	{
		return "ARNAP_SF_015";
	}
	if (iParam0 == -992952702)
	{
		return "ARNAP_SF_016";
	}
	if (iParam0 == 654168077)
	{
		return "ARNAP_SF_017S";
	}
	if (iParam0 == -2032906695)
	{
		return "ARNAP_SF_019";
	}
	if (iParam0 == -1671722781)
	{
		return "ARNAP_SF_020";
	}
	if (iParam0 == joaat("xs_prop_arena_wedge_01a_sf"))
	{
		return "ARNAP_WEDGE";
	}
	if (iParam0 == joaat("xs_prop_arena_goal_sf"))
	{
		return "ARNAP_PR_020S";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_02a_sf"))
	{
		return "ARNAP_PR_003";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01a_sf"))
	{
		return "ARNAP_PR_ARTY_A";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01b_sf"))
	{
		return "ARNAP_PR_ARTY_B";
	}
	if (iParam0 == -1154284456)
	{
		return "ARNAP_PR_FLBA_A";
	}
	if (iParam0 == 148271330)
	{
		return "ARNAP_PR_FLBA_B";
	}
	if (iParam0 == joaat("xs_prop_arena_arrow_01a_sf"))
	{
		return "ARNAP_AN_ARRW";
	}
	if (iParam0 == joaat("xs_prop_arena_startgate_01a_sf"))
	{
		return "ARNAP_AN_SFSG";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_s_45a_sf"))
	{
		return "AP_SF_PLTS45";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_s_90a_sf"))
	{
		return "AP_SF_PLTS90";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_s_180a_sf"))
	{
		return "AP_SF_PLTS180";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_30a_sf"))
	{
		return "AP_SF_PLTM30A";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_30b_sf"))
	{
		return "AP_SF_PLTM30B";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_60a_sf"))
	{
		return "AP_SF_PLTM60A";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_60b_sf"))
	{
		return "AP_SF_PLTM60B";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_90a_sf"))
	{
		return "AP_SF_PLTM90";
	}
	if (iParam0 == joaat("xs_prop_ar_tower_01a_sf"))
	{
		return "AP_SF_TWR";
	}
	if (iParam0 == joaat("xs_prop_ar_pipe_conn_01a_sf"))
	{
		return "AP_SF_PPC";
	}
	if (iParam0 == joaat("xs_prop_ar_stand_thick_01a_sf"))
	{
		return "ARNAP_PR_STND";
	}
	if (iParam0 == joaat("xs_prop_ar_pipe_01a_sf"))
	{
		return "ARNAP_PR_PP";
	}
	if (iParam0 == joaat("xs_prop_ar_gate_01a_sf"))
	{
		return "ARNAP_PR_GT";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_xl_01a_sf"))
	{
		return "ARNAP_PR_XLPLT";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_m_01a_sf"))
	{
		return "ARNAP_PR_MPLT";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_s_01a_sf"))
	{
		return "ARNAP_PR_SPLT";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_c_01a_sf"))
	{
		return "ARNAP_PR_CRNRA";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_c_02a_sf"))
	{
		return "ARNAP_PR_CRNRB";
	}
	if (iParam0 == joaat("xs_prop_ar_planter_c_03a_sf"))
	{
		return "ARNAP_PR_CNRC";
	}
	if (iParam0 == joaat("xs_prop_ar_tunnel_01a_sf"))
	{
		return "ARNAP_PR_TUNNN";
	}
	if (iParam0 == joaat("xs_prop_ar_buildingx_01a_sf"))
	{
		return "ARNAP_PR_BLDX";
	}
	if (iParam0 == joaat("prop_rub_carwreck_2"))
	{
		return "FMMC_PR_119";
	}
	if (iParam0 == joaat("prop_rub_carwreck_3"))
	{
		return "FMMC_PR_120";
	}
	if (iParam0 == joaat("prop_rub_carwreck_5"))
	{
		return "FMMC_PR_121";
	}
	if (iParam0 == joaat("prop_rub_carwreck_7"))
	{
		return "FMMC_PR_122";
	}
	if (iParam0 == joaat("prop_rub_carwreck_8"))
	{
		return "FMMC_PR_123";
	}
	if (iParam0 == joaat("prop_rub_carwreck_10"))
	{
		return "FMMC_PR_124";
	}
	if (iParam0 == joaat("prop_rub_carwreck_15"))
	{
		return "FMMC_PR_125";
	}
	if (iParam0 == joaat("prop_rub_carwreck_16"))
	{
		return "FMMC_PR_126";
	}
	if (iParam0 == joaat("xs_prop_arena_pressure_plate_01a_wl"))
	{
		return "ARNAP_PRPAD";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_c_01a"))
	{
		return "ARNAP_PIP_TA";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_c_01b"))
	{
		return "ARNAP_PIP_TB";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_c_01c"))
	{
		return "ARNAP_PIP_TC";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_c_01d"))
	{
		return "ARNAP_PIP_TD";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_s_01a"))
	{
		return "ARNAP_PIP_TE";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_track_s_01b"))
	{
		return "ARNAP_PIP_TF";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_01a"))
	{
		return "ARNAP_MM_001";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_01b"))
	{
		return "ARNAP_MM_002";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_01c"))
	{
		return "ARNAP_MM_003";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_02a"))
	{
		return "ARNAP_MM_004";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_02b"))
	{
		return "ARNAP_MM_005";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_bend_02c"))
	{
		return "ARNAP_MM_006";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_end_01a"))
	{
		return "ARNAP_MM_007";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_end_02a"))
	{
		return "ARNAP_MM_008";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_machine_01a"))
	{
		return "ARNAP_MM_009";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_machine_02a"))
	{
		return "ARNAP_MM_010";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_01a"))
	{
		return "ARNAP_MM_011";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_01b"))
	{
		return "ARNAP_MM_012";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_02a"))
	{
		return "ARNAP_MM_013";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_02b"))
	{
		return "ARNAP_MM_014";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_02c"))
	{
		return "ARNAP_MM_015";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_straight_02d"))
	{
		return "ARNAP_MM_016";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_transition_01a"))
	{
		return "ARNAP_MM_017";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_transition_01b"))
	{
		return "ARNAP_MM_018";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_transition_01c"))
	{
		return "ARNAP_MM_019";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_transition_02a"))
	{
		return "ARNAP_MM_020";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_transition_02b"))
	{
		return "ARNAP_MM_021";
	}
	if (iParam0 == joaat("xs_prop_arena_pipe_ramp_01a"))
	{
		return "ARNAP_MM_022";
	}
	if (iParam0 == joaat("xs_prop_arena_wedge_01a_wl"))
	{
		return "ARNAP_WEDGE";
	}
	if (iParam0 == -296431790)
	{
		return "ARNAP_PR_020W";
	}
	if (iParam0 == joaat("xs_prop_arena_wall_02a_wl"))
	{
		return "ARNAP_PR_003";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01a_wl"))
	{
		return "ARNAP_PR_ARTY_A";
	}
	if (iParam0 == joaat("xs_prop_arrow_tyre_01b_wl"))
	{
		return "ARNAP_PR_ARTY_B";
	}
	if (iParam0 == -566149868)
	{
		return "ARNAP_PR_FLBA_A";
	}
	if (iParam0 == -683942222)
	{
		return "ARNAP_PR_FLBA_B";
	}
	if (iParam0 == joaat("xs_prop_arena_arrow_01a_wl"))
	{
		return "ARNAP_AN_ARRW";
	}
	if (iParam0 == joaat("xs_prop_arena_fence_01a"))
	{
		return "ARNAP_PR_FNC_D";
	}
	if (iParam0 == joaat("xs_prop_arena_fence_01a_sf"))
	{
		return "ARNAP_PR_FNC_S";
	}
	if (iParam0 == joaat("xs_prop_arena_fence_01a_wl"))
	{
		return "ARNAP_PR_FNC_W";
	}
	if (iParam0 == joaat("xs_prop_barrier_5m_01a"))
	{
		return "AP_WL_BR5";
	}
	if (iParam0 == joaat("xs_prop_barrier_10m_01a"))
	{
		return "AP_WL_BR10";
	}
	if (iParam0 == joaat("xs_prop_barrier_15m_01a"))
	{
		return "AP_WL_BR15";
	}
	if (iParam0 == joaat("xs_prop_ar_tunnel_01a"))
	{
		return "AP_WL_TUNNL";
	}
	if (iParam0 == joaat("xs_prop_ar_tunnel_01a_wl"))
	{
		return "AP_WL_TUNNL";
	}
	if (iParam0 == joaat("xs_prop_lplate_01a_wl"))
	{
		return "AP_WL_LPT1";
	}
	if (iParam0 == joaat("xs_prop_lplate_bend_01a_wl"))
	{
		return "AP_WL_LPT2";
	}
	if (iParam0 == joaat("xs_prop_lplate_wall_01a_wl"))
	{
		return "AP_WL_LPT3";
	}
	if (iParam0 == joaat("xs_prop_lplate_wall_01b_wl"))
	{
		return "AP_WL_LPT4";
	}
	if (iParam0 == joaat("xs_prop_lplate_wall_01c_wl"))
	{
		return "AP_WL_LPT5";
	}
	if (iParam0 == joaat("xs_prop_beer_bottle_wl"))
	{
		return "AP_WL_MSC1";
	}
	if (iParam0 == joaat("xs_prop_burger_meat_wl"))
	{
		return "AP_WL_MSC2";
	}
	if (iParam0 == joaat("xs_prop_can_tunnel_wl"))
	{
		return "AP_WL_MSC3";
	}
	if (iParam0 == joaat("xs_prop_can_wl"))
	{
		return "AP_WL_MSC4";
	}
	if (iParam0 == joaat("xs_prop_chips_tube_wl"))
	{
		return "AP_WL_MSC5";
	}
	if (iParam0 == joaat("xs_prop_chopstick_wl"))
	{
		return "AP_WL_MSC6";
	}
	if (iParam0 == joaat("xs_prop_gate_tyre_01a_wl"))
	{
		return "AP_WL_MSC7";
	}
	if (iParam0 == joaat("xs_prop_hamburgher_wl"))
	{
		return "AP_WL_MSC8";
	}
	if (iParam0 == joaat("xs_prop_nacho_wl"))
	{
		return "AP_WL_MSC9";
	}
	if (iParam0 == joaat("xs_prop_plastic_bottle_wl"))
	{
		return "AP_WL_MSC10";
	}
	if (iParam0 == joaat("prop_wine_red"))
	{
		return "FMMC_PR_127";
	}
	if (iParam0 == joaat("prop_drink_redwine"))
	{
		return "FMMC_PR_128";
	}
	if (iParam0 == joaat("ch_prop_boring_machine_01a"))
	{
		return "HEI3_PR_1";
	}
	if (iParam0 == joaat("ch_prop_boring_machine_01b"))
	{
		return "HEI3_PR_2";
	}
	if (iParam0 == joaat("ch_prop_ch_casino_shutter01x"))
	{
		return "HEI3_PR_3";
	}
	if (iParam0 == joaat("ch_prop_ch_cctv_wall_atta_01a"))
	{
		return "HEI3_PR_4";
	}
	if (iParam0 == joaat("ch_prop_ch_tunnel_door01a"))
	{
		return "HEI3_PR_5";
	}
	if (iParam0 == joaat("ch_prop_ch_room_trolly_01a"))
	{
		return "HEI3_PR_6";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_01a"))
	{
		return "HEI3_PR_7";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_01b"))
	{
		return "HEI3_PR_8";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_01c"))
	{
		return "HEI3_PR_9";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_01d"))
	{
		return "HEI3_PR_10";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_01e"))
	{
		return "HEI3_PR_10e";
	}
	if (iParam0 == joaat("ch_prop_ch_sec_cabinet_02a"))
	{
		return "HEI3_PR_11";
	}
	if (iParam0 == joaat("ch_prop_ch_trolly_01a"))
	{
		return "HEI3_PR_12";
	}
	if (iParam0 == joaat("ch_prop_ch_service_trolley_01a"))
	{
		return "HEI3_PR_13";
	}
	if (iParam0 == joaat("ch_prop_fingerprint_scanner_error_01b"))
	{
		return "HEI3_PR_14";
	}
	if (iParam0 == joaat("ch_prop_ch_laundry_trolley_01a"))
	{
		return "HEI3_PR_15";
	}
	if (iParam0 == joaat("ch_prop_ch_laundry_trolley_01b"))
	{
		return "HEI3_PR_16";
	}
	if (iParam0 == joaat("v_corp_banktrolley"))
	{
		return "HEI3_PR_17";
	}
	if (iParam0 == joaat("ch_prop_ch_maint_sign_01"))
	{
		return "HEI3_PR_18";
	}
	if (iParam0 == joaat("sum_prop_ac_track_paddock_01"))
	{
		return "MC_PR_STNT337";
	}
	if (iParam0 == joaat("ch_prop_track_pit_garage_01a"))
	{
		return "MC_PR_STNT338D";
	}
	if (iParam0 == joaat("sum_prop_ac_pit_garage_01a"))
	{
		return "MC_PR_STNT338";
	}
	if (iParam0 == joaat("sum_prop_ac_grandstand_01a"))
	{
		return "MC_PR_RGS";
	}
	if (iParam0 == joaat("sum_prop_track_pit_garage_02a"))
	{
		return "MC_PR_GAR_2";
	}
	if (iParam0 == joaat("sum_prop_track_pit_garage_03a"))
	{
		return "MC_PR_GAR_3";
	}
	if (iParam0 == joaat("sum_prop_track_pit_garage_04a"))
	{
		return "MC_PR_GAR_4";
	}
	if (iParam0 == joaat("sum_prop_track_pit_garage_05a"))
	{
		return "MC_PR_GAR_5";
	}
	if (iParam0 == joaat("sum_prop_race_barrier_01_sec"))
	{
		return "MC_PR_BRSEC_1";
	}
	if (iParam0 == joaat("sum_prop_race_barrier_02_sec"))
	{
		return "MC_PR_BRSEC_2";
	}
	if (iParam0 == joaat("sum_prop_race_barrier_04_sec"))
	{
		return "MC_PR_BRSEC_4";
	}
	if (iParam0 == joaat("sum_prop_race_barrier_08_sec"))
	{
		return "MC_PR_BRSEC_8";
	}
	if (iParam0 == joaat("sum_prop_race_barrier_16_sec"))
	{
		return "MC_PR_BRSEC_16";
	}
	if (iParam0 == joaat("sum_prop_barrier_ac_bend_05d"))
	{
		return "MC_PR_BRBND_5";
	}
	if (iParam0 == joaat("sum_prop_barrier_ac_bend_15d"))
	{
		return "MC_PR_BRBND_15";
	}
	if (iParam0 == joaat("sum_prop_barrier_ac_bend_30d"))
	{
		return "MC_PR_BRBND_30";
	}
	if (iParam0 == joaat("sum_prop_barrier_ac_bend_45d"))
	{
		return "MC_PR_BRBND_45";
	}
	if (iParam0 == joaat("sum_prop_barrier_ac_bend_90d"))
	{
		return "MC_PR_BRBND_90";
	}
	if (iParam0 == joaat("sum_prop_ac_long_barrier_05d"))
	{
		return "MC_PR_BRSEC_5D";
	}
	if (iParam0 == joaat("sum_prop_ac_long_barrier_15d"))
	{
		return "MC_PR_BRSEC_15D";
	}
	if (iParam0 == joaat("sum_prop_ac_long_barrier_30d"))
	{
		return "MC_PR_BRSEC_30D";
	}
	if (iParam0 == joaat("sum_prop_ac_long_barrier_45d"))
	{
		return "MC_PR_BRSEC_45D";
	}
	if (iParam0 == joaat("sum_prop_ac_long_barrier_90d"))
	{
		return "MC_PR_BRSEC_90D";
	}
	if (iParam0 == joaat("sum_prop_ac_short_barrier_05d"))
	{
		return "MC_PR_BRSCT_5D";
	}
	if (iParam0 == joaat("sum_prop_ac_short_barrier_15d"))
	{
		return "MC_PR_BRSCT_15D";
	}
	if (iParam0 == joaat("sum_prop_ac_short_barrier_30d"))
	{
		return "MC_PR_BRSCT_30D";
	}
	if (iParam0 == joaat("sum_prop_ac_short_barrier_45d"))
	{
		return "MC_PR_BRSCT_45D";
	}
	if (iParam0 == joaat("sum_prop_ac_short_barrier_90d"))
	{
		return "MC_PR_BRSCT_90D";
	}
	if (iParam0 == joaat("sum_prop_ac_barge_01"))
	{
		return "YCT_PR_BRG";
	}
	if (iParam0 == joaat("sum_prop_ac_ind_light_02a"))
	{
		return "MC_PR_LGT1";
	}
	if (iParam0 == joaat("sum_prop_ac_ind_light_03c"))
	{
		return "MC_PR_LGT2";
	}
	if (iParam0 == joaat("sum_prop_ac_ind_light_04"))
	{
		return "MC_PR_LGT3";
	}
	if (iParam0 == joaat("sum_prop_ac_wall_light_09a"))
	{
		return "FMMC_BB_LGTL";
	}
	if (iParam0 == joaat("ch_prop_ch_cctv_cam_01a"))
	{
		return "FMMC_OBJ_CWA";
	}
	if (iParam0 == joaat("ch_prop_ch_cctv_cam_02a"))
	{
		return "FMMC_OBJ_CWA2";
	}
	if (iParam0 == joaat("xm_prop_x17_server_farm_cctv_01"))
	{
		return "FMMC_OBJ_CRL";
	}
	if (iParam0 == joaat("hei_prop_bank_cctv_01"))
	{
		return "FMMC_OM_CCTV";
	}
	if (iParam0 == joaat("hei_prop_bank_cctv_02"))
	{
		return "FMMC_OM_DOMC";
	}
	if (iParam0 == joaat("prop_cctv_cam_05a"))
	{
		return "FMMC_OBJ_CWA3";
	}
	if (iParam0 == 820707985)
	{
		return "MC_EX3D_2X1";
	}
	if (iParam0 == 11747150)
	{
		return "MC_EX3D_2X3";
	}
	if (iParam0 == 1444283207)
	{
		return "MC_EX3D_2X6";
	}
	if (iParam0 == -664841990)
	{
		return "MC_EX3D_3X3Z";
	}
	if (iParam0 == 1811127662)
	{
		return "MC_EX3D_3X3ZD";
	}
	if (iParam0 == -2132967520)
	{
		return "MC_EX3D_6x10";
	}
	if (iParam0 == -1730847084)
	{
		return "MC_EX3D_CJ";
	}
	if (iParam0 == -37343207)
	{
		return "MC_EX3D_TJ";
	}
	if (iParam0 == -1371067497)
	{
		return "MC_EX3D_LJR";
	}
	if (iParam0 == 719882629)
	{
		return "MC_EX3D_LJL";
	}
	if (iParam0 == 581945895)
	{
		return "MC_EX3D_LJLD";
	}
	if (iParam0 == -1639321128)
	{
		return "MC_EX3D_3X3";
	}
	if (iParam0 == 669536853)
	{
		return "MC_EX3D_4X4A";
	}
	if (iParam0 == 1510880928)
	{
		return "MC_EX3D_4X4B";
	}
	if (iParam0 == 1439575588)
	{
		return "MC_EX3D_4X4C";
	}
	if (iParam0 == 1074266776)
	{
		return "MC_EX3D_4X4D";
	}
	if (iParam0 == 1900799263)
	{
		return "MC_EX3D_4X4E";
	}
	if (iParam0 == 1803344257)
	{
		return "MC_EX3D_4X4F";
	}
	if (iParam0 == -1133355695)
	{
		return "MC_EX3D_6X6";
	}
	if (iParam0 == -1955916202)
	{
		return "MC_EX3D_8X8";
	}
	if (iParam0 == 251420015)
	{
		return "MC_EX3D_12";
	}
	if (iParam0 == -451866472)
	{
		return "MC_EX3D_4X6";
	}
	if (iParam0 == -654667398)
	{
		return "MC_EX3D_7X8";
	}
	if (iParam0 == 896512151)
	{
		return "MC_EX3D_14X14";
	}
	if (iParam0 == 940227121)
	{
		return "MC_EX3D_DG";
	}
	if (iParam0 == -337605007)
	{
		return "MC_EX3D_W2M";
	}
	if (iParam0 == 1281409573)
	{
		return "MC_EX3D_DRSW";
	}
	if (iParam0 == joaat("h4_prop_h4_boxpile_01a"))
	{
		return "H4_PR_FLB";
	}
	if (iParam0 == joaat("h4_prop_h4_tannoy_01a"))
	{
		return "FMMC_BB_CLSN";
	}
	if (iParam0 == joaat("h4_prop_h4_sign_cctv_01a"))
	{
		return "H4_PR_CTV";
	}
	if (iParam0 == joaat("h4_prop_h4_sec_cabinet_dum"))
	{
		return "H4_PR_PDM";
	}
	if (iParam0 == joaat("h4_prop_h4_sub_kos"))
	{
		return "H4_PR_SUB";
	}
	if (iParam0 == joaat("h4_prop_office_desk_01"))
	{
		return "H4_PR_OFDSK";
	}
	if (iParam0 == joaat("h4_prop_h4_fence_seg_x1_01a"))
	{
		return "H4_PR_FS1";
	}
	if (iParam0 == joaat("h4_prop_h4_fence_seg_x3_01a"))
	{
		return "H4_PR_FS3";
	}
	if (iParam0 == joaat("h4_prop_h4_fence_seg_x5_01a"))
	{
		return "H4_PR_FS5";
	}
	if (iParam0 == joaat("h4_prop_h4_fence_arches_x2_01a"))
	{
		return "H4_PR_FA2";
	}
	if (iParam0 == joaat("h4_prop_h4_fence_arches_x3_01a"))
	{
		return "H4_PR_FA3";
	}
	if (iParam0 == joaat("h4_prop_h4_loch_monster"))
	{
		return "H4_PR_LSM";
	}
	if (iParam0 == joaat("prop_box_wood02a_pu"))
	{
		return "H4_PR_SCR";
	}
	if (iParam0 == joaat("h4_prop_h4_cctv_pole_04"))
	{
		return "H4_PR_CTVP";
	}
	if (iParam0 == joaat("h4_prop_h4_t_bottle_02a"))
	{
		return "H4_PR_GCLT1";
	}
	if (iParam0 == joaat("h4_prop_h4_neck_disp_01a"))
	{
		return "H4_PR_GCLT2A";
	}
	if (iParam0 == joaat("h4_prop_h4_necklace_01a"))
	{
		return "H4_PR_GCLT2B";
	}
	if (iParam0 == joaat("h4_prop_h4_art_pant_01a"))
	{
		return "H4_PR_GCLT3";
	}
	if (iParam0 == joaat("h4_prop_h4_diamond_disp_01a"))
	{
		return "H4_PR_GCLT4A";
	}
	if (iParam0 == joaat("h4_prop_h4_diamond_01a"))
	{
		return "H4_PR_GCLT4B";
	}
	if (iParam0 == joaat("gr_prop_inttruck_door_01"))
	{
		return "TNR_PR_MOCD";
	}
	if (iParam0 == joaat("gr_prop_gr_trailer_tv"))
	{
		return "TNR_PR_MOC1";
	}
	if (iParam0 == joaat("gr_prop_gr_trailer_tv_02"))
	{
		return "TNR_PR_MOC2";
	}
	if (iParam0 == joaat("gr_prop_gr_trailer_monitor_01"))
	{
		return "TNR_PR_MOC3";
	}
	if (iParam0 == joaat("gr_prop_gr_trailer_monitor_02"))
	{
		return "TNR_PR_MOC4";
	}
	if (iParam0 == joaat("gr_prop_gr_trailer_monitor_03"))
	{
		return "TNR_PR_MOC5";
	}
	if (iParam0 == joaat("tr_prop_tr_ramp_01a"))
	{
		return "TNR_PR_TRLRMP";
	}
	if (iParam0 == joaat("tr_prop_tr_crates_sam_01a"))
	{
		return "TNR_PR_PRTMSLC";
	}
	if (iParam0 == joaat("v_ilev_gb_vauldr"))
	{
		return "TNR_PR_SBKVLT";
	}
	if (iParam0 == joaat("tr_prop_tr_iaa_door_01a"))
	{
		return "TNR_PR_FACDR";
	}
	if (iParam0 == joaat("tr_prop_tr_sand_01a"))
	{
		return "FMMC_P_SNDPL_D";
	}
	if (iParam0 == joaat("tr_prop_tr_sand_01b"))
	{
		return "FMMC_P_SNDPL_U";
	}
	if (iParam0 == joaat("tr_prop_tr_sand_cs_01a"))
	{
		return "FMMC_P_SNDPL2_D";
	}
	if (iParam0 == joaat("tr_prop_tr_sand_cs_01b"))
	{
		return "FMMC_P_SNDPL2_U";
	}
	if (iParam0 == joaat("tr_prop_tr_notice_01a"))
	{
		return "FMMC_P_NTCSN";
	}
	if (iParam0 == joaat("sf_prop_sf_door_hangar_01a"))
	{
		return "FMMC_P_HNGD";
	}
	if (iParam0 == joaat("tr_prop_tr_monitor_01a"))
	{
		return "FMMC_P_MNTR";
	}
	if (iParam0 == joaat("sf_prop_sf_dj_desk_01a"))
	{
		return "FMMC_P_DJDSK";
	}
	if (iParam0 == joaat("sf_prop_sf_laptop_01a"))
	{
		return "FMMC_P_LAPTOP";
	}
	if (iParam0 == joaat("sf_prop_sf_speaker_l_01a"))
	{
		return "FMMC_P_SPK";
	}
	if (iParam0 == joaat("sf_prop_sf_spa_doors_01a"))
	{
		return "FMMC_P_SPAD";
	}
	if (iParam0 == joaat("sf_prop_sf_art_guns_01a"))
	{
		return "FMMC_P_ARTGUNS";
	}
	if (iParam0 == joaat("sf_prop_sf_dj_desk_02a"))
	{
		return "FMMC_P_DJDSK2";
	}
	if (iParam0 == joaat("sf_prop_sf_lamp_studio_02a"))
	{
		return "FMMC_P_SFL";
	}
	if (iParam0 == joaat("sf_prop_sf_fnc_01a"))
	{
		return "FMMC_P_WF";
	}
	if (iParam0 == joaat("sf_prop_sf_fncsec_01a"))
	{
		return "FMMC_P_MFPE";
	}
	if (iParam0 == joaat("sf_prop_sf_wall_block_01a"))
	{
		return "FMMC_P_WALLBL";
	}
	if (iParam0 == joaat("sum_prop_ac_aircon_02a"))
	{
		return "FMMC_OBJ_AC";
	}
	if (iParam0 == joaat("prop_cctv_cam_07a"))
	{
		return "FMMC_P_CCTV";
	}
	if (iParam0 == joaat("sf_prop_sf_box_wood_01a"))
	{
		return "FMMC_P_WBOOX";
	}
	if (iParam0 == joaat("sf_prop_sf_structure_01a"))
	{
		return "FMMC_P_STRUCT";
	}
	if (iParam0 == joaat("sf_prop_sf_hydro_platform_01a"))
	{
		return "FMMC_P_HYDROP";
	}
	if (iParam0 == joaat("sf_prop_sf_carrier_jet"))
	{
		return "FMMC_P_JET";
	}
	if (iParam0 == joaat("sf_prop_sf_air_generator_01"))
	{
		return "FMMC_P_AIRGEN";
	}
	if (iParam0 == joaat("sf_prop_sf_swift2_01a"))
	{
		return "FMMC_P_HELCRSH";
	}
	if (iParam0 == joaat("sf_prop_sf_tanker_crash_01a"))
	{
		return "FMMC_P_CRSHTNK";
	}
	if (iParam0 == joaat("sf_prop_sf_gas_tank_01a"))
	{
		return "FMMC_P_GASTNK";
	}
	if (iParam0 == joaat("sf_prop_sf_speaker_stand_01a"))
	{
		return "FMMC_P_SPK2";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01a"))
	{
		return "FMMC_P_CNT_A";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01b"))
	{
		return "FMMC_P_CNT_B";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01c"))
	{
		return "FMMC_P_CNT_C";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01d"))
	{
		return "FMMC_P_CNT_D";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01e"))
	{
		return "FMMC_P_CNT_E";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01f"))
	{
		return "FMMC_P_CNT_F";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01g"))
	{
		return "FMMC_P_CNT_G";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01h"))
	{
		return "FMMC_P_CNT_H";
	}
	if (iParam0 == joaat("tr_prop_tr_container_01i"))
	{
		return "FMMC_P_CNT_I";
	}
	if (iParam0 == joaat("prop_container_03_ld"))
	{
		return "FMMC_P_CNT_A2";
	}
	if (iParam0 == joaat("hei_prop_cntrdoor_mph_l"))
	{
		return "FMMC_P_CNT_B2";
	}
	if (iParam0 == joaat("hei_prop_cntrdoor_mph_r"))
	{
		return "FMMC_P_CNT_C2";
	}
	if (iParam0 == joaat("xm_prop_x17_screens_01a"))
	{
		return "FMMC_P_SCNS";
	}
	if (iParam0 == joaat("prop_beach_ring_01"))
	{
		return "FMMC_P_BCHR";
	}
	if (iParam0 == joaat("prop_beachball_01"))
	{
		return "FMMC_P_BCHB";
	}
	if (iParam0 == joaat("prop_beach_lilo_02"))
	{
		return "FMMC_P_LILO2";
	}
	if (iParam0 == joaat("prop_beach_volball02"))
	{
		return "FMMC_P_VLBL2";
	}
	if (iParam0 == joaat("prop_tool_box_04"))
	{
		return "FMMC_P_DCRT24";
	}
	if (iParam0 == joaat("tr_prop_tr_military_pickup_01a"))
	{
		return "FMMC_P_DCRT25";
	}
	if (iParam0 == joaat("prop_gold_cont_01"))
	{
		return "FMMC_P_DCRT27";
	}
	if (iParam0 == joaat("prop_large_gold_empty"))
	{
		return "FMMC_P_DCRT27B";
	}
	if (iParam0 == joaat("ex_prop_crate_expl_sc"))
	{
		return "FMMC_P_DCRT28";
	}
	if (iParam0 == joaat("ex_prop_crate_expl_bc"))
	{
		return "FMMC_P_DCRT29";
	}
	if (iParam0 == joaat("ex_prop_crate_ammo_bc"))
	{
		return "FMMC_P_DCRT30";
	}
	if (iParam0 == joaat("ex_prop_crate_ammo_sc"))
	{
		return "FMMC_P_DCRT31";
	}
	if (iParam0 == joaat("ex_prop_crate_biohazard_bc"))
	{
		return "FMMC_P_DCRT32";
	}
	if (iParam0 == joaat("ex_prop_crate_biohazard_sc"))
	{
		return "FMMC_P_DCRT33";
	}
	if (iParam0 == joaat("ex_prop_crate_minig"))
	{
		return "FMMC_P_DCRT34";
	}
	if (iParam0 == joaat("tr_prop_tr_med_table_01a"))
	{
		return "FMMC_P_EMBLM";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_0l1"))
	{
		return "FMMC_PR_TR_LA";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_0l1_b"))
	{
		return "FMMC_PR_TR_LAH";
	}
	if (iParam0 == joaat("tr_prop_tr_tyre_wall_u_l"))
	{
		return "FMMC_PR_TR_LU";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_0r1"))
	{
		return "FMMC_PR_TR_RA";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_0r1_b"))
	{
		return "FMMC_PR_TR_RAH";
	}
	if (iParam0 == joaat("tr_prop_tr_tyre_wall_u_r"))
	{
		return "FMMC_PR_TR_RU";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_01"))
	{
		return "FMMC_PR_TR_FA";
	}
	if (iParam0 == joaat("tr_prop_tr_wall_sign_01_b"))
	{
		return "FMMC_PR_TR_FAH";
	}
	if (iParam0 == joaat("tr_prop_tr_start_grid_01a"))
	{
		return "FMMC_PR_TR_SG";
	}
	if (iParam0 == joaat("tr_prop_tr_finish_line_01a"))
	{
		return "FMMC_PR_TR_SL";
	}
	if (iParam0 == joaat("tr_prop_tr_races_barrel_01a"))
	{
		return "FMMC_PR_TR_BRL";
	}
	if (iParam0 == joaat("tr_prop_tr_truktrailer_01a"))
	{
		return "FMMC_PR_TR_TRL";
	}
	if (iParam0 == joaat("tr_prop_tr_skip_ramp_01a"))
	{
		return "FMMC_PR_TR_SRMP";
	}
	if (iParam0 == joaat("tr_prop_tr_pile_dirt_01a"))
	{
		return "FMMC_PR_TR_PRMP";
	}
	if (iParam0 == joaat("tr_prop_tr_trailer_ramp_01a"))
	{
		return "FMMC_PR_TR_TRMP";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_ml_01a"))
	{
		return "FMMC_PR_TR_ML";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_mr_01a"))
	{
		return "FMMC_PR_TR_MR";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_mul_01a"))
	{
		return "FMMC_PR_TR_MUL";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_mur_01a"))
	{
		return "FMMC_PR_TR_MUR";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_ms_01a"))
	{
		return "FMMC_PR_TR_MS";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_ll_01a"))
	{
		return "FMMC_PR_TR_LL";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_lr_01a"))
	{
		return "FMMC_PR_TR_LR";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_lul_01a"))
	{
		return "FMMC_PR_TR_LUL";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_lur_01a"))
	{
		return "FMMC_PR_TR_LUR";
	}
	if (iParam0 == joaat("tr_prop_tr_sign_gf_ls_01a"))
	{
		return "FMMC_PR_TR_LS";
	}
	if (iParam0 == joaat("prop_dumpster_02a"))
	{
		return "FMMC_P_DDMP";
	}
	if (iParam0 == joaat("prop_parasol_01"))
	{
		return "FMMC_P_DPARA";
	}
	if (iParam0 == joaat("prop_rub_binbag_03b"))
	{
		return "FMMC_P_DBBG";
	}
	if (iParam0 == joaat("prop_rub_binbag_06"))
	{
		return "FMMC_P_DBBG2";
	}
	if (iParam0 == joaat("prop_rub_boxpile_06"))
	{
		return "FMMC_P_DBXP";
	}
	if (iParam0 == joaat("prop_barrier_work06a"))
	{
		return "FMMC_P_DBRR";
	}
	if (iParam0 == joaat("prop_bench_06"))
	{
		return "FMMC_P_DBNCH";
	}
	if (iParam0 == joaat("prop_bin_05a"))
	{
		return "FMMC_P_DBIN";
	}
	if (iParam0 == joaat("prop_picnictable_01"))
	{
		return "FMMC_P_DTBL";
	}
	if (iParam0 == joaat("hei_prop_heist_emp"))
	{
		return "FMMC_P_HEIEMP";
	}
	if (iParam0 == joaat("ch_prop_emp_01b"))
	{
		return "FMMC_P_HEIEMP2";
	}
	if (iParam0 == joaat("gr_prop_gr_bench_02b"))
	{
		return "FMMC_P_BNCH2";
	}
	if (iParam0 == joaat("ex_prop_crate_shide"))
	{
		return "FMMC_P_EXCRT1";
	}
	if (iParam0 == joaat("ex_prop_crate_art_bc"))
	{
		return "FMMC_P_EXCRT2";
	}
	if (iParam0 == joaat("ex_prop_crate_art_sc"))
	{
		return "FMMC_P_EXCRT3";
	}
	if (iParam0 == joaat("ex_prop_crate_art_02_bc"))
	{
		return "FMMC_P_EXCRT4";
	}
	if (iParam0 == joaat("ex_prop_crate_art_02_sc"))
	{
		return "FMMC_P_EXCRT5";
	}
	if (iParam0 == joaat("p_rcss_folded"))
	{
		return "FMMC_P_GTRT";
	}
	if (iParam0 == joaat("prop_power_cell"))
	{
		return "FMMC_P_PWRC";
	}
	if (iParam0 == joaat("prop_biotech_store"))
	{
		return "FMMC_P_BTST";
	}
	if (iParam0 == joaat("prop_alien_egg_01"))
	{
		return "FMMC_P_ALEGG";
	}
	if (iParam0 == joaat("tr_prop_tr_mule_mt_01a"))
	{
		return "FMMC_P_VRML";
	}
	if (iParam0 == joaat("hei_prop_heist_off_chair"))
	{
		return "FMMC_P_OFCHAR";
	}
	if (iParam0 == joaat("tr_prop_tr_monitor_01a"))
	{
		return "FMMC_P_MNTR";
	}
	if (iParam0 == joaat("prop_cs_mouse_01"))
	{
		return "FMMC_P_MOUSE1";
	}
	if (iParam0 == joaat("reh_prop_reh_bomb_tech_01a"))
	{
		return "FMMC_P_SERVBMB";
	}
	if (iParam0 == joaat("reh_prop_reh_bomb_tech_01b"))
	{
		return "FMMC_P_BOMBK";
	}
	if (iParam0 == joaat("reh_prop_reh_case_drone_01a"))
	{
		return "FMMC_P_DCASE";
	}
	if (iParam0 == joaat("reh_prop_reh_gadget_01a"))
	{
		return "FMMC_P_CLFD";
	}
	if (iParam0 == joaat("reh_prop_reh_tablet_01a"))
	{
		return "FMMC_P_AHTAB";
	}
	if (iParam0 == joaat("reh_prop_reh_harddisk_01a"))
	{
		return "FMMC_P_AHHDD";
	}
	if (iParam0 == joaat("reh_prop_reh_glasses_smt_01a"))
	{
		return "FMMC_P_MXRG";
	}
	if (iParam0 == joaat("reh_prop_reh_desk_comp_01a"))
	{
		return "FMMC_P_COMP";
	}
	if (iParam0 == joaat("reh_prop_reh_b_computer_04a"))
	{
		return "FMMC_P_FBOX";
	}
	if (iParam0 == joaat("reh_prop_reh_fuse_01b"))
	{
		return "FMMC_P_BFUS";
	}
	return "";
}

int func_823(int* iParam0, int iParam1)//Position - 0x17405E
{
	if (iParam0->f_5570 == 13)
	{
		if (iParam0->f_5569 == -1)
		{
			return 0;
		}
		else
		{
			return Global_4718592.f_169889[iParam0->f_5569];
		}
	}
	return iParam1->f_88[iParam0->f_5570 /*50*/][iParam0->f_5569];
}

char* func_824(int iParam0)//Position - 0x17484F
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return "3DX_PISTOL";
		case joaat("WEAPON_COMBATPISTOL"):
			return "3DX_CMBPISTOL";
		case joaat("WEAPON_APPISTOL"):
			return "3DX_APPISTOL";
		case joaat("WEAPON_SNSPISTOL"):
			return "3DX_SNSPISTOL";
		case joaat("WEAPON_HEAVYPISTOL"):
			return "3DX_HVPISTOL";
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "3DX_VNTPISTOL";
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "3DX_PUMPSHOTG";
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "3DX_SOFFSHOTG";
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "3DX_ASSSHOTG";
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return "3DX_HVSHOTG";
		case joaat("WEAPON_MICROSMG"):
			return "3DX_MICROSMG";
		case joaat("WEAPON_SMG"):
			return "3DX_SMG";
		case joaat("WEAPON_MG"):
			return "3DX_MG";
		case joaat("WEAPON_COMBATMG"):
			return "3DX_COMBATMG";
		case joaat("WEAPON_GUSENBERG"):
			return "3DX_GUSSPR";
		case joaat("WEAPON_COMBATPDW"):
			return "3DX_COMPATPDW";
		case joaat("WEAPON_MACHINEPISTOL"):
			return "3DX_MACHPIST";
		case joaat("WEAPON_ASSAULTSMG"):
			return "3DX_ASSSMG";
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "3DX_ASSRIFLE";
		case joaat("WEAPON_CARBINERIFLE"):
			return "3DX_CRBRIFLE";
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "3DX_ADVRIFLE";
		case joaat("WEAPON_SPECIALCARBINE"):
			return "3DX_SPCRB";
		case joaat("WEAPON_MUSKET"):
			return "3DX_MUSKET";
		case joaat("WEAPON_BULLPUPRIFLE"):
			return "3DX_BOOM";
		case joaat("WEAPON_SNIPERRIFLE"):
			return "3DX_SNIPERRFL";
		case joaat("WEAPON_HEAVYSNIPER"):
			return "3DX_HVSNIPER";
		case joaat("WEAPON_MARKSMANRIFLE"):
			return "3DX_MARKSMANR";
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return "3DX_HVSNIPERMK2";
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return "3DX_MRKRIFLEMK2";
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "3DX_GRENLNCH";
		case joaat("WEAPON_RPG"):
			return "3DX_RPG";
		case joaat("WEAPON_MINIGUN"):
			return "3DX_MINIGUN";
		case joaat("WEAPON_FIREWORK"):
			return "3DX_FIREWLNCH";
		case joaat("WEAPON_GRENADE"):
			return "3DX_GRENADE";
		case joaat("WEAPON_STICKYBOMB"):
			return "3DX_POW";
		default:
	}
	return "";
}

bool func_825()//Position - 0x174A4B
{
	return ((Global_4718592 == 0 && Global_4718592.f_2 == 13) && __LIB_0__::func_236());
}

char* func_826(int iParam0, int iParam1)//Position - 0x174A70
{
	switch (iParam0)
	{
		case 0:
			return "FMMC_RULE1";
		case 1:
			if (iParam1 == 3)
			{
				return "FMMC_RULE2B";
			}
			else
			{
				return "FMMC_RULE2";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "FMMC_RULE3";
			}
			else
			{
				return "FMMC_RULE3B";
			}
			break;
		case 3:
			return "FMMC_RULE4";
		case 4:
			return "FMMC_RULE6";
		case 5:
			return "FMMC_RULE7";
		case 11:
			return "FMMC_RULE8";
		case 12:
			return "FMMC_RULE9";
		case 13:
			return "FMMC_RULE10";
		case 15:
			return "FMMC_RULE11";
		case 17:
			return "FMMC_RULE12";
		case 23:
			return "FMMC_RULE13";
		case 24:
			return "FMMC_RULE14";
		case 31:
			if (iParam1 == 0)
			{
				return "FMMC_RULE15A";
			}
			else if (iParam1 == 1)
			{
				return "FMMC_RULE15B";
			}
			else if (iParam1 == 3)
			{
				return "FMMC_RULE15C";
			}
			break;
		case 32:
			if (iParam1 == 0)
			{
				return "FMMC_RULE16A";
			}
			else if (iParam1 == 1)
			{
				return "FMMC_RULE16B";
			}
			else if (iParam1 == 3)
			{
				return "FMMC_RULE16C";
			}
			break;
		case 35:
			return "FMMC_RULEPGT";
	}
	return "";
}

int func_827(int iParam0)//Position - 0x174E8C
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_PISTOL");
		case 1:
			return joaat("WEAPON_MICROSMG");
		case 2:
			return joaat("WEAPON_SMG");
		case 3:
			return joaat("WEAPON_ASSAULTRIFLE");
		case 4:
			return joaat("WEAPON_ADVANCEDRIFLE");
		case 5:
			return joaat("WEAPON_MG");
		case 6:
			return joaat("WEAPON_COMBATMG");
		case 7:
			return joaat("WEAPON_PUMPSHOTGUN");
		case 8:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
		case 9:
			return joaat("WEAPON_SNIPERRIFLE");
		case 10:
			return joaat("WEAPON_HEAVYSNIPER");
		case 11:
			return joaat("WEAPON_GRENADELAUNCHER");
		case 12:
			return joaat("WEAPON_RPG");
		case 13:
			return joaat("WEAPON_MINIGUN");
		case 14:
			return joaat("WEAPON_KNIFE");
		case 15:
			return joaat("WEAPON_BAT");
		case 16:
			return joaat("WEAPON_UNARMED");
		case 17:
			return joaat("WEAPON_MACHINEPISTOL");
		case 18:
			return joaat("WEAPON_GRENADE");
		case 19:
			return joaat("WEAPON_STICKYBOMB");
		case 20:
			return joaat("WEAPON_MOLOTOV");
		case 21:
			return joaat("WEAPON_PIPEBOMB");
		case 22:
			return joaat("WEAPON_CARBINERIFLE");
		case 23:
			return joaat("WEAPON_CROWBAR");
		case 24:
			return joaat("WEAPON_HAMMER");
		case 25:
			return joaat("WEAPON_WRENCH");
		case 26:
			return joaat("WEAPON_SPECIALCARBINE");
		case 27:
			return joaat("WEAPON_BULLPUPRIFLE");
		case 28:
			return joaat("WEAPON_HEAVYSHOTGUN");
		case 29:
			return joaat("WEAPON_BULLPUPSHOTGUN");
		case 30:
			return joaat("WEAPON_ASSAULTSHOTGUN");
		case 31:
			return joaat("WEAPON_ASSAULTSMG");
		case 32:
			return joaat("WEAPON_COMBATPDW");
		case 33:
			return joaat("WEAPON_SPECIALCARBINE_MK2");
		case 34:
			return joaat("WEAPON_PISTOL_MK2");
		case 35:
			return joaat("WEAPON_MILITARYRIFLE");
		case 36:
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
		case 37:
			return joaat("WEAPON_COMPACTRIFLE");
		case 38:
			return joaat("WEAPON_MINISMG");
		case 39:
			return joaat("WEAPON_SNSPISTOL");
		case 40:
			return joaat("WEAPON_VINTAGEPISTOL");
		case 41:
			return joaat("WEAPON_DBSHOTGUN");
		case 42:
			return joaat("WEAPON_MUSKET");
		case 43:
			return joaat("WEAPON_NAVYREVOLVER");
		case 44:
			return joaat("WEAPON_BOTTLE");
		case 45:
			return joaat("WEAPON_DAGGER");
		case 46:
			return joaat("WEAPON_HATCHET");
		case 47:
			return joaat("WEAPON_COMBATPISTOL");
		case 48:
			return joaat("WEAPON_PISTOL50");
		case 49:
			return joaat("WEAPON_SNSPISTOL_MK2");
		case 50:
			return joaat("WEAPON_HEAVYPISTOL");
		case 51:
			return joaat("WEAPON_CERAMICPISTOL");
		case 52:
			return joaat("WEAPON_REVOLVER");
		case 53:
			return joaat("WEAPON_REVOLVER_MK2");
		case 54:
			return joaat("WEAPON_DOUBLEACTION");
		case 55:
			return joaat("WEAPON_APPISTOL");
		case 56:
			return joaat("WEAPON_STUNGUN_MP");
		case 57:
			return joaat("WEAPON_FLAREGUN");
		case 58:
			return joaat("WEAPON_RAYPISTOL");
		case 59:
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
		case 60:
			return joaat("WEAPON_AUTOSHOTGUN");
		case 61:
			return joaat("WEAPON_CARBINERIFLE_MK2");
		case 62:
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
		case 63:
			return joaat("WEAPON_SMG_MK2");
		case 64:
			return joaat("WEAPON_COMBATMG_MK2");
		case 65:
			return joaat("WEAPON_GUSENBERG");
		case 66:
			return joaat("WEAPON_RAYCARBINE");
		case 67:
			return joaat("WEAPON_FIREWORK");
		case 68:
			return joaat("WEAPON_HOMINGLAUNCHER");
		case 69:
			return joaat("WEAPON_COMPACTLAUNCHER");
		case 70:
			return joaat("WEAPON_RAYMINIGUN");
		case 71:
			return joaat("WEAPON_HEAVYSNIPER_MK2");
		case 72:
			return joaat("WEAPON_MARKSMANRIFLE");
		case 73:
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
		case 74:
			return joaat("WEAPON_STONE_HATCHET");
		case 75:
			return joaat("WEAPON_POOLCUE");
		case 76:
			return joaat("WEAPON_BATTLEAXE");
		case 77:
			return joaat("WEAPON_NIGHTSTICK");
		case 78:
			return joaat("WEAPON_SWITCHBLADE");
		case 79:
			return joaat("WEAPON_FLASHLIGHT");
		case 80:
			return joaat("WEAPON_KNUCKLE");
		case 81:
			return joaat("WEAPON_GOLFCLUB");
		default:
	}
	return 0;
}

void func_828(var uParam0, var uParam1)//Position - 0x1755F9
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &Var0, &Var1);
		Var2 = { Var1 - Var0 };
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), *uParam0 + Vector((Var2.f_2 / 2f), 0f, 0f), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), *uParam1);
	}
}

float func_829(struct<3> Param0, float fParam1)//Position - 0x1759EF
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	fVar0 = -99999f;
	iVar1 = 0;
	while (iVar1 <= (Global_4980736.f_36355 - 1))
	{
		MISC::GET_MODEL_DIMENSIONS(Global_4980736.f_36356[iVar1 /*134*/].f_7, &Var2, &Var3);
		fVar4 = SYSTEM::VDIST(Var3, Var2);
		fVar4 = (fVar4 + 10f);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_4980736.f_36356[iVar1 /*134*/], Param0, false) < (fVar4 + 5f))
		{
			if (Global_4980736.f_36356[iVar1 /*134*/].f_2 >= fVar0)
			{
				fVar0 = Global_4980736.f_36356[iVar1 /*134*/].f_2;
				*fParam1 = fVar4;
			}
		}
		iVar1++;
	}
	return fVar0;
}

void func_830(int* iParam0)//Position - 0x175A97
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_240[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_240[iVar0]));
		}
		iVar0++;
	}
	iParam0->f_477 = 0;
}

int func_831()//Position - 0x175AED
{
	return Global_1837337.f_426;
}

void func_832(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17)//Position - 0x17606F
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	if (*uParam0 < 100)
	{
		iVar2 = PLAYER::PLAYER_PED_ID();
		Var3 = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
		}
		if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param2, &uVar0, &uVar1) || SYSTEM::VDIST2(Var3, Param2) < 200f)
		{
			if (!bParam17)
			{
				GRAPHICS::DRAW_MARKER(iParam1, Param2, Param3, Param4, Param5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, iParam12, bParam13, sParam14, sParam15, bParam16);
				*uParam0++;
			}
			else
			{
				GRAPHICS::DRAW_MARKER_EX(iParam1, Param2, Param3, Param4, Param5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, iParam12, bParam13, sParam14, sParam15, bParam16, true, bParam17);
				*uParam0++;
			}
		}
	}
}

char* func_833(int iParam0)//Position - 0x179C06
{
	switch (iParam0)
	{
		case 0:
			return "FMMC_RANDOFF";
		case 1:
			return "FMMC_RANDLOW";
		case 2:
			return "FMMC_RANDMED";
		case 3:
			return "FMMC_RANDBIG";
		default:
	}
	return "";
}

void func_834(var uParam0)//Position - 0x17C6D1
{
	struct<183> Var0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0.f_8 = -1;
	Var0.f_10 = 1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = 1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_33 = 4;
	Var0.f_38 = 1073741824;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46.f_5 = 255;
	Var0.f_46.f_6 = 1065353216;
	Var0.f_46.f_12 = -1;
	Var0.f_46.f_13 = 4;
	Var0.f_46.f_30 = -1;
	Var0.f_46.f_31 = -1;
	Var0.f_46.f_34 = 75;
	Var0.f_46.f_34.f_1 = 1120403456;
	Var0.f_46.f_34.f_2 = 1148846080;
	Var0.f_83.f_2.f_2 = 1065353216;
	Var0.f_83.f_2.f_3 = 1077936128;
	Var0.f_83.f_2.f_4 = 1082130432;
	Var0.f_83.f_2.f_5 = 1077936128;
	Var0.f_83.f_2.f_6 = -1;
	Var0.f_83.f_2.f_7 = -1;
	Var0.f_83.f_2.f_8 = -1;
	Var0.f_83.f_11.f_2 = 1065353216;
	Var0.f_83.f_11.f_3 = 1082130432;
	Var0.f_83.f_11.f_8 = 1084227584;
	Var0.f_83.f_11.f_10 = 1;
	Var0.f_83.f_11.f_10.f_1.f_1 = 70;
	Var0.f_83.f_11.f_10.f_1.f_2 = 3000;
	Var0.f_83.f_11.f_10.f_1.f_3 = 250;
	Var0.f_83.f_11.f_10.f_1.f_4 = 1;
	Var0.f_110 = 3;
	Var0.f_114 = -1;
	Var0.f_114.f_1 = -1;
	Var0.f_114.f_2 = -1;
	Var0.f_114.f_3 = -1;
	Var0.f_121 = 20;
	Var0.f_142 = -1;
	Var0.f_151.f_2 = 1;
	Var0.f_154 = 20;
	Var0.f_176 = 1;
	Var0.f_178 = -1;
	Var0.f_178.f_1 = -1;
	Var0.f_178.f_2 = 1;
	iVar4 = -1;
	iVar2 = (Global_4980736.f_63310 - 1);
	while (iVar2 >= 0)
	{
		if (Global_4980736.f_63312[iVar2 /*183*/].f_8 != -1)
		{
			iVar4++;
			if (iVar2 < (Global_4980736.f_63310 - iVar4 + 1))
			{
				iVar3 = iVar2;
				while (iVar3 <= (Global_4980736.f_63310 - iVar4))
				{
					Var0 = { Global_4980736.f_63312[iVar2 + 1 /*183*/] };
					Global_4980736.f_63312[iVar2 + 1 /*183*/] = { Global_4980736.f_63312[iVar2 /*183*/] };
					Global_4980736.f_63312[iVar2 /*183*/] = { Var0 };
					uVar1 = (*uParam0)[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = (*uParam0)[iVar2];
					(*uParam0)[iVar2] = uVar1;
					iVar3++;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
}

int func_835(int iParam0)//Position - 0x17C962
{
	if (((((iParam0 == 39 || iParam0 == 40) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43) || iParam0 == 44)
	{
		return 1;
	}
	return 0;
}

int func_836(int iParam0)//Position - 0x17C9AE
{
	if ((((((iParam0 == 45 || iParam0 == 46) || iParam0 == 47) || iParam0 == 686) || iParam0 == 687) || iParam0 == 688) || iParam0 == 48)
	{
		return 1;
	}
	return 0;
}

int func_837(int iParam0)//Position - 0x17CA08
{
	if ((((((iParam0 == joaat("stt_prop_stunt_bowling_pin") || iParam0 == joaat("stt_prop_stunt_bowling_ball")) || iParam0 == joaat("stt_prop_stunt_soccer_sball")) || iParam0 == joaat("stt_prop_stunt_soccer_ball")) || iParam0 == joaat("stt_prop_stunt_soccer_lball")) || iParam0 == joaat("ar_prop_ar_ammu_sign")) || iParam0 == joaat("sr_mp_spec_races_ammu_sign"))
	{
		return 1;
	}
	return 0;
}

void func_838(int* iParam0, int iParam1)//Position - 0x17CA74
{
	switch (iParam1)
	{
		case 4:
		case 9:
			iParam0->f_6 = 1.2f;
			break;
		case 3:
			iParam0->f_6 = 0.7f;
			MISC::SET_BIT(iParam0, 0);
			break;
		case 1:
			iParam0->f_6 = 0.8f;
			break;
		case 7:
			iParam0->f_6 = 1.2f;
			break;
		case 5:
			MISC::SET_BIT(iParam0, 8);
			break;
	}
}

int func_839(int* iParam0)//Position - 0x17CAE9
{
	switch (iParam0->f_550)
	{
		case 4:
			return BitTest(iParam0->f_1026, 4);
			break;
		case 5:
			return BitTest(iParam0->f_1028, 8);
			break;
		case 3:
			return BitTest(iParam0->f_1005, 15);
			break;
		case 1:
			return BitTest(iParam0->f_1021, 2);
			break;
		case 0:
			return BitTest(iParam0->f_987, 5);
			break;
		case 76:
			return BitTest(Global_4980736.f_34371.f_46, 1);
			break;
		case 2:
			return BitTest(iParam0->f_912, 9);
			break;
	}
	return 0;
}

void func_840(int* iParam0, var uParam1)//Position - 0x17CD8B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iParam0->f_5420.f_13[iVar0 /*4*/].f_1 = iParam0->f_2533[iVar0];
		iParam0->f_5420.f_13[iVar0 /*4*/].f_2 = iParam0->f_2538[iVar0];
		iVar0++;
	}
	iParam0->f_5420.f_7 = iParam0->f_1253;
	*uParam1 = { iParam0->f_5420 };
}

void func_841(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x17CDEA
{
	int iVar0;
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/] = { Param0 };
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_4 = { Param1 };
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_3 = uParam2;
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_15 = uParam3;
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_127 = 3;
	Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_128 = uParam4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_16[iVar0] = 0;
		Global_4980736.f_5742[Global_4980736.f_5739 /*442*/].f_21[iVar0] = 99999;
		iVar0++;
	}
	Global_4980736.f_5739++;
}

void func_842(bool bParam0, struct<3> Param1)//Position - 0x17CECA
{
	bool bVar0;
	if (!__LIB_1__::func_19())
	{
		bVar0 = STREAMING::HAS_PTFX_ASSET_LOADED();
	}
	else
	{
		bVar0 = STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_mp_creator");
		if (bVar0)
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_creator");
		}
	}
	if (bVar0 && !Global_4718592.f_117078)
	{
		if (bParam0)
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mp_splash", Param1, 0f, 0f, 0f, 1f, false, false, false);
		}
		else
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mp_dust_cloud", Param1, 0f, 0f, 0f, 1f, false, false, false);
		}
	}
}

int func_843(int* iParam0)//Position - 0x17D073
{
	switch (iParam0->f_550)
	{
		case 4:
			return BitTest(iParam0->f_1026, 3);
			break;
		case 5:
			return BitTest(iParam0->f_1028, 7);
			break;
		case 3:
			return BitTest(iParam0->f_1005, 14);
			break;
		case 1:
			return BitTest(iParam0->f_1021, 1);
			break;
		case 0:
			return BitTest(iParam0->f_987, 4);
			break;
		case 76:
			return BitTest(Global_4980736.f_34371.f_46, 0);
			break;
		case 16:
			return BitTest(iParam0->f_1012, 21);
			break;
		case 2:
			return BitTest(iParam0->f_912, 8);
			break;
	}
	return 0;
}

void func_844(int iParam0)//Position - 0x17D127
{
	__LIB_0__::func_495(&(iParam0->f_818), 0, 0);
}

void func_845(bool bParam0, int* iParam1)//Position - 0x17D13A
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	Var1 = 4;
	Var1.f_1 = 7;
	Var1.f_1.f_8 = 7;
	Var1.f_1.f_8.f_8 = 7;
	Var1.f_1.f_8.f_8.f_8 = 7;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var1[iVar0 /*8*/][0] = -1;
		Var1[iVar0 /*8*/][1] = -1;
		Var1[iVar0 /*8*/][2] = 0;
		Var1[iVar0 /*8*/][3] = 0;
		Var1[iVar0 /*8*/][4] = 0;
		Var1[iVar0 /*8*/][5] = -1;
		Var1[iVar0 /*8*/][6] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iParam1->f_1370[iVar0 /*6*/] != -1)
		{
			Var1[iVar2 /*8*/][0] = iVar0;
			Var1[iVar2 /*8*/][1] = iParam1->f_1370[iVar0 /*6*/];
			Var1[iVar2 /*8*/][2] = iParam1->f_1370[iVar0 /*6*/].f_1;
			Var1[iVar2 /*8*/][3] = iParam1->f_1370[iVar0 /*6*/].f_2;
			Var1[iVar2 /*8*/][4] = iParam1->f_1370[iVar0 /*6*/].f_3;
			Var1[iVar2 /*8*/][5] = iParam1->f_1370[iVar0 /*6*/].f_4;
			Var1[iVar2 /*8*/][6] = iParam1->f_1370[iVar0 /*6*/].f_5;
			iVar2++;
		}
		iVar0++;
	}
	switch (iParam1->f_550)
	{
		case 0:
			Global_4980736.f_94390[bParam0 /*1004*/].f_86 = Var1[0 /*8*/][0];
			Global_4980736.f_94390[bParam0 /*1004*/].f_85 = Var1[0 /*8*/][1];
			Global_4980736.f_94390[bParam0 /*1004*/].f_87 = Var1[0 /*8*/][2];
			Global_4980736.f_94390[bParam0 /*1004*/].f_136 = Var1[0 /*8*/][3];
			Global_4980736.f_94390[bParam0 /*1004*/].f_137 = Var1[0 /*8*/][4];
			Global_4980736.f_94390[bParam0 /*1004*/].f_138 = Var1[0 /*8*/][5];
			Global_4980736.f_94390[bParam0 /*1004*/].f_139 = Var1[0 /*8*/][6];
			Global_4980736.f_94390[bParam0 /*1004*/].f_488 = Var1[1 /*8*/][0];
			Global_4980736.f_94390[bParam0 /*1004*/].f_491 = Var1[1 /*8*/][1];
			Global_4980736.f_94390[bParam0 /*1004*/].f_494 = Var1[1 /*8*/][2];
			Global_4980736.f_94390[bParam0 /*1004*/].f_497 = Var1[1 /*8*/][3];
			Global_4980736.f_94390[bParam0 /*1004*/].f_500 = Var1[1 /*8*/][4];
			Global_4980736.f_94390[bParam0 /*1004*/].f_503 = Var1[1 /*8*/][5];
			Global_4980736.f_94390[bParam0 /*1004*/].f_506 = Var1[1 /*8*/][6];
			Global_4980736.f_94390[bParam0 /*1004*/].f_489 = Var1[2 /*8*/][0];
			Global_4980736.f_94390[bParam0 /*1004*/].f_492 = Var1[2 /*8*/][1];
			Global_4980736.f_94390[bParam0 /*1004*/].f_495 = Var1[2 /*8*/][2];
			Global_4980736.f_94390[bParam0 /*1004*/].f_498 = Var1[2 /*8*/][3];
			Global_4980736.f_94390[bParam0 /*1004*/].f_501 = Var1[2 /*8*/][4];
			Global_4980736.f_94390[bParam0 /*1004*/].f_504 = Var1[2 /*8*/][5];
			Global_4980736.f_94390[bParam0 /*1004*/].f_507 = Var1[2 /*8*/][6];
			Global_4980736.f_94390[bParam0 /*1004*/].f_490 = Var1[3 /*8*/][0];
			Global_4980736.f_94390[bParam0 /*1004*/].f_493 = Var1[3 /*8*/][1];
			Global_4980736.f_94390[bParam0 /*1004*/].f_496 = Var1[3 /*8*/][2];
			Global_4980736.f_94390[bParam0 /*1004*/].f_499 = Var1[3 /*8*/][3];
			Global_4980736.f_94390[bParam0 /*1004*/].f_502 = Var1[3 /*8*/][4];
			Global_4980736.f_94390[bParam0 /*1004*/].f_505 = Var1[3 /*8*/][5];
			Global_4980736.f_94390[bParam0 /*1004*/].f_508 = Var1[3 /*8*/][6];
			break;
		case 1:
			Global_4980736.f_78578[bParam0 /*450*/].f_56 = Var1[0 /*8*/][0];
			Global_4980736.f_78578[bParam0 /*450*/].f_55 = Var1[0 /*8*/][1];
			Global_4980736.f_78578[bParam0 /*450*/].f_57 = Var1[0 /*8*/][2];
			Global_4980736.f_78578[bParam0 /*450*/].f_58 = Var1[0 /*8*/][4];
			Global_4980736.f_78578[bParam0 /*450*/].f_59 = Var1[0 /*8*/][5];
			Global_4980736.f_78578[bParam0 /*450*/].f_60 = Var1[0 /*8*/][6];
			Global_4980736.f_78578[bParam0 /*450*/].f_185 = Var1[1 /*8*/][0];
			Global_4980736.f_78578[bParam0 /*450*/].f_188 = Var1[1 /*8*/][1];
			Global_4980736.f_78578[bParam0 /*450*/].f_191 = Var1[1 /*8*/][2];
			Global_4980736.f_78578[bParam0 /*450*/].f_194 = Var1[1 /*8*/][4];
			Global_4980736.f_78578[bParam0 /*450*/].f_195 = Var1[1 /*8*/][5];
			Global_4980736.f_78578[bParam0 /*450*/].f_196 = Var1[1 /*8*/][6];
			Global_4980736.f_78578[bParam0 /*450*/].f_186 = Var1[2 /*8*/][0];
			Global_4980736.f_78578[bParam0 /*450*/].f_189 = Var1[2 /*8*/][1];
			Global_4980736.f_78578[bParam0 /*450*/].f_192 = Var1[2 /*8*/][2];
			Global_4980736.f_78578[bParam0 /*450*/].f_197 = Var1[2 /*8*/][4];
			Global_4980736.f_78578[bParam0 /*450*/].f_198 = Var1[2 /*8*/][5];
			Global_4980736.f_78578[bParam0 /*450*/].f_199 = Var1[2 /*8*/][6];
			Global_4980736.f_78578[bParam0 /*450*/].f_187 = Var1[3 /*8*/][0];
			Global_4980736.f_78578[bParam0 /*450*/].f_190 = Var1[3 /*8*/][1];
			Global_4980736.f_78578[bParam0 /*450*/].f_193 = Var1[3 /*8*/][2];
			Global_4980736.f_78578[bParam0 /*450*/].f_200 = Var1[3 /*8*/][4];
			Global_4980736.f_78578[bParam0 /*450*/].f_201 = Var1[3 /*8*/][5];
			Global_4980736.f_78578[bParam0 /*450*/].f_202 = Var1[3 /*8*/][6];
			break;
		case 3:
			Global_4980736.f_5742[bParam0 /*442*/].f_155 = Var1[0 /*8*/][0];
			Global_4980736.f_5742[bParam0 /*442*/].f_163 = Var1[0 /*8*/][1];
			Global_4980736.f_5742[bParam0 /*442*/].f_167 = Var1[0 /*8*/][2];
			Global_4980736.f_5742[bParam0 /*442*/].f_159 = Var1[0 /*8*/][3];
			Global_4980736.f_5742[bParam0 /*442*/].f_171 = Var1[0 /*8*/][4];
			Global_4980736.f_5742[bParam0 /*442*/].f_175 = Var1[0 /*8*/][5];
			Global_4980736.f_5742[bParam0 /*442*/].f_176 = Var1[0 /*8*/][6];
			Global_4980736.f_5742[bParam0 /*442*/].f_156 = Var1[1 /*8*/][0];
			Global_4980736.f_5742[bParam0 /*442*/].f_164 = Var1[1 /*8*/][1];
			Global_4980736.f_5742[bParam0 /*442*/].f_168 = Var1[1 /*8*/][2];
			Global_4980736.f_5742[bParam0 /*442*/].f_160 = Var1[1 /*8*/][3];
			Global_4980736.f_5742[bParam0 /*442*/].f_172 = Var1[1 /*8*/][4];
			Global_4980736.f_5742[bParam0 /*442*/].f_177 = Var1[1 /*8*/][5];
			Global_4980736.f_5742[bParam0 /*442*/].f_178 = Var1[1 /*8*/][6];
			Global_4980736.f_5742[bParam0 /*442*/].f_157 = Var1[2 /*8*/][0];
			Global_4980736.f_5742[bParam0 /*442*/].f_165 = Var1[2 /*8*/][1];
			Global_4980736.f_5742[bParam0 /*442*/].f_169 = Var1[2 /*8*/][2];
			Global_4980736.f_5742[bParam0 /*442*/].f_161 = Var1[2 /*8*/][3];
			Global_4980736.f_5742[bParam0 /*442*/].f_173 = Var1[2 /*8*/][4];
			Global_4980736.f_5742[bParam0 /*442*/].f_179 = Var1[2 /*8*/][5];
			Global_4980736.f_5742[bParam0 /*442*/].f_180 = Var1[2 /*8*/][6];
			Global_4980736.f_5742[bParam0 /*442*/].f_158 = Var1[3 /*8*/][0];
			Global_4980736.f_5742[bParam0 /*442*/].f_166 = Var1[3 /*8*/][1];
			Global_4980736.f_5742[bParam0 /*442*/].f_170 = Var1[3 /*8*/][2];
			Global_4980736.f_5742[bParam0 /*442*/].f_162 = Var1[3 /*8*/][3];
			Global_4980736.f_5742[bParam0 /*442*/].f_174 = Var1[3 /*8*/][4];
			Global_4980736.f_5742[bParam0 /*442*/].f_181 = Var1[3 /*8*/][5];
			Global_4980736.f_5742[bParam0 /*442*/].f_182 = Var1[3 /*8*/][6];
			break;
		case 76:
			Global_4980736.f_34371.f_82 = Var1[0 /*8*/][0];
			Global_4980736.f_34371.f_83 = Var1[0 /*8*/][1];
			Global_4980736.f_34371.f_84 = Var1[0 /*8*/][2];
			Global_4980736.f_34371.f_85 = iParam1->f_2798;
			Global_4980736.f_34371.f_86 = iParam1->f_2797;
			break;
		case 91:
			Global_4980736.f_94191.f_80 = Var1[0 /*8*/][0];
			Global_4980736.f_94191.f_81 = Var1[0 /*8*/][1];
			Global_4980736.f_94191.f_79 = Var1[0 /*8*/][2];
			Global_4980736.f_94191.f_82 = iParam1->f_2798;
			Global_4980736.f_94191.f_83 = iParam1->f_2797;
			break;
		case 4:
			Global_4980736.f_36356[bParam0 /*134*/].f_9 = Var1[0 /*8*/][0];
			Global_4980736.f_36356[bParam0 /*134*/].f_8 = Var1[0 /*8*/][1];
			Global_4980736.f_36356[bParam0 /*134*/].f_10 = Var1[0 /*8*/][2];
			Global_4980736.f_36356[bParam0 /*134*/].f_11 = Var1[0 /*8*/][3];
			Global_4980736.f_36356[bParam0 /*134*/].f_34 = Var1[0 /*8*/][4];
			Global_4980736.f_36356[bParam0 /*134*/].f_43 = Var1[1 /*8*/][0];
			Global_4980736.f_36356[bParam0 /*134*/].f_46 = Var1[1 /*8*/][1];
			Global_4980736.f_36356[bParam0 /*134*/].f_49 = Var1[1 /*8*/][2];
			Global_4980736.f_36356[bParam0 /*134*/].f_52 = Var1[1 /*8*/][3];
			Global_4980736.f_36356[bParam0 /*134*/].f_35 = Var1[1 /*8*/][4];
			Global_4980736.f_36356[bParam0 /*134*/].f_44 = Var1[2 /*8*/][0];
			Global_4980736.f_36356[bParam0 /*134*/].f_47 = Var1[2 /*8*/][1];
			Global_4980736.f_36356[bParam0 /*134*/].f_50 = Var1[2 /*8*/][2];
			Global_4980736.f_36356[bParam0 /*134*/].f_53 = Var1[2 /*8*/][3];
			Global_4980736.f_36356[bParam0 /*134*/].f_36 = Var1[2 /*8*/][4];
			Global_4980736.f_36356[bParam0 /*134*/].f_45 = Var1[3 /*8*/][0];
			Global_4980736.f_36356[bParam0 /*134*/].f_48 = Var1[3 /*8*/][1];
			Global_4980736.f_36356[bParam0 /*134*/].f_51 = Var1[3 /*8*/][2];
			Global_4980736.f_36356[bParam0 /*134*/].f_54 = Var1[3 /*8*/][3];
			Global_4980736.f_36356[bParam0 /*134*/].f_37 = Var1[3 /*8*/][4];
			break;
		case 5:
			Global_4980736.f_63312[bParam0 /*183*/].f_13 = Var1[0 /*8*/][0];
			Global_4980736.f_63312[bParam0 /*183*/].f_12 = Var1[0 /*8*/][1];
			Global_4980736.f_63312[bParam0 /*183*/].f_14 = Var1[0 /*8*/][2];
			Global_4980736.f_63312[bParam0 /*183*/].f_15 = Var1[0 /*8*/][3];
			Global_4980736.f_63312[bParam0 /*183*/].f_20 = Var1[1 /*8*/][0];
			Global_4980736.f_63312[bParam0 /*183*/].f_23 = Var1[1 /*8*/][1];
			Global_4980736.f_63312[bParam0 /*183*/].f_26 = Var1[1 /*8*/][2];
			Global_4980736.f_63312[bParam0 /*183*/].f_29 = Var1[1 /*8*/][3];
			Global_4980736.f_63312[bParam0 /*183*/].f_21 = Var1[2 /*8*/][0];
			Global_4980736.f_63312[bParam0 /*183*/].f_24 = Var1[2 /*8*/][1];
			Global_4980736.f_63312[bParam0 /*183*/].f_27 = Var1[2 /*8*/][2];
			Global_4980736.f_63312[bParam0 /*183*/].f_30 = Var1[2 /*8*/][3];
			Global_4980736.f_63312[bParam0 /*183*/].f_22 = Var1[3 /*8*/][0];
			Global_4980736.f_63312[bParam0 /*183*/].f_25 = Var1[3 /*8*/][1];
			Global_4980736.f_63312[bParam0 /*183*/].f_28 = Var1[3 /*8*/][2];
			Global_4980736.f_63312[bParam0 /*183*/].f_31 = Var1[3 /*8*/][3];
			break;
		case 2:
			Global_4980736.f_69361[bParam0 /*151*/].f_28 = Var1[0 /*8*/][0];
			Global_4980736.f_69361[bParam0 /*151*/].f_27 = Var1[0 /*8*/][1];
			Global_4980736.f_69361[bParam0 /*151*/].f_29 = Var1[0 /*8*/][2];
			Global_4980736.f_69361[bParam0 /*151*/].f_33 = Var1[1 /*8*/][0];
			Global_4980736.f_69361[bParam0 /*151*/].f_36 = Var1[1 /*8*/][1];
			Global_4980736.f_69361[bParam0 /*151*/].f_39 = Var1[1 /*8*/][2];
			Global_4980736.f_69361[bParam0 /*151*/].f_34 = Var1[2 /*8*/][0];
			Global_4980736.f_69361[bParam0 /*151*/].f_37 = Var1[2 /*8*/][1];
			Global_4980736.f_69361[bParam0 /*151*/].f_40 = Var1[2 /*8*/][2];
			Global_4980736.f_69361[bParam0 /*151*/].f_35 = Var1[3 /*8*/][0];
			Global_4980736.f_69361[bParam0 /*151*/].f_38 = Var1[3 /*8*/][1];
			Global_4980736.f_69361[bParam0 /*151*/].f_41 = Var1[3 /*8*/][2];
			break;
	}
}

float func_846(float fParam0)//Position - 0x17E02E
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 <= -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_847(int iParam0)//Position - 0x17E38F
{
	if (((((((((((((((((((((((((((((((((((iParam0 == joaat("tr_prop_tr_crates_sam_01a") || iParam0 == joaat("prop_mb_cargo_02a")) || iParam0 == joaat("prop_air_cargo_04a")) || iParam0 == joaat("vw_prop_vw_elecbox_01a")) || iParam0 == joaat("gr_prop_gr_bench_02b")) || iParam0 == joaat("ex_prop_crate_biohazard_bc")) || iParam0 == joaat("ex_prop_crate_biohazard_sc")) || iParam0 == joaat("ex_prop_crate_shide")) || iParam0 == joaat("ex_prop_crate_ammo_sc")) || iParam0 == joaat("ex_prop_crate_art_bc")) || iParam0 == joaat("ex_prop_crate_art_sc")) || iParam0 == joaat("ex_prop_crate_art_02_bc")) || iParam0 == joaat("ex_prop_crate_art_02_sc")) || iParam0 == joaat("p_rcss_folded")) || iParam0 == joaat("prop_power_cell")) || iParam0 == joaat("prop_biotech_store")) || iParam0 == joaat("prop_alien_egg_01")) || iParam0 == joaat("ex_prop_crate_expl_bc")) || iParam0 == joaat("gr_prop_gr_crates_pistols_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_02a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_03a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_04a")) || iParam0 == joaat("gr_prop_gr_crates_sam_01a")) || iParam0 == joaat("gr_prop_gr_crates_weapon_mix_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_02a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_03a")) || iParam0 == joaat("xm_prop_x17_labvats")) || iParam0 == joaat("sf_prop_sf_speaker_l_01a")) || iParam0 == joaat("sf_prop_sf_speaker_stand_01a")) || iParam0 == joaat("prop_ld_keypad_01")) || iParam0 == joaat("sf_prop_sf_fncsec_01a")) || iParam0 == joaat("sf_prop_sf_swift2_01a")) || iParam0 == joaat("hei_prop_hei_keypad_01")) || iParam0 == joaat("hei_prop_hei_keypad_02"))
	{
		return 1;
	}
	return 0;
}

int func_848(int* iParam0, var uParam1, var uParam2)//Position - 0x17E591
{
	if (*uParam2 == -1)
	{
		return 0;
	}
	if (iParam0->f_551 > -1 && iParam0->f_550 == 91)
	{
		return uParam1->f_1;
	}
	return uParam1->f_3[*uParam2];
}

char* func_849()//Position - 0x1808AD
{
	if (__LIB_9__::func_794())
	{
		return "PLACE_PICKUP";
	}
	return "PLACE_WEAPON";
}

bool func_850(int* iParam0)//Position - 0x1808C9
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || !iParam0->f_2742)
	{
		return PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	}
	return BitTest(iParam0->f_2739, 1);
}

int func_851()//Position - 0x180933
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 252;
	}
	return 207;
}

int func_852()//Position - 0x18094A
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 253;
	}
	return 208;
}

int func_853(var uParam0)//Position - 0x180EAD
{
	if (uParam0->f_3389 == 1 && uParam0->f_550 == 71)
	{
		return 1;
	}
	return 0;
}

int func_854(var uParam0)//Position - 0x180ED1
{
	if (uParam0->f_3389 == 0 && uParam0->f_550 == 71)
	{
		return 1;
	}
	return 0;
}

int func_855(int* iParam0)//Position - 0x180EF5
{
	if (iParam0->f_3389 == 3)
	{
		return 1;
	}
	if (iParam0->f_3468 > -1)
	{
		if (Global_4718592.f_172946.f_2[iParam0->f_3468 /*20*/] == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_856(int* iParam0)//Position - 0x180F2E
{
	if (iParam0->f_3389 == 2)
	{
		return 1;
	}
	if (iParam0->f_3468 > -1)
	{
		if (Global_4718592.f_172946.f_2[iParam0->f_3468 /*20*/] == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_857(int* iParam0)//Position - 0x180F67
{
	if (((iParam0->f_271 == 40 || iParam0->f_271 == 706) || iParam0->f_271 == 42) || iParam0->f_271 == 43)
	{
		return 1;
	}
	return 0;
}

int func_858()//Position - 0x181064
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 204;
	}
	return 217;
}

int func_859(var uParam0)//Position - 0x1810C1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_727[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_727[iVar0]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

void func_860(int iParam0, var uParam1)//Position - 0x1811C6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (*uParam1 < 8)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
		Var2 = { Var1 - Var0 };
		Var2.f_0 = (Var2.f_0 / 2f);
		Var2.f_1 = (Var2.f_1 / 2f);
		*(uParam1[0 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -Var2.f_0, -Var2.f_1, -Var2.f_2) };
		*(uParam1[1 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -Var2.f_0, Var2.f_1, -Var2.f_2) };
		*(uParam1[2 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var2.f_1, -Var2.f_2) };
		*(uParam1[3 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, -Var2.f_1, -Var2.f_2) };
		*(uParam1[4 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -Var2.f_0, -Var2.f_1, Var2.f_2) };
		*(uParam1[5 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -Var2.f_0, Var2.f_1, Var2.f_2) };
		*(uParam1[6 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var2.f_1, Var2.f_2) };
		*(uParam1[7 /*3*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, -Var2.f_1, Var2.f_2) };
	}
}

int func_861(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x18144F
{
	if (Param0.f_0 > Param2.f_0)
	{
		return 0;
	}
	else if (Param0.f_0 < Param1.f_0)
	{
		return 0;
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		return 0;
	}
	else if (Param0.f_1 < Param1.f_1)
	{
		return 0;
	}
	if (bParam3)
	{
		if (Param0.f_2 > Param2.f_2)
		{
			return 0;
		}
		else if (Param0.f_2 < Param1.f_2)
		{
			return 0;
		}
	}
	return 1;
}

float func_862(float fParam0)//Position - 0x181D54
{
	if (fParam0 <= 10f)
	{
		return 150f;
	}
	else if (fParam0 <= 30f)
	{
		return 250f;
	}
	else if (fParam0 > 30f && fParam0 <= 100f)
	{
		return 450f;
	}
	return 600f;
}

bool func_863(int iParam0)//Position - 0x182090
{
	return ((((iParam0 == joaat("sum_prop_barrier_ac_bend_05d") || iParam0 == joaat("sum_prop_barrier_ac_bend_15d")) || iParam0 == joaat("sum_prop_barrier_ac_bend_30d")) || iParam0 == joaat("sum_prop_barrier_ac_bend_45d")) || iParam0 == joaat("sum_prop_barrier_ac_bend_90d"));
}

Vector3 func_864(int iParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x182306
{
	float fVar0;
	struct<3> Var1;
	ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iParam0, Param2, 2, true);
	if (bParam3 == 2)
	{
		fVar0 = -1f;
	}
	else
	{
		fVar0 = 1f;
	}
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, fVar0, 0f, 0f) };
	return __LIB_0__::func_79(Var1 - Param1);
}

void func_865(int* iParam0, int* iParam1)//Position - 0x1826A5
{
	iParam0->f_696 = -1;
	iParam0->f_697 = -1;
	iParam0->f_698 = -1;
	iParam1->f_3078 = 0;
	iParam0->f_704 = 1;
	iParam0->f_706 = { 0f, 0f, 0f };
	iParam0->f_709 = { 0f, 0f, 0f };
	iParam0->f_701 = { 0f, 0f, 0f };
	iParam0->f_705 = 0;
	iParam1->f_3076 = 0;
	iParam0->f_724 = { 0f, 0f, 0f };
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_274))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_274));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_272))
	{
		ENTITY::DETACH_ENTITY(iParam0->f_272, false, true);
	}
}

int func_866(int iParam0)//Position - 0x18272B
{
	if (iParam0 == joaat("sr_mp_spec_races_xero_sign") || iParam0 == joaat("sr_mp_spec_races_ron_sign"))
	{
		return 1;
	}
	return 0;
}

bool func_867(int iParam0)//Position - 0x18278E
{
	return iParam0 == joaat("stt_prop_track_slowdown");
}

bool func_868(int iParam0)//Position - 0x18279E
{
	return iParam0 == joaat("stt_prop_track_speedup");
}

bool func_869(int iParam0)//Position - 0x1827AE
{
	return (iParam0 == joaat("stt_prop_track_slowdown_t1") || iParam0 == joaat("stt_prop_track_slowdown_t2"));
}

bool func_870(int iParam0)//Position - 0x1827CC
{
	return ((iParam0 == joaat("stt_prop_track_speedup_t1") || iParam0 == joaat("stt_prop_track_speedup_t2")) || iParam0 == joaat("stt_prop_stunt_tube_speed"));
}

bool func_871(int iParam0)//Position - 0x1827F8
{
	return iParam0 == joaat("stt_prop_stunt_tube_speed");
}

int func_872(int iParam0)//Position - 0x182808
{
	if (((((iParam0 == joaat("prop_flare_01") || iParam0 == joaat("ind_prop_firework_01")) || iParam0 == joaat("ind_prop_firework_03")) || iParam0 == joaat("stt_prop_hoop_constraction_01a")) || iParam0 == joaat("stt_prop_hoop_small_01")) || iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return 1;
	}
	return 0;
}

int func_873(int iParam0)//Position - 0x182866
{
	if (((iParam0 == joaat("gr_prop_gr_target_small_02a") || iParam0 == joaat("gr_prop_gr_target_small_03a")) || iParam0 == joaat("gr_prop_gr_target_small_06a")) || iParam0 == joaat("gr_prop_gr_target_small_07a"))
	{
		return 1;
	}
	return 0;
}

int func_874(var uParam0, struct<3> Param1, float fParam2)//Position - 0x1828A8
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_94384)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_165[iVar0]))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_165[iVar0], true) };
			fVar2 = __LIB_1__::func_420(Var1, Param1);
			if (fVar2 < fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_875(var uParam0, struct<3> Param1, float fParam2)//Position - 0x182906
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_78574)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1[iVar0], true) };
		fVar2 = __LIB_1__::func_420(Var1, Param1);
		if (fVar2 < fParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_876(struct<3> Param0, int iParam1)//Position - 0x182955
{
	if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
	{
		return 0;
	}
	else if (INTERIOR::GET_INTERIOR_AT_COORDS(Param0) != iParam1)
	{
		return 0;
	}
	return 1;
}

bool func_877(struct<2> Param0, var uParam1, float fParam2, struct<2> Param3, Vector3 vParam4, struct<2> Param5, var uParam6, float fParam7)//Position - 0x1829DE
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	fVar0 = (((SYSTEM::COS(fParam7) * (Param0.f_0 - Param3.f_0)) - (SYSTEM::SIN(fParam7) * (Param0.f_1 - Param3.f_1))) + Param3.f_0);
	fVar1 = (((SYSTEM::SIN(fParam7) * (Param0.f_0 - Param3.f_0)) + (SYSTEM::COS(fParam7) * (Param0.f_1 - Param3.f_1))) + Param3.f_1);
	fVar2 = (Param3.f_0 - (Param5.f_0 / 2f));
	fVar3 = (Param3.f_1 - (Param5.f_1 / 2f));
	fVar4 = (Param3.f_0 + (Param5.f_0 / 2f));
	fVar5 = (Param3.f_1 + (Param5.f_1 / 2f));
	fVar6 = __LIB_0__::func_301(fVar0, fVar2, fVar4);
	fVar7 = __LIB_0__::func_301(fVar1, fVar3, fVar5);
	fVar8 = (fVar0 - fVar6);
	fVar9 = (fVar1 - fVar7);
	fVar10 = ((fVar8 * fVar8) + (fVar9 * fVar9));
	return fVar10 < (fParam2 * fParam2);
}

int func_878(int iParam0)//Position - 0x182A93
{
	if (((((((((((((((((((((((((((((((((iParam0 == joaat("stt_prop_stunt_jump_s") || iParam0 == joaat("bkr_prop_biker_jump_s")) || iParam0 == joaat("stt_prop_stunt_jump_m")) || iParam0 == joaat("bkr_prop_biker_jump_m")) || iParam0 == joaat("stt_prop_stunt_jump_l")) || iParam0 == joaat("bkr_prop_biker_jump_l")) || iParam0 == joaat("stt_prop_stunt_jump_sb")) || iParam0 == joaat("bkr_prop_biker_jump_sb")) || iParam0 == joaat("stt_prop_stunt_jump_mb")) || iParam0 == joaat("bkr_prop_biker_jump_mb")) || iParam0 == joaat("stt_prop_stunt_jump_lb")) || iParam0 == joaat("bkr_prop_biker_jump_lb")) || iParam0 == joaat("stt_prop_ramp_jump_xs")) || iParam0 == joaat("stt_prop_ramp_jump_s")) || iParam0 == joaat("stt_prop_ramp_jump_m")) || iParam0 == joaat("stt_prop_ramp_jump_l")) || iParam0 == joaat("stt_prop_ramp_jump_xl")) || iParam0 == joaat("stt_prop_ramp_jump_xxl")) || iParam0 == joaat("stt_prop_track_jump_01a")) || iParam0 == joaat("bkr_prop_biker_jump_01a")) || iParam0 == joaat("stt_prop_track_jump_01b")) || iParam0 == joaat("bkr_prop_biker_jump_01b")) || iParam0 == joaat("stt_prop_track_jump_01c")) || iParam0 == joaat("bkr_prop_biker_jump_01c")) || iParam0 == joaat("stt_prop_track_jump_02a")) || iParam0 == joaat("bkr_prop_biker_jump_02a")) || iParam0 == joaat("stt_prop_track_jump_02b")) || iParam0 == joaat("bkr_prop_biker_jump_02b")) || iParam0 == joaat("stt_prop_track_jump_02c")) || iParam0 == joaat("bkr_prop_biker_jump_02c")) || iParam0 == joaat("stt_prop_ramp_adj_flip_mb")) || iParam0 == joaat("stt_prop_ramp_adj_flip_s")) || iParam0 == joaat("stt_prop_ramp_adj_flip_sb")) || iParam0 == joaat("stt_prop_ramp_adj_flip_m"))
	{
		return 1;
	}
	return 0;
}

int func_879(int iParam0)//Position - 0x1835D1
{
	if ((((((((ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("nokota") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("howard")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("starling")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("molotok")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("alphaz1")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("volatol"))
	{
		return 1;
	}
	return 0;
}

int func_880(int iParam0)//Position - 0x183AD4
{
	if (((((((((((iParam0 == joaat("tr_prop_tr_sign_gf_ml_01a") || iParam0 == joaat("tr_prop_tr_sign_gf_mr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ms_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ll_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ls_01a")) || iParam0 == joaat("tr_prop_tr_start_grid_01a")) || iParam0 == joaat("tr_prop_tr_finish_line_01a"))
	{
		return 1;
	}
	return 0;
}

void func_881(int* iParam0, int iParam1, int* iParam2)//Position - 0x184049
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			ENTITY::DETACH_ENTITY(iParam1, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		OBJECT::DELETE_OBJECT(iParam2);
	}
}

int func_882(int iParam0)//Position - 0x18408A
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("stt_prop_wallride_90r") || iParam0 == joaat("stt_prop_wallride_45r")) || iParam0 == joaat("stt_prop_wallride_90l")) || iParam0 == joaat("stt_prop_wallride_90rb")) || iParam0 == joaat("stt_prop_wallride_45ra")) || iParam0 == joaat("stt_prop_wallride_90lb")) || iParam0 == joaat("stt_prop_wallride_45l")) || iParam0 == joaat("stt_prop_wallride_45la")) || iParam0 == joaat("stt_prop_wallride_02b")) || iParam0 == joaat("stt_prop_wallride_02")) || iParam0 == joaat("stt_prop_wallride_04")) || iParam0 == joaat("stt_prop_wallride_01b")) || iParam0 == joaat("stt_prop_wallride_01")) || iParam0 == joaat("stt_prop_wallride_05b")) || iParam0 == joaat("stt_prop_wallride_05")) || iParam0 == -2057172266) || iParam0 == 1293076704) || iParam0 == 1284326326) || iParam0 == -1354765047) || iParam0 == 1303293543) || iParam0 == joaat("stt_prop_track_stop_sign")) || iParam0 == joaat("stt_prop_track_slowdown")) || iParam0 == joaat("stt_prop_track_slowdown_t2")) || iParam0 == joaat("stt_prop_track_slowdown_t1")) || iParam0 == joaat("stt_prop_track_speedup_t1")) || iParam0 == joaat("stt_prop_track_speedup_t2")) || iParam0 == joaat("stt_prop_track_speedup")) || iParam0 == joaat("stt_prop_stunt_soccer_goal")) || iParam0 == joaat("stt_prop_stunt_bowlpin_stand")) || iParam0 == joaat("bkr_prop_biker_bowlpin_stand")) || iParam0 == joaat("stt_prop_track_jump_02c")) || iParam0 == joaat("stt_prop_track_jump_02b")) || iParam0 == joaat("stt_prop_track_jump_02a")) || iParam0 == joaat("bkr_prop_biker_jump_02c")) || iParam0 == joaat("bkr_prop_biker_jump_02b")) || iParam0 == joaat("bkr_prop_biker_jump_02a")) || iParam0 == joaat("stt_prop_stunt_wideramp")) || iParam0 == joaat("stt_prop_stunt_ramp")) || iParam0 == joaat("stt_prop_track_jump_01a")) || iParam0 == joaat("stt_prop_track_jump_01b")) || iParam0 == joaat("stt_prop_track_jump_01c")) || iParam0 == joaat("bkr_prop_biker_jump_01a")) || iParam0 == joaat("bkr_prop_biker_jump_01b")) || iParam0 == joaat("bkr_prop_biker_jump_01c")) || iParam0 == joaat("stt_prop_ramp_jump_m")) || iParam0 == joaat("stt_prop_ramp_jump_s")) || iParam0 == joaat("stt_prop_ramp_jump_xs")) || iParam0 == joaat("stt_prop_ramp_jump_l")) || iParam0 == joaat("stt_prop_ramp_jump_xl")) || iParam0 == joaat("stt_prop_ramp_jump_xxl")) || iParam0 == joaat("stt_prop_ramp_adj_flip_s")) || iParam0 == joaat("stt_prop_ramp_adj_flip_m")) || iParam0 == joaat("stt_prop_stunt_jump_m")) || iParam0 == joaat("stt_prop_stunt_jump_s")) || iParam0 == joaat("stt_prop_stunt_jump_l")) || iParam0 == joaat("bkr_prop_biker_jump_m")) || iParam0 == joaat("bkr_prop_biker_jump_s")) || iParam0 == joaat("bkr_prop_biker_jump_l")) || iParam0 == joaat("stt_prop_ramp_adj_flip_sb")) || iParam0 == joaat("stt_prop_ramp_adj_flip_mb")) || iParam0 == joaat("stt_prop_stunt_jump_mb")) || iParam0 == joaat("stt_prop_stunt_jump_lb")) || iParam0 == joaat("stt_prop_stunt_jump_sb")) || iParam0 == joaat("bkr_prop_biker_jump_mb")) || iParam0 == joaat("bkr_prop_biker_jump_lb")) || iParam0 == joaat("bkr_prop_biker_jump_sb")) || iParam0 == joaat("stt_prop_ramp_multi_loop_rb")) || iParam0 == joaat("stt_prop_ramp_adj_loop")) || iParam0 == joaat("stt_prop_ramp_adj_hloop")) || iParam0 == joaat("stt_prop_stunt_jump_loop")) || iParam0 == joaat("ar_prop_ar_jump_loop")) || iParam0 == joaat("stt_prop_track_slowdown")) || iParam0 == joaat("stt_prop_track_slowdown_t2")) || iParam0 == joaat("stt_prop_track_slowdown_t1")) || iParam0 == joaat("stt_prop_track_speedup")) || iParam0 == joaat("stt_prop_track_speedup_t1")) || iParam0 == joaat("stt_prop_track_speedup_t2")) || iParam0 == joaat("stt_prop_track_straight_lm_bar")) || iParam0 == joaat("stt_prop_track_fork_bar")) || iParam0 == joaat("stt_prop_track_bend2_bar_l_b")) || iParam0 == joaat("stt_prop_track_bend2_bar_l")) || iParam0 == joaat("stt_prop_track_cross_bar")) || iParam0 == joaat("stt_prop_track_straight_bar_l")) || iParam0 == joaat("stt_prop_track_funnel")) || iParam0 == joaat("stt_prop_track_straight_bar_s")) || iParam0 == joaat("stt_prop_track_bend_bar_m")) || iParam0 == joaat("stt_prop_track_straight_bar_m")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("ba_prop_track_straight_lm")) || iParam0 == joaat("sum_prop_ac_track_pit_stop_01")) || iParam0 == joaat("stt_prop_track_fork")) || iParam0 == joaat("stt_prop_track_bend2_l")) || iParam0 == joaat("stt_prop_track_bend_l_b")) || iParam0 == joaat("stt_prop_track_bend2_l_b")) || iParam0 == joaat("stt_prop_track_bend_bar_l")) || iParam0 == joaat("stt_prop_track_bend_bar_l_b")) || iParam0 == joaat("stt_prop_track_cross")) || iParam0 == joaat("stt_prop_track_straight_l")) || iParam0 == joaat("stt_prop_track_straight_s")) || iParam0 == joaat("stt_prop_track_straight_m")) || iParam0 == joaat("stt_prop_track_link")) || iParam0 == joaat("stt_prop_track_start")) || iParam0 == joaat("stt_prop_track_bend_m")) || iParam0 == joaat("stt_prop_track_bend_l")) || iParam0 == joaat("ba_prop_track_bend_l_b")) || iParam0 == joaat("stt_prop_track_start_02")) || iParam0 == joaat("stt_prop_track_chicane_r")) || iParam0 == joaat("stt_prop_track_chicane_r_02")) || iParam0 == joaat("stt_prop_track_chicane_l_02")) || iParam0 == joaat("stt_prop_track_chicane_l")) || iParam0 == joaat("stt_prop_track_block_03")) || iParam0 == joaat("stt_prop_track_block_02")) || iParam0 == joaat("stt_prop_track_block_01")) || iParam0 == joaat("stt_prop_track_bend_30d_bar")) || iParam0 == joaat("stt_prop_track_bend_15d_bar")) || iParam0 == joaat("stt_prop_track_bend_5d_bar")) || iParam0 == joaat("stt_prop_track_bend_180d_bar")) || iParam0 == joaat("sum_prop_ac_short_barrier_05d")) || iParam0 == joaat("sum_prop_ac_short_barrier_15d")) || iParam0 == joaat("sum_prop_ac_short_barrier_30d")) || iParam0 == joaat("sum_prop_ac_short_barrier_45d")) || iParam0 == joaat("sum_prop_ac_short_barrier_90d")) || iParam0 == joaat("stt_prop_track_bend_30d")) || iParam0 == joaat("stt_prop_track_bend_15d")) || iParam0 == joaat("stt_prop_track_bend_5d")) || iParam0 == joaat("stt_prop_track_bend_180d")) || iParam0 == joaat("stt_prop_stunt_tube_m")) || iParam0 == joaat("stt_prop_stunt_tube_l")) || iParam0 == joaat("stt_prop_stunt_tube_gap_03")) || iParam0 == joaat("stt_prop_stunt_tube_gap_01")) || iParam0 == joaat("stt_prop_stunt_tube_gap_02")) || iParam0 == joaat("stt_prop_stunt_tube_xs")) || iParam0 == joaat("stt_prop_stunt_tube_cross")) || iParam0 == joaat("stt_prop_stunt_tube_s")) || iParam0 == joaat("stt_prop_stunt_tube_xxs")) || iParam0 == joaat("stt_prop_stunt_tube_speed")) || iParam0 == joaat("stt_prop_stunt_tube_speeda")) || iParam0 == joaat("stt_prop_stunt_tube_speedb")) || iParam0 == joaat("stt_prop_track_tube_02")) || iParam0 == joaat("stt_prop_track_tube_01")) || iParam0 == joaat("stt_prop_stunt_tube_hg")) || iParam0 == joaat("stt_prop_stunt_tube_qg")) || iParam0 == joaat("stt_prop_stunt_tube_end")) || iParam0 == joaat("sr_prop_sr_tube_end")) || iParam0 == joaat("stt_prop_stunt_tube_jmp")) || iParam0 == joaat("stt_prop_stunt_tube_jmp2")) || iParam0 == joaat("stt_prop_stunt_tube_fn_01")) || iParam0 == joaat("stt_prop_stunt_tube_fn_02")) || iParam0 == joaat("stt_prop_stunt_tube_fn_03")) || iParam0 == joaat("stt_prop_stunt_tube_fn_05")) || iParam0 == joaat("stt_prop_stunt_tube_fn_04")) || iParam0 == joaat("ba_prop_battle_tube_fn_01")) || iParam0 == joaat("ba_prop_battle_tube_fn_02")) || iParam0 == joaat("ba_prop_battle_tube_fn_03")) || iParam0 == joaat("ba_prop_battle_tube_fn_05")) || iParam0 == joaat("ba_prop_battle_tube_fn_04")) || iParam0 == joaat("stt_prop_stunt_tube_ent")) || iParam0 == joaat("stt_prop_stunt_tube_crn2")) || iParam0 == joaat("stt_prop_stunt_tube_crn")) || iParam0 == joaat("stt_prop_stunt_tube_fork")) || iParam0 == joaat("stt_prop_stunt_tube_crn_5d")) || iParam0 == joaat("stt_prop_stunt_tube_crn_15d")) || iParam0 == joaat("stt_prop_stunt_tube_crn_30d")) || iParam0 == joaat("bkr_prop_biker_tube_xxs")) || iParam0 == joaat("bkr_prop_biker_tube_xs")) || iParam0 == joaat("bkr_prop_biker_tube_s")) || iParam0 == joaat("bkr_prop_biker_tube_m")) || iParam0 == joaat("bkr_prop_biker_tube_l")) || iParam0 == joaat("bkr_prop_biker_tube_crn")) || iParam0 == joaat("bkr_prop_biker_tube_crn2")) || iParam0 == joaat("bkr_prop_biker_tube_cross")) || iParam0 == joaat("bkr_prop_biker_tube_gap_01")) || iParam0 == joaat("bkr_prop_biker_tube_gap_02")) || iParam0 == joaat("bkr_prop_biker_tube_gap_03")) || iParam0 == joaat("stt_prop_hoop_small_01")) || iParam0 == joaat("stt_prop_hoop_tyre_01a")) || iParam0 == joaat("stt_prop_hoop_constraction_01a")) || iParam0 == joaat("stt_prop_track_funnel_ads_01c")) || iParam0 == joaat("stt_prop_track_funnel_ads_01b")) || iParam0 == joaat("stt_prop_track_funnel_ads_01a")) || iParam0 == joaat("stt_prop_race_start_line_01")) || iParam0 == joaat("stt_prop_race_start_line_01b")) || iParam0 == joaat("sr_prop_sr_start_line_02")) || iParam0 == joaat("stt_prop_race_start_line_02b")) || iParam0 == joaat("stt_prop_race_start_line_03b")) || iParam0 == joaat("stt_prop_startline_gantry")) || iParam0 == joaat("stt_prop_race_gantry_01")) || iParam0 == joaat("ch_prop_ch_race_gantry_02")) || iParam0 == joaat("ch_prop_ch_race_gantry_03")) || iParam0 == joaat("ch_prop_ch_race_gantry_04")) || iParam0 == joaat("ch_prop_ch_race_gantry_05")) || iParam0 == joaat("sr_prop_spec_tube_crn_01a")) || iParam0 == joaat("sr_prop_spec_tube_crn_02a")) || iParam0 == joaat("sr_prop_spec_tube_crn_03a")) || iParam0 == joaat("sr_prop_spec_tube_crn_04a")) || iParam0 == joaat("sr_prop_spec_tube_crn_05a")) || iParam0 == joaat("sr_prop_stunt_tube_crn2_01a")) || iParam0 == joaat("sr_prop_stunt_tube_crn2_02a")) || iParam0 == joaat("sr_prop_stunt_tube_crn2_03a")) || iParam0 == joaat("sr_prop_stunt_tube_crn2_04a")) || iParam0 == joaat("sr_prop_stunt_tube_crn2_05a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_5d_01a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_5d_02a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_5d_03a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_5d_04a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_5d_05a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_15d_01a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_15d_02a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_15d_03a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_15d_04a")) || iParam0 == joaat("sr_prop_stunt_tube_crn_15d_05a")) || iParam0 == joaat("sr_prop_spec_tube_crn_30d_01a")) || iParam0 == joaat("sr_prop_spec_tube_crn_30d_02a")) || iParam0 == joaat("sr_prop_spec_tube_crn_30d_03a")) || iParam0 == joaat("sr_prop_spec_tube_crn_30d_04a")) || iParam0 == joaat("sr_prop_spec_tube_crn_30d_05a")) || iParam0 == joaat("sr_prop_spec_tube_s_01a")) || iParam0 == joaat("sr_prop_spec_tube_s_02a")) || iParam0 == joaat("sr_prop_spec_tube_s_03a")) || iParam0 == joaat("sr_prop_spec_tube_s_04a")) || iParam0 == joaat("sr_prop_spec_tube_s_05a")) || iParam0 == joaat("sr_prop_spec_tube_m_01a")) || iParam0 == joaat("sr_prop_spec_tube_m_02a")) || iParam0 == joaat("sr_prop_spec_tube_m_03a")) || iParam0 == joaat("sr_prop_spec_tube_m_04a")) || iParam0 == joaat("sr_prop_spec_tube_m_05a")) || iParam0 == joaat("sr_prop_spec_tube_l_01a")) || iParam0 == joaat("sr_prop_spec_tube_l_02a")) || iParam0 == joaat("sr_prop_spec_tube_l_03a")) || iParam0 == joaat("sr_prop_spec_tube_l_04a")) || iParam0 == joaat("sr_prop_spec_tube_l_05a")) || iParam0 == joaat("sr_prop_spec_tube_xxs_01a")) || iParam0 == joaat("sr_prop_spec_tube_xxs_02a")) || iParam0 == joaat("sr_prop_spec_tube_xxs_03a")) || iParam0 == joaat("sr_prop_spec_tube_xxs_04a")) || iParam0 == joaat("sr_prop_spec_tube_xxs_05a")) || iParam0 == joaat("sr_prop_stunt_tube_xs_01a")) || iParam0 == joaat("sr_prop_stunt_tube_xs_02a")) || iParam0 == joaat("sr_prop_stunt_tube_xs_03a")) || iParam0 == joaat("sr_prop_stunt_tube_xs_04a")) || iParam0 == joaat("sr_prop_stunt_tube_xs_05a")) || iParam0 == joaat("sr_prop_spec_tube_refill")) || iParam0 == joaat("sr_prop_track_refill")) || iParam0 == joaat("sr_prop_track_refill_t2")) || iParam0 == joaat("sr_prop_track_refill_t1")) || iParam0 == joaat("sr_prop_track_straight_l_d5")) || iParam0 == joaat("sr_prop_track_straight_l_d15")) || iParam0 == joaat("sr_prop_track_straight_l_d30")) || iParam0 == joaat("sr_prop_track_straight_l_d45")) || iParam0 == joaat("sr_prop_track_straight_l_u5")) || iParam0 == joaat("sr_prop_track_straight_l_u15")) || iParam0 == joaat("sr_prop_track_straight_l_u30")) || iParam0 == joaat("sr_prop_track_straight_l_u45")) || iParam0 == joaat("sr_mp_spec_races_ron_sign")) || iParam0 == joaat("sr_mp_spec_races_xero_sign")) || iParam0 == joaat("stt_prop_hoop_small_01")) || iParam0 == joaat("stt_prop_hoop_constraction_01a")) || iParam0 == joaat("as_prop_as_tube_gap_03")) || iParam0 == joaat("as_prop_as_tube_xxs")) || iParam0 == joaat("ar_prop_ar_hoop_med_01")) || iParam0 == joaat("ar_prop_ar_tube_crn")) || iParam0 == joaat("ar_prop_ar_tube_crn_15d")) || iParam0 == joaat("ar_prop_ar_tube_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_crn_5d")) || iParam0 == joaat("ar_prop_ar_tube_crn2")) || iParam0 == joaat("ar_prop_ar_tube_cross")) || iParam0 == joaat("ar_prop_ar_tube_fork")) || iParam0 == joaat("ar_prop_ar_tube_hg")) || iParam0 == joaat("ar_prop_ar_tube_jmp")) || iParam0 == joaat("ar_prop_ar_tube_l")) || iParam0 == joaat("ar_prop_ar_tube_m")) || iParam0 == joaat("ar_prop_ar_tube_s")) || iParam0 == joaat("ar_prop_ar_tube_xxs")) || iParam0 == joaat("ar_prop_ar_tube_xs")) || iParam0 == joaat("as_prop_as_tube_gap_02")) || iParam0 == joaat("ar_prop_ar_tube_speed")) || iParam0 == joaat("ar_prop_ar_tube_4x_l")) || iParam0 == joaat("ar_prop_ar_tube_4x_m")) || iParam0 == joaat("ar_prop_ar_tube_4x_s")) || iParam0 == joaat("ar_prop_ar_tube_4x_xs")) || iParam0 == joaat("ar_prop_ar_tube_4x_xxs")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_15d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_5d")) || iParam0 == joaat("ar_prop_ar_tube_4x_gap_02")) || iParam0 == joaat("ar_prop_ar_tube_4x_speed")) || iParam0 == joaat("ar_prop_ar_tube_2x_l")) || iParam0 == joaat("ar_prop_ar_tube_2x_m")) || iParam0 == joaat("ar_prop_ar_tube_2x_s")) || iParam0 == joaat("ar_prop_ar_tube_2x_xs")) || iParam0 == joaat("ar_prop_ar_tube_2x_xxs")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_15d")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_5d")) || iParam0 == joaat("ar_prop_ar_tube_2x_gap_02")) || iParam0 == joaat("ar_prop_ar_tube_2x_speed")) || iParam0 == joaat("ar_prop_ar_neon_gate_01a")) || iParam0 == joaat("ar_prop_ar_neon_gate_01b")) || iParam0 == joaat("ar_prop_ar_neon_gate_02a")) || iParam0 == joaat("ar_prop_ar_neon_gate_02b")) || iParam0 == joaat("ar_prop_ar_neon_gate_03a")) || iParam0 == joaat("ar_prop_ar_neon_gate_04a")) || iParam0 == joaat("ar_prop_ar_neon_gate_05a")) || iParam0 == joaat("ar_prop_inflategates_cp_loop")) || iParam0 == 1484002996) || iParam0 == 1894584493) || iParam0 == joaat("ar_prop_ig_sprunk_cp_b")) || iParam0 == joaat("ar_prop_ig_raine_cp_b")) || iParam0 == joaat("ar_prop_ig_flow_cp_b")) || iParam0 == joaat("ar_prop_ig_shark_cp_b")) || iParam0 == joaat("ar_prop_ig_jackal_cp_b")) || iParam0 == joaat("ar_prop_ig_metv_cp_b")) || iParam0 == joaat("ar_prop_ig_metv_cp_single")) || iParam0 == joaat("ar_prop_ig_jackal_cp_single")) || iParam0 == joaat("ar_prop_ig_shark_cp_single")) || iParam0 == joaat("ar_prop_ig_flow_cp_single")) || iParam0 == joaat("ar_prop_ig_raine_cp_single")) || iParam0 == joaat("ar_prop_ig_sprunk_cp_single")) || iParam0 == joaat("ar_prop_ar_checkpoint_xxs")) || iParam0 == joaat("ar_prop_ar_checkpoint_xs")) || iParam0 == joaat("ar_prop_ar_checkpoint_s")) || iParam0 == joaat("ar_prop_ar_checkpoint_m")) || iParam0 == joaat("ar_prop_ar_checkpoint_l")) || iParam0 == joaat("ar_prop_ar_checkpoint_crn")) || iParam0 == joaat("ar_prop_ar_checkpoints_crn_5d")) || iParam0 == joaat("ar_prop_ar_checkpoint_crn_15d")) || iParam0 == joaat("ar_prop_ar_checkpoint_crn_30d")) || iParam0 == joaat("ar_prop_ar_checkpoint_crn02")) || iParam0 == joaat("ar_prop_ar_checkpoint_fork")) || iParam0 == joaat("ch_prop_track_pit_stop_01")) || iParam0 == joaat("sum_prop_ac_track_pit_stop_30r"))
	{
		return 1;
	}
	return 0;
}

float func_883(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1854F8
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	fVar0 = 0.1f;
	iVar1 = 205;
	iVar2 = 206;
	if (bParam5)
	{
		iVar1 = 189;
		iVar2 = 190;
	}
	fVar3 = 6f;
	if (bParam2 || (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bParam5))
	{
		fVar0 = 1f;
		fVar3 = 12f;
	}
	if (bParam5)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			fVar0 = 8f;
			fVar3 = 10f;
		}
		else
		{
			fVar0 = 0.2f;
			fVar3 = 3f;
		}
	}
	if (bParam3)
	{
		fVar0 = 3f;
		fVar3 = 36f;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar0 = (MISC::GET_FRAME_TIME() / (1f / 30f));
		}
		else
		{
			fVar0 = (fVar0 * 1f);
		}
	}
	fVar4 = 0f;
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) && *iParam0 <= 0f) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2) && *iParam0 >= 0f)) || bParam3)
	{
		if (fVar4 == 0f)
		{
			if (bParam1 == 1)
			{
				if (Global_4718592.f_110276 > Global_4718592.f_110275)
				{
					fVar4 = (15f / Global_4718592.f_110276);
				}
				else
				{
					fVar4 = (15f / Global_4718592.f_110275);
				}
			}
			else
			{
				fVar4 = 0.5f;
			}
		}
		if (bParam1 == 1)
		{
			fVar4 = (0.2f * fVar0);
		}
		else
		{
			fVar4 = (0.2f * fVar0);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
	{
		fVar4 = 0.25f;
	}
	else
	{
		*iParam0 = 0f;
	}
	if (fVar4 > 0f)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
		{
			fVar4 = (fVar4 * -1f);
		}
		*iParam0 = (*iParam0 + fVar4);
	}
	if (!bParam4)
	{
		*iParam0 = __LIB_0__::func_301(*iParam0, -fVar3, fVar3);
	}
	return *iParam0;
}

bool func_884()//Position - 0x1859FA
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode_creator")) > 0;
}

bool func_885(int* iParam0)//Position - 0x185A90
{
	return (BitTest(iParam0->f_2909, 0) && iParam0->f_550 == 4);
}

int func_886(int iParam0)//Position - 0x185AAB
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((iVar0 == joaat("xs_prop_arena_flipper_xl_01a") || iVar0 == joaat("xs_prop_arena_flipper_xl_01a_sf")) || iVar0 == joaat("xs_prop_arena_flipper_xl_01a_wl"))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector(-10f, 0f, 0f), true, false, false, true);
	}
	return 1;
}

int func_887(int iParam0)//Position - 0x185AFC
{
	switch (iParam0)
	{
		case joaat("stt_prop_stunt_tube_jmp2"):
		case joaat("ba_prop_battle_tube_fn_01"):
		case joaat("ba_prop_battle_tube_fn_02"):
		case joaat("ba_prop_battle_tube_fn_03"):
		case joaat("ba_prop_battle_tube_fn_04"):
		case joaat("ba_prop_battle_tube_fn_05"):
		case joaat("stt_prop_stunt_tube_fn_01"):
		case joaat("stt_prop_stunt_tube_fn_02"):
		case joaat("stt_prop_stunt_tube_fn_03"):
		case joaat("stt_prop_stunt_tube_fn_04"):
		case joaat("stt_prop_stunt_tube_fn_05"):
		case joaat("stt_prop_track_stop_sign"):
			return 1;
		default:
	}
	return 0;
}

int func_888(int iParam0)//Position - 0x185B58
{
	if (((iParam0 == joaat("prop_ld_alarm_01") || iParam0 == joaat("hei_prop_wall_alarm_on")) || iParam0 == joaat("hei_prop_wall_alarm_off")) || iParam0 == joaat("hei_prop_wall_light_10a_cr"))
	{
		return 1;
	}
	return 0;
}

bool func_889()//Position - 0x185F49
{
	return (BitTest(Global_4718592.f_107234, 15) && !__LIB_6__::func_315());
}

bool func_890()//Position - 0x185F68
{
	return BitTest(Global_1945955, 0);
}

int func_891(int iParam0)//Position - 0x18602F
{
	if (((iParam0 == joaat("xs_prop_arena_turret_01a") || iParam0 == joaat("xs_prop_arena_turret_01a_sf")) || iParam0 == joaat("xs_prop_arena_turret_01a_wl")) || __LIB_13__::func_166(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_892(int iParam0, int iParam1)//Position - 0x18612D
{
	if (iParam0 != 0)
	{
		if (iParam1->f_26 != iParam0)
		{
			if (iParam1->f_26 != 0)
			{
				STREAMING::REMOVE_MODEL_FROM_CREATOR_BUDGET(iParam1->f_26);
			}
			iParam1->f_26 = iParam0;
			STREAMING::ADD_MODEL_TO_CREATOR_BUDGET(iParam1->f_26);
		}
	}
}

int func_893(int* iParam0, int* iParam1, bool bParam2, bool bParam3)//Position - 0x186367
{
	if (BitTest(*iParam1, bParam3))
	{
		if (iParam0->f_271 == 726 || iParam0->f_271 == 724)
		{
			if (iParam0->f_2916 == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

float func_894()//Position - 0x186FEB
{
	if (BitTest(Global_4718592.f_162497, 12))
	{
		return 210f;
	}
	return 10000f;
}

float func_895()//Position - 0x187010
{
	if (BitTest(Global_4718592.f_162497, 12))
	{
		return 97f;
	}
	return -10000f;
}

int func_896()//Position - 0x1874FD
{
	int iVar0;
	iVar0 = 0;
	iVar0 = (iVar0 + Global_4980736.f_5739);
	iVar0 = (iVar0 + Global_4980736.f_63310);
	iVar0 = (iVar0 + Global_4980736.f_20329);
	iVar0 = (iVar0 + Global_4980736.f_202535);
	return iVar0;
}

int func_897(int iParam0, var uParam1)//Position - 0x18754F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar0]);
			if (((((iVar2 == joaat("stt_prop_stunt_soccer_lball") || iVar2 == joaat("stt_prop_stunt_soccer_sball")) || iVar2 == joaat("stt_prop_stunt_soccer_ball")) || iVar2 == joaat("xs_prop_arena_bomb_s")) || iVar2 == joaat("xs_prop_arena_bomb_m")) || iVar2 == joaat("xs_prop_arena_bomb_l"))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 10)
	{
		return 1;
	}
	return 0;
}

int func_898(int iParam0)//Position - 0x1881F0
{
	switch (iParam0)
	{
		case 0:
			return 30;
		case 1:
			return 9;
		case 2:
			return 33;
		case 3:
			return 29;
		case 4:
			return 32;
		case 5:
			return 45;
		case 6:
			return 21;
		case 7:
			return 16;
		case 8:
			return 8;
		case 9:
			return 5;
		case 10:
			return 3;
		default:
	}
	return -1;
}

void func_899(bool bParam0, int* iParam1)//Position - 0x188516
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iParam1->f_1370[iVar0 /*6*/] = -1;
		iParam1->f_1370[iVar0 /*6*/].f_1 = 0;
		iParam1->f_1370[iVar0 /*6*/].f_2 = 0;
		iParam1->f_1370[iVar0 /*6*/].f_3 = 0;
		iParam1->f_1370[iVar0 /*6*/].f_4 = -1;
		iParam1->f_1370[iVar0 /*6*/].f_5 = -1;
		iVar0++;
	}
	switch (iParam1->f_550)
	{
		case 0:
			if (Global_4980736.f_94390[bParam0 /*1004*/].f_86 != -1)
			{
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/] = Global_4980736.f_94390[bParam0 /*1004*/].f_85;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/].f_1 = Global_4980736.f_94390[bParam0 /*1004*/].f_87;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/].f_2 = Global_4980736.f_94390[bParam0 /*1004*/].f_136;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/].f_3 = Global_4980736.f_94390[bParam0 /*1004*/].f_137;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/].f_4 = Global_4980736.f_94390[bParam0 /*1004*/].f_138;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_86 /*6*/].f_5 = Global_4980736.f_94390[bParam0 /*1004*/].f_139;
			}
			if (Global_4980736.f_94390[bParam0 /*1004*/].f_488 != -1)
			{
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/] = Global_4980736.f_94390[bParam0 /*1004*/].f_491;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/].f_1 = Global_4980736.f_94390[bParam0 /*1004*/].f_494;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/].f_2 = Global_4980736.f_94390[bParam0 /*1004*/].f_497;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/].f_3 = Global_4980736.f_94390[bParam0 /*1004*/].f_500;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/].f_4 = Global_4980736.f_94390[bParam0 /*1004*/].f_503;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_488 /*6*/].f_5 = Global_4980736.f_94390[bParam0 /*1004*/].f_506;
			}
			if (Global_4980736.f_94390[bParam0 /*1004*/].f_489 != -1)
			{
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/] = Global_4980736.f_94390[bParam0 /*1004*/].f_492;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/].f_1 = Global_4980736.f_94390[bParam0 /*1004*/].f_495;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/].f_2 = Global_4980736.f_94390[bParam0 /*1004*/].f_498;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/].f_3 = Global_4980736.f_94390[bParam0 /*1004*/].f_501;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/].f_4 = Global_4980736.f_94390[bParam0 /*1004*/].f_504;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_489 /*6*/].f_5 = Global_4980736.f_94390[bParam0 /*1004*/].f_507;
			}
			if (Global_4980736.f_94390[bParam0 /*1004*/].f_490 != -1)
			{
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/] = Global_4980736.f_94390[bParam0 /*1004*/].f_493;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/].f_1 = Global_4980736.f_94390[bParam0 /*1004*/].f_496;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/].f_2 = Global_4980736.f_94390[bParam0 /*1004*/].f_499;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/].f_3 = Global_4980736.f_94390[bParam0 /*1004*/].f_502;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/].f_4 = Global_4980736.f_94390[bParam0 /*1004*/].f_505;
				iParam1->f_1370[Global_4980736.f_94390[bParam0 /*1004*/].f_490 /*6*/].f_5 = Global_4980736.f_94390[bParam0 /*1004*/].f_508;
			}
			break;
		case 1:
			if (Global_4980736.f_78578[bParam0 /*450*/].f_56 != -1)
			{
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_56 /*6*/] = Global_4980736.f_78578[bParam0 /*450*/].f_55;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_56 /*6*/].f_1 = Global_4980736.f_78578[bParam0 /*450*/].f_57;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_56 /*6*/].f_3 = Global_4980736.f_78578[bParam0 /*450*/].f_58;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_56 /*6*/].f_4 = Global_4980736.f_78578[bParam0 /*450*/].f_59;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_56 /*6*/].f_5 = Global_4980736.f_78578[bParam0 /*450*/].f_60;
			}
			if (Global_4980736.f_78578[bParam0 /*450*/].f_185 != -1)
			{
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_185 /*6*/] = Global_4980736.f_78578[bParam0 /*450*/].f_188;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_185 /*6*/].f_1 = Global_4980736.f_78578[bParam0 /*450*/].f_191;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_185 /*6*/].f_3 = Global_4980736.f_78578[bParam0 /*450*/].f_194;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_185 /*6*/].f_4 = Global_4980736.f_78578[bParam0 /*450*/].f_195;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_185 /*6*/].f_5 = Global_4980736.f_78578[bParam0 /*450*/].f_196;
			}
			if (Global_4980736.f_78578[bParam0 /*450*/].f_186 != -1)
			{
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_186 /*6*/] = Global_4980736.f_78578[bParam0 /*450*/].f_189;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_186 /*6*/].f_1 = Global_4980736.f_78578[bParam0 /*450*/].f_192;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_186 /*6*/].f_3 = Global_4980736.f_78578[bParam0 /*450*/].f_197;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_186 /*6*/].f_4 = Global_4980736.f_78578[bParam0 /*450*/].f_198;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_186 /*6*/].f_5 = Global_4980736.f_78578[bParam0 /*450*/].f_199;
			}
			if (Global_4980736.f_78578[bParam0 /*450*/].f_187 != -1)
			{
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_187 /*6*/] = Global_4980736.f_78578[bParam0 /*450*/].f_190;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_187 /*6*/].f_1 = Global_4980736.f_78578[bParam0 /*450*/].f_193;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_187 /*6*/].f_3 = Global_4980736.f_78578[bParam0 /*450*/].f_200;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_187 /*6*/].f_4 = Global_4980736.f_78578[bParam0 /*450*/].f_201;
				iParam1->f_1370[Global_4980736.f_78578[bParam0 /*450*/].f_187 /*6*/].f_5 = Global_4980736.f_78578[bParam0 /*450*/].f_202;
			}
			break;
		case 3:
			if (Global_4980736.f_5742[bParam0 /*442*/].f_155 != -1)
			{
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/] = Global_4980736.f_5742[bParam0 /*442*/].f_163;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/].f_1 = Global_4980736.f_5742[bParam0 /*442*/].f_167;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/].f_2 = Global_4980736.f_5742[bParam0 /*442*/].f_159;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/].f_3 = Global_4980736.f_5742[bParam0 /*442*/].f_171;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/].f_4 = Global_4980736.f_5742[bParam0 /*442*/].f_175;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_155 /*6*/].f_5 = Global_4980736.f_5742[bParam0 /*442*/].f_176;
			}
			if (Global_4980736.f_5742[bParam0 /*442*/].f_156 != -1)
			{
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/] = Global_4980736.f_5742[bParam0 /*442*/].f_164;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/].f_1 = Global_4980736.f_5742[bParam0 /*442*/].f_168;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/].f_2 = Global_4980736.f_5742[bParam0 /*442*/].f_160;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/].f_3 = Global_4980736.f_5742[bParam0 /*442*/].f_172;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/].f_4 = Global_4980736.f_5742[bParam0 /*442*/].f_177;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_156 /*6*/].f_5 = Global_4980736.f_5742[bParam0 /*442*/].f_178;
			}
			if (Global_4980736.f_5742[bParam0 /*442*/].f_157 != -1)
			{
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/] = Global_4980736.f_5742[bParam0 /*442*/].f_165;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/].f_1 = Global_4980736.f_5742[bParam0 /*442*/].f_169;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/].f_2 = Global_4980736.f_5742[bParam0 /*442*/].f_161;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/].f_3 = Global_4980736.f_5742[bParam0 /*442*/].f_173;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/].f_4 = Global_4980736.f_5742[bParam0 /*442*/].f_179;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_157 /*6*/].f_5 = Global_4980736.f_5742[bParam0 /*442*/].f_180;
			}
			if (Global_4980736.f_5742[bParam0 /*442*/].f_158 != -1)
			{
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/] = Global_4980736.f_5742[bParam0 /*442*/].f_166;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/].f_1 = Global_4980736.f_5742[bParam0 /*442*/].f_170;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/].f_2 = Global_4980736.f_5742[bParam0 /*442*/].f_162;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/].f_3 = Global_4980736.f_5742[bParam0 /*442*/].f_174;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/].f_4 = Global_4980736.f_5742[bParam0 /*442*/].f_181;
				iParam1->f_1370[Global_4980736.f_5742[bParam0 /*442*/].f_158 /*6*/].f_5 = Global_4980736.f_5742[bParam0 /*442*/].f_182;
			}
			break;
		case 76:
			if (Global_4980736.f_20330[bParam0 /*234*/].f_82 != -1)
			{
				iParam1->f_1370[Global_4980736.f_20330[bParam0 /*234*/].f_82 /*6*/] = Global_4980736.f_20330[bParam0 /*234*/].f_83;
				iParam1->f_1370[Global_4980736.f_20330[bParam0 /*234*/].f_82 /*6*/].f_1 = Global_4980736.f_20330[bParam0 /*234*/].f_84;
			}
			iParam1->f_2798 = Global_4980736.f_20330[bParam0 /*234*/].f_85;
			iParam1->f_2797 = Global_4980736.f_20330[bParam0 /*234*/].f_86;
			break;
		case 91:
			if (Global_4980736.f_93611[bParam0 /*193*/].f_80 != -1)
			{
				iParam1->f_1370[Global_4980736.f_93611[bParam0 /*193*/].f_80 /*6*/] = Global_4980736.f_93611[bParam0 /*193*/].f_81;
				iParam1->f_1370[Global_4980736.f_93611[bParam0 /*193*/].f_80 /*6*/].f_1 = Global_4980736.f_93611[bParam0 /*193*/].f_79;
			}
			iParam1->f_2798 = Global_4980736.f_93611[bParam0 /*193*/].f_82;
			iParam1->f_2797 = Global_4980736.f_93611[bParam0 /*193*/].f_83;
			break;
		case 4:
			if (Global_4980736.f_36356[bParam0 /*134*/].f_9 != -1)
			{
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_9 /*6*/] = Global_4980736.f_36356[bParam0 /*134*/].f_8;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_9 /*6*/].f_1 = Global_4980736.f_36356[bParam0 /*134*/].f_10;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_9 /*6*/].f_2 = Global_4980736.f_36356[bParam0 /*134*/].f_11;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_9 /*6*/].f_3 = Global_4980736.f_36356[bParam0 /*134*/].f_34;
			}
			if (Global_4980736.f_36356[bParam0 /*134*/].f_43 != -1)
			{
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_43 /*6*/] = Global_4980736.f_36356[bParam0 /*134*/].f_46;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_43 /*6*/].f_1 = Global_4980736.f_36356[bParam0 /*134*/].f_49;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_43 /*6*/].f_2 = Global_4980736.f_36356[bParam0 /*134*/].f_52;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_43 /*6*/].f_3 = Global_4980736.f_36356[bParam0 /*134*/].f_35;
			}
			if (Global_4980736.f_36356[bParam0 /*134*/].f_44 != -1)
			{
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_44 /*6*/] = Global_4980736.f_36356[bParam0 /*134*/].f_47;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_44 /*6*/].f_1 = Global_4980736.f_36356[bParam0 /*134*/].f_50;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_44 /*6*/].f_2 = Global_4980736.f_36356[bParam0 /*134*/].f_53;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_44 /*6*/].f_3 = Global_4980736.f_36356[bParam0 /*134*/].f_36;
			}
			if (Global_4980736.f_36356[bParam0 /*134*/].f_45 != -1)
			{
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_45 /*6*/] = Global_4980736.f_36356[bParam0 /*134*/].f_48;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_45 /*6*/].f_1 = Global_4980736.f_36356[bParam0 /*134*/].f_51;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_45 /*6*/].f_2 = Global_4980736.f_36356[bParam0 /*134*/].f_54;
				iParam1->f_1370[Global_4980736.f_36356[bParam0 /*134*/].f_45 /*6*/].f_3 = Global_4980736.f_36356[bParam0 /*134*/].f_37;
			}
			break;
		case 5:
			if (Global_4980736.f_63312[bParam0 /*183*/].f_13 != -1)
			{
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_13 /*6*/] = Global_4980736.f_63312[bParam0 /*183*/].f_12;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_13 /*6*/].f_1 = Global_4980736.f_63312[bParam0 /*183*/].f_14;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_13 /*6*/].f_2 = Global_4980736.f_63312[bParam0 /*183*/].f_15;
			}
			if (Global_4980736.f_63312[bParam0 /*183*/].f_20 != -1)
			{
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_20 /*6*/] = Global_4980736.f_63312[bParam0 /*183*/].f_23;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_20 /*6*/].f_1 = Global_4980736.f_63312[bParam0 /*183*/].f_26;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_20 /*6*/].f_2 = Global_4980736.f_63312[bParam0 /*183*/].f_29;
			}
			if (Global_4980736.f_63312[bParam0 /*183*/].f_21 != -1)
			{
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_21 /*6*/] = Global_4980736.f_63312[bParam0 /*183*/].f_24;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_21 /*6*/].f_1 = Global_4980736.f_63312[bParam0 /*183*/].f_27;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_21 /*6*/].f_2 = Global_4980736.f_63312[bParam0 /*183*/].f_30;
			}
			if (Global_4980736.f_63312[bParam0 /*183*/].f_22 != -1)
			{
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_22 /*6*/] = Global_4980736.f_63312[bParam0 /*183*/].f_25;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_22 /*6*/].f_1 = Global_4980736.f_63312[bParam0 /*183*/].f_28;
				iParam1->f_1370[Global_4980736.f_63312[bParam0 /*183*/].f_22 /*6*/].f_2 = Global_4980736.f_63312[bParam0 /*183*/].f_31;
			}
			break;
		case 2:
			if (Global_4980736.f_69361[bParam0 /*151*/].f_28 != -1)
			{
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_28 /*6*/] = Global_4980736.f_69361[bParam0 /*151*/].f_27;
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_28 /*6*/].f_1 = Global_4980736.f_69361[bParam0 /*151*/].f_29;
			}
			if (Global_4980736.f_69361[bParam0 /*151*/].f_33 != -1)
			{
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_33 /*6*/] = Global_4980736.f_69361[bParam0 /*151*/].f_36;
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_33 /*6*/].f_1 = Global_4980736.f_69361[bParam0 /*151*/].f_39;
			}
			if (Global_4980736.f_69361[bParam0 /*151*/].f_34 != -1)
			{
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_34 /*6*/] = Global_4980736.f_69361[bParam0 /*151*/].f_37;
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_34 /*6*/].f_1 = Global_4980736.f_69361[bParam0 /*151*/].f_40;
			}
			if (Global_4980736.f_69361[bParam0 /*151*/].f_35 != -1)
			{
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_35 /*6*/] = Global_4980736.f_69361[bParam0 /*151*/].f_38;
				iParam1->f_1370[Global_4980736.f_69361[bParam0 /*151*/].f_35 /*6*/].f_1 = Global_4980736.f_69361[bParam0 /*151*/].f_41;
			}
			break;
	}
}

void func_900(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x18C22F
{
	struct<3> Var0[2];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[4];
	if (Param0.f_0 != 0f && Param0.f_1 != 0f)
	{
		Var1 = { Param0 - Param1 };
		Var2 = { __LIB_0__::func_620(Var1, Var1.f_0, Var1.f_1, 0f) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam2 * 0.5f)) };
		Var0[0 /*3*/] = { Vector(Param0.f_2, Param0.f_1, Param0.f_0) + Var2 };
		Var0[1 /*3*/] = { Vector(Param0.f_2, Param0.f_1, Param0.f_0) - Var2 };
	}
	Var3 = { Param0 - Param1 };
	Var4 = { __LIB_0__::func_620(Var3, Var3.f_0, Var3.f_1, 0f) };
	Var4 = { Var4 / FtoV(SYSTEM::VMAG(Var4)) };
	Var4 = { Var4 * FtoV((fParam2 * 0.5f)) };
	Var5[3 /*3*/] = { Vector(Param0.f_2, Param0.f_1, Param0.f_0) + Var4 };
	Var5[2 /*3*/] = { Vector(Param0.f_2, Param0.f_1, Param0.f_0) - Var4 };
	Var5[1 /*3*/] = { Vector(Param1.f_2, Param1.f_1, Param1.f_0) - Var4 };
	Var5[0 /*3*/] = { Vector(Param1.f_2, Param1.f_1, Param1.f_0) + Var4 };
	GRAPHICS::SET_BACKFACECULLING(false);
	GRAPHICS::DRAW_POLY(Var5[0 /*3*/], Var5[1 /*3*/], Var5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_POLY(Var5[2 /*3*/], Var5[3 /*3*/], Var5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::SET_BACKFACECULLING(true);
}

int func_901(int iParam0)//Position - 0x18C3DA
{
	switch (iParam0)
	{
		case 30:
		case 28:
		case 31:
		case 33:
		case 32:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 29:
		case 34:
		case 24:
		case 25:
		case 26:
		case 27:
		case 23:
		case 43:
		case 46:
		case 44:
		case 45:
		case 40:
		case 41:
		case 42:
		case 47:
		case 48:
			return 1;
		default:
	}
	return 0;
}

int func_902(int iParam0)//Position - 0x18C93F
{
	if (iParam0 == 20 || iParam0 == 32)
	{
		return 1;
	}
	return 0;
}

Vector3 func_903(int iParam0, int iParam1)//Position - 0x18C95F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (((((iParam0 == joaat("stt_prop_track_speedup") || iParam0 == joaat("stt_prop_track_speedup_t1")) || iParam0 == joaat("stt_prop_track_speedup_t2")) || iParam0 == joaat("sr_prop_track_refill")) || iParam0 == joaat("sr_prop_track_refill_t1")) || iParam0 == joaat("sr_prop_track_refill_t2"))
		{
			return 0f, 0f, -0.32f;
		}
		else if ((((((iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out") || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_m"))
		{
			return 0f, 0f, -0.075f;
		}
	}
	return 0f, 0f, 0f;
}

int func_904()//Position - 0x18CE1C
{
	int iVar0;
	int iVar1[200];
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_36356)
	{
		if (Global_4980736.f_36356[iVar0 /*134*/].f_55 != -1)
		{
			iVar1[Global_4980736.f_36356[iVar0 /*134*/].f_55] = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (!iVar1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

void func_905(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x18DCCE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	iVar0 = Global_4718592.f_588 + 1;
	Var1 = { iParam1, 0f, 5f };
	iVar4 = 0;
	while (iVar4 <= (iVar0 - 1))
	{
		if (iVar4 >= (iVar0 - (iVar0 % iParam2)))
		{
			fVar5 = (((Var1.f_1 - (IntToFloat(((iVar0 % iParam2) / 2)) * fParam3)) + (IntToFloat((iVar4 % iParam2)) * fParam3)) + (IntToFloat((1 - ((iVar0 % iParam2) % 2))) * (fParam3 / 2f)));
		}
		else
		{
			fVar5 = (((Var1.f_1 - (IntToFloat((iParam2 / 2)) * fParam3)) + (IntToFloat((iVar4 % iParam2)) * fParam3)) + (IntToFloat((1 - (iParam2 % 2))) * (fParam3 / 2f)));
		}
		fVar6 = (Var1.f_0 + (IntToFloat(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / SYSTEM::TO_FLOAT(iParam2)))) * fParam3));
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, fVar6, fVar5, Var1.f_2) };
		Var3 = { Var2 };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var3.f_2), true, false);
		fVar7 = 1f;
		GRAPHICS::DRAW_MARKER(28, Var3, 0f, 0f, 0f, 0f, 0f, 0f, fVar7, fVar7, fVar7, 255, 255, 255, 255, false, false, 0, false, __LIB_0__::func_459(), __LIB_0__::func_459(), true);
		iVar4++;
	}
}

float func_906(int iParam0)//Position - 0x18DEC4
{
	switch (iParam0)
	{
		case joaat("prop_mp_ramp_01"):
		case joaat("prop_mp_ramp_02"):
		case joaat("prop_mp_ramp_03"):
			return 0.07f;
			break;
		case joaat("prop_elecbox_02a"):
		case joaat("prop_offroad_tyres01"):
		case joaat("lts_prop_lts_offroad_tyres01"):
			return 0.2f;
			break;
	}
	return 0f;
}

void func_907(var uParam0)//Position - 0x18E0DC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_727[iVar0]))
		{
			STREAMING::REQUEST_MODEL(joaat("ninef2"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("ninef2")))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ninef2"));
				uParam0->f_727[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("ninef2"), 100f, 100f, 100f, 0f, true, true, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_727[iVar0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_727[iVar0], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_727[iVar0], true);
			}
		}
		iVar0++;
	}
}

int func_908(int iParam0)//Position - 0x18E176
{
	int iVar0;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 <= 29)
		{
			if (Global_4718592.f_166222[iParam0 /*248*/].f_182[iVar0] == 0)
			{
				return iVar0;
			}
			iVar0++;
		}
		return 30;
	}
	return 0;
}

void func_909(bool bParam0, int iParam1, bool bParam2)//Position - 0x18E1B9
{
	if (bParam2 != Global_4980736.f_36356[bParam0 /*134*/].f_29[iParam1])
	{
		Global_4980736.f_36356[bParam0 /*134*/].f_29[iParam1] = bParam2;
	}
}

int func_910(int iParam0)//Position - 0x18E90B
{
	if (((((((((((((((((((((((iParam0 == joaat("stt_prop_stunt_track_slope15") || iParam0 == joaat("stt_prop_stunt_track_slope30")) || iParam0 == joaat("stt_prop_stunt_track_slope45")) || iParam0 == joaat("stt_prop_stunt_track_hill")) || iParam0 == joaat("stt_prop_stunt_track_hill2")) || iParam0 == joaat("stt_prop_stunt_track_bumps")) || iParam0 == joaat("stt_prop_stunt_track_jump")) || iParam0 == joaat("stt_prop_stunt_jump15")) || iParam0 == joaat("stt_prop_stunt_jump30")) || iParam0 == joaat("stt_prop_stunt_jump45")) || iParam0 == joaat("stt_prop_stunt_track_dwslope15")) || iParam0 == joaat("as_prop_as_dwslope30")) || iParam0 == joaat("stt_prop_stunt_track_dwslope45")) || iParam0 == joaat("stt_prop_track_tube_02")) || iParam0 == joaat("stt_prop_track_speedup")) || iParam0 == joaat("stt_prop_track_speedup_t2")) || iParam0 == joaat("stt_prop_track_speedup_t1")) || iParam0 == joaat("stt_prop_track_slowdown")) || iParam0 == joaat("stt_prop_track_slowdown_t2")) || iParam0 == joaat("stt_prop_track_slowdown_t1")) || iParam0 == joaat("sr_prop_track_refill")) || iParam0 == joaat("sr_prop_track_refill_t2")) || iParam0 == joaat("sr_prop_track_refill_t1")) || iParam0 == joaat("ar_prop_ar_speed_ring"))
	{
		return 1;
	}
	return 0;
}

int func_911(int iParam0, int iParam1)//Position - 0x18F088
{
	if (iParam0 == 20 || iParam0 == 36)
	{
		return 1;
	}
	else if (iParam0 == 32)
	{
		if ((((((((((iParam1 == joaat("sum_prop_archway_01") || iParam1 == joaat("sum_prop_archway_02")) || iParam1 == joaat("sum_prop_archway_03")) || iParam1 == joaat("sum_prop_ac_pit_sign_r_01a")) || iParam1 == joaat("sum_prop_ac_pit_sign_l_01a")) || iParam1 == joaat("sum_prop_ac_tyre_wall_pit_l")) || iParam1 == joaat("sum_prop_ac_tyre_wall_pit_r")) || iParam1 == joaat("sum_prop_ac_tyre_wall_u_l")) || iParam1 == joaat("sum_prop_ac_tyre_wall_u_r")) || iParam1 == joaat("ch_prop_pit_sign_01a")) || iParam1 == joaat("sum_prop_ac_pit_sign_left"))
		{
			return 1;
		}
	}
	else if (iParam0 == 17)
	{
		if ((((iParam1 == joaat("sum_prop_ac_track_pit_stop_01") || iParam1 == joaat("sum_prop_ac_track_pit_stop_16r")) || iParam1 == joaat("sum_prop_ac_track_pit_stop_16l")) || iParam1 == joaat("sum_prop_ac_track_pit_stop_30r")) || iParam1 == joaat("sum_prop_ac_track_pit_stop_30l"))
		{
			return 1;
		}
	}
	return 0;
}

int func_912(int iParam0)//Position - 0x18F1E7
{
	if (((((((((((((((((((iParam0 == joaat("ar_prop_ar_jump_loop") || iParam0 == joaat("ar_prop_ar_start_01a")) || iParam0 == joaat("ar_prop_ar_speed_ring")) || iParam0 == joaat("ar_prop_ar_hoop_med_01")) || iParam0 == joaat("ar_prop_ar_arrow_thin_m")) || iParam0 == joaat("ar_prop_ar_arrow_wide_m")) || iParam0 == joaat("ar_prop_ar_arrow_thin_l")) || iParam0 == joaat("ar_prop_ar_arrow_wide_l")) || iParam0 == joaat("ar_prop_ar_arrow_thin_xl")) || iParam0 == joaat("ar_prop_ar_arrow_wide_xl")) || iParam0 == joaat("ar_prop_ar_bblock_huge_01")) || iParam0 == joaat("vw_prop_vw_bblock_huge_01")) || iParam0 == joaat("ar_prop_ar_bblock_huge_02")) || iParam0 == joaat("vw_prop_vw_bblock_huge_02")) || iParam0 == joaat("ar_prop_ar_bblock_huge_03")) || iParam0 == joaat("vw_prop_vw_bblock_huge_03")) || iParam0 == joaat("as_prop_as_bblock_huge_04")) || iParam0 == joaat("vw_prop_vw_bblock_huge_04")) || iParam0 == joaat("as_prop_as_bblock_huge_05")) || iParam0 == joaat("vw_prop_vw_bblock_huge_05"))
	{
		return 1;
	}
	return 0;
}

int func_913(int iParam0, int iParam1)//Position - 0x18F309
{
	if (iParam0 == 31)
	{
		if (iParam1 == joaat("sr_prop_sr_track_jumpwall"))
		{
			return 1;
		}
	}
	else if (iParam0 == 33)
	{
		if ((iParam1 == joaat("sr_prop_track_refill") || iParam1 == joaat("sr_prop_track_refill_t2")) || iParam1 == joaat("sr_prop_track_refill_t1"))
		{
			return 1;
		}
	}
	else if (iParam0 == 32)
	{
		if (((iParam1 == joaat("sr_mp_spec_races_blimp_sign") || iParam1 == joaat("sr_mp_spec_races_take_flight_sign")) || iParam1 == joaat("sr_mp_spec_races_ron_sign")) || iParam1 == joaat("sr_mp_spec_races_xero_sign"))
		{
			return 1;
		}
	}
	else if (iParam0 == 17)
	{
		if ((((((((iParam1 == joaat("sr_prop_sr_start_line_02") || iParam1 == joaat("sr_prop_track_straight_l_d5")) || iParam1 == joaat("sr_prop_track_straight_l_d15")) || iParam1 == joaat("sr_prop_track_straight_l_d30")) || iParam1 == joaat("sr_prop_track_straight_l_d45")) || iParam1 == joaat("sr_prop_track_straight_l_u5")) || iParam1 == joaat("sr_prop_track_straight_l_u15")) || iParam1 == joaat("sr_prop_track_straight_l_u30")) || iParam1 == joaat("sr_prop_track_straight_l_u45"))
		{
			return 1;
		}
	}
	else if (iParam0 == 21)
	{
		if ((iParam1 == joaat("sr_prop_sr_tube_end") || iParam1 == joaat("stt_prop_track_tube_01")) || iParam1 == joaat("sr_prop_spec_tube_refill"))
		{
			return 1;
		}
	}
	else if (iParam0 == 14)
	{
		if ((((((iParam1 == joaat("sr_prop_sr_boxpile_01") || iParam1 == joaat("sr_prop_sr_boxpile_02")) || iParam1 == joaat("sr_prop_sr_boxpile_03")) || iParam1 == joaat("sr_prop_sr_track_wall")) || iParam1 == joaat("sr_prop_sr_tube_wall")) || iParam1 == joaat("ar_prop_ar_ammu_sign")) || iParam1 == joaat("sr_mp_spec_races_ammu_sign"))
		{
			return 1;
		}
	}
	return 0;
}

void func_914(int iParam0, var uParam1, int iParam2)//Position - 0x18F651
{
	if (*uParam1 >= iParam0)
	{
		*uParam1 = (iParam2 + (*uParam1 - iParam0));
	}
	else if (*uParam1 < iParam2)
	{
		*uParam1 = (iParam0 + (*uParam1 - iParam2));
		if (*uParam1 < iParam2)
		{
			*uParam1 = iParam2;
		}
	}
}

int func_915(int* iParam0, int iParam1, int iParam2)//Position - 0x18F691
{
	if (!__LIB_0__::func_236() || iParam2)
	{
		if (iParam0->f_893 == 30)
		{
			if ((((((((((((((((iParam1 == joaat("bkr_prop_biker_jump_s") || iParam1 == joaat("bkr_prop_biker_jump_m")) || iParam1 == joaat("bkr_prop_biker_jump_l")) || iParam1 == joaat("bkr_prop_biker_jump_sb")) || iParam1 == joaat("bkr_prop_biker_jump_mb")) || iParam1 == joaat("bkr_prop_biker_jump_lb")) || iParam1 == joaat("bkr_prop_biker_jump_01a")) || iParam1 == joaat("bkr_prop_biker_jump_01b")) || iParam1 == joaat("bkr_prop_biker_jump_01c")) || iParam1 == joaat("bkr_prop_biker_jump_02a")) || iParam1 == joaat("bkr_prop_biker_jump_02b")) || iParam1 == joaat("bkr_prop_biker_jump_02c")) || iParam1 == joaat("imp_prop_impexp_bblock_qp3")) || iParam1 == joaat("bkr_prop_biker_bblock_qp2")) || iParam1 == joaat("bkr_prop_biker_bblock_qp")) || iParam1 == joaat("bkr_prop_biker_bblock_hump_01")) || iParam1 == joaat("bkr_prop_biker_bblock_hump_02"))
			{
				return 1;
			}
		}
		else if (iParam0->f_893 == 28)
		{
			if ((((((((((((((((iParam1 == joaat("bkr_prop_biker_bblock_sml1") || iParam1 == joaat("bkr_prop_biker_bblock_sml2")) || iParam1 == joaat("bkr_prop_biker_bblock_sml3")) || iParam1 == joaat("bkr_prop_biker_bblock_mdm1")) || iParam1 == joaat("bkr_prop_biker_bblock_mdm2")) || iParam1 == joaat("bkr_prop_biker_bblock_mdm3")) || iParam1 == joaat("bkr_prop_biker_bblock_lrg1")) || iParam1 == joaat("bkr_prop_biker_bblock_lrg2")) || iParam1 == joaat("bkr_prop_biker_bblock_lrg3")) || iParam1 == joaat("bkr_prop_biker_bblock_xl1")) || iParam1 == joaat("bkr_prop_biker_bblock_xl2")) || iParam1 == joaat("bkr_prop_biker_bblock_xl3")) || iParam1 == joaat("bkr_prop_biker_bblock_huge_01")) || iParam1 == joaat("bkr_prop_biker_bblock_huge_02")) || iParam1 == joaat("bkr_prop_biker_bblock_huge_03")) || iParam1 == joaat("bkr_prop_biker_bblock_huge_04")) || iParam1 == joaat("bkr_prop_biker_bblock_huge_05"))
			{
				return 1;
			}
		}
		else if (iParam0->f_893 == 31)
		{
			if (((iParam1 == joaat("bkr_prop_biker_landing_zone_01") || iParam1 == joaat("bkr_prop_biker_bowlpin_stand")) || iParam1 == joaat("bkr_prop_biker_target_small")) || iParam1 == joaat("bkr_prop_biker_target"))
			{
				return 1;
			}
		}
		else if (iParam0->f_893 == 21)
		{
			if ((((((((((iParam1 == joaat("bkr_prop_biker_tube_xxs") || iParam1 == joaat("bkr_prop_biker_tube_xs")) || iParam1 == joaat("bkr_prop_biker_tube_s")) || iParam1 == joaat("bkr_prop_biker_tube_m")) || iParam1 == joaat("bkr_prop_biker_tube_l")) || iParam1 == joaat("bkr_prop_biker_tube_crn")) || iParam1 == joaat("bkr_prop_biker_tube_crn2")) || iParam1 == joaat("bkr_prop_biker_tube_cross")) || iParam1 == joaat("bkr_prop_biker_tube_gap_01")) || iParam1 == joaat("bkr_prop_biker_tube_gap_02")) || iParam1 == joaat("bkr_prop_biker_tube_gap_03"))
			{
				return 1;
			}
		}
		else if (iParam0->f_893 == 14)
		{
			if (iParam1 == joaat("sr_mp_spec_races_ammu_sign"))
			{
				return 1;
			}
		}
		else if (iParam0->f_893 == 9)
		{
			if (iParam1 == joaat("prop_jetski_ramp_01"))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_916(var uParam0, bool bParam1)//Position - 0x18FDB9
{
	struct<3> Var0;
	if (!bParam1)
	{
		return *(uParam0[0 /*3*/]);
	}
	Var0 = { *(uParam0[0 /*3*/]) + *(uParam0[1 /*3*/]) };
	return Var0 * Vector(0.5f, 0.5f, 0.5f);
}

int func_917(int iParam0, int iParam1)//Position - 0x18FDF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 919599;
	switch (iParam0)
	{
		case 1:
			if (PED::GET_CLOSEST_PED(Global_4980736.f_94390[iParam1 /*1004*/], 1f, false, true, &iVar1, false, true, -1))
			{
				iVar0 = iVar1;
			}
			break;
		case 2:
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Global_4980736.f_78578[iParam1 /*450*/], 1f, Global_4980736.f_78578[iParam1 /*450*/].f_12, iVar2);
			break;
		case 3:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4980736.f_5742[iParam1 /*442*/], 1f, Global_4980736.f_5742[iParam1 /*442*/].f_15, true, false, true);
			break;
		case 11:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4980736.f_36356[iParam1 /*134*/], 1f, Global_4980736.f_36356[iParam1 /*134*/].f_7, true, false, true);
			break;
		case 12:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4980736.f_63312[iParam1 /*183*/], 1f, Global_4980736.f_63312[iParam1 /*183*/].f_7, true, false, true);
			break;
		case 16:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4980736.f_20330[iParam1 /*234*/].f_39, 1f, Global_4980736.f_20330[iParam1 /*234*/], true, false, true);
			break;
		default:
			break;
	}
	return iVar0;
}

void func_918(var uParam0)//Position - 0x190408
{
	if ((*uParam0)[0 /*3*/] > (*uParam0)[1 /*3*/])
	{
		__LIB_12__::func_374(uParam0[0 /*3*/], uParam0[1 /*3*/]);
	}
	if ((uParam0[0 /*3*/])->f_1 > (uParam0[1 /*3*/])->f_1)
	{
		__LIB_12__::func_374(&((uParam0[0 /*3*/])->f_1), &((uParam0[1 /*3*/])->f_1));
	}
	if ((uParam0[0 /*3*/])->f_2 > (uParam0[1 /*3*/])->f_2)
	{
		__LIB_12__::func_374(&((uParam0[0 /*3*/])->f_2), &((uParam0[1 /*3*/])->f_2));
	}
}

int func_919(int iParam0)//Position - 0x19049A
{
	switch (iParam0)
	{
		case 9:
			return 8;
		case 48:
			return 10;
		case 62:
			return 2;
		case 74:
			return 6;
		default:
	}
	return 32;
}

int func_920(int iParam0)//Position - 0x1904D5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= (Global_4980736.f_195933 - 1))
	{
		if (Global_4980736.f_195934[iVar1 /*111*/].f_10 == iParam0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

float func_921(int iParam0)//Position - 0x190630
{
	switch (iParam0)
	{
		case 63:
			return 10000f;
		default:
	}
	return 1000f;
}

float func_922(int iParam0)//Position - 0x190652
{
	switch (iParam0)
	{
		case 63:
			return 15000f;
		default:
	}
	return 1500f;
}

void func_923(var uParam0, var uParam1)//Position - 0x190998
{
	if (*uParam0 > *uParam1)
	{
		__LIB_12__::func_374(uParam0, uParam1);
	}
}

void func_924(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1909B2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Var1 = { -90f, 0f, 0f };
	Var2 = { 1f, 1f, 1f };
	Var0 = { fParam1, fParam1, fParam1 };
	switch (iParam2)
	{
		case 2:
			HUD::GET_HUD_COLOUR(6, &iVar4, &iVar5, &iVar6, &iVar7);
			Var3 = { 1f, 0f, 0f };
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector(0f, 0f, (Var0.f_0 * 0.5f)), Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector(0f, 0f, (-Var0.f_0 * 0.5f)), -Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			break;
		case 3:
			HUD::GET_HUD_COLOUR(18, &iVar4, &iVar5, &iVar6, &iVar7);
			Var3 = { 0f, 1f, 0f };
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector(0f, (Var0.f_1 * 0.5f), 0f), Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector(0f, (-Var0.f_1 * 0.5f), 0f), -Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			break;
		case 4:
			HUD::GET_HUD_COLOUR(9, &iVar4, &iVar5, &iVar6, &iVar7);
			Var3 = { 0f, 0f, 1f };
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector((Var0.f_2 * 0.5f), 0f, 0f), Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			GRAPHICS::DRAW_MARKER(0, Param0 + Vector(-(Var0.f_2 * 0.5f), 0f, 0f), -Var3, Var1, Var2, iVar4, iVar5, iVar6, iVar7, false, false, 2, false, 0, 0, false);
			break;
	}
}

bool func_925(var uParam0)//Position - 0x190B5E
{
	return uParam0->f_271 == 699;
}

int func_926(var uParam0)//Position - 0x193B26
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4718592.f_110280[iVar0] == 0)
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(Global_4718592.f_110280[iVar0]);
			if (!STREAMING::HAS_MODEL_LOADED(Global_4718592.f_110280[iVar0]))
			{
			}
			else
			{
				MISC::GET_MODEL_DIMENSIONS(Global_4718592.f_110280[iVar0], &Var3, &Var2);
				Var1 = { Var2 - Var3 };
				if (Var1.f_1 > uParam0->f_1)
				{
					uParam0->f_1 = Var1.f_1;
					iVar4 = Global_4718592.f_110280[iVar0];
				}
				if ((Var1.f_0 * 2f) > *uParam0)
				{
					*uParam0 = (Var1.f_0 * 2f);
					iVar4 = Global_4718592.f_110280[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_927(int* iParam0)//Position - 0x193BE8
{
	if (iParam0->f_914 == 17 && iParam0->f_3048 != 0)
	{
		iParam0->f_3048 = 0;
	}
	if (iParam0->f_914 == 18 && iParam0->f_3047 != 0)
	{
		iParam0->f_3047 = 0;
	}
	if (iParam0->f_914 != 17 && iParam0->f_914 != 18)
	{
		iParam0->f_3048 = 0;
		iParam0->f_3047 = 0;
	}
}

int func_928(int iParam0)//Position - 0x193D25
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_COMBATPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_APPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_MICROSMG"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_SMG"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_CARBINERIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_MG"):
			return joaat("PICKUP_AMMO_MG");
		case joaat("WEAPON_COMBATMG"):
			return joaat("PICKUP_AMMO_MG");
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_SNIPERRIFLE"):
			return joaat("PICKUP_AMMO_SNIPER");
		case joaat("WEAPON_HEAVYSNIPER"):
			return joaat("PICKUP_AMMO_SNIPER");
		case joaat("WEAPON_GRENADELAUNCHER"):
			return joaat("PICKUP_AMMO_GRENADELAUNCHER");
		case joaat("WEAPON_RPG"):
			return joaat("PICKUP_AMMO_RPG");
		case joaat("WEAPON_MINIGUN"):
			return joaat("PICKUP_AMMO_MINIGUN");
		case joaat("WEAPON_GRENADE"):
			return joaat("PICKUP_AMMO_GRENADELAUNCHER");
		case joaat("WEAPON_SMOKEGRENADE"):
			return joaat("PICKUP_AMMO_GRENADELAUNCHER");
		case joaat("WEAPON_STICKYBOMB"):
			return joaat("PICKUP_WEAPON_STICKYBOMB");
		case joaat("WEAPON_MOLOTOV"):
			return joaat("PICKUP_WEAPON_MOLOTOV");
		case joaat("WEAPON_STUNGUN"):
			return joaat("PICKUP_WEAPON_STUNGUN");
		case joaat("WEAPON_PETROLCAN"):
			return joaat("PICKUP_WEAPON_PETROLCAN");
		case joaat("WEAPON_KNIFE"):
			return joaat("PICKUP_WEAPON_KNIFE");
		case joaat("WEAPON_NIGHTSTICK"):
			return joaat("PICKUP_WEAPON_NIGHTSTICK");
		case joaat("WEAPON_HAMMER"):
			return joaat("PICKUP_WEAPON_HAMMER");
		case joaat("WEAPON_BAT"):
			return joaat("PICKUP_WEAPON_BAT");
		case joaat("WEAPON_CROWBAR"):
			return joaat("PICKUP_WEAPON_CROWBAR");
		case joaat("WEAPON_GOLFCLUB"):
			return joaat("PICKUP_WEAPON_GOLFCLUB");
		case joaat("WEAPON_ASSAULTSMG"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_PISTOL50"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_ASSAULTMG"):
			return joaat("PICKUP_AMMO_MG");
		case joaat("WEAPON_HEAVYRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_BOTTLE"):
			return joaat("PICKUP_WEAPON_BOTTLE");
		case joaat("WEAPON_SPECIALCARBINE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_SNSPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_HEAVYPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_BULLPUPRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_GUSENBERG"):
			return joaat("PICKUP_AMMO_MG");
		case joaat("WEAPON_VINTAGEPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_MUSKET"):
			return joaat("PICKUP_AMMO_SNIPER");
		case joaat("WEAPON_FIREWORK"):
			return joaat("PICKUP_AMMO_FIREWORK");
		case joaat("WEAPON_FLAREGUN"):
			return joaat("PICKUP_AMMO_FLAREGUN");
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_MARKSMANRIFLE"):
			return joaat("PICKUP_AMMO_SNIPER");
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return joaat("PICKUP_AMMO_HOMINGLAUNCHER");
		case joaat("WEAPON_PROXMINE"):
			return joaat("PICKUP_WEAPON_PROXMINE");
		case joaat("WEAPON_COMBATPDW"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_MARKSMANPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_MACHETE"):
			return joaat("PICKUP_WEAPON_MACHETE");
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return joaat("PICKUP_AMMO_SMG");
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
			break;
		case joaat("WEAPON_REVOLVER"):
			return joaat("PICKUP_AMMO_PISTOL");
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_MINISMG"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return joaat("PICKUP_AMMO_GRENADELAUNCHER");
		case joaat("WEAPON_PIPEBOMB"):
			return joaat("PICKUP_WEAPON_PIPEBOMB");
		case joaat("WEAPON_POOLCUE"):
			return joaat("PICKUP_WEAPON_POOLCUE");
		case joaat("WEAPON_BATTLEAXE"):
			return joaat("PICKUP_WEAPON_BATTLEAXE");
		case joaat("WEAPON_WRENCH"):
			return joaat("PICKUP_WEAPON_WRENCH");
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("PICKUP_AMMO_MG");
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("PICKUP_AMMO_SNIPER");
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_SMG_MK2"):
			return joaat("PICKUP_AMMO_SMG");
		case joaat("WEAPON_NAVYREVOLVER"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_DOUBLEACTION"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_MILITARYRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_COMBATSHOTGUN"):
			return joaat("PICKUP_AMMO_SHOTGUN");
		case joaat("WEAPON_GADGETPISTOL"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_EMPLAUNCHER"):
			return joaat("PICKUP_AMMO_EMPLAUNCHER");
		case joaat("WEAPON_STUNGUN_MP"):
			return joaat("PICKUP_AMMO_PISTOL");
		case joaat("WEAPON_TACTICALRIFLE"):
			return joaat("PICKUP_AMMO_RIFLE");
		case joaat("WEAPON_PRECISIONRIFLE"):
			return joaat("PICKUP_AMMO_SNIPER");
	}
	return joaat("PICKUP_WEAPON_PISTOL");
}

bool func_929(var uParam0)//Position - 0x19418F
{
	return BitTest(uParam0, 25);
}

Vector3 func_930()//Position - 0x19443A
{
	struct<3> Var0;
	Var0 = { Global_4718592.f_170137.f_2717[1 /*3*/] };
	if (Global_4718592.f_170137.f_2727 == 1)
	{
		Var0 = { Global_4718592.f_170137.f_2717[0 /*3*/] };
	}
	Var0.f_2 = (Var0.f_2 + Global_4718592.f_170137.f_2725);
	return Var0;
}

Vector3 func_931()//Position - 0x194495
{
	struct<3> Var0;
	Var0 = { Global_4718592.f_170137.f_2717[0 /*3*/] };
	Var0.f_2 = (Var0.f_2 - Global_4718592.f_170137.f_2726);
	return Var0;
}

bool func_932()//Position - 0x1944CB
{
	return ((Global_4718592.f_170137.f_2725 != 0f || Global_4718592.f_170137.f_2726 != 0f) || BitTest(Global_4718592.f_170137.f_2808, 1));
}

void func_933(int* iParam0)//Position - 0x194509
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_2576)
	{
		iParam0->f_2576[iVar0] = 0;
		iVar0++;
	}
}

int func_934(int iParam0, bool bParam1)//Position - 0x19465C
{
	int iVar0;
	iVar0 = 0;
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 19;
		}
		if (iParam0 == 1)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 9;
		}
		if (iParam0 == 2)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 11;
		}
		if (iParam0 == 3)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 15;
		}
		if (iParam0 == 4)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 6;
		}
		if (iParam0 == 5)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 9;
		}
		if (iParam0 == 6)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 8;
		}
		if (iParam0 == 7)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 17;
		}
		if (iParam0 == 8)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 5;
			if (!__LIB_6__::func_154())
			{
				iVar0 = (iVar0 - 2);
			}
		}
	}
	else
	{
		if (iParam0 == 0)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 7;
		}
		if (iParam0 == 1)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 4;
		}
		if (iParam0 == 2)
		{
			return iVar0;
		}
		else
		{
			iVar0 += 3;
		}
	}
	return iVar0;
}

int func_935(int iParam0)//Position - 0x19863E
{
	if ((iParam0 == joaat("technical2") || iParam0 == joaat("blazer5")) || iParam0 == joaat("stromberg"))
	{
		return 1;
	}
	return 0;
}

Vector3 func_936()//Position - 0x19A7CE
{
	struct<3> Var0;
	switch (Global_4718592.f_170137.f_2727)
	{
		case 0:
			Var0 = { Global_4718592.f_170137.f_2717[0 /*3*/] + Global_4718592.f_170137.f_2717[1 /*3*/] - Global_4718592.f_170137.f_2717[0 /*3*/] / Vector(2f, 2f, 2f) };
			break;
		case 1:
			Var0 = { Global_4718592.f_170137.f_2717[0 /*3*/] };
			break;
	}
	return Var0;
}

int func_937(int iParam0)//Position - 0x19A90C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_938(int iParam0, int iParam1)//Position - 0x19A938
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam1 == (*iParam0)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_939(struct<3> Param0, var uParam1)//Position - 0x19AB0D
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	Var0 = { 0f, 0.8f, 2.2f };
	Var1 = { 0f, -4.8f, 0.1f };
	fVar2 = 2.5f;
	Var3 = { 0f, 10f, 10f };
	Var4 = { 0f, -15f, -10f };
	fVar5 = 2.5f;
	Var6 = { 0f, -0.45f, 1.75f };
	Var7 = { 0f, -2.75f, -0.5f };
	fVar8 = 2f;
	iVar9 = 0;
	while (iVar9 < uParam1->f_1)
	{
		if (STREAMING::IS_MODEL_VALID(Global_4980736.f_78578[iVar9 /*450*/].f_12))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iVar9]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1[iVar9], false))
		{
			if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("flatbed"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var1), fVar2, false, true))
				{
					return iVar9;
				}
			}
			else if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("titan"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var3), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var4), fVar5, false, true))
				{
					return iVar9;
				}
			}
			else if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("tr2"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var1), fVar2, false, true))
				{
					return iVar9;
				}
			}
			else if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("wastelander"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var1), fVar2, false, true))
				{
					return iVar9;
				}
			}
			else if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("cargobob2"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var1), fVar2, false, true))
				{
					return iVar9;
				}
			}
			else if (Global_4980736.f_78578[iVar9 /*450*/].f_12 == joaat("speedo"))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var6), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar9], Var7), fVar8, false, true))
				{
					return iVar9;
				}
			}
		}
		iVar9++;
	}
	return -1;
}

int func_940(var uParam0, var uParam1, int iParam2)//Position - 0x19AE17
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iParam2]) && ENTITY::GET_ENTITY_MODEL(uParam1->f_1[iParam2]) == joaat("prop_container_ld"))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_78574 - 1))
		{
			if ((Global_4980736.f_78578[iVar0 /*450*/].f_204 == iParam2 && Global_4980736.f_78578[iVar0 /*450*/].f_205 == 3) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_941(struct<3> Param0, var uParam1)//Position - 0x19AEA9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	Var0 = { 0f, 0.8f, 6f };
	Var1 = { 0f, -4.8f, 0.1f };
	fVar2 = 2.5f;
	iVar3 = 0;
	while (iVar3 < uParam1->f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iVar3]) && SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(uParam1->f_1[iVar3], true)) < 100f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar3], Var0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1[iVar3], Var1), fVar2, false, true))
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return -1;
}

int func_942(var uParam0, var uParam1, int iParam2)//Position - 0x19B092
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1[iParam2], false))
	{
		if ((((VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1[iParam2], joaat("flatbed")) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1[iParam2], joaat("titan"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1[iParam2], joaat("tr2"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1[iParam2], joaat("wastelander"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1[iParam2], joaat("speedo")))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_4980736.f_78574 - 1))
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_204 == iParam2 && Global_4980736.f_78578[iVar0 /*450*/].f_205 == 1)
				{
					return 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Global_4980736.f_5739 - 1))
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_214 == iParam2 && ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iVar0]))
				{
					return 0;
				}
				iVar0++;
			}
			return 1;
		}
	}
	return 0;
}

int func_943(struct<3> Param0)//Position - 0x19B25A
{
	var uVar0;
	if (Global_4718592.f_107227 == 2 || Global_4718592.f_107227 == 3)
	{
		return 1;
	}
	if (WATER::GET_WATER_HEIGHT_NO_WAVES(Param0 + Vector(1.5f, 0f, 0f), &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_944(int iParam0)//Position - 0x19B2A1
{
	if (((((((((iParam0 == joaat("marquis") || iParam0 == joaat("tropic")) || iParam0 == joaat("suntrap")) || iParam0 == joaat("cuban800")) || iParam0 == joaat("duster")) || iParam0 == joaat("mammatus")) || iParam0 == joaat("vestra")) || iParam0 == joaat("velum")) || iParam0 == joaat("velum2")) || iParam0 == joaat("gburrito2"))
	{
		return 1;
	}
	return 0;
}

int func_945(int iParam0, int iParam1, bool bParam2)//Position - 0x19B3FF
{
	switch (iParam0)
	{
		case 0:
			if ((iParam1 == joaat("granger") || iParam1 == joaat("barracks")) || iParam1 == joaat("barracks3"))
			{
				return joaat("prop_box_ammo03a_set2");
			}
			else
			{
				return joaat("prop_box_ammo03a_set");
			}
			break;
		case 1:
			return joaat("hei_prop_hei_ammo_pile");
			break;
		case 2:
			return joaat("hei_prop_hei_ammo_pile_02");
			break;
		case 3:
			if ((iParam1 == joaat("granger") || iParam1 == joaat("barracks")) || iParam1 == joaat("barracks3"))
			{
				return joaat("hei_prop_crate_stack_01");
			}
			else
			{
				return joaat("prop_drop_crate_01_set");
			}
			break;
		case 4:
			return joaat("hei_prop_heist_weed_pallet_02");
			break;
		case 5:
			if (iParam1 == joaat("granger"))
			{
				return 0;
			}
			else
			{
				return joaat("prop_mb_crate_01a_set");
			}
			break;
		case 6:
			return joaat("hei_prop_heist_tub_truck");
		case 7:
			return joaat("hei_prop_drug_statue_stack");
			break;
		case 8:
			if (bParam2)
			{
				return joaat("hei_prop_mini_sever_02");
			}
			else
			{
				return joaat("hei_prop_mini_sever_broken");
			}
			break;
		case 9:
			return joaat("hei_prop_mini_sever_03");
			break;
		case 10:
			return joaat("hei_prop_heist_transponder");
			break;
		case 11:
			return joaat("xm_prop_vancrate_01a");
			break;
		case 12:
			return joaat("hei_prop_heist_emp");
			break;
		case 13:
			return joaat("prop_air_cargo_04a");
			break;
		case 14:
			return joaat("sf_prop_sf_pallet_01a");
		case 15:
			return joaat("sf_prop_sf_box_wood_01a");
		case 16:
			return joaat("sf_prop_sf_golf_bag_01b");
		case 17:
			return joaat("reh_prop_reh_box_wood01a");
		case 18:
			return joaat("reh_prop_reh_bomb_tech_01a");
		case 19:
			return joaat("reh_prop_reh_box_metal_01a");
	}
	return 0;
}

void func_946(int* iParam0, int iParam1)//Position - 0x19B776
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar0 + 1))
		{
			MISC::SET_BIT(&(iParam0->f_2593), iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&(iParam0->f_2593), iVar0);
		}
		iVar0++;
	}
}

bool func_947()//Position - 0x19BDBC
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fm_mission_creator")) > 0;
}

char* func_948(int iParam0)//Position - 0x19C0DF
{
	switch (iParam0)
	{
		case 0:
			return "FMMC_COL1_0" /* GXT: Black */;
		case 1:
			return "FMMC_COL1_1" /* GXT: Black Poly */;
		case 2:
			return "FMMC_COL1_2" /* GXT: Silver */;
		case 3:
			return "FMMC_COL1_3" /* GXT: Gunmetal */;
		case 4:
			return "FMMC_COL1_4" /* GXT: Matte Light Gray */;
		case 5:
			return "FMMC_COL1_5" /* GXT: White */;
		case 6:
			return "FMMC_COL1_6" /* GXT: Red */;
		case 7:
			return "FMMC_COL1_7" /* GXT: Matte Dark Red */;
		case 8:
			return "FMMC_COL1_8" /* GXT: Matte Orange */;
		case 9:
			return "FMMC_COL1_9" /* GXT: Matte Yellow */;
		case 10:
			return "FMMC_COL1_10" /* GXT: Dark Green */;
		case 11:
			return "FMMC_COL1_11" /* GXT: Green */;
		case 12:
			return "FMMC_COL1_12" /* GXT: Gasoline Green */;
		case 13:
			return "FMMC_COL1_13" /* GXT: Blue Poly */;
		case 14:
			return "FMMC_COL1_14" /* GXT: Dark Blue */;
		case 15:
			return "FMMC_COL1_15" /* GXT: Blue */;
		case 16:
			return "FMMC_COL1_16" /* GXT: Yellow */;
		case 17:
			return "FMMC_COL1_17" /* GXT: Race Yellow */;
		case 18:
			return "FMMC_COL1_18" /* GXT: Sandy Brown */;
		case 19:
			return "FMMC_COL1_19" /* GXT: Gold */;
		case 20:
			return "FMMC_COL1_20" /* GXT: Bronze */;
		case 21:
			return "FMMC_COL1_21" /* GXT: Hot Pink */;
		case 22:
			return "FMMC_COL1_22" /* GXT: Pfister Pink */;
		case 23:
			return "FMMC_COL1_23" /* GXT: Salmon Pink */;
		case 24:
			return "FMMC_COL1_24" /* GXT: Bright Purple */;
		case 25:
			return "FMMC_COL1_25" /* GXT: Schafter Purple */;
		case 26:
			return "FMMC_COL1_26" /* GXT: Lime Green */;
		case 27:
			return "FMMC_COL1_27" /* GXT: Bright Green */;
		case 28:
			return "FMMC_COL1_28" /* GXT: Ultra Blue */;
		case 29:
			return "FMMC_COL1_29" /* GXT: Grace Red */;
		case 30:
			return "FMMC_COL1_30" /* GXT: Cabernet Red */;
		case 31:
			return "FMMC_COL1_31" /* GXT: Orange */;
		case 32:
			return "FMMC_COL1_32" /* GXT: Bright Orange */;
		case 33:
			return "FMMC_COL1_33" /* GXT: Matte Black */;
		case 34:
			return "FMMC_COL1_34" /* GXT: Matte Gray */;
		case 35:
			return "FMMC_COL1_35" /* GXT: Matte Ice White */;
		case 36:
			return "FMMC_COL1_36" /* GXT: Matte Blue */;
		case 37:
			return "FMMC_COL1_37" /* GXT: Matte Red */;
		case 38:
			return "FMMC_COL1_38" /* GXT: Matte Green */;
		case 39:
			return "FMMC_COL1_39" /* GXT: Matte Lime Green */;
		case 40:
			return "FMMC_COL1_40" /* GXT: Matte Schafter Purple */;
		case 41:
			return "FMMC_COL1_41" /* GXT: Matte Dark Earth */;
		case 42:
			return "FMMC_COL1_42" /* GXT: Matte Desert Tan */;
		case 43:
			return "FMMC_COL1_43" /* GXT: Brushed Steel */;
		case 44:
			return "FMMC_COL1_44" /* GXT: Brushed Aluminum */;
		case 45:
			return "FMMC_COL1_45" /* GXT: Brushed Gold */;
		case 46:
			return "FMMC_COL1_46" /* GXT: Chrome */;
		case 47:
			return "FMMC_COL1_47" /* GXT: Diamond Blue */;
		default:
	}
	return "FMMC_RC_COL";
}

int func_949(int iParam0)//Position - 0x19C393
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 5:
			iVar0 = 5;
			break;
		case 6:
			iVar0 = 6;
			break;
		case 7:
			iVar0 = 7;
			break;
		case 8:
			iVar0 = 8;
			break;
		case 9:
			iVar0 = 9;
			break;
		case 10:
			iVar0 = 10;
			break;
		case 27:
			iVar0 = 11;
			break;
		case 28:
			iVar0 = 12;
			break;
		case 150:
			iVar0 = 13;
			break;
		case 30:
			iVar0 = 14;
			break;
		case 31:
			iVar0 = 15;
			break;
		case 32:
			iVar0 = 16;
			break;
		case 33:
			iVar0 = 17;
			break;
		case 34:
			iVar0 = 18;
			break;
		case 143:
			iVar0 = 19;
			break;
		case 35:
			iVar0 = 20;
			break;
		case 137:
			iVar0 = 21;
			break;
		case 136:
			iVar0 = 22;
			break;
		case 36:
			iVar0 = 23;
			break;
		case 38:
			iVar0 = 24;
			break;
		case 138:
			iVar0 = 25;
			break;
		case 90:
			iVar0 = 26;
			break;
		case 88:
			iVar0 = 27;
			break;
		case 89:
			iVar0 = 28;
			break;
		case 91:
			iVar0 = 29;
			break;
		case 49:
			iVar0 = 30;
			break;
		case 50:
			iVar0 = 31;
			break;
		case 51:
			iVar0 = 32;
			break;
		case 52:
			iVar0 = 33;
			break;
		case 53:
			iVar0 = 34;
			break;
		case 54:
			iVar0 = 35;
			break;
		case 92:
			iVar0 = 36;
			break;
		case 141:
			iVar0 = 37;
			break;
		case 61:
			iVar0 = 38;
			break;
		case 62:
			iVar0 = 39;
			break;
		case 63:
			iVar0 = 40;
			break;
		case 65:
			iVar0 = 41;
			break;
		case 66:
			iVar0 = 42;
			break;
		case 67:
			iVar0 = 43;
			break;
		case 68:
			iVar0 = 44;
			break;
		case 69:
			iVar0 = 45;
			break;
		case 73:
			iVar0 = 46;
			break;
		case 70:
			iVar0 = 47;
			break;
		case 74:
			iVar0 = 48;
			break;
		case 96:
			iVar0 = 49;
			break;
		case 101:
			iVar0 = 50;
			break;
		case 95:
			iVar0 = 51;
			break;
		case 94:
			iVar0 = 52;
			break;
		case 97:
			iVar0 = 53;
			break;
		case 103:
			iVar0 = 54;
			break;
		case 104:
			iVar0 = 55;
			break;
		case 98:
			iVar0 = 56;
			break;
		case 100:
			iVar0 = 57;
			break;
		case 102:
			iVar0 = 58;
			break;
		case 99:
			iVar0 = 59;
			break;
		case 105:
			iVar0 = 60;
			break;
		case 106:
			iVar0 = 61;
			break;
		case 72:
			iVar0 = 62;
			break;
		case 146:
			iVar0 = 63;
			break;
		case 145:
			iVar0 = 64;
			break;
		case 107:
			iVar0 = 65;
			break;
		case 111:
			iVar0 = 66;
			break;
		case 112:
			iVar0 = 67;
			break;
	}
	return iVar0;
}

bool func_950(int iParam0, var uParam1, char* sParam2)//Position - 0x19C769
{
	*uParam1 = -1;
	StringCopy(sParam2, "", 16);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 15;
			StringCopy(sParam2, "CMOD_COL1_0", 16);
			break;
		case 1:
			*uParam1 = 16;
			StringCopy(sParam2, "CMOD_COL1_1", 16);
			break;
		case 2:
			*uParam1 = 18;
			StringCopy(sParam2, "CMOD_COL1_2", 16);
			break;
		case 3:
			*uParam1 = 19;
			StringCopy(sParam2, "CMOD_COL1_3", 16);
			break;
		case 4:
			*uParam1 = 14;
			StringCopy(sParam2, "CMOD_COL1_4", 16);
			break;
		case 5:
			*uParam1 = 111;
			StringCopy(sParam2, "CMOD_COL1_5", 16);
			break;
		case 6:
			*uParam1 = 27;
			StringCopy(sParam2, "CMOD_COL1_6", 16);
			break;
		case 7:
			*uParam1 = 40;
			StringCopy(sParam2, "CMOD_COL1_7", 16);
			break;
		case 8:
			*uParam1 = 41;
			StringCopy(sParam2, "CMOD_COL1_8", 16);
			break;
		case 9:
			*uParam1 = 42;
			StringCopy(sParam2, "CMOD_COL1_9", 16);
			break;
		case 10:
			*uParam1 = 49;
			StringCopy(sParam2, "CMOD_COL1_10", 16);
			break;
		case 11:
			*uParam1 = 50;
			StringCopy(sParam2, "CMOD_COL1_11", 16);
			break;
		case 12:
			*uParam1 = 54;
			StringCopy(sParam2, "CMOD_COL1_12", 16);
			break;
		case 13:
			*uParam1 = 80;
			StringCopy(sParam2, "CMOD_COL1_13", 16);
			break;
		case 14:
			*uParam1 = 62;
			StringCopy(sParam2, "CMOD_COL1_14", 16);
			break;
		case 15:
			*uParam1 = 64;
			StringCopy(sParam2, "CMOD_COL1_15", 16);
			break;
		case 16:
			*uParam1 = 88;
			StringCopy(sParam2, "CMOD_COL1_16", 16);
			break;
		case 17:
			*uParam1 = 89;
			StringCopy(sParam2, "CMOD_COL1_17", 16);
			break;
		case 18:
			*uParam1 = 105;
			StringCopy(sParam2, "CMOD_COL1_18", 16);
			break;
		case 19:
			*uParam1 = 37;
			StringCopy(sParam2, "CMOD_COL1_19", 16);
			break;
		case 20:
			*uParam1 = 90;
			StringCopy(sParam2, "CMOD_COL1_20", 16);
			break;
		case 21:
			*uParam1 = 135;
			StringCopy(sParam2, "CMOD_COL1_21", 16);
			break;
		case 22:
			*uParam1 = 137;
			StringCopy(sParam2, "CMOD_COL1_22", 16);
			break;
		case 23:
			*uParam1 = 136;
			StringCopy(sParam2, "CMOD_COL1_23", 16);
			break;
		case 24:
			*uParam1 = 145;
			StringCopy(sParam2, "CMOD_COL1_24", 16);
			break;
		case 25:
			*uParam1 = 71;
			StringCopy(sParam2, "CMOD_COL1_25", 16);
			break;
		case 26:
			*uParam1 = 92;
			StringCopy(sParam2, "CMOD_COL1_26", 16);
			break;
		case 27:
			*uParam1 = 53;
			StringCopy(sParam2, "CMOD_COL1_27", 16);
			break;
		case 28:
			*uParam1 = 70;
			StringCopy(sParam2, "CMOD_COL1_28", 16);
			break;
		case 29:
			*uParam1 = 31;
			StringCopy(sParam2, "CMOD_COL1_29", 16);
			break;
		case 30:
			*uParam1 = 34;
			StringCopy(sParam2, "CMOD_COL1_30", 16);
			break;
		case 31:
			*uParam1 = 38;
			StringCopy(sParam2, "CMOD_COL1_31", 16);
			break;
		case 32:
			*uParam1 = 138;
			StringCopy(sParam2, "CMOD_COL1_32", 16);
			break;
		case 33:
			*uParam1 = 12;
			StringCopy(sParam2, "CMOD_COL1_33", 16);
			break;
		case 34:
			*uParam1 = 13;
			StringCopy(sParam2, "CMOD_COL1_34", 16);
			break;
		case 35:
			*uParam1 = 112;
			StringCopy(sParam2, "CMOD_COL1_35", 16);
			break;
		case 36:
			*uParam1 = 83;
			StringCopy(sParam2, "CMOD_COL1_36", 16);
			break;
		case 37:
			*uParam1 = 39;
			StringCopy(sParam2, "CMOD_COL1_37", 16);
			break;
		case 38:
			*uParam1 = 128;
			StringCopy(sParam2, "CMOD_COL1_38", 16);
			break;
		case 39:
			*uParam1 = 55;
			StringCopy(sParam2, "CMOD_COL1_39", 16);
			break;
		case 40:
			*uParam1 = 148;
			StringCopy(sParam2, "CMOD_COL1_40", 16);
			break;
		case 41:
			*uParam1 = 153;
			StringCopy(sParam2, "CMOD_COL1_41", 16);
			break;
		case 42:
			*uParam1 = 154;
			StringCopy(sParam2, "CMOD_COL1_42", 16);
			break;
		case 43:
			*uParam1 = 117;
			StringCopy(sParam2, "CMOD_COL1_43", 16);
			break;
		case 44:
			*uParam1 = 119;
			StringCopy(sParam2, "CMOD_COL1_44", 16);
			break;
		case 45:
			*uParam1 = 159;
			StringCopy(sParam2, "CMOD_COL1_45", 16);
			break;
		case 46:
			*uParam1 = 120;
			StringCopy(sParam2, "CMOD_COL1_46", 16);
			break;
		case 47:
			*uParam1 = 67;
			StringCopy(sParam2, "CMOD_COL1_47", 16);
			break;
	}
	return *uParam1 != -1;
}

void func_951(var uParam0, var uParam1)//Position - 0x19CBD8
{
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_3 = uParam1->f_3;
	uParam0->f_2 = uParam1->f_2;
	*uParam0 = *uParam1;
}

int func_952(int iParam0)//Position - 0x19EC40
{
	if (((((iParam0 == joaat("ch_prop_fingerprint_scanner_01a") || iParam0 == joaat("ch_prop_fingerprint_scanner_01b")) || iParam0 == joaat("ch_prop_fingerprint_scanner_01c")) || iParam0 == joaat("ch_prop_fingerprint_scanner_01d")) || iParam0 == joaat("ch_prop_fingerprint_scanner_01e")) || iParam0 == joaat("ch_prop_fingerprint_scanner_error_01b"))
	{
		return 1;
	}
	return 0;
}

int func_953(int iParam0)//Position - 0x19EC9E
{
	if ((iParam0 == joaat("ch_prop_ch_fuse_box_01a") || iParam0 == joaat("tr_prop_tr_fuse_box_01a")) || iParam0 == joaat("sf_prop_sf_el_box_01a"))
	{
		return 1;
	}
	return 0;
}

void func_954(int iParam0)//Position - 0x19F35F
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		iVar0 = 0;
		while (iVar0 <= 48)
		{
			if (STREAMING::IS_MODEL_VALID(iParam0->f_88[iVar1 /*50*/][iVar0]) && iParam0->f_88[iVar1 /*50*/][iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_88[iVar1 /*50*/][iVar0]);
			}
		else
		{
			}
			else
			{
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_955(int iParam0)//Position - 0x19F3C9
{
	__LIB_0__::func_579(&(Global_1649593.f_548[iParam0 /*2*/]));
	__LIB_0__::func_579(&(Global_1649593.f_569[iParam0 /*2*/]));
}

int func_956(int* iParam0)//Position - 0x19F4BB
{
	if (((iParam0->f_1077 == 8 || iParam0->f_1077 == 15) || iParam0->f_1077 == 19) || iParam0->f_1077 == 18)
	{
		return 1;
	}
	return 0;
}

var func_957(var uParam0, int iParam1, int iParam2)//Position - 0x19F551
{
	if (iParam1 == 13)
	{
		return Global_4718592.f_169889[iParam2];
	}
	return (*uParam0[iParam1 /*50*/])[iParam2];
}

void func_958(bool bParam0)//Position - 0x1A042C
{
	Global_4718592.f_658[bParam0 /*22957*/].f_2753[0 /*36*/].f_13 = { 0f, 0f, 0f };
	Global_4718592.f_658[bParam0 /*22957*/].f_2753[0 /*36*/].f_16 = { 0f, 0f, 0f };
	Global_4718592.f_658[bParam0 /*22957*/].f_2753[0 /*36*/].f_19 = { 0f, 0f, 0f };
	Global_4718592.f_658[bParam0 /*22957*/].f_2753[0 /*36*/].f_23 = 0f;
	Global_4718592.f_658[bParam0 /*22957*/].f_2753[0 /*36*/].f_22 = 0f;
}

void func_959(var uParam0, int iParam1, int iParam2)//Position - 0x1A0ADF
{
	int iVar0;
	if (Global_4980736.f_179962[iParam1 /*3901*/][iParam2 /*65*/].f_9 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_78574 - 1))
		{
			if (uParam0->f_1[iVar0] == Global_4980736.f_179962[iParam1 /*3901*/][iParam2 /*65*/].f_9)
			{
				Global_4980736.f_179962[iParam1 /*3901*/][iParam2 /*65*/].f_7 = iVar0;
			}
			iVar0++;
		}
	}
}

int func_960(int iParam0, int iParam1)//Position - 0x1A12D5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_176055[iParam1] - 1))
	{
		if (Global_4980736.f_179962[iParam1 /*3901*/][iVar0 /*65*/].f_9 == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_961(int iParam0)//Position - 0x1A1929
{
	return (IntToFloat(iParam0) * 0.75f);
}

float func_962(int iParam0)//Position - 0x1A1AE3
{
	return (0.3f * SYSTEM::TO_FLOAT(iParam0));
}

float func_963(int iParam0)//Position - 0x1A1BB4
{
	return SYSTEM::TO_FLOAT(iParam0 * 2);
}

char* func_964(bool bParam0, char* sParam1, char* sParam2)//Position - 0x1A2C24
{
	if (bParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return "FMMC_SEL_YES";
		}
		else
		{
			return sParam1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return "FMMC_SEL_NO";
	}
	else
	{
		return sParam2;
	}
	return "";
}

struct<4> func_965(int iParam0)//Position - 0x1A5544
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	switch (*iParam0)
	{
		case 0:
			StringCopy(&Var0, "FMMC_VHL_0", 16);
			break;
		case 1:
			StringCopy(&Var0, "FMMC_VHL_1", 16);
			break;
		case 2:
			StringCopy(&Var0, "FMMC_VHL_2", 16);
			break;
		case 3:
			StringCopy(&Var0, "FMMC_VHL_3", 16);
			break;
		case 4:
			StringCopy(&Var0, "FMMC_VHL_4", 16);
			break;
		case 5:
			StringCopy(&Var0, "FMMC_VHL_5", 16);
			break;
		case 6:
			StringCopy(&Var0, "FMMC_VHL_6", 16);
			break;
		case 7:
			StringCopy(&Var0, "FMMC_VHL_7", 16);
			break;
		case 8:
			StringCopy(&Var0, "FMMC_VHL_8", 16);
			break;
		case 9:
			StringCopy(&Var0, "FMMC_VHL_9", 16);
			break;
		case 10:
			StringCopy(&Var0, "FMMC_VHL_10", 16);
			break;
		case 11:
			StringCopy(&Var0, "FMMC_VHL_11", 16);
			break;
		case 12:
			StringCopy(&Var0, "FMMC_VHL_12", 16);
			break;
		case 13:
			StringCopy(&Var0, "FMMC_VHL_13", 16);
			break;
		case 14:
			StringCopy(&Var0, "FMMC_VHL_14", 16);
			break;
		case 15:
			StringCopy(&Var0, "FMMC_VHL_15", 16);
			break;
		case 16:
			StringCopy(&Var0, "FMMC_VHL_16", 16);
			break;
		case 17:
			StringCopy(&Var0, "FMMC_VHL_17", 16);
			break;
		case 18:
			StringCopy(&Var0, "FMMC_VHL_18", 16);
			break;
		case 19:
			StringCopy(&Var0, "FMMC_VHL_19", 16);
			break;
		case 20:
			StringCopy(&Var0, "FMMC_VHL_20", 16);
			break;
		case 21:
			StringCopy(&Var0, "FMMC_VHL_21", 16);
			break;
		case 22:
			StringCopy(&Var0, "FMMC_VHL_22", 16);
			break;
		case 23:
			StringCopy(&Var0, "FMMC_VHL_23", 16);
			break;
		case 24:
			StringCopy(&Var0, "FMMC_VHL_24", 16);
			break;
		case 25:
			StringCopy(&Var0, "FMMC_VHL_25", 16);
			break;
		case 26:
			StringCopy(&Var0, "FMMC_VHL_26", 16);
			break;
		case 27:
			StringCopy(&Var0, "FMMC_PDL_7", 16);
			break;
		case 28:
			StringCopy(&Var0, "FMMC_VHL_28", 16);
			break;
		case 29:
			StringCopy(&Var0, "FMMC_VHL_29", 16);
			break;
		case 30:
			StringCopy(&Var0, "FMMC_VHL_30", 16);
			break;
		case 31:
			StringCopy(&Var0, "FMMC_VHL_31", 16);
			break;
		case 32:
			StringCopy(&Var0, "FMMC_VHL_32", 16);
			break;
		case 33:
			StringCopy(&Var0, "FMMC_VHL_33", 16);
			break;
	}
	return Var0;
}

int func_966()//Position - 0x1A5E13
{
	switch (Global_4718592.f_174999)
	{
		case 0:
			return 1;
		default:
	}
	return 0;
}

char* func_967(int iParam0)//Position - 0x1A5E35
{
	switch (iParam0)
	{
		case -1:
			return "MC_VAROPT_E_0";
		case 0:
			return "MC_VAROPT_E_1";
		default:
	}
	return "INVALID";
}

char* func_968(int iParam0)//Position - 0x1A762A
{
	switch (iParam0)
	{
		case 0:
			return "FMMC_SEL_OFF";
		case 1:
			return "MC_VAROPT_6_E0";
		case 2:
			return "MC_VAROPT_6_E1";
		case 3:
			return "MC_VAROPT_6_E2";
		default:
	}
	return "INVALID";
}

char* func_969(int iParam0)//Position - 0x1A9959
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
			return "3DX_PD_0";
		case joaat("S_F_Y_Cop_01"):
			return "3DX_PD_1";
		case joaat("S_M_Y_Ranger_01"):
			return "3DX_PD_2b";
		case joaat("S_F_Y_Ranger_01"):
			return "3DX_PD_3";
		case joaat("S_M_Y_Swat_01"):
			return "3DX_PD_4";
		case joaat("S_M_M_CIASec_01"):
			return "3DX_PD_5";
		case joaat("S_M_M_FIBSec_01"):
			return "3DX_PD_FIB";
		case joaat("S_M_Y_Marine_03"):
			return "3DX_PD_6";
		case joaat("S_M_Y_BlackOps_01"):
			return "3DX_PD_7b";
		case joaat("S_M_Y_BlackOps_02"):
			return "3DX_PD_8b";
		case joaat("S_M_Y_BlackOps_03"):
			return "3DX_PD_BON";
		case joaat("S_M_M_ChemSec_01"):
			return "3DX_PD_9b";
		case joaat("S_M_M_CCrew_01"):
			return "3DX_PD_CCR";
		case joaat("S_M_M_Armoured_01"):
			return "3DX_PD_10";
		case joaat("S_M_Y_Pilot_01"):
			return "3DX_PD_11";
		case joaat("S_M_M_Pilot_02"):
			return "3DX_PD_PIL2";
		case joaat("S_M_M_PrisGuard_01"):
			return "3DX_PD_12";
		case joaat("G_M_Y_Lost_01"):
			return "3DX_PD_EXP";
		case joaat("G_M_Y_Lost_02"):
			return "3DX_PD_VAT";
		case joaat("A_F_Y_Hipster_02"):
			return "3DX_PD_TUR";
		case joaat("A_F_Y_Business_04"):
			return "3DX_PD_LDMN";
		case joaat("A_F_Y_Beach_01"):
			return "3DX_PD_SPK";
		case joaat("A_F_M_BodyBuild_01"):
			return "3DX_PD_LBM";
		default:
	}
	return "";
}

int func_970(int iParam0)//Position - 0x1AA3B2
{
	switch (iParam0)
	{
		case 3:
			return 10;
		default:
	}
	return 0;
}

struct<4> func_971(int iParam0)//Position - 0x1AA6AE
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "FMMC_SBFT_0", 16);
			break;
		case 1:
			StringCopy(&Var0, "FMMC_SBFT_1", 16);
			break;
		case 2:
			StringCopy(&Var0, "FMMC_SBFT_2", 16);
			break;
		case 3:
			StringCopy(&Var0, "FMMC_SBFT_3", 16);
			break;
		case 4:
			StringCopy(&Var0, "FMMC_SBFT_4", 16);
			break;
		case 5:
			StringCopy(&Var0, "FMMC_SBFT_5", 16);
			break;
		case 6:
			StringCopy(&Var0, "FMMC_SBFT_6", 16);
			break;
		case 7:
			StringCopy(&Var0, "FMMC_SBFT_7", 16);
			break;
		case 8:
			StringCopy(&Var0, "FMMC_SBFT_8", 16);
			break;
		case 9:
			StringCopy(&Var0, "FMMC_SBFT_9", 16);
			break;
		case 10:
			StringCopy(&Var0, "FMMC_SBFT_10", 16);
			break;
		case 11:
			StringCopy(&Var0, "FMMC_SBFT_11", 16);
			break;
		case 12:
			StringCopy(&Var0, "FMMC_SBFT_12", 16);
			break;
		case 13:
			StringCopy(&Var0, "FMMC_SBFT_13", 16);
			break;
		case 14:
			StringCopy(&Var0, "FMMC_SBFT_14", 16);
			break;
		case 15:
			StringCopy(&Var0, "FMMC_SBFT_15", 16);
			break;
		case 16:
			StringCopy(&Var0, "FMMC_SBFT_16", 16);
			break;
		case 17:
			StringCopy(&Var0, "FMMC_SBFT_17", 16);
			break;
		case 18:
			StringCopy(&Var0, "FMMC_SBFT_18", 16);
			break;
		case 19:
			StringCopy(&Var0, "FMMC_SBFT_19", 16);
			break;
		case 20:
			StringCopy(&Var0, "FMMC_SBFT_20", 16);
			break;
		case 21:
			StringCopy(&Var0, "FMMC_SBFT_21", 16);
			break;
		case 22:
			StringCopy(&Var0, "FMMC_SBFT_22", 16);
			break;
		case 23:
			StringCopy(&Var0, "FMMC_SBFT_23", 16);
			break;
		case 24:
			StringCopy(&Var0, "FMMC_SBFT_24", 16);
			break;
		case 25:
			StringCopy(&Var0, "FMMC_SBFT_25", 16);
			break;
		case 26:
			StringCopy(&Var0, "FMMC_SBFT_26", 16);
			break;
		case 27:
			StringCopy(&Var0, "FMMC_SBFT_27", 16);
			break;
		case 28:
			StringCopy(&Var0, "FMMC_SBFT_28", 16);
			break;
		case 29:
			StringCopy(&Var0, "FMMC_SBFT_29", 16);
			break;
		case 30:
			StringCopy(&Var0, "FMMC_SBFT_30", 16);
			break;
		case 31:
			StringCopy(&Var0, "FMMC_SBFT_31", 16);
			break;
		case 32:
			StringCopy(&Var0, "FMMC_SBFT_32", 16);
			break;
		case 33:
			StringCopy(&Var0, "FMMC_SBFT_33", 16);
			break;
		case 34:
			StringCopy(&Var0, "FMMC_SBFT_34", 16);
			break;
		case 35:
			StringCopy(&Var0, "FMMC_SBFT_35", 16);
			break;
		case 36:
			StringCopy(&Var0, "FMMC_SBFT_36", 16);
			break;
		case 37:
			StringCopy(&Var0, "FMMC_SBFT_37", 16);
			break;
		case 38:
			StringCopy(&Var0, "FMMC_SBFT_38", 16);
			break;
		case 39:
			StringCopy(&Var0, "FMMC_SBFT_39", 16);
			break;
		case 40:
			StringCopy(&Var0, "FMMC_SBFT_40", 16);
			break;
		case 41:
			StringCopy(&Var0, "FMMC_SBFT_41", 16);
			break;
		case 42:
			StringCopy(&Var0, "FMMC_SBFT_42", 16);
			break;
		case 43:
			StringCopy(&Var0, "FMMC_SBFT_43", 16);
			break;
		case 44:
			StringCopy(&Var0, "FMMC_SBFT_44", 16);
			break;
		case 45:
			StringCopy(&Var0, "FMMC_SBFT_45", 16);
			break;
		case 46:
			StringCopy(&Var0, "FMMC_SBFT_46", 16);
			break;
		case 47:
			StringCopy(&Var0, "FMMC_SBFT_47", 16);
			break;
		case 48:
			StringCopy(&Var0, "FMMC_SBFT_48", 16);
			break;
		case 49:
			StringCopy(&Var0, "FMMC_SBFT_49", 16);
			break;
		case 50:
			StringCopy(&Var0, "FMMC_SBFT_50", 16);
			break;
		case 51:
			StringCopy(&Var0, "FMMC_SBFT_51", 16);
			break;
		case 52:
			StringCopy(&Var0, "FMMC_SBFT_52", 16);
			break;
		case 53:
			StringCopy(&Var0, "FMMC_SBFT_53", 16);
			break;
		case 54:
			StringCopy(&Var0, "FMMC_SBFT_54", 16);
			break;
		case 55:
			StringCopy(&Var0, "FMMC_SBFT_55", 16);
			break;
		case 56:
			StringCopy(&Var0, "FMMC_SBFT_56", 16);
			break;
		case 57:
			StringCopy(&Var0, "FMMC_SBFT_57", 16);
			break;
		case 58:
			StringCopy(&Var0, "FMMC_SBFT_58", 16);
			break;
		case 59:
			StringCopy(&Var0, "FMMC_SBFT_59", 16);
			break;
		case 60:
			StringCopy(&Var0, "FMMC_SBFT_60", 16);
			break;
		case 61:
			StringCopy(&Var0, "FMMC_SBFT_61", 16);
			break;
		case 62:
			StringCopy(&Var0, "FMMC_SBFT_62", 16);
			break;
		case 63:
			StringCopy(&Var0, "FMMC_SBFT_63", 16);
			break;
		case 64:
			StringCopy(&Var0, "FMMC_SBFT_64", 16);
			break;
		case 65:
			StringCopy(&Var0, "FMMC_SBFT_65", 16);
			break;
		case 66:
			StringCopy(&Var0, "FMMC_SBFT_66", 16);
			break;
		case 67:
			StringCopy(&Var0, "FMMC_SBFT_67", 16);
			break;
		case 68:
			StringCopy(&Var0, "FMMC_SBFT_68", 16);
			break;
		case 69:
			StringCopy(&Var0, "FMMC_SBFT_69", 16);
			break;
		case 70:
			StringCopy(&Var0, "FMMC_SBFT_70", 16);
			break;
		case 71:
			StringCopy(&Var0, "FMMC_SBFT_71", 16);
			break;
		case 72:
			StringCopy(&Var0, "FMMC_SBFT_72", 16);
			break;
		case 73:
			StringCopy(&Var0, "FMMC_SBFT_73", 16);
			break;
		case 74:
			StringCopy(&Var0, "FMMC_SBFT_74", 16);
			break;
		case 75:
			StringCopy(&Var0, "FMMC_SBFT_75", 16);
			break;
		case 76:
			StringCopy(&Var0, "FMMC_SBFT_76", 16);
			break;
		case 77:
			StringCopy(&Var0, "FMMC_SBFT_77", 16);
			break;
		case 78:
			StringCopy(&Var0, "FMMC_SBFT_78", 16);
			break;
		case 79:
			StringCopy(&Var0, "FMMC_SBFT_79", 16);
			break;
		case 80:
			StringCopy(&Var0, "FMMC_SBFT_80", 16);
			break;
		case 81:
			StringCopy(&Var0, "FMMC_SBFT_81", 16);
			break;
		case 82:
			StringCopy(&Var0, "FMMC_SBFT_82", 16);
			break;
		case 83:
			StringCopy(&Var0, "FMMC_SBFT_83", 16);
			break;
		case 84:
			StringCopy(&Var0, "FMMC_SBFT_84", 16);
			break;
		case 85:
			StringCopy(&Var0, "FMMC_SBFT_85", 16);
			break;
		case 86:
			StringCopy(&Var0, "FMMC_SBFT_86", 16);
			break;
		case 87:
			StringCopy(&Var0, "FMMC_SBFT_87", 16);
			break;
		case 88:
			StringCopy(&Var0, "FMMC_SBFT_88", 16);
			break;
		case 89:
			StringCopy(&Var0, "FMMC_SBFT_89", 16);
			break;
		case 90:
			StringCopy(&Var0, "FMMC_SBFT_90", 16);
			break;
		case 91:
			StringCopy(&Var0, "FMMC_SBFT_91", 16);
			break;
		case 92:
			StringCopy(&Var0, "FMMC_SBFT_92", 16);
			break;
		case 93:
			StringCopy(&Var0, "FMMC_SBFT_93", 16);
			break;
		case 94:
			StringCopy(&Var0, "FMMC_SBFT_94", 16);
			break;
		case 95:
			StringCopy(&Var0, "FMMC_SBFT_95", 16);
			break;
		case 96:
			StringCopy(&Var0, "FMMC_SBFT_96", 16);
			break;
		case 97:
			StringCopy(&Var0, "FMMC_SBFT_97", 16);
			break;
		case 98:
			StringCopy(&Var0, "FMMC_SBFT_98", 16);
			break;
		case 99:
			StringCopy(&Var0, "FMMC_SBFT_99", 16);
			break;
		case 100:
			StringCopy(&Var0, "FMMC_SBFT_100", 16);
			break;
		case 101:
			StringCopy(&Var0, "FMMC_SBFT_101", 16);
			break;
		case 102:
			StringCopy(&Var0, "FMMC_SBFT_102", 16);
			break;
		case 103:
			StringCopy(&Var0, "FMMC_SBFT_103", 16);
			break;
	}
	return Var0;
}

void func_972(bool bParam0)//Position - 0x1AAE11
{
	if (Global_23150.f_77 >= 3 || Global_23150.f_74 >= 4)
	{
		return;
	}
	Global_23150.f_5[Global_23150.f_74] = 1;
	Global_23150.f_74++;
	StringCopy(&(Global_23150.f_22[Global_23150.f_77 /*6*/]), bParam0, 24);
	Global_23150.f_77++;
}

char* func_973(int iParam0)//Position - 0x1AAE68
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "FMMC_SWNGR_PED";
			break;
		case 1:
			sVar0 = "FMMC_SWNGR_VEH";
			break;
		case 3:
			sVar0 = "FMMC_SWNGR_OBJ";
			break;
		case 2:
			sVar0 = "FMMC_SWNGR_WEP";
			break;
		case 16:
			sVar0 = "FMMC_SWNGR_LOC";
			break;
		case 4:
			sVar0 = "FMMC_SWNGR_PRP";
			break;
		case 5:
			sVar0 = "FMMC_SWNGR_DPRP";
			break;
		case 56:
			sVar0 = "FMMC_SWNGR_DBLI";
			break;
		case 72:
			sVar0 = "FMMC_SWNGR_WARP";
			break;
		case 40:
			sVar0 = "FMMC_SWNGR_ZONE";
			break;
		case 41:
			sVar0 = "FMMC_SWNGR_DOOR";
			break;
	}
	return sVar0;
}

void func_974(int* iParam0, int iParam1, int iParam2)//Position - 0x1ABB2A
{
	MISC::SET_BIT(&(iParam0->f_411[iParam1]), iParam2);
}

void func_975(int* iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1ABC8B
{
	iParam0->f_539 = fParam1;
	iParam0->f_539.f_1 = fParam2;
	iParam0->f_539.f_2 = iParam3;
	iParam0->f_539.f_3 = iParam4;
	iParam0->f_539.f_4 = iParam5;
}

int func_976(int* iParam0)//Position - 0x1ABFEF
{
	if (iParam0->f_1133.f_9 != 2)
	{
		return 0;
	}
	return 1;
}

int func_977(int* iParam0)//Position - 0x1AC008
{
	if (iParam0->f_1133.f_9 == 0)
	{
		return 0;
	}
	return 1;
}

struct<4> func_978(int iParam0)//Position - 0x1AC020
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "FMMC_ZNE_AAB", 16);
			break;
		case 1:
			StringCopy(&Var0, "FMMC_ZNE_SRD", 16);
			break;
		case 3:
			StringCopy(&Var0, "FMMC_ZNE_CYL", 16);
			break;
		case 2:
			StringCopy(&Var0, "FMMC_ZNE_NAB", 16);
			break;
	}
	return Var0;
}

int func_979()//Position - 0x1AC082
{
	if (__LIB_12__::func_833())
	{
		return 0;
	}
	return 1;
}

char* func_980(int iParam0)//Position - 0x1AC1BB
{
	switch (iParam0)
	{
		case 0:
			return "SC_ZONE_ROAD";
		case 1:
			return "SC_ZONE_NAV";
		case 2:
			return "FMMC_ZN_TY5";
		default:
	}
	return "";
}

int func_981(var uParam0, int iParam1)//Position - 0x1AC44D
{
	if (*uParam0 == 0 && *iParam1 == uParam0->f_1)
	{
		return 1;
	}
	return 0;
}

int func_982(int iParam0)//Position - 0x1AC46F
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_94390 - 1))
	{
		if ((Global_4980736.f_94390[iVar0 /*1004*/].f_936 == 0 && Global_4980736.f_94390[iVar0 /*1004*/].f_936.f_1 > -1) && iParam0 == Global_4980736.f_94390[iVar0 /*1004*/].f_936.f_1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_78578 - 1))
	{
		if ((Global_4980736.f_78578[iVar0 /*450*/].f_424 == 0 && Global_4980736.f_78578[iVar0 /*450*/].f_424.f_1 > -1) && iParam0 == Global_4980736.f_78578[iVar0 /*450*/].f_424.f_1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_5742 - 1))
	{
		if ((Global_4980736.f_5742[iVar0 /*442*/].f_421 == 0 && Global_4980736.f_5742[iVar0 /*442*/].f_421.f_1 > -1) && iParam0 == Global_4980736.f_5742[iVar0 /*442*/].f_421.f_1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63312 - 1))
	{
		if ((Global_4980736.f_63312[iVar0 /*183*/].f_178 == 0 && Global_4980736.f_63312[iVar0 /*183*/].f_178.f_1 > -1) && iParam0 == Global_4980736.f_63312[iVar0 /*183*/].f_178.f_1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_983(float fParam0)//Position - 0x1ACEAB
{
	if (Global_23149 < fParam0)
	{
		Global_23149 = fParam0;
	}
}

char* func_984(int iParam0)//Position - 0x1AD091
{
	switch (iParam0)
	{
		case 0:
			return "PLACEHOLDER";
			break;
		case 70:
			return "FMMC_ZN_TY70A";
		case 72:
			return "FMMC_ZN_TY72_2";
	}
	return "FMMC_ZNE_V2";
}

int func_985(int iParam0)//Position - 0x1AD0E2
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 70:
			return 1;
		case 72:
			return 1;
	}
	return 0;
}

char* func_986(int iParam0)//Position - 0x1AD192
{
	switch (iParam0)
	{
		case 9:
			return "FMMC_ZNE_WVDP";
		case 37:
			return "FMMC_PS_V2";
		case 48:
			return "FMMC_ZN_48_B";
		case 72:
			return "FMMC_ZN_TY72_1";
		default:
	}
	return "FMMC_ZNE_V2";
}

float func_987(int iParam0)//Position - 0x1AD1EE
{
	switch (iParam0)
	{
		case 9:
			return 0.1f;
		case 37:
			return 0.1f;
		case 48:
			return 5f;
		case 72:
			return 0.5f;
		default:
	}
	return 0f;
}

char* func_988(int iParam0)//Position - 0x1AD332
{
	switch (iParam0)
	{
		case 9:
			return "FMMC_ZNE_WDMP";
		case 10:
			return "FMMC_ZNE_EXTH";
		case 20:
			return "FMMC_ZNE_TC";
		case 23:
			return "FMMC_ZNE_DM";
		case 33:
			return "FMMC_ZNE_VMS";
		case 37:
			return "FMMC_PS_V1";
		case 40:
			return "FMMCCMENU_T_40";
		case 19:
			return "FMMCCMENU_T_19";
		case 45:
			return "ZONE_19_45_V1";
		case 48:
			return "FMMC_ZN_48_A";
		case 72:
			return "FMMC_ZN_TY72_0";
		case 75:
			return "FMMC_ZN_TY75_0";
		default:
	}
	return "FMMC_ZNE_V1";
}

float func_989(int iParam0)//Position - 0x1AD3FE
{
	switch (iParam0)
	{
		case 9:
			return 0.1f;
		case 10:
			return 0.1f;
		case 19:
			return 1f;
		case 20:
			return 1f;
		case 37:
			return 5f;
		case 23:
			return 0.5f;
		case 33:
			return 1f;
		case 40:
			return 1f;
		case 17:
			return 0.1f;
		case 45:
			return 1f;
		case 48:
			return 5000f;
		case 72:
			return 1f;
		case 75:
			return 1f;
		default:
	}
	return 0f;
}

void func_990(int* iParam0, var uParam1)//Position - 0x1AE08D
{
	iParam0->f_5598 = *uParam1;
}

void func_991(int* iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)//Position - 0x1AE09D
{
	iParam0->f_5577 = iParam1;
	iParam0->f_5578 = uParam4;
	iParam0->f_5575 = 0;
	iParam0->f_5576 = uParam5;
	StringCopy(&(iParam0->f_5579), sParam2, 16);
	StringCopy(&(iParam0->f_5583), sParam3, 16);
}

int func_992()//Position - 0x1AE0D2
{
	return Global_1837337.f_435[Global_1837337.f_448];
}

bool func_993(int iParam0)//Position - 0x1AE2A4
{
	return (iParam0 == 2 || iParam0 == 0);
}

int func_994(int iParam0)//Position - 0x1AE412
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return Global_4980736.f_94384;
		case 1:
			return Global_4980736.f_78574;
		case 2:
			return Global_4980736.f_5739;
		case 3:
			return Global_4980736.f_36355;
		case 4:
			return Global_4980736.f_63310;
		case 5:
			return Global_4980736.f_20329;
		case 6:
			return Global_4980736[0];
		case 7:
			return Global_4718592.f_142630;
		case 8:
			return Global_4980736.f_195933;
		case 9:
			return Global_4980736.f_34610;
		case 10:
			return Global_4980736.f_69352;
		case 11:
			return Global_4980736.f_93610;
		default:
	}
	return 0;
}

int func_995(int iParam0, int iParam1)//Position - 0x1AE645
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
		case 67:
			return iParam0 == 0;
		case 44:
			return iParam0 == 2;
		case 51:
			return (iParam0 == 0 || iParam0 == 2);
		case 52:
			return ((iParam0 == 2 || iParam0 == 1) || iParam0 == 3);
		case 53:
			return iParam0 == 1;
		case 66:
			return ((iParam0 == 2 || iParam0 == 1) || iParam0 == 0);
		case 69:
			return iParam0 == 1;
		default:
	}
	return 1;
}

int func_996(int iParam0)//Position - 0x1AE776
{
	if (__LIB_12__::func_833() && !__LIB_6__::func_154())
	{
		return iParam0 == 37;
	}
	if (((((iParam0 == 9 || iParam0 == 37) || iParam0 == 23) || iParam0 == 40) || iParam0 == 12) || iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_997(int iParam0)//Position - 0x1AE7DA
{
	if (((iParam0 == 40 || iParam0 == 25) || iParam0 == 27) || iParam0 == 9)
	{
		return 1;
	}
	return 0;
}

char* func_998(int iParam0)//Position - 0x1AEF70
{
	switch (iParam0)
	{
		case 0:
			return "MC_H_CSB_EWE_0";
			break;
		case 1:
			return "MC_H_CSB_EWE_1";
			break;
		case 2:
			return "MC_H_CSB_EWE_2";
			break;
		case 3:
			return "MC_H_CSB_EWE_3";
			break;
		case 4:
			return "MC_H_CSB_EWE_4";
			break;
		case 5:
			return "MC_H_CSB_EWE_5";
			break;
		case 6:
			return "MC_H_CSB_EWE_6";
			break;
	}
	return "";
}

int func_999(int iParam0)//Position - 0x1B1E11
{
	if (((((((((((iParam0 == joaat("seabreeze") || iParam0 == joaat("starling")) || iParam0 == joaat("mogul")) || iParam0 == joaat("rogue")) || iParam0 == joaat("hunter")) || iParam0 == joaat("tula")) || iParam0 == joaat("bombushka")) || iParam0 == joaat("cuban800")) || iParam0 == joaat("volatol")) || iParam0 == joaat("avenger")) || iParam0 == joaat("strikeforce")) || iParam0 == joaat("alkonost"))
	{
		return 1;
	}
	return 0;
}

}