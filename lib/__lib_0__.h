namespace __LIB_0__ {
	
void func_0(int* iParam0)//Position - 0x307
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

bool func_1(char* sParam0)//Position - 0x468
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_2(bool bParam0)//Position - 0x78A
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_3()//Position - 0xD56
{
	return Global_31959;
}

int func_4(int iParam0, int iParam1)//Position - 0xD61
{
	int iVar0;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_5()//Position - 0xDD0
{
	return Global_1574918;
}

void func_6(int iParam0)//Position - 0xE35
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100441.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100441.f_20), 13);
	}
}

void func_7()//Position - 0xE5E
{
	Global_78559 = { 0f, 0f, 0f };
	Global_78562 = 0f;
	Global_100441.f_21 = 145;
}

void func_8()//Position - 0xE7C
{
	StringCopy(&Global_78551, "", 16);
	StringCopy(&Global_78555, "", 16);
}

void func_9()//Position - 0xE96
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_100441.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_10()//Position - 0xF0A
{
	MISC::CLEAR_BIT(&(Global_100441.f_20), 22);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 8);
}

void func_11()//Position - 0xF2A
{
	if (Global_100441.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100441.f_16));
		Global_100441.f_16 = 0;
	}
	if (Global_100441.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100441.f_17));
		Global_100441.f_17 = 0;
	}
}

void func_12(int iParam0)//Position - 0xF68
{
	if (iParam0 == 1)
	{
		Global_43601 = 1;
	}
	else
	{
		Global_43601 = 0;
	}
}

void func_13(var uParam0)//Position - 0x1521
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_14(var uParam0)//Position - 0x156B
{
	int iVar0;
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_15(var uParam0)//Position - 0x161B
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_16(var uParam0)//Position - 0x1639
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_17(var uParam0)//Position - 0x1719
{
	*uParam0 = -15;
}

void func_18()//Position - 0x1740
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	MISC::SET_BIT(&Global_8136, 25);
	MISC::SET_BIT(&Global_8137, 11);
}

int func_19(int iParam0)//Position - 0x1AC6
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 0;
			break;
		case joaat("Player_One"):
			return 1;
			break;
		case joaat("Player_Two"):
			return 2;
			break;
		default:
			break;
	}
	return 145;
}

int func_20(int iParam0, int iParam1, int iParam2)//Position - 0x239B
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2)//Position - 0x2AA5
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x3A99
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			break;
		case joaat("Player_One"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_23(int iParam0, int iParam1, int iParam2)//Position - 0x40A5
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		case joaat("Player_One"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		case joaat("Player_Two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0x45F9
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("Player_One"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_25(int iParam0, int iParam1)//Position - 0x49D0
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 6;
					break;
				case 3:
					return 181;
					break;
				case 4:
					return 113;
					break;
				case 5:
					return 14;
					break;
				case 6:
					return 99;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 24;
					break;
				case 9:
					return 20;
					break;
				case 10:
					return 48;
					break;
				case 11:
					return 45;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 21;
					break;
				case 3:
					return 318;
					break;
				case 4:
					return 117;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 134;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 77;
					break;
				case 9:
					return 12;
					break;
				case 10:
					return 53;
					break;
				case 11:
					return 63;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 6;
					break;
				case 2:
					return 9;
					break;
				case 3:
					return 242;
					break;
				case 4:
					return 104;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 84;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 18;
					break;
				case 9:
					return 17;
					break;
				case 10:
					return 33;
					break;
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 91;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 92;
					break;
				case 8:
					return 241;
					break;
				case 9:
					return 46;
					break;
				case 10:
					return 7;
					break;
				case 11:
					return 237;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 92;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 55;
					break;
				case 8:
					return 136;
					break;
				case 9:
					return 36;
					break;
				case 10:
					return 6;
					break;
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_26(int iParam0)//Position - 0x4D77
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
			break;
		case joaat("Player_One"):
			return 175;
			break;
		case joaat("Player_Two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
			break;
		case joaat("MP_F_Freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_27(int iParam0, int iParam1)//Position - 0x4ED4
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 58;
					break;
				case 2:
					return 112;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 82;
					break;
				case 2:
					return 158;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 88;
					break;
				case 2:
					return 154;
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 319;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_28(int iParam0)//Position - 0x50CD
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 53;
			break;
		case joaat("Player_One"):
			return 47;
			break;
		case joaat("Player_Two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
			break;
		case joaat("MP_F_Freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_29(int iParam0)//Position - 0x512C
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 6;
			break;
		case 7:
			return 7;
			break;
		case 8:
			return 8;
			break;
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x5DDB
{
	int iVar0;
	*uParam2 = 13122;
	if ((bParam4 && Global_4538418) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4538418)
		{
			iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
		else
		{
			iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	else
	{
		iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				case 1:
					*uParam2 = 1762;
					break;
				case 2:
					*uParam2 = 1763;
					break;
				case 3:
					*uParam2 = 1764;
					break;
				case 4:
					*uParam2 = 1765;
					break;
				case 5:
					*uParam2 = 1766;
					break;
				case 6:
					*uParam2 = 1773;
					break;
				case 7:
					*uParam2 = 1774;
					break;
				case 8:
					*uParam2 = 1775;
					break;
				case 9:
					*uParam2 = 1776;
					break;
				case 10:
					*uParam2 = 1777;
					break;
				case 11:
					*uParam2 = 1778;
					break;
				case 12:
					*uParam2 = 1779;
					break;
				case 13:
					*uParam2 = 1787;
					break;
				case 14:
					*uParam2 = 1788;
					break;
				case 15:
					*uParam2 = 1889;
					break;
				case 16:
					*uParam2 = 1890;
					break;
				case 17:
					*uParam2 = 1921;
					break;
				case 18:
					*uParam2 = 1935;
					break;
				case 19:
					*uParam2 = 1936;
					break;
				case 20:
					*uParam2 = 1937;
					break;
				case 21:
					*uParam2 = 1938;
					break;
				case 22:
					*uParam2 = 1939;
					break;
				case 23:
					*uParam2 = 2043;
					break;
				case 24:
					*uParam2 = 2044;
					break;
				case 25:
					*uParam2 = 2070;
					break;
				case 26:
					*uParam2 = 2071;
					break;
				case 27:
					*uParam2 = 2072;
					break;
				case 28:
					*uParam2 = 2073;
					break;
				case 29:
					*uParam2 = 2074;
					break;
				case 30:
					*uParam2 = 2075;
					break;
				case 31:
					*uParam2 = 2076;
					break;
				case 32:
					*uParam2 = 2077;
					break;
				case 33:
					*uParam2 = 2078;
					break;
				case 34:
					*uParam2 = 2079;
					break;
				case 35:
					*uParam2 = 2326;
					break;
				case 36:
					*uParam2 = 2327;
					break;
				case 37:
					*uParam2 = 2391;
					break;
				case 38:
					*uParam2 = 2392;
					break;
				case 39:
					*uParam2 = 2393;
					break;
				case 40:
					*uParam2 = 2394;
					break;
				case 41:
					*uParam2 = 2453;
					break;
				case 42:
					*uParam2 = 2454;
					break;
				case 43:
					*uParam2 = 2455;
					break;
				case 44:
					*uParam2 = 2456;
					break;
				case 45:
					*uParam2 = 2457;
					break;
				case 46:
					*uParam2 = 2458;
					break;
				case 47:
					*uParam2 = 2459;
					break;
				case 48:
					*uParam2 = 2460;
					break;
				case 49:
					*uParam2 = 2461;
					break;
				case 50:
					*uParam2 = 2462;
					break;
				case 51:
					*uParam2 = 2592;
					break;
				case 52:
					*uParam2 = 2593;
					break;
				case 53:
					*uParam2 = 2594;
					break;
				case 54:
					*uParam2 = 2595;
					break;
				case 55:
					*uParam2 = 2596;
					break;
				case 56:
					*uParam2 = 2597;
					break;
				case 57:
					*uParam2 = 2598;
					break;
				case 58:
					*uParam2 = 2599;
					break;
				case 59:
					*uParam2 = 2600;
					break;
				case 60:
					*uParam2 = 2601;
					break;
				case 61:
					*uParam2 = 2602;
					break;
				case 62:
					*uParam2 = 3199;
					break;
				case 63:
					*uParam2 = 3200;
					break;
				case 64:
					*uParam2 = 3201;
					break;
				case 65:
					*uParam2 = 3202;
					break;
				case 66:
					*uParam2 = 3203;
					break;
				case 67:
					*uParam2 = 3204;
					break;
				case 68:
					*uParam2 = 3672;
					break;
				case 69:
					*uParam2 = 3673;
					break;
				case 70:
					*uParam2 = 3674;
					break;
				case 71:
					*uParam2 = 3675;
					break;
				case 72:
					*uParam2 = 3676;
					break;
				case 73:
					*uParam2 = 3677;
					break;
				case 74:
					*uParam2 = 3678;
					break;
				case 75:
					*uParam2 = 3679;
					break;
				case 76:
					*uParam2 = 3680;
					break;
				case 77:
					*uParam2 = 3681;
					break;
				case 78:
					*uParam2 = 3795;
					break;
				case 79:
					*uParam2 = 3796;
					break;
				case 80:
					*uParam2 = 3797;
					break;
				case 81:
					*uParam2 = 3798;
					break;
				case 82:
					*uParam2 = 3799;
					break;
				case 83:
					*uParam2 = 3800;
					break;
				case 84:
					*uParam2 = 3801;
					break;
				case 85:
					*uParam2 = 3802;
					break;
				case 86:
					*uParam2 = 3905;
					break;
				case 87:
					*uParam2 = 3906;
					break;
				case 88:
					*uParam2 = 3907;
					break;
				case 89:
					*uParam2 = 5340;
					break;
				case 90:
					*uParam2 = 5341;
					break;
				case 91:
					*uParam2 = 5342;
					break;
				case 92:
					*uParam2 = 5343;
					break;
				case 93:
					*uParam2 = 5344;
					break;
				case 94:
					*uParam2 = 5345;
					break;
				case 95:
					*uParam2 = 5346;
					break;
				case 96:
					*uParam2 = 5347;
					break;
				case 97:
					*uParam2 = 5348;
					break;
				case 98:
					*uParam2 = 5349;
					break;
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				case 101:
					*uParam2 = 5397;
					break;
				case 102:
					*uParam2 = 5398;
					break;
				case 103:
					*uParam2 = 5399;
					break;
				case 104:
					*uParam2 = 5400;
					break;
				case 105:
					*uParam2 = 5401;
					break;
				case 106:
					*uParam2 = 5402;
					break;
				case 107:
					*uParam2 = 5403;
					break;
				case 108:
					*uParam2 = 5404;
					break;
				case 109:
					*uParam2 = 5405;
					break;
				case 110:
					*uParam2 = 5406;
					break;
				case 111:
					*uParam2 = 5407;
					break;
				case 112:
					*uParam2 = 5408;
					break;
				case 113:
					*uParam2 = 5409;
					break;
				case 114:
					*uParam2 = 5410;
					break;
				case 115:
					*uParam2 = 5411;
					break;
				case 116:
					*uParam2 = 5412;
					break;
				case 117:
					*uParam2 = 5413;
					break;
				case 118:
					*uParam2 = 5414;
					break;
				case 119:
					*uParam2 = 5415;
					break;
				case 120:
					*uParam2 = 5416;
					break;
				case 121:
					*uParam2 = 5417;
					break;
				case 122:
					*uParam2 = 5418;
					break;
				case 123:
					*uParam2 = 5419;
					break;
				case 124:
					*uParam2 = 6125;
					break;
				case 125:
					*uParam2 = 6126;
					break;
				case 126:
					*uParam2 = 6127;
					break;
				case 127:
					*uParam2 = 6128;
					break;
				case 128:
					*uParam2 = 6129;
					break;
				case 129:
					*uParam2 = 6130;
					break;
				case 130:
					*uParam2 = 6131;
					break;
				case 131:
					*uParam2 = 6132;
					break;
				case 132:
					*uParam2 = 6133;
					break;
				case 133:
					*uParam2 = 6134;
					break;
				case 134:
					*uParam2 = 6135;
					break;
				case 135:
					*uParam2 = 6136;
					break;
				case 136:
					*uParam2 = 6137;
					break;
				case 137:
					*uParam2 = 6138;
					break;
				case 138:
					*uParam2 = 6139;
					break;
				case 139:
					*uParam2 = 6438;
					break;
				case 140:
					*uParam2 = 6439;
					break;
				case 141:
					*uParam2 = 6440;
					break;
				case 142:
					*uParam2 = 6441;
					break;
				case 143:
					*uParam2 = 6442;
					break;
				case 144:
					*uParam2 = 6443;
					break;
				case 145:
					*uParam2 = 6444;
					break;
				case 146:
					*uParam2 = 6445;
					break;
				case 147:
					*uParam2 = 6446;
					break;
				case 148:
					*uParam2 = 6447;
					break;
				case 149:
					*uParam2 = 6448;
					break;
				case 150:
					*uParam2 = 6449;
					break;
				case 151:
					*uParam2 = 6450;
					break;
				case 152:
					*uParam2 = 6451;
					break;
				case 153:
					*uParam2 = 6452;
					break;
				case 154:
					*uParam2 = 7269;
					break;
				case 155:
					*uParam2 = 7270;
					break;
				case 156:
					*uParam2 = 7271;
					break;
				case 157:
					*uParam2 = 7272;
					break;
				case 158:
					*uParam2 = 7273;
					break;
				case 159:
					*uParam2 = 7274;
					break;
				case 160:
					*uParam2 = 7275;
					break;
				case 161:
					*uParam2 = 7882;
					break;
				case 162:
					*uParam2 = 7883;
					break;
				case 163:
					*uParam2 = 7884;
					break;
				case 164:
					*uParam2 = 7885;
					break;
				case 165:
					*uParam2 = 7886;
					break;
				case 166:
					*uParam2 = 7887;
					break;
				case 167:
					*uParam2 = 7888;
					break;
				case 168:
					*uParam2 = 7889;
					break;
				case 169:
					*uParam2 = 7890;
					break;
				case 170:
					*uParam2 = 7891;
					break;
				case 171:
					*uParam2 = 7892;
					break;
				case 172:
					*uParam2 = 7893;
					break;
				case 173:
					*uParam2 = 7894;
					break;
				case 174:
					*uParam2 = 7895;
					break;
				case 175:
					*uParam2 = 7896;
					break;
				case 176:
					*uParam2 = 8302;
					break;
				case 177:
					*uParam2 = 8303;
					break;
				case 178:
					*uParam2 = 8304;
					break;
				case 179:
					*uParam2 = 8305;
					break;
				case 180:
					*uParam2 = 8306;
					break;
				case 181:
					*uParam2 = 8307;
					break;
				case 182:
					*uParam2 = 8308;
					break;
				case 183:
					*uParam2 = 8309;
					break;
				case 184:
					*uParam2 = 8310;
					break;
				case 185:
					*uParam2 = 8311;
					break;
				case 186:
					*uParam2 = 8312;
					break;
				case 187:
					*uParam2 = 8313;
					break;
				case 188:
					*uParam2 = 8314;
					break;
				case 189:
					*uParam2 = 8315;
					break;
				case 190:
					*uParam2 = 8316;
					break;
				case 191:
					*uParam2 = 8317;
					break;
				case 192:
					*uParam2 = 8318;
					break;
				case 193:
					*uParam2 = 8319;
					break;
				case 194:
					*uParam2 = 8320;
					break;
				case 195:
					*uParam2 = 8321;
					break;
				case 196:
					*uParam2 = 8322;
					break;
				case 197:
					*uParam2 = 8323;
					break;
				case 198:
					*uParam2 = 8324;
					break;
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				case 201:
					*uParam2 = 8941;
					break;
				case 202:
					*uParam2 = 8942;
					break;
				case 203:
					*uParam2 = 8943;
					break;
				case 204:
					*uParam2 = 8944;
					break;
				case 205:
					*uParam2 = 8945;
					break;
				case 206:
					*uParam2 = 9424;
					break;
				case 207:
					*uParam2 = 9425;
					break;
				case 208:
					*uParam2 = 9426;
					break;
				case 209:
					*uParam2 = 9427;
					break;
				case 210:
					*uParam2 = 9428;
					break;
				case 211:
					*uParam2 = 9429;
					break;
				case 212:
					*uParam2 = 9430;
					break;
				case 213:
					*uParam2 = 9431;
					break;
				case 214:
					*uParam2 = 9432;
					break;
				case 215:
					*uParam2 = 9433;
					break;
				case 216:
					*uParam2 = 9434;
					break;
				case 217:
					*uParam2 = 9435;
					break;
				case 218:
					*uParam2 = 9436;
					break;
				case 219:
					*uParam2 = 9437;
					break;
				case 220:
					*uParam2 = 9438;
					break;
				case 221:
					*uParam2 = 9439;
					break;
				case 222:
					*uParam2 = 9440;
					break;
				case 223:
					*uParam2 = 9441;
					break;
				case 224:
					*uParam2 = 9442;
					break;
				case 225:
					*uParam2 = 9443;
					break;
				case 226:
					*uParam2 = 9444;
					break;
				case 227:
					*uParam2 = 9445;
					break;
				case 228:
					*uParam2 = 9446;
					break;
				case 229:
					*uParam2 = 9447;
					break;
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10303;
					break;
				case 232:
					*uParam2 = 10304;
					break;
				case 233:
					*uParam2 = 10305;
					break;
				case 234:
					*uParam2 = 10306;
					break;
				case 235:
					*uParam2 = 10307;
					break;
				case 236:
					*uParam2 = 10308;
					break;
				case 237:
					*uParam2 = 10309;
					break;
				case 238:
					*uParam2 = 10310;
					break;
				case 239:
					*uParam2 = 10311;
					break;
				case 240:
					*uParam2 = 10312;
					break;
				case 241:
					*uParam2 = 10313;
					break;
				case 242:
					*uParam2 = 10314;
					break;
				case 243:
					*uParam2 = 10315;
					break;
				case 244:
					*uParam2 = 10316;
					break;
				case 245:
					*uParam2 = 10317;
					break;
				case 246:
					*uParam2 = 10318;
					break;
				case 247:
					*uParam2 = 10319;
					break;
				case 248:
					*uParam2 = 10320;
					break;
				case 249:
					*uParam2 = 10321;
					break;
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				case 252:
					*uParam2 = 10420;
					break;
				case 253:
					*uParam2 = 10421;
					break;
				case 254:
					*uParam2 = 10422;
					break;
				case 255:
					*uParam2 = 10423;
					break;
				case 256:
					*uParam2 = 10424;
					break;
				case 257:
					*uParam2 = 10425;
					break;
				case 258:
					*uParam2 = 10426;
					break;
				case 259:
					*uParam2 = 10427;
					break;
				case 260:
					*uParam2 = 10428;
					break;
			}
			break;
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				case 1:
					*uParam2 = 1768;
					break;
				case 2:
					*uParam2 = 1769;
					break;
				case 3:
					*uParam2 = 1770;
					break;
				case 4:
					*uParam2 = 1771;
					break;
				case 5:
					*uParam2 = 1772;
					break;
				case 6:
					*uParam2 = 1780;
					break;
				case 7:
					*uParam2 = 1781;
					break;
				case 8:
					*uParam2 = 1782;
					break;
				case 9:
					*uParam2 = 1783;
					break;
				case 10:
					*uParam2 = 1784;
					break;
				case 11:
					*uParam2 = 1785;
					break;
				case 12:
					*uParam2 = 1786;
					break;
				case 13:
					*uParam2 = 1789;
					break;
				case 14:
					*uParam2 = 1790;
					break;
				case 15:
					*uParam2 = 1891;
					break;
				case 16:
					*uParam2 = 1892;
					break;
				case 17:
					*uParam2 = 1922;
					break;
				case 18:
					*uParam2 = 1940;
					break;
				case 19:
					*uParam2 = 1941;
					break;
				case 20:
					*uParam2 = 1942;
					break;
				case 21:
					*uParam2 = 1943;
					break;
				case 22:
					*uParam2 = 1944;
					break;
				case 23:
					*uParam2 = 2045;
					break;
				case 24:
					*uParam2 = 2046;
					break;
				case 25:
					*uParam2 = 2080;
					break;
				case 26:
					*uParam2 = 2081;
					break;
				case 27:
					*uParam2 = 2082;
					break;
				case 28:
					*uParam2 = 2083;
					break;
				case 29:
					*uParam2 = 2084;
					break;
				case 30:
					*uParam2 = 2085;
					break;
				case 31:
					*uParam2 = 2086;
					break;
				case 32:
					*uParam2 = 2087;
					break;
				case 33:
					*uParam2 = 2088;
					break;
				case 34:
					*uParam2 = 2089;
					break;
				case 35:
					*uParam2 = 2328;
					break;
				case 36:
					*uParam2 = 2329;
					break;
				case 37:
					*uParam2 = 2395;
					break;
				case 38:
					*uParam2 = 2396;
					break;
				case 39:
					*uParam2 = 2397;
					break;
				case 40:
					*uParam2 = 2398;
					break;
				case 41:
					*uParam2 = 2463;
					break;
				case 42:
					*uParam2 = 2464;
					break;
				case 43:
					*uParam2 = 2465;
					break;
				case 44:
					*uParam2 = 2466;
					break;
				case 45:
					*uParam2 = 2467;
					break;
				case 46:
					*uParam2 = 2468;
					break;
				case 47:
					*uParam2 = 2469;
					break;
				case 48:
					*uParam2 = 2470;
					break;
				case 49:
					*uParam2 = 2471;
					break;
				case 50:
					*uParam2 = 2472;
					break;
				case 51:
					*uParam2 = 2603;
					break;
				case 52:
					*uParam2 = 2604;
					break;
				case 53:
					*uParam2 = 2605;
					break;
				case 54:
					*uParam2 = 2606;
					break;
				case 55:
					*uParam2 = 2607;
					break;
				case 56:
					*uParam2 = 2608;
					break;
				case 57:
					*uParam2 = 2609;
					break;
				case 58:
					*uParam2 = 2610;
					break;
				case 59:
					*uParam2 = 2611;
					break;
				case 60:
					*uParam2 = 2612;
					break;
				case 61:
					*uParam2 = 2613;
					break;
				case 62:
					*uParam2 = 3205;
					break;
				case 63:
					*uParam2 = 3206;
					break;
				case 64:
					*uParam2 = 3207;
					break;
				case 65:
					*uParam2 = 3208;
					break;
				case 66:
					*uParam2 = 3209;
					break;
				case 67:
					*uParam2 = 3210;
					break;
				case 68:
					*uParam2 = 3682;
					break;
				case 69:
					*uParam2 = 3683;
					break;
				case 70:
					*uParam2 = 3684;
					break;
				case 71:
					*uParam2 = 3685;
					break;
				case 72:
					*uParam2 = 3686;
					break;
				case 73:
					*uParam2 = 3687;
					break;
				case 74:
					*uParam2 = 3688;
					break;
				case 75:
					*uParam2 = 3689;
					break;
				case 76:
					*uParam2 = 3690;
					break;
				case 77:
					*uParam2 = 3691;
					break;
				case 78:
					*uParam2 = 3803;
					break;
				case 79:
					*uParam2 = 3804;
					break;
				case 80:
					*uParam2 = 3805;
					break;
				case 81:
					*uParam2 = 3806;
					break;
				case 82:
					*uParam2 = 3807;
					break;
				case 83:
					*uParam2 = 3808;
					break;
				case 84:
					*uParam2 = 3809;
					break;
				case 85:
					*uParam2 = 3810;
					break;
				case 86:
					*uParam2 = 3908;
					break;
				case 87:
					*uParam2 = 3909;
					break;
				case 88:
					*uParam2 = 3910;
					break;
				case 89:
					*uParam2 = 5352;
					break;
				case 90:
					*uParam2 = 5353;
					break;
				case 91:
					*uParam2 = 5354;
					break;
				case 92:
					*uParam2 = 5355;
					break;
				case 93:
					*uParam2 = 5356;
					break;
				case 94:
					*uParam2 = 5357;
					break;
				case 95:
					*uParam2 = 5358;
					break;
				case 96:
					*uParam2 = 5359;
					break;
				case 97:
					*uParam2 = 5360;
					break;
				case 98:
					*uParam2 = 5361;
					break;
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				case 101:
					*uParam2 = 5420;
					break;
				case 102:
					*uParam2 = 5421;
					break;
				case 103:
					*uParam2 = 5422;
					break;
				case 104:
					*uParam2 = 5423;
					break;
				case 105:
					*uParam2 = 5424;
					break;
				case 106:
					*uParam2 = 5425;
					break;
				case 107:
					*uParam2 = 5426;
					break;
				case 108:
					*uParam2 = 5427;
					break;
				case 109:
					*uParam2 = 5428;
					break;
				case 110:
					*uParam2 = 5429;
					break;
				case 111:
					*uParam2 = 5430;
					break;
				case 112:
					*uParam2 = 5431;
					break;
				case 113:
					*uParam2 = 5432;
					break;
				case 114:
					*uParam2 = 5433;
					break;
				case 115:
					*uParam2 = 5434;
					break;
				case 116:
					*uParam2 = 5435;
					break;
				case 117:
					*uParam2 = 5436;
					break;
				case 118:
					*uParam2 = 5437;
					break;
				case 119:
					*uParam2 = 5438;
					break;
				case 120:
					*uParam2 = 5439;
					break;
				case 121:
					*uParam2 = 5440;
					break;
				case 122:
					*uParam2 = 5441;
					break;
				case 123:
					*uParam2 = 5442;
					break;
				case 124:
					*uParam2 = 6140;
					break;
				case 125:
					*uParam2 = 6141;
					break;
				case 126:
					*uParam2 = 6142;
					break;
				case 127:
					*uParam2 = 6143;
					break;
				case 128:
					*uParam2 = 6144;
					break;
				case 129:
					*uParam2 = 6145;
					break;
				case 130:
					*uParam2 = 6146;
					break;
				case 131:
					*uParam2 = 6147;
					break;
				case 132:
					*uParam2 = 6148;
					break;
				case 133:
					*uParam2 = 6149;
					break;
				case 134:
					*uParam2 = 6150;
					break;
				case 135:
					*uParam2 = 6151;
					break;
				case 136:
					*uParam2 = 6152;
					break;
				case 137:
					*uParam2 = 6153;
					break;
				case 138:
					*uParam2 = 6154;
					break;
				case 139:
					*uParam2 = 6453;
					break;
				case 140:
					*uParam2 = 6454;
					break;
				case 141:
					*uParam2 = 6455;
					break;
				case 142:
					*uParam2 = 6456;
					break;
				case 143:
					*uParam2 = 6457;
					break;
				case 144:
					*uParam2 = 6458;
					break;
				case 145:
					*uParam2 = 6459;
					break;
				case 146:
					*uParam2 = 6460;
					break;
				case 147:
					*uParam2 = 6461;
					break;
				case 148:
					*uParam2 = 6462;
					break;
				case 149:
					*uParam2 = 6463;
					break;
				case 150:
					*uParam2 = 6464;
					break;
				case 151:
					*uParam2 = 6465;
					break;
				case 152:
					*uParam2 = 6466;
					break;
				case 153:
					*uParam2 = 6467;
					break;
				case 154:
					*uParam2 = 7276;
					break;
				case 155:
					*uParam2 = 7277;
					break;
				case 156:
					*uParam2 = 7278;
					break;
				case 157:
					*uParam2 = 7279;
					break;
				case 158:
					*uParam2 = 7280;
					break;
				case 159:
					*uParam2 = 7281;
					break;
				case 160:
					*uParam2 = 7282;
					break;
				case 161:
					*uParam2 = 7897;
					break;
				case 162:
					*uParam2 = 7898;
					break;
				case 163:
					*uParam2 = 7899;
					break;
				case 164:
					*uParam2 = 7900;
					break;
				case 165:
					*uParam2 = 7901;
					break;
				case 166:
					*uParam2 = 7902;
					break;
				case 167:
					*uParam2 = 7903;
					break;
				case 168:
					*uParam2 = 7904;
					break;
				case 169:
					*uParam2 = 7905;
					break;
				case 170:
					*uParam2 = 7906;
					break;
				case 171:
					*uParam2 = 7907;
					break;
				case 172:
					*uParam2 = 7908;
					break;
				case 173:
					*uParam2 = 7909;
					break;
				case 174:
					*uParam2 = 7910;
					break;
				case 175:
					*uParam2 = 7911;
					break;
				case 176:
					*uParam2 = 8327;
					break;
				case 177:
					*uParam2 = 8328;
					break;
				case 178:
					*uParam2 = 8329;
					break;
				case 179:
					*uParam2 = 8330;
					break;
				case 180:
					*uParam2 = 8331;
					break;
				case 181:
					*uParam2 = 8332;
					break;
				case 182:
					*uParam2 = 8333;
					break;
				case 183:
					*uParam2 = 8334;
					break;
				case 184:
					*uParam2 = 8335;
					break;
				case 185:
					*uParam2 = 8336;
					break;
				case 186:
					*uParam2 = 8337;
					break;
				case 187:
					*uParam2 = 8338;
					break;
				case 188:
					*uParam2 = 8339;
					break;
				case 189:
					*uParam2 = 8340;
					break;
				case 190:
					*uParam2 = 8341;
					break;
				case 191:
					*uParam2 = 8342;
					break;
				case 192:
					*uParam2 = 8343;
					break;
				case 193:
					*uParam2 = 8344;
					break;
				case 194:
					*uParam2 = 8345;
					break;
				case 195:
					*uParam2 = 8346;
					break;
				case 196:
					*uParam2 = 8347;
					break;
				case 197:
					*uParam2 = 8348;
					break;
				case 198:
					*uParam2 = 8349;
					break;
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				case 201:
					*uParam2 = 8946;
					break;
				case 202:
					*uParam2 = 8947;
					break;
				case 203:
					*uParam2 = 8948;
					break;
				case 204:
					*uParam2 = 8949;
					break;
				case 205:
					*uParam2 = 8950;
					break;
				case 206:
					*uParam2 = 9449;
					break;
				case 207:
					*uParam2 = 9450;
					break;
				case 208:
					*uParam2 = 9451;
					break;
				case 209:
					*uParam2 = 9452;
					break;
				case 210:
					*uParam2 = 9453;
					break;
				case 211:
					*uParam2 = 9454;
					break;
				case 212:
					*uParam2 = 9455;
					break;
				case 213:
					*uParam2 = 9456;
					break;
				case 214:
					*uParam2 = 9457;
					break;
				case 215:
					*uParam2 = 9458;
					break;
				case 216:
					*uParam2 = 9459;
					break;
				case 217:
					*uParam2 = 9460;
					break;
				case 218:
					*uParam2 = 9461;
					break;
				case 219:
					*uParam2 = 9462;
					break;
				case 220:
					*uParam2 = 9463;
					break;
				case 221:
					*uParam2 = 9464;
					break;
				case 222:
					*uParam2 = 9465;
					break;
				case 223:
					*uParam2 = 9466;
					break;
				case 224:
					*uParam2 = 9467;
					break;
				case 225:
					*uParam2 = 9468;
					break;
				case 226:
					*uParam2 = 9469;
					break;
				case 227:
					*uParam2 = 9470;
					break;
				case 228:
					*uParam2 = 9471;
					break;
				case 229:
					*uParam2 = 9472;
					break;
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10323;
					break;
				case 232:
					*uParam2 = 10324;
					break;
				case 233:
					*uParam2 = 10325;
					break;
				case 234:
					*uParam2 = 10326;
					break;
				case 235:
					*uParam2 = 10327;
					break;
				case 236:
					*uParam2 = 10328;
					break;
				case 237:
					*uParam2 = 10329;
					break;
				case 238:
					*uParam2 = 10330;
					break;
				case 239:
					*uParam2 = 10331;
					break;
				case 240:
					*uParam2 = 10332;
					break;
				case 241:
					*uParam2 = 10333;
					break;
				case 242:
					*uParam2 = 10334;
					break;
				case 243:
					*uParam2 = 10335;
					break;
				case 244:
					*uParam2 = 10336;
					break;
				case 245:
					*uParam2 = 10337;
					break;
				case 246:
					*uParam2 = 10338;
					break;
				case 247:
					*uParam2 = 10339;
					break;
				case 248:
					*uParam2 = 10340;
					break;
				case 249:
					*uParam2 = 10341;
					break;
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				case 252:
					*uParam2 = 10430;
					break;
				case 253:
					*uParam2 = 10431;
					break;
				case 254:
					*uParam2 = 10432;
					break;
				case 255:
					*uParam2 = 10433;
					break;
				case 256:
					*uParam2 = 10434;
					break;
				case 257:
					*uParam2 = 10435;
					break;
				case 258:
					*uParam2 = 10436;
					break;
				case 259:
					*uParam2 = 10437;
					break;
				case 260:
					*uParam2 = 9473;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 13122;
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x83D7
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x927A
{
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!BitTest(Global_78130[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_33(int iParam0)//Position - 0x9358
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 6:
			return 6;
			break;
		case 5:
			return 5;
			break;
		case 8:
			return 8;
			break;
		case 9:
			return 9;
			break;
		case 10:
			return 10;
			break;
		case 1:
			return 1;
			break;
		case 7:
			return 7;
			break;
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x9E61
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xBF8B
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

bool func_36(int iParam0, int iParam1, var uParam2)//Position - 0xD71A
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				case 3:
					*uParam2 = 1430;
					break;
				case 4:
					*uParam2 = 996;
					break;
				case 6:
					*uParam2 = 1004;
					break;
				case 8:
					*uParam2 = 1431;
					break;
				case 9:
					*uParam2 = 1439;
					break;
				case 10:
					*uParam2 = 1441;
					break;
				case 1:
					*uParam2 = 1012;
					break;
				case 7:
					*uParam2 = 1442;
					break;
				case 11:
					*uParam2 = 988;
					break;
				case 14:
					*uParam2 = 1020;
					break;
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				case 4:
					*uParam2 = 997;
					break;
				case 6:
					*uParam2 = 1005;
					break;
				case 8:
					*uParam2 = 1432;
					break;
				case 9:
					*uParam2 = 1440;
					break;
				case 7:
					*uParam2 = 1443;
					break;
				case 11:
					*uParam2 = 989;
					break;
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				case 4:
					*uParam2 = 998;
					break;
				case 6:
					*uParam2 = 1006;
					break;
				case 8:
					*uParam2 = 1433;
					break;
				case 7:
					*uParam2 = 1444;
					break;
				case 11:
					*uParam2 = 990;
					break;
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				case 6:
					*uParam2 = 1007;
					break;
				case 8:
					*uParam2 = 1434;
					break;
				case 11:
					*uParam2 = 991;
					break;
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				case 6:
					*uParam2 = 1008;
					break;
				case 8:
					*uParam2 = 1435;
					break;
				case 11:
					*uParam2 = 992;
					break;
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				case 6:
					*uParam2 = 1009;
					break;
				case 8:
					*uParam2 = 1436;
					break;
				case 11:
					*uParam2 = 993;
					break;
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				case 6:
					*uParam2 = 1010;
					break;
				case 8:
					*uParam2 = 1437;
					break;
				case 11:
					*uParam2 = 994;
					break;
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				case 6:
					*uParam2 = 1011;
					break;
				case 8:
					*uParam2 = 1438;
					break;
				case 11:
					*uParam2 = 995;
					break;
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_37(int iParam0, int iParam1)//Position - 0xDB1F
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				case 3:
					return 1415;
					break;
				case 4:
					return 944;
					break;
				case 6:
					return 952;
					break;
				case 8:
					return 1416;
					break;
				case 9:
					return 1424;
					break;
				case 10:
					return 1426;
					break;
				case 1:
					return 960;
					break;
				case 7:
					return 1427;
					break;
				case 11:
					return 936;
					break;
				case 14:
					return 968;
					break;
				case 12:
					return 979;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				case 4:
					return 945;
					break;
				case 6:
					return 953;
					break;
				case 8:
					return 1417;
					break;
				case 9:
					return 1425;
					break;
				case 7:
					return 1428;
					break;
				case 11:
					return 937;
					break;
				case 14:
					return 969;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				case 4:
					return 946;
					break;
				case 6:
					return 954;
					break;
				case 8:
					return 1418;
					break;
				case 7:
					return 1429;
					break;
				case 11:
					return 938;
					break;
				case 14:
					return 970;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				case 6:
					return 955;
					break;
				case 8:
					return 1419;
					break;
				case 11:
					return 939;
					break;
				case 14:
					return 971;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				case 6:
					return 956;
					break;
				case 8:
					return 1420;
					break;
				case 11:
					return 940;
					break;
				case 14:
					return 972;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				case 6:
					return 957;
					break;
				case 8:
					return 1421;
					break;
				case 11:
					return 941;
					break;
				case 14:
					return 973;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				case 6:
					return 958;
					break;
				case 8:
					return 1422;
					break;
				case 11:
					return 942;
					break;
				case 14:
					return 974;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				case 6:
					return 959;
					break;
				case 8:
					return 1423;
					break;
				case 11:
					return 943;
					break;
				case 14:
					return 975;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_38(int iParam0, int iParam1)//Position - 0xDF1A
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				case 3:
					return 1400;
					break;
				case 4:
					return 892;
					break;
				case 6:
					return 900;
					break;
				case 8:
					return 1401;
					break;
				case 9:
					return 1409;
					break;
				case 10:
					return 1411;
					break;
				case 1:
					return 908;
					break;
				case 7:
					return 1412;
					break;
				case 11:
					return 884;
					break;
				case 14:
					return 916;
					break;
				case 12:
					return 927;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				case 4:
					return 893;
					break;
				case 6:
					return 901;
					break;
				case 8:
					return 1402;
					break;
				case 9:
					return 1410;
					break;
				case 7:
					return 1413;
					break;
				case 11:
					return 885;
					break;
				case 14:
					return 917;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				case 4:
					return 894;
					break;
				case 6:
					return 902;
					break;
				case 8:
					return 1403;
					break;
				case 7:
					return 1414;
					break;
				case 11:
					return 886;
					break;
				case 14:
					return 918;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				case 6:
					return 903;
					break;
				case 8:
					return 1404;
					break;
				case 11:
					return 887;
					break;
				case 14:
					return 919;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				case 6:
					return 904;
					break;
				case 8:
					return 1405;
					break;
				case 11:
					return 888;
					break;
				case 14:
					return 920;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				case 6:
					return 905;
					break;
				case 8:
					return 1406;
					break;
				case 11:
					return 889;
					break;
				case 14:
					return 921;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				case 6:
					return 906;
					break;
				case 8:
					return 1407;
					break;
				case 11:
					return 890;
					break;
				case 14:
					return 922;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				case 6:
					return 907;
					break;
				case 8:
					return 1408;
					break;
				case 11:
					return 891;
					break;
				case 14:
					return 923;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

bool func_39(int iParam0)//Position - 0xE354
{
	return Global_43052 == iParam0;
}

int func_40(int iParam0)//Position - 0xE362
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 6;
			break;
		case 7:
			return 7;
			break;
		case 8:
			return 8;
			break;
		case 9:
			return 0;
			break;
		case 10:
			return 1;
			break;
		case 11:
			return 0;
			break;
		case 12:
			return 0;
			break;
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_41()//Position - 0x1F63B
{
	Global_78130[0 /*14*/].f_1 = -1;
	Global_78130[0 /*14*/].f_2 = -1;
	Global_78130[0 /*14*/].f_5 = -1;
	Global_78130[0 /*14*/].f_3 = -1;
	Global_78130[0 /*14*/].f_4 = -1;
	Global_78130[0 /*14*/].f_7 = 0;
	Global_78130[0 /*14*/].f_6 = 0;
	Global_78130[0 /*14*/].f_13 = -1;
	Global_78130[0 /*14*/].f_12 = 0;
	Global_78130[0 /*14*/] = 0;
	StringCopy(&(Global_78130[0 /*14*/].f_8), "NO_LABEL", 16);
}

var func_42(int iParam0)//Position - 0x1F96D
{
	return Global_1998[iParam0 /*29*/];
}

bool func_43(int iParam0)//Position - 0x1F97C
{
	return iParam0 < 3;
}

void func_44(char* sParam0, var uParam1)//Position - 0x1F988
{
	STATS::STAT_SET_GXT_LABEL(joaat("SP_LAST_MISSION_NAME"), sParam0, true);
	if (BitTest(uParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP0_LAST_MISSION_NAME"), sParam0, true);
	}
	if (BitTest(uParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP1_LAST_MISSION_NAME"), sParam0, true);
	}
	if (BitTest(uParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP2_LAST_MISSION_NAME"), sParam0, true);
	}
}

struct<2> func_45(int iParam0)//Position - 0x1FB53
{
	struct<2> Var0;
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		default:
			break;
	}
	return Var0;
}

void func_46(int iParam0, int iParam1)//Position - 0x1FF9F
{
	Global_78587 = iParam1;
	if (Global_63148)
	{
		return;
	}
	if (Global_63175)
	{
		Global_63175 = 0;
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_63148)
		{
		}
		Global_63174 = iParam0;
		Global_63148 = 1;
		Global_63159 = 1;
	}
}

void func_47(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x200C7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97511))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_97511, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_94618);
	StringCopy(&Global_97511, "", 64);
}

void func_48(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x212C0
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_49(int iParam0)//Position - 0x21351
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return 1;
			break;
		case 6:
			return 1;
			break;
		case 7:
			return 0;
			break;
		case 8:
			return 1;
			break;
		case 9:
			return 0;
			break;
		case 10:
			return 0;
			break;
		case 11:
			return 0;
			break;
		case 12:
			return 1;
			break;
		case 13:
			return 0;
			break;
		case 14:
			return 1;
			break;
		case 15:
			return 0;
			break;
		case 16:
			return 1;
			break;
		case 17:
			return 1;
			break;
		case 18:
			return 1;
			break;
		case 19:
			return 1;
			break;
		case 20:
			return 1;
			break;
		case 21:
			return 1;
			break;
		case 22:
			return 1;
			break;
		case 23:
			return 1;
			break;
		case 24:
			return 1;
			break;
		case 25:
			return 1;
			break;
		case 26:
			return 1;
			break;
		case 27:
			return 0;
			break;
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
			return 0;
			break;
		case 32:
			return 1;
			break;
		case 33:
			return 1;
			break;
		case 34:
			return 1;
			break;
		case 35:
			return 0;
			break;
		case 36:
			return 0;
			break;
		case 37:
			return 0;
			break;
		case 38:
			return 1;
			break;
		case 39:
			return 1;
			break;
		case 40:
			return 1;
			break;
		case 41:
			return 1;
			break;
		case 42:
			return 1;
			break;
		case 43:
			return 1;
			break;
		case 44:
			return 0;
			break;
		case 45:
			return 0;
			break;
		case 46:
			return 1;
			break;
		case 47:
			return 1;
			break;
		case 48:
			return 0;
			break;
		case 49:
			return 1;
			break;
		case 50:
			return 1;
			break;
		case 51:
			return 1;
			break;
		case 52:
			return 1;
			break;
		case 54:
			return 1;
			break;
		case 55:
			return 1;
			break;
		case 56:
			return 1;
			break;
		case 53:
			return 1;
			break;
		case 57:
			return 1;
			break;
		case 58:
			return 1;
			break;
		case 59:
			return 1;
			break;
		case 60:
			return 1;
			break;
		case 61:
			return 1;
			break;
		case 62:
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x21697
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

char* func_51(var uParam0)//Position - 0x216DB
{
	uParam0 = uParam0;
	return "";
}

bool func_52()//Position - 0x2172D
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_53()//Position - 0x21743
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_54(int iParam0, int iParam1)//Position - 0x21759
{
	Global_97748 = iParam0;
	Global_97749 = iParam1;
}

void func_55()//Position - 0x2176D
{
	if (Global_78573 != 6)
	{
	}
	if (Global_78578)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_78578 = 0;
		Global_23150.f_8808 = 0;
	}
	Global_78573 = 6;
	Global_78575 = -1;
	Global_78574 = -1;
}

void func_56(var uParam0)//Position - 0x217A5
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

int func_57(int iParam0)//Position - 0x2195F
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		case 1:
			return 322;
			break;
		case 2:
			return 69;
			break;
		case 3:
			return 70;
			break;
		case 4:
			return 322;
			break;
		case 5:
			return 71;
			break;
		case 6:
			return 71;
			break;
		case 7:
			return 72;
			break;
		case 8:
			return 68;
			break;
		case 9:
			return 73;
			break;
		case 10:
			return 74;
			break;
		case 11:
			return 75;
			break;
		case 12:
			return 76;
			break;
		case 13:
			return 77;
			break;
		case 14:
			return 78;
			break;
		case 15:
			return 79;
			break;
		case 16:
			return 80;
			break;
		case 17:
			return 81;
			break;
		case 18:
			return 82;
			break;
		case 19:
			return 83;
			break;
		case 20:
			return 84;
			break;
		case 21:
			return 85;
			break;
		case 22:
			return 86;
			break;
		case 23:
			return 87;
			break;
		case 24:
			return 106;
			break;
		case 25:
			return 178;
			break;
		case 26:
			return 179;
			break;
		case 27:
			return 88;
			break;
		case 28:
			return 89;
			break;
		case 29:
			return 90;
			break;
		case 30:
			return 91;
			break;
		case 31:
			return 107;
			break;
		case 32:
			return 92;
			break;
		case 33:
			return 93;
			break;
		case 34:
			return 94;
			break;
		case 35:
			return 110;
			break;
		case 36:
			return 111;
			break;
		case 37:
			return 95;
			break;
		case 38:
			return 96;
			break;
		case 39:
			return 97;
			break;
		case 40:
			return 98;
			break;
		case 41:
			return 99;
			break;
		case 42:
			return 100;
			break;
		case 43:
			return 101;
			break;
		case 44:
			return 66;
			break;
		case 45:
			return 67;
			break;
		case 46:
			return 102;
			break;
		case 47:
			return 103;
			break;
		case 48:
			return 322;
			break;
		case 49:
			return 104;
			break;
		case 50:
			return 104;
			break;
		case 51:
			return 105;
			break;
		case 52:
			return 194;
			break;
		case 53:
			return 195;
			break;
		case 54:
			return 196;
			break;
		case 55:
			return 197;
			break;
		case 56:
			return 198;
			break;
		case 57:
			return 108;
			break;
		case 58:
			return 208;
			break;
		case 59:
			return 209;
			break;
		case 60:
			return 210;
			break;
		case 61:
			return 211;
			break;
		case 62:
			return 212;
			break;
	}
	return 322;
}

int func_58()//Position - 0x21D1C
{
	return (Global_113386.f_10016.f_21 + Global_113386.f_18574.f_380);
}

void func_59(var uParam0, bool bParam1)//Position - 0x21D38
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_113386.f_20564.f_472 = iVar0;
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x22121
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
}

int func_61(int iParam0, int iParam1)//Position - 0x2215C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_62(int iParam0, bool bParam1)//Position - 0x222BD
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_112024, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_112024, iParam0);
	}
	Global_112023 = 1;
}

int func_63()//Position - 0x22C65
{
	return Global_31960;
}

int func_64(var uParam0, int iParam1)//Position - 0x22C70
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.91345f, 603.2904f, 105.66109f };
			uParam0->f_61 = { -1038.9135f, 639.2904f, 135.66109f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.89182f, -2365.7693f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.8584f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_lod");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.7556f, 4929.9883f, 39.52461f };
			uParam0->f_82 = { 2505.7556f, 5023.9883f, 67.52461f };
			break;
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			break;
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.6194f, 4443.4565f, 0.725f };
			break;
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.4285f, 339.2523f, 6.3717f };
			break;
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.1783f, -1143.6046f, 12.0175f };
			break;
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.2096f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.6292f, -2030.913f, 1.2823f };
			break;
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.9692f, 4277.5825f, 30.379f };
			break;
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.8813f, 3836.1074f, 30.7717f };
			break;
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.9276f, 28.2893f };
			break;
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.93504f - 11f), (40.307034f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.93504f + 11f), (40.307034f + 3.25f) };
			break;
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.6099f, 2835.3274f, 35.1903f };
			break;
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.6821f, 3286.2512f, 40.0875f };
			break;
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.3356f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.0288f, 3682.9983f, 33.2675f };
			break;
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.2944f, 28.2688f };
			break;
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.57953f, -3092.9624f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.77838f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.77838f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.77838f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.77055f, -2982.6594f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.6594f, 144.77055f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.6594f, 144.77055f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_79 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_82 = { -1158.9647f, -1524.9827f, 11.632731f };
			break;
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.0645f, 368.0221f, 70.9128f };
			break;
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.2333f, 92.1041f, 60.0617f };
			break;
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.1377f, 223.4648f, 181.1118f };
			break;
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.7847f, 263.4779f, 173.6154f };
			break;
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.5055f, 4.5754f, 49.8103f };
			break;
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.3812f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.0793f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.4241f, 2808.2126f, 16.2598f };
			break;
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.1273f, 486.1281f, 115.2016f };
			break;
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.3467f, -263.1502f, 38.7152f };
			break;
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_65(int iParam0)//Position - 0x2640B
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		case 47:
			return 43;
			break;
		case 49:
			return 44;
			break;
		case 50:
			return 45;
			break;
		case 8:
			if (BitTest(Global_113386.f_18574.f_382, 0))
			{
				return 46;
			}
			break;
		case 16:
			return 47;
			break;
		case 38:
			return 48;
			break;
		case 39:
			return 49;
			break;
		case 40:
			return 50;
			break;
		case 41:
			return 51;
			break;
		case 42:
			return 52;
			break;
		case 43:
			if (Global_113386.f_9085.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_66()//Position - 0x267A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_67(int iParam0)//Position - 0x268BC
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_68(char* sParam0)//Position - 0x268FC
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /* GXT: Director Mode Actor Unlock */, sParam0);
}

