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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int* iLocal_46 = NULL;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&iLocal_46))
	{
		while (!__LIB_25__.func_6())
		{
			func_67(&iLocal_46);
			if (func_57(&iLocal_46))
			{
			}
			else
			{
				func_17(&iLocal_46);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1(&iLocal_46);
}

void func_1(int* iParam0)//Position - 0xA8
{
	func_16();
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	__LIB_0__.func_199();
}

void func_3()//Position - 0xF3
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 3);
}

void func_4(int* iParam0)//Position - 0x10E
{
	__LIB_28__.func_906(0, 1);
	__LIB_24__.func_764(0, -1, 1);
	__LIB_1__.func_846(&(iParam0->f_6), 5);
}

bool func_8(int* iParam0)//Position - 0x22D
{
	return __LIB_5__.func_70(&(iParam0->f_6), 5);
}

int func_10(var uParam0)//Position - 0x24C
{
	if (uParam0->f_2 != 0)
	{
		if (__LIB_5__.func_948("STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2), func_15(uParam0->f_2)) || __LIB_2__.func_161("STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((__LIB_0__.func_1("STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */) || __LIB_0__.func_1(func_11())) || __LIB_0__.func_1("STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */));
}

char* func_11()//Position - 0x2B0
{
	return "STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */;
}

char* func_15(int iParam0)//Position - 0x306
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH" /* GXT: Stealth Annihilator */;
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

void func_16()//Position - 0x324
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 1);
}

void func_17(int* iParam0)//Position - 0x33F
{
	func_54(iParam0);
	func_53(iParam0);
	if (func_52(iParam0))
	{
		if (((func_51(iParam0) && !func_50(iParam0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1)) && !func_49())
		{
			func_48(iParam0, 1, 0);
			func_47(iParam0);
		}
		else if (__LIB_5__.func_70(&(iParam0->f_6), 6) && func_50(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1) && !func_49())
			{
				func_48(iParam0, 0, 0);
				__LIB_1__.func_846(&(iParam0->f_6), 6);
				__LIB_1__.func_846(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_46(iParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_45();
		func_44(iParam0);
	}
	else if (func_43(iParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_44(iParam0);
		func_42(iParam0, 5);
	}
	if (func_50(iParam0) && !func_51(iParam0))
	{
		func_40(iParam0);
		__LIB_31__.func_831();
		func_42(iParam0, 2);
		if (func_36(iParam0))
		{
			func_34();
		}
	}
	else
	{
		func_18(iParam0);
	}
	func_3();
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 4);
}

void func_18(int* iParam0)//Position - 0x474
{
	int iVar0;
	if (((((((!__LIB_5__.func_70(&(iParam0->f_6), 0) && !__LIB_5__.func_70(&(iParam0->f_6), 2)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_33(iParam0)) && !__LIB_0__.func_77(0)) && !__LIB_0__.func_661()) && func_29()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		func_25(iParam0, 1);
		__LIB_1__.func_845(&(iParam0->f_6), 3);
		iVar0 = __LIB_0__.func_138(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			__LIB_10__.func_890(func_22(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		else
		{
			__LIB_4__.func_936(func_22(iParam0), func_15(iParam0->f_2), iVar0);
		}
		func_19(iParam0);
		__LIB_1__.func_845(&(iParam0->f_6), 0);
	}
}

void func_19(int* iParam0)//Position - 0x552
{
	__LIB_1__.func_845(&(iParam0->f_6), 2);
}

char* func_22(int* iParam0)//Position - 0x5A3
{
	if (func_52(iParam0))
	{
		return "STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */;
	}
	return "STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */;
}

void func_25(int* iParam0, int iParam1)//Position - 0x5E6
{
	int iVar0;
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (__LIB_0__.func_228(19004, -1) + iParam1);
				if (iVar0 >= 0)
				{
					__LIB_1__.func_39(19004, iVar0, -1);
				}
				break;
			}
	}
}

bool func_29()//Position - 0x67C
{
	return (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 4) && !__LIB_6__.func_315());
}

int func_33(int* iParam0)//Position - 0x736
{
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				return __LIB_0__.func_228(19004, -1) < 3;
			}
		default:
	}
	return 1;
}

void func_34()//Position - 0x764
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151("STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */, 3000);
	}
}

int func_36(int* iParam0)//Position - 0x795
{
	int iVar0;
	if (__LIB_0__.func_77(0) || __LIB_0__.func_661())
	{
		return 0;
	}
	iVar0 = func_37(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/))
			{
				return 1;
			}
			break;
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/))
			{
				return 1;
			}
			break;
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/))
			{
				return 1;
			}
			break;
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(int* iParam0)//Position - 0x839
{
	if (!func_38(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				case 0:
					return 2;
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_38(int* iParam0)//Position - 0x889
{
	return (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
}

void func_40(int* iParam0)//Position - 0x910
{
	int iVar0;
	if (((((((!__LIB_5__.func_70(&(iParam0->f_6), 0) && !__LIB_5__.func_70(&(iParam0->f_6), 1)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && __LIB_5__.func_70(&(iParam0->f_6), 3)) && !__LIB_0__.func_77(0)) && !__LIB_0__.func_661()) && func_29()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		iVar0 = __LIB_0__.func_138(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			__LIB_0__.func_151(func_41(iParam0), iVar0);
		}
		else
		{
			__LIB_10__.func_890(func_41(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		func_47(iParam0);
		__LIB_1__.func_845(&(iParam0->f_6), 0);
	}
}

char* func_41(int* iParam0)//Position - 0x9D9
{
	if (func_52(iParam0))
	{
		return "STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */;
	}
	return "STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */;
}

void func_42(int* iParam0, int iParam1)//Position - 0x9F6
{
	if (func_51(iParam0))
	{
		return;
	}
	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, false);
	}
}

bool func_43(int* iParam0)//Position - 0xA31
{
	return (!__LIB_5__.func_70(iParam0, 0) && __LIB_5__.func_70(iParam0, 1));
}

void func_44(int* iParam0)//Position - 0xA4D
{
	__LIB_1__.func_846(&(iParam0->f_6), 0);
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_52(iParam0))
	{
		if (func_50(iParam0))
		{
			__LIB_1__.func_846(&(iParam0->f_6), 1);
		}
		else
		{
			__LIB_1__.func_846(&(iParam0->f_6), 2);
		}
	}
}

void func_45()//Position - 0xA94
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 1);
}

bool func_46(int* iParam0)//Position - 0xAAF
{
	return (__LIB_5__.func_70(iParam0, 0) && !__LIB_5__.func_70(iParam0, 1));
}

void func_47(int* iParam0)//Position - 0xACB
{
	__LIB_1__.func_845(&(iParam0->f_6), 1);
}

void func_48(int* iParam0, bool bParam1, bool bParam2)//Position - 0xADC
{
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam0->f_1, !bParam1, bParam2);
			break;
	}
}

bool func_49()//Position - 0xB09
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 3);
}

bool func_50(int* iParam0)//Position - 0xB21
{
	return __LIB_5__.func_70(iParam0, 0);
}

bool func_51(int* iParam0)//Position - 0xB30
{
	return __LIB_5__.func_70(iParam0, 2);
}

bool func_52(int* iParam0)//Position - 0xB3F
{
	return ((func_38(iParam0) && iParam0->f_3 == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID());
}

void func_53(int* iParam0)//Position - 0xB70
{
	if (func_10(iParam0) && (__LIB_0__.func_77(0) || __LIB_0__.func_661()))
	{
		iParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		__LIB_1__.func_846(&(iParam0->f_6), 0);
		if (func_50(iParam0))
		{
			__LIB_1__.func_846(&(iParam0->f_6), 1);
		}
		else
		{
			__LIB_1__.func_846(&(iParam0->f_6), 2);
			if (func_52(iParam0))
			{
				func_25(iParam0, -1);
			}
		}
	}
}

void func_54(int* iParam0)//Position - 0xBD8
{
	if (func_50(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_56())
			{
				func_4(iParam0);
			}
		}
		else if (!func_56())
		{
			func_55(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 2);
}

void func_55(int* iParam0)//Position - 0xC35
{
	__LIB_28__.func_906(1, 1);
	__LIB_24__.func_764(1, -1, 1);
	__LIB_1__.func_845(&(iParam0->f_6), 5);
}

bool func_56()//Position - 0xC53
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 2);
}

int func_57(int* iParam0)//Position - 0xC6B
{
	if (!func_38(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (!__LIB_31__.func_832(iParam0->f_2))
	{
		return 1;
	}
	if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (__LIB_1__.func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__.func_352(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_8__.func_153(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_66(int* iParam0)//Position - 0x118D
{
	return (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1, false));
}

void func_67(int* iParam0)//Position - 0x11AB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_5__.func_70(iParam0, 4);
	bVar1 = __LIB_5__.func_70(iParam0, 0);
	func_78(iParam0);
	if (bVar0)
	{
		__LIB_1__.func_845(iParam0, 3);
	}
	else
	{
		__LIB_1__.func_846(iParam0, 3);
	}
	if (bVar1)
	{
		__LIB_1__.func_845(iParam0, 1);
	}
	else
	{
		__LIB_1__.func_846(iParam0, 1);
	}
	if (func_38(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_66(iParam0))
			{
				iParam0->f_2 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1);
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					__LIB_1__.func_845(iParam0, 2);
				}
			}
		}
	}
	if (func_66(iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_1, -1, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false)) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					__LIB_1__.func_845(iParam0, 4);
					if (!__LIB_5__.func_70(iParam0, 3))
					{
						__LIB_1__.func_845(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_38(iParam0))
		{
			iParam0->f_4 = __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_52(iParam0))
		{
			if (func_76() && func_70(iParam0))
			{
				__LIB_1__.func_845(iParam0, 0);
			}
		}
		else
		{
			func_68(iParam0);
		}
	}
	if (func_46(iParam0))
	{
		iParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_68(int* iParam0)//Position - 0x1302
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && __LIB_31__.func_833(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0->f_3)))
	{
		__LIB_1__.func_845(iParam0, 0);
	}
	else
	{
		__LIB_1__.func_846(iParam0, 0);
	}
}

bool func_70(int* iParam0)//Position - 0x1356
{
	bool bVar0;
	bVar0 = func_75();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
	{
		func_74(iParam0);
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(iParam0->f_1);
				break;
		}
	}
	else if (func_73(iParam0))
	{
		if (func_72(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0->f_1);
		}
	}
	else
	{
		func_71(iParam0);
	}
	return bVar0;
}

void func_71(var uParam0)//Position - 0x13C1
{
	__LIB_1__.func_845(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
}

bool func_72(var uParam0)//Position - 0x13DC
{
	return (MISC::GET_GAME_TIMER() - uParam0->f_6.f_1) >= 200;
}

bool func_73(var uParam0)//Position - 0x13F2
{
	return __LIB_5__.func_70(&(uParam0->f_6), 4);
}

void func_74(var uParam0)//Position - 0x1403
{
	__LIB_1__.func_846(&(uParam0->f_6), 4);
}

var func_75()//Position - 0x1414
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 1);
}

bool func_76()//Position - 0x142C
{
	return !__LIB_6__.func_315();
}

void func_78(var uParam0)//Position - 0x14BE
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_88(int* iParam0)//Position - 0x1619
{
	func_67(iParam0);
	if (func_66(iParam0))
	{
		if (func_52(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
			{
				if (!func_49())
				{
					func_48(iParam0, 0, 0);
				}
				else
				{
					__LIB_1__.func_845(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			__LIB_1__.func_845(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

