namespace __LIB_13__ {
	
int func_0(var uParam0)//Position - 0x14EE6C
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2))
		{
		}
	}
	return 0;
}

Vector3 func_1()//Position - 0x14F079
{
	if (__LIB_0__::func_493())
	{
		return 2800f, -3800f, 100f;
	}
	return 414.4f, -977.6f, -99f;
}

int func_2()//Position - 0x14F0A9
{
	if (__LIB_0__::func_764())
	{
		return 0;
	}
	return 1;
}

Vector3 func_3()//Position - 0x14F0E8
{
	if (__LIB_0__::func_764())
	{
		return 4496.8687f, -4497.938f, 3.1895f;
	}
	if (__LIB_0__::func_493())
	{
		return 2939.9082f, -3883.8604f, 139.1f;
	}
	return 418.9326f, -979.3876f, -100.0042f;
}

char* func_4()//Position - 0x14F194
{
	if (__LIB_0__::func_493())
	{
		return "xs_x18_int_01";
	}
	return "v_winningroom";
}

void func_5(var uParam0, bool bParam1)//Position - 0x14FF12
{
	MISC::CLEAR_BIT(&(uParam0->f_33), 1);
	uParam0->f_27 = 0;
	if (bParam1)
	{
		if (__LIB_0__::func_649(&(uParam0->f_19)))
		{
			__LIB_0__::func_579(&(uParam0->f_19));
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_17))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_17));
	}
	if (BitTest(uParam0->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_33), 0);
	}
}

bool func_6(var uParam0)//Position - 0x14FF65
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0);
}

int func_7(int iParam0)//Position - 0x151866
{
	if ((iParam0 >= __LIB_4__::func_187(3) && iParam0 <= __LIB_4__::func_186(3)) || (iParam0 >= __LIB_4__::func_189(3) && iParam0 <= __LIB_4__::func_188(3)))
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x1518A6
{
	if ((iParam0 >= __LIB_4__::func_187(2) && iParam0 <= __LIB_4__::func_186(2)) || (iParam0 >= __LIB_4__::func_189(2) && iParam0 <= __LIB_4__::func_188(2)))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x1518E6
{
	if (iParam0 >= __LIB_4__::func_187(0) && iParam0 <= __LIB_4__::func_186(0))
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x151F55
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 28:
		case 29:
		case 30:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
		case 40:
		case 41:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 56:
		case 57:
		case 58:
		case 60:
		case 61:
		case 62:
		case 64:
		case 65:
		case 66:
		case 69:
		case 71:
		case 70:
			return 1;
			break;
	}
	return 0;
}

int func_11()//Position - 0x1522AB
{
	return __LIB_1__::func_556(7851, -1, 0);
}

int func_12()//Position - 0x1522BC
{
	return __LIB_1__::func_556(7852, -1, 0);
}

void func_13()//Position - 0x1526E6
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(83, -1);
	if (iVar0 >= 1000000)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 2);
	}
}

void func_14(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x152733
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_CASH_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_CASH_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_CASH_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_15(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x15285D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_JOB_POINTS_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_JOB_POINTS_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_JOB_POINTS_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bParam3)
	{
		if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_16(int iParam0)//Position - 0x15557C
{
	Global_2667225.f_665 = 1;
	Global_2667225.f_666 = iParam0;
}

bool func_17(int iParam0)//Position - 0x1566F8
{
	return (iParam0 >= 0 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS());
}

int func_18()//Position - 0x156ED3
{
	if (!BitTest(__LIB_1__::func_556(7880, -1, 0), 0))
	{
		return 0;
	}
	return BitTest(Global_2815059.f_1808, 16);
}

int func_19()//Position - 0x156EF8
{
	if (!BitTest(__LIB_1__::func_556(7880, -1, 0), 0))
	{
		return 0;
	}
	return BitTest(Global_2815059.f_1808, 14);
}

int func_20()//Position - 0x156F3B
{
	if (!BitTest(__LIB_1__::func_556(7880, -1, 0), 1))
	{
		return 0;
	}
	return BitTest(Global_2815059.f_1808, 19);
}

int func_21(int iParam0)//Position - 0x15701E
{
	switch (iParam0)
	{
		case 8:
			return joaat("cerberus");
			break;
		case 9:
			return joaat("cerberus2");
			break;
		case 10:
			return joaat("cerberus3");
			break;
		case 11:
			return joaat("brutus");
			break;
		case 12:
			return joaat("brutus2");
			break;
		case 13:
			return joaat("brutus3");
			break;
		case 14:
			return joaat("zr380");
			break;
		case 15:
			return joaat("zr3802");
			break;
		case 16:
			return joaat("zr3803");
			break;
		case 17:
			return joaat("imperator");
			break;
		case 18:
			return joaat("imperator2");
			break;
		case 19:
			return joaat("imperator3");
			break;
		case 20:
			return joaat("scarab");
			break;
		case 21:
			return joaat("scarab2");
			break;
		case 22:
			return joaat("scarab3");
			break;
		case 102:
			return joaat("impaler");
			break;
		case 103:
			return joaat("ratloader2");
			break;
		case 104:
			return joaat("glendale");
			break;
		case 105:
			return joaat("slamvan");
			break;
		case 106:
			return joaat("dominator");
			break;
		case 107:
			return joaat("issi3");
			break;
		case 108:
			return joaat("gargoyle");
			break;
	}
	return 0;
}

void func_22(int iParam0)//Position - 0x157463
{
	Global_1965420 = (Global_1965420 + iParam0);
}

void func_23()//Position - 0x157490
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(82, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 4);
	}
}

void func_24(int iParam0)//Position - 0x1574DB
{
	Global_1965421 = (Global_1965421 + iParam0);
}

int func_25(int iParam0)//Position - 0x1575BC
{
	if (iParam0 >= 102 && iParam0 < 433)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x15764C
{
	return __LIB_0__::func_228(24888, -1);
}

int func_27(int iParam0)//Position - 0x1576CF
{
	if (iParam0 > 5)
	{
		return joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2");
	}
	else if (iParam0 > 15)
	{
		return joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3");
	}
	else if (iParam0 >= 51)
	{
		return joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4");
	}
	return joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1");
}

void func_28()//Position - 0x15770E
{
	bool bVar0;
	bVar0 = __LIB_1__::func_595(50, -1);
	if (bVar0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 19);
	}
}

void func_29(int iParam0)//Position - 0x1577A0
{
	Global_1965422 = (Global_1965422 + iParam0);
}

int func_30(int iParam0)//Position - 0x1585A8
{
	if (iParam0 >= __LIB_4__::func_170(9) && iParam0 <= 432)
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1585CC
{
	if (iParam0 >= __LIB_4__::func_170(8) && iParam0 <= 418)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1585F0
{
	if (iParam0 >= __LIB_4__::func_170(7) && iParam0 <= 414)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x158613
{
	if (iParam0 >= __LIB_4__::func_170(6) && iParam0 <= 410)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x158636
{
	if (iParam0 >= __LIB_4__::func_170(5) && iParam0 <= 366)
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x15867C
{
	if (iParam0 >= __LIB_4__::func_170(3) && iParam0 <= 338)
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2)//Position - 0x15A7A6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("monster3");
					}
					else if (iParam2 == 1)
					{
						return joaat("monster4");
					}
					else
					{
						return joaat("monster5");
					}
					break;
				case 1:
					return joaat("monster3");
					break;
				case 2:
					return joaat("monster4");
					break;
				case 3:
					return joaat("monster5");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("monster3");
					}
					else
					{
						return joaat("monster5");
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("cerberus");
					}
					else if (iParam2 == 1)
					{
						return joaat("cerberus2");
					}
					else
					{
						return joaat("cerberus3");
					}
					break;
				case 1:
					return joaat("cerberus");
					break;
				case 2:
					return joaat("cerberus2");
					break;
				case 3:
					return joaat("cerberus3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("cerberus");
					}
					else
					{
						return joaat("cerberus3");
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("bruiser");
					}
					else if (iParam2 == 1)
					{
						return joaat("bruiser2");
					}
					else
					{
						return joaat("bruiser3");
					}
					break;
				case 1:
					return joaat("bruiser");
					break;
				case 2:
					return joaat("bruiser2");
					break;
				case 3:
					return joaat("bruiser3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("bruiser");
					}
					else
					{
						return joaat("bruiser3");
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("slamvan4");
					}
					else if (iParam2 == 1)
					{
						return joaat("slamvan5");
					}
					else
					{
						return joaat("slamvan6");
					}
					break;
				case 1:
					return joaat("slamvan4");
					break;
				case 2:
					return joaat("slamvan5");
					break;
				case 3:
					return joaat("slamvan6");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("slamvan4");
					}
					else
					{
						return joaat("slamvan6");
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("brutus");
					}
					else if (iParam2 == 1)
					{
						return joaat("brutus2");
					}
					else
					{
						return joaat("brutus3");
					}
					break;
				case 1:
					return joaat("brutus");
					break;
				case 2:
					return joaat("brutus2");
					break;
				case 3:
					return joaat("brutus3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("brutus");
					}
					else
					{
						return joaat("brutus3");
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("scarab");
					}
					else if (iParam2 == 1)
					{
						return joaat("scarab2");
					}
					else
					{
						return joaat("scarab3");
					}
					break;
				case 1:
					return joaat("scarab");
					break;
				case 2:
					return joaat("scarab2");
					break;
				case 3:
					return joaat("scarab3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("scarab");
					}
					else
					{
						return joaat("scarab3");
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("dominator4");
					}
					else if (iParam2 == 1)
					{
						return joaat("dominator5");
					}
					else
					{
						return joaat("dominator6");
					}
					break;
				case 1:
					return joaat("dominator4");
					break;
				case 2:
					return joaat("dominator4");
					break;
				case 3:
					return joaat("dominator6");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("dominator4");
					}
					else
					{
						return joaat("dominator6");
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("impaler2");
					}
					else if (iParam2 == 1)
					{
						return joaat("impaler3");
					}
					else
					{
						return joaat("impaler4");
					}
					break;
				case 1:
					return joaat("impaler2");
					break;
				case 2:
					return joaat("impaler3");
					break;
				case 3:
					return joaat("impaler4");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("impaler2");
					}
					else
					{
						return joaat("impaler4");
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("imperator");
					}
					else if (iParam2 == 1)
					{
						return joaat("imperator2");
					}
					else
					{
						return joaat("imperator3");
					}
					break;
				case 1:
					return joaat("imperator");
					break;
				case 2:
					return joaat("imperator2");
					break;
				case 3:
					return joaat("imperator3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("imperator");
					}
					else
					{
						return joaat("imperator3");
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("zr380");
					}
					else if (iParam2 == 1)
					{
						return joaat("zr3802");
					}
					else
					{
						return joaat("zr3803");
					}
					break;
				case 1:
					return joaat("zr380");
					break;
				case 2:
					return joaat("zr3802");
					break;
				case 3:
					return joaat("zr3803");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("zr380");
					}
					else
					{
						return joaat("zr3803");
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("issi4");
					}
					else if (iParam2 == 1)
					{
						return joaat("issi5");
					}
					else
					{
						return joaat("issi6");
					}
					break;
				case 1:
					return joaat("issi4");
					break;
				case 2:
					return joaat("issi5");
					break;
				case 3:
					return joaat("issi6");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("issi4");
					}
					else
					{
						return joaat("issi6");
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return joaat("deathbike");
					}
					else if (iParam2 == 1)
					{
						return joaat("deathbike2");
					}
					else
					{
						return joaat("deathbike3");
					}
					break;
				case 1:
					return joaat("deathbike");
					break;
				case 2:
					return joaat("deathbike2");
					break;
				case 3:
					return joaat("deathbike3");
					break;
				case 4:
					if (iParam2 == 0)
					{
						return joaat("deathbike");
					}
					else
					{
						return joaat("deathbike3");
					}
					break;
			}
			break;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x15B038
{
	if (iParam0 == Global_262145.f_26535 /* Tunable: 1492016371 */)
	{
		return joaat("taxi");
	}
	if (iParam0 == Global_262145.f_26536 /* Tunable: -750956205 */)
	{
		return joaat("bulldozer");
	}
	if (iParam0 == Global_262145.f_26537 /* Tunable: 1695745922 */)
	{
		return joaat("speedo2");
	}
	if (iParam0 == Global_262145.f_26538 /* Tunable: -1757284520 */)
	{
		return joaat("trash2");
	}
	if (iParam0 == Global_262145.f_26539 /* Tunable: 894053140 */)
	{
		return joaat("barracks2");
	}
	if (iParam0 == Global_262145.f_26540 /* Tunable: 1079829325 */)
	{
		return joaat("mixer2");
	}
	if (iParam0 == Global_262145.f_26541 /* Tunable: -494806932 */)
	{
		return joaat("dune2");
	}
	if (iParam0 == Global_262145.f_26542 /* Tunable: 1611538212 */)
	{
		return joaat("tractor");
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x15B155
{
	if (((((((iParam0 == Global_262145.f_26535 /* Tunable: 1492016371 */ || iParam0 == Global_262145.f_26536 /* Tunable: -750956205 */) || iParam0 == Global_262145.f_26537 /* Tunable: 1695745922 */) || iParam0 == Global_262145.f_26538 /* Tunable: -1757284520 */) || iParam0 == Global_262145.f_26539 /* Tunable: 894053140 */) || iParam0 == Global_262145.f_26540 /* Tunable: 1079829325 */) || iParam0 == Global_262145.f_26541 /* Tunable: -494806932 */) || iParam0 == Global_262145.f_26542 /* Tunable: 1611538212 */)
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x15B2DC
{
	return Global_1965420;
}

int func_40()//Position - 0x15B2E8
{
	return 93 + 1;
}

int func_41()//Position - 0x15B307
{
	return Global_1965421;
}

int func_42()//Position - 0x15B313
{
	return 331;
}

int func_43()//Position - 0x15B352
{
	return ((Global_1965420 + Global_1965421) + Global_1965422);
}

void func_44(int iParam0)//Position - 0x15B42B
{
	if (!Global_262145.f_25921 /* Tunable: -148899823 */)
	{
		__LIB_1__::func_597(7851, iParam0, -1, 1, 0);
		Global_1964904[PLAYER::PLAYER_ID() /*15*/] = iParam0;
	}
}

void func_45()//Position - 0x15B456
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(85, -1);
	if (iVar0 >= 55000)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 1);
	}
}

void func_46(var uParam0)//Position - 0x15B4A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_4[iVar0] = 0;
		iVar0++;
	}
}

int func_47(int iParam0)//Position - 0x15BA95
{
	switch (iParam0)
	{
		case 0:
			return -2100029000;
		case 1:
			return 968151281;
		case 2:
			return 1250500863;
		case 3:
			return 210751841;
		case 5:
			return 472386554;
		default:
	}
	return 0;
}

char* func_48(int iParam0)//Position - 0x15BAEB
{
	switch (iParam0)
	{
		case 4:
			return "SPECTATOR_WHEEL_RWRD";
		case 0:
			return "ARENA_DRONE_KILL_RWRD";
		case 1:
			return "ARENA_RC_BAND_KILL_RWRD";
		case 2:
			return "ARENA_TURRET_KILL_RWRD";
		case 3:
			return "ARENA_TRAP_KILL_RWRD";
		case 5:
			return "ARENA_SKILL_LEVEL_UP_REWARD";
		default:
	}
	return "UNKNOWN";
}

int func_49(int iParam0)//Position - 0x15BFF0
{
	if (iParam0 < 0)
	{
		return -1;
	}
	return Global_262145.f_6159[iParam0];
}

int func_50(int iParam0)//Position - 0x15C285
{
	if (iParam0 < 0)
	{
		return -1;
	}
	return Global_262145.f_6108[iParam0];
}

bool func_51(int iParam0)//Position - 0x15C36B
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_5();
	}
	iParam0++;
	return Global_1574538[iParam0];
}

void func_52(var uParam0, int iParam1)//Position - 0x15D078
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	switch (iParam1)
	{
		case 0:
			sVar0 = "MP_CELEBRATION_BG";
			sVar1 = "MP_CELEBRATION_FG";
			sVar2 = "MP_CELEBRATION";
			break;
		case 1:
			sVar0 = "HEIST_CELEBRATION_BG";
			sVar1 = "HEIST_CELEBRATION_FG";
			sVar2 = "HEIST_CELEBRATION";
			break;
		case 2:
			sVar0 = "HEIST2_CELEBRATION_BG";
			sVar1 = "HEIST2_CELEBRATION_FG";
			sVar2 = "HEIST2_CELEBRATION";
			break;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar1);
	}
	if (uParam0->f_2 == 0)
	{
		uParam0->f_2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar2);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 != LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	}
}

bool func_53(int iParam0, int iParam1)//Position - 0x1658D1
{
	return iParam1 > iParam0;
}

int func_54(struct<3> Param0, float fParam1, float fParam2)//Position - 0x1658DE
{
	float fVar0;
	fVar0 = Param0.f_2;
	if (fParam1 > fParam2)
	{
		if (fVar0 < fParam1 && fVar0 > fParam2)
		{
			return 1;
		}
	}
	else if (fVar0 > fParam1 && fVar0 < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, int iParam2)//Position - 0x16DD8D
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				case 3:
					iVar1 = 74;
					break;
				case 2:
					iVar1 = 73;
					break;
				case 4:
					iVar1 = 75;
					break;
				case 5:
					iVar1 = 76;
					break;
				case 6:
					iVar1 = 77;
					break;
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				iVar0 = __LIB_1__::func_556(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				__LIB_1__::func_597(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_56(int iParam0)//Position - 0x16FC5E
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x16FCB1
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

float func_58(float fParam0, float fParam1, float fParam2)//Position - 0x1751C3
{
	if (fParam0 == fParam1)
	{
		return 0f;
	}
	return __LIB_0__::func_301(((fParam2 - fParam0) / (fParam1 - fParam0)), 0f, 1f);
}

bool func_59()//Position - 0x1753D2
{
	return Global_1659814.f_1;
}

void func_60()//Position - 0x17589F
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
}

int func_61(var uParam0, var uParam1)//Position - 0x17725B
{
	if (NETWORK::IS_TIME_MORE_THAN(*uParam0, *uParam1))
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, var uParam1)//Position - 0x177275
{
	if (NETWORK::IS_TIME_EQUAL_TO(*uParam0, *uParam1))
	{
		return 1;
	}
	return 0;
}

float func_63()//Position - 0x177DC5
{
	if (MISC::IS_PC_VERSION())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_64()//Position - 0x17A573
{
	int iVar0;
	iVar0 = __LIB_12__::func_603();
	if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0) || __LIB_1__::func_387(1) >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, var uParam1)//Position - 0x17A5A2
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, *uParam1));
}

int func_66()//Position - 0x17B99B
{
	if (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19)
	{
		return 1;
	}
	return 0;
}

int func_67()//Position - 0x17C4BF
{
	if (Global_4718592.f_623 == 0 && Global_1659814.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)//Position - 0x17EB57
{
	int iVar0;
	if (__LIB_11__::func_533(Global_4718592.f_168757))
	{
		return 20000;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 21:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_PACIFIC_STANDARD_JOB_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9131 /* Tunable: HEIST_PACIFIC_STANDARD_JOB_CASH_REWARD */;
			case 22:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_PRISON_BREAK_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9128 /* Tunable: HEIST_PRISON_BREAK_CASH_REWARD */;
			case 23:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_HUMANE_LABS_RAID_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9129 /* Tunable: HEIST_HUMANE_LABS_RAID_CASH_REWARD */;
			case 24:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_SERIES_A_FUNDING_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9130 /* Tunable: HEIST_SERIES_A_FUNDING_CASH_REWARD */;
			case 25:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_FLEECA_JOB_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9127 /* Tunable: HEIST_FLEECA_JOB_CASH_REWARD */;
			case 26:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("GANGOPS_THE_IAA_JOB_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9132 /* Tunable: GANGOPS_THE_IAA_JOB_CASH_REWARD */;
			case 27:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("GANGOPS_THE_SUBMARINE_JOB_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9133 /* Tunable: GANGOPS_THE_SUBMARINE_JOB_CASH_REWARD */;
			case 28:
				if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("GANGOPS_THE_MISSILE_SILO_JOB_CASH_REWARD"), &iVar0))
				{
					return iVar0;
				}
				return Global_262145.f_9134 /* Tunable: GANGOPS_THE_MISSILE_SILO_JOB_CASH_REWARD */;
			}
		default:
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 500;
			break;
		case 1:
			iVar0 = 1000;
			break;
		case 2:
			iVar0 = 1500;
			break;
		case 3:
			iVar0 = 2000;
			break;
		case 4:
			iVar0 = 3000;
			break;
		case 5:
			iVar0 = 5000;
			break;
		case 6:
			iVar0 = 7000;
			break;
		case 7:
			iVar0 = 9000;
			break;
		case 8:
			iVar0 = 10000;
			break;
		case 9:
			iVar0 = 12000;
			break;
		case 10:
			iVar0 = 14000;
			break;
		case 11:
			iVar0 = 16000;
			break;
		case 12:
			iVar0 = 18000;
			break;
		case 13:
			iVar0 = 20000;
			break;
		case 14:
			iVar0 = 23000;
			break;
		case 15:
			iVar0 = 25000;
			break;
		case 16:
			iVar0 = 30000;
			break;
		case 17:
			iVar0 = 40000;
			break;
		case 18:
			iVar0 = 50000;
			break;
		case 19:
			iVar0 = 100000;
			break;
		case 20:
			iVar0 = 0;
			break;
		case 21:
			iVar0 = Global_262145.f_9131 /* Tunable: HEIST_PACIFIC_STANDARD_JOB_CASH_REWARD */;
			break;
		case 22:
			iVar0 = Global_262145.f_9128 /* Tunable: HEIST_PRISON_BREAK_CASH_REWARD */;
			break;
		case 23:
			iVar0 = Global_262145.f_9129 /* Tunable: HEIST_HUMANE_LABS_RAID_CASH_REWARD */;
			break;
		case 24:
			iVar0 = Global_262145.f_9130 /* Tunable: HEIST_SERIES_A_FUNDING_CASH_REWARD */;
			break;
		case 25:
			iVar0 = Global_262145.f_9127 /* Tunable: HEIST_FLEECA_JOB_CASH_REWARD */;
			break;
		case 26:
			iVar0 = Global_262145.f_9132 /* Tunable: GANGOPS_THE_IAA_JOB_CASH_REWARD */;
			break;
		case 27:
			iVar0 = Global_262145.f_9133 /* Tunable: GANGOPS_THE_SUBMARINE_JOB_CASH_REWARD */;
			break;
		case 28:
			iVar0 = Global_262145.f_9134 /* Tunable: GANGOPS_THE_MISSILE_SILO_JOB_CASH_REWARD */;
			break;
		case 29:
			iVar0 = Global_262145.f_9135 /* Tunable: GANGOPS_PREP_THE_IAA_JOB_CASH_REWARD */;
			break;
		case 30:
			iVar0 = Global_262145.f_9136 /* Tunable: GANGOPS_PREP_THE_SUBMARINE_JOB_CASH_REWARD */;
			break;
		case 31:
			iVar0 = Global_262145.f_9137 /* Tunable: GANGOPS_PREP_THE_MISSILE_SILO_JOB_CASH_REWARD */;
			break;
		case 32:
			iVar0 = Global_262145.f_28367 /* Tunable: 485948238 */;
			break;
		case 33:
			iVar0 = Global_262145.f_29716 /* Tunable: -1998919342 */;
			break;
	}
	return iVar0;
}

int func_69(int iParam0)//Position - 0x17F1F4
{
	if (((iParam0 == Global_262145.f_5041[3] || iParam0 == Global_262145.f_5041[8]) || iParam0 == Global_262145.f_5041[14]) || iParam0 == Global_262145.f_5041[15])
	{
		return 1;
	}
	return 0;
}

bool func_70()//Position - 0x17F535
{
	return Global_2715699.f_6310;
}

var func_71()//Position - 0x17F909
{
	return Global_2714762.f_43.f_41;
}

bool func_72(int iParam0)//Position - 0x17FCF0
{
	return iParam0 == 70;
}

int func_73()//Position - 0x18086B
{
	if (BitTest(Global_4718592.f_39, 1))
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, int iParam1, int iParam2)//Position - 0x180C90
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_287(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(iParam0, iVar1);
		PLAYER::SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(iParam0, 0);
		PLAYER::CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(iParam0);
	}
}

void func_75(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x180E82
{
	*uParam1 = 255;
	*uParam2 = 255;
	*uParam3 = 255;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
		case 1:
			*uParam1 = 255;
			*uParam2 = 0;
			*uParam3 = 0;
			break;
		case 2:
			*uParam1 = 255;
			*uParam2 = 165;
			*uParam3 = 0;
			break;
		case 3:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 0;
			break;
		case 4:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 255;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 20;
			*uParam3 = 20;
			break;
		case 6:
			*uParam1 = Global_1576215;
			*uParam2 = Global_1576216;
			*uParam3 = Global_1576217;
			break;
		case 7:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 0;
			break;
	}
}

int func_76(int iParam0)//Position - 0x18CBC1
{
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_BZGAS"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_BALL"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
	}
	return 0;
}

bool func_77()//Position - 0x194497
{
	return Global_1836370;
}

int func_78(int iParam0)//Position - 0x1977F1
{
	if (iParam0 != -1)
	{
		return Global_1585857[iParam0 /*142*/].f_66;
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x197FC7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Global_1648034.f_241.f_34[iVar0 /*33*/][iParam0] = 0;
		iVar0++;
	}
}

int func_80(bool bParam0)//Position - 0x19A8C6
{
	if (bParam0)
	{
		return 1;
	}
	if (((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) || Global_2715699.f_2846.f_55) || Global_2715699.f_2846.f_83) || __LIB_1__::func_99(PLAYER::PLAYER_ID()) == 0)
	{
		if (__LIB_2__::func_283())
		{
			return 1;
		}
	}
	return Global_2715699.f_2846.f_40;
}

bool func_81()//Position - 0x19DF47
{
	return BitTest(Global_1574942, 5);
}

void func_82(bool bParam0)//Position - 0x19EE2F
{
	if (bParam0 < 0 || bParam0 > 8)
	{
		return;
	}
	if (!BitTest(Global_1965455, bParam0))
	{
		MISC::SET_BIT(&Global_1965455, bParam0);
	}
}

void func_83(char* sParam0, char* sParam1, int iParam2)//Position - 0x1A0BA2
{
	AUDIO::SET_RADIO_TO_STATION_NAME(sParam0);
	AUDIO::FORCE_MUSIC_TRACK_LIST(sParam0, sParam1, iParam2);
}

int func_84(int iParam0)//Position - 0x1A0BBA
{
	switch (iParam0)
	{
		case 0:
			return 69100;
		case 1:
			return 353200;
		case 2:
			return 951400;
		case 3:
			return 1093000;
		case 4:
			return 1654300;
		default:
	}
	return 69100;
}

int func_85()//Position - 0x1A3AF3
{
	if (Global_4718592.f_117095 == 3 || Global_4718592.f_117095 == 4)
	{
		return 1;
	}
	return 0;
}

void func_86()//Position - 0x1A51DC
{
	StringCopy(&(Global_2714762.f_33), "", 24);
}

void func_87(var uParam0)//Position - 0x1A52A8
{
	Global_2714762.f_12 = uParam0;
}

void func_88()//Position - 0x1A52B8
{
	Global_2714762.f_14 = 1;
}

bool func_89()//Position - 0x1A55F3
{
	return Global_2714762.f_856;
}

void func_90(int iParam0, int* iParam1, int* iParam2, int iParam3)//Position - 0x1A8D72
{
	if (__LIB_5__::func_55(iParam0))
	{
		MISC::SET_BIT(iParam1, 15);
	}
	else if (__LIB_5__::func_54(iParam0))
	{
		MISC::SET_BIT(iParam1, 18);
	}
	else if (__LIB_5__::func_53(iParam0))
	{
		MISC::SET_BIT(iParam1, 19);
	}
	else if (__LIB_1__::func_735(iParam0))
	{
		MISC::SET_BIT(iParam1, 29);
	}
	else if (__LIB_0__::func_719(iParam0, 1))
	{
		MISC::SET_BIT(iParam1, 28);
	}
	else if (__LIB_4__::func_759(iParam0))
	{
		MISC::SET_BIT(iParam2, 0);
	}
	else if (__LIB_4__::func_755(iParam0))
	{
		MISC::SET_BIT(iParam2, 1);
	}
	else if (__LIB_5__::func_52(iParam0))
	{
		MISC::SET_BIT(iParam2, 2);
	}
	else if (__LIB_5__::func_51(iParam0))
	{
		MISC::SET_BIT(iParam2, 3);
	}
	else if (__LIB_5__::func_50(iParam0))
	{
		MISC::SET_BIT(iParam2, 4);
	}
	else if (__LIB_1__::func_740(iParam0))
	{
		MISC::SET_BIT(iParam2, 5);
	}
	else if (__LIB_1__::func_734(iParam0))
	{
		MISC::SET_BIT(iParam2, 6);
	}
	else if (__LIB_4__::func_766(iParam0))
	{
		MISC::SET_BIT(iParam2, 7);
	}
	else if (__LIB_1__::func_739(iParam0))
	{
		MISC::SET_BIT(iParam2, 8);
	}
	else if (__LIB_2__::func_259(iParam0))
	{
		MISC::SET_BIT(iParam2, 9);
	}
	else if (__LIB_4__::func_754(iParam0))
	{
		MISC::SET_BIT(iParam2, 10);
	}
	else if (__LIB_5__::func_49(iParam0))
	{
		MISC::SET_BIT(iParam2, 11);
	}
	else if (__LIB_4__::func_758(iParam0))
	{
		MISC::SET_BIT(iParam2, 12);
	}
	else if (__LIB_11__::func_533(iParam3))
	{
		MISC::SET_BIT(iParam2, 13);
	}
	else if (__LIB_1__::func_738(iParam0))
	{
		MISC::SET_BIT(iParam2, 14);
	}
	else if (__LIB_1__::func_737(iParam0))
	{
		MISC::SET_BIT(iParam2, 22);
	}
	else if (__LIB_0__::func_918(iParam3))
	{
		MISC::SET_BIT(iParam2, 16);
	}
	else if (__LIB_11__::func_532(iParam3))
	{
		MISC::SET_BIT(iParam2, 17);
	}
	else if (__LIB_11__::func_531(iParam3))
	{
		MISC::SET_BIT(iParam2, 20);
	}
	else if (__LIB_11__::func_530(iParam3))
	{
		MISC::SET_BIT(iParam2, 21);
	}
	else if (__LIB_1__::func_737(iParam3))
	{
		MISC::SET_BIT(iParam2, 22);
	}
	else if (__LIB_11__::func_529(iParam3))
	{
		MISC::SET_BIT(iParam2, 23);
	}
	else if (__LIB_11__::func_528(iParam3))
	{
		MISC::SET_BIT(iParam2, 24);
	}
	else if (__LIB_5__::func_31(iParam3))
	{
		MISC::SET_BIT(iParam2, 25);
	}
	else if (__LIB_6__::func_332(iParam3))
	{
		MISC::SET_BIT(iParam2, 26);
	}
	else if (__LIB_9__::func_797(iParam3))
	{
		MISC::SET_BIT(iParam2, 27);
	}
	else if (__LIB_0__::func_770(iParam3))
	{
		MISC::SET_BIT(iParam2, 28);
	}
	else if (__LIB_6__::func_178(iParam3))
	{
		MISC::SET_BIT(iParam2, 29);
	}
	else if (__LIB_0__::func_641(iParam3))
	{
		MISC::SET_BIT(iParam2, 30);
	}
}

void func_91(bool bParam0)//Position - 0x1A94E3
{
	__LIB_0__::func_645(joaat("MPPLY_BIG_FEED_INIT"), bParam0);
}

int func_92(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A9B74
{
	switch (uParam0->f_1)
	{
		case 0:
			if (iParam4 == -1)
			{
				return 0;
			}
			if (__LIB_9__::func_96())
			{
				return 1;
			}
			else
			{
				if (*uParam0 != 0)
				{
					NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
				}
				*uParam0 = 0;
				uParam0->f_1 = 1;
			}
			break;
		case 1:
			if (iParam5 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				return 0;
			}
			if (iParam2 == -1)
			{
				iParam2 = 0;
			}
			*uParam0 = NETWORK::UGC_TEXTURE_DOWNLOAD_REQUEST(sParam1, iParam4, iParam2, 0, sParam1, false);
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

void func_93(char* sParam0, char* sParam1, int iParam2, var uParam3, char* sParam4)//Position - 0x1AAC34
{
	int iVar0;
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = iParam2;
	MISC::SET_BIT(&(uParam3->f_686), iVar0);
	uParam3->f_694 = iVar0;
	uParam3->f_693++;
}

void func_94(int iParam0)//Position - 0x1AF329
{
	int iVar0;
	iVar0 = AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS();
	Global_1659931 = (Global_1659931 + iParam0);
	if (Global_1659931 > iVar0)
	{
		Global_1659931 = 0;
	}
	if (Global_1659931 < 0)
	{
		Global_1659931 = iVar0;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	__LIB_8__::func_832();
}

int func_95()//Position - 0x1B2AB5
{
	var uVar0;
	__LIB_0__::func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	__LIB_0__::func_143(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	__LIB_0__::func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
	__LIB_8__::func_242(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	__LIB_0__::func_141(&uVar0, CLOCK::GET_CLOCK_MONTH());
	__LIB_0__::func_140(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_96(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x2D1528
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x2D5744
{
	switch (iParam0)
	{
		case 931:
			return 0;
		case 932:
			return 1;
		case 933:
			return 2;
		case 934:
			return 3;
		case 935:
			return 4;
		case 936:
			return 5;
		case 937:
			return 6;
		case 938:
			return 7;
		case 939:
			return 8;
		default:
	}
	if (iParam0 >= 1148 && iParam0 <= 1197)
	{
		return 9;
	}
	return -1;
}

void func_98(var uParam0, var uParam1)//Position - 0x2D78CD
{
	*uParam0 = uParam1;
}

void func_99(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x2D794E
{
	int iVar0;
	int iVar1;
	if (!bParam4)
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_2097157.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (__LIB_11__::func_626(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_2097157.f_142.f_36[iVar0] = iParam2;
	Global_2097157.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
}

void func_100(int iParam0)//Position - 0x2E2783
{
	Global_2703735.f_3461 = iParam0;
}

Vector3 func_101(struct<2> Param0, Vector3 vParam1)//Position - 0x2E49A9
{
	struct<3> Var0;
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

int func_102()//Position - 0x2E952E
{
	int iVar0;
	iVar0 = 1;
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_pits");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_pits"))
	{
		iVar0 = 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/Arena_Traps", false, -1))
	{
		iVar0 = 0;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_props");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_props"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_103(int iParam0)//Position - 0x2F3F4B
{
	Global_2789753 = iParam0;
}

void func_104()//Position - 0x2F47C4
{
	char* sVar0;
	int iVar1;
	if (!Global_1973203)
	{
		return;
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		Global_1973203 = 1;
		return;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (iVar1 == 0)
		{
			sVar0 = "h4_islandx_disc_StrandedWhale";
		}
		else if (iVar1 == 1)
		{
			sVar0 = "h4_islandx_disc_StrandedShark";
		}
		if (STREAMING::IS_IPL_ACTIVE(sVar0))
		{
			STREAMING::REMOVE_IPL(sVar0);
		}
		iVar1++;
	}
	Global_1973204 = 0;
	Global_1973203 = 0;
}

bool func_105()//Position - 0x2F4838
{
	return STREAMING::IS_IPL_ACTIVE("H4_islandx_terrain_01");
}

void func_106()//Position - 0x2F4940
{
	Global_2788036 = 0;
}

bool func_107(var uParam0)//Position - 0x2FCB3D
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_12__::func_550(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_158(iVar1));
}

void func_108(int iParam0, bool bParam1)//Position - 0x30248C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1011[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1011[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

char* func_109(int iParam0, int iParam1)//Position - 0x302509
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
			break;
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0";
			break;
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1";
			break;
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1";
			break;
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1";
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_SMG_CLIP_01"):
				case joaat("COMPONENT_SMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_RAILCOVER_01"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				case joaat("COMPONENT_AT_SR_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0";
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon";
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon";
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
				case joaat("COMPONENT_AT_AR_SUPP"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
				case joaat("COMPONENT_AT_AR_AFGRIP"):
				case joaat("COMPONENT_AT_AR_FLSH"):
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				case joaat("COMPONENT_MG_CLIP_01"):
				case joaat("COMPONENT_MG_CLIP_02"):
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1";
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				case joaat("COMPONENT_AT_PI_SUPP"):
				case joaat("COMPONENT_AT_PI_FLSH"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon";
			break;
	}
	return "";
}

char* func_110(int iParam0, int iParam1, int iParam2)//Position - 0x3029AE
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_KNIFE_01";
				break;
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun";
				break;
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
						break;
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						return "W_PI_Pistol_Mag1";
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						return "W_PI_Pistol_Mag2";
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_Pistol_Flash";
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						return "W_PI_Pistol_Supp";
						break;
				}
				break;
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
						break;
					case joaat("COMPONENT_SMG_CLIP_01"):
						return "W_SB_SMG_Mag1";
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						return "W_SB_SMG_Mag2";
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_SB_SMG_Supp";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SB_SMG_Flash";
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
						break;
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						return "W_SR_SniperRifle_Mag1";
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						return "W_SR_SniperRifle_Scope";
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SR_SniperRifle_Supp";
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						return "W_AR_CarbineRifle_Mag1";
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						return "W_AR_CarbineRifle_Mag2";
						break;
					case joaat("COMPONENT_AT_RAILCOVER_01"):
						return "CarbineRifle_RAILCOVER_1";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_CarbineRifle_Grip";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_CarbineRifle_Flash";
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_AR_CarbineRifle_Scope";
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "W_AR_CarbineRifle_Supp";
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				break;
			case joaat("WEAPON_SNSPISTOL"):
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						return "W_SG_PumpShotgun_Supp";
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SG_PumpShotgun_Flash";
						break;
				}
				break;
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag";
				break;
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE";
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_R_GrenadeLauncher_Grip";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_R_GrenadeLauncher_Flash";
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						return "W_R_GrenadeLauncher_Scope";
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "W_MG_CombatMG_Scope";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_MG_CombatMG_Grip";
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						return "W_MG_CombatMG_Mag2";
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						return "W_MG_CombatMG_Mag1";
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						return "W_SG_AssaultShotgun_Mag1";
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						return "W_SG_AssaultShotgun_Mag2";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_SG_AssaultShotgun_Grip";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_SG_AssaultShotgun_Flsh";
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SG_AssaultShotgun_Supp";
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						return "W_PI_AppPistol_Mag1";
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						return "W_PI_AppPistol_Mag2";
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_AppPistol_Flash";
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_AppPistol_Supp";
						break;
				}
				break;
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG";
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
						break;
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						return "W_SR_HeavySniper_Mag1";
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						return "W_SR_HeavySniper_Scope";
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						return "W_AR_AdvancedRifle_mag1";
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						return "W_AR_AdvancedRifle_Mag2";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "AdvancedRifle_AFGRIP";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "AssaultRifle_FLASHLIGHT";
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						return "AssaultRifle_SCOPE_SMALL";
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						return "AdvancedRifle_SUPPRESSOR";
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						return "W_SB_MicroSMG_Mag1";
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						return "W_SB_MicroSMG_Mag2";
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_SB_MicroSMG_Flash";
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_SB_MicroSMG_Scope";
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_SB_MicroSMG_Supp";
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						return "W_AR_AssaultRifle_Mag1";
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						return "W_AR_AssaultRifle_Mag2";
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						return "W_AR_AssaultRifle_Grip";
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						return "W_AR_AssaultRifle_Flash";
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						return "W_AR_AssaultRifle_Scope";
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						return "W_AR_AssaultRifle_Supp";
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
						break;
					case joaat("COMPONENT_MG_CLIP_01"):
						return "W_MG_MG_Mag1";
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						return "W_MG_MG_Mag2";
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						return "W_MG_MG_Scope";
						break;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF";
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
						break;
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						return "W_MG_Minigun_Laser";
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						return "W_PI_CombatPistol_Supp";
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						return "W_PI_CombatPistol_Flash";
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						return "W_PI_CombatPistol_Mag1";
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						return "W_PI_CombatPistol_Mag2";
						break;
				}
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_KNIFE"):
				return "W_ME_Knife_SILHOUETTE";
				break;
			case joaat("WEAPON_STUNGUN"):
				return "W_PI_Stungun_SILHOUETTE";
				break;
			case joaat("WEAPON_PISTOL"):
				return "W_PI_Pistol_SILHOUETTE";
				break;
			case joaat("GADGET_PARACHUTE"):
				return "Parachute_Main";
				break;
			case joaat("WEAPON_SMG"):
				return "W_SB_SMG_SILHOUETTE";
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				return "W_SR_SniperRifle_SILHOUETTE";
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			case joaat("WEAPON_SNSPISTOL"):
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				return "W_SG_PumpShotgun_SILHOUETTE";
				break;
			case joaat("WEAPON_GRENADE"):
				return "W_Ex_GrenadeFrag_SILHOUETTE";
				break;
			case joaat("WEAPON_STICKYBOMB"):
				return "W_Ex_PE_SILHOUETTE";
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				return "W_R_GrenadeLauncher_SILHOUETTE";
				break;
			case joaat("WEAPON_COMBATMG"):
				return "W_MG_CombatMG_SILHOUETTE";
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				return "W_SG_AssaultShotgun_SILHOUETTE";
				break;
			case joaat("WEAPON_APPISTOL"):
				return "W_PI_AppPistol_SILHOUETTE";
				break;
			case joaat("WEAPON_RPG"):
				return "W_LR_RPG_SILHOUETTE";
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				return "W_SR_HeavySniper_SILHOUETTE";
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				return "W_AR_AdvancedRifle_SILHOUETTE";
				break;
			case joaat("WEAPON_MICROSMG"):
				return "W_SB_MicroSMG_SILHOUETTE";
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				return "W_AR_AssaultRifle_SILHOUETTE";
				break;
			case joaat("WEAPON_MG"):
				return "W_MG_MG_SILHOUETTE";
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				return "W_SG_SAWNOFF_SILHOUETTE";
				break;
			case joaat("WEAPON_MINIGUN"):
				return "W_MG_Minigun_SILHOUETTE";
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				return "W_PI_CombatPistol_SILHOUETTE";
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
				break;
			}
	}
	return "";
}

char* func_111(int iParam0)//Position - 0x30325A
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA" /* GXT: Parachute */;
			break;
		case 5:
			return "KIT_THERMAL" /* GXT: Thermal Vision */;
			break;
		case 2:
			return "KIT_SMOK_RED" /* GXT: Red Parachute Smoke */;
			break;
		case 3:
			return "KIT_SMOK_ORA" /* GXT: Orange Parachute Smoke */;
			break;
		case 4:
			return "KIT_SMOK_YEL" /* GXT: Yellow Parachute Smoke */;
			break;
		case 6:
			return "KIT_SMOK_BLA" /* GXT: Black Parachute Smoke */;
			break;
		case 7:
			return "KIT_SMOK_BLU" /* GXT: Blue Parachute Smoke */;
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD" /* GXT: New weapon color options available at Ammu-Nation. */;
			break;
	}
	return sVar0;
}

char* func_112(int iParam0)//Position - 0x303638
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL" /* GXT: Pistol Tint Unlock */;
			break;
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL" /* GXT: Combat Pistol Tint Unlock */;
			break;
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL" /* GXT: AP Pistol Tint Unlock */;
			break;
		case 59:
		case 79:
		case 99:
		case 119:
			return "TINT_MICROSMG" /* GXT: Micro SMG Tint Unlock */;
			break;
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG" /* GXT: SMG Tint Unlock */;
			break;
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE" /* GXT: Assault Rifle Tint Unlock */;
			break;
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE" /* GXT: Carbine Rifle Tint Unlock */;
			break;
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE" /* GXT: Advanced Rifle Tint Unlock */;
			break;
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG" /* GXT: MG Tint Unlock */;
			break;
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG" /* GXT: Combat MG Tint Unlock */;
			break;
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP" /* GXT: Pump Shotgun Tint Unlock */;
			break;
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF" /* GXT: Sawed-Off Shotgun Tint Unlock */;
			break;
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN" /* GXT: Assault Shotgun Tint Unlock */;
			break;
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL" /* GXT: Sniper Rifle Tint Unlock */;
			break;
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER" /* GXT: Heavy Sniper Tint Unlock */;
			break;
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH" /* GXT: Grenade Launcher Tint Unlock */;
			break;
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG" /* GXT: RPG Tint Unlock */;
			break;
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN" /* GXT: Minigun Tint Unlock */;
			break;
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG" /* GXT: Assault SMG Tint Unlock */;
			break;
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
			break;
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50" /* GXT: Pistol. 50 Tint Unlock */;
			break;
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG" /* GXT: Assault MG Tint Unlock */;
			break;
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE" /* GXT: Heavy Rifle Tint Unlock */;
			break;
	}
	return "WEAPON_UNLOCK" /* GXT: Weapon Unlock */;
}

char* func_113(int iParam0)//Position - 0x30396B
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL" /* GXT: Thermal Vision */;
			break;
		case 2:
			return "KIT_SMOK_RED" /* GXT: Red Parachute Smoke */;
			break;
		case 3:
			return "KIT_SMOK_ORA" /* GXT: Orange Parachute Smoke */;
			break;
		case 4:
			return "KIT_SMOK_YEL" /* GXT: Yellow Parachute Smoke */;
			break;
		case 6:
			return "KIT_SMOK_BLA" /* GXT: Black Parachute Smoke */;
			break;
		case 7:
			return "KIT_SMOK_BLU" /* GXT: Blue Parachute Smoke */;
			break;
		case 16:
			return "AWT_651";
		case 17:
			return "AWT_651";
		case 18:
			return "AWT_651";
		case 19:
			return "AWT_651";
		case 20:
			return "AWT_651";
		case 21:
			return "AWT_651";
		case 22:
			return "AWT_651";
		case 23:
			return "AWT_651";
		case 24:
			return "AWT_651";
		case 25:
			return "AWT_651";
		case 26:
			return "AWT_651";
		case 27:
			return "AWT_651";
		case 28:
			return "AWT_651";
		case 29:
			return "AWT_651";
		case 30:
			return "AWT_651";
		case 31:
			return "AWT_651";
		case 32:
			return "AWT_651";
		case 33:
			return "AWT_651";
		case 34:
			return "AWT_651";
		case 35:
			return "AWT_651";
		case 36:
			return "AWT_650";
		case 37:
			return "AWT_650";
		case 38:
			return "AWT_650";
		case 39:
			return "AWT_650";
		case 40:
			return "AWT_650";
		case 41:
			return "AWT_650";
		case 42:
			return "AWT_650";
		case 43:
			return "AWT_650";
		case 44:
			return "AWT_650";
		case 45:
			return "AWT_650";
		case 46:
			return "AWT_650";
		case 47:
			return "AWT_650";
		case 48:
			return "AWT_650";
		case 49:
			return "AWT_650";
		case 50:
			return "AWT_650";
		case 51:
			return "AWT_650";
		case 52:
			return "AWT_650";
		case 53:
			return "AWT_650";
		case 54:
			return "AWT_650";
		case 55:
			return "AWT_650";
		case 136:
			return "AWT_657";
		case 137:
			return "AWT_657";
		case 138:
			return "AWT_657";
		case 139:
			return "AWT_657";
		case 140:
			return "AWT_657";
		case 141:
			return "AWT_657";
		case 142:
			return "AWT_657";
		case 143:
			return "AWT_657";
		case 144:
			return "AWT_657";
		case 145:
			return "AWT_657";
		case 146:
			return "AWT_657";
		case 147:
			return "AWT_657";
		case 148:
			return "AWT_657";
		case 149:
			return "AWT_657";
		case 150:
			return "AWT_657";
		case 151:
			return "AWT_657";
		case 152:
			return "AWT_657";
		case 153:
			return "AWT_657";
		case 154:
			return "AWT_657";
		case 155:
			return "AWT_657";
		case 56:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 57:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 58:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 59:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 60:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 61:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 62:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 63:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 64:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 65:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 66:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 67:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 68:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 71:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 72:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 73:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 74:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 75:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 76:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 77:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 78:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 79:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 80:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 81:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 82:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 83:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 84:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 85:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 86:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 87:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 88:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 91:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 92:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 93:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 94:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 95:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 96:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 97:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 98:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 99:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 100:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 101:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 102:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 103:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 104:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 105:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 106:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 107:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 108:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 111:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 112:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 113:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 114:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 115:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 116:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 117:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 118:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 119:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 120:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 121:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 122:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 123:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 124:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 125:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 126:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 127:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 128:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 131:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 132:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 133:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 134:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 135:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 163:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 164:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 165:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 169:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 170:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 171:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 175:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 176:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 177:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 181:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 182:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 183:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 187:
			return "TAN_TINT_HEAD" /* GXT: Army */;
			break;
		case 188:
			return "BLUE_TINT_HEAD" /* GXT: LSPD */;
			break;
		case 189:
			return "RED_TINT_HEAD" /* GXT: Orange */;
			break;
		case 191:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 192:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 193:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
		case 194:
			return "GREEN_TINT_HEAD" /* GXT: Green */;
			break;
	}
	return sVar0;
}

var func_114(int iParam0)//Position - 0x304357
{
	var uVar0;
	uVar0 = Global_2825435.f_1011[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

void func_115()//Position - 0x30AB58
{
	if (BitTest(Global_1965451, 0))
	{
		GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("ent_amb_fbi_fire_lg");
		if (Global_4718592.f_162543 == 2 && BitTest(Global_1965451, 3))
		{
			GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("exp_grd_tankshell");
			MISC::CLEAR_BIT(&Global_1965451, 3);
		}
		MISC::CLEAR_BIT(&Global_1965451, 0);
	}
}

void func_116()//Position - 0x30ACEC
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_AW_Arena_Crowd_Background_Main", false);
}

void func_117(var uParam0, var uParam1)//Position - 0x30B3D7
{
	__LIB_12__::func_794(uParam0, "Set_Lights_atlantis", (uParam1 && Global_4718592.f_162543.f_2 == 1));
	__LIB_12__::func_794(uParam0, "Set_Lights_evening", (uParam1 && Global_4718592.f_162543.f_2 == 2));
	__LIB_12__::func_794(uParam0, "Set_Lights_hell", (uParam1 && Global_4718592.f_162543.f_2 == 3));
	__LIB_12__::func_794(uParam0, "Set_Lights_midday", (uParam1 && Global_4718592.f_162543.f_2 == 4));
	__LIB_12__::func_794(uParam0, "Set_Lights_morning", (uParam1 && Global_4718592.f_162543.f_2 == 5));
	__LIB_12__::func_794(uParam0, "Set_Lights_night", ((uParam1 && Global_4718592.f_162543.f_2 == 6) && Global_4718592.f_162543 != 2));
	__LIB_12__::func_794(uParam0, "set_lights_sfnight", ((uParam1 && Global_4718592.f_162543.f_2 == 6) && Global_4718592.f_162543 == 2));
	__LIB_12__::func_794(uParam0, "Set_Lights_saccharine", (uParam1 && Global_4718592.f_162543.f_2 == 7));
	__LIB_12__::func_794(uParam0, "Set_Lights_sandstorm", (uParam1 && Global_4718592.f_162543.f_2 == 8));
	__LIB_12__::func_794(uParam0, "Set_Lights_storm", (uParam1 && Global_4718592.f_162543.f_2 == 9));
	__LIB_12__::func_794(uParam0, "Set_Lights_toxic", (uParam1 && Global_4718592.f_162543.f_2 == 10));
}

void func_118()//Position - 0x30BB6B
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
}

void func_119()//Position - 0x30D2F2
{
	if (Global_1965456)
	{
		if (__LIB_0__::func_493())
		{
			if (__LIB_0__::func_844(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 1:
						ENTITY::REMOVE_MODEL_HIDE(2947.7297f, -3860.6223f, 142.61438f, 5f, joaat("xs_combined_dyst_06_build_03"), false);
						break;
				}
			}
			else if (__LIB_0__::func_843(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.7654f, -3859.6245f, 151.10071f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
				}
			}
			else if (__LIB_0__::func_837(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), false);
						break;
				}
			}
			else if (__LIB_0__::func_845(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2944.7256f, -3846.3835f, 140.00003f, 5f, joaat("xs_propint5_waste_09_ground_d"), false);
						ENTITY::REMOVE_MODEL_HIDE(2948.5894f, -3859.2585f, 145.65782f, 5f, joaat("xs_propint5_waste_09_ground_cut"), false);
						ENTITY::REMOVE_MODEL_HIDE(2950.4646f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), false);
						break;
				}
			}
			else if (__LIB_0__::func_842(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.7654f, -3859.6245f, 151.10071f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
					}
				}
		}
		Global_1965456 = 0;
	}
}

void func_120(char* sParam0)//Position - 0x30D756
{
	var uVar0;
	if ((!__LIB_1__::func_688() && __LIB_1__::func_563(120, -1)) && !__LIB_0__::func_155(0))
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(sParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

void func_121(int iParam0)//Position - 0x30DFEB
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2714762.f_669.f_9 == 0)
	{
		Global_1922981.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1922981[iVar1 /*42*/].f_3;
		Global_1922981[iVar1 /*42*/] = { Var0 };
		if (__LIB_0__::func_910())
		{
			Global_1922981[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1922981[iVar1 /*42*/].f_1 = __LIB_0__::func_160();
		Global_1922981[iVar1 /*42*/] = -1;
		Global_1922981[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!__LIB_0__::func_910() && !__LIB_1__::func_215()) && iParam0)
	{
		Global_1922981.f_1347 = 0;
		Global_1922981.f_1348 = 0;
	}
}

void func_122(bool bParam0)//Position - 0x30E267
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!__LIB_0__::func_747() && !__LIB_0__::func_942()) && Global_1922955.f_9 != 4) && !__LIB_1__::func_215())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!__LIB_0__::func_747() && !__LIB_0__::func_942()) && Global_1922955.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_123()//Position - 0x30E913
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_1__::func_803(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1940311.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	__LIB_1__::func_802();
	__LIB_1__::func_801();
	Global_1940311 = 0;
}

int func_124(var uParam0)//Position - 0x30F2EA
{
	return uParam0->f_51;
}

char* func_125(int iParam0)//Position - 0x30F390
{
	switch (iParam0)
	{
		case 0:
			return "ANIM@HEISTS@TEAM_RESPAWN@VARIATIONS@VARIATION_B_ROT";
		case 1:
			return "ANIM@HEISTS@TEAM_RESPAWN@VARIATIONS@VARIATION_B_ROT";
		case 2:
			return "ANIM@HEISTS@TEAM_RESPAWN@VARIATIONS@VARIATION_C_ROT";
		case 3:
			return "ANIM@HEISTS@TEAM_RESPAWN@VARIATIONS@VARIATION_C_ROT";
		case 4:
			return "ANIM@HEISTS@TEAM_RESPAWN@VARIATIONS@VARIATION_C_ROT";
		case 5:
			return "anim@heists@team_respawn@variations@variation_f_rot";
		default:
	}
	return "";
}

int func_126(int iParam0)//Position - 0x30F3F5
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return 0;
	}
	if (iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

var func_127(var uParam0)//Position - 0x30F4C9
{
	return uParam0->f_51.f_1;
}

void func_128(var uParam0, bool bParam1)//Position - 0x30F5E7
{
	int iVar0;
	if (Global_1836573)
	{
		if (bParam1)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPCarHUD");
		}
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPLeaderboard");
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("mphud");
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_346(iVar0)]))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_260[__LIB_0__::func_346(iVar0)]));
			}
			iVar0++;
		}
	}
	Global_1836573 = 0;
}

bool func_129()//Position - 0x2C7E
{
	return (Global_23011.f_5 || Global_23011.f_6);
}

void func_130()//Position - 0x2C96
{
	Global_2723612.f_3 = 1;
}

int func_131()//Position - 0x2CA5
{
	SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration");
	SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration_2");
	if (SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration") && SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration_2"))
	{
		SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration", 128);
		SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration_2", 128);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration");
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration_2");
		return 1;
	}
	return 0;
}

int func_132()//Position - 0x80CF
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SNIPER"))
		{
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 42 /*INPUT_SNIPER_ZOOM_IN_SECONDARY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 43 /*INPUT_SNIPER_ZOOM_OUT_SECONDARY*/))
					{
						return 1;
					}
				}
				else if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_133()//Position - 0x98D0
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 8);
}

struct<15> func_134(int iParam0, int iParam1)//Position - 0xA4B0
{
	struct<15> Var0;
	switch (iParam0)
	{
		case 176:
			Var0.f_0 = -247372382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 1204.57f, -3110.4f, 6.57f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 1:
			Var0.f_0 = -1198408382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 467.3716f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 2:
			Var0.f_0 = 1651829484;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 469.9679f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 3:
			Var0.f_0 = -1209329220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor02");
			Var0.f_3 = { 464.3613f, -984.6779f, 43.8344f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 4:
			Var0.f_0 = 534621945;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door01");
			Var0.f_3 = { 434.75f, -980.61f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 5:
			Var0.f_0 = -457131900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door002");
			Var0.f_3 = { 434.75f, -983.22f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 6:
			Var0.f_0 = 163748837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3589.1f, 3671.5f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 7:
			Var0.f_0 = -1249217678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3587.6f, 3663.3f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 33:
			Var0.f_0 = 1984929564;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3627.71f, 3746.72f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 34:
			Var0.f_0 = -1532658745;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3620.84f, 3751.53f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 36:
			Var0.f_0 = 1877357900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor");
			Var0.f_3 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 35:
			Var0.f_0 = -769623617;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor2");
			Var0.f_3 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 179:
			Var0.f_0 = 738966015;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1138.47f, -2730.45f, 12.95f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 178:
			Var0.f_0 = 969004395;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1151.2043f, -2723.1023f, 12.946f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 118:
			Var0.f_0 = 1036961952;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -977.5174f, -2837.2644f, 12.9549f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 119:
			Var0.f_0 = 1864280899;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -990.2963f, -2829.8872f, 12.9499f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 120:
			Var0.f_0 = -355737150;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1213.4f, -2079.3003f, 12.907f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 121:
			Var0.f_0 = -1170618471;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -967.4473f, -2778.495f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 122:
			Var0.f_0 = -1300449249;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -974.5734f, -2774.3809f, 14.4099f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 123:
			Var0.f_0 = -1529668404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -971.1018f, -2776.3855f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 124:
			Var0.f_0 = 1577455399;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -970.9188f, -2776.4907f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 125:
			Var0.f_0 = 2142655111;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -935.2114f, -2767.3967f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 126:
			Var0.f_0 = 996723181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -933.1581f, -2763.9546f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 127:
			Var0.f_0 = 1830923614;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -933.0535f, -2763.7793f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 128:
			Var0.f_0 = -125385686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -931.0002f, -2760.3372f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 129:
			Var0.f_0 = 745417724;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -773.2438f, -2842.6775f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 130:
			Var0.f_0 = -1305304906;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -769.7721f, -2844.682f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 131:
			Var0.f_0 = -1543175077;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -769.6071f, -2844.777f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 132:
			Var0.f_0 = -811770997;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -766.1354f, -2846.7815f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 133:
			Var0.f_0 = 29310942;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -828.9456f, -2964.3037f, 14.2758f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 134:
			Var0.f_0 = -247292187;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -907.7999f, -3100.874f, 14.2808f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 135:
			Var0.f_0 = 460387137;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -833.4395f, -3186.7095f, 14.267f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 136:
			Var0.f_0 = 106875165;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -830.0544f, -3391.1628f, 14.1972f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 137:
			Var0.f_0 = 923052648;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -913.0834f, -3534.9697f, 14.1924f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 138:
			Var0.f_0 = -1237505857;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -971.6149f, -3549.152f, 14.2727f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 139:
			Var0.f_0 = -1938172615;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1017.6921f, -3563.2173f, 14.2767f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 140:
			Var0.f_0 = -810513079;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1146.8314f, -3546.6382f, 14.2595f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 141:
			Var0.f_0 = 69924413;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1260.8966f, -3480.764f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 142:
			Var0.f_0 = -152773711;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1351.1328f, -3404.1616f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 143:
			Var0.f_0 = 681951026;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1409.5073f, -3370.4614f, 14.2068f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 144:
			Var0.f_0 = 877254262;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1831.804f, -3224.9663f, 14.3119f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 145:
			Var0.f_0 = 1712929328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1942.2893f, -3161.1904f, 14.2981f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 146:
			Var0.f_0 = 1482661565;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1927.5635f, -3076.269f, 14.4569f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 147:
			Var0.f_0 = 1782694529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1951.6956f, -3003.8457f, 14.4418f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 148:
			Var0.f_0 = -1714183772;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1836.875f, -2804.969f, 14.4557f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 149:
			Var0.f_0 = -1953037013;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1802.6915f, -2745.7615f, 14.448f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 150:
			Var0.f_0 = -795813070;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1099.5308f, -2020.8026f, 12.1745f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 151:
			Var0.f_0 = -580979506;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -994.4996f, -2341.6482f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 152:
			Var0.f_0 = -1426452475;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -984.0709f, -2348.4001f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 153:
			Var0.f_0 = -1178784373;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1008.0708f, -2406.751f, 12.977f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 154:
			Var0.f_0 = 94815597;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1015.4854f, -2419.5828f, 12.9586f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 62:
			Var0.f_0 = 208246292;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_lester_doorfront");
			Var0.f_3 = { 1273.82f, -1720.7f, 54.92f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 63:
			Var0.f_0 = -1357778570;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_tort_door");
			Var0.f_3 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 74:
			Var0.f_0 = -80542775;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_janitor_frontdoor");
			Var0.f_3 = { -107.5373f, -9.0181f, 70.6708f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 72:
			Var0.f_0 = 868388666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_deviantfrontdoor");
			Var0.f_3 = { -128.33f, -1457.17f, 37.94f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 73:
			Var0.f_0 = 2137238404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_po_door");
			Var0.f_3 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 64:
			Var0.f_0 = 1494493065;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1142.9f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 65:
			Var0.f_0 = 1388518119;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1140.7f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 66:
			Var0.f_0 = -2119698256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1390.52f, 1163.44f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 67:
			Var0.f_0 = 1935563805;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1390.52f, 1161.24f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 68:
			Var0.f_0 = -271559421;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1408.07f, 1158.97f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 69:
			Var0.f_0 = -1985574735;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1408.07f, 1161.17f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 70:
			Var0.f_0 = -1132368282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1409.29f, 1146.25f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 71:
			Var0.f_0 = -1508687478;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1409.29f, 1148.45f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 75:
			Var0.f_0 = 689210336;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_l");
			Var0.f_3 = { -1387.05f, -586.58f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 76:
			Var0.f_0 = 510553748;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_r");
			Var0.f_3 = { -1389.24f, -588f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 77:
			Var0.f_0 = 313127870;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01c");
			Var0.f_3 = { 25.03f, -664.6f, 31.04f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		case 78:
			Var0.f_0 = 145416128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01d");
			Var0.f_3 = { -72.75f, -682.17f, 33.27f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		case 60:
			Var0.f_0 = -948170937;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door02");
			Var0.f_3 = { -111.48f, 6463.94f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 61:
			Var0.f_0 = -684544332;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door01");
			Var0.f_3 = { -109.65f, 6462.11f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 12:
			Var0.f_0 = -1135190791;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate_pris");
			Var0.f_3 = { 256.3116f, 220.6579f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 13:
			Var0.f_0 = 1011604710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate2_pris");
			Var0.f_3 = { 262.1981f, 222.5188f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 14:
			Var0.f_0 = -403267826;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -2965.821f, 481.63f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 15:
			Var0.f_0 = -171885917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -2965.71f, 484.219f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 16:
			Var0.f_0 = 1734755709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1176.49f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 17:
			Var0.f_0 = -1006108989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1173.9f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 18:
			Var0.f_0 = 2012837225;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 19:
			Var0.f_0 = 314747645;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 20:
			Var0.f_0 = 571329950;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -1215.39f, -328.52f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 21:
			Var0.f_0 = 266021177;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -1213.07f, -327.35f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 22:
			Var0.f_0 = -171153163;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 149.63f, -1037.23f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 23:
			Var0.f_0 = -1163398483;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 152.06f, -1038.12f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 24:
			Var0.f_0 = 1080982134;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 313.96f, -275.6f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 25:
			Var0.f_0 = -775086795;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 316.39f, -276.49f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 26:
			Var0.f_0 = -1819100989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -348.8109f, -47.2621f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 27:
			Var0.f_0 = 1787848387;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -351.2598f, -46.4122f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 58:
			Var0.f_0 = 1598253329;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door02");
			Var0.f_3 = { 106.38f, -742.7f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 59:
			Var0.f_0 = 1369034174;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door01");
			Var0.f_3 = { 105.76f, -746.65f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 183:
			Var0.f_0 = -1814497429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_l");
			Var0.f_3 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 184:
			Var0.f_0 = 1526269356;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_r");
			Var0.f_3 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 185:
			Var0.f_0 = 422781221;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frntdoor");
			Var0.f_3 = { 0.2169f, -1823.3031f, 29.6391f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 186:
			Var0.f_0 = -1066241800;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 187:
			Var0.f_0 = 1959909816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 188:
			Var0.f_0 = 1931749328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_cs4_05_tdoor");
			Var0.f_3 = { 31.918f, 3666.8535f, 40.8586f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 189:
			Var0.f_0 = 1624933181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_magenta_door");
			Var0.f_3 = { 29.102f, 3661.4893f, 40.8547f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 290:
			Var0.f_0 = -1184370912;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorb");
			Var0.f_3 = { 776.8f, 4184.64f, 41.91f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 291:
			Var0.f_0 = -1023333176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("apa_prop_apa_cutscene_doora");
			Var0.f_3 = { 722.399f, 4187.952f, 41.231f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 292:
			Var0.f_0 = 651841620;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_r");
			Var0.f_3 = { 610.594f, -421.83f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 293:
			Var0.f_0 = 1049460666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_l");
			Var0.f_3 = { 610.874f, -419.365f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 294:
			Var0.f_0 = 1343869835;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { 492f, -3116f, 5f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_12 = 0f;
			break;
		case 295:
			Var0.f_0 = 207506449;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { 476f, -3116f, 5f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_12 = 0f;
			break;
		case 296:
			Var0.f_0 = -2110173063;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("lr_prop_boathousedoor_l");
			Var0.f_3 = { 1527.7452f, 3778.1309f, 34.7106f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 297:
			Var0.f_0 = -1032072975;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("lr_prop_boathousedoor_r");
			Var0.f_3 = { 1530.7625f, 3780.244f, 34.7104f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
	}
	switch (iParam0)
	{
		case 190:
			Var0.f_0 = 1255781408;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -687.73f, -2458.82f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 191:
			Var0.f_0 = 1901756713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -697.82f, -1226.5f, 12.91f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 192:
			Var0.f_0 = 1719167837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -692.77f, -2455.93f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 194:
			Var0.f_0 = 389336283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -891.93f, -2748.71f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 195:
			Var0.f_0 = 732598411;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -896.46f, -2746.42f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 196:
			Var0.f_0 = 1348295152;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -859.73f, -2683.9f, 12.76f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 197:
			Var0.f_0 = 1547432097;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1019.61f, -1897.02f, 13.37f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 198:
			Var0.f_0 = 1231145709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -160.88f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 199:
			Var0.f_0 = 934782873;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -148.71f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 200:
			Var0.f_0 = 652215786;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 237.78f, -2936.96f, 5.05f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 201:
			Var0.f_0 = -1791270241;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -188.28f, -2204.61f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 202:
			Var0.f_0 = -2108474161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -127.56f, -2185.29f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 203:
			Var0.f_0 = -959673820;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -33.22f, -2141.27f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 204:
			Var0.f_0 = -653316439;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1000.68f, -2454.99f, 27.57f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 205:
			Var0.f_0 = -1560558973;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1012.91f, -2456.23f, 27.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 206:
			Var0.f_0 = 1221988161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1028.08f, -2364.72f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 207:
			Var0.f_0 = 1998121926;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1033.22f, -2299.1f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 208:
			Var0.f_0 = 1778504088;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1022.4f, -2417.13f, 28.13f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 209:
			Var0.f_0 = -1618264918;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_military_01");
			Var0.f_3 = { 2485.44f, -432.71f, 91.97f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 210:
			Var0.f_0 = -1881039529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 2485.09f, -335.84f, 91.98f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 211:
			Var0.f_0 = -1105298992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 2491.97f, -303.48f, 91.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 212:
			Var0.f_0 = -734026222;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1944.86f, -957.69f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 213:
			Var0.f_0 = 895772842;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1956.74f, -956.86f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 214:
			Var0.f_0 = 77825833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1845f, 2604.81f, 44.64f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 215:
			Var0.f_0 = 308880052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1818.55f, 2604.81f, 44.6f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 216:
			Var0.f_0 = -620547091;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1799.74f, 2616.98f, 44.61f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 217:
			Var0.f_0 = -1471033717;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1813.4f, 2488.63f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 218:
			Var0.f_0 = -1233360160;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1808.82f, 2474.88f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 219:
			Var0.f_0 = -2075785612;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.19f, 2426.73f, 44.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 220:
			Var0.f_0 = 1874713956;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1749.22f, 2420.28f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 221:
			Var0.f_0 = 2113436121;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1667.61f, 2408.11f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 222:
			Var0.f_0 = 1266488547;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1661.76f, 2748.32f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 223:
			Var0.f_0 = 2060464373;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1653.21f, 2409.71f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 224:
			Var0.f_0 = -1207063697;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1558.14f, 2469.87f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 225:
			Var0.f_0 = -565839905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1551.18f, 2482.58f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 226:
			Var0.f_0 = -1189958275;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.41f, 2576.6f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 227:
			Var0.f_0 = -1492973218;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.99f, 2591.08f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 228:
			Var0.f_0 = 348251354;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1576.19f, 2667.23f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 229:
			Var0.f_0 = 40845365;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1584.63f, 2679.02f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 230:
			Var0.f_0 = -95047678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1648.95f, 2741.55f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 231:
			Var0.f_0 = -267871384;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.58f, 2751.9f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 232:
			Var0.f_0 = 1572566732;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1776.26f, 2747.1f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 233:
			Var0.f_0 = 2106931155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1829.8f, 2702.92f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 234:
			Var0.f_0 = -1899079099;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1834.92f, 2689.37f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 235:
			Var0.f_0 = -1592787256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 222.07f, -2013.99f, 18.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 236:
			Var0.f_0 = -1902159381;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 210.93f, -2022.58f, 17.65f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 237:
			Var0.f_0 = -1605042858;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 459.7f, -2002.94f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 238:
			Var0.f_0 = -1558510878;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 451.45f, -1994.01f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 239:
			Var0.f_0 = -1259755905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 455.74f, -1944.85f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 240:
			Var0.f_0 = -42223710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 466.76f, -1939.65f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 241:
			Var0.f_0 = -687183168;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 539.83f, -1901.88f, 24.22f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 242:
			Var0.f_0 = 435613848;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 550.87f, -1896.75f, 24.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 243:
			Var0.f_0 = 1139523801;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 564.12f, -1903f, 23.71f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 244:
			Var0.f_0 = 1126088511;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 570.6271f, -1913.332f, 23.7104f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 245:
			Var0.f_0 = 827399076;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 1081.65f, -1818.42f, 36.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 246:
			Var0.f_0 = 1126285129;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 987.52f, -1176.82f, 24.55f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 247:
			Var0.f_0 = 829955062;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 705.64f, -1319.67f, 24.96f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 248:
			Var0.f_0 = -1633749438;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 712.95f, -1329.42f, 24.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 249:
			Var0.f_0 = -1934732703;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 796.46f, -921.49f, 24.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 250:
			Var0.f_0 = 1737951283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.78f, -909.33f, 24.36f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 251:
			Var0.f_0 = -703535835;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.16f, -896.64f, 24.1f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 252:
			Var0.f_0 = -987085992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 794.48f, -884.48f, 24.06f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 253:
			Var0.f_0 = -1736447128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 546.17f, -1869.94f, 24.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 254:
			Var0.f_0 = 1725499419;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 492.33f, -1410.47f, 28.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 255:
			Var0.f_0 = 2032577718;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 484.57f, -1408.5f, 28.48f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 256:
			Var0.f_0 = 2130786415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 469.33f, -1272.7f, 28.82f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 257:
			Var0.f_0 = -783852294;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 487.87f, -1272.59f, 28.86f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 258:
			Var0.f_0 = -493650030;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 488.89f, -1011.67f, 27.14f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 259:
			Var0.f_0 = -1403186394;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 527.55f, -1597.33f, 28.39f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 260:
			Var0.f_0 = -1105283415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 544.94f, -1649.75f, 27.49f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 261:
			Var0.f_0 = 132270639;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 151.35f, -1668.64f, 28.77f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 262:
			Var0.f_0 = 429714852;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 47.2f, -1448.3f, 28.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 263:
			Var0.f_0 = 712231657;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1876.37f, 194.85f, 83.33f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 264:
			Var0.f_0 = 2136700087;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1868.31f, 183.79f, 83.34f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 265:
			Var0.f_0 = 218566672;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1452.43f, 37.03f, 51.75f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 266:
			Var0.f_0 = 2061822982;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1483.1f, 46.93f, 53.26f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 267:
			Var0.f_0 = 1617901339;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1507.47f, 39.16f, 54.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 268:
			Var0.f_0 = 1859638252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1528.36f, 35.77f, 55.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 269:
			Var0.f_0 = -1008173552;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1583.28f, 40.14f, 59.32f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 270:
			Var0.f_0 = 1403985307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1616.23f, 79.78f, 60.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 271:
			Var0.f_0 = -1988622032;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -924.98f, -9.03f, 43.28f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 272:
			Var0.f_0 = 1716077491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -905.7f, 14.66f, 45.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 273:
			Var0.f_0 = -1151537699;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -844.05f, 155.96f, 66.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 274:
			Var0.f_0 = 1236503176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_04a");
			Var0.f_3 = { -914.32f, 184.54f, 68.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 79:
			Var0.f_0 = -1725728509;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trev_doorfront");
			Var0.f_3 = { -1149.71f, -1521.09f, 10.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 80:
			Var0.f_0 = -854930290;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 81:
			Var0.f_0 = -86464467;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 0:
			Var0.f_0 = 1066535586;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 347.8678f, -1003.3159f, -99.0952f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 275:
			Var0.f_0 = -153506146;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { 257.2896f, -1001.2546f, -98.8587f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 276:
			Var0.f_0 = joaat("MP_MED_APT_BATH_DOOR");
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorw");
			Var0.f_3 = { 348.2157f, -993.1122f, -99.043f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 277:
			Var0.f_0 = 1022411403;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_bedrmdoor");
			Var0.f_3 = { -789.3017f, 332.0119f, 201.5596f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 82:
			Var0.f_0 = -1858596497;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ld_garaged_01");
			Var0.f_3 = { -815.3282f, 185.9571f, 72.99f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 85:
			Var0.f_0 = 360545155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_windowwc");
			Var0.f_3 = { -802.7333f, 167.5041f, 77.5824f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 83:
			Var0.f_0 = -1846031173;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_l");
			Var0.f_3 = { -816.716f, 179.098f, 72.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 84:
			Var0.f_0 = 1966183215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_r");
			Var0.f_3 = { -816.1068f, 177.5109f, 72.8274f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 86:
			Var0.f_0 = -452757037;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -796.5657f, 177.2214f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 87:
			Var0.f_0 = 422961723;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.5051f, 178.0124f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 88:
			Var0.f_0 = 113556825;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -793.3943f, 180.5075f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 89:
			Var0.f_0 = 1035119412;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.1853f, 182.568f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 90:
			Var0.f_0 = 929216155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { -806.2817f, 187.0246f, 72.624f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 91:
			Var0.f_0 = -2017851706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_l");
			Var0.f_3 = { -1041.2676f, 4906.0967f, 209.2002f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = -1f;
			Var0.f_11 = 1;
			break;
		case 92:
			Var0.f_0 = -90706816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_r");
			Var0.f_3 = { -1044.749f, 4914.9717f, 209.1932f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = 1f;
			Var0.f_11 = 1;
			break;
		case 93:
			Var0.f_0 = -1701678154;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trevtraildr");
			Var0.f_3 = { 1972.7689f, 3815.366f, 33.6633f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 94:
			Var0.f_0 = -2129438429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fa_frontdoor");
			Var0.f_3 = { -14.8689f, -1441.1821f, 31.192f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 95:
			Var0.f_0 = -670056199;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door8");
			Var0.f_3 = { 716.7808f, -975.4207f, 25.057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 96:
			Var0.f_0 = 917058539;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door7");
			Var0.f_3 = { 719.3818f, -975.4185f, 25.0057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 286:
			Var0.f_0 = 505794885;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door02");
			Var0.f_3 = { 710f, -964f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 288:
			Var0.f_0 = 998060257;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { 3539f, 3673.7f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 289:
			Var0.f_0 = 1685291713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { 3541.6f, 3673.2f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 287:
			Var0.f_0 = 856811118;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_store_door");
			Var0.f_3 = { 708f, -962f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 97:
			Var0.f_0 = 1579789044;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_l");
			Var0.f_3 = { -631.9554f, -236.3333f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 98:
			Var0.f_0 = -740144707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_r1");
			Var0.f_3 = { -630.4265f, -238.4375f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 99:
			Var0.f_0 = 459292593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door04");
			Var0.f_3 = { 1395.6134f, 3609.327f, 35.1308f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 100:
			Var0.f_0 = 699522132;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1388.4987f, 3614.8276f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 101:
			Var0.f_0 = 919402122;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1399.6996f, 3607.763f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 102:
			Var0.f_0 = -1009094475;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 484.5642f, -1315.574f, 30.2033f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 103:
			Var0.f_0 = 1304570179;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_cs_door");
			Var0.f_3 = { 482.8112f, -1311.953f, 29.3506f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 104:
			Var0.f_0 = 1374764510;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_epsstoredoor");
			Var0.f_3 = { 241.3621f, 361.0471f, 105.003f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 105:
			Var0.f_0 = -1326670325;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frontdoor");
			Var0.f_3 = { 7.5179f, 539.526f, 176.1781f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 106:
			Var0.f_0 = -646035010;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch_025c_g_door_01");
			Var0.f_3 = { 18.6504f, 546.3401f, 176.3448f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 8:
			Var0.f_0 = -2020886833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -59.893f, -1092.9518f, 26.8836f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 9:
			Var0.f_0 = 424893020;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -60.5458f, -1094.7489f, 26.8887f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 10:
			Var0.f_0 = -234058813;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -38.464f, -1108.4462f, 26.7198f };
			Var0.f_7 = 1;
			if (!Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
			{
				Var0.f_8 = 0;
			}
			else
			{
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 11:
			Var0.f_0 = -513447307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -36.6615f, -1109.1016f, 26.7198f };
			Var0.f_7 = 1;
			if (!Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
			{
				Var0.f_8 = 0;
			}
			else
			{
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 107:
			Var0.f_0 = 777975393;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -608.7289f, -1610.3153f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 108:
			Var0.f_0 = 2134513686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -611.32f, -1610.0886f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 109:
			Var0.f_0 = -1758213847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -592.9376f, -1631.577f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 110:
			Var0.f_0 = -990993250;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -592.7109f, -1628.986f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 111:
			Var0.f_0 = -611431917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -442.66f, 6015.2217f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 112:
			Var0.f_0 = -1988181627;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 113:
			Var0.f_0 = 1879085215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrfdoor");
			Var0.f_3 = { 1855.6848f, 3683.9302f, 34.5928f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 114:
			Var0.f_0 = -100586674;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_01");
			Var0.f_3 = { -1067.0024f, -1665.6091f, 4.7898f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 115:
			Var0.f_0 = -384071293;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_02");
			Var0.f_3 = { -1064.7632f, -1668.7623f, 4.8084f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 116:
			Var0.f_0 = 1317819491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_03_ld");
			Var0.f_3 = { -1074.6482f, -1676.1313f, 4.684f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 117:
			Var0.f_0 = -1321526845;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_05");
			Var0.f_3 = { 201.4f, -153.3652f, 57.8522f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 156:
			Var0.f_0 = 96518847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortl");
			Var0.f_3 = { -1045.1199f, -232.004f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 157:
			Var0.f_0 = 1355864282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortr");
			Var0.f_3 = { -1046.5161f, -229.3581f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 158:
			Var0.f_0 = 1350395200;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door01");
			Var0.f_3 = { -1083.6201f, -260.4167f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 159:
			Var0.f_0 = -351200663;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door02");
			Var0.f_3 = { -1080.9744f, -259.0204f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 160:
			Var0.f_0 = 1721932052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor");
			Var0.f_3 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 304:
			Var0.f_0 = 1196312723;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_door_orange");
			Var0.f_3 = { -1063.804f, -240.832f, 39.883f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 305:
			Var0.f_0 = -1161120149;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_door_orangesolid");
			Var0.f_3 = { -1055.958f, -236.425f, 44.171f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 161:
			Var0.f_0 = 659933472;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 162:
			Var0.f_0 = 1556853707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 163:
			Var0.f_0 = 9031593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1065.2372f, -2006.0791f, 32.2329f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 164:
			Var0.f_0 = -1114322496;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1083.5472f, -1975.4354f, 31.622f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 165:
			Var0.f_0 = -1353175737;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1085.307f, -2018.5614f, 41.6289f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 166:
			Var0.f_0 = 44182644;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 86.6624f, -1959.477f, 21.2152f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 167:
			Var0.f_0 = -85603376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_abat_slide");
			Var0.f_3 = { 962.9084f, -2105.8137f, 34.6432f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 168:
			Var0.f_0 = -336931144;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_04");
			Var0.f_3 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 169:
			Var0.f_0 = -1850802875;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01l");
			Var0.f_3 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 170:
			Var0.f_0 = -1675259342;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01r");
			Var0.f_3 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 171:
			Var0.f_0 = 682572401;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_12_door");
			Var0.f_3 = { -58.47f, -1530.51f, 34.54f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 172:
			Var0.f_0 = 638173652;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2255.1938f, 322.2593f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 173:
			Var0.f_0 = -657938605;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2254.0557f, 319.7009f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 174:
			Var0.f_0 = -913405729;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2280.597f, 265.432f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 175:
			Var0.f_0 = -61510036;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2278.039f, 266.57f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 180:
			Var0.f_0 = 1741567220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 413.3649f, -1620.0333f, 28.3416f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 181:
			Var0.f_0 = -2117572376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 418.2896f, -1651.3962f, 28.2951f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 182:
			Var0.f_0 = 1308623196;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_07b");
			Var0.f_3 = { 397.8846f, -1607.3838f, 28.3301f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 278:
			Var0.f_0 = -1181991670;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_21_g_door_01");
			Var0.f_3 = { -25.28f, -1431.06f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 279:
			Var0.f_0 = 655256353;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_14_garage_door");
			Var0.f_3 = { -62.38f, 352.7173f, 113.2499f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 280:
			Var0.f_0 = -1283878568;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_motel_door_09");
			Var0.f_3 = { 549.2567f, -1773.115f, 33.7309f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 283:
			Var0.f_0 = -1442263252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_l");
			Var0.f_3 = { -720.39f, 256.86f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 284:
			Var0.f_0 = 945482706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_r");
			Var0.f_3 = { -718.42f, 257.79f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 298:
			Var0.f_0 = 1281942816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_cellgate");
			Var0.f_3 = { 461.8065f, -994.4086f, 25.0644f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			break;
		case 299:
			Var0.f_0 = 2066876030;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_cf_officedoor");
			Var0.f_3 = { -70.5223f, 6254.584f, 31.2331f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			break;
		case 300:
			Var0.f_0 = 302514014;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -1588.27f, 2794.21f, 16.85f };
			Var0.f_6 = 1;
			break;
		case 301:
			Var0.f_0 = 374122670;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -1589.58f, 2793.67f, 16.86f };
			Var0.f_6 = 1;
			break;
		case 302:
			Var0.f_0 = -1450927686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -2309.107f, 3382.55f, 29.9703f };
			Var0.f_6 = 1;
			break;
		case 303:
			Var0.f_0 = -1927270846;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -2299.539f, 3384.9495f, 31.0658f };
			Var0.f_6 = 1;
			break;
		case 306:
			Var0.f_0 = 181342382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gb_vaubar");
			Var0.f_3 = { -1207.328f, -335.129f, 38.079f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 307:
			Var0.f_0 = 290843807;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gb_vaubar");
			Var0.f_3 = { 1175.542f, 2710.861f, 38.227f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 308:
			Var0.f_0 = 838938616;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_j2_door");
			Var0.f_3 = { -629.134f, -230.152f, 38.207f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 309:
			Var0.f_0 = 1801855141;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 116.2367f, -754.6212f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 310:
			Var0.f_0 = -173591179;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.9029f, -755.5384f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 311:
			Var0.f_0 = 487906950;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.8078f, -755.7997f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 312:
			Var0.f_0 = -1571165938;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.474f, -756.7169f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 313:
			Var0.f_0 = 473483816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.3789f, -756.9781f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 314:
			Var0.f_0 = -1852558119;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.0451f, -757.8953f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
	}
	return Var0;
}

int func_135(int iParam0)//Position - 0xEEC0
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == joaat("xs_prop_arena_turntable_01a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("vw_prop_arena_turntable_02f_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == -1255963777)
	{
		iVar0 = 11714146;
	}
	return iVar0;
}

int func_136()//Position - 0x14DDC
{
	return joaat("p_parachute_s_shop");
}

int func_137()//Position - 0x14DE9
{
	return joaat("prop_ic_non_hrocket_b");
}

int func_138()//Position - 0x14DF6
{
	return joaat("prop_ic_homing_rocket_b");
}

int func_139()//Position - 0x14E03
{
	return joaat("prop_mp_boost_01");
}

int func_140()//Position - 0x14E10
{
	return joaat("prop_mp_rocket_01");
}

int func_141()//Position - 0x18D9F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_36355 - 1))
	{
		if (BitTest(Global_4980736.f_36356[iVar0 /*134*/].f_22, 13))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x2028A
{
	if (iParam0 <= 10)
	{
		return 3;
	}
	if (iParam0 > 10 && iParam0 <= 20)
	{
		return 5;
	}
	if (iParam0 > 20 && iParam0 <= 30)
	{
		return 7;
	}
	if (iParam0 > 30 && iParam0 <= 40)
	{
		return 9;
	}
	if (iParam0 > 40 && iParam0 <= 50)
	{
		return 11;
	}
	if (iParam0 > 50 && iParam0 <= 60)
	{
		return 13;
	}
	if (iParam0 > 60 && iParam0 <= 70)
	{
		return 15;
	}
	if (iParam0 > 70 && iParam0 <= 80)
	{
		return 17;
	}
	if (iParam0 > 80 && iParam0 <= 90)
	{
		return 19;
	}
	if (iParam0 > 90)
	{
		return 21;
	}
	return 1;
}

int func_143()//Position - 0x2090C
{
	return Global_2703735.f_925;
}

bool func_144()//Position - 0x20E2B
{
	return Global_2815059.f_5118;
}

int func_145(bool bParam0, int iParam1)//Position - 0x21992
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1648034.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1648034.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		default:
			if (BitTest(Global_1648034.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1648034.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_146(char* sParam0)//Position - 0x23024
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				iVar1 = Global_113386.f_14141[iVar0 /*104*/].f_29;
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_147(int iParam0)//Position - 0x23D00
{
	Global_1574530 = iParam0;
}

int func_148(int iParam0)//Position - 0x25181
{
	var uVar0;
	int iVar1;
	var uVar2;
	uVar0 = Global_1659575[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_INT(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

void func_149(int iParam0, int iParam1)//Position - 0x51CAA
{
	Global_4718592.f_95507[iParam0 /*58*/] = { Global_4718592.f_95507[iParam1 /*58*/] };
	Global_4718592.f_95507[iParam0 /*58*/].f_3 = { Global_4718592.f_95507[iParam1 /*58*/].f_3 };
	Global_4718592.f_95507[iParam0 /*58*/].f_42 = Global_4718592.f_95507[iParam1 /*58*/].f_42;
	Global_4718592.f_95507[iParam0 /*58*/].f_43 = Global_4718592.f_95507[iParam1 /*58*/].f_43;
	Global_4718592.f_95507[iParam0 /*58*/].f_46 = Global_4718592.f_95507[iParam1 /*58*/].f_46;
	Global_4718592.f_95507[iParam0 /*58*/].f_47 = Global_4718592.f_95507[iParam1 /*58*/].f_47;
	Global_4718592.f_95507[iParam0 /*58*/].f_30 = Global_4718592.f_95507[iParam1 /*58*/].f_30;
	Global_4718592.f_95507[iParam0 /*58*/].f_31 = Global_4718592.f_95507[iParam1 /*58*/].f_31;
	Global_4718592.f_95507[iParam0 /*58*/].f_6 = { Global_4718592.f_95507[iParam1 /*58*/].f_6 };
	Global_4718592.f_95507[iParam0 /*58*/].f_17 = { Global_4718592.f_95507[iParam1 /*58*/].f_17 };
	Global_4718592.f_95507[iParam0 /*58*/].f_48 = Global_4718592.f_95507[iParam1 /*58*/].f_48;
	Global_4718592.f_95507[iParam0 /*58*/].f_49 = Global_4718592.f_95507[iParam1 /*58*/].f_49;
	Global_4718592.f_95507[iParam0 /*58*/].f_50 = Global_4718592.f_95507[iParam1 /*58*/].f_50;
	Global_4718592.f_95507[iParam0 /*58*/].f_51 = Global_4718592.f_95507[iParam1 /*58*/].f_51;
	Global_4718592.f_95507[iParam0 /*58*/].f_44 = Global_4718592.f_95507[iParam1 /*58*/].f_44;
	Global_4718592.f_95507[iParam0 /*58*/].f_45 = Global_4718592.f_95507[iParam1 /*58*/].f_45;
	Global_4718592.f_95507[iParam0 /*58*/].f_52 = Global_4718592.f_95507[iParam1 /*58*/].f_52;
	Global_4718592.f_95507[iParam0 /*58*/].f_53 = Global_4718592.f_95507[iParam1 /*58*/].f_53;
	Global_4718592.f_95507[iParam0 /*58*/].f_54 = Global_4718592.f_95507[iParam1 /*58*/].f_54;
	Global_4718592.f_95507[iParam0 /*58*/].f_32 = { Global_4718592.f_95507[iParam1 /*58*/].f_32 };
	Global_4718592.f_95507[iParam0 /*58*/].f_35 = { Global_4718592.f_95507[iParam1 /*58*/].f_35 };
	Global_4718592.f_95507[iParam0 /*58*/].f_55 = Global_4718592.f_95507[iParam1 /*58*/].f_55;
	Global_4718592.f_95507[iParam0 /*58*/].f_57 = Global_4718592.f_95507[iParam1 /*58*/].f_57;
	Global_4718592.f_95507[iParam0 /*58*/].f_56 = Global_4718592.f_95507[iParam1 /*58*/].f_56;
	Global_4718592.f_95507[iParam0 /*58*/].f_28 = Global_4718592.f_95507[iParam1 /*58*/].f_28;
	Global_4718592.f_95507[iParam0 /*58*/].f_29 = Global_4718592.f_95507[iParam1 /*58*/].f_29;
	Global_4718592.f_95507[iParam0 /*58*/].f_38 = Global_4718592.f_95507[iParam1 /*58*/].f_38;
	Global_4718592.f_95507[iParam0 /*58*/].f_39 = Global_4718592.f_95507[iParam1 /*58*/].f_39;
	Global_4718592.f_95507[iParam0 /*58*/].f_40 = Global_4718592.f_95507[iParam1 /*58*/].f_40;
	Global_4718592.f_95507[iParam0 /*58*/].f_41 = Global_4718592.f_95507[iParam1 /*58*/].f_41;
}

Vector3 func_150(var uParam0)//Position - 0x56CF1
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var1 = { *(uParam0[iVar0 /*3*/]) };
		Var2 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		Var3.f_0 = (Var3.f_0 + ((Var1.f_1 - Var2.f_1) * (Var1.f_2 + Var2.f_2)));
		Var3.f_1 = (Var3.f_1 + ((Var1.f_2 - Var2.f_2) * (Var1.f_0 + Var2.f_0)));
		Var3.f_2 = (Var3.f_2 + ((Var1.f_0 - Var2.f_0) * (Var1.f_1 + Var2.f_1)));
		iVar0++;
	}
	return __LIB_0__::func_79(Var3);
}

int func_151(int iParam0)//Position - 0x61D03
{
	if ((((PED::GET_PED_DRAWABLE_VARIATION(iParam0, 0) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 0) == 3) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 5) == 2)) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 4) == 3)) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 11) == 3))
	{
		return 1;
	}
	return 0;
}

Vector3 func_152(int iParam0, int iParam1)//Position - 0x627F8
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("boxville4"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("hei_prop_heist_transponder"))
		{
			return 90f, 0f, 180f;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("hei_prop_hei_ammo_pile_02"))
		{
			return 0f, 0f, 90f;
		}
	}
	else if ((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("rumpo") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pony")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("burrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("boxville2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("reh_prop_reh_box_metal_01a"))
		{
			return 0f, 0f, -90f;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_153(int iParam0, int iParam1)//Position - 0x628C8
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar1 == joaat("barracks") || iVar1 == joaat("barracks3"))
	{
		return 0f, -0.09f, 1.5059f;
	}
	else if (iVar1 == joaat("benson"))
	{
		if (iVar0 == joaat("hei_prop_heist_weed_pallet_02"))
		{
			return 0.4f, -3f, 0.65f;
		}
		else
		{
			return 0.4f, -2f, 1.09f;
		}
	}
	else if (iVar1 == joaat("granger"))
	{
		if (iVar0 == joaat("hei_prop_hei_ammo_pile_02"))
		{
			return 0f, 0f, -0.257f;
		}
	}
	else if (iVar1 == joaat("gburrito2") || iVar1 == joaat("gburrito"))
	{
		if ((iVar0 == joaat("hei_prop_mini_sever_02") || iVar0 == joaat("hei_prop_mini_sever_03")) || iVar0 == joaat("hei_prop_mini_sever_broken"))
		{
			return 0f, 1.1f, -0.39f;
		}
		else if (iVar0 == joaat("hei_prop_drug_statue_stack"))
		{
			return 0f, 1.29f, -0.14f;
		}
	}
	else if (iVar1 == joaat("boxville4"))
	{
		if (iVar0 == joaat("hei_prop_heist_transponder"))
		{
			return 0.28f, -3.36f, 1.52f;
		}
	}
	else if ((iVar1 == joaat("mule") || iVar1 == joaat("mule3")) || iVar1 == joaat("mule5"))
	{
		if (iVar0 == joaat("hei_prop_heist_tub_truck"))
		{
			return 0f, 0.1f, 0f;
		}
	}
	else if (iVar1 == joaat("insurgent"))
	{
		if (iVar0 == joaat("hei_prop_heist_emp"))
		{
			return 0f, -2.138671f, 0.682988f;
		}
	}
	else if (iVar1 == joaat("insurgent2"))
	{
		if (iVar0 == joaat("hei_prop_heist_emp"))
		{
			return 0f, -2.138671f, 0.562988f;
		}
	}
	else if (iVar1 == joaat("speedo"))
	{
		if (iVar0 == joaat("xm_prop_vancrate_01a"))
		{
			return 0f, -2.17f, 0.13f;
		}
		else if (iVar0 == joaat("reh_prop_reh_box_wood01a"))
		{
			return 0f, -0.5f, -0.1f;
		}
		else if (iVar0 == joaat("reh_prop_reh_box_metal_01a"))
		{
			return 0f, -0.6f, -0.127f;
		}
	}
	else if (iVar1 == joaat("youga2"))
	{
		return 0f, -1.5f, -0.445f;
	}
	else if (iVar1 == joaat("youga4"))
	{
		return 0f, -1.5f, 0.095f;
	}
	else if (iVar1 == joaat("caddy"))
	{
		return 0.15f, -1.15f, 0.51f;
	}
	else if (iVar1 == joaat("youga3"))
	{
		if (iVar0 == joaat("reh_prop_reh_bomb_tech_01a"))
		{
			return -0.2f, 0.38f, -0.445f;
		}
	}
	else if (iVar1 == joaat("pony"))
	{
		return 0f, -0.9f, -0.142f;
	}
	else if (iVar1 == joaat("burrito"))
	{
		return 0f, -1.2f, -0.3f;
	}
	else if (iVar1 == joaat("rumpo"))
	{
		return 0f, -0.9f, -0.46f;
	}
	else if (iVar1 == joaat("boxville2"))
	{
		return 0f, -1.5f, -0.28f;
	}
	return 0f, 0f, 0f;
}

char* func_154(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x62BCB
{
	if ((((BitTest(uParam0, 9) || BitTest(uParam1, 20)) || BitTest(uParam1, 21)) || BitTest(uParam1, 24)) || BitTest(uParam1, 25))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Box_Ammo03A_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_Box_Ammo03A";
		}
	}
	else if (BitTest(uParam0, 10))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Drop_Crate_01_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_Drop_Crate_01";
		}
	}
	else if (BitTest(uParam0, 11))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Drop_Crate_01_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule5"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_MB_crate_01A";
		}
	}
	else if (BitTest(uParam1, 8) || BitTest(uParam1, 27))
	{
		return "Prop_MB_crate_01A";
	}
	else if (((BitTest(uParam1, 11) || (BitTest(uParam1, 26) && ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("boxville4"))) || (BitTest(uParam1, 28) && (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("insurgent2")))) || BitTest(uParam2, 28))
	{
		return "chassis_dummy";
	}
	return "";
}

int func_155(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x63031
{
	if (BitTest(uParam0, 9))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return joaat("prop_box_ammo03a_set2");
		}
		else
		{
			return joaat("prop_box_ammo03a_set");
		}
	}
	else if (BitTest(uParam0, 10))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return joaat("hei_prop_crate_stack_01");
		}
		else
		{
			return joaat("prop_drop_crate_01_set");
		}
	}
	else if (BitTest(uParam0, 11))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return 0;
		}
		else
		{
			return joaat("prop_mb_crate_01a_set");
		}
	}
	else if (BitTest(uParam1, 8))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam3, false))
		{
			return joaat("hei_prop_mini_sever_02");
		}
		else
		{
			return joaat("hei_prop_mini_sever_broken");
		}
	}
	else if (BitTest(uParam1, 27))
	{
		return joaat("hei_prop_mini_sever_03");
	}
	else if (BitTest(uParam1, 11))
	{
		return joaat("hei_prop_heist_tub_truck");
	}
	else if (BitTest(uParam1, 20))
	{
		return joaat("hei_prop_hei_ammo_pile");
	}
	else if (BitTest(uParam1, 21))
	{
		return joaat("hei_prop_hei_ammo_pile_02");
	}
	else if (BitTest(uParam1, 24))
	{
		return joaat("hei_prop_heist_weed_pallet_02");
	}
	else if (BitTest(uParam1, 25))
	{
		return joaat("hei_prop_drug_statue_stack");
	}
	else if (BitTest(uParam1, 26))
	{
		return joaat("hei_prop_heist_transponder");
	}
	else if (BitTest(uParam1, 28))
	{
		return joaat("hei_prop_heist_emp");
	}
	else if (BitTest(uParam2, 24))
	{
		return joaat("xm_prop_vancrate_01a");
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x6494C
{
	if (iParam0 < 0 || iParam0 >= 30)
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0)//Position - 0x760FF
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 18;
		case 3:
			return 19;
		case 4:
			return 14;
		case 5:
			return 111;
		case 6:
			return 27;
		case 7:
			return 40;
		case 8:
			return 41;
		case 9:
			return 42;
		case 10:
			return 49;
		case 11:
			return 50;
		case 12:
			return 54;
		case 13:
			return 80;
		case 14:
			return 62;
		case 15:
			return 64;
		case 16:
			return 88;
		case 17:
			return 89;
		case 18:
			return 105;
		case 19:
			return 37;
		case 20:
			return 90;
		case 21:
			return 135;
		case 22:
			return 137;
		case 23:
			return 136;
		case 24:
			return 145;
		case 25:
			return 71;
		case 26:
			return 92;
		case 27:
			return 53;
		case 28:
			return 70;
		case 29:
			return 31;
		case 30:
			return 34;
		case 31:
			return 38;
		case 32:
			return 138;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 112;
		case 36:
			return 83;
		case 37:
			return 39;
		case 38:
			return 128;
		case 39:
			return 55;
		case 40:
			return 148;
		case 41:
			return 153;
		case 42:
			return 154;
		case 43:
			return 117;
		case 44:
			return 119;
		case 45:
			return 159;
		case 46:
			return 120;
		case 47:
			return 67;
		default:
	}
	return 135;
}

int func_158(int iParam0)//Position - 0x76320
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 == joaat("dukes2") || iVar0 == joaat("vigilante")) || iVar0 == joaat("visione")) || iVar0 == joaat("retinue")) || iVar0 == joaat("rapidgt3")) || iVar0 == joaat("cyclone")) || iVar0 == joaat("yosemite")) || iVar0 == joaat("hermes")) || iVar0 == joaat("streiter")) || iVar0 == joaat("sc1")) || iVar0 == joaat("riata")) || iVar0 == joaat("raiden")) || iVar0 == joaat("gt500")) || iVar0 == joaat("z190")) || iVar0 == joaat("hustler")) || iVar0 == joaat("neon")) || iVar0 == joaat("kamacho")) || iVar0 == joaat("comet5")) || iVar0 == joaat("comet4")) || iVar0 == joaat("savestra")) || iVar0 == joaat("viseris")) || iVar0 == joaat("tezeract")) || iVar0 == joaat("ellie")) || iVar0 == joaat("issi3")) || iVar0 == joaat("hotring")) || iVar0 == joaat("flashgt")) || iVar0 == joaat("seasparrow")) || iVar0 == joaat("swinger")) || iVar0 == joaat("romero")) || iVar0 == joaat("menacer")) || iVar0 == joaat("freecrawler")) || iVar0 == joaat("stafford")) || iVar0 == joaat("toros")) || iVar0 == joaat("clique")) || iVar0 == joaat("italigto")) || iVar0 == joaat("schlagen")) || iVar0 == joaat("deveste")) || iVar0 == joaat("pbus2")) || iVar0 == joaat("mule4")) || iVar0 == joaat("speedo4")) || iVar0 == joaat("issi3")) || iVar0 == joaat("brioso")) || iVar0 == joaat("hermes")) || iVar0 == joaat("hustler")) || iVar0 == joaat("raptor")) || iVar0 == joaat("tampa2")) || iVar0 == joaat("jester3")) || iVar0 == joaat("swinger")) || iVar0 == joaat("entity2")) || iVar0 == joaat("taipan")) || iVar0 == joaat("toros")) || iVar0 == joaat("baller4")) || iVar0 == joaat("freecrawler")) || iVar0 == joaat("kamacho")) || iVar0 == joaat("oppressor")) || iVar0 == joaat("diablous2")) || iVar0 == joaat("barrage")) || iVar0 == joaat("thruster")) || iVar0 == joaat("volatol")) || iVar0 == joaat("alphaz1")) || iVar0 == joaat("blazer5")) || iVar0 == joaat("drafter")) || iVar0 == joaat("issi7")) || iVar0 == joaat("paragon")) || iVar0 == joaat("gauntlet3")) || iVar0 == joaat("komoda")) || iVar0 == joaat("vstr")) || iVar0 == joaat("rebla")) || iVar0 == joaat("zhaba")) || iVar0 == joaat("sugoi")) || iVar0 == joaat("sultan2")) || iVar0 == joaat("everon")) || iVar0 == joaat("vagrant")) || iVar0 == joaat("outlaw")) || iVar0 == joaat("dukes3")) || iVar0 == joaat("gauntlet5")) || iVar0 == joaat("club")) || iVar0 == joaat("btype2")) || iVar0 == joaat("peyote3")) || iVar0 == joaat("yosemite3")) || iVar0 == joaat("rebel2")) || iVar0 == joaat("manana2")) || iVar0 == joaat("formula")) || iVar0 == joaat("formula2")) || iVar0 == joaat("openwheel1")) || iVar0 == joaat("openwheel2")) || iVar0 == joaat("seminole2")) || iVar0 == joaat("youga3")) || iVar0 == joaat("glendale2")) || iVar0 == joaat("tigon")) || iVar0 == joaat("italirsx")) || iVar0 == joaat("weevil")) || iVar0 == joaat("brioso2")) || iVar0 == joaat("slamtruck")) || iVar0 == joaat("manchez2")) || iVar0 == joaat("calico")) || iVar0 == joaat("jester4")) || iVar0 == joaat("zr350")) || iVar0 == joaat("remus")) || iVar0 == joaat("vectre")) || iVar0 == joaat("cypher")) || iVar0 == joaat("dominator7")) || iVar0 == joaat("comet6")) || iVar0 == joaat("warrener2")) || iVar0 == joaat("rt3000")) || iVar0 == joaat("tailgater2")) || iVar0 == joaat("sultan3")) || iVar0 == joaat("dominator8")) || iVar0 == joaat("previon")) || iVar0 == joaat("euros")) || iVar0 == joaat("growler")) || iVar0 == joaat("veto")) || iVar0 == joaat("veto2")) || iVar0 == joaat("granger2")) || iVar0 == joaat("ignus")) || iVar0 == joaat("deity")) || iVar0 == joaat("buffalo4")) || iVar0 == joaat("astron")) || iVar0 == joaat("comet7")) || iVar0 == joaat("baller7")) || iVar0 == joaat("jubilee")) || iVar0 == joaat("cinquemila")) || iVar0 == joaat("iwagen")) || iVar0 == joaat("zeno")) || iVar0 == joaat("champion")) || iVar0 == joaat("patriot3")) || iVar0 == joaat("shinobi")) || iVar0 == joaat("reever")) || iVar0 == joaat("corsita")) || iVar0 == joaat("brioso3")) || iVar0 == joaat("draugur")) || iVar0 == joaat("rhinehart")) || iVar0 == joaat("kanjosj")) || iVar0 == joaat("lm87")) || iVar0 == joaat("postlude")) || iVar0 == joaat("sm722")) || iVar0 == joaat("tenf")) || iVar0 == joaat("tenf2")) || iVar0 == joaat("torero2")) || iVar0 == joaat("vigero2")) || iVar0 == joaat("weevil2")) || iVar0 == joaat("greenwood")) || iVar0 == joaat("ruiner4")) || iVar0 == joaat("sentinel4")) || iVar0 == joaat("conada")) || iVar0 == joaat("omnisegt"))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x76B2B
{
	if (__LIB_0__::func_236())
	{
		return 1;
	}
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("shamal") || iParam0 == joaat("stunt")) || iParam0 == joaat("sanchez")) || iParam0 == joaat("tribike")) || iParam0 == joaat("ambulance")) || iParam0 == joaat("firetruk")) || iParam0 == joaat("taco")) || iParam0 == joaat("tanker")) || iParam0 == joaat("tanker2")) || iParam0 == joaat("trflat")) || iParam0 == joaat("trailers")) || iParam0 == joaat("gburrito")) || iParam0 == joaat("boxville2")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("journey")) || iParam0 == joaat("stockade")) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("trash")) || iParam0 == joaat("bus")) || iParam0 == joaat("coach")) || iParam0 == joaat("taxi")) || iParam0 == joaat("airtug")) || iParam0 == joaat("bulldozer")) || iParam0 == joaat("handler")) || iParam0 == joaat("dump")) || iParam0 == joaat("mixer")) || iParam0 == joaat("tiptruck")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("riot")) || iParam0 == joaat("pbus")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("annihilator")) || iParam0 == joaat("polmav")) || iParam0 == joaat("predator")) || iParam0 == joaat("rhino")) || iParam0 == joaat("cargobob")) || iParam0 == joaat("titan")) || iParam0 == joaat("barracks")) || iParam0 == joaat("barracks2")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("armytanker")) || iParam0 == joaat("cargobob2")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("jet")) || iParam0 == joaat("paradise")) || iParam0 == joaat("monster")) || iParam0 == joaat("sovereign")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("savage")) || iParam0 == joaat("swift2")) || iParam0 == joaat("luxor2")) || iParam0 == joaat("camper")) || iParam0 == joaat("tug")) || iParam0 == joaat("policet")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)//Position - 0x77AD0
{
	if (((((iParam0 == joaat("xs_prop_arena_barrel_01a") || iParam0 == joaat("xs_prop_arena_landmine_03a")) || iParam0 == joaat("xs_prop_arena_barrel_01a_sf")) || iParam0 == joaat("xs_prop_arena_landmine_03a_sf")) || iParam0 == joaat("xs_prop_arena_barrel_01a_wl")) || iParam0 == joaat("xs_prop_arena_landmine_03a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x77B98
{
	if (((((iParam0 == joaat("xs_prop_arena_pit_fire_03a") || iParam0 == joaat("xs_prop_arena_pit_fire_04a")) || iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x77C3C
{
	if (((((iParam0 == joaat("xs_prop_arena_pit_double_01a") || iParam0 == joaat("xs_prop_arena_pit_double_01b")) || iParam0 == joaat("xs_prop_arena_pit_double_01a_sf")) || iParam0 == joaat("xs_prop_arena_pit_double_01b_sf")) || iParam0 == joaat("xs_prop_arena_pit_double_01a_wl")) || iParam0 == joaat("xs_prop_arena_pit_double_01b_wl"))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x77C9A
{
	if (((((((((iParam0 == joaat("xs_prop_arena_turntable_01a") || iParam0 == joaat("xs_prop_arena_turntable_02a")) || iParam0 == joaat("xs_prop_arena_turntable_03a")) || iParam0 == joaat("xs_prop_arena_turntable_01a_sf")) || iParam0 == joaat("vw_prop_arena_turntable_02f_sf")) || iParam0 == joaat("xs_prop_arena_turntable_03a_sf")) || iParam0 == joaat("xs_prop_arena_turntable_01a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_02a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_03a_wl")) || iParam0 == -1255963777)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x77D9A
{
	if ((iParam0 == joaat("xs_prop_arena_bollard_side_01a") || iParam0 == joaat("xs_prop_arena_bollard_side_01a_sf")) || iParam0 == joaat("xs_prop_arena_bollard_side_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x77DCE
{
	if (((((iParam0 == joaat("xs_prop_arena_wall_rising_01a") || iParam0 == joaat("xs_prop_arena_wall_rising_02a")) || iParam0 == joaat("xs_prop_arena_wall_rising_01a_sf")) || iParam0 == joaat("xs_prop_arena_wall_rising_02a_sf")) || iParam0 == joaat("xs_prop_arena_wall_rising_01a_wl")) || iParam0 == joaat("xs_prop_arena_wall_rising_02a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x77E2C
{
	if ((((((((iParam0 == joaat("xs_prop_arena_flipper_small_01a") || iParam0 == joaat("xs_prop_arena_flipper_large_01a")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a")) || iParam0 == joaat("xs_prop_arena_flipper_small_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_large_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_small_01a_wl")) || iParam0 == joaat("xs_prop_arena_flipper_large_01a_wl")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x7812A
{
	if ((iParam0 == joaat("xm_prop_x17_mine_01a") || iParam0 == joaat("xm_prop_x17_mine_02a")) || iParam0 == joaat("xm_prop_x17_mine_03a"))
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x786C7
{
	if ((iParam0 == joaat("xs_prop_arena_pressure_plate_01a") || iParam0 == joaat("xs_prop_arena_pressure_plate_01a_wl")) || iParam0 == joaat("xs_prop_arena_pressure_plate_01a_sf"))
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, float fParam1)//Position - 0x786FB
{
	int iVar0;
	float fVar1;
	iVar0 = Global_2788036;
	if (iVar0 >= 8)
	{
		return -1;
	}
	fVar1 = 0f;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		fVar1 = (fParam1 - ENTITY::GET_ENTITY_HEADING(iParam0));
	}
	Global_2788036.f_10[iVar0] = fVar1;
	Global_2788036.f_1[iVar0] = iParam0;
	Global_2788036++;
	return iVar0;
}

int func_170(int iParam0)//Position - 0x7874F
{
	if ((iParam0 == joaat("xs_prop_arena_turret_01a") || iParam0 == joaat("xs_prop_arena_turret_01a_sf")) || iParam0 == joaat("xs_prop_arena_turret_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x78783
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ba_prop_battle_track_exshort") || Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ba_prop_battle_track_short"))
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)//Position - 0x7B2DB
{
	return (((((((((((((((((((((((((iParam0 == joaat("ar_prop_ar_bblock_huge_04") || iParam0 == joaat("ar_prop_ar_bblock_huge_05")) || iParam0 == joaat("ar_prop_ar_tube_gap_02")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("bkr_prop_mast_01a")) || iParam0 == joaat("stt_prop_track_bend_l_b")) || iParam0 == joaat("ch_prop_track_pit_stop_01")) || iParam0 == joaat("ch_prop_track_pit_garage_01a")) || iParam0 == joaat("ch_prop_track_paddock_01")) || iParam0 == joaat("ar_prop_ar_bblock_huge_01")) || iParam0 == joaat("ar_prop_ar_bblock_huge_02")) || iParam0 == joaat("ar_prop_ar_bblock_huge_03")) || iParam0 == joaat("as_prop_as_bblock_huge_04")) || iParam0 == joaat("as_prop_as_bblock_huge_05")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iParam0 == joaat("ch_prop_track_ch_bend_180d")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_135")) || iParam0 == joaat("ch_prop_track_ch_bend_135")) || iParam0 == joaat("stt_prop_tyre_wall_01")) || iParam0 == joaat("stt_prop_tyre_wall_0r1")) || iParam0 == joaat("stt_prop_tyre_wall_0l1"));
}

int func_173(int iParam0)//Position - 0x7B5DB
{
	switch (iParam0)
	{
		case joaat("prop_const_fence02b"):
			return 150;
		case joaat("prop_offroad_bale03"):
			return 100;
		case joaat("prop_offroad_bale02"):
			return 100;
		case joaat("prop_offroad_bale01"):
			return 100;
		case joaat("prop_offroad_tyres01"):
			return 100;
		case joaat("lts_prop_lts_offroad_tyres01"):
			return 100;
		case joaat("prop_offroad_tyres02"):
			return 100;
		case joaat("prop_barier_conc_02a"):
			return 100;
		case joaat("prop_barier_conc_05c"):
			return 100;
		case joaat("prop_barier_conc_05a"):
			return 100;
		case joaat("prop_barier_conc_05b"):
			return 100;
		case joaat("prop_barier_conc_01a"):
			return 100;
		case joaat("prop_bench_05"):
			return 100;
		case joaat("prop_bench_07"):
			return 100;
		case joaat("prop_bench_01a"):
			return 100;
		case joaat("prop_dock_bouy_3"):
			return 190;
		case joaat("prop_dock_bouy_2"):
			return 190;
		case joaat("prop_elecbox_24"):
			return 299;
		case joaat("prop_elecbox_24b"):
			return 299;
		case joaat("prop_portacabin01"):
			return 299;
		case joaat("prop_cementbags01"):
			return 140;
		case joaat("prop_conc_blocks01a"):
			return 140;
		case joaat("prop_cons_crate"):
			return 140;
		case joaat("prop_jyard_block_01a"):
			return 120;
		case joaat("prop_conc_sacks_02a"):
			return 115;
		case joaat("prop_byard_sleeper01"):
			return 100;
		case joaat("prop_shuttering01"):
			return 140;
		case joaat("prop_shuttering02"):
			return 140;
		case joaat("prop_shuttering03"):
			return 140;
		case joaat("prop_shuttering04"):
			return 140;
		case joaat("prop_woodpile_01a"):
			return 180;
		case joaat("prop_woodpile_01c"):
			return 180;
		case joaat("prop_rub_cont_01b"):
			return 299;
		case joaat("prop_rail_boxcar4"):
			return 299;
		case joaat("prop_rub_railwreck_2"):
			return 299;
		case joaat("prop_contr_03b_ld"):
			return 500;
		case joaat("prop_container_ld_pu"):
			return 500;
		case joaat("prop_container_ld2"):
			return 500;
		case joaat("prop_rail_boxcar"):
			return 299;
		case joaat("prop_rail_boxcar3"):
			return 299;
		case joaat("prop_byard_floatpile"):
			return 180;
		case joaat("prop_boxpile_07a"):
			return 180;
		case joaat("prop_watercrate_01"):
			return 150;
		case joaat("prop_box_wood01a"):
			return 120;
		case joaat("prop_box_wood03a"):
			return 130;
		case joaat("prop_box_wood04a"):
			return 150;
		case joaat("prop_bin_13a"):
			return 100;
		case joaat("prop_bin_14a"):
			return 120;
		case joaat("prop_dumpster_3a"):
			return 200;
		case joaat("prop_dumpster_4b"):
			return 200;
		case joaat("prop_dumpster_01a"):
			return 180;
		case joaat("prop_skip_06a"):
			return 220;
		case joaat("prop_elecbox_02a"):
			return 150;
		case joaat("prop_elecbox_16"):
			return 180;
		case joaat("prop_elecbox_14"):
			return 160;
		case joaat("prop_ind_deiseltank"):
			return 250;
		case joaat("prop_ind_mech_02a"):
			return 150;
		case joaat("prop_ind_mech_02b"):
			return 120;
		case joaat("prop_sub_trans_01a"):
			return 200;
		case joaat("prop_sub_trans_02a"):
			return 180;
		case joaat("prop_sub_trans_04a"):
			return 180;
		case joaat("prop_mp_ramp_01"):
			return 250;
		case joaat("prop_skip_04"):
			return 250;
		case joaat("prop_mp_ramp_02"):
			return 250;
		case joaat("prop_mp_ramp_03"):
			return 250;
		case joaat("prop_skip_08a"):
			return 250;
		case joaat("prop_jetski_ramp_01"):
			return 250;
		case joaat("prop_beachflag_01"):
			return 150;
		case joaat("prop_trafficdiv_01"):
			return 180;
		case joaat("prop_sign_road_09a"):
			return 100;
		case joaat("prop_sign_road_09b"):
			return 100;
		case joaat("prop_sign_road_09c"):
			return 100;
		case joaat("prop_sign_road_09d"):
			return 100;
		case joaat("prop_sign_road_06q"):
			return 100;
		case joaat("prop_sign_road_06r"):
			return 100;
		case joaat("prop_sign_road_05c"):
			return 100;
		case joaat("prop_sign_road_05d"):
			return 100;
		case joaat("prop_sign_road_05e"):
			return 100;
		case joaat("prop_sign_road_05f"):
			return 100;
		case joaat("prop_food_van_01"):
			return 200;
		case joaat("prop_food_van_02"):
			return 200;
		case joaat("prop_tanktrailer_01a"):
			return 250;
		case joaat("prop_truktrailer_01a"):
			return 250;
		case joaat("prop_rub_buswreck_01"):
			return 250;
		case joaat("prop_rub_buswreck_06"):
			return 250;
		case joaat("prop_rub_carwreck_11"):
			return 180;
		case joaat("prop_rub_carwreck_12"):
			return 180;
		case joaat("prop_rub_carwreck_13"):
			return 180;
		case joaat("prop_rub_carwreck_9"):
			return 180;
		case joaat("prop_ld_alarm_01"):
			return 50;
		case joaat("prop_offroad_barrel02"):
			return 120;
		case joaat("prop_mp_cone_03"):
			return -1;
		case joaat("prop_barrel_exp_01a"):
			return 100;
		case joaat("prop_fire_exting_1b"):
			return 100;
		case joaat("prop_gascyl_01a"):
			return 80;
		case joaat("prop_gascyl_03a"):
			return 100;
		case joaat("prop_gascyl_04a"):
			return 100;
		case joaat("prop_gas_tank_01a"):
			return 100;
		case joaat("prop_mp_cone_01"):
			return 100;
		case joaat("prop_boxpile_02b"):
			return 160;
		case joaat("prop_postbox_01a"):
			return -1;
		case joaat("prop_fncsec_03b"):
			return 150;
		case joaat("prop_table_08_side"):
			return 120;
		case joaat("prop_mp_cone_04"):
			return 100;
		case joaat("prop_mp_cone_02"):
			return 120;
		case joaat("prop_shamal_crash"):
			return 180;
		default:
	}
	if (iParam0 == joaat("apa_mp_apa_crashed_usaf_01a"))
	{
		return 180;
	}
	else if ((((((((((((((iParam0 == -1305574636 || iParam0 == joaat("imp_prop_impexp_boxpile_01")) || iParam0 == joaat("imp_prop_impexp_boxpile_02")) || iParam0 == joaat("imp_prop_groupbarrel_01")) || iParam0 == joaat("imp_prop_groupbarrel_02")) || iParam0 == joaat("imp_prop_groupbarrel_03")) || iParam0 == joaat("sr_prop_sr_boxwood_01")) || iParam0 == joaat("sr_prop_sr_boxpile_01")) || iParam0 == joaat("sr_prop_sr_boxpile_02")) || iParam0 == joaat("sr_prop_sr_boxpile_03")) || iParam0 == joaat("sr_prop_sr_track_wall")) || iParam0 == joaat("sr_prop_sr_tube_wall")) || iParam0 == joaat("ar_prop_ar_ammu_sign")) || iParam0 == joaat("sr_mp_spec_races_ammu_sign")) || iParam0 == joaat("ar_prop_ar_jetski_ramp_01_dev"))
	{
		return 250;
	}
	else if (((((((((iParam0 == joaat("tr_prop_tr_sign_gf_ls_01a") || iParam0 == joaat("tr_prop_tr_sign_gf_lur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ll_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ms_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ml_01a"))
	{
		return 250;
	}
	return -1;
}

int func_174(int iParam0)//Position - 0x7BBF9
{
	if (((((((((((((((iParam0 == -1196634317 || iParam0 == -958239842) || iParam0 == -618621926) || iParam0 == -376491785) || iParam0 == -8758067) || iParam0 == 233568688) || iParam0 == 9264895) || iParam0 == 239008354) || iParam0 == 1178724959) || iParam0 == -477716074) || iParam0 == -1151119040) || iParam0 == 1899216098) || iParam0 == -1743680867) || iParam0 == -841484759) || iParam0 == joaat("ch_prop_pit_sign_01a")) || iParam0 == joaat("sum_prop_ac_pit_sign_left"))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x7BCE2
{
	if ((((((iParam0 == joaat("prop_jetski_ramp_01") || iParam0 == joaat("prop_dock_bouy_1")) || iParam0 == joaat("prop_dock_bouy_2")) || iParam0 == joaat("prop_byard_float_02")) || iParam0 == joaat("prop_ind_barge_01_cr")) || iParam0 == joaat("ar_prop_ar_jetski_ramp_01_dev")) || iParam0 == joaat("h4_prop_h4_loch_monster"))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x7BDC9
{
	if (iParam0 == joaat("as_prop_as_target_big"))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x7BDE0
{
	if (iParam0 == joaat("as_prop_as_target_medium"))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x7BDF7
{
	if (iParam0 == joaat("as_prop_as_target_small"))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0x7BE0E
{
	if (iParam0 == joaat("as_prop_as_target_small_02"))
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1, bool bParam2)//Position - 0x7BE25
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_speakerstack_01a"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Global_4980736.f_36356[iParam0 /*134*/].f_68 = 0;
			MISC::CLEAR_BIT(&(Global_4980736.f_36356[iParam0 /*134*/].f_21), 22);
			if (BitTest(Global_4980736.f_36356[iParam0 /*134*/].f_21, 24))
			{
				if (bParam2 == 1)
				{
					ENTITY::SET_ENTITY_ALPHA(iParam1, 255, bParam2);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, bParam2, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(iParam1, 0, bParam2);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, bParam2, false);
				}
			}
		}
	}
}

int func_181(int iParam0)//Position - 0x7C081
{
	switch (iParam0)
	{
		case 1:
			return 44;
		case 2:
			return 30;
		case 3:
			return 16;
		default:
	}
	return 30;
}

int func_182(int iParam0)//Position - 0x7C0B3
{
	if (((((((((((((((iParam0 == joaat("gr_prop_gr_target_1_01a") || iParam0 == joaat("gr_prop_gr_target_2_04a")) || iParam0 == joaat("gr_prop_gr_target_3_03a")) || iParam0 == joaat("gr_prop_gr_target_4_01a")) || iParam0 == joaat("gr_prop_gr_target_5_01a")) || iParam0 == joaat("gr_prop_gr_target_small_01a")) || iParam0 == joaat("gr_prop_gr_target_small_03a")) || iParam0 == joaat("gr_prop_gr_target_small_02a")) || iParam0 == joaat("gr_prop_gr_target_small_06a")) || iParam0 == joaat("gr_prop_gr_target_small_07a")) || iParam0 == joaat("gr_prop_gr_target_small_04a")) || iParam0 == joaat("gr_prop_gr_target_small_05a")) || iParam0 == joaat("gr_prop_gr_target_long_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_02a"))
	{
		return 1;
	}
	return 0;
}

float func_183(int iParam0)//Position - 0x7C19D
{
	switch (iParam0)
	{
		case 1:
			return 0.3f;
		case 2:
			return 0.4f;
		case 3:
			return 0.5f;
		case 4:
			return 0.5f;
		case 5:
			return 0.5f;
		default:
	}
	return 0.4f;
}

int func_184(int iParam0)//Position - 0x7C1F7
{
	switch (iParam0)
	{
		case 1:
			return 15;
		case 2:
			return 25;
		case 3:
			return 35;
		case 4:
			return 45;
		case 5:
			return 100;
		default:
	}
	return 25;
}

int func_185(int iParam0)//Position - 0x7C4D2
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
	{
		return joaat("stt_prop_stunt_tube_speeda");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("xm_prop_x17_sub"))
	{
		return joaat("h4_prop_h4_sub_kos_extra");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("sum_prop_ac_barge_01"))
	{
		return joaat("sum_prop_ac_barge_col_01");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("h4_prop_h4_sub_kos"))
	{
		return joaat("h4_prop_h4_sub_kos_extra");
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x7C560
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
	{
		return joaat("stt_prop_stunt_tube_speedb");
	}
	return Global_4980736.f_36356[iParam0 /*134*/].f_7;
}

int func_187(var uParam0)//Position - 0x7C596
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_188(var uParam0)//Position - 0xE317E
{
	int iVar0;
	int iVar1;
	int iVar2;
	*(uParam0[0 /*3*/]) = { 0f, 0f, 0f };
	*(uParam0[1 /*3*/]) = { 0f, 0f, 0f };
	uParam0->f_10 = 0;
	uParam0->f_21 = 0;
	uParam0->f_24 = 0f;
	uParam0->f_25 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_23 = 0;
	uParam0->f_7 = 5f;
	uParam0->f_8 = 5f;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_11[iVar0] = -1;
		uParam0->f_16[iVar0] = 99999;
		iVar0++;
	}
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 2;
	uParam0->f_37 = -1;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0f;
	uParam0->f_46 = 0;
	uParam0->f_47 = -1;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = -1;
	uParam0->f_53 = 1;
	uParam0->f_54 = 120;
	uParam0->f_55 = 0f;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = 0;
	StringCopy(&(uParam0->f_33), "", 16);
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = -1;
	uParam0->f_43 = { 0f, 0f, 0f };
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		uParam0->f_57[iVar1 /*3*/] = { 0f, 0f, 0f };
		iVar1++;
	}
	uParam0->f_64.f_4 = 90f;
	uParam0->f_64.f_3 = 20f;
	uParam0->f_64 = { 0f, 0f, 0f };
	__LIB_11__::func_616(&(uParam0->f_69), 0);
	uParam0->f_51 = -1;
	uParam0->f_52 = -1;
	uParam0->f_56 = -1;
	uParam0->f_64 = { 0f, 0f, 0f };
	uParam0->f_64.f_3 = 20f;
	uParam0->f_64.f_4 = 90f;
	uParam0->f_74 = -1;
	uParam0->f_75 = 2f;
	uParam0->f_76 = { 0f, 0f, 0f };
	uParam0->f_106 = 0f;
	uParam0->f_71 = 100;
	uParam0->f_72 = 0;
	uParam0->f_73 = -1;
	uParam0->f_79 = 0;
	__LIB_11__::func_616(&(uParam0->f_80), 0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		uParam0->f_101[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_105 = 0;
}

bool func_189(int iParam0)//Position - 0xE6864
{
	return ((iParam0 == joaat("stromberg") || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"));
}

void func_190(var uParam0)//Position - 0xE8531
{
	uParam0->f_1 = 4;
}

void func_191(var uParam0, char* sParam1)//Position - 0xE958F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_192(var uParam0)//Position - 0xE962C
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(uParam0->f_38, uParam0->f_39, 255, 255, 255, 255);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_40, 255, 255, 255, 255, 0);
}

void func_193(var uParam0, char* sParam1)//Position - 0xE9655
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_194(var uParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xE96C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	else if (bParam5)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_195(var uParam0, char* sParam1)//Position - 0xE986A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_196()//Position - 0xE98DE
{
	return Global_2715699.f_3479.f_24;
}

float func_197(int iParam0)//Position - 0xEB360
{
	switch (iParam0)
	{
		case 25:
			return Global_262145.f_8323 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_FLEECA */;
		case 22:
			return Global_262145.f_8325 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_PRISON_BREAK */;
		case 23:
			return Global_262145.f_8324 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_HUMANE_LABS */;
		case 24:
			return Global_262145.f_8326 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_SERIES_A */;
		case 21:
			return Global_262145.f_8327 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_PACIFIC_STANDARD */;
		default:
	}
	return 3.8f;
}

char* func_198()//Position - 0xEB735
{
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_31(Global_4718592.f_168757)) || __LIB_6__::func_178(Global_4718592.f_168757)) || __LIB_6__::func_179(Global_4718592.f_168757)) || (Global_4718592.f_168757 != 0 && !__LIB_1__::func_19()))
	{
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) != -1)
		{
			if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == -1)
			{
				return "HUD_COLOUR_BLUE" /* GXT: Blue */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 0)
			{
				return "HUD_COLOUR_ORANGE" /* GXT: Orange */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 1)
			{
				return "HUD_COLOUR_GREEN" /* GXT: Green */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 2)
			{
				return "HUD_COLOUR_PINK" /* GXT: Pink */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 4)
			{
				return "HUD_COLOUR_PURPLE" /* GXT: Purple */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 6)
			{
				return "HUD_COLOUR_RED" /* GXT: Red */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 9)
			{
				return "HUD_COLOUR_BLUE" /* GXT: Blue */;
			}
		}
	}
	return "HUD_COLOUR_WHITE" /* GXT: White */;
}

void func_199(var uParam0, char* sParam1, char* sParam2)//Position - 0xEB913
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_31(Global_4718592.f_168757)) || __LIB_6__::func_178(Global_4718592.f_168757)) || __LIB_6__::func_179(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_31(Global_4718592.f_168757)) || __LIB_6__::func_178(Global_4718592.f_168757)) || __LIB_6__::func_179(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_31(Global_4718592.f_168757)) || __LIB_6__::func_178(Global_4718592.f_168757)) || __LIB_6__::func_179(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_200(var uParam0)//Position - 0xEBFAF
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_38) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_39)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_40))
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0)//Position - 0xEBFE1
{
	uParam0->f_38 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_BG");
	uParam0->f_39 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_FG");
	uParam0->f_40 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION");
}

void func_202(var uParam0)//Position - 0xEC518
{
	struct<3> Var0;
	*uParam0 = { Var0 };
}

int func_203(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xF903A
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (Param0.f_2 - Param1.f_2);
	if (fVar0 > 0.2f || fVar0 < -0.2f)
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0.f_0, Param0.f_1, 0f, Param1.f_0, Param1.f_1, 0f, true);
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(fVar1, 0f, fVar1, fVar0);
		if (fVar2 > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

var func_204(int iParam0, bool bParam1)//Position - 0xF9DEE
{
	if (bParam1)
	{
		return Global_1659902;
	}
	return Global_1853348[iParam0 /*834*/].f_96.f_3;
}

char* func_205()//Position - 0xFB7D4
{
	return "HUD_FRONTEND_DEFAULT_SOUNDSET";
	return "";
}

void func_206(int* iParam0, bool bParam1)//Position - 0xFDB36
{
	if (BitTest(*iParam0, bParam1))
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
	}
	else
	{
		MISC::SET_BIT(iParam0, bParam1);
	}
}

Vector3 func_207(struct<3> Param0, struct<3> Param1)//Position - 0x100D32
{
	return ((Param0.f_0 + Param1.f_0) / 2f), ((Param0.f_1 + Param1.f_1) / 2f), ((Param0.f_2 + Param1.f_2) / 2f);
}

int func_208(struct<2> Param0, Vector3 vParam1)//Position - 0x1097A6
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_209(int iParam0)//Position - 0x10E3A9
{
	return ((iParam0 == 40 || iParam0 == 41) || iParam0 == 42);
}

int func_210(int iParam0)//Position - 0x10E3CC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_169915 - 1))
	{
		if (Global_4718592.f_169889[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_211(var uParam0, bool bParam1)//Position - 0x119F13
{
	if (BitTest(uParam0->f_4, 4))
	{
		return SYSTEM::TO_FLOAT(uParam0->f_6);
	}
	if (((((((((((uParam0->f_3 == joaat("prop_gate_airport_01") || uParam0->f_3 == joaat("prop_gate_military_01")) || uParam0->f_3 == joaat("prop_dock_bouy_1")) || uParam0->f_3 == -1761409654) || uParam0->f_3 == 1836331637) || uParam0->f_3 == joaat("prop_dock_bouy_2")) || uParam0->f_3 == -1964610140) || uParam0->f_3 == 2027407751) || uParam0->f_3 == joaat("prop_dock_bouy_3")) || uParam0->f_3 == -1498457916) || uParam0->f_3 == joaat("prop_dock_bouy_5")) || uParam0->f_3 == joaat("h4_prop_office_desk_01"))
	{
		return 8f;
	}
	if (bParam1)
	{
		return 2f;
	}
	return 0.1f;
}

void func_212(int iParam0, int* iParam1)//Position - 0x12185F
{
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 0);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 1);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 2);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 3);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") != -1)
	{
		MISC::SET_BIT(iParam1, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 4);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") != -1)
	{
		MISC::SET_BIT(iParam1, 5);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 5);
	}
	if (((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		MISC::SET_BIT(iParam1, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 8);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible2"))
	{
		*iParam1 = 0;
	}
}

int func_213(int iParam0)//Position - 0x12FB74
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
		case 18:
		case 19:
		case 12:
		case 13:
		case 22:
		case 23:
		case 20:
		case 21:
		case 26:
		case 27:
			return 24;
			break;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 24:
		case 25:
			return 18;
	}
	return 1;
}

int func_214(int iParam0)//Position - 0x13A8CD
{
	if (__LIB_0__::func_493() && !__LIB_0__::func_236())
	{
		if (((((((((((((((((iParam0 == joaat("WEAPON_PETROLCAN") || iParam0 == joaat("WEAPON_FIREWORK")) || iParam0 == joaat("WEAPON_WRENCH")) || iParam0 == joaat("WEAPON_BATTLEAXE")) || iParam0 == joaat("WEAPON_SWITCHBLADE")) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || iParam0 == joaat("WEAPON_MACHETE")) || iParam0 == joaat("WEAPON_HATCHET")) || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_BOTTLE")) || iParam0 == joaat("WEAPON_GOLFCLUB")) || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_HAMMER")) || iParam0 == joaat("WEAPON_NIGHTSTICK")) || iParam0 == joaat("WEAPON_KNIFE")) || iParam0 == joaat("WEAPON_KNUCKLE")) || iParam0 == joaat("WEAPON_POOLCUE"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_215(int iParam0, int iParam1)//Position - 0x13B726
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<7> Var3;
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02" /* GXT: The Pimp */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG" /* GXT: The Ballas */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR" /* GXT: The Hustler */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD" /* GXT: The Rock */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT" /* GXT: The Hater */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV" /* GXT: The Lover */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC" /* GXT: The Player */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG" /* GXT: The King */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG" /* GXT: The Vagos */;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
			break;
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
			break;
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
			break;
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL" /* GXT: Platinum Pearl Deluxe Finish */;
			break;
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE" /* GXT: Default Handle */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1" /* GXT: VIP Variant */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2" /* GXT: Bodyguard Variant */;
			break;
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB" /* GXT: VIP Variant */;
			break;
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG" /* GXT: Bodyguard Variant */;
			break;
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX" /* GXT: Box magazine */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN" /* GXT: Mk II */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2" /* GXT: Small Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2" /* GXT: Medium Scope */;
			break;
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18" /* GXT: Festive tint */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM" /* GXT: Families Finish */;
			break;
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED" /* GXT: Organics Finish */;
			break;
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD" /* GXT: Record A Finish */;
			break;
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE" /* GXT: Bone Finish */;
			break;
		default:
			if (iParam1 != 0)
			{
				iVar0 = __LIB_0__::func_260(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return __LIB_1__::func_192(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

int func_216(int iParam0)//Position - 0x1486E2
{
	switch (iParam0)
	{
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
		default:
	}
	return 0;
}

void func_217(int iParam0)//Position - 0x150CCB
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if ((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 30 && iVar0 != 21) && iVar0 != 31) && iVar0 != 0) && iVar0 != 9) && iVar0 != 8) && iVar0 != 1) && iVar0 != 2) && iVar0 != 11) && iVar0 != 10) && iVar0 != 218) && iVar0 != 219) && iVar0 != 220) && iVar0 != 221) && iVar0 != 199) && iVar0 != 201) && iVar0 != 202) && iVar0 != 203) && iVar0 != 204) && iVar0 != 205) && iVar0 != 206) && iVar0 != 207) && iVar0 != 208) && iVar0 != 217) && iVar0 != 187) && iVar0 != 188) && iVar0 != 189) && iVar0 != 190) && iVar0 != 191) && iVar0 != 195) && iVar0 != 196) && iVar0 != 197) && iVar0 != 198) && iVar0 != 209) && iVar0 != 210) && iVar0 != 239) && iVar0 != 240) && iVar0 != 237) && iVar0 != 238) && iVar0 != 242) && iVar0 != 241) && iVar0 != 290) && iVar0 != 291) && iVar0 != 250) && iVar0 != 251) && iVar0 != 252) && iVar0 != 253) && iVar0 != 256) && iVar0 != 254)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if ((((((((((((((((((((((((((((((((((((((((((((iVar0 != 1 && iVar0 != 2) && iVar0 != 30) && iVar0 != 31) && iVar0 != 59) && iVar0 != 60) && iVar0 != 71) && iVar0 != 72) && iVar0 != 0) && iVar0 != 11) && iVar0 != 10) && iVar0 != 199) && iVar0 != 201) && iVar0 != 202) && iVar0 != 203) && iVar0 != 204) && iVar0 != 205) && iVar0 != 206) && iVar0 != 207) && iVar0 != 208) && iVar0 != 217) && iVar0 != 187) && iVar0 != 188) && iVar0 != 189) && iVar0 != 190) && iVar0 != 191) && iVar0 != 195) && iVar0 != 196) && iVar0 != 197) && iVar0 != 198) && iVar0 != 209) && iVar0 != 210) && iVar0 != 239) && iVar0 != 240) && iVar0 != 237) && iVar0 != 238) && iVar0 != 242) && iVar0 != 241) && iVar0 != 290) && iVar0 != 291) && iVar0 != 250) && iVar0 != 251) && iVar0 != 252) && iVar0 != 253) && iVar0 != 256)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
	else if (iParam0 == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if (((((((((iVar0 == 142 || iVar0 == 141) || iVar0 == 140) || iVar0 == 263) || iVar0 == 264) || iVar0 == 69) || iVar0 == 70) || iVar0 == 45) || iVar0 == 76) || iVar0 == 73)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
}

void func_218(int iParam0)//Position - 0x15210A
{
	if (Global_23150.f_75 >= 3 || Global_23150.f_74 >= 4)
	{
		return;
	}
	Global_23150.f_5[Global_23150.f_74] = 2;
	Global_23150.f_74++;
	Global_23150.f_10[Global_23150.f_75] = iParam0;
	Global_23150.f_75++;
}

int func_219(int iParam0)//Position - 0x1582BC
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return 2;
		case 1:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x15843D
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
			return 2;
		default:
	}
	return 1;
}

char* func_221(int iParam0)//Position - 0x164E27
{
	switch (iParam0)
	{
		case 0:
			return "MASK_AMA";
		case 1:
			return "MASK_ANM";
		case 2:
			return "MASK_PBG";
		case 3:
			return "MASK_BST";
		case 4:
			return "MASK_CHA";
		case 5:
			return "MASK_CLM";
		case 6:
			return "MASK_CRN";
		case 7:
			return "MASK_GAS";
		case 8:
			return "MASK_HLM";
		case 9:
			return "MASK_HRH";
		case 10:
			return "MASK_PUP";
		case 11:
			return "MASK_SKL";
		case 12:
			return "MASK_TAC";
		case 13:
			return "MASK_TAP";
		case 14:
			return "MASK_THE";
		case 15:
			return "MASK_PIG";
		case 16:
			return "MASK_DUCT";
		case 17:
			return "MASK_INCO";
		case 18:
			return "MASK_BALA";
		case 19:
			return "MASK_CAMO";
		case 20:
			return "MASK_PSYC";
		case 21:
			return "MASK_STRE";
		case 22:
			return "MASK_BAND";
		case 23:
			return "MASK_HOOD";
		case 24:
			return "MASK_DESI";
		case 25:
			return "MASK_DEVIL";
		case 26:
			return "MASK_SADISTIC";
		case 27:
			return "MASK_POSS";
		case 28:
			return "MASK_FIENDS";
		case 29:
			return "MASK_CREAT";
		case 30:
			return "MASK_WICKED";
		case 31:
			return "MASK_DEFAULT" /* GXT: Ballistic */;
		case 40:
			return "MASK_ANIMAL" /* GXT: Animals */;
		case 37:
			return "MASK_LFRUITS" /* GXT: Lucky Fruits */;
		case 39:
			return "MASK_CLOWNS" /* GXT: Clowns */;
		case 44:
			return "MASK_IH_BHALF" /* GXT: Branded Face */;
		case 45:
			return "MASK_IH_PFULL" /* GXT: Painted Full-Face */;
		case 46:
			return "MASK_IH_CSPEC" /* GXT: Camo Spec Ski */;
		case 47:
			return "MASK_IH_NGAIT" /* GXT: Neck Gaiters */;
		case 48:
			return "MASK_IH_FWRAP" /* GXT: Face Wraps */;
		case 49:
			return "MASK_IH_NOPS" /* GXT: Night Ops */;
		case 50:
			return "MASK_IH_NVISI" /* GXT: Night Vision */;
		case 51:
			return "MASK_IH_CHALF" /* GXT: Camo Half-Face */;
		case 52:
			return "MASK_IH_MNIGH" /* GXT: Monocular Night Vision */;
		case 53:
			return "MASK_IH_IGUER" /* GXT: Island Guerilla */;
		case 54:
			return "MASK_IH_PHOCK" /* GXT: Patterned Hockey */;
		default:
	}
	return "OF_STYLE_INV";
}

int func_222(int iParam0, bool bParam1)//Position - 0x16E0E6
{
	if (iParam0 < 0 || iParam0 >= __LIB_11__::func_590())
	{
		return 0;
	}
	if (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 28))
	{
		return 1;
	}
	else if (!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 27))
	{
		return 1;
	}
	return 0;
}

char* func_223(int iParam0)//Position - 0x16F296
{
	if (((((((((((((((iParam0 == 0 || iParam0 == 1) || iParam0 == 6) || iParam0 == 7) || iParam0 == 18) || iParam0 == 19) || iParam0 == 12) || iParam0 == 13) || iParam0 == 22) || iParam0 == 23) || iParam0 == 20) || iParam0 == 21) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27)
	{
		return "LOB_VEH_CL_";
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		return "LOB_VEH_CLB_";
	}
	else if (iParam0 == 4 || iParam0 == 5)
	{
		return "LOB_VEH_AIR_";
	}
	return "";
}

var func_224()//Position - 0x16F431
{
	return BitTest(Global_4718592.f_32, 17);
}

int func_225(int iParam0)//Position - 0x174400
{
	switch (iParam0)
	{
		case joaat("prop_cctv_cam_06a"):
		case joaat("prop_cctv_cam_07a"):
		case joaat("hei_prop_bank_cctv_01"):
		case joaat("hei_prop_bank_cctv_02"):
		case joaat("xm_prop_x17_server_farm_cctv_01"):
		case joaat("prop_cctv_cam_05a"):
			return 1;
			break;
	}
	if (iParam0 == joaat("ch_prop_ch_cctv_cam_01a") || iParam0 == joaat("ch_prop_ch_cctv_cam_02a"))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x1966FC
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x19677F
{
	switch (*iParam0)
	{
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x196887
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_DOUBLEACTION"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_RAYPISTOL"):
		case joaat("WEAPON_CERAMICPISTOL"):
		case joaat("WEAPON_STUNGUN_MP"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_NAVYREVOLVER"):
		case joaat("WEAPON_GADGETPISTOL"):
			return 1;
		default:
	}
	return 0;
}

char* func_229(int iParam0)//Position - 0x1B7202
{
	switch (iParam0)
	{
		case 0:
			return "OF_STYLE_1";
		case 1:
			return "OF_STYLE_2";
		case 2:
			return "OF_STYLE_3";
		case 3:
			return "OF_STYLE_4";
		case 4:
			return "OF_STYLE_5";
		case 5:
			return "OF_STYLE_6";
		case 6:
			return "OF_STYLE_7";
		case 7:
			return "OF_STYLE_8";
		case 8:
			return "OF_STYLE_9";
		case 9:
			return "OF_STYLE_10";
		case 10:
			return "OF_STYLE_11";
		case 11:
			return "OF_STYLE_12";
		case 12:
			return "OF_STYLE_13";
		case 13:
			return "OF_STYLE_14";
		case 14:
			return "OF_STYLE_15";
		case 15:
			return "OF_STYLE_16";
		case 16:
			return "OF_STYLE_17";
		case 17:
			return "OF_STYLE_18";
		case 18:
			return "OF_STYLE_19";
		case 19:
			return "OF_STYLE_20";
		case 20:
			return "OF_STYLE_21";
		case 21:
			return "OF_STYLE_22";
		case 22:
			return "OF_STYLE_23";
		case 23:
			return "OF_STYLE_24";
		case 24:
			return "OF_STYLE_25";
		case 26:
			return "OF_STYLE_26";
		case 25:
			return "OF_STYLE_27";
		case 27:
			return "OF_STYLE_28";
		case 28:
			return "OF_STYLE_29" /* GXT: Scuba Gear */;
		case 29:
			return "OF_STYLE_30" /* GXT: Paramedics */;
		case 30:
			return "OF_STYLE_31" /* GXT: Mid Tech Technical */;
		case 31:
			return "OF_STYLE_32" /* GXT: Mid Tech Combat */;
		case 32:
			return "OF_STYLE_33" /* GXT: Modern Stealth Gear */;
		case 33:
			return "OF_STYLE_34" /* GXT: Casual Pilot Gear */;
		case 34:
			return "OF_STYLE_35" /* GXT: Fighter Pilot Gear */;
		case 35:
			return "OF_STYLE_36" /* GXT: High Tech Riot */;
		case 36:
			return "OF_STYLE_37" /* GXT: High Tech Impact */;
		case 37:
			return "OF_STYLE_38" /* GXT: Mid Tech Masked */;
		case 38:
			return "OF_STYLE_39" /* GXT: Mid Tech Rebellion */;
		case 39:
			return "OF_STYLE_40" /* GXT: Mid Tech Havoc */;
		case 40:
			return "OF_STYLE_41" /* GXT: Mid Tech Adaptable */;
		case 41:
			return "OF_STYLE_42" /* GXT: Sub Driver */;
		case 42:
			return "OF_STYLE_43" /* GXT: Heavy Combat Gear */;
		case 43:
			return "OF_STYLE_44" /* GXT: Low Tech Tactical */;
		case 44:
			return "OF_STYLE_45" /* GXT: Cruiser Combat */;
		case 45:
			return "OF_STYLE_46" /* GXT: Classic Stealth Gear */;
		case 46:
			return "OF_STYLE_47" /* GXT: Military Stealth Gear */;
		case 47:
			return "OF_STYLE_48" /* GXT: Gorka Suits */;
		case 48:
			return "OF_STYLE_49" /* GXT: Balaclava Crook */;
		case 49:
			return "OF_STYLE_50" /* GXT: Classic Crook */;
		case 50:
			return "OF_STYLE_51" /* GXT: High-end Crook */;
		case 51:
			return "OF_STYLE_52" /* GXT: Infiltration: Upgraded Tech */;
		case 52:
			return "OF_STYLE_53" /* GXT: Infiltration: Advanced Tech */;
		case 53:
			return "OF_STYLE_54" /* GXT: Infiltration: Modernized Tech */;
		case 54:
			return "OF_STYLE_55" /* GXT: Bugstars Uniforms */;
		case 55:
			return "OF_STYLE_56" /* GXT: Maintenance */;
		case 56:
			return "OF_STYLE_57" /* GXT: Gruppe Sechs Gear */;
		case 57:
			return "OF_STYLE_58" /* GXT: The Entourage */;
		case 58:
			return "OF_STYLE_59" /* GXT: Orderly Armor */;
		case 59:
			return "OF_STYLE_60" /* GXT: Upscale Armor */;
		case 60:
			return "OF_STYLE_61" /* GXT: Evening Armor */;
		case 61:
			return "OF_STYLE_62" /* GXT: Reinforced: Padded Combat */;
		case 62:
			return "OF_STYLE_63" /* GXT: Reinforced: Bulk Combat */;
		case 63:
			return "OF_STYLE_64" /* GXT: Reinforced: Compact Combat */;
		case 64:
			return "OF_STYLE_65" /* GXT: Smugglers */;
		case 65:
			return "OF_STYLE_66" /* GXT: Urban Armor */;
		case 66:
			return "OF_STYLE_67" /* GXT: Grassland Armor */;
		case 67:
			return "OF_STYLE_68" /* GXT: Casual */;
		case 68:
			return "OF_STYLE_69" /* GXT: Guerilla */;
		case 69:
			return "OF_STYLE_70" /* GXT: Night Ops */;
		case 70:
			return "OF_STYLE_71" /* GXT: Jungle Camo */;
		default:
	}
	return "OF_STYLE_INV";
}

int func_230(int iParam0)//Position - 0x1B7F4E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_4718592.f_142823[iVar0] != -1)
		{
			iParam0 = (iParam0 - 1);
		}
		iVar0++;
	}
	return iParam0;
}

void func_231(var uParam0, var uParam1)//Position - 0x1B8D2F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iVar0 >= *uParam0)
		{
		}
		else
		{
			(*uParam1)[iVar0] = (*uParam0)[iVar0];
			iVar0++;
		}
	}
}

float func_232(int iParam0)//Position - 0x1DCB32
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 1f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 3.5f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return 0.47f;
	}
	return 1f;
}

Vector3 func_233(int iParam0)//Position - 0x1DCB73
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return -12.5f, 0f, 0f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 90f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return -2f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_234(int iParam0)//Position - 0x1DCBC0
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 0f, 0f, 25f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 4.5f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return 0f, 0f, 11.5f;
	}
	return 0f, 0f, 0f;
}

char* func_235(int iParam0)//Position - 0x1DCC0D
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a") || iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return "scr_stunts_fire_ring";
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "ent_amb_fire_ring";
	}
	return "";
}

char* func_236(int iParam0)//Position - 0x1DCC4E
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a") || iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return "scr_stunts";
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "core";
	}
	return "";
}

int func_237()//Position - 0x1EF3A8
{
	return Global_1574530;
}

void func_238(var uParam0)//Position - 0x1FA021
{
	*uParam0 = 0;
	__LIB_11__::func_616(&(uParam0->f_1), 0);
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
}

void func_239(var uParam0)//Position - 0x1FA0E6
{
	uParam0->f_37 = 0;
	*uParam0 = 0;
	__LIB_11__::func_616(&(uParam0->f_1), 0);
	__LIB_11__::func_616(&(uParam0->f_19), 0);
}

void func_240(var uParam0)//Position - 0x1FC9B3
{
	int iVar0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_9 = -1;
	uParam0->f_8 = -1;
	uParam0->f_10 = 1;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = -1;
	uParam0->f_15 = 0;
	uParam0->f_16 = -1;
	uParam0->f_17 = -1;
	uParam0->f_11 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_34 = -1;
	uParam0->f_35 = -1;
	uParam0->f_36 = -1;
	uParam0->f_37 = -1;
	uParam0->f_18 = -1;
	uParam0->f_19 = -1;
	uParam0->f_20 = -1;
	uParam0->f_23 = -1;
	uParam0->f_55 = -1;
	uParam0->f_24 = -1;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 1;
	uParam0->f_41 = 10f;
	uParam0->f_42 = -1;
	uParam0->f_71 = 0;
	__LIB_11__::func_616(&(uParam0->f_72), -1);
	uParam0->f_77 = 1;
	uParam0->f_80 = { 0f, 0f, 0f };
	uParam0->f_83 = 0f;
	uParam0->f_84 = -1;
	uParam0->f_85 = -1;
	uParam0->f_86 = 0f;
	uParam0->f_87 = 0f;
	uParam0->f_88 = -1;
	uParam0->f_89 = { 0f, 0f, 0f };
	uParam0->f_92 = -1;
	uParam0->f_93 = { 0f, 0f, 0f };
	uParam0->f_96 = -1;
	uParam0->f_97 = -1;
	uParam0->f_78 = 0;
	uParam0->f_79 = -1;
	uParam0->f_98 = -1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_99[iVar0] = 0;
		iVar0++;
	}
	__LIB_11__::func_581(&(uParam0->f_103));
	uParam0->f_59 = 0;
	uParam0->f_108 = 0;
	uParam0->f_109 = 0;
	__LIB_11__::func_616(&(uParam0->f_132), 0);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		uParam0->f_110[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_131 = 0;
}

void func_241(var uParam0)//Position - 0x1FCFB3
{
	int iVar0;
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	StringCopy(&(uParam0->f_35), "", 64);
	uParam0->f_54.f_13[0 /*4*/].f_1 = -1;
	uParam0->f_54.f_13[0 /*4*/].f_2 = -1;
	uParam0->f_54.f_13[0 /*4*/].f_3 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	__LIB_11__::func_616(&(uParam0->f_92), 0);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		uParam0->f_14[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
	uParam0->f_91 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = -1;
	__LIB_11__::func_584(&(uParam0->f_54));
}

void func_242(int iParam0)//Position - 0x1FD8C6
{
	StringCopy(&(Global_4718592.f_174394[iParam0 /*52*/]), "", 64);
	StringCopy(&(Global_4718592.f_174394[iParam0 /*52*/].f_16), "", 64);
	StringCopy(&(Global_4718592.f_174394[iParam0 /*52*/].f_32), "", 16);
	Global_4718592.f_174394[iParam0 /*52*/].f_36 = { 0f, 0f, 0f };
	Global_4718592.f_174394[iParam0 /*52*/].f_39 = { 0f, 0f, 0f };
	Global_4718592.f_174394[iParam0 /*52*/].f_42 = 0;
	Global_4718592.f_174394[iParam0 /*52*/].f_43 = -1;
	Global_4718592.f_174394[iParam0 /*52*/].f_44 = -1;
	Global_4718592.f_174394[iParam0 /*52*/].f_45 = -1;
	Global_4718592.f_174394[iParam0 /*52*/].f_46 = 0;
	Global_4718592.f_174394[iParam0 /*52*/].f_47 = 1f;
	Global_4718592.f_174394[iParam0 /*52*/].f_49 = -1;
	Global_4718592.f_174394[iParam0 /*52*/].f_48 = 0f;
	__LIB_11__::func_616(&(Global_4718592.f_174394[iParam0 /*52*/].f_50), 0);
}

void func_243(int iParam0)//Position - 0x1FD9E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_4718592.f_173211[iParam0 /*58*/] = -1;
	Global_4718592.f_173211[iParam0 /*58*/].f_1 = { 0f, 0f, 0f };
	Global_4718592.f_173211[iParam0 /*58*/].f_4 = 0f;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4718592.f_173211[iParam0 /*58*/].f_5[iVar1 /*3*/] = { 0f, 0f, 0f };
		Global_4718592.f_173211[iParam0 /*58*/].f_18[iVar1] = 0f;
		iVar1++;
	}
	Global_4718592.f_173211[iParam0 /*58*/].f_23 = 1.25f;
	Global_4718592.f_173211[iParam0 /*58*/].f_34 = 0;
	Global_4718592.f_173211[iParam0 /*58*/].f_35 = 0;
	Global_4718592.f_173211[iParam0 /*58*/].f_57 = 0;
	Global_4718592.f_173211[iParam0 /*58*/].f_48 = 0;
	Global_4718592.f_173211[iParam0 /*58*/].f_49 = 0f;
	Global_4718592.f_173211[iParam0 /*58*/].f_36 = -1;
	Global_4718592.f_173211[iParam0 /*58*/].f_37 = { 0f, 0f, 0f };
	Global_4718592.f_173211[iParam0 /*58*/].f_40 = 0f;
	Global_4718592.f_173211[iParam0 /*58*/].f_47 = 65f;
	Global_4718592.f_173211[iParam0 /*58*/].f_41 = { 0f, 0f, 0f };
	Global_4718592.f_173211[iParam0 /*58*/].f_44 = { 0f, 0f, 0f };
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Global_4718592.f_173211[iParam0 /*58*/].f_24[iVar2] = -1;
		Global_4718592.f_173211[iParam0 /*58*/].f_29[iVar2] = -1;
		iVar2++;
	}
	Global_4718592.f_173211[iParam0 /*58*/].f_50 = -1;
	Global_4718592.f_173211[iParam0 /*58*/].f_51 = 0;
	__LIB_11__::func_616(&(Global_4718592.f_173211[iParam0 /*58*/].f_52), 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_4718592.f_173211[iParam0 /*58*/].f_54[iVar0] = -1;
		iVar0++;
	}
}

int func_244(int iParam0, bool bParam1, char* sParam2, int iParam3)//Position - 0x1FDDA5
{
	struct<13> Var0;
	struct<13> Var1;
	if (((((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { __LIB_11__::func_527(sParam2) };
		Var1 = { __LIB_0__::func_604(PLAYER::PLAYER_ID()) };
		if (bParam1)
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &Var0))
			{
				return 1;
			}
			else if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
			{
				return 0;
			}
		}
		else if (__LIB_0__::func_53())
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &Var0))
			{
				return 1;
			}
			else if ((NETWORK::NETWORK_PERMISSIONS_HAS_GAMER_RECORD(&Var0) && NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0)) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 0;
			}
		}
		else
		{
			Var1 = { __LIB_0__::func_604(PLAYER::PLAYER_ID()) };
			if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_245(int iParam0)//Position - 0x1FF536
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char cVar7[16];
	iVar0 = DATAFILE::DATADICT_GET_DICT(*iParam0, "surv");
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wave") == 2)
	{
		Global_4718592.f_170137 = DATAFILE::DATADICT_GET_INT(iVar0, "wave");
	}
	else
	{
		Global_4718592.f_170137 = 10;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvtst") == 2)
	{
		Global_4718592.f_170137.f_2728 = DATAFILE::DATADICT_GET_INT(iVar0, "wvtst");
	}
	else
	{
		Global_4718592.f_170137.f_2728 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "sbits") == 2)
	{
		Global_4718592.f_170137.f_2808 = DATAFILE::DATADICT_GET_INT(iVar0, "sbits");
	}
	else
	{
		Global_4718592.f_170137.f_2808 = 0;
	}
	iVar2 = 1;
	while (iVar2 <= Global_4718592.f_170137)
	{
		StringCopy(&cVar7, "wKil", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_1[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_1[iVar2] = __LIB_11__::func_562(13, iVar2, 0);
		}
		StringCopy(&cVar7, "wveq", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_2729[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_2729[iVar2] = __LIB_11__::func_562(17, iVar2, 0);
		}
		StringCopy(&cVar7, "wvss", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_2773[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_2773[iVar2] = __LIB_11__::func_562(18, iVar2, 0);
		}
		StringCopy(&cVar7, "wdif", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_2751[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_2751[iVar2] = __LIB_11__::func_562(19, iVar2, 0);
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			StringCopy(&cVar7, "sqd", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_23[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_23[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(0, iVar2, iVar3);
			}
			StringCopy(&cVar7, "pps", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_108[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_108[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(1, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_278[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_278[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(8, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_363[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_363[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(9, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdAC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_448[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_448[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(10, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_533[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_533[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(12, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_193[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_193[iVar2 /*4*/][iVar3] = __LIB_11__::func_559(7, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_618[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_618[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(24, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_703[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_703[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(25, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_788[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_788[iVar2 /*4*/][iVar3] = __LIB_11__::func_562(26, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_873[iVar2 /*4*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_873[iVar2 /*4*/][iVar3] = __LIB_11__::func_559(27, iVar2, iVar3);
			}
			iVar3++;
		}
		StringCopy(&cVar7, "lVeh", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_958[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_958[iVar2] = __LIB_11__::func_562(3, iVar2, 0);
		}
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&cVar7, "vped", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_980[iVar2 /*5*/][iVar4] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_980[iVar2 /*5*/][iVar4] = __LIB_11__::func_562(4, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vmn", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1086[iVar2 /*5*/][iVar4] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1086[iVar2 /*5*/][iVar4] = __LIB_11__::func_559(5, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vHP", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1192[iVar2 /*5*/][iVar4] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1192[iVar2 /*5*/][iVar4] = __LIB_11__::func_562(14, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1298[iVar2 /*5*/][iVar4] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1298[iVar2 /*5*/][iVar4] = __LIB_11__::func_562(28, iVar2, iVar4);
			}
			iVar4++;
		}
		StringCopy(&cVar7, "sHeli", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4718592.f_170137.f_2440[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
		}
		else
		{
			Global_4718592.f_170137.f_2440[iVar2] = __LIB_11__::func_562(6, iVar2, 0);
		}
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			StringCopy(&cVar7, "airMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_2462[iVar2 /*4*/][iVar5] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_2462[iVar2 /*4*/][iVar5] = __LIB_11__::func_559(15, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_2547[iVar2 /*4*/][iVar5] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_2547[iVar2 /*4*/][iVar5] = __LIB_11__::func_562(16, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_2632[iVar2 /*4*/][iVar5] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_2632[iVar2 /*4*/][iVar5] = __LIB_11__::func_562(28, iVar2, iVar5);
			}
			iVar5++;
		}
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			StringCopy(&cVar7, "wepTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1404[iVar2 /*5*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1404[iVar2 /*5*/][iVar6] = __LIB_11__::func_561(iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1510[iVar2 /*5*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1510[iVar2 /*5*/][iVar6] = __LIB_11__::func_562(20, iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1616[iVar2 /*5*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			else
			{
				Global_4718592.f_170137.f_1616[iVar2 /*5*/][iVar6] = __LIB_11__::func_562(21, iVar2, iVar6);
			}
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 <= 9)
		{
			StringCopy(&cVar7, "ldWTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1722[iVar2 /*11*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_1954[iVar2 /*11*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4718592.f_170137.f_2186[iVar2 /*11*/][iVar6] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
			}
			iVar6++;
		}
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "swwon") == 2)
		{
			Global_4718592.f_170137.f_2418[iVar2] = DATAFILE::DATADICT_GET_INT(iVar0, "swwon");
		}
		else
		{
			Global_4718592.f_170137.f_2418[iVar2] = 0;
		}
		iVar2++;
	}
	StringCopy(&cVar7, "sqdMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4718592.f_170137.f_193[0 /*4*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
	}
	else
	{
		Global_4718592.f_170137.f_193[0 /*4*/][0] = __LIB_11__::func_559(7, 0, 0);
	}
	StringCopy(&cVar7, "vmn", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "v", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4718592.f_170137.f_1086[0 /*5*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
	}
	else
	{
		Global_4718592.f_170137.f_1086[0 /*5*/][0] = __LIB_11__::func_559(5, 0, 0);
	}
	StringCopy(&cVar7, "airMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "a", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4718592.f_170137.f_2462[0 /*4*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
	}
	else
	{
		Global_4718592.f_170137.f_2462[0 /*4*/][0] = __LIB_11__::func_559(15, 0, 0);
	}
	StringCopy(&cVar7, "hvyMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4718592.f_170137.f_873[0 /*4*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar7);
	}
	else
	{
		Global_4718592.f_170137.f_873[0 /*4*/][0] = __LIB_11__::func_559(27, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		StringCopy(&cVar7, "sbndsv", 16);
		StringIntConCat(&cVar7, iVar1, 16);
		if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar7) == 5)
		{
			Global_4718592.f_170137.f_2717[iVar1 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar7) };
		}
		else
		{
			Global_4718592.f_170137.f_2717[iVar1 /*3*/] = { 0f, 0f, 0f };
		}
		iVar1++;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "sbndsr") == 3)
	{
		Global_4718592.f_170137.f_2724 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "sbndsr");
	}
	else
	{
		Global_4718592.f_170137.f_2724 = 100f;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "sbndsh") == 3)
	{
		Global_4718592.f_170137.f_2725 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "sbndsh");
	}
	else
	{
		Global_4718592.f_170137.f_2725 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "sbndsbo") == 3)
	{
		Global_4718592.f_170137.f_2726 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "sbndsbo");
	}
	else
	{
		Global_4718592.f_170137.f_2726 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "sbndst") == 2)
	{
		Global_4718592.f_170137.f_2727 = DATAFILE::DATADICT_GET_INT(iVar0, "sbndst");
	}
	else
	{
		Global_4718592.f_170137.f_2727 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvalv") == 2)
	{
		Global_4718592.f_170137.f_2795 = DATAFILE::DATADICT_GET_INT(iVar0, "wvalv");
	}
	else
	{
		Global_4718592.f_170137.f_2795 = 360;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvaav") == 2)
	{
		Global_4718592.f_170137.f_2796 = DATAFILE::DATADICT_GET_INT(iVar0, "wvaav");
	}
	else
	{
		Global_4718592.f_170137.f_2796 = 1200;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvscb") == 2)
	{
		Global_4718592.f_170137.f_2798 = DATAFILE::DATADICT_GET_INT(iVar0, "wvscb");
	}
	else
	{
		Global_4718592.f_170137.f_2798 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvpcb") == 2)
	{
		Global_4718592.f_170137.f_2799 = DATAFILE::DATADICT_GET_INT(iVar0, "wvpcb");
	}
	else
	{
		Global_4718592.f_170137.f_2799 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvlvcb") == 2)
	{
		Global_4718592.f_170137.f_2802 = DATAFILE::DATADICT_GET_INT(iVar0, "wvlvcb");
	}
	else
	{
		Global_4718592.f_170137.f_2802 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvlmcb") == 2)
	{
		Global_4718592.f_170137.f_2803 = DATAFILE::DATADICT_GET_INT(iVar0, "wvlmcb");
	}
	else
	{
		Global_4718592.f_170137.f_2803 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvavcb") == 2)
	{
		Global_4718592.f_170137.f_2804 = DATAFILE::DATADICT_GET_INT(iVar0, "wvavcb");
	}
	else
	{
		Global_4718592.f_170137.f_2804 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvamcb") == 2)
	{
		Global_4718592.f_170137.f_2805 = DATAFILE::DATADICT_GET_INT(iVar0, "wvamcb");
	}
	else
	{
		Global_4718592.f_170137.f_2805 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvdcb") == 2)
	{
		Global_4718592.f_170137.f_2800 = DATAFILE::DATADICT_GET_INT(iVar0, "wvdcb");
	}
	else
	{
		Global_4718592.f_170137.f_2800 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvpmcb") == 2)
	{
		Global_4718592.f_170137.f_2801 = DATAFILE::DATADICT_GET_INT(iVar0, "wvpmcb");
	}
	else
	{
		Global_4718592.f_170137.f_2801 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvhcb") == 2)
	{
		Global_4718592.f_170137.f_2806 = DATAFILE::DATADICT_GET_INT(iVar0, "wvhcb");
	}
	else
	{
		Global_4718592.f_170137.f_2806 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvhmcb") == 2)
	{
		Global_4718592.f_170137.f_2807 = DATAFILE::DATADICT_GET_INT(iVar0, "wvhmcb");
	}
	else
	{
		Global_4718592.f_170137.f_2807 = 0;
	}
	if (iVar0 != 0 && DATAFILE::DATADICT_GET_TYPE(iVar0, "wvhow") == 2)
	{
		Global_4718592.f_170137.f_2797 = DATAFILE::DATADICT_GET_INT(iVar0, "wvhow");
	}
	else
	{
		Global_4718592.f_170137.f_2797 = 0;
	}
}

int func_246(var* uParam0, var uParam1)//Position - 0x21B3E2
{
	int iVar0;
	iVar0 = uParam1;
	while (iVar0 <= (__LIB_11__::func_590() - 1))
	{
		if (!__LIB_0__::func_86(DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247()//Position - 0x2376BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)) && !__LIB_12__::func_765(iVar2)) && Global_1853348[iVar2 /*834*/].f_205 != 8) && !BitTest(Global_1853348[iVar2 /*834*/].f_36.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_248()//Position - 0x23ACA8
{
	if ((!Global_2656982 && !Global_2656982.f_1) && !Global_2656982.f_2)
	{
		return 0;
	}
	if (!Global_2656982.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_249()//Position - 0x23B290
{
	return Global_1574533;
}

int func_250(int iParam0)//Position - 0x242421
{
	if (iParam0 == 3 || iParam0 == 1)
	{
		return 1;
	}
	if (!__LIB_0__::func_236())
	{
		if ((iParam0 == 4 || iParam0 == 2) || iParam0 == 6)
		{
			return 0;
		}
	}
	return 1;
}

void func_251(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x242466
{
	bool bVar0;
	bool bVar1;
	var* uVar2;
	var* uVar3;
	int iVar4;
	int iVar5;
	var* uVar6[16];
	if (uParam0->f_9 >= 513)
	{
		return;
	}
	if (uParam0->f_9 == 0 && iParam3 == 1)
	{
		uParam1->f_1864 = 0;
	}
	StringCopy(uParam1[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
	StringCopy(&(uParam1->f_513[uParam0->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
	uVar2 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "list");
	if (bParam2)
	{
		if (DATAFILE::DATADICT_GET_TYPE(uVar2, "h2h") == 1)
		{
			bVar0 = DATAFILE::DATADICT_GET_BOOL(uVar2, "h2h");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar2, "h2h") == 1)
		{
			bVar1 = DATAFILE::DATADICT_GET_BOOL(uVar2, "ch");
		}
		if (bVar0)
		{
			MISC::SET_BIT(&(uParam1->f_1865), uParam0->f_9);
		}
		if (bVar1)
		{
			MISC::SET_BIT(&(uParam1->f_1866), uParam0->f_9);
		}
	}
	iVar4 = DATAFILE::DATAARRAY_GET_COUNT(uVar3);
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		uVar6[iVar5] = DATAFILE::DATAARRAY_GET_DICT(uVar3, iVar5);
		if (DATAFILE::DATADICT_GET_TYPE(uVar6[iVar5], "type") == 2)
		{
			uParam1->f_1219[uParam0->f_9 /*17*/][iVar5] = DATAFILE::DATADICT_GET_INT(uVar6[iVar5], "type");
		}
		iVar5++;
	}
	uParam1->f_1864 = uParam0->f_9;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_513[uParam0->f_9 /*6*/])))
	{
		uParam0->f_9++;
	}
	uParam1->f_1864++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_252(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x2425E1
{
	bool bVar0;
	bool bVar1;
	var* uVar2;
	var* uVar3;
	int iVar4;
	int iVar5;
	var* uVar6[16];
	if (uParam0->f_9 >= 257)
	{
		return;
	}
	if (uParam0->f_9 == 0 && iParam3 == 1)
	{
		uParam1->f_936 = 0;
	}
	StringCopy(uParam1[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
	StringCopy(&(uParam1->f_257[uParam0->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
	uVar2 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "list");
	if (bParam2)
	{
		bVar0 = DATAFILE::DATADICT_GET_BOOL(uVar2, "h2h");
		bVar1 = DATAFILE::DATADICT_GET_BOOL(uVar2, "ch");
		if (bVar0)
		{
			MISC::SET_BIT(&(uParam1->f_937), uParam0->f_9);
		}
		if (bVar1)
		{
			MISC::SET_BIT(&(uParam1->f_938), uParam0->f_9);
		}
	}
	iVar4 = DATAFILE::DATAARRAY_GET_COUNT(uVar3);
	if (iVar4 != 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar4 - 1))
		{
			uVar6[iVar5] = DATAFILE::DATAARRAY_GET_DICT(uVar3, iVar5);
			uParam1->f_611[uParam0->f_9 /*17*/][iVar5] = DATAFILE::DATADICT_GET_INT(uVar6[iVar5], "type");
			iVar5++;
		}
	}
	uParam1->f_936 = uParam0->f_9;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_257[uParam0->f_9 /*6*/])))
	{
		uParam0->f_9++;
	}
	uParam1->f_936++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_253(int iParam0, int iParam1)//Position - 0x247C7B
{
	int iVar0;
	if (iParam1 >= 2000)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9493[iVar0])
		{
			Global_794709.f_203824[0 /*11*/][iVar0] = iParam1;
			Global_794709.f_4[iParam1 /*88*/].f_56 = { __LIB_9__::func_796(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_59 = { __LIB_11__::func_546(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_62 = { __LIB_11__::func_545(0, iVar0) };
			Global_794709.f_177589[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794709.f_203824[0 /*11*/].f_9 <= iVar0)
			{
				Global_794709.f_203824[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_9502[iVar0])
		{
			Global_794709.f_177589[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
		}
		iVar0++;
	}
}

int func_254(int iParam0)//Position - 0x248523
{
	struct<13> Var0;
	var uVar1;
	if (iParam0 == __LIB_0__::func_160())
	{
		return -1;
	}
	Var0 = { __LIB_0__::func_604(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar1, 35, &Var0);
	return uVar1;
}

void func_255(bool bParam0, bool bParam1, int iParam2)//Position - 0x248841
{
	int iVar0;
	int iVar1;
	struct<88> Var2;
	if (bParam1)
	{
		Global_794709 = 0;
		Global_1040326[0 /*66*/] = 0;
	}
	iVar0 = 2018;
	if (__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 0))
	{
		iVar0 = 2000;
	}
	if (bParam0)
	{
		Var2.f_65 = -1;
		Var2.f_66 = -1;
		Var2.f_67 = 2;
		iVar1 = iParam2;
		while (iVar1 <= (iVar0 - 1))
		{
			Global_794709.f_4[iVar1 /*88*/] = { Var2 };
			iVar1++;
		}
	}
}

bool func_256()//Position - 0x2488E7
{
	return Global_1835431.f_2;
}

int func_257()//Position - 0x248E85
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if ((iVar0 == joaat("Player_Zero") || iVar0 == joaat("Player_One")) || iVar0 == joaat("Player_Two"))
	{
		return 1;
	}
	return 0;
}

bool func_258(bool bParam0, bool bParam1)//Position - 0x1450
{
	if (!bParam1)
	{
		if (__LIB_0__::func_581(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__::func_160();
}

Vector3 func_259(int iParam0)//Position - 0x47F9
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

void func_260(int iParam0, int iParam1)//Position - 0x53FF
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_261(int iParam0)//Position - 0x187F4
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

float func_262()//Position - 0x21660
{
	return 60f;
}

int func_263(int iParam0)//Position - 0x229A4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_264(int iParam0)//Position - 0x22A06
{
	return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_265(struct<3> Param0)//Position - 0x22A18
{
	Global_1952191.f_5479 = { Param0 };
}

Vector3 func_266()//Position - 0x22A56
{
	struct<3> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_267()//Position - 0x22A77
{
	struct<3> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	return Var0;
}

int func_268(int iParam0)//Position - 0x233D9
{
	if (__LIB_2__::func_191(iParam0) == __LIB_0__::func_160())
	{
		return 0;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_19;
}

void func_269(var uParam0)//Position - 0x237B4
{
	DATAFILE::DATAFILE_DELETE(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

int func_270(var* uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24E65
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
	}
	return iParam2;
}

float func_271(var* uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x24E8D
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_272(var* uParam0, int iParam1, struct<3> Param2, bool bParam3)//Position - 0x24EB5
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
	}
	return Param2;
}

int func_273(var* uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24EDF
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

float func_274(int iParam0, char* sParam1, float fParam2)//Position - 0x24F40
{
	if (__LIB_4__::func_664(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
	{
		return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
	}
	return fParam2;
}

struct<16> func_275(int iParam0, char* sParam1, char* sParam2)//Position - 0x24FF2
{
	struct<16> Var0;
	if (__LIB_4__::func_664(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_276(int iParam0, char* sParam1)//Position - 0x2502C
{
	if (!__LIB_4__::func_664(iParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}

char* func_277(var uParam0, var uParam1)//Position - 0x250C4
{
	return "Sum2_Ammunation_1";
}

int func_278(int iParam0)//Position - 0x250EC
{
	switch (iParam0)
	{
		case 275:
		case 270:
		case 276:
		case 277:
		case 273:
		case 292:
		case 295:
		case 300:
			return 0;
		default:
	}
	return 1;
}

int func_279()//Position - 0x30AB2
{
	return iLocal_556;
}

int func_280(int iParam0)//Position - 0x358DC
{
	switch (iParam0)
	{
		case 276:
			return 1;
		default:
	}
	return 0;
}

void func_281(struct<2> Param0)//Position - 0x36692
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1952191.f_5322[iVar0 /*2*/].f_1 == -1)
		{
			Global_1952191.f_5322[iVar0 /*2*/] = { Param0 };
			MISC::SET_BIT(&Global_1952191, 1);
			return;
		}
		iVar0++;
	}
	if (!BitTest(Global_1952191, 1))
	{
		MISC::SET_BIT(&Global_1952191, 1);
	}
}

void func_282(bool bParam0)//Position - 0x3961F
{
	if (bParam0)
	{
		__LIB_1__::func_123(13);
	}
	else
	{
		__LIB_1__::func_125(13);
	}
}

void func_283(int iParam0)//Position - 0x3963B
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1911933[iVar0 /*260*/].f_259 != iParam0)
	{
		Global_1911933[iVar0 /*260*/].f_259 = iParam0;
	}
}

int func_284(int iParam0)//Position - 0x39E98
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_285()//Position - 0x3B492
{
	Global_1952191.f_5470.f_3 = 0;
	Global_1952191.f_5470 = -1;
	Global_1952191.f_5470.f_2 = -1000;
}

void func_286(struct<3> Param0, int iParam1)//Position - 0x3BA0D
{
	if (!__LIB_0__::func_78(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/], 0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam1 /*3*/] = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/] };
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/] = { Param0 };
	}
}

void func_287(int iParam0)//Position - 0x3C25E
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iParam0, true);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(iParam0, true);
}

int func_288(int iParam0)//Position - 0x3C2F3
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		default:
	}
	return 0;
}

void func_289(int iParam0)//Position - 0xBBD21
{
	if (Global_1952160 != iParam0)
	{
		Global_1952160 = iParam0;
	}
}

void func_290(int iParam0)//Position - 0xBBD72
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, 0, 0, 0);
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
	if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar0 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
		{
			FILES::INIT_SHOP_PED_PROP(&Var2);
			if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
			{
				FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var2);
			}
			else
			{
				FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var2);
			}
			PED::SET_PED_PROP_INDEX(iParam0, 1, Var2.f_3, Var2.f_4, false);
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
	{
		PED::CLEAR_PED_PROP(iParam0, 1);
	}
}

float func_291()//Position - 0xBC28C
{
	return 0.5f;
}

int func_292()//Position - 0xBE8E3
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230;
}

float func_293()//Position - 0xBEA52
{
	return 1200f;
}

float func_294()//Position - 0xBEA93
{
	return 1000f;
}

bool func_295(bool bParam0)//Position - 0xC31B7
{
	return __LIB_2__::func_313(&(Global_2678393.f_822[bParam0]));
}

bool func_296(bool bParam0)//Position - 0xC3292
{
	return __LIB_2__::func_313(&(Global_2678393.f_624[bParam0]));
}

void func_297(bool bParam0, int iParam1, bool bParam2)//Position - 0xC4BA4
{
	if (((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1576) && !SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1582)) || (Global_2678393.f_1576 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2678393.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD())) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1576 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2678393.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
			Global_2678393.f_1577 = NETWORK::GET_NETWORK_TIME();
			Global_2678393.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2678393.f_1576 = -1;
			Global_2678393.f_1582 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
		}
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_4 = 2147483647;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_5 = 0;
		Global_2678393.f_1579 = iParam1;
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_298(int iParam0)//Position - 0xC5026
{
	int iVar0;
	if (__LIB_0__::func_640(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), Global_1643899[iParam0]);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 17);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 18);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 19);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 20);
		if (Global_2689235[iVar0 /*453*/].f_237 == 0)
		{
			Global_2689235[iVar0 /*453*/].f_236 = 0;
		}
	}
	Global_1643876[iParam0] = 0;
	Global_1643915[iParam0] = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 0;
}

void func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xC50D5
{
	int iVar0;
	Global_1643899[iParam0] = iParam1;
	Global_1643923[iParam0] = iParam4;
	Global_1643931[iParam0] = iParam5;
	if (bParam6)
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 1;
	}
	else
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 0;
	}
	if (bParam7)
	{
	}
	if (__LIB_0__::func_640(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::SET_BIT(&(Global_2689235[iVar0 /*453*/].f_237), iParam1);
		Global_2689235[iVar0 /*453*/].f_236 = 1;
	}
	if (iParam2 == 1)
	{
		Global_1643907[iParam0] = 1;
	}
	else
	{
		Global_1643907[iParam0] = 0;
	}
	Global_1643876[iParam0] = 1;
	Global_1643915[iParam0] = iParam3;
	if (bParam8)
	{
		if (iParam1 == 12)
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_241 = 1;
		}
	}
}

bool func_300()//Position - 0xC52C7
{
	return Global_1952159;
}

float func_301()//Position - 0xC5DAC
{
	return 2.5f;
}

int func_302()//Position - 0xC8FFD
{
	return 15000;
}

int func_303()//Position - 0xC9008
{
	return 10000;
}

bool func_304(bool bParam0)//Position - 0xCF02D
{
	return __LIB_10__::func_886(Global_2678393.f_822[bParam0], &(Global_2678393.f_367), bParam0);
}

bool func_305()//Position - 0xCF133
{
	return Global_2678393.f_1644;
}

int func_306(int iParam0, var uParam1)//Position - 0xCFAF9
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_307(int iParam0, var uParam1)//Position - 0xCFB6D
{
	switch (iParam0)
	{
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_308(int iParam0, var uParam1)//Position - 0xCFBA1
{
	switch (iParam0)
	{
		case 1:
		case 0:
			return 1;
		default:
	}
	return 0;
}

int func_309(int iParam0, var uParam1)//Position - 0xCFBFB
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_310(int iParam0, var uParam1)//Position - 0xCFC2D
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 1:
		case 4:
		case 5:
			return 1;
		default:
	}
	return 0;
}

int func_311(int iParam0, var uParam1)//Position - 0xCFC5F
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 16:
		case 8:
		case 10:
		case 13:
		case 15:
		case 4:
		case 14:
		case 7:
		case 11:
			return 1;
		case 9:
			return 2;
		case 1:
			return 3;
		default:
	}
	return 0;
}

int func_312(int iParam0, var uParam1)//Position - 0xCFCD2
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
		case 9:
		case 7:
		case 8:
		case 13:
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_313(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD031A
{
	switch (iParam1)
	{
		case 0:
			return 805;
		case 1:
			return 806;
		case 2:
			return 807;
		case 3:
			return 808;
		case 4:
			return 809;
		case 5:
			return 810;
		case 6:
			return 811;
		case 7:
			return 812;
		case 8:
			return 813;
		case 9:
			return 814;
		default:
	}
	return 0;
}

int func_314(int iParam0)//Position - 0xD03F5
{
	switch (iParam0)
	{
		case 91:
			return 867;
		case 92:
			return 868;
		case 93:
			return 869;
		case 94:
			return 870;
		case 95:
			return 871;
		case 96:
			return 872;
		case 97:
			return 873;
		case 98:
			return 874;
		case 99:
			return 875;
		case 100:
			return 876;
		case 101:
			return 877;
		case 102:
			return 878;
		default:
	}
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD0509
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 815;
				case 1:
					return 816;
				case 2:
					return 817;
				case 3:
					return 818;
				case 4:
					return 819;
				case 5:
					return 820;
				case 6:
					return 821;
				case 7:
					return 822;
				case 8:
					return 823;
				case 9:
					return 824;
				case 10:
					return 825;
				case 11:
					return 826;
				default:
			}
			break;
	}
	return 0;
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD05B9
{
	switch (Global_1892703[iParam3 /*599*/].f_10.f_183)
	{
		case 1:
			return 845;
		case 2:
			return 846;
		case 3:
			return 847;
		case 4:
			return 848;
		case 5:
			return 849;
		case 6:
			return 850;
		case 7:
			return 851;
		case 8:
			return 852;
		case 9:
			return 853;
		case 10:
			return 854;
		case 11:
			return 855;
		case 12:
			return 856;
		case 13:
			return 857;
		case 14:
			return 858;
		case 15:
			return 859;
		case 16:
			return 860;
		case 17:
			return 861;
		case 18:
			return 862;
		case 19:
			return 863;
		case 20:
			return 864;
		case 21:
			return 865;
		case 22:
			return 866;
		default:
	}
	return 0;
}

int func_317(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD0896
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 755;
			break;
	}
	return 756;
}

void func_318(int iParam0)//Position - 0xD0BD0
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_193 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_193 = iParam0;
	}
}

bool func_319(int iParam0)//Position - 0xD0C48
{
	return __LIB_0__::func_163(iParam0, 25);
}

float func_320(int iParam0)//Position - 0xD3844
{
	return 35f;
}

float func_321()//Position - 0xD6B53
{
	return 100f;
}

float func_322(var uParam0)//Position - 0xD6DCF
{
	return -1f;
}

float func_323(var uParam0)//Position - 0xD6DE1
{
	return 6f;
}

float func_324(var uParam0)//Position - 0xD6DEA
{
	return 3f;
}

int func_325(int iParam0, int iParam1, bool bParam2)//Position - 0xD8B2A
{
	if (bParam2)
	{
		if ((!__LIB_0__::func_163(PLAYER::PLAYER_ID(), 19) && !__LIB_0__::func_163(PLAYER::PLAYER_ID(), 20)) && !__LIB_0__::func_163(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2789228.f_93[iParam0] == 1 && __LIB_0__::func_649(&(Global_2789228[iParam0 /*2*/])))
	{
		if (__LIB_1__::func_295(&(Global_2789228[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2789228.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_326(int iParam0)//Position - 0xDD1A3
{
	if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 238 || __LIB_0__::func_396(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_477;
	}
	return -1;
}

int func_327(int iParam0)//Position - 0xDD1DC
{
	if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 237 || __LIB_0__::func_396(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_476;
	}
	return -1;
}

void func_328()//Position - 0xDD4C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837161[iVar0], joaat("AGGRESSIVE_INVESTIGATE"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AGGRESSIVE_INVESTIGATE"), Global_1837161[iVar0]);
		iVar0++;
	}
}

int func_329(int iParam0)//Position - 0xD1F
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		default:
	}
	return 0;
}

void func_330(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEBB
{
	struct<7> Var0;
	Var0.f_0 = -1946222827;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

int func_331(int iParam0)//Position - 0x3CF9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("annihilator2"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_332(int iParam0, int iParam1)//Position - 0x3D9C
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", true);
	}
}

int func_333(int iParam0)//Position - 0x17543
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

bool func_334(int iParam0)//Position - 0x1FE59
{
	int iVar0;
	bool bVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (bVar1 != __LIB_0__::func_160() && __LIB_1__::func_264(bVar1, 0, 1))
			{
				return bVar1;
			}
		}
	}
	return __LIB_0__::func_160();
}

int func_335(int iParam0, int iParam1)//Position - 0x2032E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2681762.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_336(bool bParam0)//Position - 0x20367
{
	int iVar0;
	if (__LIB_1__::func_264(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_337(int iParam0)//Position - 0x210A3
{
	return __LIB_1__::func_301();
}

Vector3 func_338(int iParam0, int iParam1)//Position - 0x21430
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				case 1:
					return -1f, -2f, -0.1f;
				case 2:
					return 1f, -2f, -0.1f;
				case 3:
					return -1f, -2f, -0.1f;
				default:
			}
			break;
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				case 1:
					return -0.5f, 0f, -0.1f;
				case 2:
					return 0.5f, 0f, -0.1f;
				case 3:
					return -0.5f, 0f, -0.1f;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		case 1:
			return -1f, 0f, -0.1f;
		case 2:
			return 1f, 0f, -0.1f;
		case 3:
			return -1f, 0f, -0.1f;
		default:
	}
	return 0f, -1f, -0.1f;
}

void func_339(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x21C45
{
	if (iParam0 <= iParam1)
	{
	}
}

Vector3 func_340(int iParam0, int iParam1, bool bParam2)//Position - 0x2E54D
{
	int iVar0;
	int iVar1;
	if (iParam1 == __LIB_0__::func_160())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1952191.f_5505[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1892703[iParam1 /*599*/].f_556.f_16[iVar1 /*6*/];
	}
	return Global_1892703[iParam1 /*599*/].f_556.f_16[iVar1 /*6*/].f_3;
}

void func_341(int iParam0)//Position - 0x2EB74
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_35[iVar0]), iVar1);
}

void func_342(int iParam0)//Position - 0x2FF21
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_160())
	{
		return;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_4 != iParam0)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_4 = iParam0;
	}
}

void func_343(int iParam0)//Position - 0x30413
{
	struct<106> Var0;
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2789412[iParam0 /*106*/] = { Var0 };
}

int func_344(int iParam0)//Position - 0x3169C
{
	if (!iParam0 == __LIB_0__::func_160())
	{
		if (__LIB_13__::func_258(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_2__::func_191(iParam0)];
		}
	}
	return -1;
}

void func_345(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x31AA0
{
	uParam1->f_17 = __LIB_0__::func_160();
	uParam1->f_18 = __LIB_0__::func_160();
	uParam1->f_19 = __LIB_0__::func_160();
	uParam1->f_20 = __LIB_0__::func_160();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_346()//Position - 0x31EFB
{
	int iVar0;
	iVar0 = __LIB_0__::func_396(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_630(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_347(int iParam0)//Position - 0x35A6C
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

char* func_348()//Position - 0x35C1F
{
	return "BHH_HELD" /* GXT: You are already carrying Goods. */;
}

void func_349(int iParam0)//Position - 0x35DE4
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 = iParam0;
	}
}

void func_350(var uParam0, bool bParam1)//Position - 0x376A3
{
	HUD::SET_BLIP_FLASHES(*uParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

char* func_351()//Position - 0x3771B
{
	return "FMC_BLIP_ME" /* GXT: Package */;
}

int func_352(int iParam0)//Position - 0x37AB2
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		default:
	}
	return 1;
}

int func_353(int iParam0)//Position - 0x37E7B
{
	int iVar0;
	int iVar1;
	if (iParam0 != __LIB_0__::func_160())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_2__::func_467(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_354(struct<2> Param0)//Position - 0x3803E
{
	int iVar0;
	if (!__LIB_2__::func_467(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_2__::func_467(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) && __LIB_2__::func_466(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_355()//Position - 0x38439
{
	int iVar0;
	if (BitTest(Global_2815059.f_4630, 2))
	{
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::func_160())
			{
				if (Global_2689235[iVar0 /*453*/].f_208)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_356()//Position - 0x385A5
{
	return 20000;
}

void func_357(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)//Position - 0xAE817
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - fParam3);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Param1, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

void func_358(int iParam0)//Position - 0xAECEF
{
	if (__LIB_11__::func_631(&(Global_2703735.f_169), iParam0))
	{
	}
}

int func_359(int iParam0)//Position - 0xB8DBF
{
	if (__LIB_2__::func_965(__LIB_0__::func_396(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0)//Position - 0xB9683
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("oppressor2"))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

char* func_361()//Position - 0xBBDA8
{
	return "FMH_LEFTRANGE" /* GXT: You are out of range of the Freemode Event that is currently in progress. Press ~INPUT_CONTEXT~ to continue participating. */;
}

bool func_362()//Position - 0xBBF6C
{
	return BitTest(Global_2815059.f_1797, 9);
}

float func_363()//Position - 0xBF6F1
{
	return 5f;
}

char* func_364(int iParam0)//Position - 0xBFECA
{
	return "PROVOKE_TRESPASS";
}

int func_365(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xC00EF
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
		return 1;
	}
	return 0;
}

bool func_366(bool bParam0)//Position - 0xC0794
{
	return __LIB_2__::func_313(&(Global_2678393.f_756[bParam0]));
}

bool func_367(bool bParam0)//Position - 0xC0816
{
	return __LIB_2__::func_313(&(Global_2678393.f_591[bParam0]));
}

bool func_368(bool bParam0)//Position - 0xC08B5
{
	return __LIB_2__::func_313(&(Global_2678393.f_921[bParam0]));
}

bool func_369(bool bParam0)//Position - 0xC0986
{
	return __LIB_2__::func_313(&(Global_2678393.f_888[bParam0]));
}

int func_370()//Position - 0xC1BBD
{
	if ((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_371()//Position - 0xC2399
{
	int iVar0;
	if (BitTest(Global_2815059.f_4624, 4))
	{
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::func_160())
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 17))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_372()//Position - 0xC2651
{
	return 0.7f;
}

int func_373(int iParam0, int iParam1)//Position - 0xC3659
{
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 126))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 84))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 97))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 116))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 94))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 124))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 23))
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0)//Position - 0xC48E6
{
	switch (iParam0)
	{
		case 7:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_375(int iParam0, int iParam1, var uParam2)//Position - 0xC530D
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -2005151571;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar1 = __LIB_4__::func_511(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_376(int iParam0)//Position - 0xC54DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 235)
	{
		iVar0 = iVar2;
		iVar1 = __LIB_1__::func_48(iVar0);
		if (iVar1 == iParam0)
		{
			return iVar0;
		}
		iVar2++;
	}
	return -1;
}

void func_377(int iParam0, struct<3> Param1)//Position - 0xC6415
{
	if (iParam0 == 0 || !__LIB_6__::func_489(Param1))
	{
		return;
	}
	if (Global_1952191.f_5470.f_3 != iParam0)
	{
		Global_1952191.f_5470.f_3 = iParam0;
		Global_1952191.f_5470 = { Param1 };
	}
}

bool func_378()//Position - 0xC6500
{
	return __LIB_1__::func_301() == PLAYER::PLAYER_ID();
}

int func_379(int iParam0)//Position - 0xCAA48
{
	if (__LIB_13__::func_258(iParam0, 1))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_429;
	}
	return -1;
}

var func_380()//Position - 0xCB5BC
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_9__::func_506(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_381(var uParam0, var uParam1)//Position - 0xCBD51
{
	int iVar0;
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != (*uParam1)[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_382(int iParam0)//Position - 0xCBE03
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		default:
	}
	return 32;
}

int func_383(int iParam0)//Position - 0xCBE81
{
	switch (iParam0)
	{
		case 0:
			return 44;
		default:
	}
	return 49;
}

void func_384(var uParam0, int iParam1)//Position - 0xCBE9D
{
	if (!__LIB_2__::func_319(uParam0, iParam1))
	{
		__LIB_4__::func_745(uParam0, iParam1);
	}
}

int func_385(int iParam0)//Position - 0xCBF31
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 9:
			return 3;
		case 11:
			return 6;
		case 12:
			return 7;
		case 13:
			return 9;
		default:
	}
	return 13;
}

int func_386(int iParam0)//Position - 0xCBFD7
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		default:
	}
	return 17;
}

int func_387(int iParam0)//Position - 0xCC061
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 10;
		case 8:
			return 11;
		case 9:
			return 12;
		case 10:
			return 13;
		case 11:
			return 14;
		case 1:
			return 1;
		case 4:
			return 22;
		case 13:
			return 23;
		case 14:
			return 24;
		case 15:
			return 25;
		case 16:
			return 28;
		default:
	}
	return 32;
}

int func_388(int iParam0)//Position - 0xCC169
{
	switch (iParam0)
	{
		case 4:
			return 5;
		case 3:
			return 3;
		case 5:
			return 6;
		case 6:
			return 8;
		case 7:
			return 11;
		case 9:
			return 17;
		case 10:
			return 10;
		case 12:
			return 18;
		case 13:
			return 19;
		case 14:
			return 20;
		case 15:
			return 21;
		case 16:
			return 22;
		default:
	}
	return 25;
}

int func_389(int iParam0)//Position - 0xCC254
{
	switch (iParam0)
	{
		case 6:
			return 6;
		case 14:
			return 13;
		case 15:
			return 15;
		case 25:
			return 21;
		default:
	}
	return 23;
}

int func_390(int iParam0)//Position - 0xCC2E8
{
	switch (iParam0)
	{
		case 0:
			return 38;
		default:
	}
	return 48;
}

int func_391(int iParam0)//Position - 0xCC372
{
	switch (iParam0)
	{
		case 3:
			return 10;
		case 29:
			return 37;
		case 11:
			return 14;
		case 18:
			return 1;
		case 22:
			return 31;
		case 7:
			return 30;
		case 23:
			return 28;
		case 24:
			return 32;
		case 17:
			return 25;
		case 25:
			return 33;
		case 5:
			return 13;
		case 13:
			return 15;
		case 15:
			return 17;
		case 42:
			return 46;
		case 19:
			return 26;
		case 20:
			return 27;
		case 26:
			return 34;
		case 30:
			return 38;
		case 34:
			return 42;
		case 37:
			return 43;
		case 40:
			return 45;
		case 43:
			return 47;
		case 44:
			return 48;
		case 4:
			return 12;
		case 10:
			return 11;
		case 36:
			return 39;
		case 32:
			return 39;
		case 45:
			return 0;
		case 6:
			return 4;
		case 9:
			return 3;
		case 35:
			return 7;
		case 47:
			return 19;
		default:
	}
	return 49;
}

int func_392(bool bParam0)//Position - 0xCC65B
{
	return Global_2678393.f_426[bParam0];
}

void func_393(int iParam0)//Position - 0xCCACA
{
	if (__LIB_1__::func_101(&(Global_2703735.f_169), iParam0))
	{
	}
}

void func_394(bool bParam0)//Position - 0xCCB53
{
	Global_2726836 = bParam0;
}

void func_395(bool bParam0)//Position - 0xCCB85
{
	if (Global_2815059.f_6731 != bParam0)
	{
		Global_2815059.f_6731 = bParam0;
	}
}

void func_396(bool bParam0)//Position - 0xCCC97
{
	if (!bParam0 == Global_2667225.f_45.f_317)
	{
		Global_2667225.f_45.f_317 = bParam0;
	}
}

void func_397(int iParam0)//Position - 0xCD2D2
{
	Global_77126 = iParam0;
}

int func_398(int iParam0)//Position - 0xCD6B2
{
	if (__LIB_13__::func_258(iParam0, 1))
	{
		return Global_1892703[__LIB_2__::func_191(iParam0) /*599*/].f_10.f_462;
	}
	return __LIB_0__::func_160();
}

int func_399()//Position - 0xCD6DD
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_582();
	if (iVar0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_264(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return BitTest(Global_1892703[iVar1 /*599*/].f_1, 16);
			}
		}
	}
	return 0;
}

int func_400(int iParam0)//Position - 0xCDE63
{
	if (__LIB_0__::func_292(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_193;
	}
	return -1;
}

int func_401(int iParam0)//Position - 0xD0676
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
		if (iVar0 != -1)
		{
			if (Global_2689235[iVar0 /*453*/].f_262)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_402(int iParam0)//Position - 0xD0FE2
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		VEHICLE::SET_BOAT_ANCHOR(iParam0, false);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam0, 1);
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
}

int func_403()//Position - 0xD2480
{
	switch (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
		case 24:
			return 1;
		default:
	}
	return 0;
}

int func_404(var uParam0)//Position - 0xD2C59
{
	return 262144;
}

struct<35> func_405(var uParam0)//Position - 0xD2D8F
{
	struct<35> Var0;
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_1 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 1;
	Var0.f_10 = 0;
	Var0.f_12 = 1;
	Var0.f_4 = 150f;
	Var0.f_0 = 0f;
	Var0.f_27 = 0;
	return Var0;
}

float func_406(var uParam0)//Position - 0xD2E6F
{
	return 40000f;
}

int func_407(var uParam0)//Position - 0xD2E7C
{
	return joaat("SCRIPT_TASK_WANDER_STANDARD");
}

void func_408(var uParam0, int iParam1)//Position - 0xD2E92
{
	WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("WEAPON_UNARMED"), true);
}

int func_409()//Position - 0xD2EA6
{
	return joaat("FIRING_PATTERN_FULL_AUTO");
}

void func_410(int iParam0)//Position - 0xD2FF1
{
	TASK::CLEAR_PED_TASKS(iParam0);
}

int func_411()//Position - 0xD3466
{
	return 600000;
}

int func_412()//Position - 0xD34C6
{
	return 1350;
}

void func_413(var uParam0)//Position - 0xD38B0
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_308 = uParam0;
}

void func_414()//Position - 0xD44F6
{
	if (__LIB_13__::func_319(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_485(25);
	}
}

void func_415(int iParam0)//Position - 0xD570C
{
	if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 != iParam0)
			{
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 = iParam0;
				if (iParam0 != __LIB_0__::func_160())
				{
				}
			}
		}
	}
}

int func_416()//Position - 0xD85AA
{
	return __LIB_13__::func_268(PLAYER::PLAYER_ID()) + 1;
}

bool func_417(int iParam0)//Position - 0xDABD
{
	return __LIB_9__::func_807(&(Global_2703735.f_169), iParam0);
}

int func_418(int iParam0)//Position - 0xE3BB
{
	if (!__LIB_0__::func_114() && func_303(iParam0))
	{
		return 1;
	}
	return 0;
}

struct<20> func_419(int iParam0)//Position - 0x21E8E
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	Var0 = 18;
	Var0.f_19 = 0;
	if (!__LIB_0__::func_581(iParam0))
	{
		return Var0;
	}
	if (__LIB_1__::func_264(iParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !__LIB_6__::func_489(Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

struct<16> func_420(var* uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x25336
{
	struct<16> Var0;
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

char* func_421(var uParam0, int iParam1)//Position - 0x255CA
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Bar_Resupply_1";
		case 1:
			return "Sum2_Bar_Resupply_2";
		case 2:
			return "Sum2_Bar_Resupply_3";
		case 3:
			return "Sum2_Bar_Resupply_4";
		case 4:
			return "Sum2_Bar_Resupply_5";
		case 5:
			return "Sum2_Bar_Resupply_6";
		case 6:
			return "Sum2_Bar_Resupply_7";
		case 7:
			return "Sum2_Bar_Resupply_8";
		case 8:
			return "Sum2_Bar_Resupply_9";
		case 9:
			return "Sum2_Bar_Resupply_10";
		default:
	}
	return "";
}

int func_422(int iParam0, int iParam1)//Position - 0x259A7
{
	switch (iParam0)
	{
		case 295:
			return 32386;
		case 291:
			return 32387;
		case 292:
			return 32388;
		case 300:
			return 32389;
		case 301:
			switch (iParam1)
			{
				case 0:
					return 32390;
				case 1:
					return 32391;
				default:
			}
			break;
		case 296:
			return 32392;
		case 298:
			return 32394;
	}
	return 32386;
}

int func_423(int iParam0, int iParam1)//Position - 0x25A96
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32782 /* Tunable: 1460115652 */;
		case 291:
			return Global_262145.f_32783 /* Tunable: -981598044 */;
		case 292:
			return Global_262145.f_32784 /* Tunable: -92642405 */;
		case 300:
			return Global_262145.f_32785 /* Tunable: -1469288825 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32786 /* Tunable: -1148025017 */;
				case 1:
					return Global_262145.f_32787 /* Tunable: 443149016 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32788 /* Tunable: -1187944715 */;
		case 298:
			return Global_262145.f_32790 /* Tunable: 868157221 */;
	}
	return 0;
}

float func_424(int iParam0, int iParam1)//Position - 0x25D34
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32792 /* Tunable: 273547061 */;
		case 291:
			return Global_262145.f_32794 /* Tunable: -1991988448 */;
		case 292:
			return Global_262145.f_32796 /* Tunable: 1140455130 */;
		case 300:
			return Global_262145.f_32798 /* Tunable: 1717358975 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32802 /* Tunable: -824837257 */;
				case 1:
					return Global_262145.f_32800 /* Tunable: 1414506846 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32804 /* Tunable: -720510129 */;
		case 298:
			return Global_262145.f_32808 /* Tunable: -1174773827 */;
	}
	return 1f;
}

float func_425(int iParam0, int iParam1)//Position - 0x25DEC
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32791 /* Tunable: 232629579 */;
		case 291:
			return Global_262145.f_32793 /* Tunable: -1506809663 */;
		case 292:
			return Global_262145.f_32795 /* Tunable: -289235831 */;
		case 300:
			return Global_262145.f_32797 /* Tunable: 683318740 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32801 /* Tunable: 906515743 */;
				case 1:
					return Global_262145.f_32799 /* Tunable: 932766885 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32803 /* Tunable: 1422426602 */;
		case 298:
			return Global_262145.f_32807 /* Tunable: 298190396 */;
	}
	return 1f;
}

char* func_426()//Position - 0x2601F
{
	return "MPSUM2_FAIL";
}

char* func_427()//Position - 0x2602B
{
	return "MPSUM2_MUSIC_STOP";
}

void func_428()//Position - 0xB59A1
{
	if (__LIB_0__::func_1(__LIB_13__::func_361()))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_429()//Position - 0xBC2D8
{
	Global_22622 = 0;
}

struct<6> func_430()//Position - 0xBC546
{
	struct<6> Var0;
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 != 0)
	{
		return Global_21224;
	}
	return Var0;
}

void func_431(int iParam0)//Position - 0xBCD4D
{
	__LIB_0__::func_168(iParam0, Global_20266, 1);
}

bool func_432()//Position - 0xBD160
{
	return Global_1966530;
}

void func_433(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xC0A4C
{
	*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(iParam1);
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	__LIB_6__::func_958(uParam0, iParam3);
	HUD::SET_BLIP_ROUTE(*uParam0, bParam6);
	HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, bParam7);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, true);
		HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(*uParam0, 0);
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
	}
	if (bParam8)
	{
		__LIB_13__::func_350(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		HUD::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

int func_434(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9A17
{
	if (Global_1853348[iParam3 /*834*/].f_267[6] != -1)
	{
		return __LIB_13__::func_314(Global_1853348[iParam3 /*834*/].f_267[6]);
	}
	return 0;
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9CA1
{
	int iVar0;
	bool bVar1;
	switch (iParam0)
	{
		case 5:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				return 804;
			}
			else
			{
				return 803;
			}
			break;
	}
	iVar0 = __LIB_5__::func_705(iParam3);
	bVar1 = iParam0 == 4;
	if (iVar0 != -1)
	{
		return __LIB_6__::func_392(iVar0, bVar1);
	}
	return 0;
}

void func_436(bool bParam0)//Position - 0xCA010
{
	if (bParam0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPSUM2/MPSUM2_Generic", false, -1);
	}
	else
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPSUM2/MPSUM2_Generic");
	}
}

void func_437(bool bParam0)//Position - 0xD396B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	}
	if (iVar0 != __LIB_0__::func_160())
	{
		if (bParam0)
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						Global_1952191.f_5365[iVar2] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						iVar2++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 18)
			{
				Global_1952191.f_5365[iVar1] = 0;
				iVar1++;
			}
		}
	}
}

void func_438()//Position - 0x2B8
{
	Local_219.f_22++;
	if (Local_219.f_22 >= Local_196.f_38)
	{
		Local_219.f_22 = 0;
	}
}

int func_439()//Position - 0x650
{
	if (Local_196.f_102 != -1)
	{
		return Local_196.f_102 * 60 * 1000;
	}
	return Local_196.f_102;
}

int func_440()//Position - 0x889
{
	return Local_196.f_19;
}

bool func_441(int iParam0, int iParam1)//Position - 0xB05
{
	return __LIB_0__::func_287(&(Local_196.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_442(int iParam0)//Position - 0xB4A
{
	if (Local_213.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_168);
		return StackVal;
	}
	return 0;
}

int func_443(int iParam0)//Position - 0xD6A
{
	if (Local_213.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_1);
		return StackVal;
	}
	return 0;
}

int func_444()//Position - 0x10C8
{
	Call_Loc(Local_213.f_64);
	return StackVal;
}

bool func_445(int iParam0)//Position - 0x1115
{
	return __LIB_0__::func_287(&(Local_196.f_16), iParam0);
}

struct<9> func_446(int iParam0)//Position - 0x2470
{
	struct<9> Var0;
	Var0 = 1;
	if (Local_213.f_453.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_453.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_196.f_120.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_196.f_120.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_196.f_120.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_196.f_120.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

struct<9> func_447(int iParam0)//Position - 0x2506
{
	return Local_196.f_120.f_1[iParam0 /*9*/];
}

var func_448(int iParam0)//Position - 0x2833
{
	return Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_449(int iParam0)//Position - 0x2B0F
{
	if (Local_213.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_175);
		return StackVal;
	}
	return 1;
}

bool func_450(int iParam0, int iParam1)//Position - 0x310A
{
	return __LIB_0__::func_287(&(Local_196.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_451(int iParam0)//Position - 0x3122
{
	struct<3> Var0;
	if (Local_213.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_196.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_452(int iParam0)//Position - 0x3166
{
	struct<3> Var0;
	if (Local_213.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_196.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_453(int iParam0)//Position - 0x31AA
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324))
	{
		return 0;
	}
	return 1;
}

int func_454(int iParam0)//Position - 0x31C1
{
	if (Local_213.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_23);
		return StackVal;
	}
	return 1;
}

int func_455(int iParam0)//Position - 0x3283
{
	if (Local_213.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_27);
		return StackVal;
	}
	return 0;
}

bool func_456(int iParam0, int iParam1)//Position - 0x35F5
{
	return __LIB_0__::func_287(&(Local_196.f_67.f_1[iParam0 /*15*/]), iParam1);
}

int func_457(int iParam0, int iParam1)//Position - 0x3D23
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 8;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 20;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (BitTest(Local_196.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

float func_458(int iParam0, int iParam1)//Position - 0x3F08
{
	if (Local_213.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		default:
	}
	return 0.2f;
}

void func_459(int iParam0, int iParam1)//Position - 0x3F68
{
	if (Local_196.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_196.f_67.f_1[iParam0 /*15*/].f_8, Local_196.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_196.f_67.f_1[iParam0 /*15*/].f_8, Local_196.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

void func_460(var uParam0)//Position - 0x127DF
{
	if (iLocal_344 < 5)
	{
		switch (iLocal_344)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_344 = 0;
	}
	iLocal_344++;
}

int func_461(int iParam0)//Position - 0x1FE44
{
	if (Local_213.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_23);
		return StackVal;
	}
	return 1;
}

int func_462()//Position - 0x1FFDC
{
	return Local_196.f_19.f_5[0 /*13*/].f_11;
}

struct<20> func_463(bool bParam0)//Position - 0x20483
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	Var0 = 18;
	Var0.f_19 = 0;
	if (!__LIB_0__::func_581(bParam0))
	{
		return Var0;
	}
	if (__LIB_1__::func_264(bParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == bParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !__LIB_6__::func_489(Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

bool func_464(int iParam0, int iParam1)//Position - 0x2144B
{
	return __LIB_0__::func_287(&(Local_196.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_465(int iParam0)//Position - 0x21463
{
	if (Local_213.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

bool func_466(var uParam0)//Position - 0x2161B
{
	struct<3> Var0;
	if (Local_213.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__::func_86(Var0);
}

int func_467(int iParam0)//Position - 0x21781
{
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_196.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_196.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_196.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_468(int iParam0)//Position - 0x21A57
{
	if (__LIB_1__::func_101(&uLocal_337, iParam0))
	{
	}
}

void func_469()//Position - 0x21A73
{
	int iVar0;
	int iVar1;
	if (Local_196.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_19)
		{
			if (-1 != Local_196.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_196.f_131 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_131)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_196.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_38)
		{
			if (-1 != Local_196.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_196.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (Local_196.f_38.f_23[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	if (Local_196.f_111 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_111)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(Local_196.f_143[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_196.f_85 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_85)
		{
			iVar0++;
		}
	}
	if (Local_196.f_120 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_120)
		{
			iVar0++;
		}
	}
	if (Local_196.f_67 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_67)
		{
			iVar0++;
		}
	}
}

int func_470()//Position - 0x21C8D
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_86(Local_196.f_143[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_471()//Position - 0x21CC1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (Local_196.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_196.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

int func_472()//Position - 0x22261
{
	if (Local_213.f_515.f_4 != 0)
	{
		Call_Loc(Local_213.f_515.f_4);
		return StackVal;
	}
	return 0;
}

int func_473()//Position - 0x22282
{
	if (Local_213.f_515.f_3 != 0)
	{
		Call_Loc(Local_213.f_515.f_3);
		return StackVal;
	}
	return 0;
}

void func_474(int iParam0, int iParam1)//Position - 0x22953
{
	if (iParam0 == 0)
	{
		VEHICLE::SET_VEHICLE_WEAPON_DAMAGE_SCALE(iParam1, 0.2f);
	}
}

void func_475(int iParam0)//Position - 0x22ACD
{
	if (__LIB_11__::func_631(&uLocal_337, iParam0))
	{
	}
}

int func_476()//Position - 0x22BB8
{
	return 62;
}

void func_477(int iParam0, int iParam1)//Position - 0x22C7C
{
	int iVar0;
	var uVar1;
	iVar0 = Local_217[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*20*/].f_19++;
}

void func_478(int iParam0, int iParam1)//Position - 0x22CB6
{
	Local_217[iParam0 /*20*/] = iParam1;
	iLocal_335++;
}

void func_479(int iParam0, int iParam1, int iParam2)//Position - 0x22CFC
{
	Local_218[iParam0 /*21*/] = iParam1;
	Local_218[iParam0 /*21*/].f_20 = iParam2;
	iLocal_336++;
}

void func_480(int iParam0, int iParam1)//Position - 0x22E18
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*21*/].f_19++;
}

void func_481(int iParam0, var uParam1, int iParam2)//Position - 0x22E52
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_218[iParam0 /*21*/].f_19++;
}

bool func_482(int iParam0)//Position - 0x24FAB
{
	return __LIB_0__::func_287(&uLocal_337, iParam0);
}

void func_483(bool bParam0)//Position - 0x2635F
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_160())
	{
		return;
	}
	if (!bParam0)
	{
		if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 13))
		{
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 13);
		}
	}
	else if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 13))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 13);
	}
}

void func_484()//Position - 0x266F0
{
	struct<106> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2789625 = { Var0 };
}

int func_485(int iParam0)//Position - 0x2BE87
{
	if (Local_213.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_29);
	}
	return 1;
}

void func_486(int iParam0)//Position - 0x2C581
{
	if (HUD::DOES_BLIP_EXIST(Local_290[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_290[iParam0 /*7*/]));
	}
}

int func_487(int iParam0)//Position - 0x2C78F
{
	if (Local_213.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_18);
		return StackVal;
	}
	return 0;
}

bool func_488(int iParam0)//Position - 0x2D97A
{
	if (Local_213.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_14);
		return StackVal;
	}
	return Local_196.f_19.f_1.f_3;
}

var func_489()//Position - 0x2DD4D
{
	return Local_196.f_19.f_1.f_2;
}

int func_490()//Position - 0x2DF79
{
	if (Local_213.f_64.f_11 != 0)
	{
		Call_Loc(Local_213.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_491()//Position - 0x2DF98
{
	if (Local_213.f_64.f_10 != 0)
	{
		Call_Loc(Local_213.f_64.f_10);
		return StackVal;
	}
	return 0;
}

float func_492(int iParam0)//Position - 0x2E475
{
	if (Local_213.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_493(int iParam0)//Position - 0x2E496
{
	if (Local_213.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_494(var uParam0)//Position - 0x2EAE1
{
	if (Local_213.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

bool func_495()//Position - 0x2F6A8
{
	return Local_317.f_0 != -1;
}

int func_496(struct<3> Param0)//Position - 0x999BE
{
	if (__LIB_5__::func_693(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_67(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_497(int iParam0)//Position - 0xA4790
{
	return Local_196.f_143[iParam0 /*8*/].f_5 != -1;
}

int func_498(int iParam0)//Position - 0xA47F1
{
	int iVar0;
	Stack.Push(Local_213.f_473.f_3 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_473.f_3);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	Stack.Push(Local_213.f_473.f_4 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_473.f_4);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_499(int iParam0)//Position - 0xA48BF
{
	if (Local_213.f_473.f_18.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_5);
		return StackVal;
	}
	return 12;
}

int func_500(int iParam0)//Position - 0xA4918
{
	if (Local_213.f_473 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473);
		return StackVal;
	}
	return 1;
}

void func_501(int iParam0)//Position - 0xA4937
{
	if (__LIB_11__::func_631(&(Local_317.f_7), iParam0))
	{
	}
}

int func_502()//Position - 0xA4972
{
	return Local_317.f_1;
}

void func_503(int iParam0)//Position - 0xA4A01
{
	if (__LIB_1__::func_101(&(Local_317.f_7), iParam0))
	{
	}
}

var func_504(int iParam0)//Position - 0xA4A54
{
	var uVar0;
	if (Local_213.f_473.f_13 != 0)
	{
		Stack.Push(Local_196.f_143[iParam0 /*8*/].f_4);
		Stack.Push(&uVar0);
		Call_Loc(Local_213.f_473.f_13);
		if (StackVal)
		{
			return uVar0;
		}
	}
	return Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/].f_3;
}

int func_505(struct<3> Param0)//Position - 0xA4A97
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	Var7 = { Param0 - Vector(0.75f, 0.75f, 0.75f) };
	Var8 = { Param0 + Vector(0.75f, 0.75f, 0.75f) };
	fVar9 = 0.5f;
	if (!bVar6)
	{
		iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var7, Var8, fVar9, 2, iLocal_326, 4);
		bVar6 = true;
	}
	if (bVar6)
	{
		iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar0, &iVar2, &uVar3, &uVar4, &uVar5);
	}
	if (iVar1 == 2)
	{
		if (iVar2 == 1)
		{
			bVar6 = false;
			return 0;
		}
	}
	return 1;
}

Vector3 func_506(int iParam0)//Position - 0xA4B2D
{
	struct<3> Var0;
	if (Local_213.f_473.f_12 != 0)
	{
		Stack.Push(Local_196.f_143[iParam0 /*8*/].f_4);
		Call_Loc(Local_213.f_473.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__::func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/];
}

bool func_507()//Position - 0xA4B7D
{
	return AUDIO::HAS_SOUND_FINISHED(Local_317.f_2);
}

bool func_508(int iParam0, int iParam1)//Position - 0xA4B8E
{
	return __LIB_0__::func_287(&(Local_196.f_143[iParam0 /*8*/].f_6), iParam1);
}

bool func_509(int iParam0)//Position - 0xA4C89
{
	return __LIB_0__::func_287(&(Local_317.f_7), iParam0);
}

int func_510()//Position - 0xA4C9C
{
	if (Local_213.f_473.f_8 != 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

int func_511()//Position - 0xA4DF5
{
	return Local_317.f_0;
}

int func_512(int iParam0)//Position - 0xA4F49
{
	if (Local_213.f_473.f_18.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_7);
		return StackVal;
	}
	return 9;
}

int func_513(int iParam0)//Position - 0xA5017
{
	if (Local_213.f_473.f_18.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_14);
		return StackVal;
	}
	return 1;
}

int func_514(int iParam0)//Position - 0xA503E
{
	if (Local_213.f_473.f_18.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_16);
		return StackVal;
	}
	return 0;
}

float func_515(int iParam0)//Position - 0xA5065
{
	if (Local_213.f_473.f_18.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_6);
		return StackVal;
	}
	return 1f;
}

int func_516(int iParam0)//Position - 0xA50C7
{
	if (Local_213.f_473.f_18.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_4);
		return StackVal;
	}
	return -1;
}

int func_517(int iParam0)//Position - 0xA5191
{
	if ((!__LIB_0__::func_86(Local_196.f_143[iParam0 /*8*/]) && Local_196.f_143[iParam0 /*8*/].f_4 != -1) && !__LIB_0__::func_86(Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

void func_518()//Position - 0xA574F
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	if (iLocal_331 != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	}
}

void func_519()//Position - 0xA5946
{
	int iVar0;
	if (bLocal_321)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_326, &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_326, joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_520()//Position - 0xAEEE6
{
	if (Local_213.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_521()//Position - 0xAEF09
{
	if (Local_213.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_522()//Position - 0xAF1C7
{
	if (Local_213.f_15.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_523()//Position - 0xAF2AF
{
	if (Local_213.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_524()//Position - 0xAF3BE
{
	if (Local_213.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_525()//Position - 0xAF63A
{
	if (Local_213.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_526()//Position - 0xAF739
{
	if (Local_213.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_527()//Position - 0xAF75E
{
	if (Local_213.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_528()//Position - 0xAF781
{
	if (Local_213.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

float func_529()//Position - 0xAF7A8
{
	if (Local_213.f_15.f_6.f_3 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_3);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_326) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

int func_530()//Position - 0xAF7DF
{
	if (Local_213.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_531()//Position - 0xAF802
{
	if (Local_213.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_532()//Position - 0xAF825
{
	if (Local_213.f_15.f_6 != 0)
	{
		Call_Loc(Local_213.f_15.f_6);
		return StackVal;
	}
	return 0;
}

bool func_533(float fParam0)//Position - 0xB2025
{
	struct<3> Var0;
	Call_Loc(Local_213.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_329, Var0) <= (fParam0 * fParam0);
}

void func_534(int iParam0, int* iParam1)//Position - 0xB5946
{
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 0);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 1);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 2);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 3);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") != -1)
	{
		MISC::SET_BIT(iParam1, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 4);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") != -1)
	{
		MISC::SET_BIT(iParam1, 5);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 5);
	}
	if (((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		MISC::SET_BIT(iParam1, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 8);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible"))
	{
		*iParam1 = 0;
	}
}

int func_535()//Position - 0xB5ABA
{
	if (Local_213.f_515.f_2 != 0)
	{
		Call_Loc(Local_213.f_515.f_2);
		return StackVal;
	}
	return 28;
}

int func_536()//Position - 0xB5AE9
{
	if (Local_213.f_515.f_1 == 0)
	{
		return 0;
	}
	if (Local_213.f_515 != 0)
	{
		Call_Loc(Local_213.f_515);
		return StackVal;
	}
	return 0;
}

int func_537()//Position - 0xB61FB
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_326);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			NETWORK::NETWORK_EXPLODE_HELI(iVar0, true, false, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
			return 1;
		}
	}
	return 0;
}

bool func_538()//Position - 0xB6CA9
{
	Call_Loc(Local_213.f_47);
	return StackVal;
}

void func_539(int iParam0)//Position - 0xB6DAE
{
	if (!__LIB_2__::func_319(&uLocal_311, iParam0))
	{
		__LIB_4__::func_745(&uLocal_311, iParam0);
	}
}

int func_540(int iParam0)//Position - 0xB6DCC
{
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_456.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_213.f_456 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456.f_5);
				__LIB_0__::func_151(StackVal, StackVal);
				return 1;
			}
			break;
		case 3:
			if (Local_213.f_456.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456.f_4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_541(int iParam0)//Position - 0xB6E38
{
	return __LIB_2__::func_319(&uLocal_311, iParam0);
}

char* func_542()//Position - 0xB7339
{
	return "TCD_HUD_VAL" /* GXT: PAYMENT */;
}

int func_543()//Position - 0xB78FC
{
	if (Local_213.f_82.f_2 != 0)
	{
		Call_Loc(Local_213.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

int func_544()//Position - 0xB79CD
{
	if (Local_213.f_526.f_1 != 0)
	{
		Call_Loc(Local_213.f_526.f_1);
		return StackVal;
	}
	return 0;
}

float func_545()//Position - 0xB7A05
{
	if (Local_213.f_526.f_2 != 0)
	{
		Call_Loc(Local_213.f_526.f_2);
		return StackVal;
	}
	return 60f;
}

int func_546()//Position - 0xB7A2A
{
	if (bLocal_321 && !PED::IS_PED_IN_ANY_PLANE(iLocal_326))
	{
		if (Local_213.f_526 != 0)
		{
			Call_Loc(Local_213.f_526);
			return StackVal;
		}
	}
	return 0;
}

int func_547()//Position - 0xB8194
{
	if (Local_213.f_64.f_4 != 0)
	{
		Call_Loc(Local_213.f_64.f_4);
		return StackVal;
	}
	return 1;
}

int func_548()//Position - 0xB821E
{
	if (Local_213.f_64.f_9 != 0)
	{
		Call_Loc(Local_213.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_549()//Position - 0xB823D
{
	if (Local_213.f_64.f_7 != 0)
	{
		Call_Loc(Local_213.f_64.f_7);
		return StackVal;
	}
	return 0;
}

void func_550()//Position - 0xB8475
{
	Local_304.f_0 = 0;
	Local_304.f_2 = 0;
	Local_304.f_1 = 0;
	__LIB_0__::func_579(&(Local_304.f_3));
}

float func_551()//Position - 0xB8873
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

void func_552(int iParam0)//Position - 0xB8B04
{
	if (HUD::DOES_BLIP_EXIST(Local_310.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_310.f_1[iParam0 /*4*/].f_1));
	}
}

int func_553(int iParam0)//Position - 0xB9327
{
	if (Local_213.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_554(int iParam0, float fParam1, bool bParam2)//Position - 0xB9350
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_329) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			if (bLocal_321)
			{
				return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam0, 287);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_555(int iParam0)//Position - 0xB9393
{
	if (Local_213.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_556(int iParam0)//Position - 0xB93BC
{
	if (Local_213.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

int func_557(int iParam0)//Position - 0xB9404
{
	if (Local_213.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

int func_558(int iParam0, float fParam1)//Position - 0xB94ED
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(bLocal_324, iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(bLocal_324, iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Local_329, Var0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_559()//Position - 0xB9637
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_326, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

int func_560(var uParam0)//Position - 0xB96B5
{
	if (Local_213.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_184);
		return StackVal;
	}
	return 287;
}

int func_561(int iParam0)//Position - 0xB982F
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_14;
}

int func_562(int iParam0)//Position - 0xB9843
{
	return Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

float func_563(int iParam0, var uParam1)//Position - 0xB9B21
{
	switch (iParam0)
	{
		case 1:
			if (Local_213.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_213.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_213.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_564(int iParam0, var uParam1)//Position - 0xB9B9C
{
	switch (iParam0)
	{
		case 0:
			if (Local_213.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_565(int iParam0)//Position - 0xB9BD1
{
	if (Local_213.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

bool func_566(int iParam0, int iParam1)//Position - 0xB9D77
{
	return __LIB_0__::func_287(&(Local_219[iParam0 /*19*/]), iParam1);
}

void func_567()//Position - 0xB9D8C
{
	Local_301.f_0++;
}

int func_568(int iParam0)//Position - 0xBA0E8
{
	if (Local_213.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_569(int iParam0)//Position - 0xBA116
{
	if (Local_213.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_570(int iParam0)//Position - 0xBA1C5
{
	if (Local_213.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

int func_571(int iParam0)//Position - 0xBA2B7
{
	if (Local_213.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

void func_572(int iParam0, int iParam1)//Position - 0xBA823
{
	if (__LIB_11__::func_631(&(Local_219[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_573(int iParam0, int iParam1)//Position - 0xBA83B
{
	if (__LIB_1__::func_101(&(Local_219[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_574()//Position - 0xBA853
{
	if (Local_213.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_213.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

int func_575(int iParam0)//Position - 0xBA996
{
	if (Local_213.f_407.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_28);
		return StackVal;
	}
	return 0;
}

float func_576(var uParam0)//Position - 0xBA9DF
{
	if (Local_213.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_577(var uParam0)//Position - 0xBAA06
{
	if (Local_213.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_578(var uParam0)//Position - 0xBAA2A
{
	if (Local_213.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_40);
		return StackVal;
	}
	return 0;
}

int func_579(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xBAC8A
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_329) > (fParam1 * fParam1))
	{
		return 0;
	}
	if (iParam2 && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam0, 287))
	{
		return 0;
	}
	if (iParam3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_580(int iParam0)//Position - 0xBACE0
{
	if (Local_213.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_581(int iParam0)//Position - 0xBAD03
{
	if (Local_213.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_582(int iParam0)//Position - 0xBAD26
{
	if (Local_213.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

int func_583(int iParam0)//Position - 0xBAEDC
{
	if (Local_213.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_9);
		return StackVal;
	}
	return 0;
}

int func_584(int iParam0)//Position - 0xBAF43
{
	if (Local_213.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_585(int iParam0)//Position - 0xBB11D
{
	if (Local_213.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_586(int iParam0)//Position - 0xBB144
{
	if (Local_213.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

void func_587(int iParam0, int iParam1)//Position - 0xBB5B3
{
	if (Local_213.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_352.f_49);
	}
}

float func_588(int iParam0)//Position - 0xBB630
{
	if (Local_213.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

Vector3 func_589(int iParam0)//Position - 0xBBC80
{
	if (Local_213.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_590(int iParam0)//Position - 0xBBCA9
{
	if (Local_213.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

int func_591(int iParam0)//Position - 0xBC14E
{
	if (Local_213.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_7);
		return StackVal;
	}
	return 12;
}

int func_592(int iParam0)//Position - 0xBC1B7
{
	if (Local_213.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_593(int iParam0)//Position - 0xBC1DA
{
	if (Local_213.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_16);
		return StackVal;
	}
	return 0;
}

bool func_594(int iParam0)//Position - 0xBC37A
{
	return Local_290[iParam0 /*7*/].f_4 != __LIB_0__::func_160();
}

int func_595()//Position - 0xBD1B5
{
	if (Local_213.f_92.f_1 != 0)
	{
		Call_Loc(Local_213.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_596(int iParam0)//Position - 0xBD1D4
{
	if (Local_213.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_92);
		return StackVal;
	}
	return 1;
}

char* func_597(var uParam0, var uParam1)//Position - 0xBD66E
{
	if (Local_213.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_213.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_598(var uParam0, var uParam1)//Position - 0xBD696
{
	if (Local_213.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_213.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

int func_599()//Position - 0xBF5D6
{
	if (Local_213.f_114.f_41 != 0)
	{
		Call_Loc(Local_213.f_114.f_41);
		return StackVal;
	}
	return 1;
}

void func_600()//Position - 0xC25A0
{
	if (Local_301.f_0 > Local_301.f_1)
	{
		Local_301.f_1 = Local_301.f_0;
	}
	Local_301.f_0 = 0;
}

float func_601(int iParam0)//Position - 0xC335D
{
	if (Local_213.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

int func_602(int iParam0, bool bParam1, bool bParam2)//Position - 0xC33E0
{
	if (!bParam1)
	{
		return 0;
	}
	if (iParam0 == bLocal_324)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

int func_603()//Position - 0xC366C
{
	int iVar0;
	if (Local_213.f_456 == 0)
	{
		return 0;
	}
	Stack.Push(iVar0);
	Call_Loc(Local_213.f_456);
	while (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		iVar0++;
	}
	return iVar0;
}

char* func_604(int iParam0, int iParam1)//Position - 0xC4D38
{
	int iVar0;
	iVar0 = Local_196.f_131.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

bool func_605(int iParam0, var uParam1)//Position - 0xC4F20
{
	return (Local_196.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_196.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

void func_606(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC514D
{
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_10 = iParam2;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_11 = iParam3;
}

Vector3 func_607(int iParam0, int iParam1)//Position - 0xC5214
{
	if (Local_213.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_608(int iParam0)//Position - 0xC537B
{
	if (Local_213.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_609(int iParam0)//Position - 0xC53A4
{
	if (Local_213.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_610(int iParam0)//Position - 0xC53CD
{
	if (Local_213.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_611(int iParam0)//Position - 0xC5476
{
	if (Local_213.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

float func_612(int iParam0, int iParam1)//Position - 0xC5548
{
	if (Local_213.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_613(int iParam0, int iParam1)//Position - 0xC5573
{
	if (Local_213.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

float func_614(int iParam0, int iParam1)//Position - 0xC58D4
{
	if (Local_213.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_4);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 1f;
		case 4:
			return 10f;
		default:
	}
	return 1f;
}

int func_615(int iParam0, int iParam1)//Position - 0xC591E
{
	if (Local_213.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_3);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 786469;
		case 4:
			return 262144;
		default:
	}
	return 786469;
}

int func_616(int iParam0, int iParam1)//Position - 0xC596D
{
	if (Local_213.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_617(int iParam0, int iParam1)//Position - 0xC5999
{
	if (Local_213.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_5);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 5f;
		case 4:
			return 0.1f;
		default:
	}
	return 10f;
}

float func_618(int iParam0, int iParam1)//Position - 0xC59E7
{
	if (Local_213.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_6);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 30f;
		case 4:
			return 30f;
		default:
	}
	return 30f;
}

int func_619(int iParam0)//Position - 0xC5B20
{
	if (Local_213.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_620(int iParam0)//Position - 0xC5B49
{
	if (Local_213.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_621(int iParam0)//Position - 0xC5B72
{
	if (Local_213.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_622(int iParam0, int iParam1)//Position - 0xC5B9F
{
	struct<3> Var0;
	float fVar1;
	if (Local_213.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102);
		return StackVal, StackVal, StackVal;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
	{
		fVar1 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1);
	}
	Var0.f_2 = fVar1;
	return Var0;
}

Vector3 func_623(int iParam0)//Position - 0xC5EEF
{
	struct<3> Var0;
	Var0 = { Local_196.f_67.f_1[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			Var0 = { Var0 + Vector(0f, 0f, 1000f) };
			break;
		case 1:
			Var0 = { Var0 - Vector(0f, 0f, 1000f) };
			break;
		case 2:
			Var0 = { Var0 + Vector(0f, 1000f, 0f) };
			break;
		case 3:
			Var0 = { Var0 - Vector(0f, 1000f, 0f) };
			break;
	}
	return Var0;
}

int func_624(int iParam0)//Position - 0xC6006
{
	if (Local_213.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_625(int iParam0)//Position - 0xC6063
{
	if (Local_213.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_626(int iParam0, var uParam1)//Position - 0xC6090
{
	if (Local_213.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

void func_627(var uParam0, int iParam1)//Position - 0xC61EC
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 177099551;
	Var0.f_1 = bLocal_324;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = Local_334.f_0;
	Var0.f_6 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	iVar1 = __LIB_4__::func_511(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

float func_628(int iParam0)//Position - 0xC623F
{
	if (Local_213.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_629(int iParam0)//Position - 0xC626C
{
	if (Local_213.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_630(int iParam0)//Position - 0xC6296
{
	if (Local_213.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_631(int iParam0)//Position - 0xC62BF
{
	if (Local_213.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

float func_632(int iParam0)//Position - 0xC637A
{
	if (Local_213.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

float func_633(var uParam0)//Position - 0xC65D6
{
	if (Local_213.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

int func_634(int iParam0)//Position - 0xC6779
{
	if (Local_213.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_635(int iParam0)//Position - 0xC67A5
{
	if (Local_213.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_636(int iParam0)//Position - 0xC67CF
{
	if (Local_213.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_637(int iParam0, bool bParam1)//Position - 0xC67FC
{
	if (Local_213.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

int func_638(int iParam0)//Position - 0xC68C9
{
	if (Local_213.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_639(int iParam0)//Position - 0xC68F4
{
	if (Local_213.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_640(int iParam0)//Position - 0xC69E3
{
	if (Local_213.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_641(int iParam0)//Position - 0xC6A0C
{
	if (Local_213.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

void func_642(int iParam0, int iParam1)//Position - 0xC6A6F
{
	if (Local_213.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

int func_643(int iParam0)//Position - 0xC6B1E
{
	if (Local_213.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_644(int iParam0)//Position - 0xC6B47
{
	if (Local_213.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_645(int iParam0)//Position - 0xC6B70
{
	if (Local_213.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_646(int iParam0)//Position - 0xC6B99
{
	if (Local_213.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

Vector3 func_647(int iParam0, int iParam1)//Position - 0xC6D3F
{
	return Local_196.f_131.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

int func_648(int iParam0, var uParam1)//Position - 0xC6E36
{
	if (Local_213.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_649(int iParam0)//Position - 0xC6E61
{
	if (Local_213.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_650(int iParam0)//Position - 0xC6E8A
{
	if (Local_213.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

struct<4> func_651(int iParam0)//Position - 0xC6EB3
{
	if (Local_213.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_316[iParam0 /*4*/];
}

int func_652(int iParam0)//Position - 0xC6EE0
{
	if (Local_213.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

int func_653(int iParam0)//Position - 0xC6F09
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_131)
	{
		if (Local_196.f_131.f_1[iVar0 /*10*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_654(int iParam0)//Position - 0xC6F72
{
	if (Local_213.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_178);
	return StackVal;
}

float func_655(int iParam0)//Position - 0xC7096
{
	if (Local_213.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_656()//Position - 0xC70BF
{
	if (Local_213.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_657(int iParam0)//Position - 0xC70E8
{
	if (Local_213.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_658(int iParam0)//Position - 0xC711A
{
	if (Local_213.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

int func_659(int iParam0)//Position - 0xC71EF
{
	if (Local_213.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

int func_660(var uParam0, var uParam1)//Position - 0xC73C1
{
	if (Local_213.f_156.f_2.f_54 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_54);
		*uParam1 = StackVal;
		return 1;
	}
	return 0;
}

int func_661(int iParam0)//Position - 0xC757C
{
	if (Local_213.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

float func_662(int iParam0)//Position - 0xC75FA
{
	if (Local_213.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_663(int iParam0, var uParam1)//Position - 0xC7627
{
	if (Local_213.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

int func_664(int iParam0)//Position - 0xC7BC9
{
	if (Local_213.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_665(int iParam0)//Position - 0xC7BF2
{
	if (Local_213.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_666(int iParam0)//Position - 0xC7C1B
{
	if (Local_213.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_667(int iParam0)//Position - 0xC7C44
{
	if (Local_213.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_668(int iParam0)//Position - 0xC7C6E
{
	if (Local_213.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_669(int iParam0)//Position - 0xC7C9A
{
	if (Local_213.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_670(int iParam0)//Position - 0xC7CC3
{
	if (Local_213.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_671(int iParam0)//Position - 0xC7D2E
{
	if (Local_213.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_672(int iParam0)//Position - 0xC7D75
{
	if (Local_213.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_673(int iParam0)//Position - 0xC7D9E
{
	if (Local_213.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_674(int iParam0)//Position - 0xC7DCB
{
	if (Local_213.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_675()//Position - 0xC7DF4
{
	if (Local_213.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_676()//Position - 0xC7E1C
{
	if (Local_213.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_677(int iParam0)//Position - 0xC7E47
{
	if (Local_213.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_678(int iParam0)//Position - 0xC7E70
{
	if (Local_213.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_679()//Position - 0xC7E9D
{
	if (Local_213.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_680(var uParam0)//Position - 0xC7F13
{
	if (Local_213.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

int func_681(int iParam0)//Position - 0xC8218
{
	if (Local_213.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_682(int iParam0)//Position - 0xC8241
{
	if (Local_213.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

int func_683(int iParam0)//Position - 0xC85B8
{
	if (Local_213.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_684(var uParam0, char* sParam1)//Position - 0xC85DD
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_685(int iParam0, int iParam1)//Position - 0xC87DE
{
	Local_218[iParam0 /*21*/].f_17 = iParam1;
}

void func_686(int iParam0, int iParam1)//Position - 0xC8851
{
	Local_218[iParam0 /*21*/].f_18 = iParam1;
}

void func_687(int iParam0, int iParam1)//Position - 0xC8DE2
{
	Local_217[iParam0 /*20*/].f_17 = iParam1;
}

void func_688(int iParam0, int iParam1)//Position - 0xC8EA7
{
	Local_217[iParam0 /*20*/].f_18 = iParam1;
}

bool func_689()//Position - 0xC9014
{
	return (Local_301.f_0 == 0 && Local_301.f_1 > 0);
}

int func_690()//Position - 0xC989B
{
	if (iLocal_331 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iLocal_331))
	{
		return 0;
	}
	return 1;
}

bool func_691(var uParam0, struct<3> Param1)//Position - 0xC9A5D
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_326, Param1, 1f, 1f, 2f, false, true, 0);
}

void func_692(var uParam0, int iParam1)//Position - 0xC9BBE
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

var func_693(int iParam0)//Position - 0xC9D2C
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_694(int iParam0)//Position - 0xC9D49
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_695(var uParam0)//Position - 0xC9D66
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_178);
	return StackVal;
}

Vector3 func_696(var uParam0)//Position - 0xC9D78
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_697(int iParam0, int iParam1)//Position - 0xC9E78
{
	Local_219[iParam0 /*19*/].f_10[Local_219[iParam0 /*19*/].f_16] = iParam1;
	Local_219[iParam0 /*19*/].f_16++;
}

void func_698(int iParam0, int iParam1, int iParam2)//Position - 0xC9F95
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_699(int iParam0, int iParam1, int iParam2)//Position - 0xC9FEF
{
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/] = iParam2;
	Local_219.f_23[iParam0 /*67*/]++;
}

var func_700(int iParam0)//Position - 0xCA01C
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_701(int iParam0)//Position - 0xCA030
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_702(int iParam0)//Position - 0xCA04F
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_703(int iParam0)//Position - 0xCA0DF
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_2;
}

int func_704()//Position - 0xCA152
{
	return joaat("XPCATEGORY_FM_CONTENT");
}

var func_705()//Position - 0xCA1B3
{
	return Local_196.f_99;
}

void func_706(int iParam0, int iParam1, int iParam2)//Position - 0xCA275
{
	int iVar0;
	var uVar1;
	iVar0 = Local_217[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_217[iParam0 /*20*/].f_19++;
}

void func_707()//Position - 0xCDB0D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_120)
	{
		__LIB_6__::func_352(&(uLocal_315[iVar0]));
		iVar0++;
	}
}

void func_708()//Position - 0xCDB79
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_131)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_316[iVar0 /*4*/])))
		{
			TASK::DELETE_PATROL_ROUTE(&(Local_316[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_709()//Position - 0xCDBB0
{
	Stack.Push(iLocal_326);
	Call_Loc(Local_213.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

void func_710(int iParam0, int iParam1)//Position - 0xD1312
{
	Local_334.f_0 = iParam0;
	Local_334.f_1 = iParam1;
}

void func_711()//Position - 0xD224E
{
	int iVar0;
	iLocal_330 = iVar0;
	iLocal_331 = 0;
}

int func_712()//Position - 0x23E88
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

char* func_713(int iParam0, int iParam1)//Position - 0x25ED7
{
	switch (iParam1)
	{
		case 1:
			return "BB_FactoryRaid_1";
			break;
		case 2:
			return "BB_FactoryRaid_2";
			break;
		case 3:
			return "BB_FactoryRaid_3";
			break;
		case 0:
			return "BB_AircraftCarrier";
			break;
		case 4:
			return "BB_CapturedUFO";
			break;
	}
	return "";
}

var func_714()//Position - 0x27560
{
	return Global_262145.f_24568 /* Tunable: 265126011 */;
}

int func_715(int iParam0)//Position - 0x2A1D8
{
	if (iParam0 == 2)
	{
		return 0;
	}
	return 1;
}

int func_716(int iParam0)//Position - 0x4C924
{
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return joaat("WEAPON_RAYPISTOL");
		default:
	}
	return 0;
}

bool func_717(int iParam0)//Position - 0x4CC81
{
	return (iParam0 >= 694 && iParam0 <= 703);
}

int func_718()//Position - 0x506BD
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 3042.596f, -4667.9146f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.9146f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_719()//Position - 0x5075E
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.10364f, 14.99213f };
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_720()//Position - 0x50814
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f) };
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_721(var uParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x54AE3
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, sParam1, iParam2, sParam3, bParam4, iParam5);
		return 1;
	}
	return 0;
}

Vector3 func_722(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x56EC7
{
	if (bParam2)
	{
		return Param0 + Vector(fParam1, fParam1, fParam1);
	}
	return Param0 - Vector(fParam1, fParam1, fParam1);
}

float func_723()//Position - 0x573D6
{
	return Global_262145.f_25363 /* Tunable: BB_BUSINESS_BATTLE_EVENT_CARGO_WEIGHTING */;
}

void func_724(var uParam0, struct<3> Param1, int iParam2)//Position - 0xBA00A
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1868))
	{
		if (!Global_2678393.f_1868 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	else
	{
		Global_2678393.f_1868 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_6 = uParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_7 = { Param1 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_10 = iParam2;
}

int func_725(bool bParam0)//Position - 0xC4522
{
	if ((((((((__LIB_4__::func_854(bParam0) || __LIB_4__::func_853(bParam0)) || __LIB_4__::func_852(bParam0)) || __LIB_4__::func_851(bParam0)) || __LIB_4__::func_850(bParam0)) || __LIB_4__::func_849(bParam0)) || __LIB_4__::func_848(bParam0)) || __LIB_4__::func_847(bParam0)) || __LIB_4__::func_846(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_726()//Position - 0xC4728
{
	if ((((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !HUD::IS_HUD_HIDDEN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_727(int iParam0)//Position - 0xC498F
{
	return Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_4241[iParam0 /*3*/];
}

float func_728()//Position - 0xC56BE
{
	if (!Global_262145.f_32987 /* Tunable: -1195993490 */ || __LIB_0__::func_137(32395, -1))
	{
		return 1f;
	}
	return Global_262145.f_32989 /* Tunable: 1215340565 */;
}

int func_729(int iParam0)//Position - 0xC56F0
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_24591 /* Tunable: 262012663 */;
		case 1:
			return Global_262145.f_24597 /* Tunable: -72645845 */;
		case 2:
			return Global_262145.f_24592 /* Tunable: 1530377906 */;
		case 3:
			return Global_262145.f_24593 /* Tunable: -2041453249 */;
		case 4:
			return Global_262145.f_24594 /* Tunable: 1472626925 */;
		case 5:
			return Global_262145.f_24595 /* Tunable: 844283197 */;
		case 6:
			return Global_262145.f_24596 /* Tunable: 899953586 */;
		default:
	}
	return 1;
}

int func_730(int iParam0, bool bParam1)//Position - 0xC58BB
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			iVar0 = 20;
			break;
		case 3:
			iVar0 = 100;
			break;
		case 4:
			iVar0 = 100;
			break;
		case 5:
			iVar0 = 100;
			break;
		case 6:
			iVar0 = 100;
			break;
	}
	if (bParam1)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * 0.5f));
	}
	return iVar0;
}

void func_731(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xDA8D2
{
	int iVar0;
	bool bVar1;
	if (!iParam1 == 0 && !STREAMING::IS_MODEL_IN_CDIMAGE(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2667225.f_45.f_65 = bParam0;
	Global_2667225.f_45.f_67 = iParam1;
	Global_2667225.f_45.f_68 = bParam2;
	Global_2667225.f_45.f_175 = iParam3;
	Global_2667225.f_45.f_66 = iParam4;
	Global_2667225.f_45.f_177 = bParam5;
	Global_2667225.f_45.f_178 = bParam7;
	Global_2667225.f_45.f_183 = iParam6;
	Global_2667225.f_45.f_179 = iParam8;
	Global_2667225.f_45.f_180 = iParam9;
	Global_2667225.f_45.f_181 = bParam10;
	Global_2667225.f_45.f_182 = iParam11;
	if (!bParam0)
	{
		__LIB_1__::func_953();
	}
	if (bParam2)
	{
		iVar0 = __LIB_1__::func_232();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
					bVar1 = true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(iVar0));
					}
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (bVar1)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
				if (bParam5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam6, iParam6);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					__LIB_1__::func_930(iVar0);
				}
			}
		}
	}
}

void func_732(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0xDCBD7
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(0, iVar0);
		Global_1649593.f_1177[iVar0] = uParam0;
		Global_1649593.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = uParam3;
		Global_1649593.f_1177.f_183[iVar0] = uParam4;
		Global_1649593.f_1177.f_216[iVar0] = uParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_733(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xDCE9C
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = uParam3;
		Global_1649593.f_3347.f_216[iVar0] = uParam5;
		Global_1649593.f_3347.f_194[iVar0] = uParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

int func_734(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0xE5153
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_735(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0xE51D4
{
	*fParam1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

float func_736(float fParam0, float fParam1, int iParam2)//Position - 0xE96C8
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

float func_737(float fParam0)//Position - 0xEA86F
{
	return (1.778f / fParam0);
}

void func_738(struct<3> Param0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xEC37D
{
	GRAPHICS::DRAW_MARKER(2, Param0, 0f, 0f, 0f, 180f, 0f, 0f, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

int func_739(int iParam0)//Position - 0xED1CB
{
	return 615;
}

void func_740(int iParam0)//Position - 0xF76A4
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_474 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_474 = iParam0;
	}
}

float func_741(var uParam0)//Position - 0xFD373
{
	return 1.25f;
}

int func_742(int iParam0)//Position - 0x2DD7
{
	switch (iParam0)
	{
		case 3:
			return 16;
		case 1:
			return 10;
		case 2:
			return 34;
		case 0:
			return 36;
		case 4:
			return 42;
		case 14:
			return 14;
		case 24:
			return 9;
		case 25:
			return 1;
		case 45:
			return 0;
		case 35:
			return 17;
		case 37:
			return 24;
		case 49:
			return 25;
		case 50:
			return 6;
		default:
	}
	return -1;
}

void func_743(int* iParam0)//Position - 0x4498
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		MISC::SET_BIT(iParam0, iVar0);
		iVar0++;
	}
}

int func_744(int iParam0)//Position - 0x220FA
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (iVar1 != __LIB_0__::func_160() && __LIB_0__::func_154(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return __LIB_0__::func_160();
}

char* func_745(int iParam0, int iParam1)//Position - 0x26EAD
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Auto_Shop_1";
		case 1:
			return "Sum2_Auto_Shop_2";
		case 2:
			return "Sum2_Auto_Shop_3";
		case 3:
			return "Sum2_Underwater_Cargo_1";
		case 4:
			return "Sum2_Underwater_Cargo_2";
		case 5:
			return "Sum2_Underwater_Cargo_3";
		default:
	}
	return "";
}

int func_746(int iParam0)//Position - 0x283D2
{
	if (!iParam0 == __LIB_0__::func_160())
	{
		if (__LIB_13__::func_258(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_0__::func_603(iParam0)];
		}
	}
	return -1;
}

int func_747(int iParam0, int iParam1)//Position - 0x30311
{
	int iVar0;
	if (__LIB_2__::func_141(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/])
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_748(int iParam0)//Position - 0x3165D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1945958[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_749(int iParam0)//Position - 0x31947
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 6)
	{
		if (__LIB_9__::func_857(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_750(int iParam0, int iParam1)//Position - 0x32439
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_751(var uParam0, var uParam1, bool bParam2)//Position - 0x32556
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return -1958;
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				default:
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				default:
			}
			break;
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						default:
					}
					break;
			}
			break;
		case 5:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						default:
					}
					break;
			}
			break;
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				default:
			}
			break;
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						default:
					}
					break;
			}
			break;
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						default:
					}
					break;
			}
			break;
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						default:
					}
					break;
			}
			break;
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				default:
			}
			break;
	}
	return 0;
}

int func_752(int iParam0, int iParam1)//Position - 0x32A09
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			break;
	}
	return -1;
}

int func_753(int iParam0)//Position - 0x32AD7
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		default:
	}
	return 0;
}

int func_754(int iParam0)//Position - 0x32B0F
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		case 2:
			return joaat("ex_prop_crate_med_sc");
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		case 4:
			return joaat("ex_prop_crate_art_sc");
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		case 13:
			return joaat("ex_prop_crate_med_bc");
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		case 15:
			return joaat("ex_prop_crate_art_bc");
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		case 23:
			return joaat("ex_prop_crate_oegg");
		case 24:
			return joaat("ex_prop_crate_minig");
		case 25:
			return joaat("ex_prop_crate_xldiam");
		case 26:
			return joaat("ex_prop_crate_shide");
		case 27:
			return joaat("ex_prop_crate_freel");
		case 28:
			return joaat("ex_prop_crate_watch");
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		case 43:
			return joaat("ex_prop_crate_money_sc");
		case 44:
			return joaat("ex_prop_crate_money_bc");
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		case 46:
			return -1958;
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		default:
	}
	return 0;
}

int func_755(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32DD4
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			iParam1 += 111;
			break;
		case 2:
			iParam1 += 222;
			break;
		case 3:
			iParam1 += 333;
			break;
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = __LIB_0__::func_5();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (0 != iVar3)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar3, &iVar0, iVar4, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_756(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x32E8B
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			iParam1 += 111;
			break;
		case 2:
			iParam1 += 222;
			break;
		case 3:
			iParam1 += 333;
			break;
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = __LIB_0__::func_5();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar3)
	{
		bVar0 = STATS::STAT_SET_MASKED_INT(iVar3, iParam2, iVar4, 8, bParam3);
	}
	return bVar0;
}

int func_757(int iParam0)//Position - 0x32F44
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		case joaat("ex_prop_crate_oegg"):
			return 23;
		case joaat("ex_prop_crate_minig"):
			return 24;
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		case joaat("ex_prop_crate_shide"):
			return 26;
		case joaat("ex_prop_crate_freel"):
			return 27;
		case joaat("ex_prop_crate_watch"):
			return 28;
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		default:
	}
	return 0;
}

int func_758(var uParam0, char* sParam1, struct<3> Param2, char* sParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3358E
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(*uParam0, sParam1, Param2, sParam3, bParam4, iParam5, bParam6);
		return 1;
	}
	return 0;
}

void func_759(var uParam0, int iParam1, var uParam2)//Position - 0x34B0D
{
	if (__LIB_1__::func_101(uParam0, uParam2))
	{
	}
}

int func_760(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3543F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*uParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

int func_761(int iParam0)//Position - 0x414E4
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_762()//Position - 0x426E7
{
	return 478;
}

int func_763()//Position - 0x43013
{
	int iVar0;
	if (BitTest(Global_2815059.f_4630, 2))
	{
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_0__::func_603(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::func_160())
			{
				if (Global_2689235[iVar0 /*453*/].f_208)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_764(int iParam0)//Position - 0x43D12
{
	int iVar0;
	switch (__LIB_13__::func_462())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_765(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x43D3B
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_13__::func_462())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param3, bParam4, false, bParam5, false, 2, true, 0);
				break;
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_766(int iParam0, int iParam1)//Position - 0x43DA5
{
	switch (__LIB_13__::func_462())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("insurgent3"):
				case joaat("limo2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						case 1:
							return -1f, -2f, -0.1f;
						case 2:
							return 1f, -2f, -0.1f;
						case 3:
							return -1f, -2f, -0.1f;
						default:
					}
					break;
				case joaat("issi3"):
				case joaat("panto"):
				case joaat("raptor"):
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						case 1:
							return -0.5f, 0f, -0.1f;
						case 2:
							return 0.5f, 0f, -0.1f;
						case 3:
							return -0.5f, 0f, -0.1f;
						default:
					}
					break;
				case joaat("faggio"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 0f, -0.65f, 0.5f;
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				case 1:
					return -1f, 0f, -0.1f;
				case 2:
					return 1f, 0f, -0.1f;
				case 3:
					return -1f, 0f, -0.1f;
				default:
			}
			return 0f, -1f, -0.1f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_767(bool bParam0, bool bParam1)//Position - 0xB93AF
{
	if (bParam0)
	{
		__LIB_13__::func_393(2);
	}
	else
	{
		__LIB_13__::func_358(2);
	}
	if (bParam1)
	{
		__LIB_13__::func_393(1);
	}
	else
	{
		__LIB_13__::func_358(1);
	}
}

int func_768(int iParam0)//Position - 0xB93DB
{
	switch (iParam0)
	{
		case 9:
		case 21:
		case 19:
		case 20:
			return 1;
		default:
	}
	return 0;
}

char* func_769(int iParam0)//Position - 0xB948C
{
	switch (iParam0)
	{
		case 5:
			return "xm_x17dlc_int_sub";
		case 6:
			return "apa_v_mp_stilts_b";
		case 7:
			return "sm_smugdlc_int_01";
		case 8:
			return "bkr_biker_dlc_int_ware05";
		case 9:
			return "vw_dlc_casino_apart";
		case 10:
			return "v_lesters";
		case 11:
			return "ex_int_office_02b_dlc";
		case 12:
			return "xm_x17dlc_int_01";
		case 13:
			return "ex_int_warehouse_m_dlc";
		case 15:
			return "h4_mpapa_yacht";
		case 16:
			return "h4_mpapa_yacht";
		case 17:
			return "h4_mpapa_yacht";
		case 18:
			return "imp_impexp_int_02";
		case 19:
			return "ch_DLC_Casino_Hotel";
		case 20:
			return "vw_dlc_casino_main";
		case 21:
			return "vw_dlc_casino_carpark";
		case 22:
			return "h4_dlc_island_vault";
		case 23:
			return "ex_int_warehouse_s_dlc";
		case 26:
			return "hei_dlc_apart_high2_new";
		case 27:
			return "hei_dlc_apart_high2_new";
		case 28:
			return "hei_dlc_garage_high_new";
		case 29:
			return "v_apart_midspaz";
		case 30:
			return "bkr_biker_dlc_int_02";
		case 31:
			return "v_fib03";
		case 32:
			return "ba_dlc_int_01_ba";
		case 33:
			return "v_garagem";
		case 35:
			return "v_lab";
		case 36:
			return "v_garages";
		case 37:
			return "v_carshowroom";
		case 38:
			return "bkr_biker_dlc_int_ware03";
		case 39:
			return "imp_impexp_int_01";
		case 40:
			return "imp_impexp_int_01";
		case 41:
			return "imp_impexp_int_01";
		case 42:
			return "ex_int_warehouse_l_dlc";
		case 43:
			return "ch_dlc_plan";
		case 44:
			return "imp_imptexp_mod_int_01";
		case 46:
			return "imp_impexp_intwaremed";
		case 47:
			return "sf_mpapa_yacht";
		case 48:
			return "sf_mpapa_yacht";
		case 51:
			return "apa_v_mp_h_02";
		case 52:
			return "reh_dlc_int_03_sum2";
		case 53:
			return "reh_dlc_int_04_sum2";
		case 54:
			return "v_studio_lo";
		case 55:
			return "tr_tuner_mod_garage";
		default:
	}
	return "";
}

int func_770(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB96DB
{
	switch (iParam0)
	{
		case 18:
			*uParam1 = 969.5376f;
			*uParam2 = -3000.4111f;
			*uParam3 = 90;
			return 1;
		case 43:
			*uParam1 = 2697.615f;
			*uParam2 = -376.38916f;
			*uParam3 = -90;
			return 1;
		default:
	}
	return 0;
}

void func_771(int iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0xBA34B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam3)
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, sParam2))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam1, sParam2);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, sParam2))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam1, sParam2);
		}
	}
}

void func_772(int iParam0, int iParam1)//Position - 0xBA50D
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 47:
		case 48:
			break;
	}
}

void func_773(bool bParam0)//Position - 0xC289E
{
	if (bParam0)
	{
		if (!BitTest(Global_1310720.f_6, 11))
		{
			MISC::SET_BIT(&(Global_1310720.f_6), 11);
		}
	}
	else if (BitTest(Global_1310720.f_6, 11))
	{
		MISC::CLEAR_BIT(&(Global_1310720.f_6), 11);
	}
}

void func_774(int iParam0)//Position - 0xC28DF
{
	int iVar0;
	int iVar1;
	if (Global_1946250.f_4732 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 == Global_1946250.f_4728[iVar0])
		{
			Global_1946250.f_4728[iVar0] = -1;
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		if (Global_1946250.f_4732 > 0)
		{
			Global_1946250.f_4732 = (Global_1946250.f_4732 - 1);
		}
	}
}

int func_775(int iParam0)//Position - 0xC2ABF
{
	int iVar0;
	if (Global_1946250.f_4732 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946250.f_4732)
		{
			if (iParam0 == Global_1946250.f_4728[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_776(int iParam0)//Position - 0xC2AFF
{
	switch (iParam0)
	{
		case 5:
			return 511.5731f, 4827.4204f, -63.5879f;
		case 6:
			return -762.319f, 609.9635f, 139.3306f;
		case 7:
			return -1266.802f, -3014.8364f, -49.4895f;
		case 8:
			return 1165f, -3196.6f, -38.2f;
		case 9:
			return 976.6364f, 70.29476f, 115.16413f;
		case 10:
			return 1274.3647f, -1711.968f, 53.7715f;
		case 11:
			return -1580.9049f, -561.6155f, 107.5229f;
		case 12:
			return 520.0001f, 4750f, -70f;
		case 13:
			return 1059.9949f, -3100f, -39.9999f;
		case 15:
			return 50.4f, -3281.7f, 5.9f;
		case 16:
			return -3547.4324f, 738.2712f, 7.975f;
		case 17:
			return -1756.1798f, 5331.8774f, 7.975f;
		case 18:
			return 969.5376f, -3000.4111f, -48.647f;
		case 19:
			return 2504.4f, -257.2f, -39.1f;
		case 20:
			return 1100f, 245f, -49f;
		case 21:
			return 1380f, 200f, -50f;
		case 22:
			return 5011.31f, -5757.73f, 14.486f;
		case 23:
			return 1094.9966f, -3100.0117f, -38.2f;
		case 26:
			return -1460.7823f, -541.889f, 72.2441f;
		case 27:
			return -609.5665f, 50.2203f, 98.3998f;
		case 28:
			return 234.0331f, -1005.2032f, -98.4626f;
		case 29:
			return 342.7946f, -997.4225f, -99.7444f;
		case 30:
			return 1004.465f, -3158.8357f, -39.9075f;
		case 31:
			return 135.3226f, -746.3677f, 253.1523f;
		case 32:
			return -1604.6643f, -3012.5828f, -79.9999f;
		case 33:
			return 199.9715f, -999.6678f, -100f;
		case 35:
			return 3522.8452f, 3707.9653f, 19.9918f;
		case 36:
			return 173.1165f, -1003.2804f, -99.9999f;
		case 37:
			return -38.62f, -1099.01f, 27.31f;
		case 38:
			return 1093.6f, -3196.6f, -38.5f;
		case 39:
			return -197.9168f, -580.4352f, 135.0005f;
		case 40:
			return -90.9854f, -821.2017f, 221.0005f;
		case 41:
			return -1385.7458f, -484.8786f, 56.1005f;
		case 42:
			return 1007.1347f, -3102.0793f, -40f;
		case 43:
			return 2697.615f, -376.38916f, -56.461926f;
		case 44:
			return -69.8794f, -820.7496f, 284.0001f;
		case 46:
			return 972f, -2989f, -40.647f;
		case 47:
			return -3262.5208f, -1584.862f, 7.9751f;
		case 48:
			return -848.4805f, -4819.6978f, 7.9751f;
		case 51:
			return -787.7805f, 334.9232f, 215.8384f;
		case 52:
			return 800f, -3000f, -50f;
		case 53:
			return 850f, -3000f, -50f;
		case 54:
			return 264.3838f, -1000.4523f, -100.0086f;
		case 55:
			return -1350f, 160f, -99.2f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_777(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC2FC8
{
	*uParam3 = 1;
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 21:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_carpark", 32);
					return 1;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_main", 32);
					return 1;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_penthouse", 32);
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "CS1_02_cf_onmission1", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "CS1_02_cf_onmission2", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "CS1_02_cf_onmission3", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "CS1_02_cf_onmission4", 32);
					return 1;
				case 4:
					StringCopy(sParam2, "CS1_02_cf_offmission", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "ex_sm_13_office_02b", 32);
					return 1;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "farmint", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "farmint_cap", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_01", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_01_int", 32);
					return 1;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_02", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_02_int", 32);
					return 1;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_03", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_03_int", 32);
					return 1;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "bkr_bi_hw1_13_int", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "hei_bi_hw1_13_door", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_dt1_02_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_dt1_02_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_dt1_02_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_dt1_02_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_dt1_11_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_dt1_11_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_dt1_11_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_dt1_11_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_sm_15_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_sm_15_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_sm_15_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_sm_15_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "imp_dt1_11_modgarage", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "imp_dt1_11_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "fakeint", 32);
					*uParam3 = 0;
					return 1;
				case 1:
					StringCopy(sParam2, "shr_int", 32);
					return 1;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "sf_yacht_01", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "sf_yacht_01_int", 32);
					return 1;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "sf_yacht_02", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "sf_yacht_02_int", 32);
					return 1;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "Apa_V_mp_h_02_A", 32);
					return 1;
				default:
			}
			break;
	}
	return 0;
}

int func_778()//Position - 0xC3459
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	return 1;
}

bool func_779()//Position - 0xD8A46
{
	return (__LIB_0__::func_697() && __LIB_1__::func_359(__LIB_1__::func_301()));
}

void func_780(struct<3> Param0, var uParam1, int iParam2)//Position - 0xD9D5B
{
	__LIB_2__::func_0(Param0, uParam1, iParam2);
}

int func_781()//Position - 0xDFF2D
{
	int iVar0;
	if (BitTest(Global_2815059.f_4624, 4))
	{
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_0__::func_603(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::func_160())
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 17))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_782(struct<2> Param0, var uParam1)//Position - 0xE2417
{
	return SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
}

Vector3 func_783(struct<3> Param0, struct<3> Param1)//Position - 0xE2432
{
	return (Param0.f_0 - Param1.f_0), (Param0.f_1 - Param1.f_1), (Param0.f_2 - Param1.f_2);
}

int func_784(int iParam0)//Position - 0xE2E62
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if ((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2854.4204f, 3373.5728f, 30.809174f, -1816.8866f, 2786.2144f, 212.4194f, 220f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2477.663f, 2910.3364f, 31.885231f, -2411.8474f, 3022.681f, 211.80995f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2486.4978f, 3362.571f, 31.67714f, -1686.191f, 2873.5325f, 212.65228f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1705.9786f, 3129.6887f, 29.268982f, -2047.0344f, 3334.4087f, 210.02782f, 210f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1600.4845f, 2806.9873f, 15.480474f, -1707.008f, 2956.7622f, 211.87146f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2300.8777f, 3385.5645f, 29.05954f, -2241.9717f, 3346.3152f, 212.0413f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1720.183f, 2961.0786f, 30.806297f, -1760.0618f, 3204.2004f, 211.71394f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2000.7423f, 3322.5764f, 30.960247f, -2284.7527f, 3336.5557f, 211.8176f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2165.8674f, 3305.2993f, 30.810333f, -2076.54f, 3253.8176f, 211.81033f, 50f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_785(struct<3> Param0)//Position - 0xE30F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - 0.2f);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, 3f, 3f, 2.5f, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

void func_786(int iParam0, int iParam1, var uParam2)//Position - 0xE5B32
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -2005151571;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar1 = __LIB_2__::func_31(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_787()//Position - 0xF3C7C
{
	switch (__LIB_0__::func_170(__LIB_1__::func_350(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
		case 24:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_788(var uParam0)//Position - 0xF47BD
{
	return 90f, 0f, 0f;
}

float func_789(var uParam0)//Position - 0xF47D5
{
	return -4f;
}

float func_790(var uParam0)//Position - 0xF47E2
{
	return 4f;
}

float func_791(var uParam0)//Position - 0xF480D
{
	return -1.5f;
}

float func_792(var uParam0)//Position - 0xF4867
{
	return 0.99f;
}

char* func_793(var uParam0)//Position - 0xF48DA
{
	return "FMC_HT_INTERACT" /* GXT: Press ~INPUT_CONTEXT~ to use. */;
}

char* func_794(var uParam0)//Position - 0xF491B
{
	return "BLIP_DEST" /* GXT: Destination */;
}

float func_795(var uParam0)//Position - 0xF49A1
{
	return 0.3f;
}

int func_796(var uParam0)//Position - 0xF49C3
{
	return __LIB_0__::func_160();
}

int func_797(var uParam0)//Position - 0xF49CF
{
	return 30000;
}

bool func_798()//Position - 0x106363
{
	return __LIB_13__::func_440() > 0;
}

int func_799()//Position - 0x106C2F
{
	int iVar0;
	iVar0 = __LIB_0__::func_603(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != __LIB_0__::func_160()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_800()//Position - 0x9B2
{
	return 5000;
}

int func_801()//Position - 0xB02
{
	return Local_197.f_19;
}

int func_802()//Position - 0x20126
{
	return Local_197.f_19.f_5[0 /*13*/].f_11;
}

int func_803(int iParam0)//Position - 0x21596
{
	if (Local_197.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_197.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_197.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_197.f_38.f_1[iParam0 /*21*/].f_16);
}

int func_804()//Position - 0x21A72
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		if (Local_197.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_197.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

char* func_805(var uParam0, int iParam1)//Position - 0x232BE
{
	switch (iParam1)
	{
		case 0:
			return "RE_Cerberus_1";
		case 1:
			return "RE_Cerberus_2";
		case 2:
			return "RE_Cerberus_3";
		case 3:
			return "RE_Cerberus_4";
		case 4:
			return "RE_Cerberus_5";
		case 5:
			return "RE_Cerberus_6";
		case 6:
			return "RE_Cerberus_7";
		case 7:
			return "RE_Cerberus_8";
		case 8:
			return "RE_Cerberus_9";
		case 9:
			return "RE_Cerberus_10";
		case 10:
			return "RE_Cerberus_11";
		case 11:
			return "RE_Cerberus_12";
		default:
	}
	return "";
}

var func_806()//Position - 0x30F13
{
	return Local_197.f_19.f_1.f_2;
}

float func_807()//Position - 0xB4530
{
	return 200f;
}

int func_808()//Position - 0xB5F00
{
	switch (__LIB_0__::func_396(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
	}
	switch (__LIB_1__::func_182(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_0__::func_431(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_0__::func_396(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (__LIB_2__::func_297(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_809(int iParam0)//Position - 0xBCA51
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_14;
}

bool func_810(int iParam0, var uParam1)//Position - 0xC2AD7
{
	return (Local_197.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_197.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

var func_811(int iParam0)//Position - 0xC7702
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_812(int iParam0)//Position - 0xC771F
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_813(int iParam0)//Position - 0xC79C5
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_814(int iParam0)//Position - 0xC79D9
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_815(int iParam0)//Position - 0xC79F8
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_816(int iParam0)//Position - 0xC7A88
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_2;
}

void func_817(int iParam0, var uParam1, bool bParam2)//Position - 0xCA96F
{
	if (Global_262145.f_10629 /* Tunable: MPSV_DISABLE_DISPLAY_SLOTS */)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1940666[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

bool func_818(int iParam0)//Position - 0x907
{
	return __LIB_9__::func_807(&(Local_196.f_16), iParam0);
}

bool func_819(int iParam0)//Position - 0x3690
{
	return __LIB_13__::func_742(iParam0) != -1;
}

int func_820(int iParam0)//Position - 0x22494
{
	int iVar0;
	if (__LIB_0__::func_154(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

struct<20> func_821(int iParam0)//Position - 0x224F4
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	Var0 = 18;
	Var0.f_19 = 0;
	if (!__LIB_0__::func_581(iParam0))
	{
		return Var0;
	}
	if (__LIB_0__::func_154(iParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !__LIB_6__::func_489(Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

bool func_822(int iParam0, int iParam1)//Position - 0x23646
{
	return __LIB_9__::func_807(&(Local_196.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_823(int iParam0, int iParam1)//Position - 0x271DC
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Motherboard_1";
		case 1:
			return "Sum2_Motherboard_2";
		case 2:
			return "Sum2_Motherboard_3";
		case 3:
			return "Sum2_Rooftop_Container_1";
		case 4:
			return "Sum2_Rooftop_Container_2";
		case 5:
			return "Sum2_Rooftop_Container_3";
		default:
	}
	return "";
}

int func_824(var uParam0)//Position - 0x27EFA
{
	return 147;
}

char* func_825(var uParam0)//Position - 0x27FDC
{
	return "SM2MAAU";
}

char* func_826(var uParam0, var uParam1)//Position - 0x28123
{
	return "MALCOLM";
}

float func_827()//Position - 0x28607
{
	return 70f;
}

int func_828(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x8D49A
{
	int iVar0;
	iVar0 = iParam1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_0__::func_584(iVar0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Param2, false, false, false);
			ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_829(int iParam0)//Position - 0x8E207
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_14[iVar0]), iVar1);
}

int func_830(struct<3> Param0)//Position - 0xB59FF
{
	if (__LIB_1__::func_82(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_84(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_831(int iParam0)//Position - 0xC0FB1
{
	int iVar0;
	iVar0 = 8;
	if (iVar0 == 32)
	{
		return iParam0;
	}
	return (7 - iParam0);
}

void func_832(int iParam0, bool bParam1)//Position - 0xCB96A
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	StringCopy(&Var1, "", 32);
	while (__LIB_13__::func_777(iParam0, iVar0, &Var1, &bVar2))
	{
		if (bVar2)
		{
			if (bParam1)
			{
				STREAMING::REQUEST_IPL(&Var1);
			}
			else
			{
				STREAMING::REMOVE_IPL(&Var1);
			}
		}
		else if (bParam1)
		{
			STREAMING::REMOVE_IPL(&Var1);
		}
		else
		{
			STREAMING::REQUEST_IPL(&Var1);
		}
		iVar0++;
	}
}

int func_833(int iParam0)//Position - 0xEB656
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 2:
			return 2;
		default:
	}
	return 3;
}

int func_834(int iParam0)//Position - 0xEDD47
{
	if (__LIB_13__::func_258(iParam0, 1))
	{
		return Global_1892703[__LIB_0__::func_603(iParam0) /*599*/].f_10.f_462;
	}
	return __LIB_0__::func_160();
}

int func_835()//Position - 0xEDD72
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_582();
	if (iVar0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return BitTest(Global_1892703[iVar1 /*599*/].f_1, 16);
			}
		}
	}
	return 0;
}

char* func_836(var uParam0)//Position - 0xF441A
{
	return "FMC_BLIP_AREA" /* GXT: Area */;
}

void func_837(bool bParam0)//Position - 0xF79D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = __LIB_0__::func_603(PLAYER::PLAYER_ID());
	}
	if (iVar0 != __LIB_0__::func_160())
	{
		if (bParam0)
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						Global_1952191.f_5365[iVar2] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						iVar2++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 18)
			{
				Global_1952191.f_5365[iVar1] = 0;
				iVar1++;
			}
		}
	}
}

int func_838()//Position - 0xF9CA7
{
	return __LIB_9__::func_643(PLAYER::PLAYER_ID()) + 1;
}

int func_839()//Position - 0xFB461
{
	if (__LIB_13__::func_799())
	{
		__LIB_0__::func_168(12, Global_20266, 1);
	}
	return 12;
}

int func_840()//Position - 0xFB579
{
	if (__LIB_13__::func_799())
	{
		__LIB_0__::func_168(20, Global_20266, 1);
	}
	return 20;
}

int func_841()//Position - 0xFB6CD
{
	if (__LIB_13__::func_799())
	{
		__LIB_0__::func_168(76, Global_20266, 1);
	}
	return 76;
}

char* func_842(var* uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x26EED
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1);
	}
	return sParam2;
}

char* func_843(int iParam0, int iParam1)//Position - 0x27174
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Drug_Problem_1";
		case 1:
			return "Sum2_Drug_Problem_2";
		case 2:
			return "Sum2_Drug_Problem_3";
		case 3:
			return "Sum2_Paparazzi_1";
		case 4:
			return "Sum2_Paparazzi_2";
		case 5:
			return "Sum2_Paparazzi_3";
		default:
	}
	return "";
}

void func_844()//Position - 0x276EA
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}

void func_845(int iParam0, int iParam1)//Position - 0x4E73D
{
	Global_1998[iParam0 /*29*/].f_2 = iParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_2 = iParam1;
	}
}

void func_846(struct<3> Param0, struct<3> Param1, struct<3> Param2, int iParam3, float fParam4)//Position - 0x4EC8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam3, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - fParam4);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, Param1, Param2, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

float func_847(int iParam0)//Position - 0xD0AF6
{
	return 2f;
}

void func_848(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xDC55E
{
	*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(iParam1);
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	__LIB_6__::func_919(uParam0, iParam3);
	HUD::SET_BLIP_ROUTE(*uParam0, bParam6);
	HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, bParam7);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, true);
		HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(*uParam0, 0);
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
	}
	if (bParam8)
	{
		__LIB_11__::func_34(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		HUD::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

void func_849()//Position - 0xF0338
{
	__LIB_0__::func_495(&(Global_1958659.f_30), 0, 0);
}

void func_850(int iParam0)//Position - 0x3CF
{
	if (!bLocal_322)
	{
		return;
	}
	Local_367.f_82 = iParam0;
}

void func_851(int iParam0)//Position - 0x740
{
	if (!bLocal_322)
	{
		return;
	}
	Local_367.f_85 = iParam0;
}

int func_852()//Position - 0x759
{
	return Local_367.f_85;
}

void func_853(int iParam0, int iParam1)//Position - 0xD38
{
	if (!bLocal_322)
	{
		return;
	}
	Local_367.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_854(int iParam0)//Position - 0xD57
{
	return Local_367.f_22[iParam0 /*24*/].f_2;
}

bool func_855(var uParam0)//Position - 0x1127
{
	return BitTest(Local_367.f_62, uParam0);
}

int func_856(int iParam0)//Position - 0x11D5
{
	if (__LIB_13__::func_441(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_213.f_156.f_195 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_195);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_857(int iParam0, int iParam1)//Position - 0x1214
{
	if (__LIB_1__::func_101(&(Local_367.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_858(int iParam0, int iParam1)//Position - 0x1230
{
	return __LIB_0__::func_287(&(Local_367.f_22[iParam0 /*24*/].f_3), iParam1);
}

void func_859()//Position - 0x1A4D
{
	if (Local_367.f_99 != -1)
	{
		Local_367.f_112 = { 0f, 0f, 0f };
		Local_367.f_121 = 0f;
		iLocal_344 = 0;
		Local_367.f_84 = -1;
		Local_367.f_99 = -1;
	}
}

int func_860(int iParam0)//Position - 0x251B
{
	if (__LIB_13__::func_445(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_861()//Position - 0x2536
{
	switch (Local_367.f_83)
	{
		case 2:
			return 200;
		case 3:
			return 300;
		case 4:
			return 300;
		default:
	}
	return 200;
}

int func_862()//Position - 0x256D
{
	switch (Local_367.f_83)
	{
		case 2:
			return 60;
		case 3:
			return 80;
		case 4:
			return 100;
		default:
	}
	return 60;
}

int func_863(int iParam0)//Position - 0x25A2
{
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_179);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_179);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_367.f_83)
	{
		case 2:
			return 10;
		case 3:
			return 25;
		case 4:
			return 40;
		default:
	}
	return 10;
}

int func_864()//Position - 0x2604
{
	switch (Local_367.f_83)
	{
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		default:
	}
	return 1;
}

int func_865(int iParam0)//Position - 0x28AB
{
	if (__LIB_13__::func_445(22))
	{
		return 1;
	}
	return 0;
}

void func_866(int iParam0, var uParam1)//Position - 0x2989
{
	if (Local_367.f_99 == -1)
	{
		Local_367.f_84 = iParam0;
		Local_367.f_99 = uParam1;
	}
}

int func_867(int iParam0)//Position - 0x2A16
{
	return Local_367.f_47[iParam0 /*8*/].f_1;
}

int func_868(int iParam0, int iParam1)//Position - 0x2A29
{
	if (Local_367.f_84 == -1)
	{
		return 1;
	}
	if (Local_367.f_84 == iParam0)
	{
		if (Local_367.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_869(int iParam0, int iParam1)//Position - 0x2B39
{
	if (!bLocal_322)
	{
		return;
	}
	Local_367.f_22[iParam0 /*24*/].f_1 = iParam1;
}

int func_870(int iParam0)//Position - 0x2B99
{
	return Local_367.f_22[iParam0 /*24*/].f_1;
}

void func_871(int iParam0, int iParam1)//Position - 0x3235
{
	if (__LIB_1__::func_101(&(Local_367.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_872(int iParam0, int iParam1)//Position - 0x326A
{
	return __LIB_0__::func_287(&(Local_367.f_56[iParam0 /*5*/].f_2), iParam1);
}

void func_873(int iParam0, int iParam1)//Position - 0x32A6
{
	Local_367.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_874(int iParam0)//Position - 0x32BB
{
	return Local_367.f_56[iParam0 /*5*/].f_1;
}

void func_875(int iParam0, int iParam1)//Position - 0x3539
{
	if (__LIB_1__::func_101(&(Local_367.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

bool func_876(int iParam0, int iParam1)//Position - 0x359E
{
	return __LIB_0__::func_287(&(Local_367.f_47[iParam0 /*8*/].f_2), iParam1);
}

void func_877(int iParam0, int iParam1)//Position - 0x360D
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_196.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__::func_86(Local_367.f_118))
	{
		Local_367.f_118 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_367.f_118) > (550f * 550f))
	{
		if (Local_367.f_103 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_367.f_103, false);
		}
		Local_367.f_118 = { Var0 };
		Local_367.f_103 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_367.f_118, fVar1, 1f, 0.02f, false, true);
	}
}

int func_878(int iParam0, int iParam1)//Position - 0x36AB
{
	Stack.Push(Local_213.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__::func_162(&(Local_367.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_879(int iParam0)//Position - 0x3E11
{
	return Local_367.f_2.f_13[iParam0];
}

int func_880(int iParam0)//Position - 0x3E24
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (Local_367.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_881(int iParam0, int iParam1)//Position - 0x3F40
{
	return __LIB_13__::func_458(iParam0, iParam1) != 1f;
}

int func_882(int iParam0)//Position - 0xCC61
{
	if (!__LIB_0__::func_114() && func_246(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_883(int iParam0, int iParam1)//Position - 0x1FF79
{
	Local_367.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_884(int iParam0)//Position - 0x1FFC9
{
	return Local_367.f_2.f_9[iParam0];
}

int func_885()//Position - 0x20551
{
	int iVar0;
	iVar0 = (iVar0 + __LIB_13__::func_440());
	return iVar0;
}

bool func_886(int iParam0, int iParam1)//Position - 0x20619
{
	return __LIB_0__::func_287(&(Local_367.f_2.f_5[iParam0 /*3*/]), iParam1);
}

bool func_887()//Position - 0x2065F
{
	return __LIB_13__::func_445(0);
}

void func_888(int iParam0, int iParam1)//Position - 0x206C8
{
	if (__LIB_11__::func_631(&(Local_367.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_889(int iParam0)//Position - 0x20734
{
	return Local_367.f_2.f_9[iParam0] != -1;
}

void func_890(int iParam0, int iParam1)//Position - 0x207A7
{
	if (__LIB_1__::func_101(&(Local_367.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_891(int iParam0, bool bParam1, bool bParam2)//Position - 0x213AE
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_367.f_2[iParam0]), bParam1, bParam2);
}

int func_892(int iParam0)//Position - 0x21418
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (Local_367.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_893()//Position - 0x21651
{
	return Local_367.f_82;
}

void func_894(int iParam0)//Position - 0x2165E
{
	Local_367.f_81 = iParam0;
}

void func_895()//Position - 0x21739
{
	if (Local_367.f_98 == -1)
	{
		Local_367.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_896()//Position - 0x217D7
{
	Local_367.f_83 = 2;
}

bool func_897(int iParam0)//Position - 0x24398
{
	return __LIB_0__::func_287(&uLocal_348, iParam0);
}

bool func_898(int iParam0)//Position - 0x24888
{
	return __LIB_0__::func_287(&(Local_367.f_122), iParam0);
}

void func_899(int iParam0)//Position - 0x24A3C
{
	if (__LIB_1__::func_101(&(Local_367.f_122), iParam0))
	{
	}
}

int func_900()//Position - 0x24CC8
{
	return Local_367.f_124.f_1;
}

void func_901(int iParam0)//Position - 0x2532D
{
	if (__LIB_1__::func_101(&uLocal_348, iParam0))
	{
	}
}

int func_902(int iParam0)//Position - 0x25684
{
	__LIB_13__::func_468(40);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

float func_903(int iParam0, int iParam1)//Position - 0x257FE
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -0.0001f;
				case 1:
					return -0.0001f;
				case 2:
					return -0.0001f;
				case 3:
					return -0.0001f;
				case 4:
					return -0.0001f;
				case 5:
					return -0.0001f;
				case 6:
					return -0.0001f;
				case 7:
					return -0.0001f;
				case 8:
					return -0.0001f;
				case 9:
					return -0.0001f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 268.1998f;
				case 1:
					return 268.1998f;
				case 2:
					return 268.1998f;
				case 3:
					return 268.1998f;
				case 4:
					return 268.1998f;
				case 5:
					return 268.1998f;
				case 6:
					return 268.1998f;
				case 7:
					return 268.1998f;
				case 8:
					return 268.1998f;
				case 9:
					return 268.1998f;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 186.4f;
				case 1:
					return 181.6f;
				case 2:
					return 180.2f;
				case 3:
					return 180.2f;
				case 4:
					return 188.6f;
				case 5:
					return 188.6f;
				case 6:
					return 0.4f;
				case 7:
					return 0.4f;
				case 8:
					return 88.4f;
				case 9:
					return 88.4f;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 159.998f;
				case 1:
					return 159.998f;
				case 2:
					return 159.998f;
				case 3:
					return 160.198f;
				case 4:
					return 159.598f;
				case 5:
					return 180.998f;
				case 6:
					return 339.998f;
				case 7:
					return 180.598f;
				case 8:
					return 343.198f;
				case 9:
					return 342.598f;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 264.1997f;
				case 1:
					return 264.1997f;
				case 2:
					return 264.1997f;
				case 3:
					return 264.1997f;
				case 4:
					return 264.1997f;
				case 5:
					return 264.1997f;
				case 6:
					return 264.1997f;
				case 7:
					return 85.199f;
				case 8:
					return 85.199f;
				case 9:
					return 85.199f;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 60.399f;
				case 1:
					return 60.399f;
				case 2:
					return 60.399f;
				case 3:
					return 60.399f;
				case 4:
					return 60.399f;
				case 5:
					return 150.398f;
				case 6:
					return 60.399f;
				case 7:
					return 60.399f;
				case 8:
					return 60.399f;
				case 9:
					return 60.399f;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 269.799f;
				case 1:
					return 269.799f;
				case 2:
					return 269.799f;
				case 3:
					return 269.799f;
				case 4:
					return 269.799f;
				case 5:
					return 269.799f;
				case 6:
					return 269.799f;
				case 7:
					return 269.799f;
				case 8:
					return 269.799f;
				case 9:
					return 269.799f;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 339.799f;
				case 1:
					return 339.799f;
				case 2:
					return 339.799f;
				case 3:
					return 69.199f;
				case 4:
					return 69.199f;
				case 5:
					return 69.199f;
				case 6:
					return 69.199f;
				case 7:
					return 69.199f;
				case 8:
					return 339.199f;
				case 9:
					return 339.199f;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 307.8f;
				case 1:
					return 307.8f;
				case 2:
					return 307.8f;
				case 3:
					return 307.8f;
				case 4:
					return 127.8f;
				case 5:
					return 127.8f;
				case 6:
					return 127.8f;
				case 7:
					return 126.6f;
				case 8:
					return 126.6f;
				case 9:
					return 127.8f;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 106.3998f;
				case 1:
					return 106.3998f;
				case 2:
					return 106.3998f;
				case 3:
					return 106.3998f;
				case 4:
					return 106.3998f;
				case 5:
					return 106.3998f;
				case 6:
					return 106.3998f;
				case 7:
					return 106.3998f;
				case 8:
					return 106.3998f;
				case 9:
					return 106.3998f;
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_904(int iParam0, int iParam1)//Position - 0x25E26
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 755.3193f, -1354.4268f, 25.3876f;
				case 1:
					return 752.0928f, -1354.4381f, 25.3851f;
				case 2:
					return 748.802f, -1354.3632f, 25.3848f;
				case 3:
					return 745.6069f, -1354.251f, 25.3693f;
				case 4:
					return 742.3694f, -1354.3524f, 25.3345f;
				case 5:
					return 759.0276f, -1353.7019f, 25.3765f;
				case 6:
					return 762.5712f, -1353.6799f, 25.3802f;
				case 7:
					return 766.3746f, -1353.7f, 25.3837f;
				case 8:
					return 738.7623f, -1354.2296f, 25.2821f;
				case 9:
					return 769.4762f, -1353.8734f, 25.3887f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 342.0772f, -959.35f, 28.2785f;
				case 1:
					return 333.4153f, -959.0974f, 28.2734f;
				case 2:
					return 325.1071f, -958.8293f, 28.2683f;
				case 3:
					return 359.6486f, -959.9714f, 28.4317f;
				case 4:
					return 367.8302f, -960.3409f, 28.4316f;
				case 5:
					return 316.9922f, -958.6771f, 28.2665f;
				case 6:
					return 375.8982f, -960.4542f, 28.4378f;
				case 7:
					return 308.3825f, -958.6025f, 28.2234f;
				case 8:
					return 299.6216f, -958.4204f, 28.4172f;
				case 9:
					return 383.9211f, -960.4394f, 28.2818f;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -114.271f, -1263.386f, 28.182f;
				case 1:
					return -113.62f, -1272.209f, 28.182f;
				case 2:
					return -113.715f, -1281.056f, 28.186f;
				case 3:
					return -113.58f, -1289.539f, 28.193f;
				case 4:
					return -117.635f, -1246.714f, 28.018f;
				case 5:
					return -118.928f, -1237.964f, 27.812f;
				case 6:
					return -91.064f, -1271.376f, 28.147f;
				case 7:
					return -91.042f, -1279.384f, 28.151f;
				case 8:
					return -82.915f, -1264.734f, 28.087f;
				case 9:
					return -73.94f, -1264.87f, 28.082f;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 11.68f, 221.142f, 106.973f;
				case 1:
					return 14.864f, 229.234f, 108.015f;
				case 2:
					return 2.766f, 197.066f, 102.612f;
				case 3:
					return -1.657f, 184.551f, 99.617f;
				case 4:
					return 18.318f, 236.798f, 108.426f;
				case 5:
					return -58.138f, 237.941f, 105.552f;
				case 6:
					return -52.615f, 216.751f, 105.553f;
				case 7:
					return -61.412f, 237.6f, 105.552f;
				case 8:
					return -59.307f, 218.04f, 105.553f;
				case 9:
					return -55.902f, 217.041f, 105.553f;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 860.9283f, -2085.8533f, 29.1362f;
				case 1:
					return 852.9026f, -2085.0918f, 29.0404f;
				case 2:
					return 844.8533f, -2084.3455f, 28.9134f;
				case 3:
					return 875.289f, -2087.3477f, 29.3459f;
				case 4:
					return 883.7719f, -2088.0789f, 29.373f;
				case 5:
					return 857.7628f, -2116.8347f, 29.6665f;
				case 6:
					return 857.3408f, -2120.8457f, 29.6594f;
				case 7:
					return 864.3424f, -2064.8872f, 29.0049f;
				case 8:
					return 855.9948f, -2064.2434f, 28.749f;
				case 9:
					return 847.1401f, -2063.372f, 28.7213f;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -679.72f, -2471.149f, 12.828f;
				case 1:
					return -680.485f, -2474.853f, 12.828f;
				case 2:
					return -682.261f, -2477.932f, 12.828f;
				case 3:
					return -684.016f, -2480.799f, 12.828f;
				case 4:
					return -687.595f, -2482.953f, 12.828f;
				case 5:
					return -698.428f, -2457.944f, 12.828f;
				case 6:
					return -695.3653f, -2478.4475f, 12.8285f;
				case 7:
					return -703.1595f, -2473.9226f, 12.8285f;
				case 8:
					return -710.7679f, -2469.4824f, 12.8285f;
				case 9:
					return -718.8098f, -2464.9175f, 12.8406f;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 168.487f, -3169.493f, 4.839f;
				case 1:
					return 168.327f, -3173.779f, 4.836f;
				case 2:
					return 168.204f, -3178.191f, 4.841f;
				case 3:
					return 168.133f, -3182.749f, 4.85f;
				case 4:
					return 168.31f, -3188.125f, 4.847f;
				case 5:
					return 168.273f, -3191.985f, 4.841f;
				case 6:
					return 168.686f, -3159.228f, 4.835f;
				case 7:
					return 168.547f, -3151.956f, 4.838f;
				case 8:
					return 168.677f, -3147.654f, 4.84f;
				case 9:
					return 168.571f, -3163.303f, 4.837f;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 379.428f, 264.709f, 102.008f;
				case 1:
					return 375.426f, 266.247f, 102.02f;
				case 2:
					return 371.696f, 267.441f, 102.032f;
				case 3:
					return 387.545f, 269.735f, 102.008f;
				case 4:
					return 388.909f, 273.487f, 102.004f;
				case 5:
					return 390.189f, 277.149f, 101.997f;
				case 6:
					return 391.544f, 280.649f, 101.991f;
				case 7:
					return 392.806f, 284.445f, 101.98f;
				case 8:
					return 368.101f, 269.086f, 102.057f;
				case 9:
					return 363.982f, 270.285f, 102.067f;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1290.753f, -646.653f, 25.449f;
				case 1:
					return -1297.422f, -651.761f, 25.395f;
				case 2:
					return -1304.254f, -657.101f, 25.402f;
				case 3:
					return -1279.429f, -638.181f, 25.647f;
				case 4:
					return -1286.341f, -631.776f, 25.619f;
				case 5:
					return -1293.355f, -636.993f, 25.483f;
				case 6:
					return -1299.976f, -642.138f, 25.397f;
				case 7:
					return -1279.487f, -626.714f, 25.757f;
				case 8:
					return -1272.862f, -621.818f, 25.838f;
				case 9:
					return -1306.691f, -647.089f, 25.398f;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -1164.7373f, -1154.4039f, 4.6511f;
				case 1:
					return -1163.7859f, -1157.7721f, 4.6439f;
				case 2:
					return -1162.5802f, -1161.0332f, 4.637f;
				case 3:
					return -1161.6151f, -1164.4244f, 4.6299f;
				case 4:
					return -1160.645f, -1167.8486f, 4.6236f;
				case 5:
					return -1159.124f, -1173.0679f, 4.6236f;
				case 6:
					return -1158.3143f, -1176.4808f, 4.6235f;
				case 7:
					return -1157.2466f, -1179.9904f, 4.6234f;
				case 8:
					return -1156.0964f, -1183.3044f, 4.6234f;
				case 9:
					return -1155.0475f, -1186.9685f, 4.6233f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_905()//Position - 0x274B2
{
	return Local_367.f_124;
}

bool func_906()//Position - 0x2CC93
{
	if (Local_213.f_47.f_5 != 0)
	{
		Call_Loc(Local_213.f_47.f_5);
		return StackVal;
	}
	if (__LIB_2__::func_380())
	{
		return 0;
	}
	return !__LIB_13__::func_482(3);
}

int func_907()//Position - 0x2FBE5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_2[iVar0]))
		{
			if (iLocal_357[iVar0] != iLocal_328)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_367.f_2[iVar0])))
				{
					if (Local_290[iVar0 /*7*/].f_1 < 2f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_908(int iParam0)//Position - 0x2FDF2
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_2.f_15[iParam0]) && __LIB_6__::func_924(Local_367.f_2.f_15[iParam0]))
	{
		__LIB_4__::func_509(&(Local_367.f_2.f_15[iParam0]));
		__LIB_1__::func_162(&(Local_367.f_2.f_15[iParam0]));
	}
}

int func_909(int iParam0)//Position - 0x8DD35
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 276 && func_204(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

void func_910(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA7ADB
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_1__::func_264(iParam0, 1, 1))
	{
		__LIB_13__::func_330(Local_334.f_0, __LIB_0__::func_679(iParam0), iParam1, iParam2, iParam3);
	}
}

int func_911(int iParam0)//Position - 0xA7D50
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (Local_290[iVar0 /*7*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_912()//Position - 0xB2035
{
	if (Local_213.f_15.f_18 != 0)
	{
		Call_Loc(Local_213.f_15.f_18);
		return StackVal;
	}
	return __LIB_13__::func_482(64);
}

bool func_913()//Position - 0xB22EF
{
	if (Local_213.f_15.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_1);
		return StackVal;
	}
	return __LIB_13__::func_482(62);
}

int func_914()//Position - 0xB8C43
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar1 = -1;
	fVar4 = 999999.9f;
	Var2 = { Local_329 };
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_22[iVar0 /*24*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_367.f_22[iVar0 /*24*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_364(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_367.f_22[iVar0 /*24*/]), true))
					{
						fVar3 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_367.f_22[iVar0 /*24*/]), false));
						if (fVar3 < fVar4)
						{
							fVar4 = fVar3;
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_915()//Position - 0xB9630
{
	if (HUD::DOES_BLIP_EXIST(iLocal_365))
	{
		HUD::REMOVE_BLIP(&iLocal_365);
	}
}

void func_916()//Position - 0xB9649
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_290.f_0)
	{
		__LIB_13__::func_486(iVar0);
		iVar0++;
	}
}

int func_917(int iParam0)//Position - 0xBAC58
{
	if (__LIB_13__::func_445(16))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_47.f_2);
	if (!StackVal)
	{
		if (Local_290.f_11 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

void func_918(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xBAE1B
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_786(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(3, iVar0);
		Global_1649593.f_2839[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = uParam3;
		Global_1649593.f_2839.f_172[iVar0] = uParam2;
		Global_1649593.f_2839.f_205[iVar0] = uParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

int func_919()//Position - 0xBBC2E
{
	if (__LIB_13__::func_445(24) || __LIB_13__::func_445(25))
	{
		return 0;
	}
	Stack.Push(Local_213.f_47.f_6 != 0);
	Call_Loc(Local_213.f_47.f_6);
	if (StackVal && StackVal)
	{
		return 0;
	}
	return 1;
}

void func_920()//Position - 0xBC0FA
{
	if (__LIB_13__::func_482(18))
	{
		MISC::SET_FAKE_WANTED_LEVEL(0);
		__LIB_13__::func_475(18);
		__LIB_13__::func_475(72);
		__LIB_13__::func_475(81);
	}
}

int func_921()//Position - 0xBC122
{
	if (Local_213.f_64.f_1 != 0)
	{
		Call_Loc(Local_213.f_64.f_1);
		return StackVal;
	}
	if (__LIB_13__::func_482(14))
	{
		return __LIB_13__::func_444();
	}
	if (__LIB_13__::func_482(80))
	{
		return __LIB_13__::func_444();
	}
	return Local_196.f_99.f_1;
}

int func_922()//Position - 0xBC166
{
	if (((__LIB_13__::func_482(14) || (__LIB_13__::func_482(72) && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0)) || __LIB_13__::func_482(80)) || (__LIB_13__::func_482(81) && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0))
	{
		return 1;
	}
	if (Local_213.f_64.f_6 != 0)
	{
		Call_Loc(Local_213.f_64.f_6);
		return StackVal;
	}
	return 0;
}

void func_923(int iParam0, int iParam1)//Position - 0xBCF62
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
	{
		if (__LIB_13__::func_441(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

int func_924(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xBDED9
{
	if (Local_213.f_156.f_140.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_213.f_156.f_140.f_17);
		return StackVal;
	}
	if (!__LIB_13__::func_441(iParam0, 15))
	{
		return 0;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

bool func_925()//Position - 0xBE6BB
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_367.f_98 + 2;
}

void func_926(bool bParam0)//Position - 0xBF21F
{
	if (bParam0)
	{
		if (!__LIB_13__::func_482(57))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_326, 426, true);
			__LIB_13__::func_468(57);
		}
	}
	else if (__LIB_13__::func_482(57))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_326, 426, false);
		__LIB_13__::func_475(57);
	}
}

int func_927(int iParam0, int iParam1)//Position - 0xBF3F4
{
	if (!__LIB_13__::func_456(iParam0, 31))
	{
		return 0;
	}
	return __LIB_13__::func_579(iParam1, 12f, 0, 0);
}

void func_928(int iParam0, int iParam1)//Position - 0xBF68F
{
	if (__LIB_13__::func_456(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, bLocal_324, false);
	if (!__LIB_0__::func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!__LIB_13__::func_456(iParam0, 6))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, false);
	}
}

void func_929(int iParam0, int iParam1)//Position - 0xBF8A8
{
	float fVar0;
	Stack.Push(Local_213.f_352.f_30 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_30);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_329, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	if (fVar0 < fLocal_353)
	{
		fLocal_353 = fVar0;
		iLocal_342 = iLocal_342;
		iLocal_342 = iParam0;
	}
}

int func_930(int iParam0)//Position - 0xC0DBF
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_367.f_47[iParam0 /*8*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_367.f_47[iParam0 /*8*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_196.f_38.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_22[iVar1 /*24*/]) && iVar0 == NETWORK::NET_TO_PED(Local_367.f_22[iVar1 /*24*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

void func_931(int iParam0)//Position - 0xC1746
{
	struct<7> Var0;
	if (!bLocal_322)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != Local_334.f_0 || Var0.f_6 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		Local_367.f_22[Var0.f_3 /*24*/].f_6 = Var0.f_2;
	}
}

void func_932(int iParam0)//Position - 0xC1796
{
	struct<7> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7) || Local_334.f_0 != Var0.f_2)
	{
		return;
	}
	Local_304.f_0 = Var0.f_3;
	Local_304.f_2 = Var0.f_5;
	Local_304.f_1 = Var0.f_6;
	__LIB_13__::func_468(15);
}

void func_933(int iParam0)//Position - 0xC5BC7
{
	if (__LIB_11__::func_631(&(Local_367.f_88), iParam0))
	{
	}
}

void func_934()//Position - 0xC5C5E
{
	Global_1943929.f_2 = Local_367.f_90;
	Global_1943929.f_3 = Local_367.f_91;
}

void func_935(bool bParam0)//Position - 0xC5F5F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_367.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_367.f_2[iVar0], true);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_367.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_367.f_2[iVar0], false);
			}
		}
		iVar0++;
	}
}

void func_936(bool bParam0, int iParam1)//Position - 0xC63B2
{
	if (!__LIB_0__::func_86(Local_196.f_111.f_1[iParam1 /*7*/].f_1) && !__LIB_0__::func_86(Local_196.f_111.f_1[iParam1 /*7*/].f_4))
	{
		if (iParam1 >= 10)
		{
			return;
		}
		switch (Local_196.f_111.f_1[iParam1 /*7*/])
		{
			case 0:
				if (bParam0)
				{
					if (iLocal_351 < 2)
					{
						iLocal_350[iLocal_351] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, false, true, true, true);
						iLocal_351++;
					}
				}
				else if (iLocal_351 < 2)
				{
					if (iLocal_350[iLocal_351] != -1)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_350[iLocal_351], false);
						iLocal_350[iLocal_351] = -1;
						iLocal_351 = (iLocal_351 - 1);
					}
				}
				break;
			case 1:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, !bParam0, false);
				break;
			case 2:
				if (bParam0)
				{
					if (iLocal_351 < 2)
					{
						iLocal_350[iLocal_351] = MISC::ADD_POP_MULTIPLIER_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, 1f, 0.25f, true, true);
						iLocal_351++;
					}
				}
				else if (iLocal_350[iLocal_351] != -1)
				{
					if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(iLocal_350[iLocal_351]))
					{
						MISC::REMOVE_POP_MULTIPLIER_AREA(iLocal_350[iLocal_351], true);
						iLocal_350[iLocal_351] = -1;
						iLocal_351 = (iLocal_351 - 1);
					}
				}
				break;
			}
	}
}

int func_937(int iParam0, int iParam1)//Position - 0xC8A68
{
	int iVar0;
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
		return NETWORK::VEH_TO_NET(iVar0);
	}
	return 0;
}

void func_938(int iParam0, int iParam1, bool bParam2)//Position - 0xC942E
{
	int iVar0;
	if (!((__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
		{
			if (bParam2)
			{
				iVar0 = joaat("SCRIPT_TASK_WANDER_SPECIFIC");
			}
			else
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_114);
				iVar0 = StackVal;
			}
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_WANDER_STANDARD"):
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_1);
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_2);
					TASK::TASK_WANDER_STANDARD(StackVal, StackVal, StackVal);
					break;
				case joaat("SCRIPT_TASK_WANDER_IN_AREA"):
					Stack.Push((Local_213.f_156.f_2.f_114.f_3 != 0 && Local_213.f_156.f_2.f_114.f_4 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_3);
					Stack.Push((StackVal && !__LIB_0__::func_86(StackVal, StackVal, StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_4);
					if (StackVal && StackVal > 0f)
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_4);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_5);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_6);
						TASK::TASK_WANDER_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
					break;
				case joaat("SCRIPT_TASK_WANDER_SPECIFIC"):
					Stack.Push((Local_213.f_156.f_2.f_114.f_7 != 0 && Local_213.f_156.f_2.f_114.f_8 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_7);
					Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_8);
					if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_7);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_8);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_1);
						TASK::TASK_WANDER_SPECIFIC(StackVal, StackVal, StackVal, StackVal);
					}
					break;
				}
			}
	}
}

Vector3 func_939(int iParam0, int iParam1)//Position - 0xC98E4
{
	int iVar0;
	if (Local_213.f_156.f_2.f_91 != 0)
	{
		iVar0 = Local_367.f_22[iParam0 /*24*/].f_5;
		if (iParam1 != -1)
		{
			iVar0 = iParam1;
		}
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_156.f_2.f_91);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_940(int iParam0)//Position - 0xC9B15
{
	if (Local_213.f_156.f_2.f_91.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_5);
		return StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return 0;
}

int func_941(int iParam0, var uParam1)//Position - 0xCA14A
{
	int iVar0;
	if (Local_213.f_156.f_2.f_76 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76);
		iVar0 = StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		iVar0 = Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
	{
		*uParam1 = NETWORK::NET_TO_VEH(iVar0);
		return 1;
	}
	return 0;
}

Vector3 func_942(int iParam0)//Position - 0xCA262
{
	if (Local_213.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_367.f_22[iParam0 /*24*/]), false);
}

Vector3 func_943(int iParam0, int iParam1)//Position - 0xCAE7B
{
	int iVar0;
	struct<3> Var1;
	iVar0 = Local_367.f_22[iParam0 /*24*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_213.f_156.f_2.f_25.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_1);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

int func_944(int iParam0)//Position - 0xCB580
{
	if (__LIB_13__::func_670(iParam0))
	{
		return joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED");
	}
	return joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
}

int func_945(int iParam0)//Position - 0xCB6ED
{
	if (Local_213.f_156.f_2.f_25.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_2);
		return StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_367.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	return 0;
}

void func_946(int iParam0, int iParam1)//Position - 0xCB765
{
	int iVar0;
	if (Local_213.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_213.f_156.f_2.f_23.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_947(int iParam0, int iParam1)//Position - 0xCB7DD
{
	int iVar0;
	if (Local_213.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_948(int iParam0, int iParam1)//Position - 0xCB849
{
	if (Local_213.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_21);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_949(int iParam0, int iParam1)//Position - 0xCB8FD
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(sVar0);
				Stack.Push(sVar1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_15.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_950(int iParam0, int iParam1)//Position - 0xCB9A3
{
	if (__LIB_13__::func_566(iParam0, 0))
	{
		if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_951(int iParam0, int iParam1)//Position - 0xCBC44
{
	if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_952(int iParam0, int iParam1)//Position - 0xCBC73
{
	if (!__LIB_0__::func_583(iParam1, -251125078, 1))
	{
		if (__LIB_6__::func_924(Local_367.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

var func_953()//Position - 0xCBE79
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < Local_196.f_38)
	{
		iVar2 = __LIB_13__::func_443(iVar1);
		if (iVar2 < 1 && iVar2 > iVar0)
		{
			iVar0 = iVar2;
		}
		iVar1++;
	}
	return iVar0 + 1;
}

void func_954()//Position - 0xCC6EF
{
	if (Local_367.f_101 + 1 < 1)
	{
		Local_367.f_101++;
	}
}

void func_955()//Position - 0xCC70E
{
	Local_367.f_68.f_2++;
	__LIB_0__::func_579(&(Local_367.f_68));
}

int func_956()//Position - 0xCC8EA
{
	return Local_367.f_81;
}

Vector3 func_957(int iParam0)//Position - 0xCD500
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_22[iParam0 /*24*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_367.f_22[iParam0 /*24*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_367.f_22[iParam0 /*24*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

float func_958(int iParam0)//Position - 0xD0D1D
{
	switch (iParam0)
	{
		case 1:
			return (100f * Global_262145.f_24070 /* Tunable: NIGHTCLUBPOPDECAY */);
		case 2:
			return (100f * Global_262145.f_24071 /* Tunable: INIGHTCLUBPOPDECAYSTAFFUPGRADE */);
		case 3:
			if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 299)
			{
				return (100f * Global_262145.f_32580 /* Tunable: 181893059 */);
			}
			return (100f * Global_262145.f_24072 /* Tunable: NIGHTCLUBPOPGAINPERMISSION */);
		case 4:
			return (100f * Global_262145.f_24366 /* Tunable: -666817709 */);
		case 8:
			return (100f * Global_262145.f_32548 /* Tunable: NC_TROUBLEMAKER_POPULARITY_REWARD */);
		case 9:
			return (100f * Global_262145.f_32755 /* Tunable: 396823465 */);
		case 5:
			return (100f * Global_262145.f_24358 /* Tunable: 1403959568 */);
		case 6:
			return (100f * Global_262145.f_24357 /* Tunable: -22448548 */);
		case 7:
			return (100f * Global_262145.f_24367 /* Tunable: 1957287017 */);
		default:
	}
	return 0f;
}

void func_959()//Position - 0xD0FAF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_85)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_56[iVar0 /*5*/]))
		{
			if (__LIB_13__::func_450(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_367.f_56[iVar0 /*5*/]), false, true);
			}
			if (__LIB_13__::func_450(iVar0, 31))
			{
				if (__LIB_6__::func_924(Local_367.f_56[iVar0 /*5*/]))
				{
					__LIB_4__::func_509(&(Local_367.f_56[iVar0 /*5*/]));
				}
			}
			else
			{
				__LIB_1__::func_162(&(Local_367.f_56[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
}

void func_960()//Position - 0xD12D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_367.f_2[iVar0]))
			{
				__LIB_4__::func_509(&(Local_367.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_2.f_15[iVar0]))
		{
			if (__LIB_6__::func_924(Local_367.f_2.f_15[iVar0]))
			{
				__LIB_4__::func_509(&(Local_367.f_2.f_15[iVar0]));
			}
			__LIB_1__::func_162(&(Local_367.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

int func_961()//Position - 0xD1435
{
	if ((__LIB_13__::func_482(55) && !__LIB_13__::func_482(78)) && Local_213.f_15.f_18.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_2);
		switch (StackVal)
		{
			case joaat("WEAPON_STUNGUN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_RAILGUN"):
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
				return 1;
			}
		default:
	}
	return 0;
}

void func_962()//Position - 0xD151F
{
	if (__LIB_13__::func_482(40))
	{
		CAM::DO_SCREEN_FADE_IN(5000);
	}
}

bool func_963()//Position - 0xD15B1
{
	return __LIB_13__::func_482(26);
}

bool func_964(int iParam0)//Position - 0x903
{
	return __LIB_9__::func_807(&(Local_195.f_16), iParam0);
}

int func_965()//Position - 0xA32
{
	return Local_195.f_19;
}

bool func_966(int iParam0, int iParam1)//Position - 0xD51
{
	return __LIB_9__::func_807(&(Local_195.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_967(int iParam0)//Position - 0xE3BB
{
	if (!__LIB_0__::func_114() && func_300(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_968()//Position - 0x219A7
{
	return Local_195.f_19.f_5[0 /*13*/].f_11;
}

bool func_969(int iParam0, int iParam1)//Position - 0x22E07
{
	return __LIB_9__::func_807(&(Local_195.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_970(int iParam0)//Position - 0x2314E
{
	if (Local_195.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_195.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_195.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_195.f_38.f_1[iParam0 /*21*/].f_16);
}

int func_971()//Position - 0x23945
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_195.f_38)
	{
		if (Local_195.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_195.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

char* func_972(int iParam0, int iParam1)//Position - 0x2594A
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Tugboat_1";
		case 1:
			return "Sum2_Tugboat_2";
		case 2:
			return "Sum2_Tugboat_3";
		case 3:
			return "Sum2_Tugboat_4";
		case 4:
			return "Sum2_Tugboat_5";
		case 5:
			return "Sum2_Truck_1";
		case 6:
			return "Sum2_Truck_2";
		case 7:
			return "Sum2_Truck_3";
		case 8:
			return "Sum2_Truck_4";
		case 9:
			return "Sum2_Truck_5";
		default:
	}
	return "";
}

int func_973(var uParam0)//Position - 0x26318
{
	return 181;
}

int func_974(var uParam0)//Position - 0x26772
{
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR_SMALL");
}

var func_975()//Position - 0x356C5
{
	return Local_195.f_19.f_1.f_2;
}

int func_976(int iParam0)//Position - 0x91D35
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 276 && func_258(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_977(struct<3> Param0)//Position - 0xA086F
{
	if (__LIB_5__::func_693(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_84(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_978(int iParam0)//Position - 0xBE21E
{
	if (iParam0 == joaat("PICKUP_VEHICLE_ARMOUR_STANDARD") || iParam0 == joaat("PICKUP_ARMOUR_STANDARD"))
	{
		return 1;
	}
	return 0;
}

int func_979(int iParam0)//Position - 0xBE244
{
	if ((iParam0 == joaat("PICKUP_HEALTH_STANDARD") || iParam0 == joaat("PICKUP_VEHICLE_HEALTH_STANDARD")) || iParam0 == joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"))
	{
		return 1;
	}
	return 0;
}

char* func_980(int iParam0)//Position - 0xBF83C
{
	switch (iParam0)
	{
		case 0:
			return "BLIP_368" /* GXT: Missiles */;
		case 1:
			return "BLIP_354" /* GXT: Boost */;
		case 2:
			return "BLIP_484" /* GXT: Ghost */;
		case 3:
			return "BLIP_487" /* GXT: Beast */;
		case 4:
			return "BLIP_483" /* GXT: Jammed */;
		case 5:
			return "PU_SW2" /* GXT: FLIPPED */;
		case 6:
			return "PU_BT" /* GXT: ZONED */;
		case 7:
			return "BLIP_485" /* GXT: Detonator */;
		case 8:
			return "BLIP_486" /* GXT: Bomb */;
		case 9:
			return "BLIP_515" /* GXT: Hop */;
		case 10:
			return "BLIP_522" /* GXT: Deadline */;
		case 11:
			return "BLIP_524" /* GXT: Vehicle Warehouse */;
		case 12:
			return "BLIP_465" /* GXT: Random */;
		case 13:
			return "BLIP_549" /* GXT: Machine Gun */;
		case 14:
			return "BLIP_RSV" /* GXT: Random Special Vehicle */;
		case 15:
			return "";
		case 16:
			return "";
		case 17:
			return "BLIP_622" /* GXT: Blast Increase */;
		case 18:
			return "BLIP_624" /* GXT: Bomb Increase */;
		case 19:
			return "BLIP_621" /* GXT: Health */;
		default:
	}
	return "INVALID";
}

int func_981(int iParam0)//Position - 0xBFD4D
{
	switch (iParam0)
	{
		case 0:
			return 368;
		case 1:
			return 354;
		case 2:
			return 484;
		case 3:
			return 487;
		case 4:
			return 483;
		case 5:
			return 467;
		case 6:
			return 464;
		case 7:
			return 485;
		case 8:
			return 486;
		case 9:
			return 515;
		case 10:
			return 522;
		case 11:
			return 544;
		case 12:
			return 465;
		case 13:
			return 549;
		case 14:
			return 545;
		case 15:
			return 530;
		case 16:
			return 531;
		case 17:
			return 622;
		case 18:
			return 624;
		case 19:
			return 621;
		default:
	}
	return 354;
}

int func_982(int iParam0)//Position - 0xBFFA1
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 0;
			break;
		case joaat("WEAPON_KNIFE"):
			return 0;
			break;
		case joaat("WEAPON_MICROSMG"):
			return 5;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return 9;
			break;
		case joaat("WEAPON_SMG"):
			return 11;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 24;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 21;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 19;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return 20;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 17;
			break;
		case joaat("WEAPON_APPISTOL"):
			return 33;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 13;
			break;
		case joaat("WEAPON_GRENADE"):
			return 15;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (__LIB_0__::func_137(3741, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 37;
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (__LIB_0__::func_137(3741, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		case joaat("WEAPON_MG"):
			return 50;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 70;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 80;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 90;
			break;
		case joaat("WEAPON_RPG"):
			return 100;
			break;
		case joaat("WEAPON_MINIGUN"):
			return 120;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 0;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return 0;
			break;
		case joaat("WEAPON_CROWBAR"):
			return 0;
			break;
		case joaat("WEAPON_BAT"):
			return 0;
			break;
	}
	return 0;
}

int func_983(int iParam0)//Position - 0xC01BB
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return joaat("PICKUP_WEAPON_PISTOL");
		case joaat("WEAPON_COMBATPISTOL"):
			return joaat("PICKUP_WEAPON_COMBATPISTOL");
		case joaat("WEAPON_RAYPISTOL"):
			return joaat("PICKUP_WEAPON_RAYPISTOL");
		case joaat("WEAPON_APPISTOL"):
			return joaat("PICKUP_WEAPON_APPISTOL");
		case joaat("WEAPON_MICROSMG"):
			return joaat("PICKUP_WEAPON_MICROSMG");
		case joaat("WEAPON_SMG"):
			return joaat("PICKUP_WEAPON_SMG");
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("PICKUP_WEAPON_ASSAULTRIFLE");
		case joaat("WEAPON_CARBINERIFLE"):
			return joaat("PICKUP_WEAPON_CARBINERIFLE");
		case joaat("WEAPON_RAYCARBINE"):
			return joaat("PICKUP_WEAPON_RAYCARBINE");
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return joaat("PICKUP_WEAPON_ADVANCEDRIFLE");
		case joaat("WEAPON_MG"):
			return joaat("PICKUP_WEAPON_MG");
		case joaat("WEAPON_COMBATMG"):
			return joaat("PICKUP_WEAPON_COMBATMG");
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("PICKUP_WEAPON_PUMPSHOTGUN");
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return joaat("PICKUP_WEAPON_ASSAULTSHOTGUN");
		case joaat("WEAPON_SNIPERRIFLE"):
			return joaat("PICKUP_WEAPON_SNIPERRIFLE");
		case joaat("WEAPON_HEAVYSNIPER"):
			return joaat("PICKUP_WEAPON_HEAVYSNIPER");
		case joaat("WEAPON_GRENADELAUNCHER"):
			return joaat("PICKUP_WEAPON_GRENADELAUNCHER");
		case joaat("WEAPON_RPG"):
			return joaat("PICKUP_WEAPON_RPG");
		case joaat("WEAPON_MINIGUN"):
			return joaat("PICKUP_WEAPON_MINIGUN");
		case joaat("WEAPON_RAYMINIGUN"):
			return joaat("PICKUP_WEAPON_RAYMINIGUN");
		case joaat("WEAPON_GRENADE"):
			return joaat("PICKUP_WEAPON_GRENADE");
		case joaat("WEAPON_SMOKEGRENADE"):
			return joaat("PICKUP_WEAPON_SMOKEGRENADE");
		case joaat("WEAPON_STICKYBOMB"):
			return joaat("PICKUP_WEAPON_STICKYBOMB");
		case joaat("WEAPON_MOLOTOV"):
			return joaat("PICKUP_WEAPON_MOLOTOV");
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
			return joaat("PICKUP_WEAPON_ASSAULTSMG");
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return joaat("PICKUP_WEAPON_BULLPUPSHOTGUN");
		case joaat("WEAPON_PISTOL50"):
			return joaat("PICKUP_WEAPON_PISTOL50");
		case joaat("WEAPON_ASSAULTMG"):
			return joaat("PICKUP_WEAPON_ASSAULTMG");
		case joaat("WEAPON_HEAVYRIFLE"):
			return joaat("PICKUP_WEAPON_HEAVYRIFLE");
		case joaat("WEAPON_BOTTLE"):
			return joaat("PICKUP_WEAPON_BOTTLE");
		case joaat("WEAPON_SPECIALCARBINE"):
			return joaat("PICKUP_WEAPON_SPECIALCARBINE");
		case joaat("WEAPON_SNSPISTOL"):
			return joaat("PICKUP_WEAPON_SNSPISTOL");
		case joaat("WEAPON_HEAVYPISTOL"):
			return joaat("PICKUP_WEAPON_HEAVYPISTOL");
		case joaat("WEAPON_BULLPUPRIFLE"):
			return joaat("PICKUP_WEAPON_BULLPUPRIFLE");
		case joaat("WEAPON_GUSENBERG"):
			return joaat("PICKUP_WEAPON_GUSENBERG");
		case joaat("WEAPON_DAGGER"):
			return joaat("PICKUP_WEAPON_DAGGER");
		case joaat("WEAPON_VINTAGEPISTOL"):
			return joaat("PICKUP_WEAPON_VINTAGEPISTOL");
		case joaat("WEAPON_MUSKET"):
			return joaat("PICKUP_WEAPON_MUSKET");
		case joaat("WEAPON_FIREWORK"):
			return joaat("PICKUP_WEAPON_FIREWORK");
		case joaat("WEAPON_FLAREGUN"):
			return joaat("PICKUP_WEAPON_FLAREGUN");
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return joaat("PICKUP_WEAPON_HEAVYSHOTGUN");
		case joaat("WEAPON_MARKSMANRIFLE"):
			return joaat("PICKUP_WEAPON_MARKSMANRIFLE");
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return joaat("PICKUP_WEAPON_HOMINGLAUNCHER");
		case joaat("WEAPON_PROXMINE"):
			return joaat("PICKUP_WEAPON_PROXMINE");
		case joaat("WEAPON_COMBATPDW"):
			return joaat("PICKUP_WEAPON_COMBATPDW");
		case joaat("WEAPON_KNUCKLE"):
			return joaat("PICKUP_WEAPON_KNUCKLE");
		case joaat("WEAPON_MARKSMANPISTOL"):
			return joaat("PICKUP_WEAPON_MARKSMANPISTOL");
		case joaat("WEAPON_MACHETE"):
			return joaat("PICKUP_WEAPON_MACHETE");
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return joaat("PICKUP_WEAPON_MACHINEPISTOL");
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return joaat("PICKUP_WEAPON_DBSHOTGUN");
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return joaat("PICKUP_WEAPON_COMPACTRIFLE");
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return joaat("PICKUP_WEAPON_FLASHLIGHT");
			break;
		case joaat("WEAPON_HATCHET"):
			return joaat("PICKUP_WEAPON_HATCHET");
			break;
		case joaat("WEAPON_REVOLVER"):
			return joaat("PICKUP_WEAPON_REVOLVER");
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return joaat("PICKUP_WEAPON_SWITCHBLADE");
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return joaat("PICKUP_WEAPON_AUTOSHOTGUN");
		case joaat("WEAPON_MINISMG"):
			return joaat("PICKUP_WEAPON_MINISMG");
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return joaat("PICKUP_WEAPON_COMPACTLAUNCHER");
		case joaat("WEAPON_BATTLEAXE"):
			return joaat("PICKUP_WEAPON_BATTLEAXE");
		case joaat("WEAPON_PIPEBOMB"):
			return joaat("PICKUP_WEAPON_PIPEBOMB");
		case joaat("WEAPON_POOLCUE"):
			return joaat("PICKUP_WEAPON_POOLCUE");
		case joaat("WEAPON_WRENCH"):
			return joaat("PICKUP_WEAPON_WRENCH");
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("PICKUP_WEAPON_ASSAULTRIFLE_MK2");
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("PICKUP_WEAPON_CARBINERIFLE_MK2");
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("PICKUP_WEAPON_COMBATMG_MK2");
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("PICKUP_WEAPON_HEAVYSNIPER_MK2");
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("PICKUP_WEAPON_PISTOL_MK2");
		case joaat("WEAPON_SMG_MK2"):
			return joaat("PICKUP_WEAPON_SMG_MK2");
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("PICKUP_WEAPON_SNSPISTOL_MK2");
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("PICKUP_WEAPON_REVOLVER_MK2");
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("PICKUP_WEAPON_BULLPUPRIFLE_MK2");
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("PICKUP_WEAPON_SPECIALCARBINE_MK2");
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("PICKUP_WEAPON_PUMPSHOTGUN_MK2");
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("PICKUP_WEAPON_MARKSMANRIFLE_MK2");
		case joaat("WEAPON_RAILGUN"):
			return joaat("PICKUP_WEAPON_RAILGUN");
		case joaat("WEAPON_DOUBLEACTION"):
			return joaat("PICKUP_WEAPON_DOUBLEACTION");
		case joaat("WEAPON_STONE_HATCHET"):
			return joaat("PICKUP_WEAPON_STONE_HATCHET");
		case joaat("WEAPON_CERAMICPISTOL"):
			return joaat("PICKUP_WEAPON_CERAMICPISTOL");
		case joaat("WEAPON_NAVYREVOLVER"):
			return joaat("PICKUP_WEAPON_NAVYREVOLVER");
		case joaat("WEAPON_MILITARYRIFLE"):
			return joaat("PICKUP_WEAPON_MILITARYRIFLE");
		case joaat("WEAPON_COMBATSHOTGUN"):
			return joaat("PICKUP_WEAPON_COMBATSHOTGUN");
		case joaat("WEAPON_GADGETPISTOL"):
			return joaat("PICKUP_WEAPON_GADGETPISTOL");
		case joaat("WEAPON_EMPLAUNCHER"):
			return joaat("PICKUP_WEAPON_EMPLAUNCHER");
		case joaat("WEAPON_STUNGUN_MP"):
			return joaat("PICKUP_WEAPON_STUNGUN_MP");
		case joaat("WEAPON_METALDETECTOR"):
			return joaat("PICKUP_WEAPON_METALDETECTOR");
		case joaat("WEAPON_TACTICALRIFLE"):
			return joaat("PICKUP_WEAPON_TACTICALRIFLE");
		case joaat("WEAPON_PRECISIONRIFLE"):
			return joaat("PICKUP_WEAPON_PRECISIONRIFLE");
	}
	return joaat("PICKUP_WEAPON_PISTOL");
}

int func_984(int iParam0)//Position - 0xC0738
{
	if (iParam0 == joaat("PICKUP_PARACHUTE"))
	{
		return 1;
	}
	return 0;
}

int func_985(int iParam0)//Position - 0xC7A24
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_14;
}

bool func_986(int iParam0, var uParam1)//Position - 0xD2B0D
{
	return (Local_195.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_195.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

var func_987(int iParam0)//Position - 0xD7DE7
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_988(int iParam0)//Position - 0xD7E04
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_989(int iParam0)//Position - 0xD802B
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_990(int iParam0)//Position - 0xD803F
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_991(int iParam0)//Position - 0xD805E
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_992(int iParam0)//Position - 0xD80EE
{
	return Local_195.f_38.f_1[iParam0 /*21*/].f_2;
}

void func_993(int iParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x7F4
{
	struct<7> Var0;
	Var0.f_0 = -1255118495;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { Param2 };
	Var0.f_6 = iParam3;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam0);
	}
}

int func_994(int iParam0)//Position - 0xCDA4
{
	if (!__LIB_0__::func_114() && func_249(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_995(var uParam0, int iParam1)//Position - 0x235BA
{
	switch (iParam1)
	{
		case 0:
			return "RE_Crime_Scene_1";
		case 1:
			return "RE_Crime_Scene_2";
		case 2:
			return "RE_Crime_Scene_3";
		case 3:
			return "RE_Crime_Scene_4";
		case 4:
			return "RE_Crime_Scene_5";
		case 5:
			return "RE_Crime_Scene_6";
		case 6:
			return "RE_Crime_Scene_7";
		case 7:
			return "RE_Crime_Scene_8";
		case 8:
			return "RE_Crime_Scene_9";
		case 9:
			return "RE_Crime_Scene_10";
		default:
	}
	return "";
}

int func_996(var uParam0)//Position - 0x249C7
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_41 != 0;
	}
	return 0;
}

char* func_997(int iParam0)//Position - 0x291AC
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
			break;
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_SMG"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_COMBATMG"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		case joaat("WEAPON_MICROSMG"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_MG"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_MINIGUN"):
			return "MPWeaponsGang1_small";
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		case joaat("WEAPON_MOLOTOV"):
			return "MPWeaponsUnusedForNow";
			break;
		case joaat("WEAPON_PETROLCAN"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_998(int iParam0)//Position - 0x2939F
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "W_ME_KNIFE_01";
			break;
		case joaat("WEAPON_STUNGUN"):
			return "W_PI_Stungun";
			break;
		case joaat("WEAPON_PISTOL"):
			return "W_PI_Pistol";
			break;
		case joaat("GADGET_PARACHUTE"):
			return "Parachute_Main";
			break;
		case joaat("WEAPON_SMG"):
			return "W_SB_SMG";
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "W_SR_SniperRifle";
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "W_AR_CarbineRifle";
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "W_SG_PumpShotgun";
			break;
		case joaat("WEAPON_GRENADE"):
			return "W_Ex_GrenadeFrag";
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return "W_Ex_PE";
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "W_R_GrenadeLauncher";
			break;
		case joaat("WEAPON_COMBATMG"):
			return "W_MG_CombatMG";
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "W_SG_AssaultShotgun";
			break;
		case joaat("WEAPON_APPISTOL"):
			return "W_PI_AppPistol";
			break;
		case joaat("WEAPON_RPG"):
			return "W_LR_RPG";
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "W_SR_HeavySniper";
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "W_AR_AdvancedRifle";
			break;
		case joaat("WEAPON_MICROSMG"):
			return "W_SB_MicroSMG";
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "W_AR_AssaultRifle";
			break;
		case joaat("WEAPON_MG"):
			return "W_MG_MG";
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "W_SG_SAWNOFF";
			break;
		case joaat("WEAPON_MINIGUN"):
			return "W_MG_Minigun";
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "W_PI_CombatPistol";
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "W_Ex_GrenadeSmoke";
			break;
		case joaat("WEAPON_PETROLCAN"):
			return "W_AM_Jerrycan";
			break;
		case joaat("WEAPON_MOLOTOV"):
			return "W_EX_Molotov";
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "rocket";
			break;
	}
	return "";
}

char* func_999(int iParam0)//Position - 0x29592
{
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		case joaat("WEAPON_UNARMED"):
			return "";
			break;
		case joaat("WEAPON_PISTOL"):
			return "WT_PIST_DESC_S";
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTD_PIST_CBT_S";
			break;
		case joaat("WEAPON_APPISTOL"):
			return "WTD_PIST_AP_S";
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return "WTD_PIST_AP_S";
			break;
		case joaat("WEAPON_SMG"):
			return "WTD_SMG_MCR_S";
			break;
		case joaat("WEAPON_MICROSMG"):
			return "WTD_SMG_S";
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTD_RIFLE_ASL_S";
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTD_RIFLE_CBN_S";
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return "WTD_RIFLE_CBN_S";
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTD_RIFLE_ADV_S";
			break;
		case joaat("WEAPON_MG"):
			return "WTD_MG_S";
			break;
		case joaat("WEAPON_COMBATMG"):
			return "WTD__MG_CBT_S";
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTD_SG_PMP_S";
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTD_SG_SOF_S";
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTD_SG_ASL_S";
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTD_SNIP_HVY_S";
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTD_SNIP_RMT_S";
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTD_SNIP_RIF_S";
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTD_GL_S";
			break;
		case joaat("WEAPON_RPG"):
			return "WTD_RPG_S";
			break;
		case joaat("WEAPON_MINIGUN"):
			return "WTD_MINIGUN_S";
			break;
		case joaat("WEAPON_GRENADE"):
			return "WTD_GNADE_S";
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "WTD_GNADE_SMK_S";
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return "WTD_GNADE_STK_S";
			break;
		case joaat("WEAPON_MOLOTOV"):
			return "";
			break;
		case joaat("WEAPON_STUNGUN"):
			return "WTD_STUN_S";
			break;
		case joaat("WEAPON_PETROLCAN"):
			return "WTD_PETROL_S" /* GXT: Can be used to leave a trail of gasoline that can be ignited */;
			break;
		case joaat("WEAPON_DIGISCANNER"):
			return "WTD_DIGI_S";
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			return "WTD_ELCFEN_S";
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			return "";
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "";
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			return "";
			break;
		case joaat("OBJECT"):
			return "";
			break;
		case joaat("GADGET_PARACHUTE"):
			return "";
			break;
		case joaat("AMMO_RPG"):
			return "";
			break;
		case joaat("AMMO_TANK"):
			return "";
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		case joaat("WEAPON_KNIFE"):
			return "WT_KNIF_DESC_S";
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return "";
			break;
		case joaat("WEAPON_HAMMER"):
			return "";
			break;
		case joaat("WEAPON_BAT"):
			return "";
			break;
		case joaat("WEAPON_CROWBAR"):
			return "";
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return "";
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			return "";
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			return "";
			break;
		case joaat("WEAPON_BOTTLE"):
			return "";
			break;
		case joaat("WEAPON_HATCHET"):
			return "";
			break;
		case joaat("WEAPON_KNUCKLE"):
			return "";
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTD_SWBLADE" /* GXT: From your pocket to hilt-deep in the other guy's ribs in under a second: folding knives will never go out of style. Part of Executives and Other Criminals. */;
			break;
		case joaat("WEAPON_REVOLVER"):
			return "WTD_REVOLVER" /* GXT: A handgun with enough stopping power to drop a crazed rhino, and heavy enough to beat it to death if you're out of ammo. Part of Executives and Other Criminals. */;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			return "";
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

}