char* func_69(int iParam0)//Position - 0x26920
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC" /* GXT: Michael */;
			break;
		case 1:
			return "CM_STOFRA" /* GXT: Franklin */;
			break;
		case 2:
			return "CM_STOTRE" /* GXT: Trevor */;
			break;
		case 3:
			return "CM_STOAMA" /* GXT: Amanda */;
			break;
		case 4:
			return "CM_STOBEV" /* GXT: Beverly */;
			break;
		case 5:
			return "CM_STOBRA" /* GXT: Brad */;
			break;
		case 6:
			return "CM_STOCHR" /* GXT: Cris Formage */;
			break;
		case 7:
			return "CM_STODAV" /* GXT: Dave Norton */;
			break;
		case 8:
			return "CM_STODEV" /* GXT: Devin */;
			break;
		case 9:
			return "CM_STODRF" /* GXT: Dr Friedlander */;
			break;
		case 10:
			return "CM_STOFAB" /* GXT: Fabien */;
			break;
		case 11:
			return "CM_STOFLO" /* GXT: Floyd */;
			break;
		case 12:
			return "CM_STOJIM" /* GXT: Jimmy */;
			break;
		case 13:
			return "CM_STOLAM" /* GXT: Lamar */;
			break;
		case 14:
			return "CM_STOLAZ" /* GXT: Lazlow */;
			break;
		case 15:
			return "CM_STOLES" /* GXT: Lester */;
			break;
		case 16:
			return "CM_STOMAU" /* GXT: Maude */;
			break;
		case 17:
			return "CM_STOTHO" /* GXT: Mrs Thornhill */;
			break;
		case 18:
			return "CM_STONER" /* GXT: Nervous Ron */;
			break;
		case 19:
			return "CM_STOPAT" /* GXT: Patricia */;
			break;
		case 20:
			return "CM_STOSIM" /* GXT: Simeon */;
			break;
		case 21:
			return "CM_STOSOL" /* GXT: Solomon */;
			break;
		case 22:
			return "CM_STOSTE" /* GXT: Steve Haines */;
			break;
		case 23:
			return "CM_STOSTR" /* GXT: Stretch */;
			break;
		case 24:
			return "CM_STOTAN" /* GXT: Tanisha */;
			break;
		case 25:
			return "CM_STOTAO" /* GXT: Cheng Jr. */;
			break;
		case 26:
			return "CM_STOTRA" /* GXT: Tracey */;
			break;
		case 27:
			return "CM_STOWAD" /* GXT: Wade */;
			break;
	}
	return "ERROR!";
}

int func_70(int iParam0)//Position - 0x26AF3
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return BitTest(Global_113386.f_26434, iParam0);
	}
	return 0;
}

void func_71(int iParam0, int iParam1)//Position - 0x26B1D
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_72(char* sParam0)//Position - 0x26B5A
{
	int iVar0;
	iVar0 = 1424;
	if (!SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races"))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	SCRIPT::REQUEST_SCRIPT(sParam0);
	if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x270C1
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74()//Position - 0x272CB
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

int func_75()//Position - 0x2739A
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

float func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x27420
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

int func_77(int iParam0)//Position - 0x27EB9
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_78(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x2804C
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_79(struct<3> Param0)//Position - 0x291B1
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_80()//Position - 0x2B024
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_81()//Position - 0x2B109
{
	return BitTest(Global_2621446, 3);
}

int func_82(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x2B117
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_83(int iParam0)//Position - 0x2B14A
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

void func_84(int iParam0, bool bParam1)//Position - 0x2B1C9
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

Vector3 func_85(int iParam0)//Position - 0x2B3C3
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_86(struct<3> Param0)//Position - 0x2B834
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2B8CC
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_88(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x2BC9A
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
	float fVar11;
	float fVar12;
	float fVar13;
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param2.f_0;
	fVar3 = Param2.f_1;
	fVar4 = Param4.f_0;
	fVar5 = Param4.f_1;
	fVar6 = Param6.f_0;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0)//Position - 0x2BD4E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

bool func_90()//Position - 0x2BEA7
{
	bool bVar0;
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_91()//Position - 0x2BEDA
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
}

void func_92(int iParam0)//Position - 0x2C0C4
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

bool func_93()//Position - 0x2C317
{
	return BitTest(Global_1958711, 5);
}

bool func_94()//Position - 0x2C325
{
	return BitTest(Global_1958711, 19);
}

float func_95(char* sParam0)//Position - 0x2C619
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

char* func_96(int iParam0)//Position - 0x2C702
{
	switch (iParam0)
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

struct<2> func_97(int iParam0)//Position - 0x2C855
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_98(int iParam0)//Position - 0x2C888
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_99(int iParam0)//Position - 0x2C8BB
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_100(int iParam0)//Position - 0x2C8EE
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_101(int iParam0)//Position - 0x2C921
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_102(int iParam0)//Position - 0x2C95E
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_103(int iParam0)//Position - 0x2C991
{
	struct<2> Var0;
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_91229[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_113386.f_9085.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

bool func_104(bool bParam0)//Position - 0x2CB12
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_105(int iParam0, int iParam1)//Position - 0x2CB6E
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_106(int* iParam0)//Position - 0x2D268
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_107(int iParam0, var uParam1, var uParam2)//Position - 0x302EA
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x3064B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x30CC6
{
	return 1;
}

int func_110(int iParam0)//Position - 0x321E3
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 6;
			break;
		case 8:
			return 7;
			break;
		case 9:
			return 8;
			break;
		case 10:
			return 24;
			break;
		case 11:
			return 25;
			break;
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x32293
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		default:
	}
	return 0;
}

int func_112()//Position - 0x3278D
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x327A4
{
	int iVar0;
	int iVar1;
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13394 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13395 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14746 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14742 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14743 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14744 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14745 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14747 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14739 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14740 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14741 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17333 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17328 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17332 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17331 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17325 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17326 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17329 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17330 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17327 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17335 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17336 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17324 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17323 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17322 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17334 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17337 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17338 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17339 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17340 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17544 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17545 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17546 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17547 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17548 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17549 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17550 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17551 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17552 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17553 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17554 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17555 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17556 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17563 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17559 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17560 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17561 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17562 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17564 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17557 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17558 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17565 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19273 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19274 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19275 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19276 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19277 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19278 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19279 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19280 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19281 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19282 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19283 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19284 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19285 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19286 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19287 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19288 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19289 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19290 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19291 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19292 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19293 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19294 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19295 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19296 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19297 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20253 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20254 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20255 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20256 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21146 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21147 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21148 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21149 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21150 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21151 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_21941 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_21953 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_21944 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_21954 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_21942 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_21958 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_21956 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_21957 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_21952 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_21959 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_21955 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_21951 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_21943 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_21945 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_21946 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_21947 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_21948 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_21949 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_21950 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_22917 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_22918 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_22919 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_22920 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_22921 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_22922 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_22923 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_22924 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_22925 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_22926 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_22927 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_22928 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_22929 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_22930 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_22931 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_22932 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_22933 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_22934 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_22935 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_22936 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_22937 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_22938 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_22939 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_22940 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_22941 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_22942 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_22943 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_22944 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24125 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24126 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24130 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24133 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24138 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24132 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24124 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24131 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24137 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24136 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24127 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24129 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24139 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24135 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24128 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24134 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24186 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24187 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24192 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24191 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24189 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24195 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24197 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24198 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24196 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24188 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24190 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24194 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24193 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_26758 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_25762 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_25763 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_25764 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_25765 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_26759 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_25766 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_25767 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_25768 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_25801 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_25802 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_25803 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_25804 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_25805 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_25806 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_25807 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_25808 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_25809 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_25810 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_25811 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_25812 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_25813 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_25814 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_25815 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_25816 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_25817 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_25818 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_25819 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_25820 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_25821 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28622 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28623 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28624 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28625 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28626 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28627 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28628 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28629 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28630 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28631 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28632 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28633 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28634 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28635 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28636 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28637 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28638 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28639 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28640 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28641 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28642 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28645 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28599 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28648 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28600 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28655 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28656 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28657 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29335 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29342 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29328 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29336 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29337 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29334 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29343 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29333 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29331 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29338 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29339 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29340 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29341 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29330 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29332 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30112 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30113 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30114 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30115 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30116 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30117 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30118 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30119 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30120 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30138 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30121 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30122 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30123 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30124 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30125 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30143 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30126 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30127 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30128 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_30980 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_30981 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_30982 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_30983 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_30984 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_30985 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_30986 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_30987 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_30988 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_30989 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_30990 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_30991 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_30992 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_30993 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_30994 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_30995 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_30996 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_31857 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_31858 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_31859 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_31860 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_31861 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_31862 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_31863 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_31864 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_31865 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_31866 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_31867 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_31868 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_31869 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_31870 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_31886 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_31871 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33037 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33018 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33031 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33012 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33035 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33016 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33029 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33010 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33040 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33021 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33032 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33013 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33041 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33022 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33043 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33024 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33034 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33015 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33042 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33023 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33045 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33026 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33030 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33011 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33038 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33019 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33044 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33025 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33036 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33017 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33046 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33027 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33033 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33014 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33028 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33009 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_114()//Position - 0x35A75
{
	return 0;
}

int func_115()//Position - 0x35A90
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x35AA9
{
	int iVar0;
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x35BA7
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x35C23
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x35D0B
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_120(int iParam0, var uParam1, int iParam2)//Position - 0x3628A
{
	int iVar0;
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

int func_121(int iParam0)//Position - 0x36689
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_122(int* iParam0, bool bParam1)//Position - 0x36787
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

void func_123(int* iParam0)//Position - 0x367C2
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_124(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x368AC
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_125(char* sParam0)//Position - 0x36B83
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_126(int iParam0, bool bParam1)//Position - 0x36C27
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91229[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_127()//Position - 0x36C5D
{
	if ((((Global_100441.f_11 == 0 || Global_100441.f_11 == 1) || Global_100441.f_11 == 2) || Global_100441.f_11 == 3) || Global_100441.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

void func_128(bool bParam0)//Position - 0x36D19
{
	HUD::DISPLAY_HUD(bParam0);
	HUD::DISPLAY_RADAR(bParam0);
}

void func_129(int iParam0)//Position - 0x36D2D
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_100441.f_20), 3);
	}
	else if (BitTest(Global_100441.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_100441.f_20), 3);
	}
}

void func_130()//Position - 0x36DA1
{
	Global_23011.f_5 = 1;
}

void func_131()//Position - 0x36DAF
{
	Global_23011.f_5 = 0;
}

void func_132()//Position - 0x36E20
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_133()//Position - 0x36E49
{
	Global_94617 = 0;
	Global_94618 = 0;
}

int func_134()//Position - 0x36E5B
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_135(char* sParam0)//Position - 0x36F86
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_136(var uParam0)//Position - 0x36FB8
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], false, true);
		}
		iVar0++;
	}
}

bool func_137(int iParam0, int iParam1)//Position - 0x520
{
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_138(bool bParam0, int iParam1, int iParam2)//Position - 0x9A39
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0, int iParam1)//Position - 0x9B2C
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_140(var uParam0, int iParam1)//Position - 0x9DC8
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_141(var uParam0, int iParam1)//Position - 0x9E9F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_142(var uParam0, int iParam1)//Position - 0x9ED2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_143(var uParam0, int iParam1)//Position - 0x9F0C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_144(var uParam0, int iParam1)//Position - 0x9F47
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_145(var uParam0)//Position - 0xFA14
{
	return uParam0->f_79 == 1;
}

int func_146(int iParam0)//Position - 0xFB5C
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

bool func_147(var uParam0, int iParam1)//Position - 0xFBAC
{
	return (*uParam0)[iParam1] == 78;
}

void func_148(var uParam0, float fParam1)//Position - 0xFBBD
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_149(var uParam0)//Position - 0xFBDA
{
	return uParam0->f_80;
}

int func_150(var uParam0, int iParam1)//Position - 0x1031C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_151(char* sParam0, int iParam1)//Position - 0x117CE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_152(var uParam0, int iParam1)//Position - 0x11885
{
	(*uParam0)[iParam1] = 78;
}

int func_153()//Position - 0x14EC
{
	int iVar0;
	iVar0 = 0;
	return iVar0;
}

int func_154(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C4E
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_155(bool bParam0)//Position - 0x428A
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

float func_156(struct<3> Param0, struct<3> Param1)//Position - 0x5A23
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

var func_157(int iParam0)//Position - 0x7FAF
{
	return Global_1574538[iParam0];
}

int func_158(int iParam0)//Position - 0x1ACCB
{
	return (iParam0 % 32);
}

int func_159(int iParam0)//Position - 0x1B03B
{
	return (iParam0 / 32);
}

int func_160()//Position - 0x1B0D7
{
	return -1;
}

int func_161()//Position - 0x22D02
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_162()//Position - 0x22E3B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

var func_163(int iParam0, int iParam1)//Position - 0x32523
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_164()//Position - 0x5F321
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8746[1 /*6*/])), 64);
		sVar2 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8136, 0);
}

struct<4> func_165(int iParam0)//Position - 0x5F39C
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_166(int iParam0, int iParam1)//Position - 0x5F3AF
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_167(int iParam0, int iParam1)//Position - 0x5F3D9
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_168(int iParam0, int iParam1, int iParam2)//Position - 0x5F403
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_169(int iParam0, int iParam1, int iParam2)//Position - 0x5F448
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_170(int iParam0)//Position - 0x65C96
{
	switch (iParam0)
	{
		case 0:
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
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
			return 1;
			break;
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
			return 2;
			break;
		case 43:
		case 42:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
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
			return 3;
			break;
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
			return 4;
			break;
		case 81:
			return 5;
			break;
		case 82:
			return 6;
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		case 88:
			return 8;
			break;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		case 101:
			return 10;
			break;
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
			return 11;
			break;
		case 117:
			return 12;
			break;
		case 122:
			return 13;
			break;
		case 123:
			return 14;
			break;
		case 124:
			return 15;
			break;
		case 125:
			return 16;
			break;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		case 145:
			return 18;
			break;
		case 146:
			return 19;
			break;
		case 147:
			return 20;
			break;
		case 148:
			return 21;
			break;
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		case 154:
			return 23;
			break;
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_171(int iParam0)//Position - 0x673CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_172(var uParam0)//Position - 0x674AB
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		default:
			break;
	}
}

int func_173(int iParam0, int iParam1)//Position - 0x67502
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					case 1:
						return 1;
						break;
					case 2:
						return 2;
						break;
					case 3:
						return 3;
						break;
					case 4:
						return 4;
						break;
					case 5:
						return 4;
						break;
				}
				break;
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)//Position - 0x675E7
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("sabregt2"):
			if (!Global_262145.f_14731 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("tornado5"):
			if (!Global_262145.f_14732 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("virgo2"):
			if (!Global_262145.f_14730 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("minivan2"):
			if (!Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("slamvan3"):
			if (!Global_262145.f_14735 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("faction3"):
			if (!Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("comet3"):
			if (Global_262145.f_19186 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("diablous2"):
			if (Global_262145.f_19188 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("fcr2"):
			if (Global_262145.f_19192 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("elegy"):
			if (Global_262145.f_19189 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("nero2"):
			if (Global_262145.f_19196 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("italigtb2"):
			if (Global_262145.f_19194 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("specter2"):
			if (Global_262145.f_19199 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("technical3"):
			if (Global_262145.f_21144 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("insurgent3"):
			if (Global_262145.f_21145 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

var func_175()//Position - 0x6C75C
{
	return Global_2714762.f_19;
}

int func_176(int iParam0)//Position - 0x91E38
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_177(bool bParam0)//Position - 0x92C81
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_178(int iParam0)//Position - 0x92F03
{
	int iVar0;
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

char* func_179(bool bParam0)//Position - 0x930DC
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		default:
			break;
	}
	return "";
}

void func_180(int iParam0, int iParam1)//Position - 0x9375A
{
	int iVar0;
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_181(int iParam0, int iParam1)//Position - 0x9377D
{
	int iVar0;
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_182()//Position - 0x937DA
{
	int iVar0;
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_183(int iParam0)//Position - 0x9384F
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_184()//Position - 0x95709
{
	MISC::SET_BIT(&Global_8137, 4);
}

var func_185()//Position - 0x9645C
{
	return Global_2714762.f_18;
}

void func_186()//Position - 0x966F6
{
	Global_23011.f_6 = 1;
}

void func_187(char* sParam0)//Position - 0x9CC34
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_188()//Position - 0x9CE99
{
	return Global_1575046;
}

bool func_189()//Position - 0x9CEA5
{
	return Global_1575048;
}

bool func_190()//Position - 0x9D3CC
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

bool func_191(int iParam0, int iParam1)//Position - 0x9D4B8
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

int func_192(int iParam0, bool bParam1)//Position - 0x9D959
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = __LIB_0__::func_5();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_193(int iParam0)//Position - 0x9DA36
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_194()//Position - 0x9DA59
{
	return Global_2714762.f_693;
}

int func_195(int iParam0)//Position - 0x9DDC4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_196(int iParam0)//Position - 0x9DDD7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_197(var uParam0)//Position - 0x9E015
{
	return uParam0 & 15;
}

int func_198()//Position - 0x9EC38
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_199()//Position - 0x9F027
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_200()//Position - 0xE1F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xA08
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_202(var uParam0, int iParam1)//Position - 0xCB8
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_203(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xCD5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_204()//Position - 0xF88
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_205()//Position - 0x651A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_206()//Position - 0x6BEE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21605 = 1;
}

void func_207()//Position - 0x6C1F
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_208()//Position - 0x6CDB
{
	int iVar0;
	int iVar1;
	if (Global_78319)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_209()//Position - 0x6E16
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

void func_210(char* sParam0, int iParam1, int iParam2)//Position - 0x6F72
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x235F8
{
	int iVar0;
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = __LIB_0__::func_19(iParam0);
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_212(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24D87
{
	int iVar0;
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = __LIB_0__::func_19(iParam0);
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

var func_213()//Position - 0x27142
{
	return __LIB_0__::func_157(__LIB_0__::func_5() + 1);
}

int func_214()//Position - 0x29F44
{
	return Global_1574990;
}

int func_215(int iParam0, int iParam1)//Position - 0x2A7B4
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x2AA45
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_217(int iParam0, int iParam1)//Position - 0x2AAD5
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 6;
			break;
		case 8:
			return 7;
			break;
		case 9:
			return 8;
			break;
		case 10:
			return 9;
			break;
		case 11:
			return 10;
			break;
		case 12:
			return 11;
			break;
		case 13:
			return 12;
			break;
		case 14:
			return 13;
			break;
		case 15:
			return 14;
			break;
		case 16:
			return 15;
			break;
		case 17:
			return 16;
			break;
		case 18:
			return 17;
			break;
		case 19:
			return 18;
			break;
		case 20:
			return 19;
			break;
		case 21:
			return 20;
			break;
		case 22:
			return 21;
			break;
		case 23:
			return 22;
			break;
		case 24:
			return 23;
			break;
		case 25:
			return 24;
			break;
		case 26:
			return 25;
			break;
		case 27:
			return 0;
			break;
		case 28:
			return 1;
			break;
		case 29:
			return 2;
			break;
		case 30:
			return 3;
			break;
		case 31:
			return 4;
			break;
		case 32:
			return 5;
			break;
		case 33:
			return 6;
			break;
		case 34:
			return 7;
			break;
		case 35:
			return 8;
			break;
		case 36:
			return 9;
			break;
		case 37:
			return 10;
			break;
		case 38:
			return 11;
			break;
		case 39:
			return 12;
			break;
		case 40:
			return 13;
			break;
		case 41:
			return 14;
			break;
		case 42:
			return 15;
			break;
		case 43:
			return 16;
			break;
		case 44:
			return 17;
			break;
		case 45:
			return 18;
			break;
		case 46:
			return 19;
			break;
		case 47:
			return 0;
			break;
		case 48:
			return 1;
			break;
		case 49:
			return 2;
			break;
		case 50:
			return 3;
			break;
		case 51:
			return 4;
			break;
		case 52:
			return 0;
			break;
		case 53:
			return 1;
			break;
		case 54:
			return 1;
			break;
		case 55:
			return 2;
			break;
		case 56:
			return 3;
			break;
		case 57:
			return 4;
			break;
		case 58:
			return 5;
			break;
		case 59:
			return 6;
			break;
		case 60:
			return 7;
			break;
		case 61:
			return 8;
			break;
		case 62:
			return 0;
			break;
		case 63:
			return 1;
			break;
		case 64:
			return 0;
			break;
		case 65:
			return 1;
			break;
		case 66:
			return 2;
			break;
		case 67:
			return 0;
			break;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)//Position - 0x2D72B
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_219(int iParam0, int iParam1)//Position - 0x2D8CB
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_220(int iParam0)//Position - 0x2DA0F
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2)//Position - 0x2DA2B
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				case 1:
					return 2;
					break;
				case 2:
					return 3;
					break;
				case 3:
					return 4;
					break;
				case 4:
					return 5;
					break;
				case 5:
					return 6;
					break;
				case 6:
					return 7;
					break;
				case 7:
					return 8;
					break;
				case 8:
					return 19;
					break;
				case 9:
					return 48;
					break;
				case 10:
					return 62;
					break;
			}
			break;
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
		case 12:
		case 13:
		case 14:
		case 15:
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
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 11;
					break;
				case 2:
					return 12;
					break;
				case 3:
					return 13;
					break;
				case 4:
					return 14;
					break;
				case 5:
					return 15;
					break;
				case 6:
					return 16;
					break;
				case 7:
					return 17;
					break;
				case 8:
					return 18;
					break;
				case 9:
					return 49;
					break;
				case 10:
					return 64;
					break;
			}
			break;
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
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				case 1:
					return 22;
					break;
				case 2:
					return 23;
					break;
				case 3:
					return 24;
					break;
				case 4:
					return 25;
					break;
				case 5:
					return 26;
					break;
				case 6:
					return 27;
					break;
				case 7:
					return 28;
					break;
				case 8:
					return 29;
					break;
				case 9:
					return 50;
					break;
				case 10:
					return 65;
					break;
			}
			break;
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				case 1:
					return 32;
					break;
				case 2:
					return 33;
					break;
				case 3:
					return 34;
					break;
				case 4:
					return 35;
					break;
				case 5:
					return 36;
					break;
				case 6:
					return 37;
					break;
				case 7:
					return 38;
					break;
				case 8:
					return 39;
					break;
				case 9:
					return 51;
					break;
				case 10:
					return 66;
					break;
			}
			break;
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
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				case 1:
					return 53;
					break;
				case 2:
					return 54;
					break;
				case 3:
					return 55;
					break;
				case 4:
					return 56;
					break;
				case 5:
					return 57;
					break;
				case 6:
					return 58;
					break;
				case 7:
					return 59;
					break;
				case 8:
					return 60;
					break;
				case 9:
					return 61;
					break;
				case 10:
					return 69;
					break;
			}
			break;
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				case 1:
					return 71;
					break;
				case 2:
					return 72;
					break;
				case 3:
					return 73;
					break;
				case 4:
					return 74;
					break;
				case 5:
					return 75;
					break;
				case 6:
					return 76;
					break;
				case 7:
					return 77;
					break;
				case 8:
					return 78;
					break;
				case 9:
					return 79;
					break;
				case 10:
					return 80;
					break;
			}
			break;
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				case 1:
					return 90;
					break;
				case 2:
					return 91;
					break;
				case 3:
					return 92;
					break;
				case 4:
					return 93;
					break;
				case 5:
					return 94;
					break;
				case 6:
					return 95;
					break;
				case 7:
					return 96;
					break;
				case 8:
					return 97;
					break;
				case 9:
					return 98;
					break;
				case 10:
					return 99;
					break;
			}
			break;
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				case 1:
					return 101;
					break;
				case 2:
					return 102;
					break;
				case 3:
					return 103;
					break;
				case 4:
					return 104;
					break;
				case 5:
					return 105;
					break;
				case 6:
					return 106;
					break;
				case 7:
					return 107;
					break;
				case 8:
					return 108;
					break;
				case 9:
					return 109;
					break;
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x2E965
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("X17_DRAW_6")))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x2E982
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0 && !FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 9, joaat("GOLF_GLOVE")))
		{
			return 1;
		}
	}
	return 0;
}

void func_224(int iParam0, var uParam1, var uParam2)//Position - 0x2EC73
{
	int iVar0;
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_225(int iParam0)//Position - 0x2ECBF
{
	switch (iParam0)
	{
		case 2:
			return 2161;
		case 1:
			return 2162;
		case 5:
			return 2163;
		case 8:
			return 2164;
		case 10:
			return 2159;
		default:
	}
	return -1;
}

int func_226(int iParam0)//Position - 0x2ED0B
{
	switch (iParam0)
	{
		case 2:
			return 2154;
		case 1:
			return 2155;
		case 5:
			return 2156;
		case 8:
			return 2157;
		case 10:
			return 2158;
		default:
	}
	return -1;
}

int func_227(int iParam0, int iParam1)//Position - 0x2ED57
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar2 = ((iParam0 - 1281) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar2 = ((iParam0 - 1305) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar2 = ((iParam0 - 1361) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4143), false, false, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4399), false, true, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 6413), false, true, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7262), false, true, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7681), false, true, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 9553), false, true, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 15265), false, true, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7313), false, false, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30707), false, true, iParam1, "_TUNERPSTAT_INT");
		iVar2 = ((iParam0 - 30707) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 32475 && iParam0 < 34123)
	{
		iVar1 = STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 32475), false, true, iParam1, "_FIXERPSTAT_INT");
		iVar2 = ((iParam0 - 32475) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 32475)) * 8) * 8;
	}
	if (!HUD::GET_MENU_PED_MASKED_INT_STAT(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_228(int iParam0, int iParam1)//Position - 0x2F426
{
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_229(int iParam0)//Position - 0x2F442
{
	switch (iParam0)
	{
		case 3:
			return 90;
		case 7:
			return 93;
		case 0:
			return 87;
		case 6:
			return 92;
		case 2:
			return 89;
		case 1:
			return 88;
		case 4:
			return 91;
		case 8:
			return 158;
		case 9:
			return 159;
		case 5:
			return 160;
		case 10:
			return 163;
		case 11:
			return 161;
		case 12:
			return 162;
		default:
	}
	return -1;
}

int func_230(int iParam0)//Position - 0x2F4E1
{
	switch (iParam0)
	{
		case 3:
			return 450;
		case 7:
			return 453;
		case 0:
			return 447;
		case 6:
			return 452;
		case 2:
			return 449;
		case 1:
			return 448;
		case 4:
			return 451;
		case 8:
			return 3940;
		case 9:
			return 3941;
		case 5:
			return 3942;
		case 10:
			return 3943;
		case 11:
			return 3944;
		case 12:
			return 3945;
		default:
	}
	return -1;
}

int func_231(int iParam0)//Position - 0x2F58D
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 3;
		case 2:
			return 9;
		case 3:
			return 6;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		default:
	}
	return -1;
}

int func_232(int iParam0)//Position - 0x2F64F
{
	switch (iParam0)
	{
		case 0:
			return 137;
		case 1:
			return 138;
		case 2:
			return 139;
		case 3:
			return 140;
		case 4:
			return 141;
		case 5:
			return 142;
		case 6:
			return 143;
		case 7:
			return 144;
		case 8:
			return 145;
		case 9:
			return 146;
		case 10:
			return 147;
		case 11:
			return 148;
		case 12:
			return 149;
		case 13:
			return 150;
		case 14:
			return 151;
		case 15:
			return 152;
		case 16:
			return 153;
		case 17:
			return 154;
		case 18:
			return 155;
		case 19:
			return 156;
		default:
	}
	return -1;
}

int func_233()//Position - 0x2F73B
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2671449.f_58) && !Global_2671449.f_57 == 0)
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x347F4
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BUSI_M_ACCS4_0"):
		case joaat("DLC_MP_BUSI_M_ACCS5_0"):
		case joaat("DLC_MP_BUSI_M_ACCS4_1"):
		case joaat("DLC_MP_BUSI_M_ACCS5_1"):
		case joaat("DLC_MP_BUSI_M_ACCS4_2"):
		case joaat("DLC_MP_BUSI_M_ACCS5_2"):
		case joaat("DLC_MP_BUSI_M_ACCS4_3"):
		case joaat("DLC_MP_BUSI_M_ACCS5_3"):
		case joaat("DLC_MP_BUSI_M_ACCS4_4"):
		case joaat("DLC_MP_BUSI_M_ACCS5_4"):
		case joaat("DLC_MP_BUSI_M_ACCS4_5"):
		case joaat("DLC_MP_BUSI_M_ACCS5_5"):
		case joaat("DLC_MP_BUSI_M_ACCS4_6"):
		case joaat("DLC_MP_BUSI_M_ACCS5_6"):
		case joaat("DLC_MP_BUSI_M_ACCS4_7"):
		case joaat("DLC_MP_BUSI_M_ACCS5_7"):
		case joaat("DLC_MP_BUSI_M_ACCS4_8"):
		case joaat("DLC_MP_BUSI_M_ACCS5_8"):
		case joaat("DLC_MP_BUSI_M_ACCS4_9"):
		case joaat("DLC_MP_BUSI_M_ACCS5_9"):
		case joaat("DLC_MP_BUSI_M_ACCS4_10"):
		case joaat("DLC_MP_BUSI_M_ACCS5_10"):
		case joaat("DLC_MP_BUSI_M_ACCS4_11"):
		case joaat("DLC_MP_BUSI_M_ACCS5_11"):
		case joaat("DLC_MP_BUSI_M_ACCS4_12"):
		case joaat("DLC_MP_BUSI_M_ACCS5_12"):
		case joaat("DLC_MP_BUSI_M_ACCS4_13"):
		case joaat("DLC_MP_BUSI_M_ACCS5_13"):
		case joaat("DLC_MP_BUSI_M_ACCS4_14"):
		case joaat("DLC_MP_BUSI_M_ACCS5_14"):
		case joaat("DLC_MP_BUSI_M_ACCS4_15"):
		case joaat("DLC_MP_BUSI_M_ACCS5_15"):
			return 1;
			break;
	}
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2)//Position - 0x34FB8
{
	switch (iParam1)
	{
		case joaat("mpSecurity_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Security_Tee_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_M"));
					break;
				case joaat("MP_Security_Tee_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_F"));
					break;
			}
			break;
		case joaat("mpTuner_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Tuner_Tee_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
				case joaat("MP_Tuner_Tee_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
				case joaat("MP_Tuner_Tee_002_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
				case joaat("MP_Tuner_Tee_003_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
				case joaat("MP_Tuner_Tee_005_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
				case joaat("MP_Tuner_Tee_006_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
				case joaat("MP_Tuner_Tee_008_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
				case joaat("MP_Tuner_Tee_010_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
			}
			break;
		case joaat("mpHeist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_039_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
					break;
				case joaat("MP_Heist4_Tee_041_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
					break;
				case joaat("MP_Heist4_Tee_043_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
					break;
				case joaat("MP_Heist4_Tee_039_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
					break;
				case joaat("MP_Heist4_Tee_041_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
					break;
				case joaat("MP_Heist4_Tee_043_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
					break;
				case joaat("MP_Heist4_Tee_049_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
					break;
				case joaat("MP_Heist4_Tee_051_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
					break;
				case joaat("MP_Heist4_Tee_055_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
					break;
				case joaat("MP_Heist4_Tee_057_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
					break;
				case joaat("MP_Heist4_Tee_059_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
					break;
				case joaat("MP_Heist4_Tee_061_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
					break;
				case joaat("MP_Heist4_Tee_063_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
					break;
				case joaat("MP_Heist4_Tee_065_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
					break;
			}
			break;
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				case joaat("CasinoTop_M_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				case joaat("CasinoTop_M_2"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				case joaat("CasinoTop_M_3"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				case joaat("CasinoTop_M_4"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				case joaat("CasinoTop_M_5"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				case joaat("CasinoTop_M_6"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				case joaat("CasinoTop_M_7"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				case joaat("CasinoTop_M_8"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				case joaat("CasinoTop_M_9"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				case joaat("CasinoTop_M_10"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				case joaat("CasinoTop_M_11"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				case joaat("CasinoTop_M_12"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				case joaat("CasinoTop_M_13"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				case joaat("CasinoTop_M_14"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				case joaat("CasinoTop_M_15"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				case joaat("CasinoTop_M_16"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				case joaat("CasinoTop_M_17"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				case joaat("CasinoTop_M_18"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				case joaat("CasinoTop_M_19"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				case joaat("CasinoTop_M_20"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				case joaat("CasinoTop_M_21"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				case joaat("CasinoTop_M_22"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				case joaat("CasinoTop_M_23"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				case joaat("CasinoTop_M_24"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				case joaat("CasinoTop_M_25"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				case joaat("CasinoTop_M_26"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				case joaat("CasinoTop_M_27"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				case joaat("CasinoTop_M_28"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				case joaat("CasinoTop_M_29"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				case joaat("CasinoTop_M_30"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				case joaat("CasinoTop_M_31"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				case joaat("CasinoTop_M_32"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				case joaat("CasinoTop_M_33"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				case joaat("CasinoTop_M_34"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				case joaat("CasinoTop_M_35"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				case joaat("CasinoTop_M_36"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				case joaat("CasinoTop_M_37"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				case joaat("CasinoTop_M_38"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				case joaat("CasinoTop_M_39"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				case joaat("CasinoTop_M_40"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				case joaat("CasinoTop_M_41"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				case joaat("CasinoTop_M_42"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				case joaat("CasinoTop_M_43"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				case joaat("CasinoTop_M_44"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				case joaat("CasinoTop_F_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				case joaat("CasinoTop_F_2"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				case joaat("CasinoTop_F_3"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				case joaat("CasinoTop_F_4"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				case joaat("CasinoTop_F_5"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				case joaat("CasinoTop_F_6"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				case joaat("CasinoTop_F_7"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				case joaat("CasinoTop_F_8"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				case joaat("CasinoTop_F_9"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				case joaat("CasinoTop_F_10"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				case joaat("CasinoTop_F_11"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				case joaat("CasinoTop_F_12"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				case joaat("CasinoTop_F_13"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				case joaat("CasinoTop_F_14"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				case joaat("CasinoTop_F_15"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				case joaat("CasinoTop_F_16"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				case joaat("CasinoTop_F_17"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				case joaat("CasinoTop_F_18"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				case joaat("CasinoTop_F_19"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				case joaat("CasinoTop_F_20"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				case joaat("CasinoTop_F_21"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				case joaat("CasinoTop_F_22"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				case joaat("CasinoTop_F_23"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				case joaat("CasinoTop_F_24"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				case joaat("CasinoTop_F_25"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				case joaat("CasinoTop_F_26"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				case joaat("CasinoTop_F_27"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				case joaat("CasinoTop_F_28"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				case joaat("CasinoTop_F_29"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				case joaat("CasinoTop_F_30"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				case joaat("CasinoTop_F_31"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				case joaat("CasinoTop_F_32"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				case joaat("CasinoTop_F_33"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				case joaat("CasinoTop_F_34"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				case joaat("CasinoTop_F_35"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				case joaat("CasinoTop_F_36"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				case joaat("CasinoTop_F_37"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				case joaat("CasinoTop_F_38"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				case joaat("CasinoTop_F_39"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				case joaat("CasinoTop_F_40"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				case joaat("CasinoTop_F_41"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				case joaat("CasinoTop_F_42"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				case joaat("CasinoTop_F_43"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
				case joaat("CasinoTop_F_44"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
				case joaat("M_TankTop_Smug_5_17_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
				case joaat("M_TankTop_Smug_5_10_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
				case joaat("M_TankTop_Smug_5_11_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
				case joaat("M_TankTop_Smug_5_12_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
				case joaat("M_TankTop_Smug_5_13_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
				case joaat("M_TankTop_Smug_5_20_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
				case joaat("M_TankTop_Smug_5_21_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
				case joaat("M_TankTop_Smug_5_23_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
				case joaat("M_TankTop_Smug_5_22_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
				case joaat("M_TankTop_Smug_5_5_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
				case joaat("M_TankTop_Smug_5_18_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
				case joaat("M_TankTop_Smug_5_0_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
				case joaat("M_TankTop_Smug_5_3_b"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
				case joaat("M_TankTop_Smug_5_25_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
				case joaat("M_TankTop_Smug_5_7_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
				case joaat("M_TankTop_Smug_5_4_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
				case joaat("M_TankTop_Smug_5_1_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
				case joaat("M_TankTop_Smug_5_9_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
				case joaat("F_TankTop_Smug_5_17_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
				case joaat("F_TankTop_Smug_5_10_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
				case joaat("F_TankTop_Smug_5_11_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
				case joaat("F_TankTop_Smug_5_12_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
				case joaat("F_TankTop_Smug_5_13_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
				case joaat("F_TankTop_Smug_5_20_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
				case joaat("F_TankTop_Smug_5_21_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
				case joaat("F_TankTop_Smug_5_23_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
				case joaat("F_TankTop_Smug_5_22_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
				case joaat("F_TankTop_Smug_5_5_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
				case joaat("F_TankTop_Smug_5_18_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
				case joaat("F_TankTop_Smug_5_0_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
				case joaat("F_TankTop_Smug_5_3_b"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
				case joaat("F_TankTop_Smug_5_25_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
				case joaat("F_TankTop_Smug_5_7_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
				case joaat("F_TankTop_Smug_5_4_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
				case joaat("F_TankTop_Smug_5_1_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
				case joaat("F_TankTop_Smug_5_9_a"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
				case joaat("MP_Securoserv_000_Fb"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				case joaat("MP_Elite_F_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Luxe_Tat_029_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_M"));
					break;
				case joaat("MP_Luxe_Tat_029_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_F"));
					break;
			}
			break;
	}
}

bool func_236()//Position - 0x3B686
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_237(int iParam0)//Position - 0x3BAC7
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_238(int iParam0, int iParam1, int iParam2)//Position - 0x3BB1C
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 30;
				case 4:
					return 60;
				case 5:
					return 120;
				default:
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 30;
				default:
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 3;
				case 4:
					return 4;
				case 5:
					return 5;
				default:
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 3;
				case 4:
					return 4;
				case 5:
					return 5;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 3;
				case 5:
					return 4;
				default:
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 3;
				case 5:
					return 4;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 20;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 100;
				case 4:
					return 200;
				case 5:
					return 500;
				default:
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1000;
				case 3:
					return 10000;
				case 4:
					return 25000;
				case 5:
					return 50000;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 3;
				case 3:
					return 5;
				case 4:
					return 7;
				case 5:
					return 10;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 250;
				case 4:
					return 500;
				case 5:
					return 1000;
				default:
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 25;
				default:
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_25335 /* Tunable: -2140343856 */;
				case 3:
					return Global_262145.f_25336 /* Tunable: -1167118619 */;
				case 4:
					return Global_262145.f_25337 /* Tunable: -132305813 */;
				case 5:
					return Global_262145.f_25338 /* Tunable: 1249433112 */;
				default:
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_25335 /* Tunable: -2140343856 */;
				case 3:
					return Global_262145.f_25336 /* Tunable: -1167118619 */;
				case 4:
					return Global_262145.f_25337 /* Tunable: -132305813 */;
				case 5:
					return Global_262145.f_25338 /* Tunable: 1249433112 */;
				default:
			}
			break;
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_25335 /* Tunable: -2140343856 */;
				case 3:
					return Global_262145.f_25336 /* Tunable: -1167118619 */;
				case 4:
					return Global_262145.f_25337 /* Tunable: -132305813 */;
				case 5:
					return Global_262145.f_25338 /* Tunable: 1249433112 */;
				default:
			}
			break;
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_25335 /* Tunable: -2140343856 */;
				case 3:
					return Global_262145.f_25336 /* Tunable: -1167118619 */;
				case 4:
					return Global_262145.f_25337 /* Tunable: -132305813 */;
				case 5:
					return Global_262145.f_25338 /* Tunable: 1249433112 */;
				default:
			}
			break;
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 5;
				case 5:
					return 10;
				default:
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 5;
				case 5:
					return 10;
				default:
			}
			break;
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 5;
				case 5:
					return 10;
				default:
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 5;
				case 5:
					return 10;
				default:
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 3;
				case 4:
					return 5;
				case 5:
					return 10;
				default:
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 20;
				case 4:
					return 30;
				case 5:
					return 50;
				default:
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 100000;
				case 3:
					return 250000;
				case 4:
					return 500000;
				case 5:
					return 1000000;
				default:
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1000;
				case 3:
					return 3000;
				case 4:
					return 15000;
				case 5:
					return 55000;
				default:
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 40;
				default:
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 20;
				default:
			}
			break;
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 25000;
				case 3:
					return 50000;
				case 4:
					return 75000;
				case 5:
					return 100000;
				default:
			}
			break;
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 20;
				case 4:
					return 30;
				case 5:
					return 40;
				default:
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28672 /* Tunable: 1609911012 */;
				case 3:
					return Global_262145.f_28673 /* Tunable: -68365255 */;
				case 4:
					return Global_262145.f_28674 /* Tunable: 1302605276 */;
				case 5:
					return Global_262145.f_28675 /* Tunable: 1897527067 */;
				default:
			}
			break;
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28839 /* Tunable: -115509788 */;
				case 3:
					return Global_262145.f_28840 /* Tunable: -1829268 */;
				case 4:
					return Global_262145.f_28841 /* Tunable: 1440688049 */;
				case 5:
					return Global_262145.f_28842 /* Tunable: 1927470758 */;
				default:
			}
			break;
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28873 /* Tunable: -544066833 */;
				case 3:
					return Global_262145.f_28874 /* Tunable: -2047978964 */;
				case 4:
					return Global_262145.f_28875 /* Tunable: 1531249671 */;
				case 5:
					return Global_262145.f_28876 /* Tunable: -1453293483 */;
				default:
			}
			break;
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28877 /* Tunable: 598612790 */;
				case 3:
					return Global_262145.f_28878 /* Tunable: 1078233149 */;
				case 4:
					return Global_262145.f_28879 /* Tunable: 1551564012 */;
				case 5:
					return Global_262145.f_28880 /* Tunable: -693952313 */;
				default:
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28568 /* Tunable: 212778777 */;
				case 3:
					return Global_262145.f_28569 /* Tunable: 1730590555 */;
				case 4:
					return Global_262145.f_28570 /* Tunable: 599275937 */;
				case 5:
					return Global_262145.f_28571 /* Tunable: 790883802 */;
				default:
			}
			break;
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return Global_262145.f_28843 /* Tunable: 1179057810 */;
				case 3:
					return Global_262145.f_28844 /* Tunable: -1060787570 */;
				case 4:
					return Global_262145.f_28845 /* Tunable: -672936783 */;
				case 5:
					return Global_262145.f_28846 /* Tunable: -193315003 */;
				default:
			}
			break;
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 30;
				case 5:
					return 60;
				default:
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 50;
				default:
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 50000;
				case 3:
					return 250000;
				case 4:
					return 750000;
				case 5:
					return 1000000;
				default:
			}
			break;
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 30;
				case 5:
					return 60;
				default:
			}
			break;
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 30;
				case 5:
					return 60;
				default:
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 30;
				case 5:
					return 60;
				default:
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1000000;
				case 3:
					return 5000000;
				case 4:
					return 10000000;
				case 5:
					return 20000000;
				default:
			}
			break;
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 50;
				default:
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 40;
				default:
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 20;
				case 5:
					return 30;
				default:
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 30;
				case 3:
					return 60;
				case 4:
					return 120;
				case 5:
					return 240;
				default:
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 10;
				case 3:
					return 25;
				case 4:
					return 50;
				case 5:
					return 100;
				default:
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 25;
				case 5:
					return 50;
				default:
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 15;
				case 4:
					return 30;
				case 5:
					return 60;
				default:
			}
			break;
	}
	return 999;
}

int func_239(int iParam0)//Position - 0x3E66A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 <= 480)
	{
		iVar1 = iParam0;
		iVar0 = (3112 + iVar1);
	}
	else if (iParam0 < 864)
	{
		iVar1 = (iParam0 - 480);
		iVar0 = (6029 + iVar1);
	}
	else if (iParam0 < 1248)
	{
		iVar1 = (iParam0 - 864);
		iVar0 = (15562 + iVar1);
	}
	else if (iParam0 < 1372)
	{
		iVar1 = (iParam0 - 1248);
		iVar0 = (28355 + iVar1);
	}
	else if (iParam0 < 1500)
	{
		iVar1 = (iParam0 - 1372);
		iVar0 = (30355 + iVar1);
	}
	else if (iParam0 < 1564)
	{
		iVar1 = (iParam0 - 1500);
		iVar0 = (32411 + iVar1);
	}
	else
	{
		iVar2 = iParam0;
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1)//Position - 0x3E716
{
	int iVar0;
	iVar0 = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

char* func_241(int iParam0)//Position - 0x3EF7C
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		case 24:
			return "HAND_LEFT";
			break;
		case 25:
			return "HAND_RIGHT";
			break;
		case 26:
			return "BACK_FULL";
			break;
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		case 28:
			return "BACK_FULL_SHORT";
			break;
		case 29:
			return "BACK_MID";
			break;
		case 30:
			return "BACK_UPPER";
			break;
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		case 33:
			return "BACK_LOWER";
			break;
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		case 35:
			return "BACK_LOWER_MID";
			break;
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		case 37:
			return "CHEST_FULL";
			break;
		case 38:
			return "CHEST_STOM";
			break;
		case 39:
			return "CHEST_STOM_FULL";
			break;
		case 40:
			return "CHEST_LEFT";
			break;
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		case 42:
			return "CHEST_RIGHT";
			break;
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		case 44:
			return "CHEST_MID";
			break;
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		case 47:
			return "STOMACH_FULL";
			break;
		case 48:
			return "STOMACH_UPPER";
			break;
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		case 51:
			return "STOMACH_LOWER";
			break;
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		case 54:
			return "STOMACH_LEFT";
			break;
		case 55:
			return "STOMACH_RIGHT";
			break;
		case 56:
			return "FACE";
			break;
		case 57:
			return "HEAD_LEFT";
			break;
		case 58:
			return "HEAD_RIGHT";
			break;
		case 59:
			return "NECK_FRONT";
			break;
		case 60:
			return "NECK_BACK";
			break;
		case 61:
			return "NECK_LEFT_FULL";
			break;
		case 62:
			return "NECK_LEFT_BACK";
			break;
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		case 80:
			return "LEG_LEFT_CALF";
			break;
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		case 97:
			return "FOOT_LEFT";
			break;
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_242(int iParam0, char* sParam1, int iParam2)//Position - 0x3F5BE
{
	switch (iParam2)
	{
		case joaat("crewLogo"):
		case joaat("hairOverlay"):
		case joaat("torsoDecal"):
			return -1;
			break;
	}
	switch (iParam2)
	{
		case joaat("ARM_LEFT_FULL_SLEEVE"):
			return 0;
			break;
		case joaat("ARM_LEFT_SHORT_SLEEVE"):
			return 1;
			break;
		case joaat("ARM_LEFT_LOWER_SLEEVE"):
			return 2;
			break;
		case joaat("ARM_LEFT_LOWER_INNER"):
			return 3;
			break;
		case joaat("ARM_LEFT_LOWER_OUTER"):
			return 4;
			break;
		case joaat("ARM_LEFT_WRIST"):
			return 5;
			break;
		case joaat("ARM_LEFT_UPPER_SLEEVE"):
			return 6;
			break;
		case joaat("ARM_LEFT_UPPER_TRICEP"):
			return 7;
			break;
		case joaat("ARM_LEFT_UPPER_SIDE"):
			return 8;
			break;
		case joaat("ARM_LEFT_UPPER_BICEP"):
			return 9;
			break;
		case joaat("ARM_LEFT_SHOULDER"):
			return 10;
			break;
		case joaat("ARM_LEFT_ELBOW"):
			return 11;
			break;
		case joaat("ARM_RIGHT_FULL_SLEEVE"):
			return 12;
			break;
		case joaat("ARM_RIGHT_SHORT_SLEEVE"):
			return 13;
			break;
		case joaat("ARM_RIGHT_LOWER_SLEEVE"):
			return 14;
			break;
		case joaat("ARM_RIGHT_LOWER_INNER"):
			return 15;
			break;
		case joaat("ARM_RIGHT_LOWER_OUTER"):
			return 16;
			break;
		case joaat("ARM_RIGHT_WRIST"):
			return 17;
			break;
		case joaat("ARM_RIGHT_UPPER_SLEEVE"):
			return 18;
			break;
		case joaat("ARM_RIGHT_UPPER_TRICEP"):
			return 19;
			break;
		case joaat("ARM_RIGHT_UPPER_SIDE"):
			return 20;
			break;
		case joaat("ARM_RIGHT_UPPER_BICEP"):
			return 21;
			break;
		case joaat("ARM_RIGHT_SHOULDER"):
			return 22;
			break;
		case joaat("ARM_RIGHT_ELBOW"):
			return 23;
			break;
		case joaat("HAND_LEFT"):
			return 24;
			break;
		case joaat("HAND_RIGHT"):
			return 25;
			break;
		case joaat("BACK_FULL"):
			return 26;
			break;
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			return 27;
			break;
		case joaat("BACK_FULL_SHORT"):
			return 28;
			break;
		case joaat("BACK_MID"):
			return 29;
			break;
		case joaat("BACK_UPPER"):
			return 30;
			break;
		case joaat("BACK_UPPER_LEFT"):
			return 31;
			break;
		case joaat("BACK_UPPER_RIGHT"):
			return 32;
			break;
		case joaat("BACK_LOWER"):
			return 33;
			break;
		case joaat("BACK_LOWER_LEFT"):
			return 34;
			break;
		case joaat("BACK_LOWER_MID"):
			return 35;
			break;
		case joaat("BACK_LOWER_RIGHT"):
			return 36;
			break;
		case joaat("CHEST_FULL"):
			return 37;
			break;
		case joaat("CHEST_STOM"):
			return 38;
			break;
		case joaat("CHEST_STOM_FULL"):
			return 39;
			break;
		case joaat("CHEST_LEFT"):
			return 40;
			break;
		case joaat("CHEST_UPPER_LEFT"):
			return 41;
			break;
		case joaat("CHEST_RIGHT"):
			return 42;
			break;
		case joaat("CHEST_UPPER_RIGHT"):
			return 43;
			break;
		case joaat("CHEST_MID"):
			return 44;
			break;
		case joaat("TORSO_SIDE_RIGHT"):
			return 45;
			break;
		case joaat("TORSO_SIDE_LEFT"):
			return 46;
			break;
		case joaat("STOMACH_FULL"):
			return 47;
			break;
		case joaat("STOMACH_UPPER"):
			return 48;
			break;
		case joaat("STOMACH_UPPER_LEFT"):
			return 49;
			break;
		case joaat("STOMACH_UPPER_RIGHT"):
			return 50;
			break;
		case joaat("STOMACH_LOWER"):
			return 51;
			break;
		case joaat("STOMACH_LOWER_LEFT"):
			return 52;
			break;
		case joaat("STOMACH_LOWER_RIGHT"):
			return 53;
			break;
		case joaat("STOMACH_LEFT"):
			return 54;
			break;
		case joaat("STOMACH_RIGHT"):
			return 55;
			break;
		case joaat("Face"):
			return 56;
			break;
		case joaat("HEAD_LEFT"):
			return 57;
			break;
		case joaat("HEAD_RIGHT"):
			return 58;
			break;
		case joaat("NECK_FRONT"):
			return 59;
			break;
		case joaat("NECK_BACK"):
			return 60;
			break;
		case joaat("NECK_LEFT_FULL"):
			return 61;
			break;
		case joaat("NECK_LEFT_BACK"):
			return 62;
			break;
		case joaat("NECK_RIGHT_FULL"):
			return 63;
			break;
		case joaat("NECK_RIGHT_BACK"):
			return 64;
			break;
		case joaat("LEG_LEFT_FULL_SLEEVE"):
			return 65;
			break;
		case joaat("LEG_LEFT_FULL_FRONT"):
			return 66;
			break;
		case joaat("LEG_LEFT_FULL_BACK"):
			return 67;
			break;
		case joaat("LEG_LEFT_UPPER_SLEEVE"):
			return 68;
			break;
		case joaat("LEG_LEFT_UPPER_FRONT"):
			return 69;
			break;
		case joaat("LEG_LEFT_UPPER_BACK"):
			return 70;
			break;
		case joaat("LEG_LEFT_UPPER_OUTER"):
			return 71;
			break;
		case joaat("LEG_LEFT_UPPER_INNER"):
			return 72;
			break;
		case joaat("LEG_LEFT_LOWER_SLEEVE"):
			return 73;
			break;
		case joaat("LEG_LEFT_LOWER_FRONT"):
			return 74;
			break;
		case joaat("LEG_LEFT_LOWER_BACK"):
			return 75;
			break;
		case joaat("LEG_LEFT_LOWER_OUTER"):
			return 76;
			break;
		case joaat("LEG_LEFT_LOWER_INNER"):
			return 77;
			break;
		case joaat("LEG_LEFT_KNEE"):
			return 78;
			break;
		case joaat("LEG_LEFT_ANKLE"):
			return 79;
			break;
		case joaat("LEG_LEFT_CALF"):
			return 80;
			break;
		case joaat("LEG_RIGHT_FULL_SLEEVE"):
			return 81;
			break;
		case joaat("LEG_RIGHT_FULL_FRONT"):
			return 82;
			break;
		case joaat("LEG_RIGHT_FULL_BACK"):
			return 83;
			break;
		case joaat("LEG_RIGHT_UPPER_SLEEVE"):
			return 84;
			break;
		case joaat("LEG_RIGHT_UPPER_FRONT"):
			return 85;
			break;
		case joaat("LEG_RIGHT_UPPER_BACK"):
			return 86;
			break;
		case joaat("LEG_RIGHT_UPPER_OUTER"):
			return 87;
			break;
		case joaat("LEG_RIGHT_UPPER_INNER"):
			return 88;
			break;
		case joaat("LEG_RIGHT_LOWER_SLEEVE"):
			return 89;
			break;
		case joaat("LEG_RIGHT_LOWER_FRONT"):
			return 90;
			break;
		case joaat("LEG_RIGHT_LOWER_BACK"):
			return 91;
			break;
		case joaat("LEG_RIGHT_LOWER_OUTER"):
			return 92;
			break;
		case joaat("LEG_RIGHT_LOWER_INNER"):
			return 93;
			break;
		case joaat("LEG_RIGHT_KNEE"):
			return 94;
			break;
		case joaat("LEG_RIGHT_ANKLE"):
			return 95;
			break;
		case joaat("LEG_RIGHT_CALF"):
			return 96;
			break;
		case joaat("FOOT_LEFT"):
			return 97;
			break;
		case joaat("FOOT_RIGHT"):
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case joaat("NO_LABEL"):
			return -1;
			break;
		case joaat("TAT_FM_204"):
			return 12;
			break;
		case joaat("TAT_FM_205"):
			return 12;
			break;
		case joaat("TAT_FM_209"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		case joaat("TAT_FM_221"):
			return 26;
			break;
		case joaat("TAT_FM_219"):
			return 47;
			break;
		case joaat("TAT_FM_201"):
			return 1;
			break;
		case joaat("TAT_FM_222"):
			return 75;
			break;
		case joaat("TAT_FM_202"):
			return 1;
			break;
		case joaat("TAT_FM_210"):
			return 89;
			break;
		case joaat("TAT_FM_211"):
			return 73;
			break;
		case joaat("TAT_FM_247"):
			return 22;
			break;
		case joaat("TAT_FM_223"):
			return 91;
			break;
		case joaat("TAT_FM_213"):
			return 26;
			break;
		case joaat("TAT_FM_224"):
			return 73;
			break;
		case joaat("TAT_FM_225"):
			return 38;
			break;
		case joaat("TAT_FM_218"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		case joaat("TAT_FM_214"):
			return 31;
			break;
		case joaat("TAT_FM_226"):
			return 42;
			break;
		case joaat("TAT_FM_220"):
			return 47;
			break;
		case joaat("TAT_FM_227"):
			return 75;
			break;
		case joaat("TAT_FM_228"):
			return 20;
			break;
		case joaat("TAT_FM_215"):
			return 32;
			break;
		case joaat("TAT_FM_229"):
			return 14;
			break;
		case joaat("TAT_FM_230"):
			return 52;
			break;
		case joaat("TAT_FM_231"):
			return 30;
			break;
		case joaat("TAT_FM_232"):
			return 6;
			break;
		case joaat("TAT_FM_233"):
			return 80;
			break;
		case joaat("TAT_FM_207"):
			return 13;
			break;
		case joaat("TAT_FM_234"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		case joaat("TAT_FM_235"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		case joaat("TAT_FM_236"):
			return 73;
			break;
		case joaat("TAT_FM_237"):
			return 47;
			break;
		case joaat("TAT_FM_238"):
			return 73;
			break;
		case joaat("TAT_FM_203"):
			return 10;
			break;
		case joaat("TAT_FM_216"):
			return 26;
			break;
		case joaat("TAT_FM_011"):
			return 42;
			break;
		case joaat("TAT_FM_212"):
			return 89;
			break;
		case joaat("TAT_FM_239"):
			return 16;
			break;
		case joaat("TAT_FM_240"):
			return 91;
			break;
		case joaat("TAT_FM_241"):
			return 82;
			break;
		case joaat("TAT_FM_208"):
			return 13;
			break;
		case joaat("TAT_FM_017"):
			return 75;
			break;
		case joaat("TAT_FM_217"):
			return 26;
			break;
		case joaat("TAT_FM_242"):
			return 10;
			break;
		case joaat("TAT_FM_243"):
			return 90;
			break;
		case joaat("TAT_FM_244"):
			return 89;
			break;
		case joaat("TAT_FM_245"):
			return 38;
			break;
		case joaat("TAT_FM_010"):
			return 20;
			break;
		case joaat("TAT_FM_246"):
			return 26;
			break;
		case joaat("TAT_FM_206"):
			return 18;
			break;
		case joaat("TAT_FM_008"):
			return 56;
			break;
		case joaat("TAT_FM_009"):
			return 3;
			break;
		case joaat("TAT_FM_012"):
			return 47;
			break;
		case joaat("TAT_FM_013"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		case joaat("TAT_FM_014"):
			return 89;
			break;
		case joaat("TAT_FM_015"):
			return 6;
			break;
		case joaat("TAT_FM_016"):
			return 33;
			break;
		case joaat("TAT_FM_018"):
			return 16;
			break;
		case joaat("TAT_FM_019"):
			return 40;
			break;
		case joaat("TAT_FM_020"):
			return 40;
			break;
		case joaat("TAT_FM_021"):
			return 40;
			break;
		case joaat("TAT_FM_022"):
			return 33;
			break;
		case joaat("TAT_FM_023"):
			return 6;
			break;
		case joaat("TAT_FM_024"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		case joaat("TAT_FM_025"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		case joaat("TAT_FM_026"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		case joaat("TAT_FM_027"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		case joaat("TAT_BB_000"):
			return 44;
			break;
		case joaat("TAT_BB_001"):
			return 32;
			break;
		case joaat("TAT_BB_002"):
			return 3;
			break;
		case joaat("TAT_BB_003"):
			return 33;
			break;
		case joaat("TAT_BB_004"):
			return 31;
			break;
		case joaat("TAT_BB_005"):
			return 33;
			break;
		case joaat("TAT_BB_006"):
			return 45;
			break;
		case joaat("TAT_BB_007"):
			return 89;
			break;
		case joaat("TAT_BB_008"):
			return 64;
			break;
		case joaat("TAT_BB_009"):
			return 53;
			break;
		case joaat("TAT_BB_010"):
			return 52;
			break;
		case joaat("TAT_BB_011"):
			return 30;
			break;
		case joaat("TAT_BB_012"):
			return 41;
			break;
		case joaat("TAT_BB_013"):
			return 43;
			break;
		case joaat("TAT_BB_014"):
			return 52;
			break;
		case joaat("TAT_BB_015"):
			return 20;
			break;
		case joaat("TAT_BB_016"):
			return 8;
			break;
		case joaat("TAT_BB_017"):
			return 10;
			break;
		case joaat("TAT_BB_018"):
			return 28;
			break;
		case joaat("TAT_BB_019"):
			return 40;
			break;
		case joaat("TAT_BB_020"):
			return 42;
			break;
		case joaat("TAT_BB_021"):
			return 56;
			break;
		case joaat("TAT_BB_022"):
			return 57;
			break;
		case joaat("TAT_BB_023"):
			return 52;
			break;
		case joaat("TAT_BB_024"):
			return 8;
			break;
		case joaat("TAT_BB_025"):
			return 91;
			break;
		case joaat("TAT_BB_026"):
			return 20;
			break;
		case joaat("TAT_BB_027"):
			return 75;
			break;
		case joaat("TAT_BB_028"):
			return 62;
			break;
		case joaat("TAT_BB_029"):
			return 63;
			break;
		case joaat("TAT_BB_030"):
			return 20;
			break;
		case joaat("TAT_BB_031"):
			return 58;
			break;
		case joaat("TAT_BB_032"):
			return 47;
			break;
		case joaat("TAT_BUS_F_002"):
			return 37;
			break;
		case joaat("TAT_BUS_F_000"):
			return 33;
			break;
		case joaat("TAT_BUS_F_006"):
			return 80;
			break;
		case joaat("TAT_BUS_F_007"):
			return 64;
			break;
		case joaat("TAT_BUS_F_008"):
			return 62;
			break;
		case joaat("TAT_BUS_F_010"):
			return 96;
			break;
		case joaat("TAT_BUS_F_009"):
			return 15;
			break;
		case joaat("TAT_BUS_F_011"):
			return 48;
			break;
		case joaat("TAT_BUS_F_003"):
			return 37;
			break;
		case joaat("TAT_BUS_F_001"):
			return 33;
			break;
		case joaat("TAT_BUS_F_005"):
			return 3;
			break;
		case joaat("TAT_BUS_F_004"):
			return 41;
			break;
		case joaat("TAT_BUS_F_012"):
			return 52;
			break;
		case joaat("TAT_BUS_F_013"):
			return 53;
			break;
		case joaat("TAT_BUS_005"):
			return 59;
			break;
		case joaat("TAT_BUS_003"):
			return 3;
			break;
		case joaat("TAT_BUS_011"):
			return 48;
			break;
		case joaat("TAT_BUS_000"):
			return 33;
			break;
		case joaat("TAT_BUS_006"):
			return 64;
			break;
		case joaat("TAT_BUS_007"):
			return 62;
			break;
		case joaat("TAT_BUS_008"):
			return 60;
			break;
		case joaat("TAT_BUS_009"):
			return 20;
			break;
		case joaat("TAT_BUS_001"):
			return 40;
			break;
		case joaat("TAT_BUS_002"):
			return 42;
			break;
		case joaat("TAT_BUS_004"):
			return 11;
			break;
		case joaat("TAT_BUS_010"):
			return 15;
			break;
		case joaat("TAT_BUS_012"):
			return 40;
			break;
		case joaat("TAT_BUS_013"):
			return 22;
			break;
		case joaat("TAT_BUS_F_014"):
			return 40;
			break;
		case joaat("TAT_BUS_F_015"):
			return 22;
			break;
		case joaat("TAT_HP_000"):
			return 30;
			break;
		case joaat("TAT_HP_001"):
			return 19;
			break;
		case joaat("TAT_HP_002"):
			return 40;
			break;
		case joaat("TAT_HP_003"):
			return 4;
			break;
		case joaat("TAT_HP_004"):
			return 15;
			break;
		case joaat("TAT_HP_005"):
			return 62;
			break;
		case joaat("TAT_HP_006"):
			return 45;
			break;
		case joaat("TAT_HP_007"):
			return 24;
			break;
		case joaat("TAT_HP_008"):
			return 22;
			break;
		case joaat("TAT_HP_009"):
			return 80;
			break;
		case joaat("TAT_HP_010"):
			return 25;
			break;
		case joaat("TAT_HP_011"):
			return 30;
			break;
		case joaat("TAT_HP_012"):
			return 30;
			break;
		case joaat("TAT_HP_013"):
			return 44;
			break;
		case joaat("TAT_HP_014"):
			return 15;
			break;
		case joaat("TAT_HP_015"):
			return 9;
			break;
		case joaat("TAT_HP_016"):
			return 3;
			break;
		case joaat("TAT_HP_017"):
			return 16;
			break;
		case joaat("TAT_HP_018"):
			return 17;
			break;
		case joaat("TAT_HP_019"):
			return 75;
			break;
		case joaat("TAT_HP_020"):
			return 23;
			break;
		case joaat("TAT_HP_021"):
			return 64;
			break;
		case joaat("TAT_HP_022"):
			return 16;
			break;
		case joaat("TAT_HP_023"):
			return 25;
			break;
		case joaat("TAT_HP_024"):
			return 32;
			break;
		case joaat("TAT_HP_025"):
			return 31;
			break;
		case joaat("TAT_HP_026"):
			return 10;
			break;
		case joaat("TAT_HP_027"):
			return 5;
			break;
		case joaat("TAT_HP_028"):
			return 4;
			break;
		case joaat("TAT_HP_029"):
			return 52;
			break;
		case joaat("TAT_HP_030"):
			return 35;
			break;
		case joaat("TAT_HP_031"):
			return 30;
			break;
		case joaat("TAT_HP_032"):
			return 32;
			break;
		case joaat("TAT_HP_033"):
			return 38;
			break;
		case joaat("TAT_HP_034"):
			return 24;
			break;
		case joaat("TAT_HP_035"):
			return 52;
			break;
		case joaat("TAT_HP_036"):
			return 20;
			break;
		case joaat("TAT_HP_037"):
			return 10;
			break;
		case joaat("TAT_HP_038"):
			return 92;
			break;
		case joaat("TAT_HP_039"):
			return 0;
			break;
		case joaat("TAT_HP_040"):
			return 80;
			break;
		case joaat("TAT_HP_041"):
			return 34;
			break;
		case joaat("TAT_HP_042"):
			return 91;
			break;
		case joaat("TAT_HP_043"):
			return 10;
			break;
		case joaat("TAT_HP_044"):
			return 22;
			break;
		case joaat("TAT_HP_045"):
			return 14;
			break;
		case joaat("TAT_HP_046"):
			return 30;
			break;
		case joaat("TAT_HP_047"):
			return 40;
			break;
		case joaat("TAT_HP_048"):
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case joaat("rank"):
			return -1;
			break;
	}
	return -1;
}

void func_243(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4363B
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

void func_244(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x438CE
{
	char cVar0[32];
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("MP_M_Freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("MP_M_Freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

int func_245(int iParam0)//Position - 0x43C0A
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1049;
				break;
			case 1:
				return 1050;
				break;
			case 2:
				return 1051;
				break;
			case 3:
				return 1052;
				break;
			case 4:
				return 1053;
				break;
			case 5:
				return 1054;
				break;
			case 6:
				return 1488;
				break;
			case 7:
				return 1489;
				break;
			case 8:
				return 1490;
				break;
			case 9:
				return 1491;
				break;
			case 10:
				return 1949;
				break;
			case 11:
				return 1950;
				break;
			case 12:
				return 1951;
				break;
			case 13:
				return 2425;
				break;
			case 14:
				return 2445;
				break;
			case 15:
				return 2448;
				break;
			case 16:
				return 2451;
				break;
			case 17:
				return 2615;
				break;
			case 18:
				return 2618;
				break;
			case 19:
				return 2621;
				break;
			case 20:
				return 3787;
				break;
			case 21:
				return 3790;
				break;
			case 22:
				return 3865;
				break;
			case 23:
				return 3868;
				break;
			case 24:
				return 3871;
				break;
			case 25:
				return 3874;
				break;
			case 26:
				return 5365;
			case 27:
				return 5368;
				break;
			case 28:
				return 5470;
				break;
			case 29:
				return 5473;
				break;
			case 30:
				return 6432;
				break;
			case 31:
				return 6435;
				break;
			case 32:
				return 7256;
				break;
			case 33:
				return 7259;
				break;
			case 34:
				return 7262;
				break;
			case 35:
				return 7971;
				break;
			case 36:
				return 7974;
				break;
			case 37:
				return 7977;
				break;
			case 38:
				return 7980;
				break;
			case 39:
				return 8502;
				break;
			case 40:
				return 8505;
				break;
			case 41:
				return 8508;
				break;
			case 42:
				return 8511;
				break;
			case 43:
				return 8907;
				break;
			case 44:
				return 8910;
				break;
			case 45:
				return 8913;
				break;
			case 46:
				return 10288;
				break;
			case 47:
				return 10291;
				break;
			case 48:
				return 10414;
				break;
			case 49:
				return 10417;
				break;
			case 50:
				break;
		}
		return 13122;
	}
	if (__LIB_0__::func_3() == 2 && __LIB_0__::func_63() == 2)
	{
		return 13122;
	}
	return 13122;
}

bool func_246(int iParam0)//Position - 0x4430D
{
	return iParam0 == 87;
}

int func_247(int iParam0)//Position - 0x44330
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_248()//Position - 0x443A0
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0, int iParam1)//Position - 0x44C75
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::func_160())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x454E8
{
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 0;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("Player_Zero"):
			return 0;
			break;
		case joaat("Player_One"):
			return 1;
			break;
		case joaat("Player_Two"):
			return 2;
			break;
		case joaat("MP_M_Freemode_01"):
			return 3;
			break;
		case joaat("MP_F_Freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_251(int iParam0, int iParam1)//Position - 0x46D05
{
	int iVar0;
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE2_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_252(int iParam0)//Position - 0x48307
{
	int iVar0;
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

bool func_253()//Position - 0x4B262
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_254(int iParam0, int iParam1, int iParam2)//Position - 0x4B273
{
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_0_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_13_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_26_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_39_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_52_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_65_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_78_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_2_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_18_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_2_0");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_1_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_14_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_27_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_40_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_53_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_66_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_79_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_3_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_19_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_3_0");
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_2_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_15_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_28_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_41_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_54_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_67_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_80_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_4_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_20_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_4_0");
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("DLC_MP_LTS_F_UPPR_0_0");
							break;
						case 1:
							return joaat("DLC_MP_LTS_F_UPPR_1_0");
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_3_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_16_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_29_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_42_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_55_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_68_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_81_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_5_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_21_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_5_0");
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_4_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_17_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_30_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_43_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_56_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_69_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_82_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_6_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_22_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_6_0");
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_5_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_18_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_31_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_44_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_57_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_70_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_83_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_7_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_23_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_7_0");
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_6_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_19_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_32_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_45_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_58_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_71_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_84_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_8_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_24_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_8_0");
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_7_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_20_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_33_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_46_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_59_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_72_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_85_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_9_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_25_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_9_0");
							break;
					}
					break;
				case 8:
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_8_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_21_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_34_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_47_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_60_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_73_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_86_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_10_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_26_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_10_0");
							break;
					}
					break;
				case 10:
					break;
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_9_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_22_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_35_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_48_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_61_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_74_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_87_0");
							break;
						case 9:
							return joaat("DLC_MP_VAL_F_UPPR0_0");
							break;
						case 10:
							return joaat("DLC_MP_VAL_F_UPPR0_1");
							break;
						case 11:
							return joaat("DLC_MP_VAL_F_UPPR0_2");
							break;
						case 12:
							return joaat("DLC_MP_VAL_F_UPPR0_3");
							break;
						case 13:
							return joaat("DLC_MP_VAL_F_UPPR0_4");
							break;
						case 14:
							return joaat("DLC_MP_VAL_F_UPPR0_5");
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_11_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_27_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_11_0");
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_10_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_23_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_36_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_49_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_62_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_75_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_88_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_12_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_28_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_12_0");
							break;
					}
					break;
				case 13:
					break;
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_11_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_24_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_37_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_50_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_63_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_76_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_89_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_13_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_29_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_13_0");
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_12_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_25_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_38_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_51_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_64_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_77_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_90_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_0_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_1_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_1_0");
							break;
					}
					break;
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_F_TORSO_3_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_F_TORSO_4_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_F_TORSO_5_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_F_TORSO_6_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_F_TORSO_7_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_F_TORSO_8_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_F_TORSO_9_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_14_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_30_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_14_0");
							break;
					}
					break;
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_F_TORSO_10_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_F_TORSO_11_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_F_TORSO_12_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_F_TORSO_13_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_F_TORSO_14_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_F_TORSO_15_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_F_TORSO_16_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_15_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_31_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_15_0");
							break;
					}
					break;
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_F_TORSO_17_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_F_TORSO_18_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_F_TORSO_19_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_F_TORSO_20_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_F_TORSO_21_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_F_TORSO_22_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_F_TORSO_23_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_16_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_32_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_16_0");
							break;
					}
					break;
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_IE_F_TORSO_1_0");
							break;
						case 3:
							return joaat("DLC_MP_IE_F_TORSO_2_0");
							break;
						case 4:
							return joaat("DLC_MP_IE_F_TORSO_3_0");
							break;
						case 5:
							return joaat("DLC_MP_IE_F_TORSO_4_0");
							break;
						case 6:
							return joaat("DLC_MP_IE_F_TORSO_5_0");
							break;
						case 7:
							return joaat("DLC_MP_IE_F_TORSO_6_0");
							break;
						case 8:
							return joaat("DLC_MP_IE_F_TORSO_7_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_17_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_33_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_17_0");
							break;
					}
					break;
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_IE_F_TORSO_9_0");
							break;
						case 3:
							return joaat("DLC_MP_IE_F_TORSO_10_0");
							break;
						case 4:
							return joaat("DLC_MP_IE_F_TORSO_11_0");
							break;
						case 5:
							return joaat("DLC_MP_IE_F_TORSO_12_0");
							break;
						case 6:
							return joaat("DLC_MP_IE_F_TORSO_13_0");
							break;
						case 7:
							return joaat("DLC_MP_IE_F_TORSO_14_0");
							break;
						case 8:
							return joaat("DLC_MP_IE_F_TORSO_15_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_GR_F_TORSO_34_0");
							break;
						case 16:
							return joaat("DLC_MP_GR_F_TORSO_35_0");
							break;
						case 17:
							return joaat("DLC_MP_SUM_F_TORSO_18_0");
							break;
					}
					break;
				case 1326:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_H4_F_TORSO_1_0");
							break;
						case 3:
							return joaat("DLC_MP_H4_F_TORSO_2_0");
							break;
						case 4:
							return joaat("DLC_MP_H4_F_TORSO_3_0");
							break;
						case 5:
							return joaat("DLC_MP_H4_F_TORSO_4_0");
							break;
						case 6:
							return joaat("DLC_MP_H4_F_TORSO_5_0");
							break;
						case 7:
							return joaat("DLC_MP_H4_F_TORSO_6_0");
							break;
						case 8:
							return joaat("DLC_MP_H4_F_TORSO_7_0");
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						case 12:
							break;
						case 13:
							break;
						case 14:
							break;
						case 15:
							return joaat("DLC_MP_H4_F_TORSO_8_0");
							break;
						case 16:
							return joaat("DLC_MP_H4_F_TORSO_9_0");
							break;
						case 17:
							return joaat("DLC_MP_H4_F_TORSO_10_0");
							break;
					}
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_0_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_11_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_22_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_33_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_44_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_55_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_66_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_2_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_15_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_2_0");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_1_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_12_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_23_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_34_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_45_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_56_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_67_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_3_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_16_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_3_0");
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_2_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_13_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_24_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_35_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_46_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_57_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_68_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_4_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_17_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_4_0");
							break;
					}
					break;
				case 3:
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return joaat("DLC_MP_LTS_M_UPPR_0_0");
							break;
						case 1:
							return joaat("DLC_MP_LTS_M_UPPR_1_0");
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_3_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_14_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_25_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_36_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_47_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_58_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_69_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_5_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_18_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_5_0");
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_4_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_15_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_26_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_37_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_48_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_59_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_70_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_6_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_19_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_6_0");
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_5_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_16_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_27_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_38_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_49_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_60_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_71_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_7_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_20_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_7_0");
							break;
					}
					break;
				case 7:
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_6_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_17_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_28_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_39_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_50_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_61_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_72_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_8_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_21_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_8_0");
							break;
					}
					break;
				case 9:
					break;
				case 10:
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_7_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_18_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_29_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_40_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_51_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_62_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_73_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_9_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_22_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_9_0");
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_8_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_19_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_30_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_41_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_52_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_63_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_74_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_10_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_23_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_10_0");
							break;
					}
					break;
				case 13:
					break;
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_9_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_20_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_31_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_42_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_53_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_64_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_75_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_11_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_24_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_11_0");
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_10_0");
							break;
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_21_0");
							break;
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_32_0");
							break;
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_43_0");
							break;
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_54_0");
							break;
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_65_0");
							break;
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_76_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_0_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_1_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_1_0");
							break;
					}
					break;
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_M_TORSO_3_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_M_TORSO_4_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_M_TORSO_5_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_M_TORSO_6_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_M_TORSO_7_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_M_TORSO_8_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_M_TORSO_9_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_12_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_25_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_12_0");
							break;
					}
					break;
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_M_TORSO_10_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_M_TORSO_11_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_M_TORSO_12_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_M_TORSO_13_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_M_TORSO_14_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_M_TORSO_15_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_M_TORSO_16_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_13_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_26_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_13_0");
							break;
					}
					break;
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_BIKER_M_TORSO_17_0");
							break;
						case 3:
							return joaat("DLC_MP_BIKER_M_TORSO_18_0");
							break;
						case 4:
							return joaat("DLC_MP_BIKER_M_TORSO_19_0");
							break;
						case 5:
							return joaat("DLC_MP_BIKER_M_TORSO_20_0");
							break;
						case 6:
							return joaat("DLC_MP_BIKER_M_TORSO_21_0");
							break;
						case 7:
							return joaat("DLC_MP_BIKER_M_TORSO_22_0");
							break;
						case 8:
							return joaat("DLC_MP_BIKER_M_TORSO_23_0");
							break;
						case 9:
							return joaat("DLC_MP_GR_M_TORSO_14_0");
							break;
						case 10:
							return joaat("DLC_MP_GR_M_TORSO_14_0");
							break;
						case 11:
							return joaat("DLC_MP_SUM_M_TORSO_14_0");
							break;
					}
					break;
				case 1058:
					switch (iParam2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							return joaat("DLC_MP_H4_M_TORSO_1_0");
							break;
						case 3:
							return joaat("DLC_MP_H4_M_TORSO_2_0");
							break;
						case 4:
							return joaat("DLC_MP_H4_M_TORSO_3_0");
							break;
						case 5:
							return joaat("DLC_MP_H4_M_TORSO_4_0");
							break;
						case 6:
							return joaat("DLC_MP_H4_M_TORSO_5_0");
							break;
						case 7:
							return joaat("DLC_MP_H4_M_TORSO_6_0");
							break;
						case 8:
							return joaat("DLC_MP_H4_M_TORSO_7_0");
							break;
						case 9:
							return joaat("DLC_MP_H4_M_TORSO_8_0");
							break;
						case 10:
							return joaat("DLC_MP_H4_M_TORSO_9_0");
							break;
						case 11:
							return joaat("DLC_MP_H4_M_TORSO_10_0");
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_255(int iParam0, int iParam1)//Position - 0x4EDAD
{
	if (iParam1 == -1)
	{
		iParam1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HEIST_DRAW_14"), 0))
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HEIST_DRAW_15"), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1, int* iParam2, int iParam3)//Position - 0x4EE1B
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam2, &uVar2, &iVar3);
		if (iVar3 == iParam1)
		{
			if (*iParam2 != 0 && *iParam2 != joaat("0"))
			{
				if (iParam3 == -1 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam2, iParam3, iVar3))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_257(int iParam0, int iParam1, int iParam2)//Position - 0x4EE86
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (iParam0 != -1)
	{
		iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			FILES::GET_FORCED_COMPONENT(iParam0, iVar1, &iVar2, &uVar3, &iVar4);
			if (iVar4 == iParam1 && (iParam2 == -1 || iParam2 == iVar2))
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2, int* iParam3)//Position - 0x4EEDE
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	*iParam3 = -1;
	iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != joaat("0")) && iParam1 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_UP"), 0)) && iParam2 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_TUCKED"), 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x6B6D2
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_260(int iParam0, var* uParam1)//Position - 0x6C8A0
{
	int iVar0;
	int iVar1;
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_261(int iParam0)//Position - 0x6C8DB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
				return 1;
				break;
			}
	}
	return 0;
}

bool func_262()//Position - 0x6CC4E
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_263(int iParam0)//Position - 0x6CC5F
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

bool func_264(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6F98A
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY" /* GXT: Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN" /* GXT: Green */, 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_265(int iParam0)//Position - 0x70F2D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_266(int iParam0)//Position - 0x71847
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0)//Position - 0x7192C
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x71AE6
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
			return 1;
		default:
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x71B91
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2703735.f_206[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_270()//Position - 0x72049
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}

bool func_271()//Position - 0x7205A
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

bool func_272()//Position - 0x7206B
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

bool func_273()//Position - 0x7207C
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

bool func_274()//Position - 0x7208D
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

bool func_275()//Position - 0x7209E
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

bool func_276()//Position - 0x720AF
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

bool func_277()//Position - 0x720C0
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_278(int iParam0)//Position - 0x724B0
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x7250F
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__::func_160())
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_280(int iParam0)//Position - 0x7256F
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x72A02
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

bool func_282(int iParam0)//Position - 0x76C66
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_283(var uParam0, int iParam1)//Position - 0x77096
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113386.f_20118.f_261)
	{
		*uParam0 = { Global_113386.f_20118.f_267 };
		*iParam1 = Global_113386.f_20118.f_271;
		return 1;
	}
	return 0;
}

void func_284(var uParam0, var uParam1)//Position - 0x7801F
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_285(var uParam0)//Position - 0x7A669
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_286(int iParam0)//Position - 0x7A68D
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return __LIB_0__::func_163(iParam0, 9);
	}
	return 0;
}

var func_287(var uParam0, var uParam1)//Position - 0x7A6BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

void func_288(int iParam0, int iParam1)//Position - 0x7A6E2
{
	int iVar0;
	int iVar1;
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_289(int iParam0)//Position - 0x7A75A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x7A7C5
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x7A89F
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_292(int iParam0, int iParam1)//Position - 0x7A911
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, int iParam1)//Position - 0x7A96F
{
	int iVar0;
	if (__LIB_0__::func_154(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_294()//Position - 0x7AC03
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_295()//Position - 0x7AC27
{
	return BitTest(Global_100441.f_20, 13);
}

void func_296()//Position - 0x7B38D
{
	Global_20471 = 0;
	__LIB_0__::func_74();
}

int func_297(int iParam0)//Position - 0x7DB50
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		case 1:
			return 829;
			break;
		case 2:
			return 830;
			break;
		case 3:
			return 831;
			break;
		case 4:
			return 832;
			break;
		case 5:
			return 833;
			break;
		case 6:
			return 834;
			break;
		case 7:
			return 835;
			break;
		case 8:
			return 836;
			break;
		case 9:
			return 837;
			break;
		case 10:
			return 838;
			break;
		case 11:
			return 839;
			break;
		case 12:
			return 840;
			break;
		case 13:
			return 841;
			break;
		case 14:
			return 842;
			break;
		case 15:
			return 844;
			break;
		case 16:
			return 845;
			break;
		case 17:
			return 846;
			break;
		case 18:
			return 847;
			break;
		case 19:
			return 848;
			break;
		case 20:
			return 849;
			break;
		case 21:
			return 850;
			break;
		case 22:
			return 851;
			break;
		case 23:
			return 852;
			break;
		case 24:
			return 853;
			break;
		case 25:
			return 854;
			break;
		case 26:
			return 855;
			break;
		case 27:
			return 856;
			break;
		case 28:
			return 857;
			break;
		case 29:
			return 858;
			break;
		case 30:
			return 859;
			break;
		case 31:
			return 860;
			break;
		case 32:
			return 861;
			break;
		case 33:
			return 862;
			break;
		case 34:
			return 863;
			break;
		case 35:
			return 864;
			break;
		case 36:
			return 865;
			break;
		case 37:
			return 866;
			break;
		case 38:
			return 867;
			break;
		case 39:
			return 868;
			break;
		case 40:
			return 872;
			break;
		case 41:
			return 873;
			break;
		case 42:
			return 874;
			break;
		case 43:
			return 875;
			break;
		case 44:
			return 11352;
			break;
		case 45:
			return 3811;
			break;
		case 46:
			return 5386;
			break;
		case 47:
			return 6158;
			break;
		case 48:
			return 7235;
			break;
		case 49:
			return 7881;
			break;
		case 52:
			return 8917;
			break;
		case 50:
			return 8268;
			break;
		case 51:
			return 8270;
			break;
		case 53:
			return 9557;
			break;
		case 54:
			return 9633;
			break;
		case 55:
			return 9848;
			break;
		case 56:
			return 9916;
			break;
		case 57:
			return 9918;
			break;
		default:
			break;
	}
	return 13122;
}

Vector3 func_298(struct<3> Param0, float fParam1)//Position - 0x7E839
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

int func_299(int iParam0)//Position - 0x7F849
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		case 0:
			return 0;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return 0;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 0;
			break;
		case 50:
			return 0;
			break;
		case 7:
			return 1;
			break;
		case 8:
			return 1;
			break;
		case 9:
			return 1;
			break;
		case 10:
			return 1;
			break;
		case 11:
			return 1;
			break;
		case 12:
			return 1;
			break;
		case 13:
			return 1;
			break;
		case 14:
			return 1;
			break;
		case 15:
			return 1;
			break;
		case 16:
			return 1;
			break;
		case 17:
			return 1;
			break;
		case 18:
			return 1;
			break;
		case 19:
			return 1;
			break;
		case 20:
			return 1;
			break;
		case 21:
			return 1;
			break;
		case 22:
			return 2;
			break;
		case 23:
			return 2;
			break;
		case 24:
			return 2;
			break;
		case 25:
			return 2;
			break;
		case 26:
			return 2;
			break;
		case 27:
			return 2;
			break;
		case 28:
			return 3;
			break;
		case 29:
			return 3;
			break;
		case 30:
			return 3;
			break;
		case 31:
			return 3;
			break;
		case 32:
			return 3;
			break;
		case 33:
			return 3;
			break;
		case 34:
			return 3;
			break;
		case 35:
			return 3;
			break;
		case 36:
			return 3;
			break;
		case 37:
			return 3;
			break;
		case 38:
			return 3;
			break;
		case 39:
			return 4;
			break;
		case 40:
			return 4;
			break;
		case 41:
			return 4;
			break;
		case 42:
			return 4;
			break;
		case 43:
			return 4;
			break;
		case 44:
			return 4;
			break;
		case 45:
			return 5;
			break;
		case 46:
			return 3;
			break;
		case 47:
			return 3;
			break;
		case 48:
			return 3;
			break;
		case 49:
			return 3;
			break;
		case 52:
			return 3;
			break;
		case 51:
			return 1;
			break;
		case 53:
			return 3;
			break;
		case 54:
			return 2;
			break;
		case 55:
			return 1;
			break;
		case 56:
			return 3;
			break;
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_300()//Position - 0x7FB58
{
	return Global_100493.f_375 > 0;
}

float func_301(float fParam0, float fParam1, float fParam2)//Position - 0x84FC0
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_302(var uParam0)//Position - 0x8542C
{
	int iVar0;
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_303(bool bParam0)//Position - 0x85457
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		default:
			break;
	}
	return 3;
}

int func_304(int iParam0)//Position - 0x8580A
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && __LIB_0__::func_154(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1)//Position - 0x85870
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_306(int iParam0, bool bParam1)//Position - 0x858D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_307(int iParam0)//Position - 0x85965
{
	return iParam0 == 51;
}

int func_308(int iParam0)//Position - 0x85B09
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x85FE4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2)//Position - 0x88269
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_311(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x8828E
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_312(bool bParam0, bool bParam1)//Position - 0x88C79
{
	if (bParam0)
	{
		if (__LIB_0__::func_77(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

void func_313(int iParam0)//Position - 0x89ED9
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_77137[iParam0] = 0;
	Global_77137.f_69[iParam0] = 0;
}

int func_314(int iParam0)//Position - 0x8A13E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_315()//Position - 0x8F2FE
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

float func_316(bool bParam0, float fParam1, float fParam2)//Position - 0xE54
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_317(bool bParam0)//Position - 0x309A
{
	return bParam0 < 3;
}

var func_318(bool bParam0)//Position - 0x3108
{
	return Global_1998[bParam0 /*29*/];
}

void func_319(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x320C
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

void func_320(int iParam0, int iParam1)//Position - 0x58C2
{
	int iVar0;
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_321(bool bParam0, var uParam1, int iParam2)//Position - 0x8254
{
	int iVar0;
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

void func_322(int iParam0, bool bParam1)//Position - 0x9188
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

int func_323()//Position - 0x92B5
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_324(char* sParam0)//Position - 0x930F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_325(char* sParam0, int iParam1, int iParam2)//Position - 0x9E0B
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

int func_326(int iParam0)//Position - 0xA8E2
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		case 86:
			return 1;
			break;
		case 91:
			return 1;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xB967
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

int func_328(int iParam0)//Position - 0xBA51
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xBB5B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if (iParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_330(var uParam0)//Position - 0xC702
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = __LIB_0__::func_5();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_331(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0xE8BD
{
	int iVar0;
	int iVar1;
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_332(int iParam0, var uParam1, var uParam2)//Position - 0xE901
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !__LIB_0__::func_78(*uParam1, 0f, 0f, 0f, 0);
}

int func_333(int iParam0)//Position - 0xFCA9
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_334(int iParam0)//Position - 0xFE84
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_335(int iParam0)//Position - 0x10018
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
		case 9:
			Var0 = { 1105.6648f, -3012.3345f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.9282f, -3012.6934f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.9421f, -3011.315f, -37.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.9943f, -3012.8777f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.1519f, -3013.0325f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.9167f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.9218f, -3010.8872f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.6818f, -3009.227f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.4534f, -3008.5105f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.3401f, -3008.6982f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.3442f, -3009.618f, -37.981716f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.4595f, -3009.7935f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.7828f, -3010.433f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.0251f, -3007.3157f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.1602f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.1749f, -3005.818f, -37.919476f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.5996f, -3000.8472f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.6013f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.4756f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.5928f, -3008.2698f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_336(int iParam0, var uParam1)//Position - 0x10ADF
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		default:
	}
	return 0;
}

int func_337(int iParam0)//Position - 0x10B61
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)//Position - 0x10E25
{
	return MISC::GET_BITS_IN_RANGE(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

struct<2> func_339(int iParam0)//Position - 0x12F65
{
	struct<2> Var0;
	char[] cVar1[8];
	StringCopy(&Var0, "", 8);
	cVar1 = { __LIB_0__::func_45(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_340(int iParam0)//Position - 0x13059
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_341(int iParam0)//Position - 0x16D81
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 7;
			}
		}
	}
	return 0;
}

void func_342(int iParam0, bool bParam1)//Position - 0x1BA07
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = bParam1;
			Global_97792[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_97792[iVar0]))
			{
				Global_97820[bParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[bParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

struct<2> func_343(char* sParam0)//Position - 0x1C192
{
	struct<2> Var0;
	Var0.f_0 = sParam0;
	Var0.f_1 = 0;
	return Var0;
}

void func_344(struct<3> Param0, float fParam1, bool bParam2, int iParam3, float fParam4, bool bParam5)//Position - 0x1D553
{
	int iVar0;
	if (bParam2)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		iVar0 = (MISC::GET_GAME_TIMER() + iParam3);
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam4, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bParam5)
			{
				Param0.f_2 = (Param0.f_2 + 1f);
				MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
			if (fParam1 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(Param0, 5000f, true, false, false, false);
		PED::INSTANTLY_FILL_PED_POPULATION();
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (bParam2)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_345(int iParam0)//Position - 0x1F765
{
	if (!BitTest(Global_39355.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_39355.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_39355[Global_39355.f_227] = iParam0;
		Global_39355.f_227++;
	}
}

int func_346(int iParam0)//Position - 0x1FF88
{
	return iParam0;
}

struct<7> func_347(int iParam0)//Position - 0x209BD
{
	struct<7> Var0;
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.8568f, -1115.7416f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.9518f, 3725.1536f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.8732f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.7817f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.7518f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.4758f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.9832f, 4821.7407f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.2817f, 4819.4844f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.6613f, 2705.4458f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.9652f, 2706.9636f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.5444f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.4065f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.9136f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.4349f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.0222f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.5358f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.7819f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.2007f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.1123f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.4541f, -1424.0079f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.2856f, -1650.5967f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.7888f, 1074.7668f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.7874f, 3824.5537f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.8765f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.3054f, 2645.2422f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.6542f, 2645.2422f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.6917f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.5471f, -1975.4354f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.0791f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.3069f, -2018.5613f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.3529f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.9326f, -2748.1675f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.8408f, -2746.4888f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.1199f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.5161f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.6201f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.9744f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.2578f, -2079.9495f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.4019f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.2853f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.9567f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.4453f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.2217f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.6848f, 3683.9302f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.6055f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.4951f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.1763f, 3751.5056f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.9371f, 3753.4202f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.5391f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.5391f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.2695f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.8259f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.0089f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.0708f, 2691.5046f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.8452f, 1081.3917f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.8115f, 1083.7784f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.9045f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.3037f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.2695f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.2695f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.2095f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.4927f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.8137f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_348(var uParam0)//Position - 0x23C03
{
	return *uParam0;
}

void func_349(int iParam0)//Position - 0x23CAD
{
	int iVar0;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97810[iVar0]) && Global_97810[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97810[iVar0]))
		{
			Global_97810[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_350(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B69F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_33(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_351(int iParam0, int iParam1, int iParam2)//Position - 0x3F97C
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_352(int iParam0)//Position - 0x3FC4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_353(int iParam0, bool bParam1, int iParam2)//Position - 0x40088
{
	if (iParam2 == -1)
	{
		iParam2 = __LIB_0__::func_5();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, bParam1, iParam2);
}

int func_354()//Position - 0x405BF
{
	return 1;
	return 0;
}

int func_355(int iParam0, int iParam1, int iParam2)//Position - 0x5435D
{
	var uVar0;
	if (iParam0 != __LIB_0__::func_160())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_414, uVar0);
				break;
			}
	}
	return 1;
}

int func_356(int iParam0, int iParam1, int iParam2)//Position - 0x6149B
{
	int iVar0;
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return __LIB_0__::func_29(iVar0);
	}
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 2:
					return Global_113386.f_2363.f_539[0 /*65*/].f_59;
					break;
				case 3:
					if (Global_113386.f_9085.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 4:
					if (Global_113386.f_9085.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 6:
					return 6;
					break;
				case 5:
					return 0;
					break;
				case 8:
					return 0;
					break;
				case 9:
					return 0;
					break;
				case 10:
					return 0;
					break;
				case 1:
					return 0;
					break;
				case 7:
					return 0;
					break;
				case 11:
					return 0;
					break;
				case 12:
					break;
				case 13:
					return 31;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 2:
					return Global_113386.f_2363.f_539[1 /*65*/].f_59;
					break;
				case 3:
					return 73;
					break;
				case 4:
					return 24;
					break;
				case 6:
					return 17;
					break;
				case 5:
					return 0;
					break;
				case 8:
					return 26;
					break;
				case 9:
					return 0;
					break;
				case 10:
					return 0;
					break;
				case 1:
					return 0;
					break;
				case 7:
					return 0;
					break;
				case 11:
					return 0;
					break;
				case 12:
					break;
				case 13:
					return 31;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 2:
					return Global_113386.f_2363.f_539[2 /*65*/].f_59;
					break;
				case 3:
					return 0;
					break;
				case 4:
					return 91;
					break;
				case 6:
					return 8;
					break;
				case 5:
					return 0;
					break;
				case 8:
					return 15;
					break;
				case 9:
					return 0;
					break;
				case 10:
					return 0;
					break;
				case 1:
					return 0;
					break;
				case 7:
					return 0;
					break;
				case 11:
					return 0;
					break;
				case 12:
					break;
				case 13:
					return 31;
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				case 2:
					break;
				case 3:
					return 0;
					break;
				case 4:
					return 80;
					break;
				case 6:
					return 10;
					break;
				case 5:
					break;
				case 8:
					return 0;
					break;
				case 9:
					return 0;
					break;
				case 10:
					return 0;
					break;
				case 1:
					return 0;
					break;
				case 7:
					return 0;
					break;
				case 11:
					return 2;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				case 2:
					break;
				case 3:
					return 0;
					break;
				case 4:
					return 233;
					break;
				case 6:
					return 16;
					break;
				case 5:
					break;
				case 8:
					return 0;
					break;
				case 9:
					return 0;
					break;
				case 10:
					return 0;
					break;
				case 1:
					return 0;
					break;
				case 7:
					return 0;
					break;
				case 11:
					return 78;
					break;
			}
			break;
		default:
			break;
	}
	return -99;
}

var func_357(int iParam0)//Position - 0x83BDC
{
	return __LIB_0__::func_163(iParam0, 10);
}

void func_358(bool bParam0)//Position - 0x83D49
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_113386.f_2363.f_539[bParam0 /*65*/].f_13[iVar0] = 0;
		Global_113386.f_2363.f_539[bParam0 /*65*/][iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_113386.f_2363.f_539[bParam0 /*65*/].f_39[iVar0] = -1;
		Global_113386.f_2363.f_539[bParam0 /*65*/].f_49[iVar0] = -1;
		iVar0++;
	}
	switch (bParam0)
	{
		case 0:
			Global_113386.f_2363.f_539[bParam0 /*65*/].f_59 = 0;
			break;
		case 1:
			Global_113386.f_2363.f_539[1 /*65*/].f_13[3] = 8;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[4] = 8;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[6] = 6;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[8] = 14;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[2] = 0;
			Global_113386.f_2363.f_539[1 /*65*/][2] = 0;
			Global_113386.f_2363.f_539[bParam0 /*65*/].f_59 = 0;
			break;
		case 2:
			Global_113386.f_2363.f_539[2 /*65*/].f_13[3] = 0;
			Global_113386.f_2363.f_539[2 /*65*/].f_13[4] = 23;
			Global_113386.f_2363.f_539[2 /*65*/].f_13[6] = 10;
			Global_113386.f_2363.f_539[bParam0 /*65*/].f_59 = 0;
			break;
	}
	Global_113386.f_2363.f_539[bParam0 /*65*/].f_60 = -99;
	Global_113386.f_2363.f_539[bParam0 /*65*/].f_61 = 2;
	Global_113386.f_2363.f_539[bParam0 /*65*/].f_62 = 0;
	Global_113386.f_2363.f_539[bParam0 /*65*/].f_63 = -99;
	Global_113386.f_2363.f_539[bParam0 /*65*/].f_64 = 1;
	Global_100166[0 /*65*/] = { Global_113386.f_2363.f_539[0 /*65*/] };
	Global_100166[1 /*65*/] = { Global_113386.f_2363.f_539[1 /*65*/] };
	Global_100166[2 /*65*/] = { Global_113386.f_2363.f_539[2 /*65*/] };
}

int func_359(bool bParam0)//Position - 0x866B1
{
	switch (bParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
	}
	return 0;
}

int func_360(int iParam0, bool bParam1)//Position - 0x866E8
{
	if (iParam0 < 0 || iParam0 > 3)
	{
	}
	if (bParam1 < 0 || bParam1 > 31)
	{
	}
	return (iParam0 * 32 + bParam1);
}

int func_361(int iParam0, var* uParam1)//Position - 0x86F23
{
	int iVar0;
	int iVar1;
	iVar1 = FILES::GET_NUM_DLC_WEAPONS_SP();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA_SP(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_362(int iParam0)//Position - 0x86F8B
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x87133
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO"):
		case joaat("COMPONENT_SMG_MK2_CAMO_02"):
		case joaat("COMPONENT_SMG_MK2_CAMO_03"):
		case joaat("COMPONENT_SMG_MK2_CAMO_04"):
		case joaat("COMPONENT_SMG_MK2_CAMO_05"):
		case joaat("COMPONENT_SMG_MK2_CAMO_06"):
		case joaat("COMPONENT_SMG_MK2_CAMO_07"):
		case joaat("COMPONENT_SMG_MK2_CAMO_08"):
		case joaat("COMPONENT_SMG_MK2_CAMO_09"):
		case joaat("COMPONENT_SMG_MK2_CAMO_10"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return 1;
			break;
	}
	return 0;
}

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x87966
{
	if (iParam2 == -99)
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (!bParam3 || BitTest(Global_113386.f_7229[1], 0))
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3816[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
		case joaat("Player_Two"):
			if (!bParam3 || BitTest(Global_113386.f_7229[3], 0))
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3816[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			if (!bParam3 || BitTest(Global_113386.f_7229[4], 0))
			{
				MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3816[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
	}
}

bool func_365(int iParam0)//Position - 0x87EBE
{
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_366(var uParam0, bool bParam1)//Position - 0x88173
{
	int iVar0;
	iVar0 = 7;
	if (bParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (bParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (bParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_367(bool bParam0)//Position - 0x88E62
{
	if (bParam0)
	{
		StringCopy(&Global_112442, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

int func_368(int iParam0)//Position - 0x8974D
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

var func_369(int iParam0)//Position - 0x89999
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

void func_370(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x8ECE0
{
	if (__LIB_0__::func_294())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 24);
		}
		__LIB_0__::func_6(1);
	}
}

void func_371()//Position - 0x37E
{
}

void func_372(int iParam0)//Position - 0x546
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_373(int iParam0)//Position - 0x4B71
{
	Global_100441.f_21 = iParam0;
}

void func_374()//Position - 0xE601
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

int func_375(int iParam0)//Position - 0x10D8B
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_376(bool bParam0, int iParam1)//Position - 0x7255B
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[bParam0] = iParam1;
}

int func_377(bool bParam0)//Position - 0x72583
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return 0;
	}
	return Global_113386.f_2363.f_539.f_2332[bParam0];
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7309C
{
	int iVar0;
	iVar0 = __LIB_0__::func_362(iParam2);
	if (iVar0 != 0)
	{
		WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(iParam0, iParam1, iVar0, iParam3);
	}
}

void func_379(int iParam0, int iParam1, int iParam2)//Position - 0x733F3
{
	int iVar0;
	iVar0 = __LIB_0__::func_362(iParam2);
	if (iVar0 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iVar0);
	}
}

int func_380(int iParam0)//Position - 0x767A9
{
	if (iParam0 == 0)
	{
		return 3;
	}
	else if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 2;
	}
	return 0;
}

bool func_381()//Position - 0x76D22
{
	return Global_23009;
}

int func_382(int iParam0, int iParam1)//Position - 0x76EAB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_41748[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_41748[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_383(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7B159
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				case 1:
					*uParam3 = 65;
					break;
				case 3:
					*uParam3 = 67;
					break;
				case 2:
					*uParam3 = 66;
					break;
				case 4:
					*uParam3 = 68;
					break;
				case 5:
					*uParam3 = 69;
					break;
				case 6:
					*uParam3 = 70;
					break;
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_384(bool bParam0)//Position - 0x7B3B0
{
	switch (bParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95446);
			break;
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95446);
			break;
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_95446);
			break;
		default:
			break;
	}
}

void func_385(int iParam0)//Position - 0x7B5EB
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = __LIB_0__::func_263(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("WEAPON_UNARMED")) && iVar3 != joaat("OBJECT"))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
				{
					if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = FILES::GET_NUM_DLC_WEAPONS();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
			{
				if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
				{
					WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_386(bool bParam0)//Position - 0x7B79A
{
	if (bParam0 == 0)
	{
		return 0;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return 1;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_387(int iParam0, int iParam1, bool bParam2)//Position - 0x7BAA1
{
	int iVar0;
	bool bVar1;
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_41748[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_41748[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_41748[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_41748[iParam0 /*31*/].f_25[iVar0];
			Global_41748[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_41748[iParam0 /*31*/].f_25[iVar0])
		{
			Global_41748[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_41748[iParam0 /*31*/].f_24 = (Global_41748[iParam0 /*31*/].f_24 - 1);
	}
}

int func_388(int iParam0)//Position - 0x7BED9
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

struct<6> func_389()//Position - 0x82501
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_390()//Position - 0x825AD
{
	struct<6> Var0;
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

void func_391(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x82CAF
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_392(struct<3> Param0, bool bParam1)//Position - 0x83929
{
	int iVar0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

int func_393(int iParam0)//Position - 0x8D6AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77137.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_394(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x8D979
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1, bool bParam2)//Position - 0x8D9F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x8E50C
{
	if (__LIB_0__::func_292(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_397(bool bParam0)//Position - 0x8E734
{
	if (!__LIB_0__::func_317(bParam0))
	{
		return __LIB_0__::func_318(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

int func_398(bool bParam0, bool bParam1, bool bParam2)//Position - 0x969DD
{
	int iVar0;
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_399()//Position - 0x96E31
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_400()//Position - 0x9910F
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_401(int iParam0, int iParam1, bool bParam2)//Position - 0x9CEDE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75250[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75250[iVar0 /*9*/] != -1)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75250[iVar0 /*9*/].f_1 > 1)
			{
				Global_75250[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75250[iVar0 /*9*/].f_1 < 0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_402(bool bParam0, int iParam1)//Position - 0x9EE13
{
	int iVar0;
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_403(int iParam0, bool bParam1)//Position - 0x9EEE7
{
	int iVar0;
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_404()//Position - 0x9FE7F
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

bool func_405(char* sParam0, int iParam1, char* sParam2)//Position - 0xA6A32
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_406()//Position - 0xAF8A7
{
	Global_23011.f_134 = 1;
}

float func_407(float fParam0)//Position - 0xB02AE
{
	return (fParam0 * 57.29578f);
}

float func_408(float fParam0, float fParam1, float fParam2)//Position - 0xB0341
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_409(int iParam0, int iParam1)//Position - 0xBF02B
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

void func_410(int iParam0)//Position - 0xF93
{
	Global_97747 = iParam0;
}

int func_411(int iParam0)//Position - 0x2738
{
	return iParam0 & 15;
}

void func_412(var uParam0)//Position - 0x6219
{
	if (uParam0->f_57)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uParam0->f_5)))
		{
			PHYSICS::DELETE_ROPE(&(uParam0->f_5));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_7));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_8));
		}
		uParam0->f_57 = 0;
	}
}

void func_413(var uParam0)//Position - 0x6379
{
	int iVar0;
	if (!uParam0->f_80)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uParam0->f_5)))
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				if (iVar0 != 0)
				{
					PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, iVar0);
				}
				iVar0++;
			}
		}
	}
}

int func_414()//Position - 0xA709
{
	return joaat("p_rpulley_s");
}

int func_415()//Position - 0xA716
{
	return joaat("prop_ld_test_01");
}

char* func_416()//Position - 0xA723
{
	return "MISSRAPPEL";
}

void func_417(int iParam0, var uParam1)//Position - 0x103CE
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_418(int iParam0, var uParam1)//Position - 0x10416
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_419(var uParam0)//Position - 0x1045E
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

int func_420(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BD6A
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar1 = (iParam1 - __LIB_0__::func_26(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var3);
		iVar4 = (iParam1 - __LIB_0__::func_25(iParam0, __LIB_0__::func_33(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78252.f_26[iParam2] && iParam1 == Global_78252[iParam2]) && Global_78252.f_13[iParam2] != 0)
		{
			return Global_78252.f_13[iParam2];
		}
		iVar5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, __LIB_0__::func_33(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
		Global_78252.f_13[iParam2] = Var3.f_1;
		Global_78252[iParam2] = iParam1;
		Global_78252.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_421(int iParam0, int iParam1)//Position - 0x2EAE6
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866852[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_422(int iParam0, int iParam1)//Position - 0x338A6
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (HUD::GET_MENU_PED_INT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

float func_423(int iParam0, int iParam1)//Position - 0x3424A
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (HUD::GET_MENU_PED_FLOAT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

float func_424(int iParam0, int iParam1)//Position - 0x34389
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_425(int iParam0, int iParam1)//Position - 0x40666
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2869167[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_426(int iParam0, int iParam1)//Position - 0x43163
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2868734[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6C0A0
{
	int iVar0;
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_0__::func_330(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_428(struct<3> Param0, float fParam1)//Position - 0x6EE47
{
	if (__LIB_0__::func_78(Global_78559, 0f, 0f, 0f, 0))
	{
		Global_78559 = { Param0 };
		Global_78562 = fParam1;
	}
}

int func_429(bool bParam0)//Position - 0x729F7
{
	if (__LIB_0__::func_317(bParam0))
	{
		if ((Global_113386.f_9085 || Global_3) || __LIB_0__::func_2(0))
		{
			return Global_113386.f_2363.f_539.f_2348[bParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_430()//Position - 0x72A45
{
	return Global_113386.f_2363.f_539.f_4323;
}

bool func_431(int iParam0)//Position - 0x749D6
{
	return __LIB_0__::func_163(iParam0, 20);
}

int func_432(int iParam0)//Position - 0x74E17
{
	return Global_113386.f_1.f_73[iParam0 /*3*/];
}

void func_433(int iParam0)//Position - 0x75075
{
	MISC::SET_BIT(&(Global_113386.f_1.f_118), iParam0);
}

int func_434(int iParam0)//Position - 0x7508B
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_205[iParam0];
}

int func_435(int iParam0)//Position - 0x750B8
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		case 1:
			return 8;
			break;
		case 2:
			return 9;
			break;
		case 3:
			return 10;
			break;
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_436()//Position - 0x7581A
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)//Position - 0x764FA
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_438(int iParam0, int iParam1)//Position - 0x7659C
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_439(int iParam0, int* iParam1)//Position - 0x765E4
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

void func_440(int* iParam0, char* sParam1, bool bParam2)//Position - 0x76850
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				__LIB_0__::func_210(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = MISC::GET_GAME_TIMER();
}

int func_441(int* iParam0)//Position - 0x76888
{
	if (!PED::IS_PED_INJURED(iParam0->f_16))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_442(var uParam0)//Position - 0x76904
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0, var uParam1, int iParam2)//Position - 0x76958
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_444(char* sParam0)//Position - 0x769EC
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

void func_445(int iParam0, var uParam1)//Position - 0x77A52
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 14);
			break;
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 15);
			break;
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_446(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x77AD4
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

int func_447(int iParam0, var uParam1)//Position - 0x77AF3
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		case 1:
			return BitTest(uParam1->f_13, 15);
		case 2:
			return BitTest(uParam1->f_13, 16);
		default:
	}
	return 0;
}

int func_448(int iParam0, float fParam1)//Position - 0x77B33
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_449(int iParam0, int iParam1)//Position - 0x77B6A
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_399()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_450(int iParam0, int iParam1)//Position - 0x77BD1
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_451(int iParam0, var uParam1)//Position - 0x77C06
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 17);
			break;
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 18);
			break;
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

int func_452(int iParam0, var uParam1)//Position - 0x77C4E
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		case 1:
			return BitTest(uParam1->f_13, 18);
		case 2:
			return BitTest(uParam1->f_13, 19);
		default:
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x77C8E
{
	int iVar0;
	int iVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_454(int iParam0, var uParam1)//Position - 0x77D1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, false);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, false);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x77F88
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0, int iParam1)//Position - 0x77FC0
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_457(var uParam0)//Position - 0x7805F
{
	int iVar0;
	if (!BitTest(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_458(var uParam0)//Position - 0x780FF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

int func_459()//Position - 0x78195
{
	var uVar0;
	return uVar0;
}

void func_460(int iParam0)//Position - 0x78A97
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

char* func_461(bool bParam0)//Position - 0x78B30
{
	switch (bParam0)
	{
		case 1:
			return "HC_N_GUS" /* GXT: Gustavo Mota */;
			break;
		case 2:
			return "HC_N_KAR" /* GXT: Karl Abolaji */;
			break;
		case 10:
			return "HC_N_PAC" /* GXT: Packie McReary */;
			break;
		case 11:
			return "HC_N_CHE" /* GXT: Chef */;
			break;
		case 3:
			return "HC_N_HUG" /* GXT: Hugh Welsh */;
			break;
		case 4:
			return "HC_N_NOR" /* GXT: Norm Richards */;
			break;
		case 5:
			return "HC_N_DAR" /* GXT: Daryl Johns */;
			break;
		case 6:
			return "HC_N_PAI" /* GXT: Paige Harris */;
			break;
		case 7:
			return "HC_N_CHR" /* GXT: Christian Feltz */;
			break;
		case 12:
			return "HC_N_RIC" /* GXT: Rickie Lukens */;
			break;
		case 8:
			return "HC_N_EDD" /* GXT: Eddie Toh */;
			break;
		case 13:
			return "HC_N_TAL" /* GXT: Taliana Martinez */;
			break;
		case 9:
			return "HC_N_KRM" /* GXT: Karim Denz */;
			break;
	}
	return "ERROR!";
}

void func_462(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x78CAF
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = (*uParam2 - *uParam2 & 32767);
			*uParam2 = (*uParam2 || iParam1);
			return;
			break;
		case 1:
			*uParam2 = (*uParam2 - *uParam2 & 1073709056);
			*uParam2 = (*uParam2 || SYSTEM::SHIFT_LEFT(iParam1, 15));
			return;
			break;
		case 2:
			*uParam3 = (*uParam3 - *uParam3 & 32767);
			*uParam3 = (*uParam3 || iParam1);
			return;
			break;
		case 3:
			*uParam3 = (*uParam3 - *uParam3 & 1073709056);
			*uParam3 = (*uParam3 || SYSTEM::SHIFT_LEFT(iParam1, 15));
			return;
			break;
	}
}

int func_463(int iParam0)//Position - 0x78D5A
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		case 1:
			return 100;
			break;
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_464(int iParam0, int iParam1, int iParam2)//Position - 0x78D94
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

int func_465(int iParam0)//Position - 0x78F3E
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		case 1:
			return 100;
			break;
		case 2:
			return 100;
			break;
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x78F87
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		case 1:
			iVar0 = 8;
			break;
		case 2:
			iVar0 = 9;
			break;
		case 3:
			iVar0 = 10;
			break;
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_467(struct<80> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, float fParam18)//Position - 0x8401A
{
	if (Param0.f_0 == 3)
	{
		if (Param0.f_69 && !Param0.f_79)
		{
			if (fParam18 >= 0.045f && fParam18 <= 0.76f)
			{
				return 1;
			}
		}
		else if (fParam18 >= 0.07f && fParam18 <= 0.76f)
		{
			return 1;
		}
	}
	return 0;
}

int func_468(var uParam0, bool bParam1)//Position - 0x84075
{
	if (uParam0->f_10.f_2 <= uParam0->f_27)
	{
		if (uParam0->f_22 == 0f || !bParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_469()//Position - 0x840A2
{
	return 224;
}

int func_470()//Position - 0x840AC
{
	return 223;
}

void func_471(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x840B6
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

void func_472(var uParam0, int iParam1)//Position - 0x841A5
{
	uParam0->f_1 = iParam1;
}

void func_473(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x841B3
{
	uParam0->f_39 = iParam1;
	uParam0->f_40 = iParam2;
	uParam0->f_41 = iParam3;
	uParam0->f_42 = iParam4;
	uParam0->f_43 = iParam5;
	uParam0->f_44 = iParam6;
	uParam0->f_45 = iParam7;
	uParam0->f_46 = iParam8;
	uParam0->f_47 = iParam9;
	uParam0->f_48 = iParam10;
	uParam0->f_49 = iParam11;
	uParam0->f_51 = iParam12;
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::SET_CAM_FOV(uParam0->f_4, uParam0->f_51);
	}
}

void func_474(var uParam0, float fParam1)//Position - 0x84992
{
	uParam0->f_91 = PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_5);
	uParam0->f_89 = 0;
	uParam0->f_90 = uParam0->f_89 + 1;
	uParam0->f_30 = fParam1;
	uParam0->f_31 = (fParam1 / IntToFloat((uParam0->f_91 - 1)));
}

void func_475(var uParam0)//Position - 0x84B6F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_81[iVar0] == 0)
		{
			uParam0->f_81[iVar0] = AUDIO::GET_SOUND_ID();
		}
		iVar0++;
	}
}

void func_476(var uParam0, struct<3> Param1, bool bParam2, bool bParam3)//Position - 0x851CD
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (bParam2)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_4))
			{
				CAM::DESTROY_CAM(uParam0->f_4, false);
			}
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(uParam0->f_4, Param1, 0f, 0f, 0f, uParam0->f_51, 0, 1, 1, 2);
			CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 0f, 0f, true);
			if (bParam3)
			{
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
		}
	}
	uParam0->f_62 = 1;
}

void func_477(int iParam0, bool bParam1)//Position - 0x8919D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63184[iVar0 /*2*/] != 0)
			{
				if (Global_63184[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63183)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63184[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63184[iVar1 /*2*/] = iParam0;
	Global_63184[iVar1 /*2*/].f_1 = 7;
	Global_63183++;
}

void func_478(char* sParam0)//Position - 0x8CD84
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_479(int iParam0, int iParam1)//Position - 0x92028
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_480(int iParam0, int iParam1)//Position - 0x92248
{
	MISC::SET_BIT(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

Vector3 func_481()//Position - 0x9518F
{
	struct<3> Var0;
	return Var0;
}

int func_482(int iParam0)//Position - 0x97D0F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_483(int iParam0)//Position - 0x97D21
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

float func_484(bool bParam0)//Position - 0x97E75
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_485(int iParam0)//Position - 0x9A1B2
{
	return Global_96316[iParam0 /*5*/];
}

void func_486(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9ABAB
{
	if (iParam0 != 0)
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, iParam2, iParam3, iParam4, iParam5);
	}
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iParam2, iParam3, iParam4, 0);
}

int func_487(int iParam0)//Position - 0x9ABD4
{
	return Global_96316[iParam0 /*5*/].f_4;
}

void func_488(int iParam0)//Position - 0x9BB1D
{
	Global_22616 = iParam0;
}

void func_489(int* iParam0)//Position - 0xA6D75
{
	bool bVar0;
	struct<8> Var1;
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

bool func_490()//Position - 0xB39B6
{
	return Global_2714762.f_24;
}

int func_491()//Position - 0xB39D9
{
	return Global_1574632.f_18;
}

var func_492(var uParam0, int iParam1)//Position - 0xB3B6D
{
	return BitTest(*uParam0, iParam1);
}

var func_493()//Position - 0xB3BDD
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_494()//Position - 0xB3BF2
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_495(var uParam0, bool bParam1, bool bParam2)//Position - 0xB3C03
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

var func_496()//Position - 0xB406F
{
	return Global_1574991;
}

bool func_497()//Position - 0xB41A3
{
	return Global_1575058;
}

void func_498(int iParam0)//Position - 0xB60B2
{
	bool bVar0;
	int iVar1;
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_499(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xB7BE2
{
	bool bVar0;
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_500(char* sParam0, char* sParam1)//Position - 0xBE493
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <= 16)
			{
				StringCopy(&Global_78551, sParam0, 16);
				StringCopy(&Global_78555, sParam1, 16);
			}
		}
	}
}

void func_501(int iParam0, int iParam1)//Position - 0x85C
{
	Global_100441.f_22[iParam1] = iParam0;
}

int func_502()//Position - 0x89E
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_503(int iParam0, int iParam1)//Position - 0x8BC
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

int func_504(int iParam0)//Position - 0x3CA6
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_505()//Position - 0x447
{
	if (Global_31959 == 0 || Global_31959 == 2)
	{
		return 187;
	}
	return 161;
}

int func_506()//Position - 0x469
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_507()//Position - 0x483
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_508(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x960
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_509()//Position - 0x832B
{
	if (Global_21605 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

int func_510()//Position - 0xCB28
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_511()//Position - 0xD8E6
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

int func_512(int iParam0)//Position - 0xFD1A
{
	int iVar0;
	bool bVar1;
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_513(int iParam0)//Position - 0x10193
{
	int iVar0;
	bool bVar1;
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_514(char* sParam0)//Position - 0x170F
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_515(var uParam0)//Position - 0x1780
{
	return BitTest(*uParam0, 2);
}

bool func_516(var uParam0)//Position - 0x184D
{
	return BitTest(*uParam0, 1);
}

bool func_517(var uParam0, int iParam1)//Position - 0x19AF
{
	return (uParam0 && iParam1) != 0;
}

void func_518(int iParam0)//Position - 0x2B64
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_519(int iParam0, bool bParam1, bool bParam2)//Position - 0x49C0
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, __LIB_0__::func_316(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_520(int iParam0)//Position - 0x4DA2
{
	if (((((((((((((((((((((((((((((((((((iParam0 == joaat("COMPONENT_PISTOL_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PISTOL50_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW")) || iParam0 == joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PIMP")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_HATE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_LOVE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_KING")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_BOSS")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_GOON")) || iParam0 == joaat("COMPONENT_GUNRUN_MK2_UPGRADE")) || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_SECURITY")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY")) || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"))
	{
		return 1;
	}
	return 0;
}

void func_521(int iParam0, bool bParam1, int iParam2)//Position - 0x7530
{
	if (iParam2 == -1)
	{
		iParam2 = __LIB_0__::func_5();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_522(int iParam0)//Position - 0x3D4
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		case 7:
			return 4;
			break;
		case 2:
			return 3;
			break;
		case 1:
			return 2;
			break;
		case 3:
			return 1;
			break;
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_523(int* iParam0)//Position - 0x1C98
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

bool func_524(int iParam0)//Position - 0x2A8A
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_525(var uParam0, int iParam1)//Position - 0xAC01
{
	int iVar0;
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

var func_526()//Position - 0xB38F
{
	return Global_100480.f_1;
}

bool func_527()//Position - 0xB404
{
	return Global_100493.f_376 > 0;
}

int func_528(int iParam0)//Position - 0xB9A8
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
}

float func_529(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x5DEA
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

bool func_530(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x671C
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

int func_531(var uParam0, int iParam1)//Position - 0x6E8
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

int func_532(int iParam0, int iParam1)//Position - 0x1307
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

int func_533()//Position - 0x1C79
{
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_534(int iParam0, int iParam1, int iParam2)//Position - 0x3036
{
	int iVar0;
	var uVar1;
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_535(int iParam0)//Position - 0x3869
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_536(int iParam0, int iParam1)//Position - 0x38B0
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_537(int iParam0)//Position - 0x38CC
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_538(int iParam0)//Position - 0x391C
{
	if (Global_78586 != iParam0)
	{
		Global_78586 = iParam0;
	}
}

void func_539(var uParam0)//Position - 0x3B24
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

void func_540(int iParam0, int iParam1)//Position - 0x3BE8
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

int func_541(int iParam0)//Position - 0x3CA3
{
	if (iParam0 == 3)
	{
		return joaat("NUM_HIDDEN_PACKAGES_3");
	}
	if (iParam0 == 1)
	{
		return joaat("NUM_HIDDEN_PACKAGES_0");
	}
	if (iParam0 == 0)
	{
		return joaat("NUM_HIDDEN_PACKAGES_1");
	}
	if (iParam0 == 5)
	{
		return joaat("NUM_HIDDEN_PACKAGES_4");
	}
	return joaat("NUM_HIDDEN_PACKAGES_2");
}

void func_542(int iParam0, int iParam1, bool bParam2)//Position - 0x3E24
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_122), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_10049.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_10049.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_125), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_10049.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_10049.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_543(int* iParam0, int iParam1, bool bParam2)//Position - 0x3F10
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, iParam1);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_544(struct<3> Param0)//Position - 0x4137
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		while (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

int func_545()//Position - 0x42C6
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_546(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x4751
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_547(bool bParam0)//Position - 0x4B35
{
	if (bParam0)
	{
		Global_113386.f_14051.f_89 = 1;
	}
	else
	{
		Global_113386.f_14051.f_89 = 0;
	}
}

bool func_548(var uParam0)//Position - 0x4C95
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_549()//Position - 0x45E
{
	int iVar0;
	if (!Global_63151)
	{
		return;
	}
	if (Global_75249 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		switch (Global_63379[Global_75250[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75250[iVar0 /*9*/].f_3 = 1;
				break;
			case 4:
				if (Global_63162)
				{
					Global_75250[iVar0 /*9*/].f_3 = 1;
				}
				break;
			case 6:
				if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_75250[iVar0 /*9*/].f_1 != 0)
					{
						Global_75250[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_63151 = 0;
}

void func_550(int iParam0)//Position - 0x944
{
	Global_75250[iParam0 /*9*/].f_1 = 0;
	Global_75250[iParam0 /*9*/].f_2 = 0f;
	Global_75250[iParam0 /*9*/].f_3 = 0;
	Global_75250[iParam0 /*9*/].f_4 = 0;
}

void func_551()//Position - 0xA04
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75436[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75445 = 0;
}

void func_552()//Position - 0xA31
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75402[iVar0 /*2*/] = 0;
		Global_75402[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75435 = 0;
}

void func_553()//Position - 0xA68
{
	Global_63313 = 0;
}

var func_554(int iParam0)//Position - 0xAC8
{
	var uVar0;
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_555()//Position - 0xADC
{
	int iVar0;
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_556()//Position - 0xB1A
{
	int iVar0;
	Global_63152 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		Global_75250[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_63162)
	{
	}
	Global_63162 = 0;
}

int func_557()//Position - 0xB93
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_63147)
	{
		return 0;
	}
	return Global_63159;
}

void func_558(char* sParam0)//Position - 0xBBD
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_559()//Position - 0xC31
{
	int iVar0;
	int iVar1;
	Global_106934 = Global_103950;
	Global_106934.f_1 = Global_103950.f_1;
	Global_106934.f_6 = Global_103950.f_6;
	Global_106934.f_7 = Global_103950.f_7;
	Global_106934.f_8 = Global_103950.f_8;
	Global_106934.f_2 = Global_103950.f_2;
	Global_106934.f_3 = Global_103950.f_3;
	Global_106934.f_4 = Global_103950.f_4;
	Global_106934.f_5 = Global_103950.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_106934.f_9[iVar1] = Global_103950.f_9[iVar1];
		Global_106934.f_13[iVar1] = Global_103950.f_13[iVar1];
		Global_106934.f_17[iVar1] = Global_103950.f_17[iVar1];
		Global_106934.f_21[iVar1] = Global_103950.f_21[iVar1];
		Global_106934.f_25[0 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_106934.f_25[1 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_106934.f_616[iVar1 /*65*/][iVar0] = Global_103950.f_616[iVar1 /*65*/][iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_13[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_26[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_106934.f_616[iVar1 /*65*/].f_59 = Global_103950.f_616[iVar1 /*65*/].f_59;
		Global_106934.f_616[iVar1 /*65*/].f_60 = Global_103950.f_616[iVar1 /*65*/].f_60;
		Global_106934.f_616[iVar1 /*65*/].f_61 = Global_103950.f_616[iVar1 /*65*/].f_61;
		Global_106934.f_616[iVar1 /*65*/].f_62 = Global_103950.f_616[iVar1 /*65*/].f_62;
		Global_106934.f_616[iVar1 /*65*/].f_63 = Global_103950.f_616[iVar1 /*65*/].f_63;
		Global_106934.f_616[iVar1 /*65*/].f_64 = Global_103950.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_106934.f_616[iVar1 /*65*/].f_39[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_49[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_106934.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_106934.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_106934.f_2244[iVar1 /*32*/][iVar0] = Global_103950.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_106934.f_2341[iVar1] = Global_103950.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_106934.f_2838[iVar1 /*15*/][iVar0] = Global_103950.f_2838[iVar1 /*15*/][iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_106934.f_2345[iVar1 /*164*/][iVar0] = Global_103950.f_2345[iVar1 /*164*/][iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_106934.f_2884 = { Global_103950.f_2884 };
	Global_106934.f_2884.f_3 = Global_103950.f_2884.f_3;
	Global_106934.f_2890 = { Global_103950.f_2890 };
	Global_106934.f_2890.f_3 = { Global_103950.f_2890.f_3 };
	Global_106934.f_2890.f_6 = Global_103950.f_2890.f_6;
	Global_106934.f_2890.f_8 = Global_106934.f_2890.f_8;
	Global_106934.f_2890.f_7 = Global_103950.f_2890.f_7;
	Global_106934.f_2890.f_9 = Global_103950.f_2890.f_9;
	Global_106934.f_2890.f_11 = Global_103950.f_2890.f_11;
	Global_106934.f_2890.f_10 = Global_103950.f_2890.f_10;
	Global_106934.f_2890.f_12 = Global_103950.f_2890.f_12;
	Global_106934.f_2890.f_12.f_1 = { Global_103950.f_2890.f_12.f_1 };
	Global_106934.f_2890.f_12.f_5 = Global_103950.f_2890.f_12.f_5;
	Global_106934.f_2890.f_12.f_6 = Global_103950.f_2890.f_12.f_6;
	Global_106934.f_2890.f_12.f_7 = Global_103950.f_2890.f_12.f_7;
	Global_106934.f_2890.f_12.f_8 = Global_103950.f_2890.f_12.f_8;
	Global_106934.f_2890.f_12.f_9 = { Global_103950.f_2890.f_12.f_9 };
	Global_106934.f_2890.f_12.f_59 = { Global_103950.f_2890.f_12.f_59 };
	Global_106934.f_2890.f_12.f_62 = Global_103950.f_2890.f_12.f_62;
	Global_106934.f_2890.f_12.f_63 = Global_103950.f_2890.f_12.f_63;
	Global_106934.f_2890.f_12.f_64 = Global_103950.f_2890.f_12.f_64;
	Global_106934.f_2890.f_12.f_65 = Global_103950.f_2890.f_12.f_65;
	Global_106934.f_2890.f_12.f_77 = Global_103950.f_2890.f_12.f_77;
	Global_106934.f_2890.f_12.f_66 = Global_103950.f_2890.f_12.f_66;
	Global_106934.f_2890.f_12.f_67 = Global_103950.f_2890.f_12.f_67;
	Global_106934.f_2890.f_12.f_68 = Global_103950.f_2890.f_12.f_68;
	Global_106934.f_2890.f_12.f_69 = Global_103950.f_2890.f_12.f_69;
	Global_106934.f_2890.f_12.f_71 = Global_103950.f_2890.f_12.f_71;
	Global_106934.f_2890.f_12.f_72 = Global_103950.f_2890.f_12.f_72;
	Global_106934.f_2890.f_12.f_73 = Global_103950.f_2890.f_12.f_73;
	Global_106934.f_2890.f_12.f_74 = Global_103950.f_2890.f_12.f_74;
	Global_106934.f_2890.f_12.f_75 = Global_103950.f_2890.f_12.f_75;
	Global_106934.f_2890.f_12.f_76 = Global_103950.f_2890.f_12.f_76;
	Global_106934.f_2980 = Global_103950.f_2980;
	Global_106934.f_2980.f_1 = Global_103950.f_2980.f_1;
	Global_106934.f_2980.f_2 = Global_103950.f_2980.f_2;
	Global_106934.f_2980.f_3 = Global_103950.f_2980.f_3;
}

void func_560(int iParam0)//Position - 0xA315
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_561(int iParam0)//Position - 0xA398
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_562()//Position - 0xA460
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_563(int iParam0, int iParam1, int iParam2)//Position - 0xA4AC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_564(int iParam0)//Position - 0xA4F8
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_565(int iParam0)//Position - 0xA582
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_566()//Position - 0xA5D5
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8136, 25);
	MISC::SET_BIT(&Global_8137, 11);
}

int func_567(int iParam0)//Position - 0xA6F9
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_568()//Position - 0xA738
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_569()//Position - 0xA755
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

void func_570(int iParam0)//Position - 0xAAA3
{
	Global_112473[iParam0 /*10*/].f_4 = 1;
	Global_112473[iParam0 /*10*/].f_5 = 0;
	Global_112473[iParam0 /*10*/].f_6 = 0;
	Global_112473[iParam0 /*10*/] = 0;
}

int func_571(int iParam0)//Position - 0xB498
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_572(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xBD0D
{
	Global_21059 = { *uParam0 };
	Global_7452 = uParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_573(int iParam0, int iParam1)//Position - 0x112F
{
	int iVar0;
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_574()//Position - 0x465
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, false))
	{
		if (TASK::GET_SEQUENCE_PROGRESS(iLocal_38) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				OBJECT::DELETE_OBJECT(&iLocal_39);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_38, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_38, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 1)
			{
				OBJECT::DELETE_OBJECT(&iLocal_39);
			}
		}
	}
}

int func_575()//Position - 0xDEB
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_38) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				ENTITY::DETACH_ENTITY(iLocal_39, true, true);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_38, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
			{
				PED::SET_PED_KEEP_TASK(iLocal_38, true);
				TASK::TASK_SMART_FLEE_PED(iLocal_38, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				return 1;
			}
		}
	}
	return 0;
}

void func_576()//Position - 0xF6D
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_38, true) };
		if (__LIB_0__::func_86(Local_49))
		{
			fLocal_51 = SYSTEM::VDIST(Var0, Local_45);
			fLocal_52 = SYSTEM::VDIST(Var0, Local_47);
			if (fLocal_51 < fLocal_52)
			{
				Local_49 = { Local_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				Local_49 = { Local_47 };
				fLocal_50 = fLocal_48;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 407.4285f, -1626.572f, 27.292778f, 412.82452f, -1620.1666f, 33.292778f, 6f, false, true, 0))
				{
					Local_49 = { Local_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_577()//Position - 0x10B3
{
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_38))
		{
			PED::DELETE_PED(&iLocal_38);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_38);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_578(int iParam0)//Position - 0x31D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_579(var uParam0)//Position - 0x44D
{
	uParam0->f_1 = 0;
}

void func_580(var uParam0, bool bParam1, bool bParam2)//Position - 0x4B8
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_581(int iParam0)//Position - 0x10E5
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::func_160())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_582()//Position - 0x111A
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_583(int iParam0, int iParam1, bool bParam2)//Position - 0x13CB
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_584(int iParam0)//Position - 0x18AC
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_585(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1F26
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_586(int iParam0)//Position - 0x1F44
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_587(int iParam0)//Position - 0x2ADD
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

bool func_588(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, float fParam6, int iParam7, int iParam8)//Position - 0x2DE8
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param4, Param5, fParam6, iParam7, iParam8);
}

void func_589()//Position - 0x8153
{
	Global_1946141 = 0;
	Global_1946141.f_1 = { 0f, 0f, 0f };
	Global_1946141.f_4 = { 0f, 0f, 0f };
	Global_1946141.f_7 = { 0f, 0f, 0f };
	Global_1946141.f_10 = 0f;
	Global_1946141.f_11 = 0f;
	Global_1946141.f_12 = 0;
	Global_1946141.f_13 = 0;
	Global_1946141.f_14 = { 0f, 0f, 0f };
	Global_1946141.f_17 = { 0f, 0f, 0f };
	Global_1946141.f_20 = { 0f, 0f, 0f };
	Global_1946141.f_23 = 0;
	Global_1946141.f_24 = 0;
}

int func_590(int iParam0)//Position - 0x8204
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

bool func_591(int iParam0, var uParam1)//Position - 0x8D9C
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		case 1:
			*uParam1 = 5;
			break;
		case 2:
			*uParam1 = 6;
			break;
		case 3:
			*uParam1 = 7;
			break;
		case 4:
			*uParam1 = 111;
			break;
		case 5:
			*uParam1 = 112;
			break;
		case 6:
			*uParam1 = 107;
			break;
		case 7:
			*uParam1 = 104;
			break;
		case 8:
			*uParam1 = 98;
			break;
		case 9:
			*uParam1 = 100;
			break;
		case 10:
			*uParam1 = 102;
			break;
		case 11:
			*uParam1 = 99;
			break;
		case 12:
			*uParam1 = 105;
			break;
		case 13:
			*uParam1 = 106;
			break;
		case 14:
			*uParam1 = 37;
			break;
		case 15:
			*uParam1 = 90;
			break;
		case 16:
			*uParam1 = 88;
			break;
		case 17:
			*uParam1 = 89;
			break;
		case 18:
			*uParam1 = 91;
			break;
		case 19:
			*uParam1 = 38;
			break;
		case 20:
			*uParam1 = 138;
			break;
		case 21:
			*uParam1 = 36;
			break;
		case 22:
			*uParam1 = 27;
			break;
		case 23:
			*uParam1 = 28;
			break;
		case 24:
			*uParam1 = 29;
			break;
		case 25:
			*uParam1 = 150;
			break;
		case 26:
			*uParam1 = 30;
			break;
		case 27:
			*uParam1 = 31;
			break;
		case 28:
			*uParam1 = 32;
			break;
		case 29:
			*uParam1 = 35;
			break;
		case 30:
			*uParam1 = 135;
			break;
		case 31:
			*uParam1 = 137;
			break;
		case 32:
			*uParam1 = 136;
			break;
		case 33:
			*uParam1 = 71;
			break;
		case 34:
			*uParam1 = 145;
			break;
		case 35:
			*uParam1 = 63;
			break;
		case 36:
			*uParam1 = 64;
			break;
		case 37:
			*uParam1 = 65;
			break;
		case 38:
			*uParam1 = 66;
			break;
		case 39:
			*uParam1 = 67;
			break;
		case 40:
			*uParam1 = 68;
			break;
		case 41:
			*uParam1 = 69;
			break;
		case 42:
			*uParam1 = 73;
			break;
		case 43:
			*uParam1 = 70;
			break;
		case 44:
			*uParam1 = 74;
			break;
		case 45:
			*uParam1 = 51;
			break;
		case 46:
			*uParam1 = 53;
			break;
		case 47:
			*uParam1 = 54;
			break;
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_592(int iParam0)//Position - 0x905E
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 36;
		case 2:
			return 35;
		case 3:
			return 46;
		case 4:
			return 48;
		case 5:
			return 16;
		case 6:
			return 14;
		case 7:
			return 19;
		case 8:
			return 22;
		case 9:
			return 31;
		case 10:
			return 30;
		case 11:
			return 33;
		case 12:
			return 34;
		default:
	}
	return 0;
}

struct<13> func_593()//Position - 0x9326
{
	struct<13> Var0;
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_594(int iParam0)//Position - 0x933B
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_595(int iParam0, var uParam1)//Position - 0x935C
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_596(int iParam0)//Position - 0x965D
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

int func_597(int iParam0, struct<3> Param1, int iParam2)//Position - 0xAC63
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_598(int iParam0)//Position - 0xADFE
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_480;
	}
	return 0;
}

void func_599()//Position - 0xAEEE
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667225.f_1755[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667225.f_1754 = 0;
}

void func_600(int iParam0, var uParam1)//Position - 0xBDBE
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_601(int iParam0)//Position - 0xBE6E
{
	int iVar0;
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_602(var uParam0, struct<3> Param1)//Position - 0xBE80
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

int func_603(int iParam0)//Position - 0xC0FF
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return __LIB_0__::func_160();
}

struct<13> func_604(int iParam0)//Position - 0xC122
{
	struct<13> Var0;
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_605(int iParam0)//Position - 0xC1A6
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

void func_606(int iParam0)//Position - 0xC2E0
{
	if (Global_2667225.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667225.f_682 < iParam0))
		{
			Global_2667225.f_676 = 2;
		}
		else
		{
			Global_2667225.f_676 = 5;
		}
	}
	else
	{
		Global_2667225.f_676 = 5;
	}
}

int func_607(struct<3> Param0, float fParam1)//Position - 0xC3B4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2667225.f_2737[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_608(var uParam0, var uParam1, var uParam2)//Position - 0xC510
{
	char cVar0[64];
	int iVar1;
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	return iVar1;
}

void func_609(int iParam0)//Position - 0xD388
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674786[iParam0 /*3*/] = { Global_2674786[iParam0 + 1 /*3*/] };
			Global_2674786.f_121[iParam0] = Global_2674786.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

int func_610(int iParam0, int iParam1, int iParam2)//Position - 0xD555
{
	if (iParam2 == 1)
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

var func_611(int iParam0)//Position - 0xD740
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_612(var uParam0, var uParam1)//Position - 0xDA22
{
	var uVar0;
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_613(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0xDA84
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

int func_614(struct<3> Param0)//Position - 0xE251
{
	float fVar0;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_615(struct<3> Param0, var uParam1)//Position - 0xE361
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
}

int func_616(struct<2> Param0, var uParam1)//Position - 0xE381
{
	if (Param0.f_1 > Global_2673781[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673781[1])
	{
		if (Param0.f_0 < Global_2673785[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673781[2])
	{
		if (Param0.f_0 < Global_2673785[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673785[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673785[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_617()//Position - 0xE679
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_618()//Position - 0xE6AC
{
	return Global_1946250.f_519;
}

int func_619(struct<3> Param0)//Position - 0xE763
{
	float fVar0;
	if (Global_2667225.f_596 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2667225.f_593);
		if (fVar0 < Global_2667225.f_596)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_620(struct<3> Param0, struct<3> Param1)//Position - 0xEC60
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_621(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0xEC99
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

void func_622()//Position - 0xF75C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_623()//Position - 0xF789
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		uVar3 = Global_2667225.f_2160[iVar1];
		Global_2667225.f_2160[iVar1] = Global_2667225.f_2160[iVar2];
		Global_2667225.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

int func_624(struct<3> Param0, float fParam1, float fParam2)//Position - 0xF855
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar0 = -1;
	fVar1 = 100000000f;
	iVar3 = 0;
	while (iVar3 < Global_2667225.f_1754)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2667225.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_625(int iParam0)//Position - 0x1029B
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		case 84:
			return 2;
			break;
		case 85:
			return 3;
			break;
		case 86:
			return 4;
			break;
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x1665B
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
			return 1;
		default:
	}
	return 0;
}

int func_627(int iParam0)//Position - 0x16CDB
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		default:
	}
	return 0;
}

int func_628(int iParam0)//Position - 0x16D79
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.2695f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0)//Position - 0x16DB7
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.2446f, 3127.9133f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_630(int iParam0, int iParam1)//Position - 0x16DF5
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
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
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_631(int iParam0)//Position - 0x170AC
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		case 90:
			return 2;
			break;
		case 91:
			return 3;
			break;
		case 92:
			return 4;
			break;
		case 93:
			return 5;
			break;
		case 94:
			return 6;
			break;
		case 95:
			return 7;
			break;
		case 96:
			return 8;
			break;
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_632(int iParam0)//Position - 0x17133
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_633()//Position - 0x1835D
{
	return Global_2714762.f_17;
}

void func_634(struct<3> Param0, float fParam1)//Position - 0x1836B
{
	if (Global_2667225.f_1754 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/] = { Param0 };
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/].f_3 = fParam1;
		Global_2667225.f_1754++;
	}
}

int func_635()//Position - 0x18472
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2715699.f_6415)
	{
		return 0;
	}
	return 0;
}

void func_636()//Position - 0x1851C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667225.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

Vector3 func_637(var uParam0)//Position - 0x186A4
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_638(bool bParam0)//Position - 0x187C5
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_639()//Position - 0x187E8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_691[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_691[iVar0])
			{
				if (!Global_2667225.f_687[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_687[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2667225.f_687[iVar0]);
						Global_2667225.f_687[iVar0] = -1;
					}
					else
					{
						Global_2667225.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667225.f_687[iVar0] == -1)
		{
			Global_2667225.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_640(int iParam0)//Position - 0x18930
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

bool func_641(int iParam0)//Position - 0x1990A
{
	return iParam0 == 17;
}

void func_642()//Position - 0x19917
{
	struct<3> Var0;
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_643()//Position - 0x19964
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_644(int iParam0)//Position - 0x199A2
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_645(int iParam0, bool bParam1)//Position - 0x19AA3
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_646()//Position - 0x19ABF
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_647()//Position - 0x19B3A
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_648()//Position - 0x1A62D
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

var func_649(var uParam0)//Position - 0x1A64B
{
	return uParam0->f_1;
}

void func_650()//Position - 0x1ABCC
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_651()//Position - 0x1AD0B
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

int func_652(int iParam0)//Position - 0x3BD2D
{
	if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("avisa"))
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)//Position - 0x3BF81
{
	if (Global_2815059.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_654(int iParam0, bool bParam1)//Position - 0x3C128
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_655(int iParam0, bool bParam1)//Position - 0x3C1A8
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_656(int iParam0, bool bParam1)//Position - 0x3C228
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_657(int iParam0, bool bParam1)//Position - 0x3C296
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_658(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3F869
{
	struct<3> Var0;
	Var0 = { Param1 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_659(struct<3> Param0, int iParam1, int iParam2, bool bParam3)//Position - 0x3F893
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bVar5 = false;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var1[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var1[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var1[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var1[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var1[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var1[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var1[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var1[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var1[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var1[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var1[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var1[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var1[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var1[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var1[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var1[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var1[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var1[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var1[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var1[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var1[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var1[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var1[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var1[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var1[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var1[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var1[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var1[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var1[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var1[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var1[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var1[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var1[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var1[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var1[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var1[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var1[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var1[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var1[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], bVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_660(int iParam0)//Position - 0x41565
{
	Global_1649593.f_1163 = iParam0;
}

bool func_661()//Position - 0x41924
{
	return Global_75485;
}

int func_662()//Position - 0x427E5
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		default:
	}
	return joaat("freemode");
}

bool func_663()//Position - 0x42809
{
	return Global_2714762.f_698;
}

bool func_664()//Position - 0x4282F
{
	return Global_2725403;
}

int func_665(int iParam0)//Position - 0x26A
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_666(int iParam0, int iParam1)//Position - 0x1C0F
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_667(int iParam0, int iParam1)//Position - 0x1C28
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_668(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2527
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_669(int iParam0, int iParam1)//Position - 0x2EE5
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { __LIB_0__::func_604(iParam0) };
		Global_2787518 = { __LIB_0__::func_604(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_670(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2FCA
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_671()//Position - 0x3556
{
	SYSTEM::WAIT(0);
}

int func_672()//Position - 0x3835
{
	int iVar0;
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (__LIB_0__::func_194())
		{
			return 0;
		}
		if (__LIB_0__::func_193(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_673(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x39B5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_199();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

var func_674()//Position - 0x333
{
	return Global_1574582;
}

void func_675(var uParam0)//Position - 0x1124
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_676(int iParam0)//Position - 0x116C
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_677(int iParam0, int iParam1)//Position - 0x1197
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

void func_678()//Position - 0x137A
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_679(int iParam0)//Position - 0x1388
{
	var uVar0;
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_680(int iParam0)//Position - 0x15E5
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

Vector3 func_681(struct<3> Param0, float fParam1)//Position - 0x35FB
{
	float fVar0;
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_682(int iParam0)//Position - 0x3EED
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_683(int iParam0, int iParam1, var uParam2)//Position - 0x4602
{
	struct<4> Var0;
	Var0.f_0 = -1600651275;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_684(int iParam0)//Position - 0x50ED
{
	switch (iParam0)
	{
		case 150:
			return 1;
		case 24:
			return 2;
		case 26:
			return 2;
		case 256:
			return 0;
		case 258:
			return 0;
		case 259:
			return 2;
		case 271:
			return 0;
		case 273:
			return 2;
		case 276:
			return 0;
		case 277:
			return 0;
		case 262:
			return 0;
		case 263:
			return 0;
		case 264:
			return 0;
		case 269:
			return 2;
		case 270:
			return 2;
		case 275:
			return 2;
		case 268:
			return 2;
		case 286:
			return 2;
		case 267:
			return 0;
		case 266:
			return 2;
		case 287:
			return 2;
		case 289:
			return 2;
		case 147:
			return 2;
		case 291:
			return 0;
		case 292:
			return 0;
		case 293:
			return 0;
		case 294:
			return 0;
		case 295:
			return 0;
		case 296:
			return 0;
		case 297:
			return 0;
		case 298:
			return 0;
		case 299:
			return 0;
		case 300:
			return 0;
		case 301:
			return 0;
		default:
	}
	return -1;
}

int func_685(int iParam0, bool bParam1)//Position - 0x5251
{
	switch (iParam0)
	{
		case 181:
			return 15;
		case 188:
			return 8;
		case 182:
			return 14;
		case 186:
			return 122;
		case 189:
			return 1;
		case 187:
			return 5;
		case 190:
			return 6;
		case 183:
			return 11;
		case 191:
			return 0;
		case 192:
			return 2;
		case 184:
			return 13;
		case 193:
			return 3;
		case 185:
			return 12;
		case 49:
			return 148;
		case 52:
			return 151;
		case 53:
			return 152;
		case 54:
			return 157;
		case 55:
			return 153;
		case 56:
			return 154;
		case 57:
			return 155;
		case 58:
			return 159;
		case 51:
			return 162;
		case 60:
			return 142;
		case 62:
			return 160;
		case 63:
			return 164;
		case 64:
			return 163;
		case 65:
			return 166;
		case 66:
			return 167;
		case 67:
			return 168;
		case 68:
			return 169;
		case 69:
			return 170;
		case 70:
			return 171;
		case 71:
			return 172;
		case 72:
			return 173;
		case 73:
			return 178;
		case 74:
			return 188;
		case 75:
			return 214;
		case 76:
			return 215;
		case 77:
			return 216;
		case 78:
			return 217;
		case 79:
			return 218;
		case 80:
			return 219;
		case 81:
			return 220;
		case 82:
			return 221;
		case 84:
			return 179;
		case 83:
			return 189;
		case 85:
			return 180;
		case 87:
			return 182;
		case 88:
			return 183;
		case 89:
			return 185;
		case 90:
			return 186;
		case 91:
			return 190;
		case 92:
			return 191;
		case 93:
			return 192;
		case 94:
			return 193;
		case 102:
			return 205;
		case 95:
			return 194;
		case 96:
			return 197;
		case 97:
			return 198;
		case 99:
			return 199;
		case 100:
			return 200;
		case 101:
			return 201;
		case 103:
			return 207;
		case 104:
			return 208;
		case 105:
			return 209;
		case 106:
			return 210;
		case 98:
			return 195;
		case 107:
			return 225;
		case 108:
			return 226;
		case 109:
			return 227;
		case 110:
			return 229;
		case 111:
			return 230;
		case 113:
			return 233;
		case 115:
			return 237;
		case 116:
			return 238;
		case 117:
			return 239;
		case 118:
			return 240;
		case 119:
			return 241;
		case 120:
			return 242;
		case 121:
			return 244;
		case 122:
			return 248;
		case 123:
			return 249;
		case 124:
			return 250;
		case 125:
			return 243;
		case 126:
			return 158;
		case 86:
			return 181;
		case 127:
			return 150;
		case 128:
			return 24;
		case 129:
			return 26;
		case 130:
			return 256;
		case 131:
			return 258;
		case 133:
			return 259;
		case 134:
			return 271;
		case 135:
			return 273;
		case 136:
			return 276;
		case 137:
			return 277;
		case 138:
			return 262;
		case 139:
			return 263;
		case 140:
			return 264;
		case 141:
			return 268;
		case 143:
			return 269;
		case 144:
			return 270;
		case 145:
			return 275;
		case 146:
			return 286;
		case 148:
			return 267;
		case 147:
			return 266;
		case 151:
			return 147;
		case 149:
			return 287;
		case 152:
			return 291;
		case 153:
			return 292;
		case 154:
			return 293;
		case 155:
			return 294;
		case 156:
			return 295;
		case 157:
			return 296;
		case 158:
			return 297;
		case 159:
			return 298;
		case 160:
			return 299;
		case 161:
			return 300;
		case 162:
			return 301;
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

int func_686(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x6F19
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_687(var uParam0, var uParam1)//Position - 0x72D0
{
	*uParam0 = (*uParam0 || uParam1);
}

var func_688(char[4] cParam0)//Position - 0x7636
{
	return cParam0;
}

int func_689(int iParam0, int iParam1)//Position - 0x7668
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_690()//Position - 0x7D5D
{
	int iVar0;
	int iVar1;
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_691(int iParam0, var uParam1)//Position - 0x7D92
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_692(int iParam0)//Position - 0x8BA9
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_693(int iParam0)//Position - 0x954A
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_694(int iParam0)//Position - 0x955F
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

int func_695(int iParam0, bool bParam1, int iParam2)//Position - 0x2FA89
{
	if (Global_2689235[iParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[iParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[iParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_696()//Position - 0x2FBA8
{
	MISC::SET_BIT(&Global_8137, 7);
}

bool func_697()//Position - 0x2FBB8
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148;
}

bool func_698()//Position - 0x2FBCE
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5;
}

int func_699(int iParam0)//Position - 0x310F6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_700(int iParam0)//Position - 0x318A8
{
	switch (iParam0)
	{
		case 86:
			return 0;
		case 19:
			return 1;
		case 12:
			return 2;
		case 31:
			return 3;
		case 20:
			return 4;
		case 18:
			return 5;
		case 2:
			return 6;
		case 76:
			return 7;
		case 22:
			return 8;
		case 53:
			return 9;
		case 34:
			return 10;
		case 152:
			return 11;
		case 85:
			return 12;
		case 84:
			return 13;
		case 0:
			return 14;
		case 1:
			return 15;
		case 153:
			return 16;
		case 151:
			return 17;
		case 14:
			return 18;
		case 15:
			return 19;
		case 24:
			return 20;
		case 30:
			return 21;
		case 46:
			return 22;
		case 47:
			return 23;
		case 54:
			return 24;
		case 51:
			return 25;
		case 60:
			return 26;
		case 62:
			return 27;
		case 66:
			return 28;
		case 69:
			return 29;
		case 154:
			return 30;
		case 82:
			return 31;
		case 157:
			return 32;
		case 167:
			return 34;
		case 169:
			return 35;
		case 171:
			return 36;
		case 172:
			return 37;
		case 173:
			return 38;
		case 177:
			return 39;
		case 182:
			return 40;
		default:
	}
	return 1;
}

bool func_701()//Position - 0x31A68
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 3);
}

bool func_702(int iParam0, int iParam1)//Position - 0x31F69
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

bool func_703()//Position - 0x36CC3
{
	return Global_1575037;
}

int func_704()//Position - 0x3920D
{
	return joaat("kosatka");
}

void func_705()//Position - 0x3CA0A
{
	if (Global_2725323)
	{
		if (!Global_2725322)
		{
			Global_2725322 = 1;
			Global_2725331 = MISC::GET_GAME_TIMER();
			Global_2725330 = 1;
		}
	}
}

bool func_706()//Position - 0x3CA33
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

void func_707()//Position - 0x3D574
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_708(int iParam0)//Position - 0x3D592
{
	if (iParam0 == 0)
	{
		Global_2727791 = 0;
	}
	Global_1574632.f_18 = iParam0;
}

int func_709(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66B03
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__::func_420(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__::func_420(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_710(int iParam0)//Position - 0x83AAB
{
	return Global_1892703[iParam0 /*599*/].f_579;
}

void func_711(var uParam0, int iParam1)//Position - 0x83D98
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_712(var uParam0, int iParam1)//Position - 0x83DAD
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_713(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8423C
{
	int iVar0;
	int iVar1;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

int func_714(int iParam0)//Position - 0x84E8B
{
	int iVar0;
	var uVar1;
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

float func_715(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x86E8C
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_716(int iParam0)//Position - 0x87179
{
	int iVar0;
	int iVar1;
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_717(int iParam0, bool bParam1)//Position - 0x87311
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

bool func_718(int iParam0)//Position - 0x8A96C
{
	return Global_4718592.f_168758 >= iParam0;
}

int func_719(int iParam0, bool bParam1)//Position - 0x8D27B
{
	int iVar0;
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_720(bool bParam0)//Position - 0x8D313
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_721()//Position - 0x8D397
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_722(bool bParam0)//Position - 0x8D575
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_723(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8D58C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

var func_724(int iParam0)//Position - 0x8D6C7
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

bool func_725()//Position - 0x8D811
{
	return Global_2714762.f_21;
}

int func_726(int iParam0)//Position - 0x8D99E
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
	}
	return 2;
}

var func_727()//Position - 0x8DA73
{
	return Global_2621446.f_2;
}

var func_728()//Position - 0x8DA81
{
	return BitTest(Global_2621446, 4);
}

int func_729()//Position - 0x8ED38
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_730(int iParam0, bool bParam1, int iParam2)//Position - 0x8EFFB
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1648034.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1648034.f_1046), iParam0);
			}
			break;
	}
}

void func_731(int iParam0)//Position - 0x8F04A
{
	Global_2815059.f_4598 = iParam0;
}

float func_732(float fParam0, float fParam1, float fParam2)//Position - 0x8F072
{
	float fVar0;
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_733(int iParam0)//Position - 0x8F22D
{
	Global_1577896 = iParam0;
}

bool func_734()//Position - 0x8F2EE
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

void func_735(int* iParam0)//Position - 0x8F4A1
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_736(int* iParam0)//Position - 0x8F4B7
{
	return BitTest(*iParam0, 1);
}

int func_737(int iParam0)//Position - 0x9183A
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_5();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		case 1:
			iVar0 = 915;
			break;
		case 2:
			iVar0 = 916;
			break;
		case 3:
			iVar0 = 917;
			break;
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_738(int iParam0)//Position - 0x91BDC
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_739()//Position - 0x920AF
{
	return Global_2714762.f_691;
}

int func_740(int iParam0)//Position - 0x9278D
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_741()//Position - 0x92DA0
{
	return Global_2725911;
}

int func_742()//Position - 0x93489
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192;
}

bool func_743(int iParam0)//Position - 0x93655
{
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

void func_744()//Position - 0x936FB
{
	Global_1888188 = -1;
	Global_1888194 = 0;
	Global_1888189 = -1;
}

void func_745(int* iParam0)//Position - 0x93936
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_746(var uParam0, bool bParam1, int iParam2)//Position - 0x93962
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_747()//Position - 0x93FBB
{
	return Global_1922955.f_3;
}

void func_748()//Position - 0x96E95
{
	Global_2714762.f_756 = 1;
}

void func_749(int* iParam0)//Position - 0x395E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_5[iVar0] = 0f;
		iParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_750(int* iParam0, int iParam1)//Position - 0x398B
{
	if (iParam1 == 2)
	{
		return;
	}
	iParam0->f_15[iParam1]++;
}

void func_751(int* iParam0, int iParam1, float fParam2)//Position - 0x3DCF
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar1 = iParam0->f_24[iVar0] == false;
		if (iVar0 > 0)
		{
			iParam0->f_5[(iVar0 - 1)] = iParam0->f_5[iVar0];
			iParam0->f_24[(iVar0 - 1)] = iParam0->f_24[iVar0];
		}
		if (bVar1 || iVar0 >= 7)
		{
			iParam0->f_5[iVar0] = fParam2;
			iParam0->f_24[iVar0] = iParam1;
			iVar0 = 8;
		}
		iVar0++;
	}
}

void func_752(int* iParam0, float fParam1)//Position - 0x3E47
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!iParam0->f_24[((8 - iVar0) - 1)] == 0)
		{
			iParam0->f_5[((8 - iVar0) - 1)] = (iParam0->f_5[((8 - iVar0) - 1)] + fParam1);
			return;
		}
		iVar0++;
	}
}

void func_753(var uParam0, bool bParam1)//Position - 0x3ED8
{
	uParam0->f_19 = bParam1;
}

int func_754(var uParam0)//Position - 0x3EE6
{
	return uParam0->f_19;
}

int func_755(var uParam0)//Position - 0x3EF2
{
	return uParam0->f_22;
}

void func_756(var uParam0, bool bParam1, float fParam2)//Position - 0x3EFE
{
	if (bParam1 < 0 || bParam1 >= 15)
	{
		return;
	}
	uParam0->f_2[bParam1] = fParam2;
}

float func_757(var uParam0, bool bParam1)//Position - 0x3F25
{
	if (bParam1 < 0 || bParam1 >= 15)
	{
		return 0f;
	}
	return uParam0->f_2[bParam1];
}

void func_758(int* iParam0, int iParam1)//Position - 0x428D
{
	iParam0->f_1 = iParam1;
}

void func_759(int* iParam0, int iParam1)//Position - 0x429B
{
	iParam0->f_14 = iParam1;
}

void func_760(var uParam0, var uParam1)//Position - 0x5112
{
	float fVar0;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.371f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.152f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
	}
}

void func_761(var uParam0, var uParam1)//Position - 0x5207
{
	float fVar0;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		if (!PED::IS_PED_MALE(*uParam1))
		{
			if (fVar0 >= 0.622f)
			{
				if (!BitTest(uParam0->f_439, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 0);
				}
			}
			else if (fVar0 >= 0.495f)
			{
				if (!BitTest(uParam0->f_439, 1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 1);
				}
			}
			else if (fVar0 >= 0.333f)
			{
				if (!BitTest(uParam0->f_439, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 2);
				}
			}
			else if (fVar0 >= 0.162f)
			{
				if (!BitTest(uParam0->f_439, 3))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 3);
				}
			}
			else if (fVar0 >= 0.131f)
			{
				if (!BitTest(uParam0->f_439, 4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 4);
				}
			}
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.445f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.282f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
		else if (fVar0 >= 0.141f)
		{
			if (!BitTest(uParam0->f_439, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 3);
			}
		}
	}
}

bool func_762(var uParam0)//Position - 0x5E79
{
	return *uParam0 == 0;
}

int func_763(int iParam0)//Position - 0x5E86
{
	switch (iParam0)
	{
		case 25:
		case 52:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
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
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
		case 84:
		case 104:
		case 85:
		case 105:
		case 86:
		case 106:
		case 67:
		case 87:
		case 68:
		case 88:
		case 69:
		case 89:
		case 70:
		case 90:
		case 71:
		case 91:
		case 72:
		case 92:
		case 73:
		case 93:
		case 74:
		case 94:
		case 75:
		case 95:
		case 76:
		case 96:
		case 77:
		case 97:
		case 78:
		case 98:
		case 79:
		case 99:
			return 1;
		default:
	}
	return 0;
}

bool func_764()//Position - 0x6014
{
	return BitTest(Global_4718592.f_162495, 19);
}

int func_765(int iParam0, bool bParam1)//Position - 0x6029
{
	int iVar0;
	if (!bParam1)
	{
		if (iParam0 == 59)
		{
			iVar0 = joaat("prop_cs_ciggy_01");
		}
		else
		{
			return 1;
		}
		STREAMING::REQUEST_MODEL(iVar0);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_766(int iParam0, bool bParam1)//Position - 0x6061
{
	if (bParam1)
	{
		return 1;
	}
	if (iParam0 != 8 && iParam0 != 9)
	{
		return 1;
	}
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_GTAO/SNACKS", false, -1);
}

void func_767(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x6092
{
	int iVar0;
	if (uParam0->f_449 == 0)
	{
		if (bParam3)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				uParam0->f_449 = 1;
			}
			else
			{
				uParam0->f_449 = 2;
			}
		}
		else
		{
			uParam0->f_449 = 3;
		}
	}
	switch (uParam0->f_449)
	{
		case 1:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_A", 64);
			break;
		case 2:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_B", 64);
			break;
		case 3:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@FEMALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_F_A", 64);
			break;
		case 0:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "", 64);
			break;
	}
}

void func_768(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5)//Position - 0x613C
{
	bool bVar0;
	switch (iParam0)
	{
		case 2:
			if (PED::IS_PED_MALE(iParam2))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 1:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
		case 3:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BACKSLAP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "COWERING_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "COWERING_RIGHT", 64);
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "SARCASTIC_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BRO_HUG_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
			}
			break;
	}
}

void func_769(int* iParam0)//Position - 0x6775
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_21))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_21));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_41))
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam0->f_41))
		{
			INTERIOR::UNPIN_INTERIOR(iParam0->f_41);
		}
	}
	STREAMING::REMOVE_ANIM_DICT("Move_m@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("Move_f@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intfinger");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intsalute");
	STREAMING::REMOVE_ANIM_DICT("mp_player_introck");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intwank");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_23)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_23[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_23[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1225))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1225));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1226))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1226));
	}
}

bool func_770(int iParam0)//Position - 0x6954
{
	return iParam0 == 15;
}

void func_771(int* iParam0)//Position - 0x6961
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	if (iParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
		iParam0->f_1 = 0;
	}
	if (iParam0->f_2 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
		iParam0->f_2 = 0;
	}
}

void func_772(int* iParam0, char* sParam1)//Position - 0x69A4
{
	if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_773(int* iParam0, bool bParam1)//Position - 0x6AC0
{
	if (bParam1)
	{
		CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
	}
	if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*iParam0, iParam0->f_1, 255, 255, 255, 255);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
	}
}

void func_774(bool bParam0)//Position - 0x6B43
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
}

void func_775(bool bParam0)//Position - 0x6B6F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
	else
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPDark"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPDark");
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPIn");
		}
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
}

void func_776(bool bParam0)//Position - 0x6BC6
{
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
		}
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, false);
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, false);
		}
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
		Global_2703735.f_2394 = NETWORK::GET_NETWORK_TIME();
		Global_2703735.f_2394.f_1 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
}

void func_777(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6C5D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_778(int iParam0, bool bParam1, int iParam2)//Position - 0x6E1F
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

void func_779(int iParam0, int iParam1)//Position - 0x70DB
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_780(int iParam0, int iParam1)//Position - 0x721C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1659609 = iParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1659611 = iParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1659611 = iParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1659612 = iParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1659613 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1659614 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1659615 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1659616 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1659617 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1659618 = iParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1659619 = iParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1659620 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1659621 = iParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1659622 = iParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1659623 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1659624 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1659625 = iParam1;
			break;
		default:
			break;
	}
}

void func_781(var uParam0, int iParam1)//Position - 0x7341
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_782(int iParam0)//Position - 0x7352
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_783(var* uParam0)//Position - 0x73AF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

int func_784(int iParam0, bool bParam1)//Position - 0x8114
{
	if (bParam1)
	{
	}
	return __LIB_0__::func_689(iParam0, 0);
}

float func_785(int iParam0, int iParam1)//Position - 0x8581
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_786(char* sParam0)//Position - 0x89A5
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_787(int iParam0)//Position - 0x8A89
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
	}
	return 0;
}

int func_788(int iParam0)//Position - 0x8B25
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_789()//Position - 0x8C0F
{
	Global_75488 = 1;
}

int func_790(int iParam0)//Position - 0x9BE0
{
	int iVar0;
	if (PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
	if (VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_791()//Position - 0xA61A
{
	if (Global_2725323)
	{
		return Global_2725322;
	}
	return 0;
}

void func_792(int* iParam0, char* sParam1)//Position - 0xA631
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_793(int* iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xA6A1
{
	if (__LIB_0__::func_175())
	{
		iParam3 = 1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_794(int iParam0)//Position - 0xABA9
{
	int iVar0;
	struct<13> Var1;
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { __LIB_0__::func_604(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_795()//Position - 0xAC82
{
	if (__LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_53())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			return 1;
		}
	}
	return 0;
}

int func_796(int iParam0)//Position - 0xAD48
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_797(var* uParam0)//Position - 0xAD5E
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_798(var uParam0)//Position - 0xAD84
{
	if (!uParam0->f_1206)
	{
		uParam0->f_1206 = 1;
	}
}

int func_799(var uParam0, bool bParam1)//Position - 0xAD9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 = (uParam0->f_420 - 30);
	if (uParam0->f_420 < 0)
	{
		uParam0->f_420 = 0;
	}
	if (uParam0->f_420 != 0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	}
	if (uParam0->f_420 <= 0)
	{
		return 1;
	}
	return 0;
}

void func_800(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xAE08
{
	if (bParam3)
	{
		CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
	}
	if (GRAPHICS::UI3DSCENE_IS_AVAILABLE())
	{
		if (GRAPHICS::UI3DSCENE_PUSH_PRESET("CELEBRATION_WINNER"))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1.5f, 1.5f, 0, 0, 0, 255, false);
			if (bParam2)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
		}
	}
}

void func_801()//Position - 0xAF04
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_802()//Position - 0xAF22
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_803(int iParam0, char* sParam1, char* sParam2)//Position - 0xBBCD
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
			StringCopy(sParam2, "knuckle_crunch", 64);
			break;
		case 1:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@finger", 64);
			StringCopy(sParam2, "finger", 64);
			break;
	}
}

char* func_804(int iParam0)//Position - 0xBE0A
{
	switch (iParam0)
	{
		case 0:
			return "mood_Aiming_1";
		case 1:
			return "mood_Angry_1";
		case 2:
			return "mood_Happy_1";
		case 3:
			return "mood_Injured_1";
		case 4:
			return "mood_Normal_1";
		case 5:
			return "mood_stressed_1";
		case 6:
			return "mood_smug_1";
		case 7:
			return "mood_sulk_1";
		default:
	}
	return "mood_Normal_1";
}

int func_805(var uParam0, int iParam1)//Position - 0xBF5F
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_806(int iParam0)//Position - 0xBF9D
{
	int iVar0;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

int func_807(int iParam0)//Position - 0xBFFE
{
	int iVar0;
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_808(var uParam0, int iParam1, bool bParam2)//Position - 0x1231E
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_809(var uParam0, int iParam1, bool bParam2)//Position - 0x1384B
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_810()//Position - 0x1389D
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_811(int iParam0)//Position - 0x1391F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("JUGG_SUIT")))
	{
		return 1;
	}
	return 0;
}

int func_812(int iParam0, int iParam1)//Position - 0x13A80
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, iParam1, joaat("PILOT_SUIT")))
	{
		return 1;
	}
	return 0;
}

int func_813(var uParam0, bool bParam1)//Position - 0x2EDD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 += 30;
	if (uParam0->f_420 > 255)
	{
		uParam0->f_420 = 255;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	if (uParam0->f_420 >= 255)
	{
		return 1;
	}
	return 0;
}

int func_814(int* iParam0)//Position - 0x2EE3A
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
		{
		}
	}
	return 0;
}

void func_815(int* iParam0, int iParam1)//Position - 0x2EE91
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
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar1);
	}
	if (iParam0->f_2 == 0)
	{
		iParam0->f_2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar2);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 != LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	}
}

void func_816(var uParam0)//Position - 0x2EF4E
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar1 = iVar0;
			if (__LIB_0__::func_154(iVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
			iVar0++;
		}
	}
}

void func_817(var uParam0, int iParam1, int iParam2)//Position - 0x2F332
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_818(int iParam0)//Position - 0x2F355
{
	switch (iParam0)
	{
		case 0:
			return 0.9f, 0.6f, 2f;
		case 1:
			return 1.2f, 0.7f, 2f;
		case 2:
			return 1.3f, 0.7f, 2f;
		case 3:
			return 1.2f, 0.7f, 2f;
		case 4:
			return 1.3f, 0.8f, 2f;
		case 5:
			return 1.4f, 0.8f, 2f;
		case 6:
			return 1.6f, 0.8f, 2f;
		case 7:
			return 1.7f, 0.9f, 2f;
		default:
	}
	return 1.4f, 0.8f, 2f;
}

float func_819(float fParam0)//Position - 0x2F7E3
{
	return (fParam0 + fLocal_13);
}

float func_820(float fParam0)//Position - 0x2F7F0
{
	return (fParam0 + fLocal_12);
}

void func_821(var uParam0, bool bParam1)//Position - 0x2F7FD
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

bool func_822()//Position - 0x2F8D5
{
	return Global_1574604;
}

void func_823(var uParam0, int iParam1)//Position - 0x2F8E1
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_824()//Position - 0x2F93F
{
	int iVar0;
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_0__::func_154(iVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, true);
		}
		iVar0++;
	}
}

bool func_825(int iParam0)//Position - 0x3103A
{
	return Global_4718592.f_168758 > iParam0;
}

int func_826(int iParam0)//Position - 0x3104F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_827(int iParam0)//Position - 0x31080
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_1.f_2813[iVar0], iVar1);
}

int func_828(int iParam0)//Position - 0x310C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31710[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_829(int iParam0)//Position - 0x3115F
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29921[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_830(int iParam0)//Position - 0x311AC
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_831()//Position - 0x311E6
{
	struct<31> Var0;
	Global_1944390 = { Var0 };
}

int func_832()//Position - 0x311FA
{
	switch (Global_1575016)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 11:
			return 1;
		default:
	}
	return 0;
}

int func_833(int iParam0)//Position - 0x31265
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 7);
	}
	return 0;
}

int func_834(int iParam0)//Position - 0x3128D
{
	if (iParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_835(int iParam0)//Position - 0x312B3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5058[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_836()//Position - 0x313DC
{
	return Global_4718592 == 1;
}

bool func_837(int iParam0)//Position - 0x313EA
{
	return iParam0 == 83;
}

bool func_838(int iParam0)//Position - 0x313F7
{
	return iParam0 == 81;
}

int func_839()//Position - 0x31404
{
	if (Global_4718592.f_107227 == 22 || Global_4718592.f_107227 == 23)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_32, 9);
}

int func_840()//Position - 0x3143C
{
	if (Global_4718592.f_107227 == 20 || Global_4718592.f_107227 == 21)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_30, 3);
}

bool func_841(int iParam0)//Position - 0x31473
{
	return iParam0 == 72;
}

bool func_842(int iParam0)//Position - 0x31480
{
	return iParam0 == 76;
}

bool func_843(int iParam0)//Position - 0x3148D
{
	return iParam0 == 74;
}

bool func_844(int iParam0)//Position - 0x3149A
{
	return iParam0 == 78;
}

bool func_845(int iParam0)//Position - 0x314A7
{
	return iParam0 == 77;
}

var func_846(int iParam0)//Position - 0x314B4
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

int func_847(bool bParam0)//Position - 0x314C9
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_848()//Position - 0x314DB
{
	if (((Global_4718592.f_116524 == Global_262145.f_5041[0] || Global_4718592.f_116524 == Global_262145.f_5041[1]) || Global_4718592.f_116524 == Global_262145.f_5041[2]) || Global_4718592.f_116524 == Global_262145.f_5041[3])
	{
		return Global_262145.f_5041[3];
	}
	else if ((((Global_4718592.f_116524 == Global_262145.f_5041[4] || Global_4718592.f_116524 == Global_262145.f_5041[5]) || Global_4718592.f_116524 == Global_262145.f_5041[6]) || Global_4718592.f_116524 == Global_262145.f_5041[7]) || Global_4718592.f_116524 == Global_262145.f_5041[8])
	{
		return Global_262145.f_5041[8];
	}
	else if ((((((Global_4718592.f_116524 == Global_262145.f_5041[9] || Global_4718592.f_116524 == Global_262145.f_5041[10]) || Global_4718592.f_116524 == Global_262145.f_5041[11]) || Global_4718592.f_116524 == Global_262145.f_5041[12]) || Global_4718592.f_116524 == Global_262145.f_5041[13]) || Global_4718592.f_116524 == Global_262145.f_5041[14]) || Global_4718592.f_116524 == Global_262145.f_5041[15])
	{
		return Global_262145.f_5041[14];
	}
	return 0;
}

void func_849()//Position - 0x31B1A
{
	Global_1057409 = -1;
}

bool func_850()//Position - 0x31B27
{
	return Global_2714762.f_669.f_9 > 0;
}

int func_851()//Position - 0x31B3A
{
	if (__LIB_0__::func_493() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_852()//Position - 0x31B57
{
	return BitTest(Global_1048576.f_10, 3);
}

var func_853()//Position - 0x31B67
{
	return BitTest(Global_2715699.f_1.f_2809, 6);
}

var func_854()//Position - 0x31B7A
{
	return BitTest(Global_1048576.f_10, 5);
}

var func_855()//Position - 0x31B8A
{
	return BitTest(Global_2715699.f_1.f_2809, 8);
}

int func_856()//Position - 0x31B9E
{
	return PLAYER::PLAYER_ID();
}

int func_857(int iParam0, var uParam1)//Position - 0x31BDA
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (((Global_262145.f_6890[iVar1] == 202 || Global_262145.f_6890[iVar1] == 203) || Global_262145.f_6890[iVar1] == 204) || (uParam1 && ((((((((((((Global_262145.f_6890[iVar1] == 224 || Global_262145.f_6890[iVar1] == 223) || Global_262145.f_6890[iVar1] == 232) || Global_262145.f_6890[iVar1] == 245) || Global_262145.f_6890[iVar1] == 246) || Global_262145.f_6890[iVar1] == 251) || Global_262145.f_6890[iVar1] == 252) || Global_262145.f_6890[iVar1] == 253) || Global_262145.f_6890[iVar1] == 161) || Global_262145.f_6890[iVar1] == 278) || Global_262145.f_6890[iVar1] == 279) || Global_262145.f_6890[iVar1] == 302) || Global_262145.f_6890[iVar1] == 303)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_858(int iParam0)//Position - 0x31D8E
{
	int iVar0;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (iParam0 == Global_262145.f_4794[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_859()//Position - 0x31DC4
{
	return (BitTest(Global_4718592.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_860()//Position - 0x31DDE
{
	return (BitTest(Global_4718592.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

int func_861(int iParam0)//Position - 0x31DF8
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 232)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_862()//Position - 0x31E5E
{
	return BitTest(Global_2715699.f_1.f_2809, 5);
}

bool func_863()//Position - 0x31ED5
{
	return Global_2714762.f_669.f_12;
}

int func_864(int iParam0)//Position - 0x31EE6
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (__LIB_0__::func_640(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_865()//Position - 0x31F7F
{
	return Global_2703735.f_21;
}

void func_866()//Position - 0x31FAF
{
	struct<45> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Global_1944345 = { Var0 };
}

int func_867(int iParam0)//Position - 0x32EBC
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_868(int iParam0)//Position - 0x33124
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		case 9:
			return 24964;
			break;
		case 10:
			return 24966;
			break;
		case 11:
			return 24965;
			break;
		case 12:
			return 24968;
			break;
		case 13:
			return 25101;
			break;
		case 14:
			return 24967;
			break;
		case 15:
			return 25105;
			break;
		case 16:
			return 25106;
			break;
		case 20:
			return 25102;
			break;
		case 21:
			return 25103;
			break;
		case 22:
			return 25104;
			break;
		case 102:
			return 24969;
			break;
		case 17:
			return 25107;
			break;
		case 18:
			return 25108;
			break;
		case 19:
			return 25109;
			break;
		case 103:
			return 24972;
			break;
		case 104:
			return 24973;
			break;
		case 105:
			return 24974;
			break;
		case 106:
			return 24975;
			break;
		case 107:
			return 24976;
			break;
		case 108:
			return 24978;
			break;
		case 109:
			return 24980;
			break;
		case 110:
			return 24981;
			break;
		case 111:
			return 24982;
			break;
		case 112:
			return 24983;
			break;
		case 113:
			return 24984;
			break;
		case 114:
			return 24985;
			break;
		case 115:
			return 24986;
			break;
		case 116:
			return 24987;
			break;
		case 117:
			return 24988;
			break;
		case 118:
			return 24989;
			break;
		case 119:
			return 24990;
			break;
		case 120:
			return 24991;
			break;
		case 0:
			return 24992;
			break;
		case 1:
			return 24993;
			break;
		case 2:
			return 24994;
			break;
		case 3:
			return 24995;
			break;
		case 4:
			return 24996;
			break;
		case 5:
			return 24997;
			break;
		case 6:
			return 24998;
			break;
		case 7:
			return 24999;
			break;
		case 127:
			return 25117;
			break;
		case 128:
			return 25118;
			break;
		case 23:
			return 25119;
			break;
		case 139:
			return 25125;
			break;
		case 140:
			return 25127;
			break;
		case 141:
			return 25128;
			break;
		case 27:
			return 25129;
			break;
		case 160:
			return 25136;
			break;
		case 161:
			return 25139;
			break;
		case 162:
			return 25140;
			break;
		case 31:
			return 25141;
			break;
		case 181:
			return 25148;
			break;
		case 182:
			return 25151;
			break;
		case 183:
			return 25152;
			break;
		case 35:
			return 25153;
			break;
		case 193:
			return 25160;
			break;
		case 194:
			return 25161;
			break;
		case 39:
			return 25162;
			break;
		case 206:
			return 25168;
			break;
		case 207:
			return 25169;
			break;
		case 208:
			return 25170;
			break;
		case 209:
			return 25173;
			break;
		case 210:
			return 25174;
			break;
		case 43:
			return 25175;
			break;
		case 234:
			return 25179;
			break;
		case 235:
			return 25183;
			break;
		case 236:
			return 25184;
			break;
		case 47:
			return 25185;
			break;
		case 248:
			return 25188;
			break;
		case 249:
			return 25191;
			break;
		case 250:
			return 25192;
			break;
		case 51:
			return 25193;
			break;
		case 259:
			return 25198;
			break;
		case 260:
			return 25202;
			break;
		case 261:
			return 25203;
			break;
		case 55:
			return 25204;
			break;
		case 274:
			return 25209;
			break;
		case 275:
			return 25212;
			break;
		case 276:
			return 25213;
			break;
		case 59:
			return 25214;
			break;
		case 284:
			return 25217;
			break;
		case 285:
			return 25221;
			break;
		case 286:
			return 25222;
			break;
		case 63:
			return 25223;
			break;
		case 307:
			return 25228;
			break;
		case 308:
			return 24979;
			break;
		case 309:
			return 25229;
			break;
		case 310:
			return 25111;
			break;
		case 67:
			return 25230;
			break;
		case 68:
			return 25112;
			break;
		case 72:
			return 25231;
			break;
		case 73:
			return 25233;
			break;
		case 74:
			return 25234;
			break;
		case 75:
			return 25235;
			break;
		case 76:
			return 25236;
			break;
		case 77:
			return 25394;
			break;
		case 121:
			return 25395;
			break;
		case 122:
			return 25396;
			break;
		case 123:
			return 25397;
			break;
		case 124:
			return 25398;
			break;
		case 125:
			return 25399;
			break;
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		case 79:
			return 25245;
			break;
		case 80:
			return 25246;
			break;
		case 81:
			return 25247;
			break;
		case 82:
			return 25248;
			break;
		case 83:
			return 25249;
			break;
		case 84:
			return 25250;
			break;
		case 85:
			return 25000;
			break;
		case 86:
			return 25251;
			break;
		case 87:
			return 25252;
			break;
		case 88:
			return 25253;
			break;
		case 89:
			return 25254;
			break;
		case 90:
			return 25255;
			break;
		case 91:
			return 25256;
			break;
		case 92:
			return 25257;
			break;
		case 93:
			return 25258;
			break;
		case 94:
			return 25259;
			break;
		case 95:
			return 25260;
			break;
		case 96:
			return 25261;
			break;
		case 97:
			return 25262;
			break;
		case 98:
			return 25263;
			break;
		case 99:
			return 25264;
			break;
		case 100:
			return 25225;
			break;
		case 101:
			return 25178;
			break;
		case 311:
			return 25265;
			break;
		case 312:
			return 25266;
			break;
		case 313:
			return 25267;
			break;
		case 314:
			return 25268;
			break;
		case 315:
			return 24977;
			break;
		case 316:
			return 25269;
			break;
		case 317:
			return 25270;
			break;
		case 318:
			return 25271;
			break;
		case 319:
			return 25272;
			break;
		case 320:
			return 25273;
			break;
		case 321:
			return 25274;
			break;
		case 322:
			return 25275;
			break;
		case 323:
			return 25276;
			break;
		case 324:
			return 25277;
			break;
		case 325:
			return 25278;
			break;
		case 326:
			return 25279;
			break;
		case 327:
			return 25280;
			break;
		case 328:
			return 25281;
			break;
		case 329:
			return 25282;
			break;
		case 330:
			return 25283;
			break;
		case 331:
			return 25284;
			break;
		case 332:
			return 25285;
			break;
		case 333:
			return 25286;
			break;
		case 334:
			return 25287;
			break;
		case 335:
			return 25288;
			break;
		case 336:
			return 25289;
			break;
		case 337:
			return 25290;
			break;
		case 338:
			return 25291;
			break;
		case 339:
			return 25292;
			break;
		case 340:
			return 25293;
			break;
		case 341:
			return 25294;
			break;
		case 342:
			return 25295;
			break;
		case 343:
			return 25296;
			break;
		case 344:
			return 25297;
			break;
		case 345:
			return 25298;
			break;
		case 346:
			return 25299;
			break;
		case 347:
			return 25300;
			break;
		case 348:
			return 25301;
			break;
		case 349:
			return 25302;
			break;
		case 350:
			return 25303;
			break;
		case 351:
			return 25304;
			break;
		case 352:
			return 25305;
			break;
		case 353:
			return 25306;
			break;
		case 354:
			return 25307;
			break;
		case 355:
			return 25308;
			break;
		case 356:
			return 25309;
			break;
		case 357:
			return 25310;
			break;
		case 358:
			return 25311;
			break;
		case 359:
			return 25312;
			break;
		case 360:
			return 25313;
			break;
		case 361:
			return 25314;
			break;
		case 362:
			return 25315;
			break;
		case 363:
			return 25316;
			break;
		case 364:
			return 25317;
			break;
		case 365:
			return 25318;
			break;
		case 366:
			return 25319;
			break;
		case 367:
			return 25320;
			break;
		case 368:
			return 25321;
			break;
		case 369:
			return 25322;
			break;
		case 370:
			return 25323;
			break;
		case 371:
			return 25324;
			break;
		case 372:
			return 25325;
			break;
		case 373:
			return 25326;
			break;
		case 374:
			return 25327;
			break;
		case 375:
			return 25328;
			break;
		case 376:
			return 25329;
			break;
		case 377:
			return 25330;
			break;
		case 378:
			return 25331;
			break;
		case 379:
			return 25332;
			break;
		case 380:
			return 25333;
			break;
		case 381:
			return 25334;
			break;
		case 382:
			return 25335;
			break;
		case 383:
			return 25336;
			break;
		case 384:
			return 25337;
			break;
		case 385:
			return 25338;
			break;
		case 386:
			return 25339;
			break;
		case 387:
			return 25340;
			break;
		case 388:
			return 25341;
			break;
		case 389:
			return 25342;
			break;
		case 390:
			return 25343;
			break;
		case 391:
			return 25344;
			break;
		case 392:
			return 25345;
			break;
		case 393:
			return 25346;
			break;
		case 394:
			return 25347;
			break;
		case 395:
			return 24970;
			break;
		case 396:
			return 25348;
			break;
		case 397:
			return 25349;
			break;
		case 398:
			return 25350;
			break;
		case 399:
			return 25351;
			break;
		case 400:
			return 25352;
			break;
		case 401:
			return 25353;
			break;
		case 402:
			return 25354;
			break;
		case 403:
			return 25355;
			break;
		case 404:
			return 25356;
			break;
		case 405:
			return 25357;
			break;
		case 406:
			return 25358;
			break;
		case 407:
			return 25359;
			break;
		case 408:
			return 25360;
			break;
		case 409:
			return 25361;
			break;
		case 410:
			return 25362;
			break;
		case 411:
			return 25363;
			break;
		case 412:
			return 25364;
			break;
		case 413:
			return 25365;
			break;
		case 414:
			return 25366;
			break;
		case 415:
			return 25367;
			break;
		case 416:
			return 25368;
			break;
		case 417:
			return 25369;
			break;
		case 418:
			return 25370;
			break;
		case 419:
			return 25371;
			break;
		case 420:
			return 25373;
			break;
		case 421:
			return 25374;
			break;
		case 422:
			return 25375;
			break;
		case 423:
			return 25377;
			break;
		case 424:
			return 25378;
			break;
		case 425:
			return 25379;
			break;
		case 426:
			return 25382;
			break;
		case 427:
			return 25383;
			break;
		case 428:
			return 25386;
			break;
		case 429:
			return 25390;
			break;
		case 430:
			return 25391;
			break;
		case 431:
			return 25392;
			break;
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		case 25:
			return 25113;
			break;
		case 26:
			return 25114;
			break;
		case 28:
			return 25115;
			break;
		case 29:
			return 25116;
			break;
		case 30:
			return 25120;
			break;
		case 32:
			return 25121;
			break;
		case 33:
			return 25122;
			break;
		case 34:
			return 25123;
			break;
		case 36:
			return 25124;
			break;
		case 37:
			return 25126;
			break;
		case 38:
			return 25130;
			break;
		case 40:
			return 25131;
			break;
		case 41:
			return 25132;
			break;
		case 42:
			return 25133;
			break;
		case 44:
			return 25134;
			break;
		case 45:
			return 25137;
			break;
		case 46:
			return 25138;
			break;
		case 48:
			return 25142;
			break;
		case 49:
			return 25143;
			break;
		case 50:
			return 25144;
			break;
		case 52:
			return 25145;
			break;
		case 53:
			return 25146;
			break;
		case 54:
			return 25147;
			break;
		case 56:
			return 25149;
			break;
		case 57:
			return 25150;
			break;
		case 58:
			return 25154;
			break;
		case 60:
			return 25155;
			break;
		case 61:
			return 25156;
			break;
		case 62:
			return 25157;
			break;
		case 64:
			return 25158;
			break;
		case 65:
			return 25159;
			break;
		case 66:
			return 25163;
			break;
		case 69:
			return 25164;
			break;
		case 70:
			return 25165;
			break;
		case 71:
			return 25166;
			break;
		case 129:
			return 25167;
			break;
		case 130:
			return 25171;
			break;
		case 131:
			return 25172;
			break;
		case 132:
			return 25176;
			break;
		case 133:
			return 25177;
			break;
		case 134:
			return 25181;
			break;
		case 135:
			return 25182;
			break;
		case 136:
			return 25186;
			break;
		case 137:
			return 25187;
			break;
		case 138:
			return 25189;
			break;
		case 142:
			return 25190;
			break;
		case 143:
			return 25194;
			break;
		case 144:
			return 25195;
			break;
		case 145:
			return 25196;
			break;
		case 146:
			return 25197;
			break;
		case 147:
			return 25199;
			break;
		case 148:
			return 25200;
			break;
		case 149:
			return 25201;
			break;
		case 150:
			return 25205;
			break;
		case 151:
			return 25206;
			break;
		case 152:
			return 25207;
			break;
		case 153:
			return 25208;
			break;
		case 154:
			return 25210;
			break;
		case 155:
			return 25211;
			break;
		case 156:
			return 25215;
			break;
		case 157:
			return 25216;
			break;
		case 158:
			return 25218;
			break;
		case 159:
			return 25219;
			break;
		case 163:
			return 25220;
			break;
		case 164:
			return 25224;
			break;
		case 165:
			return 25226;
			break;
		case 166:
			return 25227;
			break;
		case 167:
			return 25232;
			break;
		case 168:
			return 25372;
			break;
		case 169:
			return 25376;
			break;
		case 170:
			return 25380;
			break;
		case 171:
			return 25381;
			break;
		case 172:
			return 25384;
			break;
		case 173:
			return 25385;
			break;
		case 174:
			return 25387;
			break;
		case 175:
			return 25388;
			break;
		case 176:
			return 25389;
			break;
		case 177:
			return 25407;
			break;
		case 178:
			return 25408;
			break;
		case 179:
			return 25409;
			break;
		case 180:
			return 25410;
			break;
		case 184:
			return 25411;
			break;
		case 185:
			return 25412;
			break;
		case 186:
			return 25413;
			break;
		case 187:
			return 25414;
			break;
		case 188:
			return 25415;
			break;
		case 189:
			return 25416;
			break;
		case 190:
			return 25417;
			break;
		case 191:
			return 25418;
			break;
		case 192:
			return 25419;
			break;
		case 195:
			return 25420;
			break;
		case 196:
			return 25421;
			break;
		case 197:
			return 25422;
			break;
		case 198:
			return 25423;
			break;
		case 199:
			return 25424;
			break;
		case 200:
			return 25425;
			break;
		case 201:
			return 25426;
			break;
		case 202:
			return 25427;
			break;
		case 203:
			return 25428;
			break;
		case 204:
			return 25429;
			break;
		case 205:
			return 25430;
			break;
		case 211:
			return 25431;
			break;
		case 212:
			return 25432;
			break;
		case 213:
			return 25433;
			break;
		case 214:
			return 25434;
			break;
		case 215:
			return 25435;
			break;
		case 216:
			return 25436;
			break;
		case 217:
			return 25437;
			break;
		case 218:
			return 25438;
			break;
		case 219:
			return 25439;
			break;
		case 220:
			return 25440;
			break;
		case 221:
			return 25441;
			break;
		case 222:
			return 25442;
			break;
		case 223:
			return 25443;
			break;
		case 224:
			return 25444;
			break;
		case 225:
			return 25445;
			break;
		case 226:
			return 25446;
			break;
		case 227:
			return 25447;
			break;
		case 228:
			return 25448;
			break;
		case 229:
			return 25449;
			break;
		case 230:
			return 25450;
			break;
		case 231:
			return 25451;
			break;
		case 232:
			return 25452;
			break;
		case 233:
			return 25453;
			break;
		case 237:
			return 25454;
			break;
		case 238:
			return 25455;
			break;
		case 239:
			return 25456;
			break;
		case 240:
			return 25457;
			break;
		case 241:
			return 25458;
			break;
		case 242:
			return 25459;
			break;
		case 243:
			return 25460;
			break;
		case 244:
			return 25461;
			break;
		case 245:
			return 25462;
			break;
		case 246:
			return 25463;
			break;
		case 247:
			return 25464;
			break;
		case 251:
			return 25465;
			break;
		case 252:
			return 25466;
			break;
		case 253:
			return 25467;
			break;
		case 254:
			return 25468;
			break;
		case 255:
			return 25469;
			break;
		case 256:
			return 25470;
			break;
		case 257:
			return 25471;
			break;
		case 258:
			return 25472;
			break;
		case 262:
			return 25473;
			break;
		case 263:
			return 25474;
			break;
		case 264:
			return 25475;
			break;
		case 265:
			return 25476;
			break;
		case 266:
			return 25477;
			break;
		case 267:
			return 25478;
			break;
		case 268:
			return 25479;
			break;
		case 269:
			return 25480;
			break;
		case 270:
			return 25481;
			break;
		case 271:
			return 25482;
			break;
		case 272:
			return 25483;
			break;
		case 273:
			return 25484;
			break;
		case 277:
			return 25485;
			break;
		case 278:
			return 25486;
			break;
		case 279:
			return 25487;
			break;
		case 280:
			return 25488;
			break;
		case 281:
			return 25489;
			break;
		case 282:
			return 25490;
			break;
		case 283:
			return 25491;
			break;
		case 287:
			return 25492;
			break;
		case 288:
			return 25493;
			break;
		case 289:
			return 25494;
			break;
		case 290:
			return 25495;
			break;
		case 291:
			return 25496;
			break;
		case 292:
			return 25497;
			break;
		case 293:
			return 25498;
			break;
		case 294:
			return 25499;
			break;
		case 295:
			return 25500;
			break;
		case 296:
			return 25501;
			break;
		case 297:
			return 25502;
			break;
		case 298:
			return 25503;
			break;
		case 299:
			return 25504;
			break;
		case 300:
			return 25505;
			break;
		case 301:
			return 25506;
			break;
		case 302:
			return 25507;
			break;
		case 303:
			return 25508;
			break;
		case 304:
			return 25509;
			break;
		case 305:
			return 25510;
			break;
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_869(int iParam0, bool bParam1)//Position - 0x354B7
{
	if (bParam1)
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
				return 4;
			case 5:
				return 5;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
			case 1:
				return 8;
			case 2:
				return 9;
			case 3:
				return 10;
			case 4:
				return 11;
			case 5:
				return 12;
			}
		default:
	}
	return -1;
}

int func_870(int iParam0)//Position - 0x35553
{
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return 0;
		case joaat("postlude"):
			return 1;
		case joaat("greenwood"):
			return 2;
		case joaat("draugur"):
			return 3;
		case joaat("conada"):
			return 4;
		default:
	}
	return -1;
}

int func_871(int iParam0)//Position - 0x3564D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 2);
	}
	return 0;
}

int func_872(int iParam0, var uParam1)//Position - 0x35691
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_873(int iParam0)//Position - 0x356D3
{
	if (iParam0 != -1)
	{
		return Global_1977138[iParam0 /*57*/].f_27.f_8;
	}
	return 0;
}

int func_874(int iParam0)//Position - 0x35708
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
		case joaat("buffalo4"):
			return 1;
		case joaat("champion"):
			return 2;
		case joaat("deity"):
			return 3;
		case joaat("granger2"):
			return 4;
		case joaat("jubilee"):
			return 5;
		case joaat("mule5"):
			return 6;
		case joaat("patriot3"):
			return 7;
		case joaat("youga4"):
			return 8;
		default:
	}
	return -1;
}

int func_875(int iParam0)//Position - 0x3594D
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		case joaat("comet6"):
			return 1;
		case joaat("jester4"):
			return 2;
		case joaat("vectre"):
			return 3;
		case joaat("cypher"):
			return 4;
		case joaat("tailgater2"):
			return 5;
		case joaat("euros"):
			return 6;
		case joaat("growler"):
			return 7;
		case joaat("calico"):
			return 8;
		case joaat("remus"):
			return 9;
		case joaat("dominator7"):
			return 10;
		case joaat("futo2"):
			return 11;
		case joaat("rt3000"):
			return 12;
		case joaat("warrener2"):
			return 13;
		case joaat("sultan3"):
			return 14;
		case joaat("dominator8"):
			return 15;
		case joaat("previon"):
			return 16;
		default:
	}
	return -1;
}

int func_876(int iParam0, var uParam1)//Position - 0x35B48
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_877(int iParam0)//Position - 0x35B67
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_878(int iParam0, var uParam1)//Position - 0x35BC6
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_879(int iParam0)//Position - 0x35BE5
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 7:
			return 1;
		case 1:
			return 2;
		case 5:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		case 6:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		default:
	}
	return -1;
}

int func_880(int iParam0)//Position - 0x35CA8
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		case joaat("winky"):
			return 1;
			break;
		case joaat("longfin"):
			return 2;
			break;
		case joaat("annihilator2"):
			return 3;
			break;
		case joaat("alkonost"):
			return 4;
			break;
		case joaat("patrolboat"):
			return 5;
			break;
		case joaat("brioso2"):
			return 6;
			break;
		case joaat("weevil"):
			return 7;
			break;
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_881(int iParam0)//Position - 0x35D2E
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		case joaat("burrito2"):
			return 1;
			break;
		case joaat("boxville"):
			return 2;
			break;
		case joaat("stockade"):
			return 3;
			break;
		case joaat("asbo"):
			return 4;
			break;
		case joaat("kanjo"):
			return 5;
			break;
		case joaat("everon"):
			return 6;
			break;
		case joaat("retinue2"):
			return 7;
			break;
		case joaat("yosemite2"):
			return 8;
			break;
		case joaat("sugoi"):
			return 9;
			break;
		case joaat("sultan2"):
			return 10;
			break;
		case joaat("outlaw"):
			return 11;
			break;
		case joaat("vagrant"):
			return 12;
			break;
		case joaat("komoda"):
			return 13;
			break;
		case joaat("stryder"):
			return 14;
			break;
		case joaat("furia"):
			return 15;
			break;
		case joaat("zhaba"):
			return 16;
			break;
		case joaat("jugular"):
			return 17;
			break;
		case joaat("sentinel3"):
			return 18;
			break;
		case joaat("gauntlet3"):
			return 19;
			break;
		case joaat("ellie"):
			return 20;
			break;
		case joaat("defiler"):
			return 21;
			break;
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_882(int iParam0)//Position - 0x3629A
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		case joaat("cerberus2"):
			return 9;
			break;
		case joaat("cerberus3"):
			return 10;
			break;
		case joaat("brutus"):
			return 11;
			break;
		case joaat("brutus2"):
			return 12;
			break;
		case joaat("brutus3"):
			return 13;
			break;
		case joaat("zr380"):
			return 14;
			break;
		case joaat("zr3802"):
			return 15;
			break;
		case joaat("zr3803"):
			return 16;
			break;
		case joaat("scarab"):
			return 20;
			break;
		case joaat("scarab2"):
			return 21;
			break;
		case joaat("scarab3"):
			return 22;
			break;
		case joaat("imperator"):
			return 17;
			break;
		case joaat("imperator2"):
			return 18;
			break;
		case joaat("imperator3"):
			return 19;
			break;
		case joaat("impaler"):
			return 102;
			break;
		case joaat("ratloader2"):
			return 103;
			break;
		case joaat("glendale"):
			return 104;
			break;
		case joaat("slamvan"):
			return 105;
			break;
		case joaat("dominator"):
			return 106;
			break;
		case joaat("issi3"):
			return 107;
			break;
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_883(int iParam0)//Position - 0x363DE
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		case joaat("cerberus2"):
			return 1;
		case joaat("cerberus3"):
			return 2;
		case joaat("brutus"):
			return 3;
		case joaat("brutus2"):
			return 4;
		case joaat("brutus3"):
			return 5;
		case joaat("scarab"):
			return 6;
		case joaat("scarab2"):
			return 7;
		case joaat("scarab3"):
			return 8;
		case joaat("imperator"):
			return 9;
		case joaat("imperator2"):
			return 10;
		case joaat("imperator3"):
			return 11;
		case joaat("zr380"):
			return 12;
		case joaat("zr3802"):
			return 13;
		case joaat("zr3803"):
			return 14;
		case joaat("ratloader2"):
			return 15;
		case joaat("glendale"):
			return 16;
		case joaat("slamvan"):
			return 17;
		case joaat("dominator"):
			return 18;
		case joaat("impaler"):
			return 19;
		case joaat("issi3"):
			return 20;
		case joaat("gargoyle"):
			return 21;
		default:
	}
	return -1;
}

int func_884(int iParam0)//Position - 0x36640
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24718 /* Tunable: -781384755 */;
			break;
		case joaat("pounder2"):
			return Global_262145.f_24719 /* Tunable: 1813909003 */;
			break;
		case joaat("oppressor2"):
			return Global_262145.f_24720 /* Tunable: 246949104 */;
			break;
		case joaat("patriot2"):
			return Global_262145.f_24721 /* Tunable: -410593703 */;
			break;
		case joaat("blimp3"):
			return Global_262145.f_24722 /* Tunable: -121606550 */;
			break;
	}
	return 0;
}

int func_885(int iParam0)//Position - 0x366AF
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		case joaat("pounder2"):
			return 1;
			break;
		case joaat("oppressor2"):
			return 2;
			break;
		case joaat("pbus2"):
			return 3;
			break;
		case joaat("patriot2"):
			return 4;
			break;
		case joaat("blimp3"):
			return 5;
			break;
	}
	return -1;
}

int func_886(int iParam0)//Position - 0x367D2
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
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		default:
	}
	return -1;
}

int func_887(int iParam0)//Position - 0x3688A
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		case joaat("akula"):
			return 1;
			break;
		case joaat("riot2"):
			return 2;
			break;
		case joaat("stromberg"):
			return 3;
			break;
		case joaat("chernobog"):
			return 4;
			break;
		case joaat("barrage"):
			return 5;
			break;
		case joaat("khanjali"):
			return 6;
			break;
		case joaat("volatol"):
			return 7;
			break;
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_888(int iParam0)//Position - 0x3694F
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22740 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MICROLIGHT */;
		case joaat("rogue"):
			return Global_262145.f_22741 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ROGUE */;
		case joaat("alphaz1"):
			return Global_262145.f_22742 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ALPHAZ1 */;
		case joaat("havok"):
			return Global_262145.f_22743 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HAVOK */;
		case joaat("starling"):
			return Global_262145.f_22744 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_STARLING */;
		case joaat("molotok"):
			return Global_262145.f_22745 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOLOTOK */;
		case joaat("tula"):
			return Global_262145.f_22746 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_TULA */;
		case joaat("bombushka"):
			return Global_262145.f_22747 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_BOMBUSHKA */;
		case joaat("howard"):
			return Global_262145.f_22748 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HOWARD */;
		case joaat("mogul"):
			return Global_262145.f_22749 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOGUL */;
		case joaat("pyro"):
			return Global_262145.f_22750 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_PYRO */;
		case joaat("seabreeze"):
			return Global_262145.f_22751 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_SEABREEZE */;
		case joaat("nokota"):
			return Global_262145.f_22752 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_NOKOTA */;
		case joaat("hunter"):
			return Global_262145.f_22753 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HUNTER */;
		default:
	}
	return 0;
}

int func_889(int iParam0)//Position - 0x36A5F
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		case joaat("halftrack"):
			return 1;
		case joaat("trailersmall2"):
			return 2;
		case joaat("apc"):
			return 3;
		case joaat("tampa3"):
			return 5;
		case joaat("oppressor"):
			return 7;
		default:
	}
	return 3;
}

int func_890(int iParam0)//Position - 0x36AAB
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		case joaat("halftrack"):
			return 1;
			break;
		case joaat("trailersmall2"):
			return 2;
			break;
		case joaat("apc"):
			return 3;
			break;
		case joaat("tampa3"):
			return 4;
			break;
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_891(int iParam0)//Position - 0x36CCF
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_892(int iParam0)//Position - 0x36D89
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_893(int iParam0)//Position - 0x36E00
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		case joaat("dune5"):
			return 0;
		case joaat("wastelander"):
			return 1;
		case joaat("blazer5"):
			return 2;
		case joaat("phantom2"):
			return 3;
		case joaat("voltic2"):
			return 4;
		case joaat("technical2"):
			return 5;
		case joaat("boxville5"):
			return 6;
		case joaat("ruiner2"):
			return 7;
		default:
	}
	return 0;
}

int func_894(var uParam0)//Position - 0x36E6A
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		case joaat("boxville5"):
			return 1;
			break;
		case joaat("wastelander"):
			return 2;
			break;
		case joaat("phantom2"):
			return 3;
			break;
		case joaat("voltic2"):
			return 4;
			break;
		case joaat("dune4"):
			return 5;
			break;
		case joaat("dune5"):
			return 5;
			break;
		case joaat("ruiner2"):
			return 6;
			break;
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_895(int iParam0)//Position - 0x36EF3
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_896(int iParam0)//Position - 0x3921A
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		case joaat("stinger"):
			return 1;
		case joaat("jb700"):
			return 2;
		case joaat("cheetah"):
			return 3;
		case joaat("entityxf"):
			return 4;
		case joaat("adder"):
			return 5;
		case joaat("monroe"):
			return 6;
		case joaat("cogcabrio"):
			return 7;
		case joaat("shamal"):
			return 10;
		case joaat("stunt"):
			return 11;
		case joaat("cuban800"):
			return 12;
		case joaat("duster"):
			return 13;
		case joaat("luxor"):
			return 14;
		case joaat("frogger"):
			return 15;
		case joaat("maverick"):
			return 16;
		case joaat("rhino"):
			return 17;
		case joaat("titan"):
			return 18;
		case joaat("cargobob"):
			return 19;
		case joaat("buzzard"):
			return 20;
		case joaat("crusader"):
			return 21;
		case joaat("barracks"):
			return 22;
		case joaat("marquis"):
			return 24;
		case joaat("jetmax"):
			return 25;
		case joaat("squalo"):
			return 27;
		case joaat("tropic"):
			return 29;
		case joaat("seashark"):
			return 30;
		case joaat("submersible"):
			return 31;
		case joaat("suntrap"):
			return 32;
		case joaat("tug"):
			return 258;
		case joaat("bmx"):
			return 33;
		case joaat("scorcher"):
			return 34;
		case joaat("tribike"):
			return 35;
		case joaat("tribike2"):
			return 36;
		case joaat("tribike3"):
			return 37;
		case joaat("cruiser"):
			return 38;
		case joaat("schwarzer"):
			return 39;
		case joaat("zion"):
			return 40;
		case joaat("gauntlet"):
			return 41;
		case joaat("vigero"):
			return 42;
		case joaat("issi2"):
			return 43;
		case joaat("infernus"):
			return 44;
		case joaat("surano"):
			return 45;
		case joaat("vacca"):
			return 46;
		case joaat("ninef"):
			return 47;
		case joaat("comet2"):
			return 48;
		case joaat("banshee"):
			return 49;
		case joaat("feltzer2"):
			return 50;
		case joaat("bfinjection"):
			return 51;
		case joaat("sandking"):
			return 52;
		case joaat("fugitive"):
			return 53;
		case joaat("dilettante"):
			return 54;
		case joaat("superd"):
			return 55;
		case joaat("exemplar"):
			return 56;
		case joaat("baller2"):
			return 57;
		case joaat("cavalcade"):
			return 58;
		case joaat("rocoto"):
			return 59;
		case joaat("felon"):
			return 60;
		case joaat("oracle2"):
			return 61;
		case joaat("bati"):
			return 62;
		case joaat("akuma"):
			return 63;
		case joaat("ruffian"):
			return 64;
		case joaat("vader"):
			return 65;
		case joaat("blazer"):
			return 66;
		case joaat("pcj"):
			return 67;
		case joaat("sanchez"):
			return 68;
		case joaat("faggio2"):
			return 69;
		case joaat("airbus"):
			return 82;
		case joaat("annihilator"):
			return 78;
		case joaat("bati2"):
			return 94;
		case joaat("bison"):
			return 89;
		case joaat("bullet"):
			return 70;
		case joaat("bus"):
			return 83;
		case joaat("carbonizzare"):
			return 71;
		case joaat("coach"):
			return 84;
		case joaat("coquette"):
			return 72;
		case joaat("double"):
			return 90;
		case joaat("dump"):
			return 81;
		case joaat("felon2"):
			return 91;
		case joaat("hexer"):
			return 92;
		case joaat("journey"):
			return 85;
		case joaat("mammatus"):
			return 79;
		case joaat("mule"):
			return 86;
		case joaat("ninef2"):
			return 73;
		case joaat("rapidgt"):
			return 74;
		case joaat("rapidgt2"):
			return 75;
		case joaat("rentalbus"):
			return 87;
		case joaat("stingergt"):
			return 76;
		case joaat("stretch"):
			return 88;
		case joaat("velum"):
			return 80;
		case joaat("voltic"):
			return 77;
		case joaat("zion2"):
			return 93;
		case joaat("elegy2"):
			return 95;
		case joaat("khamelion"):
			return 96;
		case joaat("hotknife"):
			return 97;
		case joaat("carbonrs"):
			return 98;
		case joaat("bodhi2"):
			return 103;
		case joaat("dune"):
			return 104;
		case joaat("rebel"):
			return 105;
		case joaat("sadler"):
			return 106;
		case joaat("sanchez2"):
			return 107;
		case joaat("sandking2"):
			return 108;
		case joaat("asea"):
			return 128;
		case joaat("asterope"):
			return 129;
		case joaat("bobcatxl"):
			return 130;
		case joaat("cavalcade2"):
			return 131;
		case joaat("granger"):
			return 132;
		case joaat("ingot"):
			return 133;
		case joaat("intruder"):
			return 134;
		case joaat("minivan"):
			return 135;
		case joaat("premier"):
			return 136;
		case joaat("radi"):
			return 137;
		case joaat("rancherxl"):
			return 138;
		case joaat("ratloader"):
			return 139;
		case joaat("stanier"):
			return 140;
		case joaat("stratum"):
			return 141;
		case joaat("washington"):
			return 142;
		case joaat("dominator"):
			return 122;
		case joaat("f620"):
			return 123;
		case joaat("fusilade"):
			return 124;
		case joaat("penumbra"):
			return 125;
		case joaat("sentinel"):
			return 126;
		case joaat("sentinel2"):
			return 127;
		case joaat("picador"):
			return 150;
		case joaat("regina"):
			return 151;
		case joaat("surfer"):
			return 152;
		case joaat("youga"):
			return 153;
		case joaat("blazer3"):
			return 154;
		case joaat("rebel2"):
			return 155;
		case joaat("primo"):
			return 156;
		case joaat("buffalo"):
			return 157;
		case joaat("buffalo2"):
			return 158;
		case joaat("tailgater"):
			return 159;
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("roosevelt") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("roosevelt2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == Global_75448)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == __LIB_0__::func_704())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	else if (iParam0 == joaat("comet7"))
	{
		return 554;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		return 555;
	}
	else if (iParam0 == joaat("reever"))
	{
		return 556;
	}
	else if (iParam0 == joaat("baller7"))
	{
		return 557;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		return 558;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		return 559;
	}
	else if (iParam0 == joaat("astron"))
	{
		return 560;
	}
	else if (iParam0 == joaat("deity"))
	{
		return 561;
	}
	else if (iParam0 == joaat("zeno"))
	{
		return 562;
	}
	else if (iParam0 == joaat("champion"))
	{
		return 563;
	}
	else if (iParam0 == joaat("ignus"))
	{
		return 564;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		return 565;
	}
	else if (iParam0 == joaat("granger2"))
	{
		return 566;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		return 567;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		return 568;
	}
	else if (iParam0 == joaat("tenf"))
	{
		return 569;
	}
	return -1;
}

int func_897(int iParam0)//Position - 0x3B8DB
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_898(int iParam0)//Position - 0x3B8FE
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_899(int iParam0, bool bParam1)//Position - 0x3B927
{
	if (bParam1)
	{
		return Global_1659905;
	}
	if (iParam0 != __LIB_0__::func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_96;
	}
	return 0;
}

int func_900()//Position - 0x3B959
{
	return Global_1057406;
}

void func_901()//Position - 0x3B98A
{
	Global_1837295 = 0;
	Global_1837296 = 0;
}

int func_902()//Position - 0x3B99C
{
	return Global_1057409;
}

bool func_903(int iParam0)//Position - 0x3B9A8
{
	return Global_2689235[iParam0 /*453*/].f_119 == 8;
}

bool func_904(int iParam0)//Position - 0x3B9BE
{
	return Global_2689235[iParam0 /*453*/].f_119 == 6;
}

bool func_905(int iParam0)//Position - 0x3B9D3
{
	return Global_2689235[iParam0 /*453*/].f_119 == 5;
}

int func_906(int iParam0)//Position - 0x3BA0C
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5032[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_907(int iParam0)//Position - 0x3BA78
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5023[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_908()//Position - 0x3BAC0
{
	Global_2714762.f_669.f_13 = 1;
}

var func_909()//Position - 0x3BAD2
{
	return Global_2714762.f_669.f_13;
}

var func_910()//Position - 0x3BAE3
{
	return BitTest(Global_2714762.f_669.f_1, 0);
}

var func_911(int iParam0)//Position - 0x3BB56
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 14);
}

bool func_912()//Position - 0x3BB6E
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 2);
}

void func_913(char* sParam0, int iParam1, int iParam2)//Position - 0x3BB85
{
	switch (iParam1)
	{
		case 11:
			StringCopy(sParam0, "MG_GOLF_", 32);
			break;
		case 13:
			StringCopy(sParam0, "MG_RANGE_", 32);
			break;
		case 12:
			StringCopy(sParam0, "MG_TENNIS_", 32);
			break;
		case 15:
			StringCopy(sParam0, "MG_ARM_", 32);
			break;
		case 14:
			StringCopy(sParam0, "MG_DARTS_", 32);
			break;
		case 122:
			StringCopy(sParam0, "MG_PILOT_", 32);
			break;
		case 5:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
		case 148:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

void func_914(char* sParam0, int iParam1, int iParam2)//Position - 0x3BC28
{
	switch (iParam1)
	{
		case 32:
			StringCopy(sParam0, "RACE_TO_POINT_", 32);
			break;
		case 25:
			StringCopy(sParam0, "PROSTITUTES_", 32);
			break;
		case 19:
			StringCopy(sParam0, "IMPORT_EXPORT_", 32);
			break;
		case 30:
			StringCopy(sParam0, "HOLD_UPS_", 32);
			break;
		case 31:
			StringCopy(sParam0, "CREATE_DROP_", 32);
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

int func_915(int iParam0, int iParam1, bool bParam2)//Position - 0x3C004
{
	var uVar0;
	uVar0 = BitTest(iParam0, iParam1);
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

int func_916(var uParam0)//Position - 0x3C3EF
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			__LIB_0__::func_712(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_917(bool bParam0)//Position - 0x3C7DC
{
	if (Global_4538805 != bParam0)
	{
		Global_4538805 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4538806, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
		}
		else
		{
			StringCopy(&Global_4538806, "", 64);
		}
	}
}

bool func_918(int iParam0)//Position - 0x3C80F
{
	return iParam0 == 2;
}

bool func_919()//Position - 0x3C81B
{
	return Global_2714762.f_43.f_57;
}

void func_920()//Position - 0x3C8F3
{
	Global_2727095 = 1;
}

void func_921(int iParam0)//Position - 0x3C900
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_922()//Position - 0x3C91B
{
	return Global_1574632.f_20;
}

void func_923(var uParam0, bool bParam1)//Position - 0x3C929
{
	if (bParam1)
	{
		__LIB_0__::func_712(&(uParam0->f_1), 1024);
	}
	else
	{
		__LIB_0__::func_711(&(uParam0->f_1), 1024);
	}
}

void func_924(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3CA18
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		__LIB_0__::func_712(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		__LIB_0__::func_712(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			__LIB_0__::func_712(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		__LIB_0__::func_712(&(uParam0->f_1), 8192);
	}
}

int func_925(var uParam0)//Position - 0x3CA92
{
	return uParam0->f_25;
}

void func_926(var uParam0, float fParam1)//Position - 0x3CD23
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_927(var uParam0)//Position - 0x3D3C5
{
	int iVar0;
	Local_45.f_66++;
	iVar0 = Local_45.f_66;
	Local_45.f_9[iVar0 /*7*/].f_3 = -1f;
	Local_45.f_9[iVar0 /*7*/].f_4 = -1f;
	Local_45.f_9[iVar0 /*7*/].f_5 = 0;
	Local_45.f_9[iVar0 /*7*/].f_6 = 0;
	Local_45.f_9[iVar0 /*7*/] = iVar0;
	Local_45.f_9[iVar0 /*7*/].f_1 = uParam0;
	return iVar0;
}

void func_928()//Position - 0x3D421
{
	int iVar0;
	Local_45.f_66 = -1;
	Local_45.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_45.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_45.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_45.f_9[iVar0 /*7*/].f_5 = 0;
		Local_45.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_45.f_5 = 0;
	Local_45.f_5.f_1 = -1f;
	Local_45.f_5.f_2 = 0;
	Local_45.f_0 = 0;
	Local_45.f_1 = 0;
}

char* func_929(int iParam0, bool bParam1)//Position - 0x3D4F6
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return "ARM_WRESTLING_WIN_01_MASTER";
			case 2:
				return "ARM_WRESTLING_WIN_02_MASTER";
			case 3:
				return "ARM_WRESTLING_WIN_03_MASTER";
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "ARM_WRESTLING_LOSE_01_MASTER";
			case 2:
				return "ARM_WRESTLING_LOSE_02_MASTER";
			case 3:
				return "ARM_WRESTLING_LOSE_03_MASTER";
			}
		default:
	}
	return "";
}

void func_930()//Position - 0x3D6A4
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Lose", 0, true);
}

char* func_931(int iParam0)//Position - 0x3DA7B
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_932()//Position - 0x3DAEA
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win", 0, true);
}

int func_933(var uParam0)//Position - 0x3DB0F
{
	if (uParam0->f_25 == 14)
	{
		return 0;
	}
	return (*uParam0)[uParam0->f_25];
}

void func_934()//Position - 0x3DE74
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 23);
}

void func_935()//Position - 0x3DE91
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 12);
}

void func_936()//Position - 0x3DEAE
{
	Global_1922955.f_4 = 1;
}

Vector3 func_937()//Position - 0x3DEBD
{
	return Global_2714762.f_43.f_575;
}

int func_938()//Position - 0x3DED0
{
	if ((Global_2714762.f_43.f_575 != 0f || Global_2714762.f_43.f_575.f_1 != 0f) || Global_2714762.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_939()//Position - 0x3DF11
{
	return Global_2714762.f_43.f_578;
}

struct<6> func_940()//Position - 0x3DF24
{
	return Global_2714762.f_43.f_12;
}

var func_941()//Position - 0x3DF36
{
	return Global_2714762.f_43.f_59;
}

var func_942()//Position - 0x3DF46
{
	return Global_2714762.f_43.f_55;
}

void func_943(int iParam0)//Position - 0x3DF56
{
	Global_2715699.f_6321 = iParam0;
}

void func_944()//Position - 0x3DF67
{
	Global_1922955.f_3 = 1;
}

bool func_945()//Position - 0x3DF76
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 24);
}

void func_946()//Position - 0x3DF90
{
	Global_1922955.f_7 = 1;
}

void func_947(var uParam0)//Position - 0x3DF9F
{
	Global_1922955.f_10 = uParam0;
}

void func_948()//Position - 0x3E02F
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 9);
}

var func_949(int iParam0)//Position - 0x3E04C
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 9);
}

void func_950()//Position - 0x3E064
{
	Global_1922955.f_7 = 0;
}

void func_951()//Position - 0x3E073
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_5 = 0;
}

void func_952()//Position - 0x3E089
{
	Global_1922955.f_10 = -1;
}

void func_953()//Position - 0x3E098
{
	Global_1922955.f_4 = 0;
}

void func_954()//Position - 0x3E0A7
{
	Global_1922955.f_3 = 0;
}

void func_955()//Position - 0x3E0B6
{
	Global_2715699.f_2846.f_2 = 1;
}

int func_956(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3E1E7
{
	int iVar0;
	int iVar1;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = (uParam0->f_123 - 1);
	if (iVar0 >= 0 && iVar0 < 8)
	{
		iVar1 = uParam0->f_2[iVar0 /*15*/].f_14;
		if (iVar1 < 4)
		{
			uParam0->f_2[iVar0 /*15*/].f_3[iVar1 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*15*/].f_3[iVar1 /*2*/].f_1 = iParam2;
			if (iParam3 == 1)
			{
				MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), iVar1);
			}
			uParam0->f_2[iVar0 /*15*/].f_14++;
			return 1;
		}
	}
	return 0;
}

int func_957(var uParam0, int iParam1)//Position - 0x3E41E
{
	if (iParam1 >= 14)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_958(int* iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x3E8D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::IS_TIME_MORE_THAN(iParam0->f_24[iVar0], iParam1) || iVar0 == 7)
		{
			*uParam2 = iParam0->f_24[iVar0];
			*uParam3 = iParam0->f_5[iVar0];
			return;
		}
		iVar0++;
	}
}

float func_959(var uParam0)//Position - 0x3E95A
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::ABSF((uParam0->f_3 - uParam0->f_7));
	fVar1 = MISC::ABSF((uParam0->f_5 - uParam0->f_9));
	if (fVar0 > fVar1 || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return SYSTEM::SQRT(fVar0);
	}
	return SYSTEM::SQRT(fVar1);
}

void func_960(var uParam0, bool bParam1)//Position - 0x3E9D2
{
	uParam0->f_22++;
	if (uParam0->f_22 >= 15)
	{
		uParam0->f_22 = 0;
	}
	if (bParam1)
	{
		uParam0->f_2[uParam0->f_22] = 0f;
	}
}

void func_961(var uParam0, int iParam1, float fParam2)//Position - 0x3EA02
{
	if (iParam1 < 0 || iParam1 >= 15)
	{
		return;
	}
	uParam0->f_2[iParam1] = (uParam0->f_2[iParam1] + fParam2);
}

float func_962(int* iParam0)//Position - 0x3EA6E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!iParam0->f_24[((8 - iVar0) - 1)] == 0)
		{
			return iParam0->f_5[((8 - iVar0) - 1)];
		}
		iVar0++;
	}
	return 0f;
}

void func_963(var uParam0)//Position - 0x3EAC5
{
	uParam0->f_26.f_1 = 0;
}

int func_964()//Position - 0x3EC76
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

int func_965(int iParam0)//Position - 0x3EDE8
{
	switch (iParam0)
	{
		case 51:
		case 52:
		case 54:
		case 40:
		case 41:
		case 53:
		case 43:
		case 44:
		case 24:
		case 45:
		case 14:
		case 15:
		case 16:
		case 17:
		case 20:
		case 21:
		case 18:
		case 19:
		case 31:
		case 32:
		case 33:
		case 36:
		case 37:
		case 38:
		case 22:
		case 39:
		case 47:
		case 48:
		case 49:
		case 50:
		case 23:
		case 58:
		case 42:
		case 28:
		case 25:
		case 26:
		case 61:
		case 46:
		case 55:
		case 27:
		case 56:
		case 11:
		case 34:
		case 35:
		case 62:
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
		case 84:
		case 105:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 1;
		default:
	}
	return 0;
}

int func_966(int iParam0)//Position - 0x3F283
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		default:
	}
	return 0;
}

void func_967(var uParam0)//Position - 0x3F47F
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_968(int iParam0)//Position - 0x3F4FE
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

int func_969()//Position - 0x3F631
{
	return 21;
}

int func_970(int iParam0)//Position - 0x3F63B
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

int func_971(int iParam0, int iParam1, int iParam2)//Position - 0x3FB81
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!__LIB_0__::func_610(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_972()//Position - 0x3FC2D
{
	if (__LIB_0__::func_493())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

int func_973()//Position - 0x400B0
{
	return __LIB_0__::func_699(Global_4718592.f_116524);
}

int func_974()//Position - 0x400C6
{
	return __LIB_0__::func_247(Global_4718592.f_116524);
}

void func_975(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x40368
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
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_976(var uParam0, int iParam1)//Position - 0x40709
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_977(int* iParam0, bool bParam1)//Position - 0x4076E
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (BitTest(*iParam0, 4))
	{
	}
}

int func_978(var uParam0, int iParam1)//Position - 0x40797
{
	if (iParam1 == 7)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_979(var uParam0, int iParam1, bool bParam2)//Position - 0x4092F
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_11), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_11), iParam1);
	}
}

void func_980(var uParam0)//Position - 0x40953
{
	uParam0->f_12 = uParam0->f_11;
	uParam0->f_11 = 0;
}

void func_981(var uParam0, var uParam1)//Position - 0x40980
{
	uParam0->f_6 = uParam1;
}

void func_982(var uParam0, var uParam1)//Position - 0x4098E
{
	uParam0->f_5 = uParam1;
}

void func_983(var uParam0, var uParam1)//Position - 0x409B4
{
	uParam0->f_4 = uParam1;
}

void func_984(var uParam0, var uParam1)//Position - 0x409C2
{
	uParam0->f_3 = uParam1;
}

void func_985(var uParam0)//Position - 0x40AA5
{
	uParam0->f_7 = uParam0->f_3;
	uParam0->f_8 = uParam0->f_4;
	uParam0->f_9 = uParam0->f_5;
	uParam0->f_10 = uParam0->f_6;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0f;
}

void func_986(int* iParam0, int iParam1, bool bParam2)//Position - 0x40B12
{
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_18), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_18), iParam1);
	}
}

void func_987(var uParam0, float fParam1)//Position - 0x40B36
{
	uParam0->f_487 = fParam1;
}

bool func_988(var uParam0, int iParam1)//Position - 0x40B45
{
	return uParam0->f_25 == iParam1;
}

void func_989()//Position - 0x40CD6
{
	struct<13> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_1581361.f_1[iVar1 /*13*/] = { Var0 };
		StringCopy(&(Global_1581361.f_418[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&Global_1581361, iVar1);
		iVar1++;
	}
}

void func_990(var uParam0, int iParam1, int iParam2)//Position - 0x40DE3
{
	uParam0->f_16 = iParam1;
	uParam0->f_17 = iParam2;
}

float func_991(var* uParam0)//Position - 0x40DF7
{
	return uParam0->f_9;
}

float func_992(int iParam0, float fParam1)//Position - 0x40E03
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 8:
			return (fParam1 - 180f);
		default:
	}
	return fParam1;
}

void func_993(var uParam0)//Position - 0x40E31
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		uParam0->f_2[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_22 = 0;
	Global_2703735.f_3620.f_37 = 0;
}

void func_994(int iParam0)//Position - 0x40E85
{
	if (Global_2825122.f_3.f_173[0] != iParam0)
	{
		Global_2825122.f_3.f_173[0] = iParam0;
	}
}

int func_995(int iParam0)//Position - 0x40F5E
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_996(var uParam0)//Position - 0x414F1
{
	return uParam0->f_6;
}

Vector3 func_997(var uParam0)//Position - 0x414FF
{
	return uParam0->f_3;
}

Vector3 func_998(bool bParam0, struct<3> Param1, struct<3> Param2)//Position - 0x4150D
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_999(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x41531
{
	if (iParam1 >= 14)
	{
		return;
	}
	if (iParam3 && !CAM::DOES_CAM_EXIST(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

}